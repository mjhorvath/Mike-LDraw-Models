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


// The parameter "lg_slope_bumps" is missing! Where did it come from? Where can I find it again?

// row 1
#ifdef (lg_black) #ifndef (MJHTex0) #declare MJHTex0 = texture { lg_black } #end #end
#ifdef (lg_black) #ifndef (MJHTex0Slope) #declare MJHTex0Slope = texture { lg_black normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_black) #ifndef (MJHMat0) #declare MJHMat0 = material { texture { lg_black } interior { lg_ior } } #end #end
#ifdef (lg_black) #ifndef (MJHMat0Slope) #declare MJHMat0Slope = material { texture { lg_black } interior { lg_ior } } #end #end

// row 2
#ifdef (lg_blue) #ifndef (MJHTex1) #declare MJHTex1 = texture { lg_blue } #end #end
#ifdef (lg_blue) #ifndef (MJHTex1Slope) #declare MJHTex1Slope = texture { lg_blue normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_blue) #ifndef (MJHMat1) #declare MJHMat1 = material { texture { lg_blue } interior { lg_ior } } #end #end
#ifdef (lg_blue) #ifndef (MJHMat1Slope) #declare MJHMat1Slope = material { texture { lg_blue } interior { lg_ior } } #end #end

// row 3
#ifdef (lg_green) #ifndef (MJHTex2) #declare MJHTex2 = texture { lg_green } #end #end
#ifdef (lg_green) #ifndef (MJHTex2Slope) #declare MJHTex2Slope = texture { lg_green normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_green) #ifndef (MJHMat2) #declare MJHMat2 = material { texture { lg_green } interior { lg_ior } } #end #end
#ifdef (lg_green) #ifndef (MJHMat2Slope) #declare MJHMat2Slope = material { texture { lg_green } interior { lg_ior } } #end #end

// row 4
#ifdef (lg_cyan) #ifndef (MJHTex3) #declare MJHTex3 = texture { lg_cyan } #end #end
#ifdef (lg_cyan) #ifndef (MJHTex3Slope) #declare MJHTex3Slope = texture { lg_cyan normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_cyan) #ifndef (MJHMat3) #declare MJHMat3 = material { texture { lg_cyan } interior { lg_ior } } #end #end
#ifdef (lg_cyan) #ifndef (MJHMat3Slope) #declare MJHMat3Slope = material { texture { lg_cyan } interior { lg_ior } } #end #end

// row 5
#ifdef (lg_red) #ifndef (MJHTex4) #declare MJHTex4 = texture { lg_red } #end #end
#ifdef (lg_red) #ifndef (MJHTex4Slope) #declare MJHTex4Slope = texture { lg_red normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_red) #ifndef (MJHMat4) #declare MJHMat4 = material { texture { lg_red } interior { lg_ior } } #end #end
#ifdef (lg_red) #ifndef (MJHMat4Slope) #declare MJHMat4Slope = material { texture { lg_red } interior { lg_ior } } #end #end

// row 6
#ifdef (lg_dark_pink) #ifndef (MJHTex5) #declare MJHTex5 = texture { lg_dark_pink } #end #end
#ifdef (lg_dark_pink) #ifndef (MJHTex5Slope) #declare MJHTex5Slope = texture { lg_dark_pink normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_dark_pink) #ifndef (MJHMat5) #declare MJHMat5 = material { texture { lg_dark_pink } interior { lg_ior } } #end #end
#ifdef (lg_dark_pink) #ifndef (MJHMat5Slope) #declare MJHMat5Slope = material { texture { lg_dark_pink } interior { lg_ior } } #end #end

// row 7
#ifdef (lg_brown) #ifndef (MJHTex6) #declare MJHTex6 = texture { lg_brown } #end #end
#ifdef (lg_brown) #ifndef (MJHTex6Slope) #declare MJHTex6Slope = texture { lg_brown normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_brown) #ifndef (MJHMat6) #declare MJHMat6 = material { texture { lg_brown } interior { lg_ior } } #end #end
#ifdef (lg_brown) #ifndef (MJHMat6Slope) #declare MJHMat6Slope = material { texture { lg_brown } interior { lg_ior } } #end #end

// row 8
#ifdef (lg_grey) #ifndef (MJHTex7) #declare MJHTex7 = texture { lg_grey } #end #end
#ifdef (lg_grey) #ifndef (MJHTex7Slope) #declare MJHTex7Slope = texture { lg_grey normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_grey) #ifndef (MJHMat7) #declare MJHMat7 = material { texture { lg_grey } interior { lg_ior } } #end #end
#ifdef (lg_grey) #ifndef (MJHMat7Slope) #declare MJHMat7Slope = material { texture { lg_grey } interior { lg_ior } } #end #end

// row 9
#ifdef (lg_dark_grey) #ifndef (MJHTex8) #declare MJHTex8 = texture { lg_dark_grey } #end #end
#ifdef (lg_dark_grey) #ifndef (MJHTex8Slope) #declare MJHTex8Slope = texture { lg_dark_grey normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_dark_grey) #ifndef (MJHMat8) #declare MJHMat8 = material { texture { lg_dark_grey } interior { lg_ior } } #end #end
#ifdef (lg_dark_grey) #ifndef (MJHMat8Slope) #declare MJHMat8Slope = material { texture { lg_dark_grey } interior { lg_ior } } #end #end

// row 10
#ifdef (lg_light_blue) #ifndef (MJHTex9) #declare MJHTex9 = texture { lg_light_blue } #end #end
#ifdef (lg_light_blue) #ifndef (MJHTex9Slope) #declare MJHTex9Slope = texture { lg_light_blue normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_light_blue) #ifndef (MJHMat9) #declare MJHMat9 = material { texture { lg_light_blue } interior { lg_ior } } #end #end
#ifdef (lg_light_blue) #ifndef (MJHMat9Slope) #declare MJHMat9Slope = material { texture { lg_light_blue } interior { lg_ior } } #end #end

// row 11
#ifdef (lg_bright_green) #ifndef (MJHTex10) #declare MJHTex10 = texture { lg_bright_green } #end #end
#ifdef (lg_bright_green) #ifndef (MJHTex10Slope) #declare MJHTex10Slope = texture { lg_bright_green normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_bright_green) #ifndef (MJHMat10) #declare MJHMat10 = material { texture { lg_bright_green } interior { lg_ior } } #end #end
#ifdef (lg_bright_green) #ifndef (MJHMat10Slope) #declare MJHMat10Slope = material { texture { lg_bright_green } interior { lg_ior } } #end #end

// row 12
#ifdef (lg_turquoise) #ifndef (MJHTex11) #declare MJHTex11 = texture { lg_turquoise } #end #end
#ifdef (lg_turquoise) #ifndef (MJHTex11Slope) #declare MJHTex11Slope = texture { lg_turquoise normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_turquoise) #ifndef (MJHMat11) #declare MJHMat11 = material { texture { lg_turquoise } interior { lg_ior } } #end #end
#ifdef (lg_turquoise) #ifndef (MJHMat11Slope) #declare MJHMat11Slope = material { texture { lg_turquoise } interior { lg_ior } } #end #end

// row 13
#ifdef (lg_salmon) #ifndef (MJHTex12) #declare MJHTex12 = texture { lg_salmon } #end #end
#ifdef (lg_salmon) #ifndef (MJHTex12Slope) #declare MJHTex12Slope = texture { lg_salmon normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_salmon) #ifndef (MJHMat12) #declare MJHMat12 = material { texture { lg_salmon } interior { lg_ior } } #end #end
#ifdef (lg_salmon) #ifndef (MJHMat12Slope) #declare MJHMat12Slope = material { texture { lg_salmon } interior { lg_ior } } #end #end

// row 14
#ifdef (lg_pink) #ifndef (MJHTex13) #declare MJHTex13 = texture { lg_pink } #end #end
#ifdef (lg_pink) #ifndef (MJHTex13Slope) #declare MJHTex13Slope = texture { lg_pink normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_pink) #ifndef (MJHMat13) #declare MJHMat13 = material { texture { lg_pink } interior { lg_ior } } #end #end
#ifdef (lg_pink) #ifndef (MJHMat13Slope) #declare MJHMat13Slope = material { texture { lg_pink } interior { lg_ior } } #end #end

// row 15
#ifdef (lg_yellow) #ifndef (MJHTex14) #declare MJHTex14 = texture { lg_yellow } #end #end
#ifdef (lg_yellow) #ifndef (MJHTex14Slope) #declare MJHTex14Slope = texture { lg_yellow normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_yellow) #ifndef (MJHMat14) #declare MJHMat14 = material { texture { lg_yellow } interior { lg_ior } } #end #end
#ifdef (lg_yellow) #ifndef (MJHMat14Slope) #declare MJHMat14Slope = material { texture { lg_yellow } interior { lg_ior } } #end #end

// row 16
#ifdef (lg_white) #ifndef (MJHTex15) #declare MJHTex15 = texture { lg_white } #end #end
#ifdef (lg_white) #ifndef (MJHTex15Slope) #declare MJHTex15Slope = texture { lg_white normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_white) #ifndef (MJHMat15) #declare MJHMat15 = material { texture { lg_white } interior { lg_ior } } #end #end
#ifdef (lg_white) #ifndef (MJHMat15Slope) #declare MJHMat15Slope = material { texture { lg_white } interior { lg_ior } } #end #end

// row 17
#ifdef (lg_missing) #ifndef (MJHTex16) #declare MJHTex16 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex16Slope) #declare MJHTex16Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat16) #declare MJHMat16 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat16Slope) #declare MJHMat16Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 18
#ifdef (lg_light_green) #ifndef (MJHTex17) #declare MJHTex17 = texture { lg_light_green } #end #end
#ifdef (lg_light_green) #ifndef (MJHTex17Slope) #declare MJHTex17Slope = texture { lg_light_green normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_light_green) #ifndef (MJHMat17) #declare MJHMat17 = material { texture { lg_light_green } interior { lg_ior } } #end #end
#ifdef (lg_light_green) #ifndef (MJHMat17Slope) #declare MJHMat17Slope = material { texture { lg_light_green } interior { lg_ior } } #end #end

// row 19
#ifdef (lg_light_yellow) #ifndef (MJHTex18) #declare MJHTex18 = texture { lg_light_yellow } #end #end
#ifdef (lg_light_yellow) #ifndef (MJHTex18Slope) #declare MJHTex18Slope = texture { lg_light_yellow normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_light_yellow) #ifndef (MJHMat18) #declare MJHMat18 = material { texture { lg_light_yellow } interior { lg_ior } } #end #end
#ifdef (lg_light_yellow) #ifndef (MJHMat18Slope) #declare MJHMat18Slope = material { texture { lg_light_yellow } interior { lg_ior } } #end #end

