// POV-Ray scripts for LDraw models and scenes
// Copyright (C) 2019  Michael Horvath
// 
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// 
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
// 
// Note that resolutions greater than 1024x1024px will cause some mobile browsers to not show the panoramas.
// +kfi0 +kff3 +ki0 +kf1 +kc
// +am3 +r9 +a0.002 +ac0.99
// +am = Sampling_Method
// +r = Antialias_Depth
// +a = Antialias_Threshold
// +j = jitter
// +KFI0 +KFF5 +KC +KI0 +KF0
// +KFI5 +KFF5 +KC
// +K0 +KC

#version 3.7;

global_settings {assumed_gamma 1}


// -------------------------------------------------------------
// General settings

#declare Use_Radiosity	= 1;
#declare Use_Floor		= 1;			// note that LDView has its own floor setting that may conflict with this one
#declare Use_Background	= 0;			// note that LDView has its own floor setting that may conflict with this one
#declare Use_Sky		= 1;			// sky sphere
#declare Use_LensFlare	= 0;			// should only be enabled when the sun is actually visible
#declare LDXSkipLight1	= true;
#declare LDXSkipLight2	= true;
#declare LDXSkipLight3	= true;
#declare LDXSkipCamera	= true;
#declare Camera_Mode	= 0;

#include "stdinc.inc"
#include "CIE.inc"						// http://www.ignorancia.org/en/index.php?page=Lightsys
#include "lightsys.inc"					// http://www.ignorancia.org/en/index.php?page=Lightsys
#include "lightsys_constants.inc"		// http://www.ignorancia.org/en/index.php?page=Lightsys
#include "sunpos.inc"

#declare Meters			= 60;			// 60 units = 1 meter.
#declare EarthRadius	= 6375000 * Meters;
#declare SunRadius		= 695700000 * Meters;
#declare SunDistance	= 1.4960e+11 * Meters;

#declare light_lumens	= 2;						// float
#declare light_temp		= Daylight(6100);			// float
#declare light_color	= Light_Color(light_temp,light_lumens);
#declare lamp_lumens	= 1;						// float
#declare lamp_temp		= Daylight(6500);			// float
#declare lamp_color		= Light_Color(light_temp,light_lumens);

#declare Source_Distance	= 10000 * Meters;		// if this is too big, the sun sphere disappears
//#declare Source_Distance	= SunDistance;
#declare Source_Ratio		= Source_Distance/SunDistance;
//#declare Source_Radius		= SunRadius * Source_Ratio;
#declare Source_PointAt		= +y * EarthRadius * Source_Ratio;
#declare Source_Location	= vnormalize(SunPos(2016, 9, 6, 11, 0, 0, 40, 0) * <+1,-1,+1,>) * Source_Distance + Source_PointAt;
#declare Source_Radius		= tand(4/15) * Source_Distance;


// -------------------------------------------------------------
// Global settings and radiosity

#if (Use_Radiosity = 1)
	#include "rad_def.inc"
	global_settings
	{
		assumed_gamma	1
		adc_bailout	0.005
//		max_trace_level	4
		ambient_light	0
		radiosity
		{
//			Rad_Settings(Radiosity_Final,false,false)
			Rad_Settings(Radiosity_Normal,false,false)
		}
	}
#else
	global_settings
	{
		assumed_gamma	1
		ambient_light	1
	}
#end


// -------------------------------------------------------------
// Sun

// Sun object
#local Source_Object = sphere
{
	<0,0,0>, Source_Radius
	texture
	{
		pigment {color srgb light_color}
		finish
		{
			emission	1
			ambient		0
			diffuse		0
		}
	}
}

// Sunlight
light_source
{
	Source_Location
	rgb light_color
	parallel
	point_at <0,0,0>
}

// Sun object
sphere
{
	Source_Location, Source_Radius
	texture
	{
		pigment {color srgb light_color}
		finish
		{
			emission	1
			ambient		0
			diffuse		0
		}
	}
	no_shadow
}


// -------------------------------------------------------------
// Sky

#if (Use_Sky = 1)
	#include "SkySim_mod.inc"			// http://news.povray.org/povray.binaries.scene-files/thread/%3C51b1c936%40news.povray.org%3E/?mtop=387744
	SkySim(Source_Location, -y, 2, 1e-5)
#end


// -------------------------------------------------------------
// Floor

#if (Use_Floor = 1)
	// Flat Checkered Floor
	plane
	{
		-y, 0
		texture
		{
			pigment
			{
				checker
				pigment {color srgb <067,084,029>/255}
				pigment {color srgb <040,066,018>/255}
			}
//			finish {}
			scale 640
		}
	}
#end


// -------------------------------------------------------------
// Camera

