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


// Currently does support blurred reflections, but does not support SSLT (yet).
// +am3 +r9 +a0.002 +ac0.99
// +am = sampling method
// +r = antialias depth
// +a = antialias threshold
// +ac = ???

#version 3.7;

#declare LDXSkipOpaqueColorMacro = true;
#declare LDXSkipTransColorMacro = true;

#declare PlasticSpecularity  = 1.0;
#declare PlasticRoughness    = 0.001;



#macro LDXSeamMatrix(Width, Height, Depth, CenterX, CenterY, CenterZ)
#local aw = 0;
#local ah = 0;
#local ad = 0;
#local ax = 0;
#local ay = 0;
#local az = 0;
#if (Width != 0)
#local aw = 1-LDXSW/Width;
#end
#if (Height != 0)
#local ah = 1-LDXSW/Height;
#end
#if (Depth != 0)
#local ad = 1-LDXSW/Depth;
#end
#if (Width != 0 & CenterX != 0)
#local ax = LDXSW/(Width / CenterX);
#end
#if (Height != 0 & CenterY != 0)
#local ay = LDXSW/(Height / CenterY);
#end
#if (Depth != 0 & CenterZ != 0)
#local az = LDXSW/(Depth / CenterZ);
#end
#if (aw <= 0)
#local aw = 1;
#local ax = 0;
#end
#if (ah <= 0)
#local ah = 1;
#local ay = 0;
#end
#if (ad <= 0)
#local ad = 1;
#local az = 0;
#end
matrix <aw,0,0,0,ah,0,0,0,ad,ax,ay,az>
#end



#macro LDXOpaqueColor(r, g, b)
#if (version >= 3.1) material { #end
	texture {
		pigment { srgbf <r,g,b,0> }
#if (LDXQual > 1)
		#if (Use_BlurRef = true)
			#if (Use_Uber = true)
				finish
				{
					emission		0
					specular albedo	PlasticSpecularity
					roughness		PlasticRoughness
					fresnel			on
					reflection
					{
						PlasticSpecularity
						fresnel on
						roughness PlasticRoughness
					}
					conserve_energy
				}
			#else
				finish
				{
					ambient			0
					diffuse albedo	1
					specular albedo	PlasticSpecularity
					roughness		PlasticRoughness
					fresnel			on
					reflection
					{
						PlasticSpecularity
						fresnel on
					}
					conserve_energy
				}
			#end
		#else
			finish { ambient LDXAmb diffuse LDXDif }
			finish { phong LDXPhong phong_size LDXPhongS reflection LDXRefl }
		#end
#end
	}
#if (version >= 3.1) #if (LDXQual > 1)
	interior { ior LDXIoR }
#end #end
#if (version >= 3.1) } #end
#end



