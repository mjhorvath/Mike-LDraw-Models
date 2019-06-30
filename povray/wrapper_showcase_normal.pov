// This work is licensed under the Creative Commons Attribution-ShareAlike 4.0 Unported License.
// To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/ or send a
// letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.

#version 3.7;


// -------------------------------------------------------------
// LDCad settings with LGEO

#declare Render_HQ = true;

#include "settings_common_before.inc"
#include "settings_showcase_normal.inc"
#include "lg_defs.inc"
#include "lg_color.inc"
#include "materials_blurred_reflections.inc"
//#include "materials_ldc_defs.inc"				// LQ
#include "materials_ldc_defs_mjh.inc"			// MQ
//#include "materials_ldc_defs_clipka.inc"		// HQ
#include "materials_ldc_out.inc"
#include "materials_all_missing.inc"
#include "materials_all_convert.inc"


// -------------------------------------------------------------
// LDView models & cameras

#declare Use_Model = 1;
#declare LDXCamAspect = image_width/image_height;

#switch (Use_Model)
	#case (1)
		#include "ldv_nice_androbot_mech_new.pov"
		#declare LDXCameraAngle = 45;
		#declare LDXCameraTransform = transform
		{
			translate -LDXCameraLookAt
			scale 5/4
			translate <0,0,0>
			translate +LDXCameraLookAt
		}
	#break
	#case (2)
		#include "ldv_nice_carriage_house_new.pov"
		#declare LDXCameraAngle = 45;
		#declare LDXCameraTransform = transform
		{
			translate -LDXCameraLookAt
			scale 1
			translate <+080,+120,-020>
			translate +LDXCameraLookAt
		}
	#break
	#case (3)
		#include "ldv_nice_dune_rover_new.pov"
		#declare LDXCameraAngle = 45;
		#declare LDXCameraTransform = transform
		{
			translate -LDXCameraLookAt
			scale 1.1
			translate <0,+32,0>
			translate +LDXCameraLookAt
		}
	#break
	#case (4)
		#include "ldv_nice_high_tech_lab_new.pov"
		#declare LDXCameraAngle = 45;
		#declare LDXCameraTransform = transform
		{
			translate -LDXCameraLookAt
//			scale 1.1
//			translate <0,+32,0>
			translate +LDXCameraLookAt
		}
	#break
	#case (5)
		#include "ldv_nice_manned_mech_new.pov"
		#declare LDXCameraAngle = 45;
		#declare LDXCameraTransform = transform
		{
			translate -LDXCameraLookAt
//			scale 1.1
//			translate <0,+32,0>
			translate +LDXCameraLookAt
		}
	#break
	#case (6)
		#include "ldv_nice_red_devil_racer_new.pov"
		#declare LDXCameraAngle = 45;
		#declare LDXCameraTransform = transform
		{
			translate -LDXCameraLookAt
			scale 14/16
			translate <+040,+000,-080>
			translate +LDXCameraLookAt
		}
	#break
	#case (7)
		#include "ldv_nice_salt_flats_speeder_new.pov"
		#declare LDXCameraAngle = 45;
		#declare LDXCameraTransform = transform
		{
			translate -LDXCameraLookAt
//			scale 14/16
//			translate <+40,0,-80>
			translate +LDXCameraLookAt
		}
	#break
	#case (8)
		#include "ldv_nice_small_shuttle_new.pov"
		#declare LDXCameraAngle = 45;
		#declare LDXCameraTransform = transform
		{
			translate -LDXCameraLookAt
//			scale 14/16
//			translate <+40,0,-80>
			translate +LDXCameraLookAt
		}
	#break
	#case (9)
		#include "ldv_nice_yellow_castle_new.pov"
		#declare LDXCameraAngle = 45;
		#declare LDXCameraTransform = transform
		{
			translate -LDXCameraLookAt
//			scale 14/16
//			translate <+40,0,-80>
			translate +LDXCameraLookAt
		}
	#break
#end

camera
{
	location	LDXCameraLoc
	sky			LDXCameraSky
	right		LDXCamAspect * < -1,0,0 >
	look_at		LDXCameraLookAt
	angle		LDXCameraAngle
	Add_BlurFoc(LDXCameraLookAt)
	transform  {LDXCameraTransform}
}
