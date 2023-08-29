// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.AcceleratorKey.pas' rev: 35.00 (Windows)

#ifndef Fmx_AcceleratorkeyHPP
#define Fmx_AcceleratorkeyHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <FMX.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Acceleratorkey
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IAcceleratorKeyReceiver;
typedef System::DelphiInterface<IAcceleratorKeyReceiver> _di_IAcceleratorKeyReceiver;
__interface DELPHIINTERFACE IFMXAcceleratorKeyRegistryService;
typedef System::DelphiInterface<IFMXAcceleratorKeyRegistryService> _di_IFMXAcceleratorKeyRegistryService;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{1C679082-65F2-4C54-A2C4-CD4C00E2C465}") IAcceleratorKeyReceiver  : public System::IInterface 
{
	virtual bool __fastcall CanTriggerAcceleratorKey() = 0 ;
	virtual void __fastcall TriggerAcceleratorKey() = 0 ;
	virtual System::WideChar __fastcall GetAcceleratorChar() = 0 ;
	virtual int __fastcall GetAcceleratorCharIndex() = 0 ;
};

__interface  INTERFACE_UUID("{0D06B7CC-FAF2-45F8-B7AA-D4B84FD384B7}") IFMXAcceleratorKeyRegistryService  : public System::IInterface 
{
	virtual void __fastcall RegisterReceiver(const Fmx::Types::_di_IRoot ARoot, const _di_IAcceleratorKeyReceiver AReceiver) = 0 ;
	virtual void __fastcall UnregisterReceiver(const Fmx::Types::_di_IRoot ARoot, const _di_IAcceleratorKeyReceiver AReceiver) = 0 ;
	virtual void __fastcall RemoveRegistry(const Fmx::Types::_di_IRoot ARoot) = 0 ;
	virtual bool __fastcall EmitAcceleratorKey(const Fmx::Types::_di_IRoot ARoot, const System::Word AKey) = 0 ;
	virtual void __fastcall ChangeReceiverRoot(const _di_IAcceleratorKeyReceiver AReceiver, const Fmx::Types::_di_IRoot AOldRoot, const Fmx::Types::_di_IRoot ANewRoot) = 0 ;
	virtual void __fastcall ExtractAcceleratorKey(const System::UnicodeString AText, /* out */ System::WideChar &Key, /* out */ int &KeyIndex) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Acceleratorkey */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_ACCELERATORKEY)
using namespace Fmx::Acceleratorkey;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_AcceleratorkeyHPP
