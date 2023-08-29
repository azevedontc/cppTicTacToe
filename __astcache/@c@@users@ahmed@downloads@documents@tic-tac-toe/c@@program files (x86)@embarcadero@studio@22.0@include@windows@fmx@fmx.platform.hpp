// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Platform.pas' rev: 35.00 (Windows)

#ifndef Fmx_PlatformHPP
#define Fmx_PlatformHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Types.hpp>
#include <System.Rtti.hpp>
#include <System.UITypes.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Devices.hpp>
#include <System.Messaging.hpp>
#include <FMX.Types.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Dialogs.hpp>
#include <FMX.Text.hpp>
#include <FMX.Graphics.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Platform
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EInvalidFmxHandle;
class DELPHICLASS EUnsupportedPlatformService;
class DELPHICLASS EUnsupportedOSVersion;
class DELPHICLASS TPlatformServices;
__interface DELPHIINTERFACE IFMXApplicationService;
typedef System::DelphiInterface<IFMXApplicationService> _di_IFMXApplicationService;
struct TApplicationEventHelper /* Helper for enum 'TApplicationEvent' */;
struct TApplicationEventData;
class DELPHICLASS TApplicationEventMessage;
__interface DELPHIINTERFACE IFMXApplicationEventService;
typedef System::DelphiInterface<IFMXApplicationEventService> _di_IFMXApplicationEventService;
class DELPHICLASS TSystemAppearance;
class DELPHICLASS TSystemAppearanceChangedMessage;
__interface DELPHIINTERFACE IFMXSystemAppearanceService;
typedef System::DelphiInterface<IFMXSystemAppearanceService> _di_IFMXSystemAppearanceService;
__interface DELPHIINTERFACE IFMXHideAppService;
typedef System::DelphiInterface<IFMXHideAppService> _di_IFMXHideAppService;
__interface DELPHIINTERFACE IFMXDeviceService;
typedef System::DelphiInterface<IFMXDeviceService> _di_IFMXDeviceService;
__interface DELPHIINTERFACE IFMXDeviceMetricsService;
typedef System::DelphiInterface<IFMXDeviceMetricsService> _di_IFMXDeviceMetricsService;
__interface DELPHIINTERFACE IFMXDragDropService;
typedef System::DelphiInterface<IFMXDragDropService> _di_IFMXDragDropService;
__interface DELPHIINTERFACE IFMXClipboardService;
typedef System::DelphiInterface<IFMXClipboardService> _di_IFMXClipboardService;
__interface DELPHIINTERFACE IFMXScreenService;
typedef System::DelphiInterface<IFMXScreenService> _di_IFMXScreenService;
__interface DELPHIINTERFACE IFMXMultiDisplayService;
typedef System::DelphiInterface<IFMXMultiDisplayService> _di_IFMXMultiDisplayService;
__interface DELPHIINTERFACE IFMXLocaleService;
typedef System::DelphiInterface<IFMXLocaleService> _di_IFMXLocaleService;
__interface DELPHIINTERFACE IFMXDialogService;
typedef System::DelphiInterface<IFMXDialogService> _di_IFMXDialogService;
__interface DELPHIINTERFACE IFMXDialogServiceSync;
typedef System::DelphiInterface<IFMXDialogServiceSync> _di_IFMXDialogServiceSync;
__interface DELPHIINTERFACE IFMXDialogServiceAsync;
typedef System::DelphiInterface<IFMXDialogServiceAsync> _di_IFMXDialogServiceAsync;
__interface DELPHIINTERFACE IFMXLoggingService;
typedef System::DelphiInterface<IFMXLoggingService> _di_IFMXLoggingService;
__interface DELPHIINTERFACE IFMXTextService;
typedef System::DelphiInterface<IFMXTextService> _di_IFMXTextService;
__interface DELPHIINTERFACE IFMXCanvasService;
typedef System::DelphiInterface<IFMXCanvasService> _di_IFMXCanvasService;
__interface DELPHIINTERFACE IFMXContextService;
typedef System::DelphiInterface<IFMXContextService> _di_IFMXContextService;
__interface DELPHIINTERFACE IFMXGestureRecognizersService;
typedef System::DelphiInterface<IFMXGestureRecognizersService> _di_IFMXGestureRecognizersService;
__interface DELPHIINTERFACE TRenderingSetupCallback;
typedef System::DelphiInterface<TRenderingSetupCallback> _di_TRenderingSetupCallback;
__interface DELPHIINTERFACE IFMXRenderingSetupService;
typedef System::DelphiInterface<IFMXRenderingSetupService> _di_IFMXRenderingSetupService;
__interface DELPHIINTERFACE IFMXWindowsTouchService;
typedef System::DelphiInterface<IFMXWindowsTouchService> _di_IFMXWindowsTouchService;
__interface DELPHIINTERFACE IFMXListingService;
typedef System::DelphiInterface<IFMXListingService> _di_IFMXListingService;
__interface DELPHIINTERFACE IFMXSaveStateService;
typedef System::DelphiInterface<IFMXSaveStateService> _di_IFMXSaveStateService;
struct TScrollingBehaviourHelper /* Helper for enum 'TScrollingBehaviour' */;
__interface DELPHIINTERFACE IFMXSystemInformationService;
typedef System::DelphiInterface<IFMXSystemInformationService> _di_IFMXSystemInformationService;
__interface DELPHIINTERFACE IFMXListViewPresentationService;
typedef System::DelphiInterface<IFMXListViewPresentationService> _di_IFMXListViewPresentationService;
struct TComponentKindHelper /* Helper for enum 'TComponentKind' */;
__interface DELPHIINTERFACE IFMXDefaultMetricsService;
typedef System::DelphiInterface<IFMXDefaultMetricsService> _di_IFMXDefaultMetricsService;
__interface DELPHIINTERFACE IFMXDefaultPropertyValueService;
typedef System::DelphiInterface<IFMXDefaultPropertyValueService> _di_IFMXDefaultPropertyValueService;
struct TCaretBehaviorHelper /* Helper for enum 'TCaretBehavior' */;
__interface DELPHIINTERFACE IFMXTextEditingService;
typedef System::DelphiInterface<IFMXTextEditingService> _di_IFMXTextEditingService;
struct TPushNotificationData;
class DELPHICLASS TPushNotificationMessageBase;
class DELPHICLASS TPushStartupNotificationMessage;
class DELPHICLASS TPushRemoteNotificationMessage;
struct TPushDeviceTokenData;
class DELPHICLASS TPushDeviceTokenMessage;
struct TPushFailToRegisterData;
class DELPHICLASS TPushFailToRegisterMessage;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EInvalidFmxHandle : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvalidFmxHandle(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvalidFmxHandle(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidFmxHandle(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidFmxHandle(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidFmxHandle(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidFmxHandle(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidFmxHandle(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidFmxHandle(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidFmxHandle(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidFmxHandle(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidFmxHandle(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidFmxHandle(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidFmxHandle() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EUnsupportedPlatformService : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	__fastcall EUnsupportedPlatformService(const System::UnicodeString Msg);
public:
	/* Exception.CreateFmt */ inline __fastcall EUnsupportedPlatformService(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EUnsupportedPlatformService(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EUnsupportedPlatformService(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EUnsupportedPlatformService(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EUnsupportedPlatformService(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EUnsupportedPlatformService(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EUnsupportedPlatformService(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EUnsupportedPlatformService(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EUnsupportedPlatformService(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EUnsupportedPlatformService(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EUnsupportedPlatformService(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EUnsupportedPlatformService() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EUnsupportedOSVersion : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EUnsupportedOSVersion(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EUnsupportedOSVersion(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EUnsupportedOSVersion(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EUnsupportedOSVersion(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EUnsupportedOSVersion(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EUnsupportedOSVersion(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EUnsupportedOSVersion(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EUnsupportedOSVersion(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EUnsupportedOSVersion(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EUnsupportedOSVersion(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EUnsupportedOSVersion(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EUnsupportedOSVersion(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EUnsupportedOSVersion() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPlatformServices : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Generics::Collections::TDictionary__2<GUID,System::_di_IInterface>* FServicesList;
	System::Generics::Collections::TDictionary__2<System::UnicodeString,bool>* FGlobalFlags;
	static TPlatformServices* FCurrent;
	static bool FCurrentReleased;
	__classmethod void __fastcall ReleaseCurrent();
	static TPlatformServices* __fastcall GetCurrent();
	
public:
	__fastcall TPlatformServices();
	__fastcall virtual ~TPlatformServices();
	void __fastcall AddPlatformService(const GUID &AServiceGUID, const System::_di_IInterface AService);
	void __fastcall RemovePlatformService(const GUID &AServiceGUID);
	System::_di_IInterface __fastcall GetPlatformService(const GUID &AServiceGUID);
	bool __fastcall SupportsPlatformService(const GUID &AServiceGUID)/* overload */;
	bool __fastcall SupportsPlatformService(const GUID &AServiceGUID, /* out */ void *AService)/* overload */;
	__property System::Generics::Collections::TDictionary__2<System::UnicodeString,bool>* GlobalFlags = {read=FGlobalFlags};
	/* static */ __property TPlatformServices* Current = {read=GetCurrent};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{EFBE3310-D103-4E9E-A8E1-4E45AB46D0D8}") IFMXApplicationService  : public System::IInterface 
{
	virtual void __fastcall Run() = 0 ;
	virtual bool __fastcall HandleMessage() = 0 ;
	virtual void __fastcall WaitMessage() = 0 ;
	virtual System::UnicodeString __fastcall GetDefaultTitle() = 0 ;
	virtual System::UnicodeString __fastcall GetTitle() = 0 ;
	virtual void __fastcall SetTitle(const System::UnicodeString Value) = 0 ;
	virtual System::UnicodeString __fastcall GetVersionString() = 0 ;
	virtual void __fastcall Terminate() = 0 ;
	virtual bool __fastcall Terminating() = 0 ;
	virtual bool __fastcall Running() = 0 ;
	__property System::UnicodeString DefaultTitle = {read=GetDefaultTitle};
	__property System::UnicodeString Title = {read=GetTitle, write=SetTitle};
	__property System::UnicodeString AppVersion = {read=GetVersionString};
};

enum class DECLSPEC_DENUM TApplicationEvent : unsigned char { FinishedLaunching, BecameActive, WillBecomeInactive, EnteredBackground, WillBecomeForeground, WillTerminate, LowMemory, TimeChange, OpenURL, aeFinishedLaunching _DEPRECATED_ATTRIBUTE3("Use TApplicationEvent.FinishedLaunching")  = 0, aeBecameActive _DEPRECATED_ATTRIBUTE3("Use TApplicationEvent.BecameActive")  = 1, aeWillBecomeInactive _DEPRECATED_ATTRIBUTE3("Use TApplicationEvent.WillBecomeInactive")  = 2, aeEnteredBackground _DEPRECATED_ATTRIBUTE3("Use TApplicationEvent.EnteredBackground")  = 3, aeWillBecomeForeground _DEPRECATED_ATTRIBUTE3("Use TApplicationEvent.WillBecomeForeground")  = 4, aeWillTerminate _DEPRECATED_ATTRIBUTE3("Use TApplicationEvent.WillTerminate")  = 5, aeLowMemory _DEPRECATED_ATTRIBUTE3("Use TApplicationEvent.LowMemory")  = 6, 
	aeTimeChange _DEPRECATED_ATTRIBUTE3("Use TApplicationEvent.TimeChange")  = 7, aeOpenURL _DEPRECATED_ATTRIBUTE3("Use TApplicationEvent.OpenURL")  = 8 };

struct DECLSPEC_DRECORD TApplicationEventData
{
public:
	TApplicationEvent Event;
	System::TObject* Context;
	__fastcall TApplicationEventData(const TApplicationEvent AEvent, System::TObject* AContext);
	TApplicationEventData() {}
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TApplicationEventMessage : public System::Messaging::TMessage__1<TApplicationEventData>
{
	typedef System::Messaging::TMessage__1<TApplicationEventData> inherited;
	
public:
	__fastcall TApplicationEventMessage(const TApplicationEventData &AData);
public:
	/* {System_Messaging}TMessage<FMX_Platform_TApplicationEventData>.Destroy */ inline __fastcall virtual ~TApplicationEventMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef bool __fastcall (__closure *TApplicationEventHandler)(TApplicationEvent AAppEvent, System::TObject* AContext);

__interface  INTERFACE_UUID("{F3AAF11A-1678-4CC6-A5BF-721A24A676FD}") IFMXApplicationEventService  : public System::IInterface 
{
	virtual void __fastcall SetApplicationEventHandler(TApplicationEventHandler AEventHandler) = 0 ;
};

enum class DECLSPEC_DENUM TSystemThemeKind : unsigned char { Unspecified, Light, Dark };

enum class DECLSPEC_DENUM TSystemColorType : unsigned char { Accent };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSystemAppearance : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Uitypes::TAlphaColor __fastcall GetSystemColor(const TSystemColorType Index);
	TSystemThemeKind __fastcall GetThemeKind();
	
public:
	__property System::Uitypes::TAlphaColor AccentColor = {read=GetSystemColor, index=0, nodefault};
	__property TSystemThemeKind ThemeKind = {read=GetThemeKind, nodefault};
public:
	/* TObject.Create */ inline __fastcall TSystemAppearance() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TSystemAppearance() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSystemAppearanceChangedMessage : public System::Messaging::TObjectMessage__1<TSystemAppearance*>
{
	typedef System::Messaging::TObjectMessage__1<TSystemAppearance*> inherited;
	
public:
	/* {System_Messaging}TObjectMessage<FMX_Platform_TSystemAppearance>.Create */ inline __fastcall TSystemAppearanceChangedMessage(TSystemAppearance* const AValue, bool AOwnsObject) : System::Messaging::TObjectMessage__1<TSystemAppearance*>(AValue, AOwnsObject) { }
	/* {System_Messaging}TObjectMessage<FMX_Platform_TSystemAppearance>.Destroy */ inline __fastcall virtual ~TSystemAppearanceChangedMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{AB6A83D9-0118-4C5F-95CC-351DBB5EA943}") IFMXSystemAppearanceService  : public System::IInterface 
{
	virtual TSystemThemeKind __fastcall GetSystemThemeKind() = 0 ;
	virtual System::Uitypes::TAlphaColor __fastcall GetSystemColor(const TSystemColorType AType) = 0 ;
	__property TSystemThemeKind ThemeKind = {read=GetSystemThemeKind};
};

__interface  INTERFACE_UUID("{D9E49FCB-6A8B-454C-B11A-CEB3CEFAD357}") IFMXHideAppService  : public System::IInterface 
{
	virtual bool __fastcall GetHidden() = 0 ;
	virtual void __fastcall SetHidden(const bool Value) = 0 ;
	virtual void __fastcall HideOthers() = 0 ;
	__property bool Hidden = {read=GetHidden, write=SetHidden};
};

enum class DECLSPEC_DENUM TDeviceFeature : unsigned char { HasTouchScreen };

typedef System::Set<TDeviceFeature, _DELPHI_SET_ENUMERATOR(TDeviceFeature::HasTouchScreen), _DELPHI_SET_ENUMERATOR(TDeviceFeature::HasTouchScreen)> TDeviceFeatures;

__interface  INTERFACE_UUID("{9419B3C0-379A-4556-B5CA-36C975462326}") IFMXDeviceService  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetModel() = 0 ;
	virtual TDeviceFeatures __fastcall GetFeatures() = 0 ;
	virtual System::Devices::TDeviceInfo::TDeviceClass __fastcall GetDeviceClass() = 0 ;
};

__interface  INTERFACE_UUID("{CCC4D351-BA3A-4884-B4F6-4F020600F15F}") IFMXDeviceMetricsService  : public System::IInterface 
{
	virtual Fmx::Types::TDeviceDisplayMetrics __fastcall GetDisplayMetrics() = 0 ;
};

__interface  INTERFACE_UUID("{73133536-5868-44B6-B02D-7364F75FAD0E}") IFMXDragDropService  : public System::IInterface 
{
	virtual void __fastcall BeginDragDrop(Fmx::Forms::TCommonCustomForm* AForm, const Fmx::Types::TDragObject &Data, Fmx::Graphics::TBitmap* ABitmap) = 0 ;
};

__interface  INTERFACE_UUID("{CC9F70B3-E5AE-4E01-A6FB-E3FC54F5C54E}") IFMXClipboardService  : public System::IInterface 
{
	virtual System::Rtti::TValue __fastcall GetClipboard() = 0 ;
	virtual void __fastcall SetClipboard(const System::Rtti::TValue &Value) = 0 ;
};

__interface  INTERFACE_UUID("{BBA246B6-8DEF-4490-9D9C-D2CBE6251A24}") IFMXScreenService  : public System::IInterface 
{
	virtual System::Types::TPointF __fastcall GetScreenSize() = 0 ;
	virtual float __fastcall GetScreenScale() = 0 ;
	virtual Fmx::Types::TScreenOrientation __fastcall GetScreenOrientation() = 0 ;
	virtual void __fastcall SetSupportedScreenOrientations(const Fmx::Types::TScreenOrientations AOrientations) = 0 ;
};

__interface  INTERFACE_UUID("{133A6050-AC29-4233-9EE2-D49082C33BBF}") IFMXMultiDisplayService  : public System::IInterface 
{
	virtual int __fastcall GetDisplayCount() = 0 ;
	virtual System::Types::TRectF __fastcall GetWorkAreaRect() = 0 ;
	virtual System::Types::TRect __fastcall GetPhysicalWorkAreaRect() = 0 ;
	virtual System::Types::TRectF __fastcall GetDesktopRect() = 0 ;
	virtual System::Types::TRect __fastcall GetPhysicalDesktopRect() = 0 ;
	virtual Fmx::Types::TDisplay __fastcall GetDisplay(const int Index) = 0 ;
	virtual System::Types::TRectF __fastcall GetDesktopCenterRect(const System::Types::TSizeF &Size) = 0 ;
	virtual void __fastcall UpdateDisplayInformation() = 0 ;
	__property int DisplayCount = {read=GetDisplayCount};
	__property System::Types::TRectF WorkAreaRect = {read=GetWorkAreaRect};
	__property System::Types::TRectF DesktopRect = {read=GetDesktopRect};
	__property System::Types::TRect PhysicalWorkAreaRect = {read=GetPhysicalWorkAreaRect};
	__property System::Types::TRect PhysicalDesktopRect = {read=GetPhysicalDesktopRect};
	__property Fmx::Types::TDisplay Displays[const int Index] = {read=GetDisplay};
	virtual Fmx::Types::TDisplay __fastcall DisplayFromWindow(Fmx::Types::TWindowHandle* const Handle) = 0 ;
	virtual Fmx::Types::TDisplay __fastcall DisplayFromPoint(Fmx::Types::TWindowHandle* const Handle, const System::Types::TPoint &Point) = 0 ;
};

__interface  INTERFACE_UUID("{311A40D4-3D5B-40CC-A201-78465760B25E}") IFMXLocaleService  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetCurrentLangID() = 0 ;
	virtual System::UnicodeString __fastcall GetLocaleFirstDayOfWeek _DEPRECATED_ATTRIBUTE1("Use GetFirstWeekday instead") () = 0 ;
	virtual System::Byte __fastcall GetFirstWeekday() = 0 ;
};

__interface  INTERFACE_UUID("{CF7DCC1C-B5D6-4B24-92E7-1D09768E2D6B}") IFMXDialogService  : public System::IInterface 
{
	virtual bool __fastcall DialogOpenFiles(Fmx::Dialogs::TOpenDialog* const ADialog, System::Classes::TStrings* &AFiles, System::Uitypes::TDialogType AType = (System::Uitypes::TDialogType)(0x0)) = 0 ;
	virtual bool __fastcall DialogPrint(bool &ACollate, bool &APrintToFile, int &AFromPage, int &AToPage, int &ACopies, int AMinPage, int AMaxPage, System::Uitypes::TPrintRange &APrintRange, System::Uitypes::TPrintDialogOptions AOptions) = 0 ;
	virtual bool __fastcall PageSetupGetDefaults(System::Types::TRect &AMargin, System::Types::TRect &AMinMargin, System::Types::TPointF &APaperSize, System::Uitypes::TPageMeasureUnits AUnits, System::Uitypes::TPageSetupDialogOptions AOptions) = 0 ;
	virtual bool __fastcall DialogPageSetup(System::Types::TRect &AMargin, System::Types::TRect &AMinMargin, System::Types::TPointF &APaperSize, System::Uitypes::TPageMeasureUnits &AUnits, System::Uitypes::TPageSetupDialogOptions AOptions) = 0 ;
	virtual bool __fastcall DialogSaveFiles(Fmx::Dialogs::TOpenDialog* const ADialog, System::Classes::TStrings* &AFiles) = 0 ;
	virtual bool __fastcall DialogPrinterSetup() = 0 ;
	virtual int __fastcall MessageDialog _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Uitypes::TMsgDlgBtn ADefaultButton, const int AX, const int AY, const System::Classes::THelpContext AHelpCtx, const System::UnicodeString AHelpFileName) = 0 /* overload */;
	virtual void __fastcall MessageDialog _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Uitypes::TMsgDlgBtn ADefaultButton, const int AX, const int AY, const System::Classes::THelpContext AHelpCtx, const System::UnicodeString AHelpFileName, const Fmx::Dialogs::_di_TInputCloseDialogProc ACloseDialogProc) = 0 /* overload */;
	virtual bool __fastcall InputQuery _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString ACaption, const System::UnicodeString *APrompts, const int APrompts_High, System::UnicodeString *AValues, const int AValues_High, const Fmx::Dialogs::_di_TInputCloseQueryFunc ACloseQueryFunc = Fmx::Dialogs::_di_TInputCloseQueryFunc()) = 0 /* overload */;
	virtual void __fastcall InputQuery _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString ACaption, const System::UnicodeString *APrompts, const int APrompts_High, const System::UnicodeString *ADefaultValues, const int ADefaultValues_High, const Fmx::Dialogs::_di_TInputCloseQueryProc ACloseQueryProc) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{7E6B3966-C08E-466F-B4A0-7996A1C3BA04}") IFMXDialogServiceSync  : public System::IInterface 
{
	virtual void __fastcall ShowMessageSync(const System::UnicodeString AMessage) = 0 ;
	virtual int __fastcall MessageDialogSync(const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Uitypes::TMsgDlgBtn ADefaultButton, const System::Classes::THelpContext AHelpCtx) = 0 ;
	virtual bool __fastcall InputQuerySync(const System::UnicodeString ACaption, const System::UnicodeString *APrompts, const int APrompts_High, System::UnicodeString *AValues, const int AValues_High) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{BB65E682-1F27-42E1-90DE-6FA006E09EA5}") IFMXDialogServiceAsync  : public System::IInterface 
{
	virtual void __fastcall ShowMessageAsync(const System::UnicodeString AMessage) = 0 /* overload */;
	virtual void __fastcall ShowMessageAsync(const System::UnicodeString AMessage, const Fmx::Dialogs::_di_TInputCloseDialogProc ACloseDialogProc) = 0 /* overload */;
	virtual void __fastcall ShowMessageAsync(const System::UnicodeString AMessage, const Fmx::Dialogs::TInputCloseDialogEvent ACloseDialogEvent, System::TObject* const AContext = (System::TObject*)(0x0)) = 0 /* overload */;
	virtual void __fastcall MessageDialogAsync(const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Uitypes::TMsgDlgBtn ADefaultButton, const System::Classes::THelpContext AHelpCtx, const Fmx::Dialogs::_di_TInputCloseDialogProc ACloseDialogProc) = 0 /* overload */;
	virtual void __fastcall MessageDialogAsync(const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Uitypes::TMsgDlgBtn ADefaultButton, const System::Classes::THelpContext AHelpCtx, const Fmx::Dialogs::TInputCloseDialogEvent ACloseDialogEvent, System::TObject* const AContext = (System::TObject*)(0x0)) = 0 /* overload */;
	virtual void __fastcall InputQueryAsync(const System::UnicodeString ACaption, const System::UnicodeString *APrompts, const int APrompts_High, const System::UnicodeString *ADefaultValues, const int ADefaultValues_High, const Fmx::Dialogs::_di_TInputCloseQueryProc ACloseDialogProc) = 0 /* overload */;
	virtual void __fastcall InputQueryAsync(const System::UnicodeString ACaption, const System::UnicodeString *APrompts, const int APrompts_High, const System::UnicodeString *ADefaultValues, const int ADefaultValues_High, const Fmx::Dialogs::TInputCloseQueryWithResultEvent ACloseQueryEvent, System::TObject* const AContext = (System::TObject*)(0x0)) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{01BFC200-0493-4B3B-9D7E-E3CDB1242795}") IFMXLoggingService  : public System::IInterface 
{
	virtual void __fastcall Log(const System::UnicodeString AFormat, const System::TVarRec *AParams, const int AParams_High) = 0 ;
};

__interface  INTERFACE_UUID("{A5FECE29-9A9C-4E8A-8794-89271EC71F1A}") IFMXTextService  : public System::IInterface 
{
	virtual Fmx::Text::TTextServiceClass __fastcall GetTextServiceClass() = 0 ;
};

__interface  INTERFACE_UUID("{476E5E53-A77A-4ADA-93E3-CA66A8956059}") IFMXCanvasService  : public System::IInterface 
{
	virtual void __fastcall RegisterCanvasClasses() = 0 ;
	virtual void __fastcall UnregisterCanvasClasses() = 0 ;
};

__interface  INTERFACE_UUID("{EB6C9074-48B9-4A99-ABF4-BFB6FCF9C385}") IFMXContextService  : public System::IInterface 
{
	virtual void __fastcall RegisterContextClasses() = 0 ;
	virtual void __fastcall UnregisterContextClasses() = 0 ;
};

__interface  INTERFACE_UUID("{5EFE3EC8-FF73-4275-A52A-43B3FCC628D8}") IFMXGestureRecognizersService  : public System::IInterface 
{
	virtual void __fastcall AddRecognizer(const Fmx::Types::TInteractiveGesture ARec, Fmx::Forms::TCommonCustomForm* const AForm) = 0 ;
	virtual void __fastcall RemoveRecognizer(const Fmx::Types::TInteractiveGesture ARec, Fmx::Forms::TCommonCustomForm* const AForm) = 0 ;
};

__interface TRenderingSetupCallback  : public System::IInterface 
{
	virtual void __fastcall Invoke(System::TObject* const Sender, System::TObject* const Context, int &ColorBits, int &DepthBits, bool &Stencil, int &Multisamples) = 0 ;
};

__interface  INTERFACE_UUID("{CFF9D71C-5188-422F-BE5F-DC968D1BFD02}") IFMXRenderingSetupService  : public System::IInterface 
{
	virtual void __fastcall Subscribe(const _di_TRenderingSetupCallback Callback, System::TObject* const Context = (System::TObject*)(0x0)) = 0 ;
	virtual void __fastcall Unsubscribe() = 0 ;
	virtual void __fastcall Invoke(int &ColorBits, int &DepthBits, bool &Stencil, int &Multisamples) = 0 ;
};

__interface  INTERFACE_UUID("{216EFB8E-6275-4AE3-BC82-85BEC00C3F5B}") IFMXWindowsTouchService  : public System::IInterface 
{
	virtual void __fastcall HookTouchHandler(Fmx::Forms::TCommonCustomForm* const AForm) = 0 ;
	virtual void __fastcall UnhookTouchHandler(Fmx::Forms::TCommonCustomForm* const AForm) = 0 ;
};

enum class DECLSPEC_DENUM TListingHeaderBehavior : unsigned char { Sticky };

typedef System::Set<TListingHeaderBehavior, _DELPHI_SET_ENUMERATOR(TListingHeaderBehavior::Sticky), _DELPHI_SET_ENUMERATOR(TListingHeaderBehavior::Sticky)> TListingHeaderBehaviors;

enum class DECLSPEC_DENUM TListingSearchFeature : unsigned char { StayOnTop, AsFirstItem };

typedef System::Set<TListingSearchFeature, _DELPHI_SET_ENUMERATOR(TListingSearchFeature::StayOnTop), _DELPHI_SET_ENUMERATOR(TListingSearchFeature::AsFirstItem)> TListingSearchFeatures;

enum class DECLSPEC_DENUM TListingTransitionFeature : unsigned char { EditMode, DeleteButtonSlide, PullToRefresh, ScrollGlow };

typedef System::Set<TListingTransitionFeature, _DELPHI_SET_ENUMERATOR(TListingTransitionFeature::EditMode), _DELPHI_SET_ENUMERATOR(TListingTransitionFeature::ScrollGlow)> TListingTransitionFeatures;

enum class DECLSPEC_DENUM TListingEditModeFeature : unsigned char { Delete };

typedef System::Set<TListingEditModeFeature, _DELPHI_SET_ENUMERATOR(TListingEditModeFeature::Delete), _DELPHI_SET_ENUMERATOR(TListingEditModeFeature::Delete)> TListingEditModeFeatures;

__interface  INTERFACE_UUID("{942C2800-D66E-4094-9B77-BA88A1FBC788}") IFMXListingService  : public System::IInterface 
{
	virtual TListingHeaderBehaviors __fastcall GetHeaderBehaviors() = 0 ;
	virtual TListingSearchFeatures __fastcall GetSearchFeatures() = 0 ;
	virtual TListingTransitionFeatures __fastcall GetTransitionFeatures() = 0 ;
	virtual TListingEditModeFeatures __fastcall GetEditModeFeatures() = 0 ;
};

__interface  INTERFACE_UUID("{34CB784A-E262-4E2C-B3B6-C3A41B722D7A}") IFMXSaveStateService  : public System::IInterface 
{
	virtual bool __fastcall GetBlock(const System::UnicodeString ABlockName, System::Classes::TStream* const ABlockData) = 0 ;
	virtual bool __fastcall SetBlock(const System::UnicodeString ABlockName, System::Classes::TStream* const ABlockData) = 0 ;
	virtual System::UnicodeString __fastcall GetStoragePath() = 0 ;
	virtual void __fastcall SetStoragePath(const System::UnicodeString ANewPath) = 0 ;
	virtual bool __fastcall GetNotifications() = 0 ;
	__property bool Notifications = {read=GetNotifications};
};

enum class DECLSPEC_DENUM TScrollingBehaviour : unsigned char { BoundsAnimation, Animation, TouchTracking, AutoShowing, sbBoundsAnimation _DEPRECATED_ATTRIBUTE3("Use TScrollingBehaviour.BoundsAnimation")  = 0, sbAnimation _DEPRECATED_ATTRIBUTE3("Use TScrollingBehaviour.Animation")  = 1, sbTouchTracking _DEPRECATED_ATTRIBUTE3("Use TScrollingBehaviour.TouchTracking")  = 2, sbAutoShowing _DEPRECATED_ATTRIBUTE3("Use TScrollingBehaviour.AutoShowing")  = 3 };

typedef System::Set<TScrollingBehaviour, _DELPHI_SET_ENUMERATOR(TScrollingBehaviour::BoundsAnimation), _DELPHI_SET_ENUMERATOR(TScrollingBehaviour::AutoShowing)> TScrollingBehaviours;

__interface  INTERFACE_UUID("{2E01A60B-E297-4AC0-AA24-C5F52289EC1E}") IFMXSystemInformationService  : public System::IInterface 
{
	virtual TScrollingBehaviours __fastcall GetScrollingBehaviour() = 0 ;
	virtual float __fastcall GetMinScrollThumbSize() = 0 ;
	virtual int __fastcall GetCaretWidth() = 0 ;
	virtual int __fastcall GetMenuShowDelay() = 0 ;
};

__interface  INTERFACE_UUID("{2D5DA8DF-BC91-4956-93BA-F4BCE5FB38A0}") IFMXListViewPresentationService  : public System::IInterface 
{
	virtual System::_di_IInterface __fastcall AttachPresentation(const System::_di_IInterface Parent) = 0 ;
	virtual void __fastcall DetachPresentation(const System::_di_IInterface Parent) = 0 ;
};

enum class DECLSPEC_DENUM TComponentKind : unsigned char { Button, Label, Edit, ScrollBar, ListBoxItem, RadioButton, CheckBox, Calendar, ckButton _DEPRECATED_ATTRIBUTE3("Use TComponentKind.Button")  = 0, ckLabel _DEPRECATED_ATTRIBUTE3("Use TComponentKind.Label")  = 1, ckEdit _DEPRECATED_ATTRIBUTE3("Use TComponentKind.Edit")  = 2, ckScrollBar _DEPRECATED_ATTRIBUTE3("Use TComponentKind.ScrollBar")  = 3, ckListBoxItem _DEPRECATED_ATTRIBUTE3("Use TComponentKind.ListBoxItem")  = 4, ckRadioButton _DEPRECATED_ATTRIBUTE3("Use TComponentKind.RadioButton")  = 5, ckCheckBox _DEPRECATED_ATTRIBUTE3("Use TComponentKind.CheckBox")  = 6 };

__interface  INTERFACE_UUID("{216841F5-C089-45F1-B350-E9B018B73441}") IFMXDefaultMetricsService  : public System::IInterface 
{
	virtual bool __fastcall SupportsDefaultSize(const TComponentKind AComponent) = 0 ;
	virtual System::Types::TSize __fastcall GetDefaultSize(const TComponentKind AComponent) = 0 ;
};

__interface  INTERFACE_UUID("{7E8A25A0-5FCF-49FA-990C-CEDE6ABEAE50}") IFMXDefaultPropertyValueService  : public System::IInterface 
{
	virtual System::Rtti::TValue __fastcall GetDefaultPropertyValue(const System::UnicodeString AClassName, const System::UnicodeString PropertyName) = 0 ;
};

enum class DECLSPEC_DENUM TCaretBehavior : unsigned char { DisableCaretInsideWords, cbDisableCaretInsideWords _DEPRECATED_ATTRIBUTE3("Use TCaretBehavior.DisableCaretInsideWords")  = 0x0 };

typedef System::Set<TCaretBehavior, _DELPHI_SET_ENUMERATOR(TCaretBehavior::DisableCaretInsideWords), _DELPHI_SET_ENUMERATOR(TCaretBehavior::DisableCaretInsideWords)> TCaretBehaviors;

__interface  INTERFACE_UUID("{E6CF2889-1403-4853-AFF5-F69DEE8301C1}") IFMXTextEditingService  : public System::IInterface 
{
	virtual TCaretBehaviors __fastcall GetCaretBehaviors() = 0 ;
};

struct DECLSPEC_DRECORD TPushNotificationData
{
public:
	System::UnicodeString Notification;
	__fastcall TPushNotificationData(const System::UnicodeString ANotification);
	TPushNotificationData() {}
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPushNotificationMessageBase : public System::Messaging::TMessage__1<TPushNotificationData>
{
	typedef System::Messaging::TMessage__1<TPushNotificationData> inherited;
	
public:
#ifndef _WIN64
	/* {System_Messaging}TMessage<FMX_Platform_TPushNotificationData>.Create */ inline __fastcall TPushNotificationMessageBase(const TPushNotificationData AValue) : System::Messaging::TMessage__1<TPushNotificationData>(AValue) { }
#else /* _WIN64 */
	/* {System_Messaging}TMessage<FMX_Platform_TPushNotificationData>.Create */ inline __fastcall TPushNotificationMessageBase(const TPushNotificationData &AValue) : System::Messaging::TMessage__1<TPushNotificationData>(AValue) { }
#endif /* _WIN64 */
	/* {System_Messaging}TMessage<FMX_Platform_TPushNotificationData>.Destroy */ inline __fastcall virtual ~TPushNotificationMessageBase() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPushStartupNotificationMessage : public TPushNotificationMessageBase
{
	typedef TPushNotificationMessageBase inherited;
	
public:
#ifndef _WIN64
	/* {System_Messaging}TMessage<FMX_Platform_TPushNotificationData>.Create */ inline __fastcall TPushStartupNotificationMessage(const TPushNotificationData AValue) : TPushNotificationMessageBase(AValue) { }
#else /* _WIN64 */
	/* {System_Messaging}TMessage<FMX_Platform_TPushNotificationData>.Create */ inline __fastcall TPushStartupNotificationMessage(const TPushNotificationData &AValue) : TPushNotificationMessageBase(AValue) { }
#endif /* _WIN64 */
	/* {System_Messaging}TMessage<FMX_Platform_TPushNotificationData>.Destroy */ inline __fastcall virtual ~TPushStartupNotificationMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPushRemoteNotificationMessage : public TPushNotificationMessageBase
{
	typedef TPushNotificationMessageBase inherited;
	
public:
#ifndef _WIN64
	/* {System_Messaging}TMessage<FMX_Platform_TPushNotificationData>.Create */ inline __fastcall TPushRemoteNotificationMessage(const TPushNotificationData AValue) : TPushNotificationMessageBase(AValue) { }
#else /* _WIN64 */
	/* {System_Messaging}TMessage<FMX_Platform_TPushNotificationData>.Create */ inline __fastcall TPushRemoteNotificationMessage(const TPushNotificationData &AValue) : TPushNotificationMessageBase(AValue) { }
#endif /* _WIN64 */
	/* {System_Messaging}TMessage<FMX_Platform_TPushNotificationData>.Destroy */ inline __fastcall virtual ~TPushRemoteNotificationMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TPushDeviceTokenData
{
public:
	System::UnicodeString Token;
	void *RawToken;
	__fastcall TPushDeviceTokenData(const System::UnicodeString AToken, void * ARawToken);
	TPushDeviceTokenData() {}
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPushDeviceTokenMessage : public System::Messaging::TMessage__1<TPushDeviceTokenData>
{
	typedef System::Messaging::TMessage__1<TPushDeviceTokenData> inherited;
	
public:
	/* {System_Messaging}TMessage<FMX_Platform_TPushDeviceTokenData>.Create */ inline __fastcall TPushDeviceTokenMessage(const TPushDeviceTokenData &AValue) : System::Messaging::TMessage__1<TPushDeviceTokenData>(AValue) { }
	/* {System_Messaging}TMessage<FMX_Platform_TPushDeviceTokenData>.Destroy */ inline __fastcall virtual ~TPushDeviceTokenMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TPushFailToRegisterData
{
public:
	System::UnicodeString ErrorMessage;
	__fastcall TPushFailToRegisterData(const System::UnicodeString AErrorMessage);
	TPushFailToRegisterData() {}
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPushFailToRegisterMessage : public System::Messaging::TMessage__1<TPushFailToRegisterData>
{
	typedef System::Messaging::TMessage__1<TPushFailToRegisterData> inherited;
	
public:
#ifndef _WIN64
	/* {System_Messaging}TMessage<FMX_Platform_TPushFailToRegisterData>.Create */ inline __fastcall TPushFailToRegisterMessage(const TPushFailToRegisterData AValue) : System::Messaging::TMessage__1<TPushFailToRegisterData>(AValue) { }
#else /* _WIN64 */
	/* {System_Messaging}TMessage<FMX_Platform_TPushFailToRegisterData>.Create */ inline __fastcall TPushFailToRegisterMessage(const TPushFailToRegisterData &AValue) : System::Messaging::TMessage__1<TPushFailToRegisterData>(AValue) { }
#endif /* _WIN64 */
	/* {System_Messaging}TMessage<FMX_Platform_TPushFailToRegisterData>.Destroy */ inline __fastcall virtual ~TPushFailToRegisterMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Platform */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_PLATFORM)
using namespace Fmx::Platform;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_PlatformHPP
