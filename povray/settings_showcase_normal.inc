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
// +kfi0 +kff3 +ki0 +kf1 +kc
// +am3 +r9 +a0.002 +ac0.99
// +am = Sampling_Method
// +r = Antialias_Depth
// +a = Antialias_Threshold
// +j = jitter

#version 3.7;


// -------------------------------------------------------------
// Scene settings

//Use_Rad_Setting:
//Default		= 0
//Debug			= 1
//Fast			= 2
//Normal		= 3
//2Bounce		= 4
//Final			= 5
//OutdoorLQ		= 6
//OutdoorHQ		= 7
//OutdoorLight	= 8
//IndoorLQ		= 9
//IndoorHQ		= 10

#ifndef (Render_HQ)	#declare Render_HQ = false;	#end

#if (Render_HQ = true)
	#declare Use_Radiosity		= true;				// turn radiosity on/off
	#declare Use_Rad_Setting	= 5;				// radiosity setting, see chart above
	#declare Use_Uber			=false;				// toggle blurred reflections method depending on whether you are using POV-Ray or UberPOV
	#declare Use_SSLT			=false;				// subsurface samples, a.k.a. subsurface light transport, extremely slow!
	#declare Use_LGEO			= true;				// LGEO replacement parts
	#declare Use_BlurRef		= true;				// blurred reflections
	#declare Use_BlurTyp		= 1;				// type of blurred reflections if not using UberPOV, method 1 requires focal blur and lots of antialiasing or the texture will look grainy, method 3 does not require these things but is much much slower, method 2 lies somewhere in between
	#declare Use_BlurAmt		= 1/32;				// amount of blurring in reflections, ignored in favor of presets when using "materials_ldc_defs_clipka.inc"
	#declare Use_BlurSmp		= 8;				// number of samples in blurred reflections, only applies to methods 2 and 3
	#declare Use_BlurFoc		= true;				// focal blur
	#declare Use_Area_Light		= true;				// for softer shadows
	#declare Use_Seed			= seed(08763);		// used for some random effects
	#declare Use_Guides			=false;				// axes markers, grid, etc.
	#declare Use_Env_Mode		= 4;				// 1 = black, 2 = white, 3 = gray and blue with studded floor, 4 = light gray with dotted floor
#else
	#declare Use_Radiosity		=false;				// turn radiosity on/off
	#declare Use_Rad_Setting	= 2;				// radiosity setting, see chart above
	#declare Use_Uber			=false;				// toggle blurred reflections method depending on whether you are using POV-Ray or UberPOV
	#declare Use_SSLT			=false;				// subsurface samples, a.k.a. subsurface lighting transport, very very slow!
	#declare Use_LGEO			=false;				// LGEO replacement parts
	#declare Use_BlurRef		=false;				// blurred reflections
	#declare Use_BlurTyp		= 1;				// type of blurred reflections if not using UberPOV, method 1 requires focal blur and lots of antialiasing or the texture will look grainy, method 3 does not require these things but is much much slower, method 2 lies somewhere in between
	#declare Use_BlurAmt		= 1/32;				// amount of blurring in reflections, ignored in favor of presets when using "materials_ldc_defs_clipka.inc"
	#declare Use_BlurSmp		= 8;				// number of samples in blurred reflections, only applies to methods 2 and 3
	#declare Use_BlurFoc		=false;				// focal blur
	#declare Use_Area_Light		=false;				// for softer shadows
	#declare Use_Seed			= seed(08763);		// used for some random effects
	#declare Use_Guides			= true;				// axes markers, grid, etc.
	#declare Use_Env_Mode		= 4;				// 1 = black, 2 = white, 3 = gray and blue with studded floor, 4 = light gray with dotted floor
#end


// -------------------------------------------------------------
// Newer L3P settings