// row 20
#ifdef (lg_tan) #ifndef (MJHTex19) #declare MJHTex19 = texture { lg_tan } #end #end
#ifdef (lg_tan) #ifndef (MJHTex19Slope) #declare MJHTex19Slope = texture { lg_tan normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_tan) #ifndef (MJHMat19) #declare MJHMat19 = material { texture { lg_tan } interior { lg_ior } } #end #end
#ifdef (lg_tan) #ifndef (MJHMat19Slope) #declare MJHMat19Slope = material { texture { lg_tan } interior { lg_ior } } #end #end

// row 21
#ifdef (lg_light_violet) #ifndef (MJHTex20) #declare MJHTex20 = texture { lg_light_violet } #end #end
#ifdef (lg_light_violet) #ifndef (MJHTex20Slope) #declare MJHTex20Slope = texture { lg_light_violet normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_light_violet) #ifndef (MJHMat20) #declare MJHMat20 = material { texture { lg_light_violet } interior { lg_ior } } #end #end
#ifdef (lg_light_violet) #ifndef (MJHMat20Slope) #declare MJHMat20Slope = material { texture { lg_light_violet } interior { lg_ior } } #end #end

// row 22
#ifdef (lg_glow_in_dark_opaque) #ifndef (MJHTex21) #declare MJHTex21 = texture { lg_glow_in_dark_opaque } #end #end
#ifdef (lg_glow_in_dark_opaque) #ifndef (MJHTex21Slope) #declare MJHTex21Slope = texture { lg_glow_in_dark_opaque normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_glow_in_dark_opaque) #ifndef (MJHMat21) #declare MJHMat21 = material { texture { lg_glow_in_dark_opaque } interior { lg_ior } } #end #end
#ifdef (lg_glow_in_dark_opaque) #ifndef (MJHMat21Slope) #declare MJHMat21Slope = material { texture { lg_glow_in_dark_opaque } interior { lg_ior } } #end #end

// row 23
#ifdef (lg_purple) #ifndef (MJHTex22) #declare MJHTex22 = texture { lg_purple } #end #end
#ifdef (lg_purple) #ifndef (MJHTex22Slope) #declare MJHTex22Slope = texture { lg_purple normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_purple) #ifndef (MJHMat22) #declare MJHMat22 = material { texture { lg_purple } interior { lg_ior } } #end #end
#ifdef (lg_purple) #ifndef (MJHMat22Slope) #declare MJHMat22Slope = material { texture { lg_purple } interior { lg_ior } } #end #end

// row 24
#ifdef (lg_violet_blue) #ifndef (MJHTex23) #declare MJHTex23 = texture { lg_violet_blue } #end #end
#ifdef (lg_violet_blue) #ifndef (MJHTex23Slope) #declare MJHTex23Slope = texture { lg_violet_blue normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_violet_blue) #ifndef (MJHMat23) #declare MJHMat23 = material { texture { lg_violet_blue } interior { lg_ior } } #end #end
#ifdef (lg_violet_blue) #ifndef (MJHMat23Slope) #declare MJHMat23Slope = material { texture { lg_violet_blue } interior { lg_ior } } #end #end

// row 25
#ifdef (lg_missing) #ifndef (MJHTex24) #declare MJHTex24 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex24Slope) #declare MJHTex24Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat24) #declare MJHMat24 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat24Slope) #declare MJHMat24Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 26
#ifdef (lg_orange) #ifndef (MJHTex25) #declare MJHTex25 = texture { lg_orange } #end #end
#ifdef (lg_orange) #ifndef (MJHTex25Slope) #declare MJHTex25Slope = texture { lg_orange normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_orange) #ifndef (MJHMat25) #declare MJHMat25 = material { texture { lg_orange } interior { lg_ior } } #end #end
#ifdef (lg_orange) #ifndef (MJHMat25Slope) #declare MJHMat25Slope = material { texture { lg_orange } interior { lg_ior } } #end #end

// row 27
#ifdef (lg_magenta) #ifndef (MJHTex26) #declare MJHTex26 = texture { lg_magenta } #end #end
#ifdef (lg_magenta) #ifndef (MJHTex26Slope) #declare MJHTex26Slope = texture { lg_magenta normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_magenta) #ifndef (MJHMat26) #declare MJHMat26 = material { texture { lg_magenta } interior { lg_ior } } #end #end
#ifdef (lg_magenta) #ifndef (MJHMat26Slope) #declare MJHMat26Slope = material { texture { lg_magenta } interior { lg_ior } } #end #end

// row 28
#ifdef (lg_lime) #ifndef (MJHTex27) #declare MJHTex27 = texture { lg_lime } #end #end
#ifdef (lg_lime) #ifndef (MJHTex27Slope) #declare MJHTex27Slope = texture { lg_lime normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_lime) #ifndef (MJHMat27) #declare MJHMat27 = material { texture { lg_lime } interior { lg_ior } } #end #end
#ifdef (lg_lime) #ifndef (MJHMat27Slope) #declare MJHMat27Slope = material { texture { lg_lime } interior { lg_ior } } #end #end

// row 29
#ifdef (lg_dark_tan) #ifndef (MJHTex28) #declare MJHTex28 = texture { lg_dark_tan } #end #end
#ifdef (lg_dark_tan) #ifndef (MJHTex28Slope) #declare MJHTex28Slope = texture { lg_dark_tan normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_dark_tan) #ifndef (MJHMat28) #declare MJHMat28 = material { texture { lg_dark_tan } interior { lg_ior } } #end #end
#ifdef (lg_dark_tan) #ifndef (MJHMat28Slope) #declare MJHMat28Slope = material { texture { lg_dark_tan } interior { lg_ior } } #end #end

// row 30
#ifdef (lg_light_purple) #ifndef (MJHTex29) #declare MJHTex29 = texture { lg_light_purple } #end #end
#ifdef (lg_light_purple) #ifndef (MJHTex29Slope) #declare MJHTex29Slope = texture { lg_light_purple normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_light_purple) #ifndef (MJHMat29) #declare MJHMat29 = material { texture { lg_light_purple } interior { lg_ior } } #end #end
#ifdef (lg_light_purple) #ifndef (MJHMat29Slope) #declare MJHMat29Slope = material { texture { lg_light_purple } interior { lg_ior } } #end #end

// row 31
#ifdef (lg_medium_lavender) #ifndef (MJHTex30) #declare MJHTex30 = texture { lg_medium_lavender } #end #end
#ifdef (lg_medium_lavender) #ifndef (MJHTex30Slope) #declare MJHTex30Slope = texture { lg_medium_lavender normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_medium_lavender) #ifndef (MJHMat30) #declare MJHMat30 = material { texture { lg_medium_lavender } interior { lg_ior } } #end #end
#ifdef (lg_medium_lavender) #ifndef (MJHMat30Slope) #declare MJHMat30Slope = material { texture { lg_medium_lavender } interior { lg_ior } } #end #end

// row 32
#ifdef (lg_lavender) #ifndef (MJHTex31) #declare MJHTex31 = texture { lg_lavender } #end #end
#ifdef (lg_lavender) #ifndef (MJHTex31Slope) #declare MJHTex31Slope = texture { lg_lavender normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_lavender) #ifndef (MJHMat31) #declare MJHMat31 = material { texture { lg_lavender } interior { lg_ior } } #end #end
#ifdef (lg_lavender) #ifndef (MJHMat31Slope) #declare MJHMat31Slope = material { texture { lg_lavender } interior { lg_ior } } #end #end

// row 33
#ifdef (lg_black_ir) #ifndef (MJHTex32) #declare MJHTex32 = texture { lg_black_ir } #end #end
#ifdef (lg_black_ir) #ifndef (MJHTex32Slope) #declare MJHTex32Slope = texture { lg_black_ir normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_black_ir) #ifndef (MJHMat32) #declare MJHMat32 = material { texture { lg_black_ir } interior { lg_ior } } #end #end
#ifdef (lg_black_ir) #ifndef (MJHMat32Slope) #declare MJHMat32Slope = material { texture { lg_black_ir } interior { lg_ior } } #end #end

// row 34
#ifdef (lg_clear_blue) #ifndef (MJHTex33) #declare MJHTex33 = texture { lg_clear_blue } #end #end
#ifdef (lg_clear_blue) #ifndef (MJHTex33Slope) #declare MJHTex33Slope = texture { lg_clear_blue normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_clear_blue) #ifndef (MJHMat33) #declare MJHMat33 = material { texture { lg_clear_blue } interior { lg_ior } } #end #end
#ifdef (lg_clear_blue) #ifndef (MJHMat33Slope) #declare MJHMat33Slope = material { texture { lg_clear_blue } interior { lg_ior } } #end #end

// row 35
#ifdef (lg_clear_green) #ifndef (MJHTex34) #declare MJHTex34 = texture { lg_clear_green } #end #end
#ifdef (lg_clear_green) #ifndef (MJHTex34Slope) #declare MJHTex34Slope = texture { lg_clear_green normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_clear_green) #ifndef (MJHMat34) #declare MJHMat34 = material { texture { lg_clear_green } interior { lg_ior } } #end #end
#ifdef (lg_clear_green) #ifndef (MJHMat34Slope) #declare MJHMat34Slope = material { texture { lg_clear_green } interior { lg_ior } } #end #end

// row 36
#ifdef (lg_clear_bright_green) #ifndef (MJHTex35) #declare MJHTex35 = texture { lg_clear_bright_green } #end #end
#ifdef (lg_clear_bright_green) #ifndef (MJHTex35Slope) #declare MJHTex35Slope = texture { lg_clear_bright_green normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_clear_bright_green) #ifndef (MJHMat35) #declare MJHMat35 = material { texture { lg_clear_bright_green } interior { lg_ior } } #end #end
#ifdef (lg_clear_bright_green) #ifndef (MJHMat35Slope) #declare MJHMat35Slope = material { texture { lg_clear_bright_green } interior { lg_ior } } #end #end

// row 37
#ifdef (lg_clear_red) #ifndef (MJHTex36) #declare MJHTex36 = texture { lg_clear_red } #end #end
#ifdef (lg_clear_red) #ifndef (MJHTex36Slope) #declare MJHTex36Slope = texture { lg_clear_red normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_clear_red) #ifndef (MJHMat36) #declare MJHMat36 = material { texture { lg_clear_red } interior { lg_ior } } #end #end
#ifdef (lg_clear_red) #ifndef (MJHMat36Slope) #declare MJHMat36Slope = material { texture { lg_clear_red } interior { lg_ior } } #end #end

