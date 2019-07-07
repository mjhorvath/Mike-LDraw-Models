# LDCad

* LDCad output does not support alternate normals for sloped parts by default. I would need to add such capability manually, which is not trivial.
* Currently, I don't think LDCad supports the LGEO library at all for whatever reason.
* Textures are defined separately from materials.
* The files suffixed with "mjh" and "clipka" feature support for subsurface light transport (SSLT) and blurred reflections.

# L3P

* Textures are defined separately from materials.
* Does support special normals for sloped parts.
* The latest L3P version expects a macro called "L3TextureOtherRGBFAL" but it is never defined.
* L3P has not been updated to support the new gamma system yet. All "rgb" color vectors need to be updated to "srgb", and other changes will also need to be made.
* Lots of "Not supported yet, using Opaque" messages throughout the code. However, most of the other systems are also incomplete.
* Does not support SSLT or blurred reflections.

# LDView

* By default, LDView materials do not have normals. There are also no alternative materials for sloped parts featuring extra bumps.
* Only when substituting the default mesh geometry with LGEO geometry does LDView add normals to the regular materials and create special materials for sloped parts.
* LDView output also does not define textures separately from materials as the other program do.
* The files suffixed with "mjh" feature support for blurred reflections, but not SSLT yet.

# LGEO

* In the LGEO library, ABS and PC plastic parts do not have any normals. Parts made of other materials (e.g. rubber, pearl, chrome, transparent) do have normals, however. 
* By default, sloped parts don't have alternative normals, despite that the sloped parts themselves have always supported this feature. Some programs add normals to these parts, however.
* Default LGEO materials do not support SSLT or blurred reflections.

# POV-Ray

* Some of the materials declare two finishes or two normals in the same texture block. I'm not sure this is a good idea, and think it could result in unintended consequences. It might be better to instead merge them into a single finish or normal block. However, blurred reflections exploit this capability to create an effect.