#ifndef (L3Version)			#declare L3Version		= 1.4;		#end
#ifndef (L3Quality)			#declare L3Quality		= 4;		#end	// Quality level, 0=BBox, 1=no refr, 2=normal, 3=studlogo, 4=stud2logo
#ifndef (L3SW)				#declare L3SW			= 0.5;		#end	// Width of seam between two bricks
#ifndef (L3Studs)			#declare L3Studs		= 1;		#end	// 1=on 0=off
#ifndef (L3Bumps)			#declare L3Bumps		= 1;		#end	// 1=on 0=off
#ifndef (L3Ambient)			#declare L3Ambient		= 0.1;		#end	// was 0.4
#ifndef (L3Diffuse)			#declare L3Diffuse		= 0.9;		#end	// was 0.4
#ifndef (L3Ior)				#declare L3Ior			= 1.25;		#end
#ifndef (L3NormalBumps)		#declare L3NormalBumps	= normal { bumps 0.01 scale 20 }	#end
#ifndef (L3NormalSlope)		#declare L3NormalSlope	= normal { bumps 0.3 scale 0.5 }	#end
#ifndef (L3Phong)			#declare L3Phong		= 0.5;		#end
#ifndef (L3PhongSize)		#declare L3PhongSize	= 40;		#end
#ifndef (L3Reflection)		#declare L3Reflection	= 0.04;		#end	// was 0.08
#declare L3SWT = (L3SW ? L3SW : 0.001);  // At least a small seam when transparent


// -------------------------------------------------------------
// Older L3P settings

#ifndef (QUAL)				#declare QUAL			= L3Quality;		#end		// Quality level, 0=BBox, 1=no refr, 2=normal, 3=studlogo
#ifndef (SW)				#declare SW				= L3SW;				#end		// Width of seam between two bricks
#ifndef (STUDS)				#declare STUDS			= L3Studs;			#end		// 1=on 0=off
#ifndef (BUMPS)				#declare BUMPS			= L3Bumps;			#end		// 1=on 0=off
#ifndef (BUMPNORMAL)		#declare BUMPNORMAL		= L3NormalBumps;	#end
#ifndef (AMB)				#declare AMB			= L3Ambient;		#end
#ifndef (DIF)				#declare DIF			= L3Diffuse;		#end


// -------------------------------------------------------------
// LDView settings

#ifndef (LDXQual)			#declare LDXQual		= L3Quality;	#end	// Quality (0 = Bounding Box; 1 = No Refraction; 2 = Normal; 3 = Stud Logos)
#ifndef (LDXSW)				#declare LDXSW			= L3SW;			#end	// Seam Width (0 for no seams)
#ifndef (LDXStuds)			#declare LDXStuds		= L3Studs;		#end	// Show studs? (1 = YES; 0 = NO)
#ifndef (LDXRefls)			#declare LDXRefls		= 1;			#end	// Reflections? (1 = YES; 0 = NO)
#ifndef (LDXShads)			#declare LDXShads		= 1;			#end	// Shadows? (1 = YES; 0 = NO)
#ifndef (LDXBackground)		#declare LDXBackground	= 0;			#end	// Include Background? (1 = YES; 0 = NO)
#ifndef (LDXFloor)			#declare LDXFloor		= 0;			#end	// Include Floor? (1 = YES; 0 = NO)

