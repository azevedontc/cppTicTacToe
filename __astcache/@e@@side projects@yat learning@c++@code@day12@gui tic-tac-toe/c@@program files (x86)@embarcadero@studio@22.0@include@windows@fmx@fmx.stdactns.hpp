// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.StdActns.pas' rev: 35.00 (Windows)

#ifndef Fmx_StdactnsHPP
#define Fmx_StdactnsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.UITypes.hpp>
#include <System.Classes.hpp>
#include <FMX.Platform.hpp>
#include <FMX.ActnList.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.hpp>
#include <FMX.VirtualKeyboard.hpp>
#include <System.Actions.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Stdactns
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THintAction;
class DELPHICLASS TSysCommonAction;
class DELPHICLASS TFileExit;
class DELPHICLASS TWindowClose;
class DELPHICLASS TFileHideApp;
class DELPHICLASS TFileHideAppOthers;
class DELPHICLASS TObjectViewAction;
class DELPHICLASS TVirtualKeyboard;
class DELPHICLASS TViewAction;
class DELPHICLASS TBaseValueRange;
class DELPHICLASS TCustomValueRange;
class DELPHICLASS TValueRange;
class DELPHICLASS TCustomValueRangeAction;
class DELPHICLASS TValueRangeAction;
class DELPHICLASS TValueRangeActionLink;
__interface DELPHIINTERFACE IValueRange;
typedef System::DelphiInterface<IValueRange> _di_IValueRange;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION THintAction : public Fmx::Actnlist::TCustomAction
{
	typedef Fmx::Actnlist::TCustomAction inherited;
	
public:
	__fastcall virtual THintAction(System::Classes::TComponent* AOwner);
	DYNAMIC bool __fastcall Execute();
	
__published:
	__property Hint = {default=0};
public:
	/* TContainedAction.Destroy */ inline __fastcall virtual ~THintAction() { }
	
};


class PASCALIMPLEMENTATION TSysCommonAction : public Fmx::Actnlist::TCustomAction
{
	typedef Fmx::Actnlist::TCustomAction inherited;
	
private:
	Fmx::Types::TCanActionExecEvent FOnCanActionExec;
	
protected:
	System::UnicodeString __fastcall GetDefaultText(const System::UnicodeString Template);
	virtual bool __fastcall CanActionExec();
	
public:
	virtual bool __fastcall Update();
	
__published:
	__property CustomText = {default=0};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property UnsupportedArchitectures = {default=0};
	__property Fmx::Types::TCanActionExecEvent OnCanActionExec = {read=FOnCanActionExec, write=FOnCanActionExec};
	__property OnUpdate;
	__property OnHint;
public:
	/* TCustomAction.Create */ inline __fastcall virtual TSysCommonAction(System::Classes::TComponent* AOwner) : Fmx::Actnlist::TCustomAction(AOwner) { }
	
public:
	/* TContainedAction.Destroy */ inline __fastcall virtual ~TSysCommonAction() { }
	
};


class PASCALIMPLEMENTATION TFileExit : public TSysCommonAction
{
	typedef TSysCommonAction inherited;
	
protected:
	virtual bool __fastcall IsSupportedInterface();
	
public:
	__fastcall virtual TFileExit(System::Classes::TComponent* AOwner);
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall CustomTextChanged();
	
__published:
	__property ShortCut = {default=4177};
	__property UnsupportedPlatforms = {default=4};
public:
	/* TContainedAction.Destroy */ inline __fastcall virtual ~TFileExit() { }
	
};


class PASCALIMPLEMENTATION TWindowClose : public TSysCommonAction
{
	typedef TSysCommonAction inherited;
	
public:
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall CustomTextChanged();
	virtual bool __fastcall Update();
	__fastcall virtual TWindowClose(System::Classes::TComponent* AOwner);
	
__published:
	__property ShortCut = {default=4183};
	__property UnsupportedPlatforms = {default=0};
	__property OnExecute;
public:
	/* TContainedAction.Destroy */ inline __fastcall virtual ~TWindowClose() { }
	
};


