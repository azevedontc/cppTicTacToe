// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Analytics.pas' rev: 35.00 (Windows)

#ifndef System_AnalyticsHPP
#define System_AnalyticsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Analytics
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IApplicationActivityCacheManager;
typedef System::DelphiInterface<IApplicationActivityCacheManager> _di_IApplicationActivityCacheManager;
__interface DELPHIINTERFACE IAppAnalyticsStartupDataRecorder;
typedef System::DelphiInterface<IAppAnalyticsStartupDataRecorder> _di_IAppAnalyticsStartupDataRecorder;
__interface DELPHIINTERFACE IApplicationActivityListener;
typedef System::DelphiInterface<IApplicationActivityListener> _di_IApplicationActivityListener;
class DELPHICLASS TAnalyticsManager;
class DELPHICLASS EAnalyticsInitializationFailed;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{6145E812-8ECA-4B69-994C-26A81B2A84DC}") IApplicationActivityCacheManager  : public System::IInterface 
{
	virtual int __fastcall GetCacheCount() = 0 ;
	virtual void __fastcall PersistData(const bool Wait) = 0 ;
	virtual void __fastcall ClearData() = 0 ;
	virtual void __fastcall Log(const System::UnicodeString AMessage) = 0 ;
	virtual void __fastcall RemoveEventAtIndex(const int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetEventAtIndex(const int Index) = 0 ;
	virtual void __fastcall SetOnDataCacheFull(const System::Classes::TNotifyEvent AValue) = 0 ;
	virtual System::Classes::TNotifyEvent __fastcall GetOnDataCacheFull() = 0 ;
	virtual void __fastcall SetMaxCacheSize(const int AValue) = 0 ;
	virtual int __fastcall GetMaxCacheSize() = 0 ;
	__property int CacheCount = {read=GetCacheCount};
	__property int MaxCacheSize = {read=GetMaxCacheSize, write=SetMaxCacheSize};
	__property System::UnicodeString Event[const int Index] = {read=GetEventAtIndex};
	__property System::Classes::TNotifyEvent OnDataCacheFull = {read=GetOnDataCacheFull, write=SetOnDataCacheFull};
};

__interface  INTERFACE_UUID("{783ED8DB-86BC-41C7-BBD3-443C19468FF1}") IAppAnalyticsStartupDataRecorder  : public System::IInterface 
{
	virtual void __fastcall AddEnvironmentField(const System::UnicodeString AKey, const System::UnicodeString AValue) = 0 ;
};

__interface  INTERFACE_UUID("{A67DE237-F274-4028-AAC8-DA0BDA0D5D78}") IApplicationActivityListener  : public System::IInterface 
{
	virtual void __fastcall TrackAppStart(const System::TDateTime TimeStamp) = 0 ;
	virtual void __fastcall TrackAppExit(const System::TDateTime TimeStamp) = 0 ;
	virtual void __fastcall TrackControlFocused(const System::TDateTime TimeStamp, System::TObject* const Sender) = 0 ;
	virtual void __fastcall TrackWindowActivated(const System::TDateTime TimeStamp, System::TObject* const Sender) = 0 ;
	virtual void __fastcall TrackEvent(const System::TDateTime TimeStamp, System::TObject* const Sender, System::TObject* const Context) = 0 ;
	virtual void __fastcall TrackException(const System::TDateTime TimeStamp, System::Sysutils::Exception* const E) = 0 ;
};

enum class DECLSPEC_DENUM TAppActivity : unsigned char { AppStart, AppExit, ControlFocused, WindowActivated, Exception, Custom };

typedef System::Set<TAppActivity, _DELPHI_SET_ENUMERATOR(TAppActivity::AppStart), _DELPHI_SET_ENUMERATOR(TAppActivity::Custom)> TAppActivityOptions;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TAnalyticsManager : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Generics::Collections::TList__1<_di_IApplicationActivityListener>* FListeners;
	bool __fastcall GetTrackingEnabled();
	
public:
	__fastcall virtual ~TAnalyticsManager();
	void __fastcall RegisterActivityListener(const _di_IApplicationActivityListener AListener);
	void __fastcall UnregisterActivityListener(const _di_IApplicationActivityListener AListener);
	void __fastcall RecordActivity(const TAppActivity Activity)/* overload */;
	void __fastcall RecordActivity(const TAppActivity Activity, System::TObject* const Sender)/* overload */;
	void __fastcall RecordActivity(const TAppActivity Activity, System::TObject* const Sender, System::TObject* const Context)/* overload */;
	__property bool TrackingEnabled = {read=GetTrackingEnabled, nodefault};
public:
	/* TObject.Create */ inline __fastcall TAnalyticsManager() : System::TObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EAnalyticsInitializationFailed : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAnalyticsInitializationFailed(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAnalyticsInitializationFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAnalyticsInitializationFailed(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAnalyticsInitializationFailed(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAnalyticsInitializationFailed(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAnalyticsInitializationFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAnalyticsInitializationFailed(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAnalyticsInitializationFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAnalyticsInitializationFailed(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAnalyticsInitializationFailed(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAnalyticsInitializationFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAnalyticsInitializationFailed(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAnalyticsInitializationFailed() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Analytics */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_ANALYTICS)
using namespace System::Analytics;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_AnalyticsHPP