// row 38
#ifdef (lg_clear_violet) #ifndef (MJHTex37) #declare MJHTex37 = texture { lg_clear_violet } #end #end
#ifdef (lg_clear_violet) #ifndef (MJHTex37Slope) #declare MJHTex37Slope = texture { lg_clear_violet normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_clear_violet) #ifndef (MJHMat37) #declare MJHMat37 = material { texture { lg_clear_violet } interior { lg_ior } } #end #end
#ifdef (lg_clear_violet) #ifndef (MJHMat37Slope) #declare MJHMat37Slope = material { texture { lg_clear_violet } interior { lg_ior } } #end #end

// row 39
#ifdef (lg_clear_neon_orange) #ifndef (MJHTex38) #declare MJHTex38 = texture { lg_clear_neon_orange } #end #end
#ifdef (lg_clear_neon_orange) #ifndef (MJHTex38Slope) #declare MJHTex38Slope = texture { lg_clear_neon_orange normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_clear_neon_orange) #ifndef (MJHMat38) #declare MJHMat38 = material { texture { lg_clear_neon_orange } interior { lg_ior } } #end #end
#ifdef (lg_clear_neon_orange) #ifndef (MJHMat38Slope) #declare MJHMat38Slope = material { texture { lg_clear_neon_orange } interior { lg_ior } } #end #end

// row 40
#ifdef (lg_clear_brown) #ifndef (MJHTex39) #declare MJHTex39 = texture { lg_clear_brown } #end #end
#ifdef (lg_clear_brown) #ifndef (MJHTex39Slope) #declare MJHTex39Slope = texture { lg_clear_brown normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_clear_brown) #ifndef (MJHMat39) #declare MJHMat39 = material { texture { lg_clear_brown } interior { lg_ior } } #end #end
#ifdef (lg_clear_brown) #ifndef (MJHMat39Slope) #declare MJHMat39Slope = material { texture { lg_clear_brown } interior { lg_ior } } #end #end

// row 41
#ifdef (lg_clear_brown) #ifndef (MJHTex40) #declare MJHTex40 = texture { lg_clear_brown } #end #end
#ifdef (lg_clear_brown) #ifndef (MJHTex40Slope) #declare MJHTex40Slope = texture { lg_clear_brown normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_clear_brown) #ifndef (MJHMat40) #declare MJHMat40 = material { texture { lg_clear_brown } interior { lg_ior } } #end #end
#ifdef (lg_clear_brown) #ifndef (MJHMat40Slope) #declare MJHMat40Slope = material { texture { lg_clear_brown } interior { lg_ior } } #end #end

// row 42
#ifdef (lg_clear_cyan) #ifndef (MJHTex41) #declare MJHTex41 = texture { lg_clear_cyan } #end #end
#ifdef (lg_clear_cyan) #ifndef (MJHTex41Slope) #declare MJHTex41Slope = texture { lg_clear_cyan normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_clear_cyan) #ifndef (MJHMat41) #declare MJHMat41 = material { texture { lg_clear_cyan } interior { lg_ior } } #end #end
#ifdef (lg_clear_cyan) #ifndef (MJHMat41Slope) #declare MJHMat41Slope = material { texture { lg_clear_cyan } interior { lg_ior } } #end #end

// row 43
#ifdef (lg_clear_neon_yellow) #ifndef (MJHTex42) #declare MJHTex42 = texture { lg_clear_neon_yellow } #end #end
#ifdef (lg_clear_neon_yellow) #ifndef (MJHTex42Slope) #declare MJHTex42Slope = texture { lg_clear_neon_yellow normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_clear_neon_yellow) #ifndef (MJHMat42) #declare MJHMat42 = material { texture { lg_clear_neon_yellow } interior { lg_ior } } #end #end
#ifdef (lg_clear_neon_yellow) #ifndef (MJHMat42Slope) #declare MJHMat42Slope = material { texture { lg_clear_neon_yellow } interior { lg_ior } } #end #end

// row 44
#ifdef (lg_clear_light_blue) #ifndef (MJHTex43) #declare MJHTex43 = texture { lg_clear_light_blue } #end #end
#ifdef (lg_clear_light_blue) #ifndef (MJHTex43Slope) #declare MJHTex43Slope = texture { lg_clear_light_blue normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_clear_light_blue) #ifndef (MJHMat43) #declare MJHMat43 = material { texture { lg_clear_light_blue } interior { lg_ior } } #end #end
#ifdef (lg_clear_light_blue) #ifndef (MJHMat43Slope) #declare MJHMat43Slope = material { texture { lg_clear_light_blue } interior { lg_ior } } #end #end

// row 45
#ifdef (lg_clear_light_purple) #ifndef (MJHTex44) #declare MJHTex44 = texture { lg_clear_light_purple } #end #end
#ifdef (lg_clear_light_purple) #ifndef (MJHTex44Slope) #declare MJHTex44Slope = texture { lg_clear_light_purple normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_clear_light_purple) #ifndef (MJHMat44) #declare MJHMat44 = material { texture { lg_clear_light_purple } interior { lg_ior } } #end #end
#ifdef (lg_clear_light_purple) #ifndef (MJHMat44Slope) #declare MJHMat44Slope = material { texture { lg_clear_light_purple } interior { lg_ior } } #end #end

// row 46
#ifdef (lg_clear_pink) #ifndef (MJHTex45) #declare MJHTex45 = texture { lg_clear_pink } #end #end
#ifdef (lg_clear_pink) #ifndef (MJHTex45Slope) #declare MJHTex45Slope = texture { lg_clear_pink normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_clear_pink) #ifndef (MJHMat45) #declare MJHMat45 = material { texture { lg_clear_pink } interior { lg_ior } } #end #end
#ifdef (lg_clear_pink) #ifndef (MJHMat45Slope) #declare MJHMat45Slope = material { texture { lg_clear_pink } interior { lg_ior } } #end #end

// row 47
#ifdef (lg_clear_yellow) #ifndef (MJHTex46) #declare MJHTex46 = texture { lg_clear_yellow } #end #end
#ifdef (lg_clear_yellow) #ifndef (MJHTex46Slope) #declare MJHTex46Slope = texture { lg_clear_yellow normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_clear_yellow) #ifndef (MJHMat46) #declare MJHMat46 = material { texture { lg_clear_yellow } interior { lg_ior } } #end #end
#ifdef (lg_clear_yellow) #ifndef (MJHMat46Slope) #declare MJHMat46Slope = material { texture { lg_clear_yellow } interior { lg_ior } } #end #end

// row 48
#ifdef (lg_clear) #ifndef (MJHTex47) #declare MJHTex47 = texture { lg_clear } #end #end
#ifdef (lg_clear) #ifndef (MJHTex47Slope) #declare MJHTex47Slope = texture { lg_clear normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_clear) #ifndef (MJHMat47) #declare MJHMat47 = material { texture { lg_clear } interior { lg_ior } } #end #end
#ifdef (lg_clear) #ifndef (MJHMat47Slope) #declare MJHMat47Slope = material { texture { lg_clear } interior { lg_ior } } #end #end

// row 49
#ifdef (lg_clear_violet) #ifndef (MJHTex52) #declare MJHTex52 = texture { lg_clear_violet } #end #end
#ifdef (lg_clear_violet) #ifndef (MJHTex52Slope) #declare MJHTex52Slope = texture { lg_clear_violet normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_clear_violet) #ifndef (MJHMat52) #declare MJHMat52 = material { texture { lg_clear_violet } interior { lg_ior } } #end #end
#ifdef (lg_clear_violet) #ifndef (MJHMat52Slope) #declare MJHMat52Slope = material { texture { lg_clear_violet } interior { lg_ior } } #end #end

// row 50
#ifdef (lg_clear_neon_yellow) #ifndef (MJHTex54) #declare MJHTex54 = texture { lg_clear_neon_yellow } #end #end
#ifdef (lg_clear_neon_yellow) #ifndef (MJHTex54Slope) #declare MJHTex54Slope = texture { lg_clear_neon_yellow normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_clear_neon_yellow) #ifndef (MJHMat54) #declare MJHMat54 = material { texture { lg_clear_neon_yellow } interior { lg_ior } } #end #end
#ifdef (lg_clear_neon_yellow) #ifndef (MJHMat54Slope) #declare MJHMat54Slope = material { texture { lg_clear_neon_yellow } interior { lg_ior } } #end #end

// row 51
#ifdef (lg_clear_neon_orange) #ifndef (MJHTex57) #declare MJHTex57 = texture { lg_clear_neon_orange } #end #end
#ifdef (lg_clear_neon_orange) #ifndef (MJHTex57Slope) #declare MJHTex57Slope = texture { lg_clear_neon_orange normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_clear_neon_orange) #ifndef (MJHMat57) #declare MJHMat57 = material { texture { lg_clear_neon_orange } interior { lg_ior } } #end #end
#ifdef (lg_clear_neon_orange) #ifndef (MJHMat57Slope) #declare MJHMat57Slope = material { texture { lg_clear_neon_orange } interior { lg_ior } } #end #end

// row 52
#ifdef (lg_missing) #ifndef (MJHTex60) #declare MJHTex60 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex60Slope) #declare MJHTex60Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat60) #declare MJHMat60 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat60Slope) #declare MJHMat60Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 53
#ifdef (lg_missing) #ifndef (MJHTex61) #declare MJHTex61 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex61Slope) #declare MJHTex61Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat61) #declare MJHMat61 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat61Slope) #declare MJHMat61Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 54
#ifdef (lg_missing) #ifndef (MJHTex62) #declare MJHTex62 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex62Slope) #declare MJHTex62Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat62) #declare MJHMat62 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat62Slope) #declare MJHMat62Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 55
#ifdef (lg_missing) #ifndef (MJHTex63) #declare MJHTex63 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex63Slope) #declare MJHTex63Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat63) #declare MJHMat63 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat63Slope) #declare MJHMat63Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 56
#ifdef (lg_missing) #ifndef (MJHTex64) #declare MJHTex64 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex64Slope) #declare MJHTex64Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat64) #declare MJHMat64 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat64Slope) #declare MJHMat64Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 57
#ifdef (lg_rubber_yellow) #ifndef (MJHTex65) #declare MJHTex65 = texture { lg_rubber_yellow } #end #end
#ifdef (lg_rubber_yellow) #ifndef (MJHTex65Slope) #declare MJHTex65Slope = texture { lg_rubber_yellow normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_rubber_yellow) #ifndef (MJHMat65) #declare MJHMat65 = material { texture { lg_rubber_yellow } interior { lg_ior } } #end #end
#ifdef (lg_rubber_yellow) #ifndef (MJHMat65Slope) #declare MJHMat65Slope = material { texture { lg_rubber_yellow } interior { lg_ior } } #end #end