class PASCALIMPLEMENTATION TFileHideApp : public TSysCommonAction
{
	typedef TSysCommonAction inherited;
	
private:
	Fmx::Platform::_di_IFMXHideAppService FHideAppService;
	
protected:
	virtual bool __fastcall IsSupportedInterface();
	
public:
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall CustomTextChanged();
	virtual bool __fastcall Update();
	__fastcall virtual TFileHideApp(System::Classes::TComponent* AOwner);
	
__published:
	__property ShortCut = {default=4168};
	__property UnsupportedPlatforms = {default=61};
	__property OnExecute;
public:
	/* TContainedAction.Destroy */ inline __fastcall virtual ~TFileHideApp() { }
	
};


class PASCALIMPLEMENTATION TFileHideAppOthers : public TFileHideApp
{
	typedef TFileHideApp inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall CustomTextChanged();
	__fastcall virtual TFileHideAppOthers(System::Classes::TComponent* AOwner);
	
__published:
	__property ShortCut = {default=36936};
public:
	/* TContainedAction.Destroy */ inline __fastcall virtual ~TFileHideAppOthers() { }
	
};


class PASCALIMPLEMENTATION TObjectViewAction : public Fmx::Actnlist::TCustomViewAction
{
	typedef Fmx::Actnlist::TCustomViewAction inherited;
	
private:
	void __fastcall SetFmxObject(Fmx::Types::TFmxObject* const Value);
	Fmx::Types::TFmxObject* __fastcall GetFmxObject();
	
protected:
	virtual void __fastcall SetComponent(System::Classes::TComponent* const Value);
	virtual System::UnicodeString __fastcall ComponentText();
	virtual void __fastcall DoCreateComponent(System::Classes::TComponent* &NewComponent);
	
public:
	__property Fmx::Types::TFmxObject* FmxObject = {read=GetFmxObject, write=SetFmxObject};
public:
	/* TCustomAction.Create */ inline __fastcall virtual TObjectViewAction(System::Classes::TComponent* AOwner) : Fmx::Actnlist::TCustomViewAction(AOwner) { }
	
public:
	/* TContainedAction.Destroy */ inline __fastcall virtual ~TObjectViewAction() { }
	
};


class PASCALIMPLEMENTATION TVirtualKeyboard : public TObjectViewAction
{
	typedef TObjectViewAction inherited;
	
private:
	Fmx::Virtualkeyboard::_di_IFMXVirtualKeyboardService FService;
	
public:
	virtual bool __fastcall IsSupportedInterface();
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual bool __fastcall Update();
	
__published:
	__property Text = {default=0};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property ImageIndex = {default=-1};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property UnsupportedArchitectures = {default=0};
	__property UnsupportedPlatforms = {default=0};
	__property OnUpdate;
	__property FmxObject;
public:
	/* TCustomAction.Create */ inline __fastcall virtual TVirtualKeyboard(System::Classes::TComponent* AOwner) : TObjectViewAction(AOwner) { }
	
public:
	/* TContainedAction.Destroy */ inline __fastcall virtual ~TVirtualKeyboard() { }
	
};


class PASCALIMPLEMENTATION TViewAction : public TObjectViewAction
{
	typedef TObjectViewAction inherited;
	
protected:
	virtual void __fastcall SetComponent(System::Classes::TComponent* const Value);
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual bool __fastcall Update();
	
__published:
	__property Text = {default=0};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property ImageIndex = {default=-1};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property UnsupportedArchitectures = {default=0};
	__property UnsupportedPlatforms = {default=0};
	__property OnUpdate;
	__property FmxObject;
	__property OnCreateComponent;
	__property OnBeforeShow;
	__property OnAfterShow;
public:
	/* TCustomAction.Create */ inline __fastcall virtual TViewAction(System::Classes::TComponent* AOwner) : TObjectViewAction(AOwner) { }
	
public:
	/* TContainedAction.Destroy */ inline __fastcall virtual ~TViewAction() { }
	
};


