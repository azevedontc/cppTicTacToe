// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Surfaces.pas' rev: 35.00 (Windows)

#ifndef Fmx_SurfacesHPP
#define Fmx_SurfacesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Classes.hpp>
#include <FMX.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Surfaces
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TBitmapSurface;
class DELPHICLASS TMipmapSurface;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBitmapSurface : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	void *FBits;
	int FPitch;
	int FWidth;
	int FHeight;
	Fmx::Types::TPixelFormat FPixelFormat;
	int FBytesPerPixel;
	void * __fastcall GetScanline(const int Index);
	System::Uitypes::TAlphaColor __fastcall GetPixel(const int X, const int Y);
	void __fastcall SetPixel(const int X, const int Y, const System::Uitypes::TAlphaColor Value);
	static void __fastcall SwapColors(System::Uitypes::TAlphaColor &Color1, System::Uitypes::TAlphaColor &Color2)/* overload */;
	void __fastcall SwapColors(const int X1, const int Y1, const int X2, const int Y2)/* overload */;
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	
public:
	__fastcall TBitmapSurface();
	__fastcall virtual ~TBitmapSurface();
	void * __fastcall GetPixelAddr(const int X, const int Y);
	void __fastcall Clear(const System::Uitypes::TAlphaColor Color);
	void __fastcall SetSize(const int AWidth, const int AHeight, const Fmx::Types::TPixelFormat APixelFormat = (Fmx::Types::TPixelFormat)(0x0));
	void __fastcall StretchFrom(TBitmapSurface* const Source, const int NewWidth, const int NewHeight, Fmx::Types::TPixelFormat APixelFormat = (Fmx::Types::TPixelFormat)(0x0));
	void __fastcall Mirror();
	void __fastcall Flip();
	void __fastcall Rotate90();
	void __fastcall Rotate180();
	void __fastcall Rotate270();
	__property void * Bits = {read=FBits};
	__property int Pitch = {read=FPitch, nodefault};
	__property int Width = {read=FWidth, nodefault};
	__property int Height = {read=FHeight, nodefault};
	__property Fmx::Types::TPixelFormat PixelFormat = {read=FPixelFormat, nodefault};
	__property int BytesPerPixel = {read=FBytesPerPixel, nodefault};
	__property void * Scanline[const int Index] = {read=GetScanline};
	__property System::Uitypes::TAlphaColor Pixels[const int X][const int Y] = {read=GetPixel, write=SetPixel};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMipmapSurface : public TBitmapSurface
{
	typedef TBitmapSurface inherited;
	
	
private:
	typedef System::Generics::Collections::TObjectList__1<TMipmapSurface*>* TMipmapSurfaces;
	
	
private:
	System::Generics::Collections::TObjectList__1<TMipmapSurface*>* FChildMipmaps;
	int __fastcall GetMipCount();
	TMipmapSurface* __fastcall GetMip(const int MipIndex);
	
protected:
	void __fastcall StretchHalfFrom(TMipmapSurface* const Source);
	
public:
	__fastcall TMipmapSurface();
	__fastcall virtual ~TMipmapSurface();
	void __fastcall GenerateMips();
	void __fastcall ClearMips();
	__property int MipCount = {read=GetMipCount, nodefault};
	__property TMipmapSurface* Mip[const int MipIndex] = {read=GetMip};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Surfaces */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_SURFACES)
using namespace Fmx::Surfaces;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_SurfacesHPP
