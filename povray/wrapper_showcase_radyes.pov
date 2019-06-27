// This work is licensed under the Creative Commons Attribution-Share Alike 4.0 
// Unported License. To view a copy of this license, visit 
// https://creativecommons.org/licenses/by-sa/4.0/ or send a letter to Creative 
// Commons, 171 Second Street, Suite 300, San Francisco, California, 94105, USA.
// 
// doesn't work yet because of Darats' LGEO arts
// +kfi0 +kff3 +ki0 +kf1 +kc
// +am3 +r9 +a0.002 +ac0.99
// +am = Sampling_Method
// +r = Antialias_Depth
// +a = Antialias_Threshold
// +j = jitter

#version 3.7;					// LDView only properly supports POV-Ray 3.6


// -------------------------------------------------------------
// General settings

#declare Use_Radiosity	= 1;
#declare Use_Floor	= 0;			// note that LDView has its own floor setting that may conflict with this one
#declare Use_Background	= 0;			// note that LDView has its own floor setting that may conflict with this one
#declare LDXSkipLight1	= true;
#declare LDXSkipLight2	= true;
#declare LDXSkipLight3	= true;
//#declare LDXSkipCamera	= true;

#include "stdinc.inc"
#include "CIE.inc"			// http://www.ignorancia.org/en/index.php?page=Lightsys
#include "lightsys.inc"			// http://www.ignorancia.org/en/index.php?page=Lightsys
#include "lightsys_constants.inc"	// http://www.ignorancia.org/en/index.php?page=Lightsys


#if (Use_Radiosity = 1)
	#declare light_lumens		= 2;					// float
#else
	#declare light_lumens		= 2;					// float
#end
#declare torus_minor		= 1600;
#declare torus_major		= 6400;
#declare light_temp		= Daylight(6500);			// float
#declare light_color		= Light_Color(light_temp,light_lumens);
#declare light_distance		= 3200;
//#declare light_color		= 1;
#declare light_location		= vrotate(<0,0,-light_distance>, <-60,-120,+00>);


// -------------------------------------------------------------
// Background

#if (Use_Background = 1)
//	background {color rgb <242,243,242>/255}		// same color as lg_white
	background {color rgb 1}
#end


// -------------------------------------------------------------
// Global settings and radiosity

#if (Use_Radiosity = 1)
	#include "rad_def.inc"
	global_settings
	{
		assumed_gamma	1		// 2.2 if using regular non-LGEO parts
		adc_bailout	0.005
//		max_trace_level	8
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
		assumed_gamma	1		// 2.2 if using regular non-LGEO parts
//		max_trace_level 8
		ambient_light	1
	}
#end


// -------------------------------------------------------------
// Lighting

light_source
{
	light_location
	color rgb light_color
	parallel
	fade_distance light_distance
	fade_power 1
	rotate y * 90
}

#if (Use_Radiosity = 0)
// Light
light_source
{
	light_location
	color rgb light_color
	parallel
	fade_distance light_distance
	fade_power 1
	shadowless
	rotate y * 90
	rotate y * 90
}
#end


// -------------------------------------------------------------
// Floor

#if (Use_Floor = 1)
object
{
	plane { y, 0 hollow }
//	material { L3Color15 }
//	material { L3Color7 }
//	material { LDXColor15 }
//	material { LDXColor7 }
	material
	{
		texture
		{
			pigment { color rgb <0.8,0.8,0.8> }
//			finish { ambient 0.4 diffuse 0.4 }
		}
	}
}
#end


// -------------------------------------------------------------
// Backdrop
/*
union
{
	object
	{
		torus
		{
			torus_major, torus_minor
			clipped_by
			{
				plane {-y, 0}
			}
			translate -y * torus_minor
		}
		clipped_by
		{
			cylinder {0, -y*torus_minor, torus_major inverse}
		}
	}
	cylinder {0, -y*torus_major, torus_major+torus_minor open}
	texture
	{
		pigment { color rgb <LDXFloorR,LDXFloorG,LDXFloorB> }
		finish { ambient LDXFloorAmb diffuse LDXFloorDif }
	}
}
*/

// -------------------------------------------------------------
// Models

//#include "ldv_nice_androbot_mech_new.pov"
//#include "ldv_nice_carriage_house_new.pov"
//#include "ldv_nice_dune_rover_new.pov"
//#include "ldv_nice_high_tech_lab_new.pov"
//#include "ldv_nice_manned_mech_new.pov"
//#include "ldv_nice_red_rock_racer_new.pov"
//#include "ldv_nice_salt_flats_speeder_new.pov"
//#include "ldv_nice_small_shuttle_new.pov"
#include "ldv_nice_yellow_castle_new.pov"