// row 58
#ifdef (lg_rubber_clear_yellow) #ifndef (MJHTex66) #declare MJHTex66 = texture { lg_rubber_clear_yellow } #end #end
#ifdef (lg_rubber_clear_yellow) #ifndef (MJHTex66Slope) #declare MJHTex66Slope = texture { lg_rubber_clear_yellow normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_rubber_clear_yellow) #ifndef (MJHMat66) #declare MJHMat66 = material { texture { lg_rubber_clear_yellow } interior { lg_ior } } #end #end
#ifdef (lg_rubber_clear_yellow) #ifndef (MJHMat66Slope) #declare MJHMat66Slope = material { texture { lg_rubber_clear_yellow } interior { lg_ior } } #end #end

// row 59
#ifdef (lg_rubber_clear) #ifndef (MJHTex67) #declare MJHTex67 = texture { lg_rubber_clear } #end #end
#ifdef (lg_rubber_clear) #ifndef (MJHTex67Slope) #declare MJHTex67Slope = texture { lg_rubber_clear normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_rubber_clear) #ifndef (MJHMat67) #declare MJHMat67 = material { texture { lg_rubber_clear } interior { lg_ior } } #end #end
#ifdef (lg_rubber_clear) #ifndef (MJHMat67Slope) #declare MJHMat67Slope = material { texture { lg_rubber_clear } interior { lg_ior } } #end #end

// row 60
#ifdef (lg_very_light_orange) #ifndef (MJHTex68) #declare MJHTex68 = texture { lg_very_light_orange } #end #end
#ifdef (lg_very_light_orange) #ifndef (MJHTex68Slope) #declare MJHTex68Slope = texture { lg_very_light_orange normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_very_light_orange) #ifndef (MJHMat68) #declare MJHMat68 = material { texture { lg_very_light_orange } interior { lg_ior } } #end #end
#ifdef (lg_very_light_orange) #ifndef (MJHMat68Slope) #declare MJHMat68Slope = material { texture { lg_very_light_orange } interior { lg_ior } } #end #end

// row 61
#ifdef (lg_bright_purple) #ifndef (MJHTex69) #declare MJHTex69 = texture { lg_bright_purple } #end #end
#ifdef (lg_bright_purple) #ifndef (MJHTex69Slope) #declare MJHTex69Slope = texture { lg_bright_purple normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_bright_purple) #ifndef (MJHMat69) #declare MJHMat69 = material { texture { lg_bright_purple } interior { lg_ior } } #end #end
#ifdef (lg_bright_purple) #ifndef (MJHMat69Slope) #declare MJHMat69Slope = material { texture { lg_bright_purple } interior { lg_ior } } #end #end

// row 62
#ifdef (lg_reddish_brown) #ifndef (MJHTex70) #declare MJHTex70 = texture { lg_reddish_brown } #end #end
#ifdef (lg_reddish_brown) #ifndef (MJHTex70Slope) #declare MJHTex70Slope = texture { lg_reddish_brown normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_reddish_brown) #ifndef (MJHMat70) #declare MJHMat70 = material { texture { lg_reddish_brown } interior { lg_ior } } #end #end
#ifdef (lg_reddish_brown) #ifndef (MJHMat70Slope) #declare MJHMat70Slope = material { texture { lg_reddish_brown } interior { lg_ior } } #end #end

// row 63
#ifdef (lg_bluish_grey) #ifndef (MJHTex71) #declare MJHTex71 = texture { lg_bluish_grey } #end #end
#ifdef (lg_bluish_grey) #ifndef (MJHTex71Slope) #declare MJHTex71Slope = texture { lg_bluish_grey normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_bluish_grey) #ifndef (MJHMat71) #declare MJHMat71 = material { texture { lg_bluish_grey } interior { lg_ior } } #end #end
#ifdef (lg_bluish_grey) #ifndef (MJHMat71Slope) #declare MJHMat71Slope = material { texture { lg_bluish_grey } interior { lg_ior } } #end #end

// row 64
#ifdef (lg_dark_bluish_grey) #ifndef (MJHTex72) #declare MJHTex72 = texture { lg_dark_bluish_grey } #end #end
#ifdef (lg_dark_bluish_grey) #ifndef (MJHTex72Slope) #declare MJHTex72Slope = texture { lg_dark_bluish_grey normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_dark_bluish_grey) #ifndef (MJHMat72) #declare MJHMat72 = material { texture { lg_dark_bluish_grey } interior { lg_ior } } #end #end
#ifdef (lg_dark_bluish_grey) #ifndef (MJHMat72Slope) #declare MJHMat72Slope = material { texture { lg_dark_bluish_grey } interior { lg_ior } } #end #end

// row 65
#ifdef (lg_medium_blue) #ifndef (MJHTex73) #declare MJHTex73 = texture { lg_medium_blue } #end #end
#ifdef (lg_medium_blue) #ifndef (MJHTex73Slope) #declare MJHTex73Slope = texture { lg_medium_blue normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_medium_blue) #ifndef (MJHMat73) #declare MJHMat73 = material { texture { lg_medium_blue } interior { lg_ior } } #end #end
#ifdef (lg_medium_blue) #ifndef (MJHMat73Slope) #declare MJHMat73Slope = material { texture { lg_medium_blue } interior { lg_ior } } #end #end

// row 66
#ifdef (lg_medium_green) #ifndef (MJHTex74) #declare MJHTex74 = texture { lg_medium_green } #end #end
#ifdef (lg_medium_green) #ifndef (MJHTex74Slope) #declare MJHTex74Slope = texture { lg_medium_green normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_medium_green) #ifndef (MJHMat74) #declare MJHMat74 = material { texture { lg_medium_green } interior { lg_ior } } #end #end
#ifdef (lg_medium_green) #ifndef (MJHMat74Slope) #declare MJHMat74Slope = material { texture { lg_medium_green } interior { lg_ior } } #end #end

// row 67
#ifdef (lg_missing) #ifndef (MJHTex75) #declare MJHTex75 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex75Slope) #declare MJHTex75Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat75) #declare MJHMat75 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat75Slope) #declare MJHMat75Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 68
#ifdef (lg_missing) #ifndef (MJHTex76) #declare MJHTex76 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex76Slope) #declare MJHTex76Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat76) #declare MJHMat76 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat76Slope) #declare MJHMat76Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 69
#ifdef (lg_paradisa_pink) #ifndef (MJHTex77) #declare MJHTex77 = texture { lg_paradisa_pink } #end #end
#ifdef (lg_paradisa_pink) #ifndef (MJHTex77Slope) #declare MJHTex77Slope = texture { lg_paradisa_pink normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_paradisa_pink) #ifndef (MJHMat77) #declare MJHMat77 = material { texture { lg_paradisa_pink } interior { lg_ior } } #end #end
#ifdef (lg_paradisa_pink) #ifndef (MJHMat77Slope) #declare MJHMat77Slope = material { texture { lg_paradisa_pink } interior { lg_ior } } #end #end

// row 70
#ifdef (lg_light_flesh) #ifndef (MJHTex78) #declare MJHTex78 = texture { lg_light_flesh } #end #end
#ifdef (lg_light_flesh) #ifndef (MJHTex78Slope) #declare MJHTex78Slope = texture { lg_light_flesh normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_light_flesh) #ifndef (MJHMat78) #declare MJHMat78 = material { texture { lg_light_flesh } interior { lg_ior } } #end #end
#ifdef (lg_light_flesh) #ifndef (MJHMat78Slope) #declare MJHMat78Slope = material { texture { lg_light_flesh } interior { lg_ior } } #end #end

// row 71
#ifdef (lg_milky_white) #ifndef (MJHTex79) #declare MJHTex79 = texture { lg_milky_white } #end #end
#ifdef (lg_milky_white) #ifndef (MJHTex79Slope) #declare MJHTex79Slope = texture { lg_milky_white normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_milky_white) #ifndef (MJHMat79) #declare MJHMat79 = material { texture { lg_milky_white } interior { lg_ior } } #end #end
#ifdef (lg_milky_white) #ifndef (MJHMat79Slope) #declare MJHMat79Slope = material { texture { lg_milky_white } interior { lg_ior } } #end #end

// row 72
#ifdef (lg_metallic_silver) #ifndef (MJHTex80) #declare MJHTex80 = texture { lg_metallic_silver } #end #end
#ifdef (lg_metallic_silver) #ifndef (MJHTex80Slope) #declare MJHTex80Slope = texture { lg_metallic_silver normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_metallic_silver) #ifndef (MJHMat80) #declare MJHMat80 = material { texture { lg_metallic_silver } interior { lg_ior } } #end #end
#ifdef (lg_metallic_silver) #ifndef (MJHMat80Slope) #declare MJHMat80Slope = material { texture { lg_metallic_silver } interior { lg_ior } } #end #end

// row 73
#ifdef (lg_missing) #ifndef (MJHTex81) #declare MJHTex81 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex81Slope) #declare MJHTex81Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat81) #declare MJHMat81 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat81Slope) #declare MJHMat81Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 74
#ifdef (lg_metallic_gold) #ifndef (MJHTex82) #declare MJHTex82 = texture { lg_metallic_gold } #end #end
#ifdef (lg_metallic_gold) #ifndef (MJHTex82Slope) #declare MJHTex82Slope = texture { lg_metallic_gold normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_metallic_gold) #ifndef (MJHMat82) #declare MJHMat82 = material { texture { lg_metallic_gold } interior { lg_ior } } #end #end
#ifdef (lg_metallic_gold) #ifndef (MJHMat82Slope) #declare MJHMat82Slope = material { texture { lg_metallic_gold } interior { lg_ior } } #end #end

// row 75
#ifdef (lg_missing) #ifndef (MJHTex83) #declare MJHTex83 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex83Slope) #declare MJHTex83Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat83) #declare MJHMat83 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat83Slope) #declare MJHMat83Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 76
#ifdef (lg_medium_dark_flesh) #ifndef (MJHTex84) #declare MJHTex84 = texture { lg_medium_dark_flesh } #end #end
#ifdef (lg_medium_dark_flesh) #ifndef (MJHTex84Slope) #declare MJHTex84Slope = texture { lg_medium_dark_flesh normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_medium_dark_flesh) #ifndef (MJHMat84) #declare MJHMat84 = material { texture { lg_medium_dark_flesh } interior { lg_ior } } #end #end
#ifdef (lg_medium_dark_flesh) #ifndef (MJHMat84Slope) #declare MJHMat84Slope = material { texture { lg_medium_dark_flesh } interior { lg_ior } } #end #end

// row 77
#ifdef (lg_medium_violet) #ifndef (MJHTex85) #declare MJHTex85 = texture { lg_medium_violet } #end #end
#ifdef (lg_medium_violet) #ifndef (MJHTex85Slope) #declare MJHTex85Slope = texture { lg_medium_violet normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_medium_violet) #ifndef (MJHMat85) #declare MJHMat85 = material { texture { lg_medium_violet } interior { lg_ior } } #end #end
#ifdef (lg_medium_violet) #ifndef (MJHMat85Slope) #declare MJHMat85Slope = material { texture { lg_medium_violet } interior { lg_ior } } #end #end

