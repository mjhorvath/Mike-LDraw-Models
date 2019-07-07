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
// +am = Sampling_Method
// +r = Antialias_Depth
// +a = Antialias_Threshold
// +j = jitter


#version 3.7;

global_settings {assumed_gamma 1}

#include "stdinc.inc"


// -------------------------------------------------------------
// General settings

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

// HQ
#declare Use_Radiosity		= true;
#declare Use_Rad_Setting	= 5;
#declare Use_Uber			=false;				// toggle blurred reflections method depending on whether you are using POV-Ray or UberPOV
#declare Use_SSLT			=false;
#declare Use_LGEO			= true;
#declare Use_BlurRef		= true;				// blurred reflections
#declare Use_BlurTyp		= 1;				// type of blurred reflections, method 1 requires focal blur and lots of antialiasing or the texture will look grainy, method 3 does not require these things but is much much slower, method 2 lies somewhere in between
#declare Use_BlurAmt		= 1/32;				// amount of blurring in reflections, ignored if "materials_ldc_defs_clipka.inc" is used
#declare Use_BlurSmp		= 8;				// number of samples in blurred reflections
#declare Use_BlurFoc		=false;				// camera focal blur
#declare Use_Area_Light		=false;				// not used in this scene currently
#declare Use_Seed			= seed(08763);
#declare Use_Shadows		= true;				// not used in this scene currently
/*
// LQ
#declare Use_Radiosity		=false;
#declare Use_Rad_Setting	= 5;
#declare Use_SSLT			=false;
#declare Use_LGEO			= true;
#declare Use_BlurRef		=false;				// blurred reflections
#declare Use_BlurTyp		= 1;				// type of blurred reflections, method 1 requires focal blur and lots of antialiasing or the texture will look grainy, method 3 does not require these things but is much much slower, method 2 lies somewhere in between
#declare Use_BlurAmt		= 1/32;				// amount of blurring in reflections, ignored if "materials_ldc_defs_clipka.inc" is used
#declare Use_BlurSmp		= 8;				// number of samples in blurred reflections
#declare Use_BlurFoc		=false;				// camera focal blur
#declare Use_Area_Light		=false;				// not used currently
#declare Use_Seed			= seed(08763);
#declare Use_Shadows		= true;				// not used currently
*/

// -------------------------------------------------------------
// New L3P settings

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
// Old L3P settings

#ifndef (QUAL)				#declare QUAL			= L3Quality;		#end		// Quality level, 0=BBox, 1=no refr, 2=normal, 3=studlogo
#ifndef (SW)				#declare SW				= L3SW;				#end		// Width of seam between two bricks
#ifndef (STUDS)				#declare STUDS			= L3Studs;			#end		// 1=on 0=off
#ifndef (BUMPS)				#declare BUMPS			= L3Bumps;			#end		// 1=on 0=off
#ifndef (BUMPNORMAL)		#declare BUMPNORMAL		= L3NormalBumps;	#end
#ifndef (AMB)				#declare AMB			= L3Ambient;		#end
#ifndef (DIF)				#declare DIF			= L3Diffuse;		#end


// -------------------------------------------------------------
// LDView settings

#ifndef (LDXQual)			#declare LDXQual		= L3Quality;	#end
#ifndef (LDXSW)				#declare LDXSW			= L3SW;			#end
#ifndef (LDXStuds)			#declare LDXStuds		= L3Studs;		#end
#ifndef (LDXRefls)			#declare LDXRefls		= 1;			#end
#ifndef (LDXShads)			#declare LDXShads		= 1;			#end
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
#ifndef (LDXIPov)			#declare LDXIPov		= true;			#end	// Use inline POV code from LDraw file? (1 = YES; 0 = NO)
#ifndef (LDXSkipLight1)		#declare LDXSkipLight1	= true;			#end
#ifndef (LDXSkipLight2)		#declare LDXSkipLight2	= true;			#end
#ifndef (LDXSkipLight3)		#declare LDXSkipLight3	= true;			#end
#ifndef (LDXSkipCamera)		#declare LDXSkipCamera	= true;			#end
#ifndef (LDXFloor)			#declare LDXFloor		=false;			#end
#declare LDXOrigVer = version;	// DO NOT MODIFY


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

#include "lg_defs.inc"
#include "lg_color.inc"


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


// -------------------------------------------------------------
// Materials conversion

#declare MJHMissingTex = texture {pigment {color srgb <1,0,1>}}
#declare MJHMissingMat = material {texture {MJHMissingTex}}

#include "materials_blurred_reflections.inc"
//#include "materials_ldc_defs.inc"					// lq
//#include "materials_ldc_defs_mjh.inc"				// mq
#include "materials_ldc_defs_clipka.inc"			// hq
#include "materials_ldc_out.inc"
#include "materials_all_missing.inc"
#include "materials_all_convert.inc"


// -------------------------------------------------------------
// Camera

#declare Camera_Distance	= 360;
#declare Camera_Up			= -y * Camera_Distance;
#declare Camera_Right		= +x * Camera_Distance * image_width/image_height;
#declare Camera_Location	= -z * Camera_Distance;
#declare Camera_Direction	= +z * Camera_Distance;
#declare Camera_LookAt		= Camera_Location + Camera_Direction;
camera
{
	orthographic
	up		Camera_Up
	right		Camera_Right
	location	Camera_Location
	direction	Camera_Direction
}


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
	}
#end


// -------------------------------------------------------------
// Lighting

#include "CIE.inc"				// http://www.ignorancia.org/en/index.php?page=Lightsys
#include "lightsys.inc"				// http://www.ignorancia.org/en/index.php?page=Lightsys
#include "lightsys_constants.inc"	// http://www.ignorancia.org/en/index.php?page=Lightsys
#include "lightsys_colors.inc"		// http://www.ignorancia.org/en/index.php?page=Lightsys

#declare light_distance		= 6400;
#declare light_lumens		= 3;					// float
#declare light_temp			= Cl_SI_D65;			// float
#declare light_color		= Light_Color(light_temp,light_lumens);
//#declare light_location		= vrotate(<0,0,-light_distance>, <-030,-120,+000>);
#declare light_location		= vrotate(<0,0,-light_distance>, <-060,-120,+000>);

light_source
{
	light_location
	color rgb light_color
	parallel
	point_at	<0,0,0>
	#if (Use_Shadows = false)
		shadowless
	#end
}

light_source
{
	light_location
	color rgb light_color
	parallel
	point_at	<0,0,0>
	rotate y * 90
	#if (Use_Shadows = false)
		shadowless
	#end
}


// -------------------------------------------------------------
// Background

background {color srgb 0}

sphere
{
	0, 1e8
	pigment {color srgb 1}
	finish {emission 1 diffuse 0 ambient 0}
	no_image
}


// -------------------------------------------------------------
// Models

#include "l3p_nice_heads_grid_new_lgeo_n.pov"
//#include "ldv_nice_heads_grid_new_lgeo_n.pov"			// some of the meshes are smoother, but some of them look worse in combination with primitive substitution
