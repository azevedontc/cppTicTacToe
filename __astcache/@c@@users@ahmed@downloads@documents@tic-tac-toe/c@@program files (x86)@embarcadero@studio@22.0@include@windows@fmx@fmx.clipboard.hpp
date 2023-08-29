// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Clipboard.pas' rev: 35.00 (Windows)

#ifndef Fmx_ClipboardHPP
#define Fmx_ClipboardHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.Rtti.hpp>
#include <System.SysUtils.hpp>
#include <FMX.Platform.hpp>
#include <FMX.Surfaces.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Clipboard
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IFMXExtendedClipboardService;
typedef System::DelphiInterface<IFMXExtendedClipboardService> _di_IFMXExtendedClipboardService;
class DELPHICLASS EClipboardError;
class DELPHICLASS EClipboardFormatRegisterError;
class DELPHICLASS EClipboardFormatNotRegistered;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{E96E4776-8234-49F9-B15F-301074E23F70}") IFMXExtendedClipboardService  : public Fmx::Platform::IFMXClipboardService 
{
	virtual bool __fastcall HasText() = 0 ;
	virtual System::UnicodeString __fastcall GetText() = 0 ;
	virtual void __fastcall SetText(const System::UnicodeString Value) = 0 ;
	virtual bool __fastcall HasImage() = 0 ;
	virtual Fmx::Surfaces::TBitmapSurface* __fastcall GetImage() = 0 ;
	virtual void __fastcall SetImage(Fmx::Surfaces::TBitmapSurface* const Value) = 0 ;
	virtual void __fastcall RegisterCustomFormat(const System::UnicodeString AFormatName) = 0 ;
	virtual bool __fastcall IsCustomFormatRegistered(const System::UnicodeString AFormatName) = 0 ;
	virtual void __fastcall UnregisterCustomFormat(const System::UnicodeString AFormatName) = 0 ;
	virtual bool __fastcall HasCustomFormat(const System::UnicodeString AFormatName) = 0 ;
	virtual bool __fastcall GetCustomFormat(const System::UnicodeString AFormatName, System::Classes::TStream* const AStream) = 0 ;
	virtual void __fastcall SetCustomFormat(const System::UnicodeString AFormatName, System::Classes::TStream* const AStream) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EClipboardError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EClipboardError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EClipboardError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EClipboardError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EClipboardError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EClipboardError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EClipboardError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EClipboardError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EClipboardError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EClipboardError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EClipboardError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EClipboardError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EClipboardError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EClipboardError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EClipboardFormatRegisterError : public EClipboardError
{
	typedef EClipboardError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EClipboardFormatRegisterError(const System::UnicodeString Msg) : EClipboardError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EClipboardFormatRegisterError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EClipboardError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EClipboardFormatRegisterError(NativeUInt Ident)/* overload */ : EClipboardError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EClipboardFormatRegisterError(System::PResStringRec ResStringRec)/* overload */ : EClipboardError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EClipboardFormatRegisterError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EClipboardError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EClipboardFormatRegisterError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EClipboardError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EClipboardFormatRegisterError(const System::UnicodeString Msg, int AHelpContext) : EClipboardError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EClipboardFormatRegisterError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EClipboardError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EClipboardFormatRegisterError(NativeUInt Ident, int AHelpContext)/* overload */ : EClipboardError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EClipboardFormatRegisterError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EClipboardError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EClipboardFormatRegisterError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EClipboardError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EClipboardFormatRegisterError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EClipboardError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EClipboardFormatRegisterError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EClipboardFormatNotRegistered : public EClipboardError
{
	typedef EClipboardError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EClipboardFormatNotRegistered(const System::UnicodeString Msg) : EClipboardError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EClipboardFormatNotRegistered(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EClipboardError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EClipboardFormatNotRegistered(NativeUInt Ident)/* overload */ : EClipboardError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EClipboardFormatNotRegistered(System::PResStringRec ResStringRec)/* overload */ : EClipboardError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EClipboardFormatNotRegistered(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EClipboardError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EClipboardFormatNotRegistered(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EClipboardError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EClipboardFormatNotRegistered(const System::UnicodeString Msg, int AHelpContext) : EClipboardError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EClipboardFormatNotRegistered(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EClipboardError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EClipboardFormatNotRegistered(NativeUInt Ident, int AHelpContext)/* overload */ : EClipboardError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EClipboardFormatNotRegistered(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EClipboardError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EClipboardFormatNotRegistered(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EClipboardError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EClipboardFormatNotRegistered(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EClipboardError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EClipboardFormatNotRegistered() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Clipboard */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_CLIPBOARD)
using namespace Fmx::Clipboard;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_ClipboardHPP