#ifndef (LDXAmb)			#declare LDXAmb			= L3Ambient;	#end
#ifndef (LDXDif)			#declare LDXDif			= L3Diffuse;	#end
#ifndef (LDXRefl)			#declare LDXRefl		= L3Reflection;	#end
#ifndef (LDXPhong)			#declare LDXPhong		= L3Phong;		#end
#ifndef (LDXPhongS)			#declare LDXPhongS		= L3PhongSize;	#end
#ifndef (LDXTRefl)			#declare LDXTRefl		= 0.2;			#end
#ifndef (LDXTFilt)			#declare LDXTFilt		= 0.85;			#end
#ifndef (LDXIoR)			#declare LDXIoR			= L3Ior;		#end
#ifndef (LDXRubberRefl)		#declare LDXRubberRefl	= 0;			#end
#ifndef (LDXRubberPhong)	#declare LDXRubberPhong	= 0.1;			#end
#ifndef (LDXRubberPhongS)	#declare LDXRubberPhongS	= 10;		#end
#ifndef (LDXChromeRefl)		#declare LDXChromeRefl	= 0.85;			#end
#ifndef (LDXChromeBril)		#declare LDXChromeBril	= 5;			#end
#ifndef (LDXChromeSpec)		#declare LDXChromeSpec	= 0.8;			#end
#ifndef (LDXChromeRough)	#declare LDXChromeRough	= 0.01;			#end
#ifndef (LDXOpaqueNormal)	#declare LDXOpaqueNormal	= normal { bumps 0.001 scale 0.5 }; #end
#ifndef (LDXTransNormal)	#declare LDXTransNormal		= normal { bumps 0.001 scale 0.5 }; #end
#ifndef (LDXIPov)			#declare LDXIPov		= true;			#end	// Use inline POV code from LDraw file? (1 = YES; 0 = NO)
#ifndef (LDXSkipLight1)		#declare LDXSkipLight1	= true;			#end
#ifndef (LDXSkipLight2)		#declare LDXSkipLight2	= true;			#end
#ifndef (LDXSkipLight3)		#declare LDXSkipLight3	= true;			#end
#ifndef (LDXSkipCamera)		#declare LDXSkipCamera	= true;			#end
#ifndef (LDXOrigVer)		#declare LDXOrigVer		= version;		#end	// DO NOT MODIFY

/*
// A hack I devised
#if (LDXEnableCamera = false)
	#declare LDXSkipCamera = true;
#elseif (LDXEnableCamera = true)
	#ifdef (LDXSkipCamera)
		#undef LDXSkipCamera
	#end
#end
*/

// -------------------------------------------------------------
// LDCad settings

#ifndef (doSeams)	
	#if (L3SW > 0)
		#declare doSeams	= true;		//This will fake seams in between parts by slightly scaling them.
	#else
		#declare doSeams	=false;		//This will fake seams in between parts by slightly scaling them.
	#end
#end
#ifndef (seamSize)		#declare seamSize	= L3SW;		#end	//Width of seams.
#ifndef (doFloor)		#declare doFloor	=false;		#end
#ifndef (doSky)			#declare doSky		=false;		#end


// -------------------------------------------------------------
// LGEO settings

#ifndef (lg_quality)	#declare lg_quality	= L3Quality;	#end
#ifndef (lg_studs)		#declare lg_studs	= L3Studs;		#end


// -------------------------------------------------------------
// Default textures

// diffuse should really vary depending on whether radiosity is turned on or off
#default
{
	texture
	{
		finish { ambient L3Ambient diffuse L3Diffuse }
	}
}

#declare MJHMissingTex = texture {pigment {color srgb <1,0,1>}}
#declare MJHMissingMat = material {texture {MJHMissingTex}}


// -------------------------------------------------------------
// Lighting

#include "CIE.inc"					// http://www.ignorancia.org/en/index.php?page=Lightsys
#include "lightsys.inc"				// http://www.ignorancia.org/en/index.php?page=Lightsys
#include "lightsys_constants.inc"	// http://www.ignorancia.org/en/index.php?page=Lightsys

#declare light_source_lumens		= 1;						// float
#declare light_source_temp			= Daylight(6500);			// float
#declare light_source_color			= Light_Color(light_source_temp,light_source_lumens);
//#declare light_source_color		= 1;
#declare light_source_distance		= 3200;
#declare light_source_location		= vrotate(<0,0,-light_source_distance>, <-60,-120,+0>);

light_source
{
	light_source_location
	color rgb light_source_color
	#if (Use_Area_Light = true)
		area_light x*320, y*320, 9, 9 adaptive 0 circular orient
		area_illumination on
	#end
//	point_at <0,0,0>		// not for point lights
//	parallel
	fade_distance light_source_distance
	fade_power 1
//	shadowless
}

