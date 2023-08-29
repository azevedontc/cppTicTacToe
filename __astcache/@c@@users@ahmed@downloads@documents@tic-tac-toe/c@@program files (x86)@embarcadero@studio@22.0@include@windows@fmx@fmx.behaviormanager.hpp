// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.BehaviorManager.pas' rev: 35.00 (Windows)

#ifndef Fmx_BehaviormanagerHPP
#define Fmx_BehaviormanagerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Devices.hpp>
#include <FMX.Types.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Graphics.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Behaviormanager
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IStyleBehavior;
typedef System::DelphiInterface<IStyleBehavior> _di_IStyleBehavior;
__interface DELPHIINTERFACE IDeviceBehavior;
typedef System::DelphiInterface<IDeviceBehavior> _di_IDeviceBehavior;
__interface DELPHIINTERFACE IOSVersionForStyleBehavior;
typedef System::DelphiInterface<IOSVersionForStyleBehavior> _di_IOSVersionForStyleBehavior;
__interface DELPHIINTERFACE IFontBehavior;
typedef System::DelphiInterface<IFontBehavior> _di_IFontBehavior;
__interface DELPHIINTERFACE IListener;
typedef System::DelphiInterface<IListener> _di_IListener;
__interface DELPHIINTERFACE IPresentedControlBehavior;
typedef System::DelphiInterface<IPresentedControlBehavior> _di_IPresentedControlBehavior;
class DELPHICLASS TBehaviorServices;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{665EC261-3E3C-41F1-9964-ADCB39B47662}") IStyleBehavior  : public System::IInterface 
{
	virtual void __fastcall GetSystemStyle(Fmx::Types::TFmxObject* const Context, Fmx::Types::TFmxObject* &Style) = 0 ;
};

__interface  INTERFACE_UUID("{820055FF-2005-4160-8751-6BCD492C117E}") IDeviceBehavior  : public System::IInterface 
{
	virtual void __fastcall GetName(Fmx::Types::TFmxObject* const Context, System::UnicodeString &DeviceName) = 0 ;
	virtual System::Devices::TDeviceInfo::TDeviceClass __fastcall GetDeviceClass(Fmx::Types::TFmxObject* const Context) = 0 ;
	virtual System::Devices::TDeviceInfo* __fastcall GetDevice(Fmx::Types::TFmxObject* const Context) = 0 ;
	virtual Fmx::Types::TOSPlatform __fastcall GetOSPlatform(Fmx::Types::TFmxObject* const Context) = 0 ;
	virtual Fmx::Types::TDeviceDisplayMetrics __fastcall GetDisplayMetrics(Fmx::Types::TFmxObject* const Context) = 0 ;
};

__interface  INTERFACE_UUID("{F55F7580-3E67-4916-8D16-A33AFC171888}") IOSVersionForStyleBehavior  : public System::IInterface 
{
	virtual void __fastcall GetMajorOSVersion(Fmx::Types::TFmxObject* const Context, int &OSVersion) = 0 ;
};

__interface  INTERFACE_UUID("{25D83842-FF28-4748-90C0-7E8610141190}") IFontBehavior  : public System::IInterface 
{
	virtual void __fastcall GetDefaultFontFamily(Fmx::Types::TFmxObject* const Context, System::UnicodeString &FontFamily) = 0 ;
	virtual void __fastcall GetDefaultFontSize(Fmx::Types::TFmxObject* const Context, float &FontSize) = 0 ;
};

__interface  INTERFACE_UUID("{9D325387-E1F1-4B3F-A9FB-BAFF9CE03B8C}") IListener  : public System::IInterface 
{
	virtual void __fastcall GetBehaviorService(const GUID &AServiceGUID, System::_di_IInterface &AService, Fmx::Types::TFmxObject* const Context) = 0 ;
	virtual void __fastcall SupportsBehaviorService(const GUID &AServiceGUID, Fmx::Types::TFmxObject* const Context, bool &Found) = 0 /* overload */;
	virtual void __fastcall SupportsBehaviorService(const GUID &AServiceGUID, System::_di_IInterface &AService, Fmx::Types::TFmxObject* const Context, bool &Found) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{B98B1B59-C1AF-4D53-8D81-1A429460A11C}") IPresentedControlBehavior  : public System::IInterface 
{
	virtual Fmx::Graphics::TBitmap* __fastcall GetOverlayIcon() = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBehaviorServices : public System::TObject
{
	typedef System::TObject inherited;
	
	
protected:
	typedef System::Generics::Collections::TDictionary__2<GUID,System::_di_IInterface>* TServicesList;
	
	typedef System::Generics::Collections::TList__1<_di_IListener>* TListenerList;
	
	
private:
	System::Generics::Collections::TDictionary__2<GUID,System::_di_IInterface>* FServicesList;
	System::Generics::Collections::TList__1<_di_IListener>* FListenerList;
	System::Generics::Collections::TDictionary__2<GUID,System::_di_IInterface>* __fastcall GetServicesList();
	System::Generics::Collections::TList__1<_di_IListener>* __fastcall GetListenerList();
	static TBehaviorServices* FCurrent;
	
private:
	// __classmethod void __fastcall DestroyCurrent@();
	
private:
	static TBehaviorServices* __fastcall GetCurrent();
	
protected:
	__property System::Generics::Collections::TDictionary__2<GUID,System::_di_IInterface>* ServicesList = {read=GetServicesList};
	__property System::Generics::Collections::TList__1<_di_IListener>* ListenerList = {read=GetListenerList};
	
public:
	__fastcall virtual ~TBehaviorServices();
	void __fastcall AddBehaviorListener(const _di_IListener Listener);
	void __fastcall AddBehaviorService(const GUID &AServiceGUID, const System::_di_IInterface AService);
	System::_di_IInterface __fastcall GetBehaviorService(const GUID &AServiceGUID, Fmx::Types::TFmxObject* const Context);
	void __fastcall RemoveBehaviorListener(const _di_IListener Listener);
	void __fastcall RemoveBehaviorService(const GUID &AServiceGUID);
	bool __fastcall SupportsBehaviorService(const GUID &AServiceGUID, Fmx::Types::TFmxObject* const Context)/* overload */;
	bool __fastcall SupportsBehaviorService(const GUID &AServiceGUID, /* out */ void *AService, Fmx::Types::TFmxObject* const Context)/* overload */;
	/* static */ __property TBehaviorServices* Current = {read=GetCurrent};
	
private:
	// __classmethod void __fastcall Create@();
public:
	/* TObject.Create */ inline __fastcall TBehaviorServices() : System::TObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum class DECLSPEC_DENUM TBehaviorBoolean : unsigned char { True, False, PlatformDefault };

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TBehaviorServices* __fastcall BehaviorServices _DEPRECATED_ATTRIBUTE1("Use TBehaviorServices.Current") (void);
}	/* namespace Behaviormanager */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_BEHAVIORMANAGER)
using namespace Fmx::Behaviormanager;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_BehaviormanagerHPP
