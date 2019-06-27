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


// -------------------------------------------------------------
// Standard includes

#include "stdinc.inc"
#include "textures.inc"
#include "woods.inc"
#include "stones.inc"
#include "glass.inc"
#include "metals.inc"


// -------------------------------------------------------------
// Global settings

global_settings
{
	assumed_gamma	1
}


// -------------------------------------------------------------
// Universe

#declare feet_units			= 20;									// LDU per foot
#declare mile_units			= 5280 * feet_units;
#declare plate_size			=   32 * feet_units;
#declare earth_fudge		= 1/10;									// precision issues in POV-Ray necessitate this
#declare earth_radius		= 3959 * mile_units * earth_fudge;
#declare earth_circum		= floor(2 * pi * earth_radius / plate_size) * plate_size;
#declare earth_radius		= earth_circum/2/pi;
#declare longitude_div		= earth_circum/plate_size;
#declare sun_fudge			= 1/1000000 * earth_fudge;			// precision issues in POV-Ray necessitate this
#declare sun_radius			=   432288 * mile_units * sun_fudge;	//   432288 * 5280 * 20 =   45649612800 units
#declare sun_distance		= 92960000 * mile_units * sun_fudge;	// 92960000 * 5280 * 20 = 9816576000000 units
#declare cloud_min_radius	=  1 * mile_units * earth_fudge;
#declare cloud_max_radius	=  2 * mile_units * earth_fudge;
#declare atmos_max_radius	= 10 * mile_units * earth_fudge;


// -------------------------------------------------------------
// Vectors

#macro vanglesXY(tVec2)
	#local fSgnX = 1;
	#local fSgnY = 1;
	#local tPrjB1 = vnormalize(<tVec2.x, 0, tVec2.z>);

	#if (tPrjB1.x != 0)
		#local fSgnX = tPrjB1.x/abs(tPrjB1.x) * -1;
	#end

	#local tPrjB1 = <tPrjB1.x, tPrjB1.y, max(min(tPrjB1.z,1),-1)>;
	#local fAngY = acosd(tPrjB1.z) * fSgnX;
	#local tPrjB2 = vnormalize(vrotate(tVec2, <0, fAngY, 0>));

	#if (tPrjB2.y != 0)
		#local fSgnY = tPrjB2.y/abs(tPrjB2.y);
	#end

	#local tPrjB2 = <tPrjB2.x, tPrjB2.y, max(min(tPrjB2.z,1),-1)>;
	#local fAngX = acosd(tPrjB2.z) * fSgnY;
	<fAngX, (fAngY + 180) * -1, 0>
#end


#macro tflip(in_vector)
	transform
	{
		rotate <+000,+000,+180>
		rotate in_vector + <+180,+000,+000>
	}
#end