light_source
{
	light_source_location
	color rgb light_source_color
	#if (Use_Area_Light = true)
		area_light x*320, y*320, 9, 9 adaptive 0 circular orient
		area_illumination on
	#end
//	point_at <0,0,0>		// not for point lights
//	parallel
	fade_distance light_source_distance
	fade_power 1
//	shadowless
	rotate y * 90
}


// -------------------------------------------------------------
// Camera stuff
// Should this vary depending on the dimensions of the scene?

#macro Add_BlurFoc(fPoint)
	#if (Use_BlurFoc = true)
		focal_point 	fPoint
		aperture		8
		blur_samples	32
		variance		1/1024
	#end
#end


// -------------------------------------------------------------
// Radiosity

#if (Use_Radiosity = true)
	#include "rad_def.inc"
	#local p_start		= 64/image_width;
	#local p_end_tune	= 8/image_width;
	#local p_end_final	= 4/image_width;
	global_settings
	{
		assumed_gamma	1
		adc_bailout		0.01
//		max_trace_level	8
		ambient_light	0
		charset			utf8
		radiosity
		{
			Rad_Settings(Use_Rad_Setting,true,true)
//			pretrace_start	p_start						// too slow at high resolutions?
//			pretrace_end	p_end_final					// too slow at high resolutions?
		}
		#if (Use_SSLT = true)
			mm_per_unit 0.4			// http://www.brickwiki.info/wiki/LDraw_unit
			subsurface
			{
				samples 50, 5
				radiosity true
			}
		#end
	}
#else
	global_settings
	{
		assumed_gamma	1
//		max_trace_level 8
		ambient_light	1
		charset			utf8
	}
#end


// -------------------------------------------------------------
// Surrounding environment
// Will conflict with Use_Floor_Check, Use_Floor_Cutout and Use_Sky, so don't enable all of them.

#switch (Use_Env_Mode)
	// plain black background, no floor
	#case (1)
		background { color srgb <0,0,0> }
	#break
	// plain white floor and plain white background
	#case (2)
		background { color srgb <1,1,1> }		// should be same color as used in MJHTex15
		union
		{
			plane { -y, 0 hollow }
			material { MJHMat15 }
		}
	#break
	// gray studded floor and blue background
	#case (3)
		sky_sphere
		{
			pigment
			{
				planar
				poly_wave 2
				pigment_map
				{
					[0.0 colour srgb <0.20,0.40,0.90>]
					[1.0 colour srgb <0.60,0.70,0.95>]
				}
			}
//			emission 1
		}
		union
		{
			plane { -y, 0 hollow }
			#for (X,-Stud_Floor_Size/2,Stud_Floor_Size/2-1)
				#for (Z,-Stud_Floor_Size/2,Stud_Floor_Size/2-1)
					object { lg_knob rotate <90, 0, 0> translate <X+0.5,0,Z+0.5> }
				#end
			#end
			material { MJHMat8 }
			scale 20
		}
	#break
	// dotted floor and light gray background
	#case (4)
		#local Env_Color = 3/4;
		background { color srgb Env_Color }
		union
		{
			plane { z, 0 hollow }
			texture
			{
				pigment { color srgb Env_Color }
			}
			texture
			{
				pigment { image_map { png "grid_square_03.png" } }
				scale 40
			}
			rotate x * 90
		}
	#break
#end


// -------------------------------------------------------------
// Guides

#if (Use_Guides = 1)
	#local guide_radius = 1;
	#local guide_length = 32000;
	// coordinate axes
	union
	{
		cylinder
		{
			0, x*guide_length, guide_radius
			pigment {color srgb x}
		}
		cylinder
		{
			0, y*guide_length, guide_radius
			pigment {color srgb y}
		}
		cylinder
		{
			0, z*guide_length, guide_radius
			pigment {color srgb z}
		}
		sphere
		{
			0, guide_radius
			pigment {color srgb 0}
		}
	}
#end
