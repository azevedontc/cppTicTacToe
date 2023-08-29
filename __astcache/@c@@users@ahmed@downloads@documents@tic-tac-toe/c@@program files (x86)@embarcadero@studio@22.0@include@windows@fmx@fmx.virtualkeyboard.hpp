// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.VirtualKeyboard.pas' rev: 35.00 (Windows)

#ifndef Fmx_VirtualkeyboardHPP
#define Fmx_VirtualkeyboardHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <FMX.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Virtualkeyboard
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IFMXVirtualKeyboardService;
typedef System::DelphiInterface<IFMXVirtualKeyboardService> _di_IFMXVirtualKeyboardService;
__interface DELPHIINTERFACE IFMXVirtualKeyboardToolbarService;
typedef System::DelphiInterface<IFMXVirtualKeyboardToolbarService> _di_IFMXVirtualKeyboardToolbarService;
class DELPHICLASS TVirtualKeyboardToolButton;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{BB6F6668-C582-42E4-A766-863C1B9139D2}") IFMXVirtualKeyboardService  : public System::IInterface 
{
	virtual bool __fastcall ShowVirtualKeyboard(Fmx::Types::TFmxObject* const AControl) = 0 ;
	virtual bool __fastcall HideVirtualKeyboard() = 0 ;
	virtual void __fastcall SetTransientState(bool Value) = 0 ;
	virtual Fmx::Types::TVirtualKeyboardStates __fastcall GetVirtualKeyboardState() = 0 ;
	__property Fmx::Types::TVirtualKeyboardStates VirtualKeyboardState = {read=GetVirtualKeyboardState};
};

__interface  INTERFACE_UUID("{CE7795C2-4399-4094-BF58-2E69CEA71D57}") IFMXVirtualKeyboardToolbarService  : public System::IInterface 
{
	virtual void __fastcall SetToolbarEnabled(const bool Value) = 0 ;
	virtual bool __fastcall IsToolbarEnabled() = 0 ;
	virtual void __fastcall SetHideKeyboardButtonVisibility(const bool Value) = 0 ;
	virtual bool __fastcall IsHideKeyboardButtonVisible() = 0 ;
	virtual TVirtualKeyboardToolButton* __fastcall AddButton(const System::UnicodeString Title, System::Classes::TNotifyEvent ExecuteEvent) = 0 ;
	virtual void __fastcall DeleteButton(const int Index) = 0 ;
	virtual int __fastcall ButtonsCount() = 0 ;
	virtual TVirtualKeyboardToolButton* __fastcall GetButtonByIndex(const int Index) = 0 ;
	virtual void __fastcall ClearButtons() = 0 ;
};

class PASCALIMPLEMENTATION TVirtualKeyboardToolButton : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FTitle;
	System::Classes::TNotifyEvent FOnExecute;
	void __fastcall SetTitle(const System::UnicodeString Value);
	
protected:
	virtual void __fastcall DoChanged() = 0 ;
	
public:
	void __fastcall DoExecute();
	__property System::UnicodeString Title = {read=FTitle, write=SetTitle};
	__property System::Classes::TNotifyEvent OnExecute = {read=FOnExecute, write=FOnExecute};
public:
	/* TObject.Create */ inline __fastcall TVirtualKeyboardToolButton() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TVirtualKeyboardToolButton() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Virtualkeyboard */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_VIRTUALKEYBOARD)
using namespace Fmx::Virtualkeyboard;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_VirtualkeyboardHPP
