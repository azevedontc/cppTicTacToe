// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Devices.pas' rev: 35.00 (Windows)

#ifndef System_DevicesHPP
#define System_DevicesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Devices
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDeviceInfo;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDeviceInfo : /*[[sealed]]*/ public System::TObject
{
	typedef System::TObject inherited;
	
	
public:
	enum class DECLSPEC_DENUM TDeviceClass : unsigned char { Unknown, Desktop, Phone, MediaPlayer, Tablet, Automotive, Industrial, Embedded, Watch, Glasses, Elf, Dwarf, Wizard };
	
	
private:
	class DELPHICLASS TDeviceList;
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TDeviceList : public System::Generics::Collections::TObjectList__1<TDeviceInfo*>
	{
		typedef System::Generics::Collections::TObjectList__1<TDeviceInfo*> inherited;
		
	private:
		bool FSorted;
		
	protected:
		virtual void __fastcall Notify(TDeviceInfo* const Item, System::Generics::Collections::TCollectionNotification Action);
		void __fastcall CalculateDeltas();
		
	public:
		HIDESBASE void __fastcall Sort();
	public:
		/* {System_Generics_Collections}TObjectList<System_Devices_TDeviceInfo>.Create */ inline __fastcall TDeviceList()/* overload */ : System::Generics::Collections::TObjectList__1<TDeviceInfo*>() { }
		/* {System_Generics_Collections}TObjectList<System_Devices_TDeviceInfo>.Create */ inline __fastcall TDeviceList(bool AOwnsObjects)/* overload */ : System::Generics::Collections::TObjectList__1<TDeviceInfo*>(AOwnsObjects) { }
		/* {System_Generics_Collections}TObjectList<System_Devices_TDeviceInfo>.Create */ inline __fastcall TDeviceList(const System::DelphiInterface<System::Generics::Defaults::IComparer__1<TDeviceInfo*> > AComparer, bool AOwnsObjects)/* overload */ : System::Generics::Collections::TObjectList__1<TDeviceInfo*>(AComparer, AOwnsObjects) { }
		/* {System_Generics_Collections}TObjectList<System_Devices_TDeviceInfo>.Create */ inline __fastcall TDeviceList(System::Generics::Collections::TEnumerable__1<TDeviceInfo*>* const Collection, bool AOwnsObjects)/* overload */ : System::Generics::Collections::TObjectList__1<TDeviceInfo*>(Collection, AOwnsObjects) { }
		/* {System_Generics_Collections}TObjectList<System_Devices_TDeviceInfo>.Destroy */ inline __fastcall virtual ~TDeviceList() { }
		
	public:
		/* {System_Generics_Collections}TList<System_Devices_TDeviceInfo>.Create */ inline __fastcall TDeviceList(const System::DelphiInterface<System::Generics::Defaults::IComparer__1<TDeviceInfo*> > AComparer)/* overload */ : System::Generics::Collections::TObjectList__1<TDeviceInfo*>(AComparer) { }
		/* {System_Generics_Collections}TList<System_Devices_TDeviceInfo>.Create */ inline __fastcall TDeviceList(System::Generics::Collections::TEnumerable__1<TDeviceInfo*>* const Collection)/* overload */ : System::Generics::Collections::TObjectList__1<TDeviceInfo*>(Collection) { }
		/* {System_Generics_Collections}TList<System_Devices_TDeviceInfo>.Create */ inline __fastcall TDeviceList(TDeviceInfo* const *Values, const int Values_High)/* overload */ : System::Generics::Collections::TObjectList__1<TDeviceInfo*>(Values, Values_High) { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
private:
	static TDeviceList* FDevices;
	static TDeviceInfo* FThisDevice;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	static void __fastcall SetThisDevice(TDeviceInfo* const Device);
	static TDeviceInfo* __fastcall GetThisDevice();
	static int __fastcall GetDeviceCount();
	static TDeviceInfo* __fastcall GetDevice(int Index);
	static TDeviceInfo* __fastcall GetDeviceByID(const System::UnicodeString AID);
	TDeviceClass FDeviceClass;
	System::UnicodeString FID;
	System::Sysutils::TOSVersion::TPlatform FPlatform;
	System::Types::TSize FMinPhysicalScreenSize;
	System::Types::TSize FMinLogicalScreenSize;
	System::Types::TSize FMaxPhysicalScreenSize;
	System::Types::TSize FMaxLogicalScreenSize;
	float FAspectRatio;
	float FLowDelta;
	float FHighDelta;
	int FPixelsPerInch;
	bool FExclusive;
	System::Generics::Collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* FAttributes;
	
protected:
	__fastcall TDeviceInfo(TDeviceClass ADeviceClass, const System::UnicodeString AID, const System::Types::TSize &AMinPhysicalScreenSize, const System::Types::TSize &AMinLogicalScreenSize, const System::Types::TSize &AMaxPhysicalScreenSize, const System::Types::TSize &AMaxLogicalScreenSize, System::Sysutils::TOSVersion::TPlatform APlatform, int APixelsPerInch, bool AExclusive)/* overload */;
	
private:
	System::UnicodeString __fastcall GetAttribute(const System::UnicodeString Key);
	float __fastcall GetMaxDiagonal();
	float __fastcall GetMinDiagonal();
	__property float LowDelta = {read=FLowDelta, write=FLowDelta};
	__property float HighDelta = {read=FHighDelta, write=FHighDelta};
	
public:
	__fastcall TDeviceInfo()/* overload */;
	__fastcall virtual ~TDeviceInfo();
	virtual bool __fastcall Equals(System::TObject* Obj);
	void __fastcall AddAttribute(const System::UnicodeString Key, const System::UnicodeString Value);
	bool __fastcall HasAttribute(const System::UnicodeString Key);
	__property TDeviceClass DeviceClass = {read=FDeviceClass, nodefault};
	__property bool Exclusive = {read=FExclusive, nodefault};
	__property System::UnicodeString ID = {read=FID};
	__property System::Sysutils::TOSVersion::TPlatform Platform = {read=FPlatform, nodefault};
	__property System::Types::TSize MinPhysicalScreenSize = {read=FMinPhysicalScreenSize};
	__property System::Types::TSize MinLogicalScreenSize = {read=FMinLogicalScreenSize};
	__property System::Types::TSize MaxPhysicalScreenSize = {read=FMaxPhysicalScreenSize};
	__property System::Types::TSize MaxLogicalScreenSize = {read=FMaxLogicalScreenSize};
	__property float AspectRatio = {read=FAspectRatio};
	__property int PixelsPerInch = {read=FPixelsPerInch, nodefault};
	__property float MaxDiagonal = {read=GetMaxDiagonal};
	__property float MinDiagonal = {read=GetMinDiagonal};
	__property System::UnicodeString Attributes[const System::UnicodeString Key] = {read=GetAttribute};
	__classmethod TDeviceInfo* __fastcall AddDevice(TDeviceClass ADeviceClass, const System::UnicodeString AID, const System::Types::TSize &APhysicalScreenSize, const System::Types::TSize &ALogicalScreenSize, System::Sysutils::TOSVersion::TPlatform APlatform, int APixelsPerInch, bool AExclusive = false)/* overload */;
	__classmethod TDeviceInfo* __fastcall AddDevice(TDeviceClass ADeviceClass, const System::UnicodeString AID, const System::Types::TSize &AMinPhysicalScreenSize, const System::Types::TSize &AMinLogicalScreenSize, const System::Types::TSize &AMaxPhysicalScreenSize, const System::Types::TSize &AMaxLogicalScreenSize, System::Sysutils::TOSVersion::TPlatform APlatform, int APixelsPerInch, bool AExclusive = false)/* overload */;
	__classmethod void __fastcall RemoveDevice(const System::UnicodeString AID);
#ifndef _WIN64
	__classmethod System::DynamicArray<TDeviceInfo*> __fastcall SelectDevices(TDeviceClass ADeviceClass, const System::Types::TSize &APhysicalScreenSize, const System::Types::TSize &ALogicalScreenSize, System::Sysutils::TOSVersion::TPlatform APlatform, int APixelsPerInch, bool SetThisDevice = true);
#else /* _WIN64 */
	__classmethod System::TArray__1<TDeviceInfo*> __fastcall SelectDevices(TDeviceClass ADeviceClass, const System::Types::TSize &APhysicalScreenSize, const System::Types::TSize &ALogicalScreenSize, System::Sysutils::TOSVersion::TPlatform APlatform, int APixelsPerInch, bool SetThisDevice = true);
#endif /* _WIN64 */
	/* static */ __property int DeviceCount = {read=GetDeviceCount, nodefault};
	/* static */ __property TDeviceInfo* Devices[int Index] = {read=GetDevice};
	/* static */ __property TDeviceInfo* DeviceByID[const System::UnicodeString AID] = {read=GetDeviceByID};
	/* static */ __property TDeviceInfo* ThisDevice = {read=GetThisDevice, write=SetThisDevice};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
#define sDevAttrDisplayName L"DisplayName"
#define sDevAttrOPDefine L"OPDefine"
#define sDevAttrCPPDefine L"CPPDefine"
#define sDevAttrPlatforms L"Platforms"
}	/* namespace Devices */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_DEVICES)
using namespace System::Devices;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_DevicesHPP