class PASCALIMPLEMENTATION TBaseValueRange : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	double FMax;
	double FMin;
	double FViewportSize;
	double FFrequency;
	double FValue;
	
public:
	__property double Min = {read=FMin, write=FMin};
	__property double Max = {read=FMax, write=FMax};
	__property double Value = {read=FValue, write=FValue};
	__property double Frequency = {read=FFrequency, write=FFrequency};
	__property double ViewportSize = {read=FViewportSize, write=FViewportSize};
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual bool __fastcall Equals(System::TObject* Obj);
	virtual bool __fastcall Same(TBaseValueRange* Obj);
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TBaseValueRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TBaseValueRange() : System::Classes::TPersistent() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TCustomValueRangeClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomValueRangeClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TCustomValueRange : public TBaseValueRange
{
	typedef TBaseValueRange inherited;
	
private:
	bool FInitialized;
	System::Classes::TComponent* FOwner;
	Fmx::Actnlist::TCustomAction* FOwnerAction;
	TBaseValueRange* FNew;
	TBaseValueRange* FOld;
	TBaseValueRange* FTmp;
	double FRelativeValue;
	int FUpdateCount;
	bool FChanging;
	bool FIsChanged;
	System::Classes::TNotifyEvent FBeforeChange;
	System::Classes::TNotifyEvent FAfterChange;
	System::Classes::TNotifyEvent FOnChanged;
	bool FTracking;
	System::Classes::TNotifyEvent FOnTrackingChange;
	double FIncrement;
	double FLastValue;
	void __fastcall IntChanged();
	double __fastcall GetMax();
	void __fastcall SetMax(const double AValue);
	double __fastcall GetMin();
	void __fastcall SetMin(const double AValue);
	double __fastcall GetValue();
	void __fastcall SetValue(const double AValue);
	double __fastcall GetFrequency();
	void __fastcall SetFrequency(const double AValue);
	double __fastcall GetViewportSize();
	void __fastcall SetViewportSize(const double AValue);
	void __fastcall SetRelativeValue(const double AValue);
	void __fastcall SetTracking(const bool Value);
	void __fastcall SetIncrement(const double Value);
	
protected:
	virtual void __fastcall DoBeforeChange();
	virtual void __fastcall DoChanged();
	virtual void __fastcall DoAfterChange();
	virtual void __fastcall DoTrackingChange();
	__property bool Initialized = {read=FInitialized, nodefault};
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual bool __fastcall MaxStored();
	virtual bool __fastcall MinStored();
	virtual bool __fastcall ValueStored();
	virtual bool __fastcall FrequencyStored();
	virtual bool __fastcall ViewportSizeStored();
	
public:
	__fastcall virtual TCustomValueRange(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomValueRange();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	DYNAMIC System::UnicodeString __fastcall GetNamePath();
	virtual bool __fastcall IsEmpty();
	virtual void __fastcall Clear();
	__property bool Tracking = {read=FTracking, write=SetTracking, nodefault};
	void __fastcall Changed(const bool IgnoreLoading = false);
	__property bool IsChanged = {read=FIsChanged, nodefault};
	__property TBaseValueRange* New = {read=FNew};
	__property double Min = {read=GetMin, write=SetMin, stored=MinStored};
	__property double Max = {read=GetMax, write=SetMax, stored=MaxStored};
	__property double Value = {read=GetValue, write=SetValue, stored=ValueStored};
	__property double Frequency = {read=GetFrequency, write=SetFrequency, stored=FrequencyStored};
	__property double ViewportSize = {read=GetViewportSize, write=SetViewportSize, stored=ViewportSizeStored};
	__property double RelativeValue = {read=FRelativeValue, write=SetRelativeValue, stored=false};
	__property double LastValue = {read=FLastValue, write=FLastValue};
	__property double Increment = {read=FIncrement, write=SetIncrement};
	bool __fastcall Inc();
	bool __fastcall Dec();
	__property System::Classes::TComponent* Owner = {read=FOwner};
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	__property int UpdateCount = {read=FUpdateCount, nodefault};
	__property bool Changing = {read=FChanging, nodefault};
	__property System::Classes::TNotifyEvent BeforeChange = {read=FBeforeChange, write=FBeforeChange};
	__property System::Classes::TNotifyEvent OnChanged = {read=FOnChanged, write=FOnChanged};
	__property System::Classes::TNotifyEvent AfterChange = {read=FAfterChange, write=FAfterChange};
	__property System::Classes::TNotifyEvent OnTrackingChange = {read=FOnTrackingChange, write=FOnTrackingChange};
};


class PASCALIMPLEMENTATION TValueRange : public TCustomValueRange
{
	typedef TCustomValueRange inherited;
	
__published:
	__property Min;
	__property Max;
	__property Value;
	__property Frequency;
	__property ViewportSize;
	__property RelativeValue;
public:
	/* TCustomValueRange.Create */ inline __fastcall virtual TValueRange(System::Classes::TComponent* AOwner) : TCustomValueRange(AOwner) { }
	/* TCustomValueRange.Destroy */ inline __fastcall virtual ~TValueRange() { }
	
};


class PASCALIMPLEMENTATION TCustomValueRangeAction : public Fmx::Controls::TCustomControlAction
{
	typedef Fmx::Controls::TCustomControlAction inherited;
	
private:
	TCustomValueRange* FValueRange;
	TCustomValueRange* __fastcall GetValueRange();
	void __fastcall SetValueRange(TCustomValueRange* const Value);
	
protected:
	virtual TCustomValueRange* __fastcall CreateValueRange();
	virtual void __fastcall Loaded();
	
public:
	__fastcall virtual TCustomValueRangeAction(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomValueRangeAction();
	__property TCustomValueRange* ValueRange = {read=GetValueRange, write=SetValueRange};
};


class PASCALIMPLEMENTATION TValueRangeAction : public TCustomValueRangeAction
{
	typedef TCustomValueRangeAction inherited;
	
protected:
	virtual TCustomValueRange* __fastcall CreateValueRange();
	
__published:
	__property AutoCheck = {default=0};
	__property Text = {default=0};
	__property Checked = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property UnsupportedArchitectures = {default=0};
	__property UnsupportedPlatforms = {default=0};
	__property OnExecute;
	__property OnUpdate;
	__property PopupMenu;
	__property ValueRange;
public:
	/* TCustomValueRangeAction.Create */ inline __fastcall virtual TValueRangeAction(System::Classes::TComponent* AOwner) : TCustomValueRangeAction(AOwner) { }
	/* TCustomValueRangeAction.Destroy */ inline __fastcall virtual ~TValueRangeAction() { }
	
};


class PASCALIMPLEMENTATION TValueRangeActionLink : public Fmx::Controls::TControlActionLink
{
	typedef Fmx::Controls::TControlActionLink inherited;
	
protected:
	bool __fastcall IsValueRangeLinked();
	virtual void __fastcall SetValueRange(TBaseValueRange* const AValue);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TValueRangeActionLink(System::TObject* AClient) : Fmx::Controls::TControlActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TValueRangeActionLink() { }
	
};


__interface  INTERFACE_UUID("{6DFA65EF-A8BF-4D58-9655-664B50C30312}") IValueRange  : public System::IInterface 
{
	virtual TCustomValueRange* __fastcall GetValueRange() = 0 ;
	virtual void __fastcall SetValueRange(TCustomValueRange* const AValue) = 0 ;
	__property TCustomValueRange* ValueRange = {read=GetValueRange, write=SetValueRange};
};

//-- var, const, procedure ---------------------------------------------------
#define DefaultMaxValue  (1.000000E+02)
}	/* namespace Stdactns */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_STDACTNS)
using namespace Fmx::Stdactns;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_StdactnsHPP