#macro LDXTransColor(r, g, b)
#if (version >= 3.1) material { #end
	texture {
		pigment { #if (LDXQual > 1) srgbf <r,g,b,LDXTFilt> #else srgbf <0.6,0.6,0.6,0> #end }
#if (LDXQual > 1)
		#if (Use_BlurRef = true)
			#if (Use_Uber = true)
				finish
				{
					emission		0
					specular albedo	PlasticSpecularity
					roughness		PlasticRoughness
					fresnel			on
					reflection
					{
						PlasticSpecularity
						fresnel on
						roughness PlasticRoughness
					}
					conserve_energy
				}
			#else
				finish
				{
					ambient			0
					diffuse albedo	1
					specular albedo	PlasticSpecularity
					roughness		PlasticRoughness
					fresnel			on
					reflection
					{
						PlasticSpecularity
						fresnel on
					}
					conserve_energy
				}
			#end
		#else
			finish { ambient LDXAmb diffuse LDXDif }
			finish { phong LDXPhong phong_size LDXPhongS reflection LDXTRefl }
		#end
#end
	}
#if (version >= 3.1) #if (LDXQual > 1)
	interior { ior LDXIoR }
#end #end
#if (version >= 3.1) } #end
#end



#macro LDXRubberColor(r, g, b)
#if (version >= 3.1) material { #end
	texture {
		pigment { rgbf <r,g,b,0> }
#if (LDXQual > 1)
		#if (false = true)
			#if (Use_Uber = true)
				finish
				{
					emission		0
					specular albedo	PlasticSpecularity
					roughness		PlasticRoughness
					fresnel			on
					reflection
					{
						PlasticSpecularity
						fresnel on
						roughness PlasticRoughness
					}
					conserve_energy
				}
			#else
				// to do
			#end
		#else
			finish { ambient LDXAmb diffuse LDXDif }
			finish { phong LDXRubberPhong phong_size LDXRubberPhongS reflection LDXRubberRefl }
		#end
#end
	}
	// needs an interior and ior here as well for SSLT to work
#if (version >= 3.1) } #end
#end



#macro LDXChromeColor(r, g, b)
#if (version >= 3.1) material { #end
	texture {
		pigment { rgbf <r,g,b,0> }
#if (LDXQual > 1)
		#if (false = true)
			#if (Use_Uber = true)
				finish
				{
					emission		0
					specular albedo	PlasticSpecularity
					roughness		PlasticRoughness
					fresnel			on
					reflection
					{
						PlasticSpecularity
						fresnel on
						roughness PlasticRoughness
					}
					conserve_energy
				}
			#else
				// to do
			#end
		#else
			finish { ambient LDXAmb diffuse LDXDif }
			finish { phong LDXPhong phong_size LDXPhongS reflection LDXChromeRefl brilliance LDXChromeBril metallic specular LDXChromeSpec roughness LDXChromeRough}
		#end
#end
	}
	// needs an interior and ior here as well for SSLT to work
#if (version >= 3.1) } #end
#end



#ifndef (LDXColor0) // Black
#declare LDXColor0 = LDXOpaqueColor(0.019608,0.07451,0.113725)
#end

#ifndef (LDXColor1) // Blue
#declare LDXColor1 = LDXOpaqueColor(0,0.333333,0.74902)
#end

#ifndef (LDXColor2) // Green
#declare LDXColor2 = LDXOpaqueColor(0.145098,0.478431,0.243137)
#end

#ifndef (LDXColor3) // Dark Turquoise
#declare LDXColor3 = LDXOpaqueColor(0,0.513725,0.560784)
#end

#ifndef (LDXColor4) // Red
#declare LDXColor4 = LDXOpaqueColor(0.788235,0.101961,0.035294)
#end

#ifndef (LDXColor5) // Dark Pink
#declare LDXColor5 = LDXOpaqueColor(0.784314,0.439216,0.627451)
#end

#ifndef (LDXColor6) // Brown
#declare LDXColor6 = LDXOpaqueColor(0.345098,0.223529,0.152941)
#end

#ifndef (LDXColor7) // Light Grey
#declare LDXColor7 = LDXOpaqueColor(0.607843,0.631373,0.615686)
#end

#ifndef (LDXColor8) // Dark Grey
#declare LDXColor8 = LDXOpaqueColor(0.427451,0.431373,0.360784)
#end

#ifndef (LDXColor9) // Light Blue
#declare LDXColor9 = LDXOpaqueColor(0.705882,0.823529,0.890196)
#end

#ifndef (LDXColor10) // Bright Green
#declare LDXColor10 = LDXOpaqueColor(0.294118,0.623529,0.290196)
#end

#ifndef (LDXColor11) // Light Turquoise
#declare LDXColor11 = LDXOpaqueColor(0.333333,0.647059,0.686275)
#end

#ifndef (LDXColor12) // Salmon
#declare LDXColor12 = LDXOpaqueColor(0.94902,0.439216,0.368627)
#end

#ifndef (LDXColor13) // Pink
#declare LDXColor13 = LDXOpaqueColor(0.988235,0.592157,0.67451)
#end

#ifndef (LDXColor14) // Yellow
#declare LDXColor14 = LDXOpaqueColor(0.94902,0.803922,0.215686)
#end

#ifndef (LDXColor15) // White
#declare LDXColor15 = LDXOpaqueColor(1,1,1)
#end

#ifndef (LDXColor18) // Light Yellow
#declare LDXColor18 = LDXOpaqueColor(0.984314,0.901961,0.588235)
#end

#ifndef (LDXColor19) // Tan
#declare LDXColor19 = LDXOpaqueColor(0.894118,0.803922,0.619608)
#end

#ifndef (LDXColor20) // Light Violet
#declare LDXColor20 = LDXOpaqueColor(0.788235,0.792157,0.886275)
#end

#ifndef (LDXColor25) // Orange
#declare LDXColor25 = LDXOpaqueColor(0.996078,0.541176,0.094118)
#end

#ifndef (LDXColor26) // Magenta
#declare LDXColor26 = LDXOpaqueColor(0.572549,0.223529,0.470588)
#end

#ifndef (LDXColor27) // Lime
#declare LDXColor27 = LDXOpaqueColor(0.733333,0.913725,0.043137)
#end

#ifndef (LDXColor28) // Dark Tan
#declare LDXColor28 = LDXOpaqueColor(0.584314,0.541176,0.45098)
#end

#ifndef (LDXColor32) // Trans Black IR Lens
#declare LDXColor32 = LDXTransColor(0,0,0)
#end

#ifndef (LDXColor33) // Trans Dark Blue
#declare LDXColor33 = LDXTransColor(0,0.188235,0.962745)
#end

#ifndef (LDXColor34) // Trans Green
#declare LDXColor34 = LDXTransColor(0.205882,0.705882,0.382353)
#end

#ifndef (LDXColor35) // Trans Bright Green
#declare LDXColor35 = LDXTransColor(0.505882,0.990196,0.411765)
#end

#ifndef (LDXColor36) // Trans Red
#declare LDXColor36 = LDXTransColor(0.978824,0.152941,0.052941)
#end

#ifndef (LDXColor37) // Trans Dark Pink
#declare LDXColor37 = LDXTransColor(0.987451,0.6,0.958431)
#end

#ifndef (LDXColor38) // Trans Neon Orange
#declare LDXColor38 = LDXTransColor(1,0.950196,0.076471)
#end

#ifndef (LDXColor39) // Trans Very Light Blue
#declare LDXColor39 = LDXTransColor(0.975686,0.987451,0.994118)
#end

#ifndef (LDXColor40) // Trans Black
#declare LDXColor40 = LDXTransColor(0.582353,0.558824,0.482353)
#end

#ifndef (LDXColor41) // Trans Medium Blue
#declare LDXColor41 = LDXTransColor(0.5,0.960392,0.971765)
#end

#ifndef (LDXColor42) // Trans Neon Green
#declare LDXColor42 = LDXTransColor(0.975294,1,0)
#end

#ifndef (LDXColor43) // Trans Light Blue
#declare LDXColor43 = LDXTransColor(0.968235,0.991373,0.993725)
#end

#ifndef (LDXColor44) // Trans Bright Reddish Lilac
#declare LDXColor44 = LDXTransColor(0.958824,0.658824,0.962353)
#end

#ifndef (LDXColor45) // Trans Pink
#declare LDXColor45 = LDXTransColor(0.998824,0.959216,0.967451)
#end

#ifndef (LDXColor46) // Trans Yellow
#declare LDXColor46 = LDXTransColor(0.996078,0.980392,0.276471)
#end

#ifndef (LDXColor47) // Trans Clear
#declare LDXColor47 = LDXTransColor(0.998824,0.998824,0.998824)
#end

#ifndef (LDXColor57) // Trans Orange
#declare LDXColor57 = LDXTransColor(0.994118,0.956078,0.164706)
#end

#ifndef (LDXColor60) // Chrome Antique Brass
#declare LDXColor60 = LDXChromeColor(0.392157,0.352941,0.298039)
#end

#ifndef (LDXColor70) // Reddish Brown
#declare LDXColor70 = LDXOpaqueColor(0.345098,0.164706,0.070588)
#end

#ifndef (LDXColor71) // Light Bluish Grey
#declare LDXColor71 = LDXOpaqueColor(0.627451,0.647059,0.662745)
#end

#ifndef (LDXColor72) // Dark Bluish Grey
#declare LDXColor72 = LDXOpaqueColor(0.423529,0.431373,0.407843)
#end

#ifndef (LDXColor74) // Medium Green
#declare LDXColor74 = LDXOpaqueColor(0.45098,0.862745,0.631373)
#end

#ifndef (LDXColor77) // Light Pink
#declare LDXColor77 = LDXOpaqueColor(0.996078,0.8,0.811765)
#end

#ifndef (LDXColor80) // Metallic Silver
#declare LDXColor80 = LDXOpaqueColor(0.647059,0.662745,0.705882)
#end

#ifndef (LDXColor82) // Metallic Gold
#declare LDXColor82 = LDXOpaqueColor(0.858824,0.67451,0.203922)
#end

#ifndef (LDXColor87) // Metallic Dark Grey
#declare LDXColor87 = LDXOpaqueColor(0.427451,0.431373,0.360784)
#end

#ifndef (LDXColor110) // Violet
#declare LDXColor110 = LDXOpaqueColor(0.262745,0.329412,0.639216)
#end

#ifndef (LDXColor134) // Copper
#declare LDXColor134 = LDXOpaqueColor(0.588235,0.290196,0.152941)
#end

#ifndef (LDXColor256) // Rubber Black
#declare LDXColor256 = LDXRubberColor(0.129412,0.129412,0.129412)
#end

#ifndef (LDXColor258)
#declare LDXColor258 = LDXOpaqueColor(0.098039,0.34902,0.2)
#end

#ifndef (LDXColor272) // Dark Blue
#declare LDXColor272 = LDXOpaqueColor(0.05098,0.196078,0.356863)
#end

#ifndef (LDXColor277)
#declare LDXColor277 = LDXOpaqueColor(0.498039,0.2,0.647059)
#end

#ifndef (LDXColor288) // Dark Green
#declare LDXColor288 = LDXOpaqueColor(0.094118,0.27451,0.196078)
#end

#ifndef (LDXColor320) // Dark Red
#declare LDXColor320 = LDXOpaqueColor(0.447059,0.054902,0.058824)
#end

#ifndef (LDXColor324) // Rubber Red
#declare LDXColor324 = LDXRubberColor(0.768627,0,0.14902)
#end

#ifndef (LDXColor334) // Chrome Gold
#declare LDXColor334 = LDXChromeColor(0.733333,0.647059,0.239216)
#end

#ifndef (LDXColor354)
#declare LDXColor354 = LDXOpaqueColor(0.2,0.34902,0.098039)
#end

#ifndef (LDXColor366) // Earth Orange
#declare LDXColor366 = LDXOpaqueColor(0.980392,0.611765,0.109804)
#end

#ifndef (LDXColor379) // Sand Blue
#declare LDXColor379 = LDXOpaqueColor(0.34902,0.443137,0.517647)
#end

#ifndef (LDXColor382)
#declare LDXColor382 = LDXOpaqueColor(0.8,0.666667,0.4)
#end

#ifndef (LDXColor383) // Chrome Silver
#declare LDXColor383 = LDXChromeColor(0.878431,0.878431,0.878431)
#end

#ifndef (LDXColor484) // Dark Orange
#declare LDXColor484 = LDXOpaqueColor(0.662745,0.333333,0)
#end

#ifndef (LDXColor487)
#declare LDXColor487 = LDXOpaqueColor(0.8,0.74902,0.298039)
#end

#ifndef (LDXColor492)
#declare LDXColor492 = LDXOpaqueColor(1,0.447059,0)
#end

#ifndef (LDXColor493) // Magnet
#declare LDXColor493 = LDXOpaqueColor(0.396078,0.403922,0.380392)
#end

#ifndef (LDXColor494) // Electric Contact Alloy
#declare LDXColor494 = LDXOpaqueColor(0.815686,0.815686,0.815686)
#end

#ifndef (LDXColor503) // Very Light Grey
#declare LDXColor503 = LDXOpaqueColor(0.901961,0.890196,0.854902)
#end
