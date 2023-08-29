// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Styles.pas' rev: 35.00 (Windows)

#ifndef Fmx_StylesHPP
#define Fmx_StylesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <FMX.Types.hpp>
#include <FMX.Consts.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Styles
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EStyleException;
class DELPHICLASS TStyleDescription;
class DELPHICLASS TStyleTag;
__interface DELPHIINTERFACE IBinaryStyleContainer;
typedef System::DelphiInterface<IBinaryStyleContainer> _di_IBinaryStyleContainer;
class DELPHICLASS TStyleStreaming;
__interface DELPHIINTERFACE TStyleResourceEnumProc;
typedef System::DelphiInterface<TStyleResourceEnumProc> _di_TStyleResourceEnumProc;
class DELPHICLASS TStyleManager;
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<System::Byte, 13> TStyleSignature;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EStyleException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EStyleException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EStyleException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EStyleException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EStyleException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EStyleException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EStyleException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EStyleException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EStyleException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EStyleException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EStyleException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EStyleException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EStyleException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EStyleException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum class DECLSPEC_DENUM TStyleFormat : unsigned char { Indexed, Binary, Text };

class PASCALIMPLEMENTATION TStyleDescription : public Fmx::Types::TFmxObject
{
	typedef Fmx::Types::TFmxObject inherited;
	
	
private:
	enum class DECLSPEC_DENUM TProperty : unsigned char { Author, AuthorEMail, PlatformTarget, MobilePlatform, Title, Version };
	
	typedef System::StaticArray<System::UnicodeString, 6> _TStyleDescription__1;
	
	typedef System::StaticArray<System::UnicodeString, 5> _TStyleDescription__2;
	
	typedef System::StaticArray<System::UnicodeString, 5> _TStyleDescription__3;
	
	
private:
	static _TStyleDescription__1 Properties;
	
public:
	static _TStyleDescription__2 PlatformTargets;
	static _TStyleDescription__3 PlatformNames;
	
private:
	System::UnicodeString FAuthor;
	System::UnicodeString FVersion;
	System::UnicodeString FTitle;
	System::UnicodeString FAuthorEMail;
	System::UnicodeString FPlatformTarget;
	bool FMobilePlatform;
	System::UnicodeString FAuthorURL;
	__classmethod bool __fastcall TryLoadFromStream(System::Classes::TStream* const Stream, TStyleDescription* &StyleDescription);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	
public:
	virtual bool __fastcall Equals(System::TObject* Obj);
	bool __fastcall SupportsPlatform(const Fmx::Types::TOSPlatform APlatform);
	
__published:
	__property System::UnicodeString Author = {read=FAuthor, write=FAuthor};
	__property System::UnicodeString AuthorEMail = {read=FAuthorEMail, write=FAuthorEMail};
	__property System::UnicodeString AuthorURL = {read=FAuthorURL, write=FAuthorURL};
	__property System::UnicodeString PlatformTarget = {read=FPlatformTarget, write=FPlatformTarget};
	__property bool MobilePlatform = {read=FMobilePlatform, write=FMobilePlatform, nodefault};
	__property System::UnicodeString Title = {read=FTitle, write=FTitle};
	__property System::UnicodeString Version = {read=FVersion, write=FVersion};
public:
	/* TFmxObject.Create */ inline __fastcall virtual TStyleDescription(System::Classes::TComponent* AOwner) : Fmx::Types::TFmxObject(AOwner) { }
	/* TFmxObject.Destroy */ inline __fastcall virtual ~TStyleDescription() { }
	
};


class PASCALIMPLEMENTATION TStyleTag : public Fmx::Types::TFmxObject
{
	typedef Fmx::Types::TFmxObject inherited;
	
__published:
	__property Tag = {default=0};
	__property TagFloat = {default=0};
	__property TagString = {default=0};
public:
	/* TFmxObject.Create */ inline __fastcall virtual TStyleTag(System::Classes::TComponent* AOwner) : Fmx::Types::TFmxObject(AOwner) { }
	/* TFmxObject.Destroy */ inline __fastcall virtual ~TStyleTag() { }
	
};


