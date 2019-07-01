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


#version 3.7;

global_settings {assumed_gamma 1}


// -------------------------------------------------------------
// Settings

#declare Render_HQ = false;		// High quality render? Slow but better.

#include "settings_common_before.inc"
#include "settings_showcase_normal.inc"


// -------------------------------------------------------------
// Materials conversion

#include "lg_defs.inc"
#include "lg_color.inc"
#include "materials_blurred_reflections.inc"

// LDCad materials
//#include "materials_ldc_defs.inc"				// LQ
//#include "materials_ldc_defs_mjh.inc"			// MQ
//#include "materials_ldc_defs_clipka.inc"		// HQ
//#include "materials_ldc_out.inc"

// LDView materials when mesh parts are used
//#include "materials_ldx_mesh_defs.inc"			// LQ
//#include "materials_ldx_mesh_defs_mjh.inc"		// MQ
//#include "materials_ldx_mesh_out.inc"

// LDView materials when LGEO parts are used
//#include "materials_ldx_lgeo_defs.inc"
//#include "materials_ldx_lgeo_out.inc"

// L3P materials
//#include "materials_l3p_defs.inc"
//#include "materials_l3p_out.inc"

// LGEO default materials
#include "materials_lg_defs.inc"
#include "materials_lg_out.inc"

#include "materials_all_missing.inc"
#include "materials_all_convert.inc"


// -------------------------------------------------------------
// LDView models

#declare Use_Model = 0;
#declare LDXCameraAspect	= image_width/image_height;
#declare LDXCameraAngle		= 45;

#switch (Use_Model)
	#case (0)
		#include "../tests/slope_test/slope_test_ldview_lgeo_y.pov"
	#break
	#case (1)
		#include "ldv_nice_androbot_mech_new_lgeo_y.pov"
		#declare LDXCameraTransform = transform
		{
			translate -LDXCameraLookAt
			scale 5/4
			translate <0,0,0>
			translate +LDXCameraLookAt
		}
	#break
	#case (2)
		#include "ldv_nice_carriage_house_new_lgeo_y.pov"
		#declare LDXCameraTransform = transform
		{
			translate -LDXCameraLookAt
			scale 1
			translate <+080,+120,-020>
			translate +LDXCameraLookAt
		}
	#break
	#case (3)
		#include "ldv_nice_dune_rover_new_lgeo_y.pov"
		#declare LDXCameraTransform = transform
		{
			translate -LDXCameraLookAt
			scale 1.1
			translate <0,+32,0>
			translate +LDXCameraLookAt
		}
	#break
	#case (4)
		#include "ldv_nice_high_tech_lab_new_lgeo_y.pov"
		#declare LDXCameraTransform = transform
		{
			translate -LDXCameraLookAt
//			scale 1.1
//			translate <0,+32,0>
			translate +LDXCameraLookAt
		}
	#break
	#case (5)
		#include "ldv_nice_manned_mech_new_lgeo_y.pov"
		#declare LDXCameraTransform = transform
		{
			translate -LDXCameraLookAt
//			scale 1.1
//			translate <0,+32,0>
			translate +LDXCameraLookAt
		}
	#break
	#case (6)
		#include "ldv_nice_red_devil_racer_new_lgeo_y.pov"
		#declare LDXCameraTransform = transform
		{
			translate -LDXCameraLookAt
			scale 14/16
			translate <+040,+000,-080>
			translate +LDXCameraLookAt
		}
	#break
	#case (7)
		#include "ldv_nice_salt_flats_speeder_new_lgeo_y.pov"
		#declare LDXCameraTransform = transform
		{
			translate -LDXCameraLookAt
//			scale 14/16
//			translate <+40,0,-80>
			translate +LDXCameraLookAt
		}
	#break
	#case (8)
		#include "ldv_nice_small_shuttle_new_lgeo_y.pov"
		#declare LDXCameraTransform = transform
		{
			translate -LDXCameraLookAt
//			scale 14/16
//			translate <+40,0,-80>
			translate +LDXCameraLookAt
		}
	#break
	#case (9)
		#include "ldv_nice_yellow_castle_new_lgeo_y.pov"
		#declare LDXCameraTransform = transform
		{
			translate -LDXCameraLookAt
//			scale 14/16
//			translate <+40,0,-80>
			translate +LDXCameraLookAt
		}
	#break
#end


// -------------------------------------------------------------
// LDView camera

camera
{
	location	LDXCameraLoc
	sky			LDXCameraSky
	right		LDXCameraAspect * < -1,0,0 >
	look_at		LDXCameraLookAt
	angle		LDXCameraAngle
	Add_BlurFoc(LDXCameraLookAt)
	transform  {LDXCameraTransform}
}