// row 78
#ifdef (lg_dark_flesh) #ifndef (MJHTex86) #declare MJHTex86 = texture { lg_dark_flesh } #end #end
#ifdef (lg_dark_flesh) #ifndef (MJHTex86Slope) #declare MJHTex86Slope = texture { lg_dark_flesh normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_dark_flesh) #ifndef (MJHMat86) #declare MJHMat86 = material { texture { lg_dark_flesh } interior { lg_ior } } #end #end
#ifdef (lg_dark_flesh) #ifndef (MJHMat86Slope) #declare MJHMat86Slope = material { texture { lg_dark_flesh } interior { lg_ior } } #end #end

// row 79
#ifdef (lg_missing) #ifndef (MJHTex87) #declare MJHTex87 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex87Slope) #declare MJHTex87Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat87) #declare MJHMat87 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat87Slope) #declare MJHMat87Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 80
#ifdef (lg_royal_blue) #ifndef (MJHTex89) #declare MJHTex89 = texture { lg_royal_blue } #end #end
#ifdef (lg_royal_blue) #ifndef (MJHTex89Slope) #declare MJHTex89Slope = texture { lg_royal_blue normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_royal_blue) #ifndef (MJHMat89) #declare MJHMat89 = material { texture { lg_royal_blue } interior { lg_ior } } #end #end
#ifdef (lg_royal_blue) #ifndef (MJHMat89Slope) #declare MJHMat89Slope = material { texture { lg_royal_blue } interior { lg_ior } } #end #end

// row 81
#ifdef (lg_flesh) #ifndef (MJHTex92) #declare MJHTex92 = texture { lg_flesh } #end #end
#ifdef (lg_flesh) #ifndef (MJHTex92Slope) #declare MJHTex92Slope = texture { lg_flesh normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_flesh) #ifndef (MJHMat92) #declare MJHMat92 = material { texture { lg_flesh } interior { lg_ior } } #end #end
#ifdef (lg_flesh) #ifndef (MJHMat92Slope) #declare MJHMat92Slope = material { texture { lg_flesh } interior { lg_ior } } #end #end

// row 82
#ifdef (lg_light_salmon) #ifndef (MJHTex100) #declare MJHTex100 = texture { lg_light_salmon } #end #end
#ifdef (lg_light_salmon) #ifndef (MJHTex100Slope) #declare MJHTex100Slope = texture { lg_light_salmon normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_light_salmon) #ifndef (MJHMat100) #declare MJHMat100 = material { texture { lg_light_salmon } interior { lg_ior } } #end #end
#ifdef (lg_light_salmon) #ifndef (MJHMat100Slope) #declare MJHMat100Slope = material { texture { lg_light_salmon } interior { lg_ior } } #end #end

// row 83
#ifdef (lg_missing) #ifndef (MJHTex110) #declare MJHTex110 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex110Slope) #declare MJHTex110Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat110) #declare MJHMat110 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat110Slope) #declare MJHMat110Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 84
#ifdef (lg_missing) #ifndef (MJHTex112) #declare MJHTex112 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex112Slope) #declare MJHTex112Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat112) #declare MJHMat112 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat112Slope) #declare MJHMat112Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 85
#ifdef (lg_missing) #ifndef (MJHTex114) #declare MJHTex114 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex114Slope) #declare MJHTex114Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat114) #declare MJHMat114 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat114Slope) #declare MJHMat114Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 86
#ifdef (lg_medium_lime) #ifndef (MJHTex115) #declare MJHTex115 = texture { lg_medium_lime } #end #end
#ifdef (lg_medium_lime) #ifndef (MJHTex115Slope) #declare MJHTex115Slope = texture { lg_medium_lime normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_medium_lime) #ifndef (MJHMat115) #declare MJHMat115 = material { texture { lg_medium_lime } interior { lg_ior } } #end #end
#ifdef (lg_medium_lime) #ifndef (MJHMat115Slope) #declare MJHMat115Slope = material { texture { lg_medium_lime } interior { lg_ior } } #end #end

// row 87
#ifdef (lg_missing) #ifndef (MJHTex117) #declare MJHTex117 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex117Slope) #declare MJHTex117Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat117) #declare MJHMat117 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat117Slope) #declare MJHMat117Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 88
#ifdef (lg_missing) #ifndef (MJHTex118) #declare MJHTex118 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex118Slope) #declare MJHTex118Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat118) #declare MJHMat118 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat118Slope) #declare MJHMat118Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 89
#ifdef (lg_missing) #ifndef (MJHTex120) #declare MJHTex120 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex120Slope) #declare MJHTex120Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat120) #declare MJHMat120 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat120Slope) #declare MJHMat120Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 90
#ifdef (lg_missing) #ifndef (MJHTex125) #declare MJHTex125 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex125Slope) #declare MJHTex125Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat125) #declare MJHMat125 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat125Slope) #declare MJHMat125Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 91
#ifdef (lg_missing) #ifndef (MJHTex128) #declare MJHTex128 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex128Slope) #declare MJHTex128Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat128) #declare MJHMat128 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat128Slope) #declare MJHMat128Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 92
#ifdef (lg_missing) #ifndef (MJHTex129) #declare MJHTex129 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex129Slope) #declare MJHTex129Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat129) #declare MJHMat129 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat129Slope) #declare MJHMat129Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 93
#ifdef (lg_missing) #ifndef (MJHTex132) #declare MJHTex132 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex132Slope) #declare MJHTex132Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat132) #declare MJHMat132 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat132Slope) #declare MJHMat132Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 94
#ifdef (lg_missing) #ifndef (MJHTex133) #declare MJHTex133 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex133Slope) #declare MJHTex133Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat133) #declare MJHMat133 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat133Slope) #declare MJHMat133Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 95
#ifdef (lg_pearl_copper) #ifndef (MJHTex134) #declare MJHTex134 = texture { lg_pearl_copper } #end #end
#ifdef (lg_pearl_copper) #ifndef (MJHTex134Slope) #declare MJHTex134Slope = texture { lg_pearl_copper normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_pearl_copper) #ifndef (MJHMat134) #declare MJHMat134 = material { texture { lg_pearl_copper } interior { lg_ior } } #end #end
#ifdef (lg_pearl_copper) #ifndef (MJHMat134Slope) #declare MJHMat134Slope = material { texture { lg_pearl_copper } interior { lg_ior } } #end #end

// row 96
#ifdef (lg_pearl_grey) #ifndef (MJHTex135) #declare MJHTex135 = texture { lg_pearl_grey } #end #end
#ifdef (lg_pearl_grey) #ifndef (MJHTex135Slope) #declare MJHTex135Slope = texture { lg_pearl_grey normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_pearl_grey) #ifndef (MJHMat135) #declare MJHMat135 = material { texture { lg_pearl_grey } interior { lg_ior } } #end #end
#ifdef (lg_pearl_grey) #ifndef (MJHMat135Slope) #declare MJHMat135Slope = material { texture { lg_pearl_grey } interior { lg_ior } } #end #end

// row 97
#ifdef (lg_pearl_blue) #ifndef (MJHTex137) #declare MJHTex137 = texture { lg_pearl_blue } #end #end
#ifdef (lg_pearl_blue) #ifndef (MJHTex137Slope) #declare MJHTex137Slope = texture { lg_pearl_blue normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_pearl_blue) #ifndef (MJHMat137) #declare MJHMat137 = material { texture { lg_pearl_blue } interior { lg_ior } } #end #end
#ifdef (lg_pearl_blue) #ifndef (MJHMat137Slope) #declare MJHMat137Slope = material { texture { lg_pearl_blue } interior { lg_ior } } #end #end

// row 98
#ifdef (lg_pearl_gold) #ifndef (MJHTex142) #declare MJHTex142 = texture { lg_pearl_gold } #end #end
#ifdef (lg_pearl_gold) #ifndef (MJHTex142Slope) #declare MJHTex142Slope = texture { lg_pearl_gold normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_pearl_gold) #ifndef (MJHMat142) #declare MJHMat142 = material { texture { lg_pearl_gold } interior { lg_ior } } #end #end
#ifdef (lg_pearl_gold) #ifndef (MJHMat142Slope) #declare MJHMat142Slope = material { texture { lg_pearl_gold } interior { lg_ior } } #end #end

// row 99
#ifdef (lg_pearl_dark_grey) #ifndef (MJHTex148) #declare MJHTex148 = texture { lg_pearl_dark_grey } #end #end
#ifdef (lg_pearl_dark_grey) #ifndef (MJHTex148Slope) #declare MJHTex148Slope = texture { lg_pearl_dark_grey normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_pearl_dark_grey) #ifndef (MJHMat148) #declare MJHMat148 = material { texture { lg_pearl_dark_grey } interior { lg_ior } } #end #end
#ifdef (lg_pearl_dark_grey) #ifndef (MJHMat148Slope) #declare MJHMat148Slope = material { texture { lg_pearl_dark_grey } interior { lg_ior } } #end #end

// row 100
#ifdef (lg_missing) #ifndef (MJHTex150) #declare MJHTex150 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex150Slope) #declare MJHTex150Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat150) #declare MJHMat150 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat150Slope) #declare MJHMat150Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 101
#ifdef (lg_very_light_bluish_grey) #ifndef (MJHTex151) #declare MJHTex151 = texture { lg_very_light_bluish_grey } #end #end
#ifdef (lg_very_light_bluish_grey) #ifndef (MJHTex151Slope) #declare MJHTex151Slope = texture { lg_very_light_bluish_grey normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_very_light_bluish_grey) #ifndef (MJHMat151) #declare MJHMat151 = material { texture { lg_very_light_bluish_grey } interior { lg_ior } } #end #end
#ifdef (lg_very_light_bluish_grey) #ifndef (MJHMat151Slope) #declare MJHMat151Slope = material { texture { lg_very_light_bluish_grey } interior { lg_ior } } #end #end

// row 102
#ifdef (lg_missing) #ifndef (MJHTex178) #declare MJHTex178 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex178Slope) #declare MJHTex178Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat178) #declare MJHMat178 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat178Slope) #declare MJHMat178Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 103
#ifdef (lg_flat_silver) #ifndef (MJHTex179) #declare MJHTex179 = texture { lg_flat_silver } #end #end
#ifdef (lg_flat_silver) #ifndef (MJHTex179Slope) #declare MJHTex179Slope = texture { lg_flat_silver normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_flat_silver) #ifndef (MJHMat179) #declare MJHMat179 = material { texture { lg_flat_silver } interior { lg_ior } } #end #end
#ifdef (lg_flat_silver) #ifndef (MJHMat179Slope) #declare MJHMat179Slope = material { texture { lg_flat_silver } interior { lg_ior } } #end #end