__interface  INTERFACE_UUID("{76589FDB-7430-4F7A-A993-44AB1664BCFD}") IBinaryStyleContainer  : public System::IInterface 
{
	virtual void __fastcall ClearContainer() = 0 ;
	virtual void __fastcall AddBinaryFromStream(const System::UnicodeString Name, System::Classes::TStream* const SourceStream, const __int64 Size) = 0 ;
	virtual void __fastcall UnpackAllBinaries() = 0 ;
};

typedef bool __fastcall (*TSupportedPlatformHook)(const System::UnicodeString PlatformTarget);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStyleStreaming : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	struct DECLSPEC_DRECORD TIndexItem
	{
	public:
		System::UnicodeString Name;
		__int64 Size;
	};
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
	
private:
	static Fmx::Types::TFmxObjectClass FDefaultContainerClass;
	static TSupportedPlatformHook FSupportedPlatformHook;
#ifndef _WIN64
	__classmethod System::DynamicArray<TIndexItem> __fastcall ReadHeader(System::Classes::TStream* const AStream);
#else /* _WIN64 */
	__classmethod System::TArray__1<TIndexItem> __fastcall ReadHeader(System::Classes::TStream* const AStream);
#endif /* _WIN64 */
	__classmethod Fmx::Types::TFmxObject* __fastcall LoadFromIndexedStream(System::Classes::TStream* const AStream);
	static void __fastcall SaveToIndexedStream(Fmx::Types::TFmxObject* const Style, System::Classes::TStream* const AStream);
	static bool __fastcall IsSupportedPlatformTarget(const System::UnicodeString PlatformTarget);
	static bool __fastcall SameStyleDecription(Fmx::Types::TFmxObject* const Style1, Fmx::Types::TFmxObject* const Style2);
	static bool __fastcall SameObject(Fmx::Types::TFmxObject* const Obj1, Fmx::Types::TFmxObject* const Obj2);
	__classmethod bool __fastcall CompareSign(const TStyleSignature &Sign1, const TStyleSignature &Sign2);
	static bool __fastcall TryLoadStyleDescriptionFromIndexedStream(System::Classes::TStream* const Stream, TStyleDescription* &Description);
	
public:
	static bool __fastcall DefaultIsSupportedPlatformTarget(const System::UnicodeString PlatformTarget);
	__classmethod void __fastcall SaveToStream(Fmx::Types::TFmxObject* const Style, System::Classes::TStream* const AStream, const TStyleFormat Format = (TStyleFormat)(0x0));
	__classmethod bool __fastcall TryLoadStyleDescription(System::Classes::TStream* const Stream, TStyleDescription* &Description);
	__classmethod Fmx::Types::TFmxObject* __fastcall LoadFromFile(const System::UnicodeString FileName);
	__classmethod Fmx::Types::TFmxObject* __fastcall LoadFromStream(System::Classes::TStream* const AStream);
	__classmethod Fmx::Types::TFmxObject* __fastcall LoadFromResource(NativeUInt Instance, const System::UnicodeString ResourceName, System::WideChar * ResourceType);
	__classmethod bool __fastcall CanLoadFromFile(const System::UnicodeString FileName);
	__classmethod bool __fastcall CanLoadFromStream(System::Classes::TStream* const AStream);
	__classmethod bool __fastcall CanLoadFromResource(const System::UnicodeString ResourceName, System::WideChar * ResourceType)/* overload */;
	__classmethod bool __fastcall CanLoadFromResource(NativeUInt Instance, const System::UnicodeString ResourceName, System::WideChar * ResourceType)/* overload */;
	static bool __fastcall SameStyle(Fmx::Types::TFmxObject* const Style1, Fmx::Types::TFmxObject* const Style2);
	__classmethod void __fastcall SetDefaultContainerClass(const Fmx::Types::TFmxObjectClass AClass);
	__classmethod void __fastcall SetSupportedPlatformHook(const TSupportedPlatformHook AHook);