#switch (Camera_Mode)
	// cube map
	#case (0)
		#declare Camera_Up		= -y*2;
		#declare Camera_Right		= +z*2;
		#declare Camera_Direction	= -x;
		#declare Camera_Location	= <0,0,0>;
		#declare Camera_LookAt		= Camera_Location + Camera_Direction;
		#ifndef (view_direction)
			#declare view_direction = frame_number;
		#end
		#switch (view_direction)
			#case (0)
				#declare Camera_Rotate	= <0,000,0,>;
			#break
			#case (1)
				#declare Camera_Rotate	= <0,090,0,>;
			#break
			#case (2)
				#declare Camera_Rotate	= <0,180,0,>;
			#break
			#case (3)
				#declare Camera_Rotate	= <0,270,0,>;
			#break
			#case (4)
				#declare Camera_Rotate	= <0,0,090,>;
			#break
			#case (5)
				#declare Camera_Rotate	= <0,0,270,>;
			#break
		#end
		#declare Camera_Transform = transform
		{
			rotate		Camera_Rotate
		//	matrix <0,0,-1,0,1,0,1,0,0,0,-88,-640>		// front entrance, lens flare yes
		//	matrix <0,0,-1,0,1,0,1,0,0,0,-88,100>		// courtyard, lens flare no
			matrix <0,0,-1,0,1,0,1,0,0,0,-88,-180>		// gateway, lens flare no
		//	matrix <0,0,-1,0,1,0,1,0,0,-280,-88,-180>	// storeroom, lens flare no
		//	matrix <0,0,-1,0,1,0,1,0,0,280,-312,140>	// lounge, lens flare no
		//	matrix <0,0,-1,0,1,0,1,0,0,200,-312,-140>	// barracks east, lens flare no
		//	matrix <0,0,-1,0,1,0,1,0,0,-200,-312,-140>	// barracks west, lens flare no
		//	matrix <0,0,-1,0,1,0,1,0,0,-360,-312,140>	// clinic, lens flare no
		//	matrix <0,0,-1,0,1,0,1,0,0,0,-88,640>		// rear entrance, lens flare yes
		//	matrix <0,0,-1,0,1,0,1,0,0,0,-728,0>		// overhead view, lens flare yes
		//	matrix <0,0,-1,0,1,0,1,0,0,400,-184,-180>	// stairwell, lens flare no
		//	matrix <0,0,-1,0,1,0,1,0,0,-800,-88,0>		// outside west, lens flare yes
		//	matrix <0,0,-1,0,1,0,1,0,0,800,-88,0>		// outside east, lens flare yes
		}
		camera
		{
			up			Camera_Up
			right		Camera_Right
			location	Camera_Location
			direction	Camera_Direction
			transform {Camera_Transform}
		}
	#break
	// spherical
	#case (1)
		#declare Camera_Up		= +y;
		#declare Camera_Right		= -z;
		#declare Camera_Direction	= -x;
		#declare Camera_Location	= <0,0,0>;
		#declare Camera_LookAt		= Camera_Location + Camera_Direction;
		#declare Camera_Transform = transform
		{
		//	matrix <0,0,-1,0,1,0,1,0,0,0,-88,-640>		// front entrance, lens flare yes
		//	matrix <0,0,-1,0,1,0,1,0,0,0,-88,100>		// courtyard, lens flare no
		//	matrix <0,0,-1,0,1,0,1,0,0,0,-88,-180>		// gateway, lens flare no
		//	matrix <0,0,-1,0,1,0,1,0,0,-280,-88,-180>	// storeroom, lens flare no
		//	matrix <0,0,-1,0,1,0,1,0,0,280,-312,140>	// lounge, lens flare no
		//	matrix <0,0,-1,0,1,0,1,0,0,200,-312,-140>	// barracks east, lens flare no
		//	matrix <0,0,-1,0,1,0,1,0,0,-200,-312,-140>	// barracks west, lens flare no
		//	matrix <0,0,-1,0,1,0,1,0,0,-360,-312,140>	// clinic, lens flare no
		//	matrix <0,0,-1,0,1,0,1,0,0,0,-88,640>		// rear entrance, lens flare yes
		//	matrix <0,0,-1,0,1,0,1,0,0,0,-728,0>		// overhead view, lens flare yes
			matrix <0,0,-1,0,1,0,1,0,0,400,-184,-180>	// stairwell, lens flare no
		//	matrix <0,0,-1,0,1,0,1,0,0,-800,-88,0>		// outside west, lens flare yes
		//	matrix <0,0,-1,0,1,0,1,0,0,800,-88,0>		// outside east, lens flare yes
		}
		camera
		{
			spherical
			angle		360 180
			sky		Camera_Up
			up		Camera_Up
			right		Camera_Right
			location	Camera_Location
			direction	Camera_Direction
			transform {Camera_Transform}
		}
	#break
#end


// -------------------------------------------------------------
// Lens flare

#if (Use_LensFlare = 1)
	#declare camera_off		= true;
	#declare effect_scale		= 1;
	#declare camera_location	= vtransform(Camera_Location, Camera_Transform);
	#declare camera_look_at		= vtransform(Camera_LookAt, Camera_Transform);
	#declare effect_location	= Source_Location;
	#include "Lens_Mod_New.inc"			// http://www.oocities.org/ccolefax/lenseffects.html
#end


// -------------------------------------------------------------
// Models


// These need to be manually commented out in the model file.
#declare LDX_light_dot_dat = light_source
{
	0
	rgb lamp_color
	fade_distance 48
	fade_power 1
}
#declare LDX_camera_dot_dat = union {}

#include "ldv_cubemap_carriage_house_new_lgeo_y.pov"