// row 104
#ifdef (lg_pearl_white) #ifndef (MJHTex183) #declare MJHTex183 = texture { lg_pearl_white } #end #end
#ifdef (lg_pearl_white) #ifndef (MJHTex183Slope) #declare MJHTex183Slope = texture { lg_pearl_white normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_pearl_white) #ifndef (MJHMat183) #declare MJHMat183 = material { texture { lg_pearl_white } interior { lg_ior } } #end #end
#ifdef (lg_pearl_white) #ifndef (MJHMat183Slope) #declare MJHMat183Slope = material { texture { lg_pearl_white } interior { lg_ior } } #end #end

// row 105
#ifdef (lg_missing) #ifndef (MJHTex184) #declare MJHTex184 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex184Slope) #declare MJHTex184Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat184) #declare MJHMat184 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat184Slope) #declare MJHMat184Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 106
#ifdef (lg_missing) #ifndef (MJHTex186) #declare MJHTex186 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex186Slope) #declare MJHTex186Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat186) #declare MJHMat186 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat186Slope) #declare MJHMat186Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 107
#ifdef (lg_missing) #ifndef (MJHTex189) #declare MJHTex189 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex189Slope) #declare MJHTex189Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat189) #declare MJHMat189 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat189Slope) #declare MJHMat189Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 108
#ifdef (lg_bright_light_orange) #ifndef (MJHTex191) #declare MJHTex191 = texture { lg_bright_light_orange } #end #end
#ifdef (lg_bright_light_orange) #ifndef (MJHTex191Slope) #declare MJHTex191Slope = texture { lg_bright_light_orange normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_bright_light_orange) #ifndef (MJHMat191) #declare MJHMat191 = material { texture { lg_bright_light_orange } interior { lg_ior } } #end #end
#ifdef (lg_bright_light_orange) #ifndef (MJHMat191Slope) #declare MJHMat191Slope = material { texture { lg_bright_light_orange } interior { lg_ior } } #end #end

// row 109
#ifdef (lg_bright_light_blue) #ifndef (MJHTex212) #declare MJHTex212 = texture { lg_bright_light_blue } #end #end
#ifdef (lg_bright_light_blue) #ifndef (MJHTex212Slope) #declare MJHTex212Slope = texture { lg_bright_light_blue normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_bright_light_blue) #ifndef (MJHMat212) #declare MJHMat212 = material { texture { lg_bright_light_blue } interior { lg_ior } } #end #end
#ifdef (lg_bright_light_blue) #ifndef (MJHMat212Slope) #declare MJHMat212Slope = material { texture { lg_bright_light_blue } interior { lg_ior } } #end #end

// row 110
#ifdef (lg_rust) #ifndef (MJHTex216) #declare MJHTex216 = texture { lg_rust } #end #end
#ifdef (lg_rust) #ifndef (MJHTex216Slope) #declare MJHTex216Slope = texture { lg_rust normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_rust) #ifndef (MJHMat216) #declare MJHMat216 = material { texture { lg_rust } interior { lg_ior } } #end #end
#ifdef (lg_rust) #ifndef (MJHMat216Slope) #declare MJHMat216Slope = material { texture { lg_rust } interior { lg_ior } } #end #end

// row 111
#ifdef (lg_missing) #ifndef (MJHTex218) #declare MJHTex218 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex218Slope) #declare MJHTex218Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat218) #declare MJHMat218 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat218Slope) #declare MJHMat218Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 112
#ifdef (lg_missing) #ifndef (MJHTex219) #declare MJHTex219 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex219Slope) #declare MJHTex219Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat219) #declare MJHMat219 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat219Slope) #declare MJHMat219Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 113
#ifdef (lg_bright_light_yellow) #ifndef (MJHTex226) #declare MJHTex226 = texture { lg_bright_light_yellow } #end #end
#ifdef (lg_bright_light_yellow) #ifndef (MJHTex226Slope) #declare MJHTex226Slope = texture { lg_bright_light_yellow normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_bright_light_yellow) #ifndef (MJHMat226) #declare MJHMat226 = material { texture { lg_bright_light_yellow } interior { lg_ior } } #end #end
#ifdef (lg_bright_light_yellow) #ifndef (MJHMat226Slope) #declare MJHMat226Slope = material { texture { lg_bright_light_yellow } interior { lg_ior } } #end #end

// row 114
#ifdef (lg_missing) #ifndef (MJHTex231) #declare MJHTex231 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex231Slope) #declare MJHTex231Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat231) #declare MJHMat231 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat231Slope) #declare MJHMat231Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 115
#ifdef (lg_sky_blue) #ifndef (MJHTex232) #declare MJHTex232 = texture { lg_sky_blue } #end #end
#ifdef (lg_sky_blue) #ifndef (MJHTex232Slope) #declare MJHTex232Slope = texture { lg_sky_blue normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_sky_blue) #ifndef (MJHMat232) #declare MJHMat232 = material { texture { lg_sky_blue } interior { lg_ior } } #end #end
#ifdef (lg_sky_blue) #ifndef (MJHMat232Slope) #declare MJHMat232Slope = material { texture { lg_sky_blue } interior { lg_ior } } #end #end

// row 116
#ifdef (lg_missing) #ifndef (MJHTex234) #declare MJHTex234 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex234Slope) #declare MJHTex234Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat234) #declare MJHMat234 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat234Slope) #declare MJHMat234Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 117
#ifdef (lg_rubber_black) #ifndef (MJHTex256) #declare MJHTex256 = texture { lg_rubber_black } #end #end
#ifdef (lg_rubber_black) #ifndef (MJHTex256Slope) #declare MJHTex256Slope = texture { lg_rubber_black normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_rubber_black) #ifndef (MJHMat256) #declare MJHMat256 = material { texture { lg_rubber_black } interior { lg_ior } } #end #end
#ifdef (lg_rubber_black) #ifndef (MJHMat256Slope) #declare MJHMat256Slope = material { texture { lg_rubber_black } interior { lg_ior } } #end #end

// row 118
#ifdef (lg_dark_blue) #ifndef (MJHTex272) #declare MJHTex272 = texture { lg_dark_blue } #end #end
#ifdef (lg_dark_blue) #ifndef (MJHTex272Slope) #declare MJHTex272Slope = texture { lg_dark_blue normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_dark_blue) #ifndef (MJHMat272) #declare MJHMat272 = material { texture { lg_dark_blue } interior { lg_ior } } #end #end
#ifdef (lg_dark_blue) #ifndef (MJHMat272Slope) #declare MJHMat272Slope = material { texture { lg_dark_blue } interior { lg_ior } } #end #end

// row 119
#ifdef (lg_rubber_blue) #ifndef (MJHTex273) #declare MJHTex273 = texture { lg_rubber_blue } #end #end
#ifdef (lg_rubber_blue) #ifndef (MJHTex273Slope) #declare MJHTex273Slope = texture { lg_rubber_blue normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_rubber_blue) #ifndef (MJHMat273) #declare MJHMat273 = material { texture { lg_rubber_blue } interior { lg_ior } } #end #end
#ifdef (lg_rubber_blue) #ifndef (MJHMat273Slope) #declare MJHMat273Slope = material { texture { lg_rubber_blue } interior { lg_ior } } #end #end

// row 120
#ifdef (lg_missing) #ifndef (MJHTex284) #declare MJHTex284 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex284Slope) #declare MJHTex284Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat284) #declare MJHMat284 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat284Slope) #declare MJHMat284Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 121
#ifdef (lg_missing) #ifndef (MJHTex285) #declare MJHTex285 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex285Slope) #declare MJHTex285Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat285) #declare MJHMat285 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat285Slope) #declare MJHMat285Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 122
#ifdef (lg_dark_green) #ifndef (MJHTex288) #declare MJHTex288 = texture { lg_dark_green } #end #end
#ifdef (lg_dark_green) #ifndef (MJHTex288Slope) #declare MJHTex288Slope = texture { lg_dark_green normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_dark_green) #ifndef (MJHMat288) #declare MJHMat288 = material { texture { lg_dark_green } interior { lg_ior } } #end #end
#ifdef (lg_dark_green) #ifndef (MJHMat288Slope) #declare MJHMat288Slope = material { texture { lg_dark_green } interior { lg_ior } } #end #end

// row 123
#ifdef (lg_missing) #ifndef (MJHTex293) #declare MJHTex293 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex293Slope) #declare MJHTex293Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat293) #declare MJHMat293 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat293Slope) #declare MJHMat293Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 124
#ifdef (lg_glow_in_dark_clear) #ifndef (MJHTex294) #declare MJHTex294 = texture { lg_glow_in_dark_clear } #end #end
#ifdef (lg_glow_in_dark_clear) #ifndef (MJHTex294Slope) #declare MJHTex294Slope = texture { lg_glow_in_dark_clear normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_glow_in_dark_clear) #ifndef (MJHMat294) #declare MJHMat294 = material { texture { lg_glow_in_dark_clear } interior { lg_ior } } #end #end
#ifdef (lg_glow_in_dark_clear) #ifndef (MJHMat294Slope) #declare MJHMat294Slope = material { texture { lg_glow_in_dark_clear } interior { lg_ior } } #end #end

// row 125
#ifdef (lg_missing) #ifndef (MJHTex295) #declare MJHTex295 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex295Slope) #declare MJHTex295Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat295) #declare MJHMat295 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat295Slope) #declare MJHMat295Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 126
#ifdef (lg_pearl_gold) #ifndef (MJHTex297) #declare MJHTex297 = texture { lg_pearl_gold } #end #end
#ifdef (lg_pearl_gold) #ifndef (MJHTex297Slope) #declare MJHTex297Slope = texture { lg_pearl_gold normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_pearl_gold) #ifndef (MJHMat297) #declare MJHMat297 = material { texture { lg_pearl_gold } interior { lg_ior } } #end #end
#ifdef (lg_pearl_gold) #ifndef (MJHMat297Slope) #declare MJHMat297Slope = material { texture { lg_pearl_gold } interior { lg_ior } } #end #end

// row 127
#ifdef (lg_missing) #ifndef (MJHTex300) #declare MJHTex300 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex300Slope) #declare MJHTex300Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat300) #declare MJHMat300 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat300Slope) #declare MJHMat300Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 128
#ifdef (lg_missing) #ifndef (MJHTex302) #declare MJHTex302 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex302Slope) #declare MJHTex302Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat302) #declare MJHMat302 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat302Slope) #declare MJHMat302Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 129
#ifdef (lg_dark_brown) #ifndef (MJHTex308) #declare MJHTex308 = texture { lg_dark_brown } #end #end
#ifdef (lg_dark_brown) #ifndef (MJHTex308Slope) #declare MJHTex308Slope = texture { lg_dark_brown normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_dark_brown) #ifndef (MJHMat308) #declare MJHMat308 = material { texture { lg_dark_brown } interior { lg_ior } } #end #end
#ifdef (lg_dark_brown) #ifndef (MJHMat308Slope) #declare MJHMat308Slope = material { texture { lg_dark_brown } interior { lg_ior } } #end #end