public:
	/* TObject.Create */ inline __fastcall TStyleStreaming() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TStyleStreaming() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef System::UnicodeString __fastcall (*TPlatformStyleSelectionProc)(const Fmx::Types::TOSPlatform APlatform);

__interface TStyleResourceEnumProc  : public System::IInterface 
{
	virtual void __fastcall Invoke(const System::UnicodeString AResourceName, const Fmx::Types::TOSPlatform APlatform) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStyleManager : /*[[sealed]]*/ public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	class DELPHICLASS TStyleManagerNotification;
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TStyleManagerNotification : public Fmx::Types::TFmxObject
	{
		typedef Fmx::Types::TFmxObject inherited;
		
	protected:
		virtual void __fastcall FreeNotification(System::TObject* AObject);
	public:
		/* TFmxObject.Create */ inline __fastcall virtual TStyleManagerNotification(System::Classes::TComponent* AOwner) : Fmx::Types::TFmxObject(AOwner) { }
		/* TFmxObject.Destroy */ inline __fastcall virtual ~TStyleManagerNotification() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
private:
	static TStyleManagerNotification* FStyleManagerNotification;
	static System::Generics::Collections::TDictionary__2<System::UnicodeString,Fmx::Types::TOSPlatform>* FPlatformResources;
	static System::Generics::Collections::TDictionary__2<Fmx::Types::TOSPlatform,TPlatformStyleSelectionProc>* FSelections;
	static System::Generics::Collections::TDictionary__2<System::UnicodeString,Fmx::Types::TFmxObject*>* FStyleResources;
	static System::UnicodeString __fastcall FindDefaultStyleResource(const Fmx::Types::TOSPlatform OSPlatform);
	static System::UnicodeString __fastcall StyleResourceForContext(Fmx::Types::TFmxObject* const Context);
	__classmethod TStyleManagerNotification* __fastcall StyleManagerNotification();
	
public:
	static void __fastcall RemoveStyleFromGlobalPool(Fmx::Types::TFmxObject* const Style);
	static void __fastcall UpdateScenes();
	__classmethod void __fastcall EnumStyleResources(_di_TStyleResourceEnumProc Proc);
	__classmethod Fmx::Types::TFmxObject* __fastcall GetStyleResource(const System::UnicodeString ResourceName);
	__classmethod void __fastcall RegisterPlatformStyleResource(const Fmx::Types::TOSPlatform APlatform, const System::UnicodeString ResourceName);
	__classmethod void __fastcall RegisterPlatformStyleSelection(const Fmx::Types::TOSPlatform APlatform, const TPlatformStyleSelectionProc ASelection);
	static Fmx::Types::TFmxObject* __fastcall ActiveStyle(Fmx::Types::TFmxObject* const Context);
	static Fmx::Types::TFmxObject* __fastcall ActiveStyleForScene(const System::_di_IInterface AScene);
	__classmethod void __fastcall SetStyle(Fmx::Types::TFmxObject* const Style)/* overload */;
	__classmethod void __fastcall SetStyle(Fmx::Types::TFmxObject* const Context, Fmx::Types::TFmxObject* const Style)/* overload */;
	__classmethod bool __fastcall SetStyleFromFile(const System::UnicodeString FileName)/* overload */;
	__classmethod bool __fastcall SetStyleFromFile(Fmx::Types::TFmxObject* const Context, const System::UnicodeString FileName)/* overload */;
	__classmethod bool __fastcall TrySetStyleFromResource(const System::UnicodeString ResourceName);
	__classmethod void __fastcall UnInitialize();
	__classmethod TStyleDescription* __fastcall FindStyleDescriptor(Fmx::Types::TFmxObject* const AObject);
	__classmethod TStyleDescription* __fastcall GetStyleDescriptionForControl(Fmx::Types::TFmxObject* const AObject);
public:
	/* TObject.Create */ inline __fastcall TStyleManager() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TStyleManager() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TStyleSignature FireMonkeyStyleSign;
extern DELPHI_PACKAGE TStyleSignature FireMonkey25StyleSign;
}	/* namespace Styles */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_STYLES)
using namespace Fmx::Styles;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_StylesHPP