// row 130
#ifdef (lg_maersk_blue) #ifndef (MJHTex313) #declare MJHTex313 = texture { lg_maersk_blue } #end #end
#ifdef (lg_maersk_blue) #ifndef (MJHTex313Slope) #declare MJHTex313Slope = texture { lg_maersk_blue normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_maersk_blue) #ifndef (MJHMat313) #declare MJHMat313 = material { texture { lg_maersk_blue } interior { lg_ior } } #end #end
#ifdef (lg_maersk_blue) #ifndef (MJHMat313Slope) #declare MJHMat313Slope = material { texture { lg_maersk_blue } interior { lg_ior } } #end #end

// row 131
#ifdef (lg_dark_red) #ifndef (MJHTex320) #declare MJHTex320 = texture { lg_dark_red } #end #end
#ifdef (lg_dark_red) #ifndef (MJHTex320Slope) #declare MJHTex320Slope = texture { lg_dark_red normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_dark_red) #ifndef (MJHMat320) #declare MJHMat320 = material { texture { lg_dark_red } interior { lg_ior } } #end #end
#ifdef (lg_dark_red) #ifndef (MJHMat320Slope) #declare MJHMat320Slope = material { texture { lg_dark_red } interior { lg_ior } } #end #end

// row 132
#ifdef (lg_dark_azur) #ifndef (MJHTex321) #declare MJHTex321 = texture { lg_dark_azur } #end #end
#ifdef (lg_dark_azur) #ifndef (MJHTex321Slope) #declare MJHTex321Slope = texture { lg_dark_azur normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_dark_azur) #ifndef (MJHMat321) #declare MJHMat321 = material { texture { lg_dark_azur } interior { lg_ior } } #end #end
#ifdef (lg_dark_azur) #ifndef (MJHMat321Slope) #declare MJHMat321Slope = material { texture { lg_dark_azur } interior { lg_ior } } #end #end

// row 133
#ifdef (lg_medium_azur) #ifndef (MJHTex322) #declare MJHTex322 = texture { lg_medium_azur } #end #end
#ifdef (lg_medium_azur) #ifndef (MJHTex322Slope) #declare MJHTex322Slope = texture { lg_medium_azur normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_medium_azur) #ifndef (MJHMat322) #declare MJHMat322 = material { texture { lg_medium_azur } interior { lg_ior } } #end #end
#ifdef (lg_medium_azur) #ifndef (MJHMat322Slope) #declare MJHMat322Slope = material { texture { lg_medium_azur } interior { lg_ior } } #end #end

// row 134
#ifdef (lg_light_aqua) #ifndef (MJHTex323) #declare MJHTex323 = texture { lg_light_aqua } #end #end
#ifdef (lg_light_aqua) #ifndef (MJHTex323Slope) #declare MJHTex323Slope = texture { lg_light_aqua normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_light_aqua) #ifndef (MJHMat323) #declare MJHMat323 = material { texture { lg_light_aqua } interior { lg_ior } } #end #end
#ifdef (lg_light_aqua) #ifndef (MJHMat323Slope) #declare MJHMat323Slope = material { texture { lg_light_aqua } interior { lg_ior } } #end #end

// row 135
#ifdef (lg_rubber_red) #ifndef (MJHTex324) #declare MJHTex324 = texture { lg_rubber_red } #end #end
#ifdef (lg_rubber_red) #ifndef (MJHTex324Slope) #declare MJHTex324Slope = texture { lg_rubber_red normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_rubber_red) #ifndef (MJHMat324) #declare MJHMat324 = material { texture { lg_rubber_red } interior { lg_ior } } #end #end
#ifdef (lg_rubber_red) #ifndef (MJHMat324Slope) #declare MJHMat324Slope = material { texture { lg_rubber_red } interior { lg_ior } } #end #end

// row 136
#ifdef (lg_spring_yellowish_green) #ifndef (MJHTex326) #declare MJHTex326 = texture { lg_spring_yellowish_green } #end #end
#ifdef (lg_spring_yellowish_green) #ifndef (MJHTex326Slope) #declare MJHTex326Slope = texture { lg_spring_yellowish_green normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_spring_yellowish_green) #ifndef (MJHMat326) #declare MJHMat326 = material { texture { lg_spring_yellowish_green } interior { lg_ior } } #end #end
#ifdef (lg_spring_yellowish_green) #ifndef (MJHMat326Slope) #declare MJHMat326Slope = material { texture { lg_spring_yellowish_green } interior { lg_ior } } #end #end

// row 137
#ifdef (lg_missing) #ifndef (MJHTex329) #declare MJHTex329 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex329Slope) #declare MJHTex329Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat329) #declare MJHMat329 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat329Slope) #declare MJHMat329Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 138
#ifdef (lg_olive_green) #ifndef (MJHTex330) #declare MJHTex330 = texture { lg_olive_green } #end #end
#ifdef (lg_olive_green) #ifndef (MJHTex330Slope) #declare MJHTex330Slope = texture { lg_olive_green normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_olive_green) #ifndef (MJHMat330) #declare MJHMat330 = material { texture { lg_olive_green } interior { lg_ior } } #end #end
#ifdef (lg_olive_green) #ifndef (MJHMat330Slope) #declare MJHMat330Slope = material { texture { lg_olive_green } interior { lg_ior } } #end #end

// row 139
#ifdef (lg_chrome_gold) #ifndef (MJHTex334) #declare MJHTex334 = texture { lg_chrome_gold } #end #end
#ifdef (lg_chrome_gold) #ifndef (MJHTex334Slope) #declare MJHTex334Slope = texture { lg_chrome_gold normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_chrome_gold) #ifndef (MJHMat334) #declare MJHMat334 = material { texture { lg_chrome_gold } interior { lg_ior } } #end #end
#ifdef (lg_chrome_gold) #ifndef (MJHMat334Slope) #declare MJHMat334Slope = material { texture { lg_chrome_gold } interior { lg_ior } } #end #end

// row 140
#ifdef (lg_sand_red) #ifndef (MJHTex335) #declare MJHTex335 = texture { lg_sand_red } #end #end
#ifdef (lg_sand_red) #ifndef (MJHTex335Slope) #declare MJHTex335Slope = texture { lg_sand_red normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_sand_red) #ifndef (MJHMat335) #declare MJHMat335 = material { texture { lg_sand_red } interior { lg_ior } } #end #end
#ifdef (lg_sand_red) #ifndef (MJHMat335Slope) #declare MJHMat335Slope = material { texture { lg_sand_red } interior { lg_ior } } #end #end

// row 141
#ifdef (lg_missing) #ifndef (MJHTex339) #declare MJHTex339 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex339Slope) #declare MJHTex339Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat339) #declare MJHMat339 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat339Slope) #declare MJHMat339Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 142
#ifdef (lg_missing) #ifndef (MJHTex350) #declare MJHTex350 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex350Slope) #declare MJHTex350Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat350) #declare MJHMat350 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat350Slope) #declare MJHMat350Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 143
#ifdef (lg_missing) #ifndef (MJHTex351) #declare MJHTex351 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex351Slope) #declare MJHTex351Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat351) #declare MJHMat351 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat351Slope) #declare MJHMat351Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 144
#ifdef (lg_earth_orange) #ifndef (MJHTex366) #declare MJHTex366 = texture { lg_earth_orange } #end #end
#ifdef (lg_earth_orange) #ifndef (MJHTex366Slope) #declare MJHTex366Slope = texture { lg_earth_orange normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_earth_orange) #ifndef (MJHMat366) #declare MJHMat366 = material { texture { lg_earth_orange } interior { lg_ior } } #end #end
#ifdef (lg_earth_orange) #ifndef (MJHMat366Slope) #declare MJHMat366Slope = material { texture { lg_earth_orange } interior { lg_ior } } #end #end

// row 145
#ifdef (lg_sand_purple) #ifndef (MJHTex373) #declare MJHTex373 = texture { lg_sand_purple } #end #end
#ifdef (lg_sand_purple) #ifndef (MJHTex373Slope) #declare MJHTex373Slope = texture { lg_sand_purple normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_sand_purple) #ifndef (MJHMat373) #declare MJHMat373 = material { texture { lg_sand_purple } interior { lg_ior } } #end #end
#ifdef (lg_sand_purple) #ifndef (MJHMat373Slope) #declare MJHMat373Slope = material { texture { lg_sand_purple } interior { lg_ior } } #end #end

// row 146
#ifdef (lg_rubber_light_gray) #ifndef (MJHTex375) #declare MJHTex375 = texture { lg_rubber_light_gray } #end #end
#ifdef (lg_rubber_light_gray) #ifndef (MJHTex375Slope) #declare MJHTex375Slope = texture { lg_rubber_light_gray normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_rubber_light_gray) #ifndef (MJHMat375) #declare MJHMat375 = material { texture { lg_rubber_light_gray } interior { lg_ior } } #end #end
#ifdef (lg_rubber_light_gray) #ifndef (MJHMat375Slope) #declare MJHMat375Slope = material { texture { lg_rubber_light_gray } interior { lg_ior } } #end #end

// row 147
#ifdef (lg_sand_green) #ifndef (MJHTex378) #declare MJHTex378 = texture { lg_sand_green } #end #end
#ifdef (lg_sand_green) #ifndef (MJHTex378Slope) #declare MJHTex378Slope = texture { lg_sand_green normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_sand_green) #ifndef (MJHMat378) #declare MJHMat378 = material { texture { lg_sand_green } interior { lg_ior } } #end #end
#ifdef (lg_sand_green) #ifndef (MJHMat378Slope) #declare MJHMat378Slope = material { texture { lg_sand_green } interior { lg_ior } } #end #end

// row 148
#ifdef (lg_sand_blue) #ifndef (MJHTex379) #declare MJHTex379 = texture { lg_sand_blue } #end #end
#ifdef (lg_sand_blue) #ifndef (MJHTex379Slope) #declare MJHTex379Slope = texture { lg_sand_blue normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_sand_blue) #ifndef (MJHMat379) #declare MJHMat379 = material { texture { lg_sand_blue } interior { lg_ior } } #end #end
#ifdef (lg_sand_blue) #ifndef (MJHMat379Slope) #declare MJHMat379Slope = material { texture { lg_sand_blue } interior { lg_ior } } #end #end

// row 149
#ifdef (lg_chrome) #ifndef (MJHTex383) #declare MJHTex383 = texture { lg_chrome } #end #end
#ifdef (lg_chrome) #ifndef (MJHTex383Slope) #declare MJHTex383Slope = texture { lg_chrome normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_chrome) #ifndef (MJHMat383) #declare MJHMat383 = material { texture { lg_chrome } interior { lg_ior } } #end #end
#ifdef (lg_chrome) #ifndef (MJHMat383Slope) #declare MJHMat383Slope = material { texture { lg_chrome } interior { lg_ior } } #end #end

// row 150
#ifdef (lg_gold_chrome) #ifndef (MJHTex334) #declare MJHTex334 = texture { lg_gold_chrome } #end #end
#ifdef (lg_gold_chrome) #ifndef (MJHTex334Slope) #declare MJHTex334Slope = texture { lg_gold_chrome normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_gold_chrome) #ifndef (MJHMat334) #declare MJHMat334 = material { texture { lg_gold_chrome } interior { lg_ior } } #end #end
#ifdef (lg_gold_chrome) #ifndef (MJHMat334Slope) #declare MJHMat334Slope = material { texture { lg_gold_chrome } interior { lg_ior } } #end #end

// row 151
#ifdef (lg_rubber_dark_blue) #ifndef (MJHTex406) #declare MJHTex406 = texture { lg_rubber_dark_blue } #end #end
#ifdef (lg_rubber_dark_blue) #ifndef (MJHTex406Slope) #declare MJHTex406Slope = texture { lg_rubber_dark_blue normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_rubber_dark_blue) #ifndef (MJHMat406) #declare MJHMat406 = material { texture { lg_rubber_dark_blue } interior { lg_ior } } #end #end
#ifdef (lg_rubber_dark_blue) #ifndef (MJHMat406Slope) #declare MJHMat406Slope = material { texture { lg_rubber_dark_blue } interior { lg_ior } } #end #end

// row 152
#ifdef (lg_rubber_purple) #ifndef (MJHTex449) #declare MJHTex449 = texture { lg_rubber_purple } #end #end
#ifdef (lg_rubber_purple) #ifndef (MJHTex449Slope) #declare MJHTex449Slope = texture { lg_rubber_purple normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_rubber_purple) #ifndef (MJHMat449) #declare MJHMat449 = material { texture { lg_rubber_purple } interior { lg_ior } } #end #end
#ifdef (lg_rubber_purple) #ifndef (MJHMat449Slope) #declare MJHMat449Slope = material { texture { lg_rubber_purple } interior { lg_ior } } #end #end

// row 153
#ifdef (lg_fabuland_brown) #ifndef (MJHTex450) #declare MJHTex450 = texture { lg_fabuland_brown } #end #end
#ifdef (lg_fabuland_brown) #ifndef (MJHTex450Slope) #declare MJHTex450Slope = texture { lg_fabuland_brown normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_fabuland_brown) #ifndef (MJHMat450) #declare MJHMat450 = material { texture { lg_fabuland_brown } interior { lg_ior } } #end #end
#ifdef (lg_fabuland_brown) #ifndef (MJHMat450Slope) #declare MJHMat450Slope = material { texture { lg_fabuland_brown } interior { lg_ior } } #end #end

// row 154
#ifdef (lg_light_orange) #ifndef (MJHTex462) #declare MJHTex462 = texture { lg_light_orange } #end #end
#ifdef (lg_light_orange) #ifndef (MJHTex462Slope) #declare MJHTex462Slope = texture { lg_light_orange normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_light_orange) #ifndef (MJHMat462) #declare MJHMat462 = material { texture { lg_light_orange } interior { lg_ior } } #end #end
#ifdef (lg_light_orange) #ifndef (MJHMat462Slope) #declare MJHMat462Slope = material { texture { lg_light_orange } interior { lg_ior } } #end #end

// row 155
#ifdef (lg_dark_orange) #ifndef (MJHTex484) #declare MJHTex484 = texture { lg_dark_orange } #end #end
#ifdef (lg_dark_orange) #ifndef (MJHTex484Slope) #declare MJHTex484Slope = texture { lg_dark_orange normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_dark_orange) #ifndef (MJHMat484) #declare MJHMat484 = material { texture { lg_dark_orange } interior { lg_ior } } #end #end
#ifdef (lg_dark_orange) #ifndef (MJHMat484Slope) #declare MJHMat484Slope = material { texture { lg_dark_orange } interior { lg_ior } } #end #end

// row 156
#ifdef (lg_rubber_lime) #ifndef (MJHTex490) #declare MJHTex490 = texture { lg_rubber_lime } #end #end
#ifdef (lg_rubber_lime) #ifndef (MJHTex490Slope) #declare MJHTex490Slope = texture { lg_rubber_lime normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_rubber_lime) #ifndef (MJHMat490) #declare MJHMat490 = material { texture { lg_rubber_lime } interior { lg_ior } } #end #end
#ifdef (lg_rubber_lime) #ifndef (MJHMat490Slope) #declare MJHMat490Slope = material { texture { lg_rubber_lime } interior { lg_ior } } #end #end

// row 157
#ifdef (lg_magnet) #ifndef (MJHTex493) #declare MJHTex493 = texture { lg_magnet } #end #end
#ifdef (lg_magnet) #ifndef (MJHTex493Slope) #declare MJHTex493Slope = texture { lg_magnet normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_magnet) #ifndef (MJHMat493) #declare MJHMat493 = material { texture { lg_magnet } interior { lg_ior } } #end #end
#ifdef (lg_magnet) #ifndef (MJHMat493Slope) #declare MJHMat493Slope = material { texture { lg_magnet } interior { lg_ior } } #end #end

// row 158
#ifdef (lg_electric_contact_alloy) #ifndef (MJHTex494) #declare MJHTex494 = texture { lg_electric_contact_alloy } #end #end
#ifdef (lg_electric_contact_alloy) #ifndef (MJHTex494Slope) #declare MJHTex494Slope = texture { lg_electric_contact_alloy normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_electric_contact_alloy) #ifndef (MJHMat494) #declare MJHMat494 = material { texture { lg_electric_contact_alloy } interior { lg_ior } } #end #end
#ifdef (lg_electric_contact_alloy) #ifndef (MJHMat494Slope) #declare MJHMat494Slope = material { texture { lg_electric_contact_alloy } interior { lg_ior } } #end #end

// row 159
#ifdef (lg_missing) #ifndef (MJHTex495) #declare MJHTex495 = texture { lg_missing } #end #end
#ifdef (lg_missing) #ifndef (MJHTex495Slope) #declare MJHTex495Slope = texture { lg_missing normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat495) #declare MJHMat495 = material { texture { lg_missing } interior { lg_ior } } #end #end
#ifdef (lg_missing) #ifndef (MJHMat495Slope) #declare MJHMat495Slope = material { texture { lg_missing } interior { lg_ior } } #end #end

// row 160
#ifdef (lg_rubber_light_bluish_gray) #ifndef (MJHTex496) #declare MJHTex496 = texture { lg_rubber_light_bluish_gray } #end #end
#ifdef (lg_rubber_light_bluish_gray) #ifndef (MJHTex496Slope) #declare MJHTex496Slope = texture { lg_rubber_light_bluish_gray normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_rubber_light_bluish_gray) #ifndef (MJHMat496) #declare MJHMat496 = material { texture { lg_rubber_light_bluish_gray } interior { lg_ior } } #end #end
#ifdef (lg_rubber_light_bluish_gray) #ifndef (MJHMat496Slope) #declare MJHMat496Slope = material { texture { lg_rubber_light_bluish_gray } interior { lg_ior } } #end #end

// row 161
#ifdef (lg_very_light_grey) #ifndef (MJHTex503) #declare MJHTex503 = texture { lg_very_light_grey } #end #end
#ifdef (lg_very_light_grey) #ifndef (MJHTex503Slope) #declare MJHTex503Slope = texture { lg_very_light_grey normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_very_light_grey) #ifndef (MJHMat503) #declare MJHMat503 = material { texture { lg_very_light_grey } interior { lg_ior } } #end #end
#ifdef (lg_very_light_grey) #ifndef (MJHMat503Slope) #declare MJHMat503Slope = material { texture { lg_very_light_grey } interior { lg_ior } } #end #end

// row 162
#ifdef (lg_rubber_flat_silver) #ifndef (MJHTex504) #declare MJHTex504 = texture { lg_rubber_flat_silver } #end #end
#ifdef (lg_rubber_flat_silver) #ifndef (MJHTex504Slope) #declare MJHTex504Slope = texture { lg_rubber_flat_silver normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_rubber_flat_silver) #ifndef (MJHMat504) #declare MJHMat504 = material { texture { lg_rubber_flat_silver } interior { lg_ior } } #end #end
#ifdef (lg_rubber_flat_silver) #ifndef (MJHMat504Slope) #declare MJHMat504Slope = material { texture { lg_rubber_flat_silver } interior { lg_ior } } #end #end

// row 163
#ifdef (lg_rubber_white) #ifndef (MJHTex511) #declare MJHTex511 = texture { lg_rubber_white } #end #end
#ifdef (lg_rubber_white) #ifndef (MJHTex511Slope) #declare MJHTex511Slope = texture { lg_rubber_white normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_rubber_white) #ifndef (MJHMat511) #declare MJHMat511 = material { texture { lg_rubber_white } interior { lg_ior } } #end #end
#ifdef (lg_rubber_white) #ifndef (MJHMat511Slope) #declare MJHMat511Slope = material { texture { lg_rubber_white } interior { lg_ior } } #end #end

// row 164
#ifdef (lg_medium_orange) #ifndef (MJHTex998) #declare MJHTex998 = texture { lg_medium_orange } #end #end
#ifdef (lg_medium_orange) #ifndef (MJHTex998Slope) #declare MJHTex998Slope = texture { lg_medium_orange normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_medium_orange) #ifndef (MJHMat998) #declare MJHMat998 = material { texture { lg_medium_orange } interior { lg_ior } } #end #end
#ifdef (lg_medium_orange) #ifndef (MJHMat998Slope) #declare MJHMat998Slope = material { texture { lg_medium_orange } interior { lg_ior } } #end #end

// row 165
#ifdef (lg_undefined) #ifndef (MJHTex999) #declare MJHTex999 = texture { lg_undefined } #end #end
#ifdef (lg_undefined) #ifndef (MJHTex999Slope) #declare MJHTex999Slope = texture { lg_undefined normal { bumps lg_slope_bumps scale lg_slope_scale } } #end #end
#ifdef (lg_undefined) #ifndef (MJHMat999) #declare MJHMat999 = material { texture { lg_undefined } interior { lg_ior } } #end #end
#ifdef (lg_undefined) #ifndef (MJHMat999Slope) #declare MJHMat999Slope = material { texture { lg_undefined } interior { lg_ior } } #end #end

