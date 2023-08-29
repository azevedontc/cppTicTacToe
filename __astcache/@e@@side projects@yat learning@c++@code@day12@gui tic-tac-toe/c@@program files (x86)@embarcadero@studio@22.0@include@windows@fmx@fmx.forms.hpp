// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Forms.pas' rev: 35.00 (Windows)

#ifndef Fmx_FormsHPP
#define Fmx_FormsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <System.Messaging.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Analytics.hpp>
#include <FMX.Types.hpp>
#include <FMX.ActnList.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Graphics.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Actions.hpp>

//-- user supplied -----------------------------------------------------------
#ifndef _WIN64
#pragma link "d3d10.lib"
#pragma link "d3d10_1.lib"
#pragma link "dxgi.lib"
#endif /* not _WIN64 */
#pragma comment(lib, "D3D11")
#if defined(WIN32) && defined(CreateWindow)
  #define __SAVE_CREATEWINDOW CreateWindow
  #undef  CreateWindow
#endif

namespace Fmx
{
namespace Forms
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFormFactor;
class DELPHICLASS TApplicationFormFactor;
__interface DELPHIINTERFACE IDesignerHook;
typedef System::DelphiInterface<IDesignerHook> _di_IDesignerHook;
__interface DELPHIINTERFACE IDesignerStorage;
typedef System::DelphiInterface<IDesignerStorage> _di_IDesignerStorage;
class DELPHICLASS TApplicationTerminatingMessage;
class DELPHICLASS TFormsCreatedMessage;
class DELPHICLASS TFormBeforeShownMessage;
class DELPHICLASS TFormActivateMessage;
class DELPHICLASS TFormDeactivateMessage;
class DELPHICLASS TFormReleasedMessage;
class DELPHICLASS TApplication;
class DELPHICLASS TFormActionLink;
__interface DELPHIINTERFACE IFMXWindowService;
typedef System::DelphiInterface<IFMXWindowService> _di_IFMXWindowService;
__interface DELPHIINTERFACE IFMXWindowConstraintsService;
typedef System::DelphiInterface<IFMXWindowConstraintsService> _di_IFMXWindowConstraintsService;
__interface DELPHIINTERFACE IFMXFullScreenWindowService;
typedef System::DelphiInterface<IFMXFullScreenWindowService> _di_IFMXFullScreenWindowService;
class DELPHICLASS TWindowBorder;
__interface DELPHIINTERFACE IFMXWindowBorderService;
typedef System::DelphiInterface<IFMXWindowBorderService> _di_IFMXWindowBorderService;
class DELPHICLASS TFormBorder;
class DELPHICLASS TVKStateChangeMessage;
class DELPHICLASS TScaleChangedMessage;
class DELPHICLASS TMainCaptionChangedMessage;
class DELPHICLASS TMainFormChangedMessage;
class DELPHICLASS TBeforeDestroyFormHandle;
class DELPHICLASS TAfterCreateFormHandle;
class DELPHICLASS TOrientationChangedMessage;
class DELPHICLASS TSizeChangedMessage;
class DELPHICLASS TSaveStateMessage;
class DELPHICLASS TFormChangingFocusControl;
class DELPHICLASS TFormSaveState;
class DELPHICLASS TFormSystemStatusBar;
__interface DELPHIINTERFACE IFMXWindowSystemStatusBarService;
typedef System::DelphiInterface<IFMXWindowSystemStatusBarService> _di_IFMXWindowSystemStatusBarService;
class DELPHICLASS TSizeConstraints;
class DELPHICLASS TCommonCustomForm;
class DELPHICLASS TCustomForm;
class DELPHICLASS TCustomPopupForm;
class DELPHICLASS TForm;
class DELPHICLASS TFrame;
class DELPHICLASS TScreen;
__interface DELPHIINTERFACE IDesignerForm;
typedef System::DelphiInterface<IDesignerForm> _di_IDesignerForm;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TExceptionEvent)(System::TObject* Sender, System::Sysutils::Exception* E);

typedef void __fastcall (__closure *TIdleEvent)(System::TObject* Sender, bool &Done);

enum class DECLSPEC_DENUM TDeviceKind : unsigned int { Desktop, iPhone, iPad };

typedef System::Set<TDeviceKind, _DELPHI_SET_ENUMERATOR(TDeviceKind::Desktop), _DELPHI_SET_ENUMERATOR(TDeviceKind::iPad)> TDeviceKinds;

typedef Fmx::Types::TScreenOrientations TFormOrientations;

typedef Fmx::Types::TScreenOrientation TFormOrientation;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFormFactor : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Types::TSize FSize;
	Fmx::Types::TScreenOrientations FOrientations;
	TDeviceKinds FDevices;
	virtual void __fastcall SetSupportedOrientations(Fmx::Types::TScreenOrientations AOrientations);
	void __fastcall SetHeight(const int Value);
	void __fastcall SetWidth(const int Value);
	int __fastcall GetWidth();
	int __fastcall GetHeight();
	
public:
	__fastcall TFormFactor();
	void __fastcall AdjustToScreenSize();
	
__published:
	__property int Width = {read=GetWidth, write=SetWidth, stored=true, nodefault};
	__property int Height = {read=GetHeight, write=SetHeight, stored=true, nodefault};
	__property Fmx::Types::TScreenOrientations Orientations = {read=FOrientations, write=SetSupportedOrientations, stored=true, default=3};
	__property TDeviceKinds Devices = {read=FDevices, write=FDevices, stored=true, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TFormFactor() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TApplicationFormFactor : public TFormFactor
{
	typedef TFormFactor inherited;
	
protected:
	virtual void __fastcall SetSupportedOrientations(Fmx::Types::TScreenOrientations AOrientations);
public:
	/* TFormFactor.Create */ inline __fastcall TApplicationFormFactor() : TFormFactor() { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TApplicationFormFactor() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{65A688CA-60DD-4038-AAFF-8F56A8B6AB69}") IDesignerHook  : public System::Classes::IDesignerNotify 
{
	virtual bool __fastcall IsDesignMsg(Fmx::Types::TFmxObject* Sender, Winapi::Messages::TMessage &Message) = 0 ;
	virtual void __fastcall UpdateBorder() = 0 ;
	virtual void __fastcall PaintGrid() = 0 ;
	virtual void __fastcall DrawSelectionMarks(Fmx::Types::TFmxObject* AControl) = 0 ;
	virtual bool __fastcall IsSelected(System::Classes::TPersistent* Instance) = 0 ;
	virtual bool __fastcall IsView() = 0 ;
	virtual bool __fastcall GetHasFixedSize() = 0 ;
	virtual void __fastcall DesignerModified(bool Activate = false) = 0 ;
	virtual void __fastcall ValidateRename(System::Classes::TComponent* AComponent, const System::UnicodeString CurName, const System::UnicodeString NewName) = 0 ;
	virtual System::UnicodeString __fastcall UniqueName(const System::UnicodeString BaseName) = 0 ;
	virtual System::Classes::TComponent* __fastcall GetRoot() = 0 ;
	virtual void __fastcall FormFamilyChanged(const System::UnicodeString OldFormFamilyName, const System::UnicodeString NewFormFamilyName, const System::UnicodeString FormClassName) = 0 ;
	virtual void __fastcall SelectComponent(System::Classes::TPersistent* Instance) = 0 ;
	virtual void __fastcall Decorate(System::TObject* Context) = 0 ;
	__property bool HasFixedSize = {read=GetHasFixedSize};
};

__interface  INTERFACE_UUID("{ACCC9241-07E2-421B-8F4C-B70D1E4050AE}") IDesignerStorage  : public System::IInterface 
{
	virtual bool __fastcall GetDesignerMobile() = 0 ;
	virtual int __fastcall GetDesignerWidth() = 0 ;
	virtual int __fastcall GetDesignerHeight() = 0 ;
	virtual System::UnicodeString __fastcall GetDesignerDeviceName() = 0 ;
	virtual Fmx::Types::TScreenOrientation __fastcall GetDesignerOrientation() = 0 ;
	virtual System::UnicodeString __fastcall GetDesignerOSVersion() = 0 ;
	virtual int __fastcall GetDesignerMasterStyle() = 0 ;
	virtual void __fastcall SetDesignerMasterStyle(int Value) = 0 ;
	__property bool Mobile = {read=GetDesignerMobile};
	__property int Width = {read=GetDesignerWidth};
	__property int Height = {read=GetDesignerHeight};
	__property System::UnicodeString DeviceName = {read=GetDesignerDeviceName};
	__property Fmx::Types::TScreenOrientation Orientation = {read=GetDesignerOrientation};
	__property System::UnicodeString OSVersion = {read=GetDesignerOSVersion};
	__property int MasterStyle = {read=GetDesignerMasterStyle, write=SetDesignerMasterStyle};
};

enum class DECLSPEC_DENUM TApplicationState : unsigned int { None, Running, Terminating, Terminated };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TApplicationTerminatingMessage : public System::Messaging::TMessageBase
{
	typedef System::Messaging::TMessageBase inherited;
	
public:
	/* TObject.Create */ inline __fastcall TApplicationTerminatingMessage() : System::Messaging::TMessageBase() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TApplicationTerminatingMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef TApplicationState __fastcall (*TApplicationStateEvent)(void);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFormsCreatedMessage : public System::Messaging::TMessageBase
{
	typedef System::Messaging::TMessageBase inherited;
	
public:
	/* TObject.Create */ inline __fastcall TFormsCreatedMessage() : System::Messaging::TMessageBase() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TFormsCreatedMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFormBeforeShownMessage : public System::Messaging::TMessage__1<TCommonCustomForm*>
{
	typedef System::Messaging::TMessage__1<TCommonCustomForm*> inherited;
	
public:
	/* {System_Messaging}TMessage<FMX_Forms_TCommonCustomForm>.Create */ inline __fastcall TFormBeforeShownMessage(TCommonCustomForm* const AValue) : System::Messaging::TMessage__1<TCommonCustomForm*>(AValue) { }
	/* {System_Messaging}TMessage<FMX_Forms_TCommonCustomForm>.Destroy */ inline __fastcall virtual ~TFormBeforeShownMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFormActivateMessage : public System::Messaging::TMessage__1<TCommonCustomForm*>
{
	typedef System::Messaging::TMessage__1<TCommonCustomForm*> inherited;
	
public:
	/* {System_Messaging}TMessage<FMX_Forms_TCommonCustomForm>.Create */ inline __fastcall TFormActivateMessage(TCommonCustomForm* const AValue) : System::Messaging::TMessage__1<TCommonCustomForm*>(AValue) { }
	/* {System_Messaging}TMessage<FMX_Forms_TCommonCustomForm>.Destroy */ inline __fastcall virtual ~TFormActivateMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFormDeactivateMessage : public System::Messaging::TMessage__1<TCommonCustomForm*>
{
	typedef System::Messaging::TMessage__1<TCommonCustomForm*> inherited;
	
public:
	/* {System_Messaging}TMessage<FMX_Forms_TCommonCustomForm>.Create */ inline __fastcall TFormDeactivateMessage(TCommonCustomForm* const AValue) : System::Messaging::TMessage__1<TCommonCustomForm*>(AValue) { }
	/* {System_Messaging}TMessage<FMX_Forms_TCommonCustomForm>.Destroy */ inline __fastcall virtual ~TFormDeactivateMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFormReleasedMessage : public System::Messaging::TMessageBase
{
	typedef System::Messaging::TMessageBase inherited;
	
public:
	/* TObject.Create */ inline __fastcall TFormReleasedMessage() : System::Messaging::TMessageBase() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TFormReleasedMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TApplication : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
	
private:
	class DELPHICLASS TFormRegistryItem;
#ifndef _WIN64
	#pragma pack(push,4)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TFormRegistryItem : public System::TObject
	{
		typedef System::TObject inherited;
		
	public:
		System::Classes::TComponentClass InstanceClass;
		System::Classes::TComponent* Instance;
		void *Reference;
	public:
		/* TObject.Create */ inline __fastcall TFormRegistryItem() : System::TObject() { }
		/* TObject.Destroy */ inline __fastcall virtual ~TFormRegistryItem() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	typedef System::Generics::Collections::TList__1<TFormRegistryItem*>* TFormRegistryItems;
	
	typedef System::Generics::Collections::TObjectDictionary__2<System::UnicodeString,System::Generics::Collections::TList__1<TFormRegistryItem*>*>* TFormRegistry;
	
	typedef System::DynamicArray<TFormRegistryItem*> _TApplication__1;
	
	
private:
	TExceptionEvent FOnException;
	bool FTerminate;
	TIdleEvent FOnIdle;
	bool FDefaultTitleReceived;
	System::UnicodeString FDefaultTitle;
	TCommonCustomForm* FMainForm;
	_TApplication__1 FCreateForms;
	System::Classes::TBiDiMode FBiDiMode;
	NativeUInt FTimerActionHandle;
	int FActionUpdateDelay;
	System::Generics::Collections::TList__1<System::Classes::TComponent*>* FActionClientsList;
	System::Classes::TActionEvent FOnActionUpdate;
	bool FIdleDone;
	bool FIsRealCreateFormsCalled;
	TApplicationFormFactor* FFormFactor;
	System::Generics::Collections::TObjectDictionary__2<System::UnicodeString,System::Generics::Collections::TList__1<TFormRegistryItem*>*>* FFormRegistry;
	System::UnicodeString FMainFormFamily;
	System::TDateTime FLastKeyPress;
	System::TDateTime FLastUserActive;
	Fmx::Types::TIdleMessage* FIdleMessage;
	System::Classes::TActionEvent FOnActionExecute;
	TApplicationStateEvent FApplicationStateQuery;
	System::Analytics::TAnalyticsManager* FAnalyticsManager;
	System::UnicodeString FHint;
	bool FShowHint;
	System::Classes::TNotifyEvent FOnHint;
	Fmx::Controls::THint* FSharedHint;
	bool FIsControlHint;
	bool FHintShortCuts;
	Fmx::Types::_di_IFMXTimerService FTimerService;
	void __fastcall Idle();
	void __fastcall DoUpdateActions();
	void __fastcall UpdateActionTimerProc();
	TFormRegistryItem* __fastcall GetFormRegistryItem(const System::UnicodeString FormFamily, TFormFactor* const FormFactor);
	System::UnicodeString __fastcall GetDefaultTitle();
	System::UnicodeString __fastcall GetTitle();
	void __fastcall SetTitle(const System::UnicodeString Value);
	void __fastcall SetMainForm(TCommonCustomForm* const Value);
	System::Analytics::TAnalyticsManager* __fastcall GetAnalyticsManager();
	void __fastcall SetShowHint(const bool AValue);
	void __fastcall SetHint(const System::UnicodeString AHint);
	void __fastcall SetHintShortCuts(const bool Value);
	Fmx::Types::_di_IFMXTimerService __fastcall GetTimerService();
	__property Fmx::Types::_di_IFMXTimerService TimerService = {read=GetTimerService};
	
public:
	__fastcall virtual TApplication(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TApplication();
	void __fastcall FormDestroyed(TCommonCustomForm* const AForm);
	void __fastcall RealCreateForms();
	void __fastcall CreateForm(const System::Classes::TComponentClass InstanceClass, void *Reference);
	void __fastcall CreateMainForm();
	void __fastcall RegisterFormFamily(const System::UnicodeString AFormFamily, System::Classes::TComponentClass const *AForms, const int AForms_High);
	void __fastcall ProcessMessages();
	__property System::TDateTime LastKeyPress = {read=FLastKeyPress};
	__property System::TDateTime LastUserActive = {read=FLastUserActive};
	void __fastcall DoIdle(bool &Done);
	bool __fastcall HandleMessage();
	void __fastcall Run();
	bool __fastcall Terminate();
	void __fastcall Initialize();
	bool __fastcall ActionExecuteTarget(System::Classes::TBasicAction* Action);
	HIDESBASE bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	bool __fastcall TrackActivity();
	__property int ActionUpdateDelay = {read=FActionUpdateDelay, write=FActionUpdateDelay, nodefault};
	void __fastcall HandleException(System::TObject* Sender);
	void __fastcall ShowException(System::Sysutils::Exception* E);
	void __fastcall CancelHint();
	void __fastcall HideHint();
	__property bool ShowHint = {read=FShowHint, write=SetShowHint, nodefault};
	__property System::Classes::TNotifyEvent OnHint = {read=FOnHint, write=FOnHint};
	__property System::Classes::TBiDiMode BiDiMode = {read=FBiDiMode, write=FBiDiMode, default=0};
	__property bool Terminated = {read=FTerminate, write=FTerminate, nodefault};
	__property TIdleEvent OnIdle = {read=FOnIdle, write=FOnIdle};
	__property TCommonCustomForm* MainForm = {read=FMainForm, write=SetMainForm};
	__property System::UnicodeString Title = {read=GetTitle, write=SetTitle};
	__property System::UnicodeString DefaultTitle = {read=GetDefaultTitle};
	__property System::Classes::TActionEvent OnActionExecute = {read=FOnActionExecute, write=FOnActionExecute};
	__property System::Classes::TActionEvent OnActionUpdate = {read=FOnActionUpdate, write=FOnActionUpdate};
	__property TExceptionEvent OnException = {read=FOnException, write=FOnException};
	__property TApplicationStateEvent ApplicationStateQuery = {read=FApplicationStateQuery, write=FApplicationStateQuery};
	__property bool IsRealCreateFormsCalled = {read=FIsRealCreateFormsCalled, nodefault};
	void __fastcall RegisterActionClient(System::Classes::TComponent* const ActionClient);
	void __fastcall UnregisterActionClient(System::Classes::TComponent* const ActionClient);
	System::Generics::Collections::TEnumerable__1<System::Classes::TComponent*>* __fastcall GetActionClients();
	TCommonCustomForm* __fastcall GetDeviceForm(const System::UnicodeString FormFamily, TFormFactor* const FormFactor)/* overload */;
	TCommonCustomForm* __fastcall GetDeviceForm(const System::UnicodeString FormFamily)/* overload */;
	void __fastcall OverrideScreenSize(int W, int H);
	__property TApplicationFormFactor* FormFactor = {read=FFormFactor};
	__property System::Analytics::TAnalyticsManager* AnalyticsManager = {read=GetAnalyticsManager};
	__property System::UnicodeString Hint = {read=FHint, write=SetHint};
	__property bool HintShortCuts = {read=FHintShortCuts, write=SetHintShortCuts, nodefault};
};


class PASCALIMPLEMENTATION TFormActionLink : public Fmx::Actnlist::TActionLink
{
	typedef Fmx::Actnlist::TActionLink inherited;
	
private:
	TCommonCustomForm* FForm;
	bool __fastcall ActionCustomViewComponent();
	
protected:
	__property TCommonCustomForm* Form = {read=FForm};
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsCheckedLinked();
	virtual bool __fastcall IsEnabledLinked();
	virtual bool __fastcall IsGroupIndexLinked();
	virtual bool __fastcall IsHelpLinked();
	virtual bool __fastcall IsHintLinked();
	virtual bool __fastcall IsVisibleLinked();
	virtual bool __fastcall IsOnExecuteLinked();
	virtual void __fastcall SetVisible(bool Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TFormActionLink(System::TObject* AClient) : Fmx::Actnlist::TActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TFormActionLink() { }
	
};


typedef void __fastcall (__closure *TCloseEvent)(System::TObject* Sender, System::Uitypes::TCloseAction &Action);

typedef void __fastcall (__closure *TCloseQueryEvent)(System::TObject* Sender, bool &CanClose);

enum class DECLSPEC_DENUM TFmxFormBorderStyle : unsigned int { None, Single, Sizeable, ToolWindow, SizeToolWin };

enum class DECLSPEC_DENUM TFmxFormState : unsigned int { Recreating, Modal, Released, InDesigner, WasNotShown, Showing, UpdateBorder, Activation, Closing, Engaged };

typedef System::Set<TFmxFormState, _DELPHI_SET_ENUMERATOR(TFmxFormState::Recreating), _DELPHI_SET_ENUMERATOR(TFmxFormState::Engaged)> TFmxFormStates;

enum class DECLSPEC_DENUM TFormPosition : unsigned int { Designed, Default, DefaultPosOnly, DefaultSizeOnly, ScreenCenter, DesktopCenter, MainFormCenter, OwnerFormCenter };

__interface  INTERFACE_UUID("{26C42398-9AFC-4D09-9541-9C71E769FC35}") IFMXWindowService  : public System::IInterface 
{
	virtual TCommonCustomForm* __fastcall FindForm(Fmx::Types::TWindowHandle* const AHandle) = 0 ;
	virtual Fmx::Types::TWindowHandle* __fastcall CreateWindow(TCommonCustomForm* const AForm) = 0 ;
	virtual void __fastcall DestroyWindow(TCommonCustomForm* const AForm) = 0 ;
	virtual void __fastcall ReleaseWindow(TCommonCustomForm* const AForm) = 0 ;
	virtual void __fastcall SetWindowState(TCommonCustomForm* const AForm, const System::Uitypes::TWindowState AState) = 0 ;
	virtual void __fastcall ShowWindow(TCommonCustomForm* const AForm) = 0 ;
	virtual void __fastcall HideWindow(TCommonCustomForm* const AForm) = 0 ;
	virtual System::Uitypes::TModalResult __fastcall ShowWindowModal(TCommonCustomForm* const AForm) = 0 ;
	virtual void __fastcall InvalidateWindowRect(TCommonCustomForm* const AForm, const System::Types::TRectF &R) = 0 ;
	virtual void __fastcall InvalidateImmediately(TCommonCustomForm* const AForm) = 0 ;
	virtual void __fastcall SetWindowRect(TCommonCustomForm* const AForm, const System::Types::TRectF &ARect) = 0 ;
	virtual System::Types::TRectF __fastcall GetWindowRect(TCommonCustomForm* const AForm) = 0 ;
	virtual System::Types::TPointF __fastcall GetClientSize(TCommonCustomForm* const AForm) = 0 ;
	virtual void __fastcall SetClientSize(TCommonCustomForm* const AForm, const System::Types::TPointF &ASize) = 0 ;
	virtual void __fastcall SetWindowCaption(TCommonCustomForm* const AForm, const System::UnicodeString ACaption) = 0 ;
	virtual void __fastcall SetCapture(TCommonCustomForm* const AForm) = 0 ;
	virtual void __fastcall ReleaseCapture(TCommonCustomForm* const AForm) = 0 ;
	virtual System::Types::TPointF __fastcall ClientToScreen(TCommonCustomForm* const AForm, const System::Types::TPointF &AFormPoint) = 0 ;
	virtual System::Types::TPointF __fastcall ScreenToClient(TCommonCustomForm* const AForm, const System::Types::TPointF &AScreenPoint) = 0 ;
	virtual void __fastcall BringToFront(TCommonCustomForm* const AForm) = 0 ;
	virtual void __fastcall SendToBack(TCommonCustomForm* const AForm) = 0 ;
	virtual void __fastcall Activate(TCommonCustomForm* const AForm) = 0 ;
	virtual float __fastcall GetWindowScale _DEPRECATED_ATTRIBUTE0 (TCommonCustomForm* const AForm) = 0 ;
	virtual bool __fastcall CanShowModal() = 0 ;
};

__interface  INTERFACE_UUID("{030E519F-3D99-422C-9978-798EA04AF14B}") IFMXWindowConstraintsService  : public System::IInterface 
{
	virtual void __fastcall SetConstraints(TCommonCustomForm* const AForm, const float AMinWidth, const float AMinHeight, const float AMaxWidth, const float AMaxHeight) = 0 ;
};

__interface  INTERFACE_UUID("{103EB4B7-E899-4684-8174-2EEEE24F1E58}") IFMXFullScreenWindowService  : public System::IInterface 
{
	virtual void __fastcall SetFullScreen(TCommonCustomForm* const AForm, const bool AValue) = 0 ;
	virtual bool __fastcall GetFullScreen(TCommonCustomForm* const AForm) = 0 ;
	virtual void __fastcall SetShowFullScreenIcon(TCommonCustomForm* const AForm, const bool AValue) = 0 ;
};

class PASCALIMPLEMENTATION TWindowBorder : public Fmx::Types::TFmxObject
{
	typedef Fmx::Types::TFmxObject inherited;
	
private:
	TCommonCustomForm* FForm;
	
protected:
	virtual bool __fastcall GetSupported() = 0 ;
	virtual void __fastcall Resize() = 0 ;
	virtual void __fastcall Activate() = 0 ;
	virtual void __fastcall Deactivate() = 0 ;
	virtual void __fastcall StyleChanged() = 0 ;
	virtual void __fastcall ScaleChanged() = 0 ;
	virtual void __fastcall EnableChanged();
	
public:
	__fastcall virtual TWindowBorder(TCommonCustomForm* const AForm);
	__property TCommonCustomForm* Form = {read=FForm};
	__property bool IsSupported = {read=GetSupported, nodefault};
public:
	/* TFmxObject.Destroy */ inline __fastcall virtual ~TWindowBorder() { }
	
};


__interface  INTERFACE_UUID("{F3FC3133-CEF0-446F-B3C6-7820989DDFC6}") IFMXWindowBorderService  : public System::IInterface 
{
	virtual TWindowBorder* __fastcall CreateWindowBorder(TCommonCustomForm* const AForm) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFormBorder : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TWindowBorder* FWindowBorder;
	TCommonCustomForm* FForm;
	bool FStyling;
	void __fastcall SetStyling(const bool Value);
	
protected:
	bool __fastcall GetSupported();
	void __fastcall Recreate();
	void __fastcall EnableChanged();
	
public:
	__fastcall TFormBorder(TCommonCustomForm* const AForm);
	__fastcall virtual ~TFormBorder();
	void __fastcall StyleChanged();
	void __fastcall ScaleChanged();
	void __fastcall Resize();
	void __fastcall Activate();
	void __fastcall Deactivate();
	__property TWindowBorder* WindowBorder = {read=FWindowBorder};
	__property bool IsSupported = {read=GetSupported, nodefault};
	
__published:
	__property bool Styling = {read=FStyling, write=SetStyling, default=1};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TVKStateChangeMessage : public System::Messaging::TMessageBase
{
	typedef System::Messaging::TMessageBase inherited;
	
private:
	bool FKeyboardShown;
	System::Types::TRect FBounds;
	
public:
	__fastcall TVKStateChangeMessage(bool AKeyboardShown, const System::Types::TRect &Bounds);
	__property bool KeyboardVisible = {read=FKeyboardShown, nodefault};
	__property System::Types::TRect KeyboardBounds = {read=FBounds};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TVKStateChangeMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TScaleChangedMessage : public System::Messaging::TMessage__1<TCommonCustomForm*>
{
	typedef System::Messaging::TMessage__1<TCommonCustomForm*> inherited;
	
public:
	/* {System_Messaging}TMessage<FMX_Forms_TCommonCustomForm>.Create */ inline __fastcall TScaleChangedMessage(TCommonCustomForm* const AValue) : System::Messaging::TMessage__1<TCommonCustomForm*>(AValue) { }
	/* {System_Messaging}TMessage<FMX_Forms_TCommonCustomForm>.Destroy */ inline __fastcall virtual ~TScaleChangedMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMainCaptionChangedMessage : public System::Messaging::TMessage__1<TCommonCustomForm*>
{
	typedef System::Messaging::TMessage__1<TCommonCustomForm*> inherited;
	
public:
	/* {System_Messaging}TMessage<FMX_Forms_TCommonCustomForm>.Create */ inline __fastcall TMainCaptionChangedMessage(TCommonCustomForm* const AValue) : System::Messaging::TMessage__1<TCommonCustomForm*>(AValue) { }
	/* {System_Messaging}TMessage<FMX_Forms_TCommonCustomForm>.Destroy */ inline __fastcall virtual ~TMainCaptionChangedMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMainFormChangedMessage : public System::Messaging::TMessage__1<TCommonCustomForm*>
{
	typedef System::Messaging::TMessage__1<TCommonCustomForm*> inherited;
	
public:
	/* {System_Messaging}TMessage<FMX_Forms_TCommonCustomForm>.Create */ inline __fastcall TMainFormChangedMessage(TCommonCustomForm* const AValue) : System::Messaging::TMessage__1<TCommonCustomForm*>(AValue) { }
	/* {System_Messaging}TMessage<FMX_Forms_TCommonCustomForm>.Destroy */ inline __fastcall virtual ~TMainFormChangedMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBeforeDestroyFormHandle : public System::Messaging::TMessage__1<TCommonCustomForm*>
{
	typedef System::Messaging::TMessage__1<TCommonCustomForm*> inherited;
	
public:
	/* {System_Messaging}TMessage<FMX_Forms_TCommonCustomForm>.Create */ inline __fastcall TBeforeDestroyFormHandle(TCommonCustomForm* const AValue) : System::Messaging::TMessage__1<TCommonCustomForm*>(AValue) { }
	/* {System_Messaging}TMessage<FMX_Forms_TCommonCustomForm>.Destroy */ inline __fastcall virtual ~TBeforeDestroyFormHandle() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TAfterCreateFormHandle : public System::Messaging::TMessage__1<TCommonCustomForm*>
{
	typedef System::Messaging::TMessage__1<TCommonCustomForm*> inherited;
	
public:
	/* {System_Messaging}TMessage<FMX_Forms_TCommonCustomForm>.Create */ inline __fastcall TAfterCreateFormHandle(TCommonCustomForm* const AValue) : System::Messaging::TMessage__1<TCommonCustomForm*>(AValue) { }
	/* {System_Messaging}TMessage<FMX_Forms_TCommonCustomForm>.Destroy */ inline __fastcall virtual ~TAfterCreateFormHandle() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TOrientationChangedMessage : public System::Messaging::TMessageBase
{
	typedef System::Messaging::TMessageBase inherited;
	
public:
	/* TObject.Create */ inline __fastcall TOrientationChangedMessage() : System::Messaging::TMessageBase() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TOrientationChangedMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSizeChangedMessage : public System::Messaging::TMessage__1<System::Types::TSize>
{
	typedef System::Messaging::TMessage__1<System::Types::TSize> inherited;
	
public:
	/* {System_Messaging}TMessage<System_Types_TSize>.Create */ inline __fastcall TSizeChangedMessage(const System::Types::TSize &AValue) : System::Messaging::TMessage__1<System::Types::TSize>(AValue) { }
	/* {System_Messaging}TMessage<System_Types_TSize>.Destroy */ inline __fastcall virtual ~TSizeChangedMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSaveStateMessage : public System::Messaging::TMessageBase
{
	typedef System::Messaging::TMessageBase inherited;
	
public:
	/* TObject.Create */ inline __fastcall TSaveStateMessage() : System::Messaging::TMessageBase() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TSaveStateMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFormChangingFocusControl : public System::Messaging::TMessageBase
{
	typedef System::Messaging::TMessageBase inherited;
	
public:
	Fmx::Types::_di_IControl PreviousFocusedControl;
	Fmx::Types::_di_IControl NewFocusedControl;
	bool IsChanged;
	__fastcall TFormChangingFocusControl(const Fmx::Types::_di_IControl APreviousFocusedControl, const Fmx::Types::_di_IControl ANewFocusedControl, const bool AIsChanged);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TFormChangingFocusControl() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFormSaveState : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static const System::WideChar UniqueNameSeparator = (System::WideChar)(0x5f);
	
	#define TFormSaveState_UniqueNamePrefix L"FM"
	
	#define TFormSaveState_UniqueNameExtension L".TMP"
	
	TCommonCustomForm* FOwner;
	System::Classes::TMemoryStream* FStream;
	System::UnicodeString FName;
	void __fastcall UpdateFromSaveState();
	System::Classes::TMemoryStream* __fastcall GetStream();
	System::UnicodeString __fastcall GenerateUniqueName();
	
private:
	void __fastcall UpdateToSaveState();
	System::UnicodeString __fastcall GetStoragePath();
	void __fastcall SetStoragePath(const System::UnicodeString AValue);
	
protected:
	System::UnicodeString __fastcall GetUniqueName();
	
public:
	__fastcall TFormSaveState(TCommonCustomForm* const AOwner);
	__fastcall virtual ~TFormSaveState();
	__property TCommonCustomForm* Owner = {read=FOwner};
	__property System::Classes::TMemoryStream* Stream = {read=GetStream};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString StoragePath = {read=GetStoragePath, write=SetStoragePath};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum class DECLSPEC_DENUM TWindowStyle : unsigned int { GPUSurface };

typedef System::Set<TWindowStyle, _DELPHI_SET_ENUMERATOR(TWindowStyle::GPUSurface), _DELPHI_SET_ENUMERATOR(TWindowStyle::GPUSurface)> TWindowStyles;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFormSystemStatusBar : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
	
public:
	enum class DECLSPEC_DENUM TVisibilityMode : unsigned int { Visible, Invisible, VisibleAndOverlap };
	
	
public:
	static const System::Uitypes::TAlphaColor DefaultBackgroundColor = System::Uitypes::TAlphaColor(0x0);
	
	static const TVisibilityMode DefaultVisibility = (TVisibilityMode)(0);
	
	
private:
	TCommonCustomForm* FForm;
	System::Uitypes::TAlphaColor FBackgroundColor;
	TVisibilityMode FVisibility;
	void __fastcall SetBackgroundColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetVisibility(const TVisibilityMode Value);
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	
public:
	__fastcall TFormSystemStatusBar(TCommonCustomForm* const AForm);
	
__published:
	__property System::Uitypes::TAlphaColor BackgroundColor = {read=FBackgroundColor, write=SetBackgroundColor, default=0};
	__property TVisibilityMode Visibility = {read=FVisibility, write=SetVisibility, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TFormSystemStatusBar() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{06258F45-98C5-4F8F-9A77-01F2BD892A5B}") IFMXWindowSystemStatusBarService  : public System::IInterface 
{
	virtual void __fastcall SetBackgroundColor(TCommonCustomForm* const AForm, const System::Uitypes::TAlphaColor AColor) = 0 ;
	virtual void __fastcall SetVisibility(TCommonCustomForm* const AForm, const TFormSystemStatusBar::TVisibilityMode AMode) = 0 ;
};

typedef float TConstraintSize;

class PASCALIMPLEMENTATION TSizeConstraints : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
	
private:
	enum class DECLSPEC_DENUM TDimension : unsigned int { MaxHeight, MaxWidth, MinHeight, MinWidth };
	
	
private:
	System::Classes::TComponent* FOwner;
	float FMaxHeight;
	float FMaxWidth;
	float FMinHeight;
	float FMinWidth;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetConstraints(const TDimension Index, float Value);
	System::Types::TSizeF __fastcall GetMaxSize();
	System::Types::TSizeF __fastcall GetMinSize();
	bool __fastcall IsValueStored(const TDimension Index);
	
protected:
	virtual void __fastcall Change();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall virtual TSizeConstraints(System::Classes::TComponent* const AOwner);
	__property System::Types::TSizeF MinSize = {read=GetMinSize};
	__property System::Types::TSizeF MaxSize = {read=GetMaxSize};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property float MaxHeight = {read=FMaxHeight, write=SetConstraints, stored=IsValueStored, index=0};
	__property float MaxWidth = {read=FMaxWidth, write=SetConstraints, stored=IsValueStored, index=1};
	__property float MinHeight = {read=FMinHeight, write=SetConstraints, stored=IsValueStored, index=2};
	__property float MinWidth = {read=FMinWidth, write=SetConstraints, stored=IsValueStored, index=3};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TSizeConstraints() { }
	
};


typedef void __fastcall (__closure *TConstrainedResizeEvent)(System::TObject* Sender, float &MinWidth, float &MinHeight, float &MaxWidth, float &MaxHeight);

class PASCALIMPLEMENTATION TCommonCustomForm : public Fmx::Types::TFmxObject
{
	typedef Fmx::Types::TFmxObject inherited;
	
	
private:
	enum class DECLSPEC_DENUM THandleState : unsigned int { Normal, NeedRecreate, Changed };
	
	enum class DECLSPEC_DENUM TBoundChange : unsigned int { Location, Size };
	
	typedef System::Set<TBoundChange, _DELPHI_SET_ENUMERATOR(TBoundChange::Location), _DELPHI_SET_ENUMERATOR(TBoundChange::Size)> TBoundChanges;
	
	
private:
	_di_IDesignerHook FDesigner;
	System::UnicodeString FCaption;
	System::Types::TRectF FBounds;
	TBoundChanges FBoundChanges;
	System::Types::TRectF FDefaultWindowRect;
	System::Types::TSizeF FDefaultClientSize;
	TSizeConstraints* FConstraints;
	TFormPosition FPosition;
	bool FTransparency;
	Fmx::Types::TWindowHandle* FHandle;
	NativeUInt FContextHandle;
	TFmxFormBorderStyle FBorderStyle;
	System::Uitypes::TBorderIcons FBorderIcons;
	bool FVisible;
	bool FExplicitVisible;
	System::Uitypes::TModalResult FModalResult;
	TFmxFormStates FFormState;
	System::Classes::TBiDiMode FBiDiMode;
	bool FActive;
	Fmx::Types::_di_IControl FTarget;
	Fmx::Types::_di_IControl FHovered;
	Fmx::Types::_di_IControl FCaptured;
	Fmx::Types::_di_IControl FFocused;
	System::Types::TPointF FMousePos;
	System::Types::TPointF FDownPos;
	System::Types::TPointF FResizeSize;
	System::Types::TPointF FDownSize;
	bool FDragging;
	bool FResizing;
	System::Uitypes::TCursor FCursor;
	System::Uitypes::TWindowState FWindowState;
	bool FShowFullScreenIcon;
	bool FFullScreen;
	Fmx::Types::TBounds* FPadding;
	TFormFactor* FFormFactor;
	System::UnicodeString FFormFamily;
	TCommonCustomForm* FOldActiveForm;
	bool FChangingFocusGuard;
	TFormBorder* FBorder;
	int FStateChangeMessageId;
	TCloseEvent FOnClose;
	TCloseQueryEvent FOnCloseQuery;
	System::Classes::TNotifyEvent FOnActivate;
	System::Classes::TNotifyEvent FOnDeactivate;
	System::Classes::TNotifyEvent FOnCreate;
	System::Classes::TNotifyEvent FOnDestroy;
	System::Classes::TNotifyEvent FOnResize;
	TConstrainedResizeEvent FOnConstrainedResize;
	Fmx::Types::TMouseEvent FOnMouseDown;
	Fmx::Types::TMouseMoveEvent FOnMouseMove;
	Fmx::Types::TMouseEvent FOnMouseUp;
	Fmx::Types::TMouseWheelEvent FOnMouseWheel;
	Fmx::Types::TKeyEvent FOnKeyDown;
	Fmx::Types::TKeyEvent FOnKeyUp;
	System::Classes::TNotifyEvent FOnShow;
	System::Classes::TNotifyEvent FOnHide;
	System::Classes::TNotifyEvent FOnFocusChanged;
	Fmx::Types::TVirtualKeyboardEvent FOnVirtualKeyboardShown;
	Fmx::Types::TVirtualKeyboardEvent FOnVirtualKeyboardHidden;
	Fmx::Types::TTapEvent FOnTap;
	Fmx::Types::TTouchEvent FOnTouch;
	Fmx::Controls::TStyleBook* FStyleBook;
	int FScaleChangedId;
	int FStyleChangedId;
	bool FStyleBookChanged;
	bool FPreloadedBorderStyling;
	System::Types::TPointF FOriginalContainerSize;
	System::Classes::TComponent* FMainMenu;
	Fmx::Types::_di_INativeControl FMainMenuNative;
	Fmx::Types::TFormStyle FFormStyle;
	TCommonCustomForm* FParentForm;
	THandleState FHandleState;
	System::StaticArray<int, 7> FGestureRecognizers;
	System::DelphiInterface<System::Sysutils::TProc__1<System::Uitypes::TModalResult> > FResultProc;
	Fmx::Types::TTabList* FTabList;
	Fmx::Types::TTouchManager* FTouchManager;
	Fmx::Types::TGestureEvent FOnGesture;
	System::Classes::TNotifyEvent FOnSaveState;
	TFormSaveState* FSaveState;
	int FSaveStateMessageId;
	int FEngageCount;
	Fmx::Controls::THint* FSharedHint;
	Fmx::Types::_di_IControl FLastHinted;
	System::Generics::Collections::TList__1<Fmx::Controls::_di_IHintReceiver>* FHintReceiverList;
	System::UnicodeString FHint;
	bool FShowHint;
	TFormSystemStatusBar* FSystemStatusBar;
	System::UnicodeString FDesignerDeviceName;
	int FDesignerMasterStyle;
	bool __fastcall GetDesignerMobile();
	int __fastcall GetDesignerWidth();
	int __fastcall GetDesignerHeight();
	System::UnicodeString __fastcall GetDesignerDeviceName();
	Fmx::Types::TScreenOrientation __fastcall GetDesignerOrientation();
	System::UnicodeString __fastcall GetDesignerOSVersion();
	int __fastcall GetDesignerMasterStyle();
	void __fastcall SetDesignerMasterStyle(int Value);
	void __fastcall ReadDesignerMobile(System::Classes::TReader* Reader);
	void __fastcall ReadDesignerWidth(System::Classes::TReader* Reader);
	void __fastcall ReadDesignerHeight(System::Classes::TReader* Reader);
	void __fastcall ReadDesignerDeviceName(System::Classes::TReader* Reader);
	void __fastcall ReadDesignerOrientation(System::Classes::TReader* Reader);
	void __fastcall ReadDesignerOSVersion(System::Classes::TReader* Reader);
	void __fastcall ReadDesignerMasterStyle(System::Classes::TReader* Reader);
	void __fastcall WriteDesignerMasterStyle(System::Classes::TWriter* Writer);
	void __fastcall SetDesigner(const _di_IDesignerHook ADesigner);
	void __fastcall SetLeft(const int Value);
	void __fastcall SetTop(const int Value);
	void __fastcall SetHeight(const int Value);
	int __fastcall GetHeight();
	void __fastcall SetWidth(const int Value);
	int __fastcall GetWidth();
	void __fastcall SetCaption(const System::UnicodeString Value);
	int __fastcall GetClientHeight();
	int __fastcall GetClientWidth();
	void __fastcall SetBorderStyle(const TFmxFormBorderStyle Value);
	void __fastcall SetBorderIcons(const System::Uitypes::TBorderIcons Value);
	void __fastcall SetVisible(const bool Value);
	void __fastcall SetClientHeight(const int Value);
	void __fastcall SetClientWidth(const int Value);
	void __fastcall SetBiDiMode(const System::Classes::TBiDiMode Value);
	void __fastcall SetCursor(const System::Uitypes::TCursor Value);
	void __fastcall SetPosition(const TFormPosition Value);
	void __fastcall SetWindowState(const System::Uitypes::TWindowState Value);
	int __fastcall GetLeft();
	int __fastcall GetTop();
	void __fastcall ShowCaret(const Fmx::Types::_di_IControl Control);
	void __fastcall HideCaret(const Fmx::Types::_di_IControl Control);
	void __fastcall AdvanceTabFocus(const bool MoveForward);
	void __fastcall SaveStateHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	bool __fastcall GetFullScreen();
	void __fastcall SetFullScreen(const bool AValue);
	bool __fastcall GetShowFullScreenIcon();
	void __fastcall SetShowFullScreenIcon(const bool AValue);
	void __fastcall PreloadProperties();
	void __fastcall SetPadding(Fmx::Types::TBounds* const Value);
	System::Types::TPointF __fastcall GetOriginalContainerSize();
	void __fastcall SetBorder(TFormBorder* const Value);
	bool __fastcall FullScreenSupported();
	void __fastcall SetFormStyle(const Fmx::Types::TFormStyle Value);
	void __fastcall ReadTopMost(System::Classes::TReader* Reader);
	TCommonCustomForm* __fastcall ParentFormOfIControl(Fmx::Types::_di_IControl Value);
	bool __fastcall CanTransparency();
	Fmx::Types::TFormStyle __fastcall CanFormStyle(const Fmx::Types::TFormStyle NewValue);
	void __fastcall ReadShowActivated(System::Classes::TReader* Reader);
	void __fastcall DesignerUpdateBorder();
	void __fastcall ReadStaysOpen(System::Classes::TReader* Reader);
	bool __fastcall SetMainMenu(System::Classes::TComponent* Value);
	void __fastcall SetSystemStatusBar(TFormSystemStatusBar* const Value);
	bool __fastcall GetVisible();
	void __fastcall SetModalResult(System::Uitypes::TModalResult Value);
	Fmx::Types::TTouchManager* __fastcall GetTouchManager();
	void __fastcall SetTouchManager(Fmx::Types::TTouchManager* const Value);
	TFormSaveState* __fastcall GetSaveState();
	Fmx::Controls::THint* __fastcall SharedHint();
	void __fastcall ReleaseLastHinted();
	void __fastcall SetLastHinted(const Fmx::Types::_di_IControl AControl);
	System::UnicodeString __fastcall GetText();
	void __fastcall ClearFocusedControl(const bool IgnoreExceptions = false);
	void __fastcall SetFocusedControl(const Fmx::Types::_di_IControl NewFocused);
	void __fastcall FocusedControlExited();
	void __fastcall FocusedControlEntered();
	void __fastcall TriggerFormHint();
	void __fastcall TriggerControlHint(const Fmx::Types::_di_IControl AControl);
	void __fastcall SetShowHint(const bool Value);
	void __fastcall RestoreGesturesRecognizer();
	void __fastcall SetConstraints(TSizeConstraints* const Value);
	void __fastcall ConstraintsChanged(System::TObject* Sender);
	
protected:
	Fmx::Types::_di_IControl FActiveControl;
	int FUpdating;
	float FLastWidth;
	float FLastHeight;
	bool FDisableAlign;
	_di_IFMXWindowService FWinService;
	Fmx::Types::_di_IFMXCursorService FCursorService;
	_di_IFMXFullScreenWindowService FFullScreenWindowService;
	void __fastcall ReleaseForm();
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoDeleteChildren();
	virtual int __fastcall GetBackIndex();
	void __fastcall InvalidateRect(const System::Types::TRectF &R);
	virtual void __fastcall Recreate();
	virtual void __fastcall Resize();
	virtual void __fastcall ConstrainedResize(float &AMinWidth, float &AMinHeight, float &AMaxWidth, float &AMaxHeight);
	virtual void __fastcall AdjustSize(System::Types::TSizeF &ASize);
	virtual void __fastcall SetActive(const bool Value);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual Fmx::Types::_di_IControl __fastcall FindTarget(const System::Types::TPointF &P, const Fmx::Types::TDragObject &Data);
	void __fastcall SetFormFamily(const System::UnicodeString Value);
	virtual void __fastcall UpdateStyleBook();
	void __fastcall SetStyleBookWithoutUpdate(Fmx::Controls::TStyleBook* const StyleBook);
	void __fastcall ShowInDesigner();
	virtual HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	virtual void __fastcall Realign();
	void __fastcall ChildrenAlignChanged();
	virtual void __fastcall AddPreloadPropertyNames(System::Generics::Collections::TList__1<System::UnicodeString>* const PropertyNames);
	virtual void __fastcall SetPreloadProperties(System::Generics::Collections::TDictionary__2<System::UnicodeString,System::Variant>* const PropertyStore);
	virtual void __fastcall CreateHandle();
	virtual void __fastcall DestroyHandle();
	virtual void __fastcall ResizeHandle();
	Fmx::Types::TFmxObject* __fastcall GetObject();
	Fmx::Types::_di_IControl __fastcall GetActiveControl();
	void __fastcall SetActiveControl(const Fmx::Types::_di_IControl AControl);
	void __fastcall SetCaptured(const Fmx::Types::_di_IControl Value);
	Fmx::Types::_di_IControl __fastcall NewFocusedControl(const Fmx::Types::_di_IControl Value);
	void __fastcall SetFocused(const Fmx::Types::_di_IControl Value);
	void __fastcall SetHovered(const Fmx::Types::_di_IControl Value);
	virtual void __fastcall SetTransparency(const bool Value);
	Fmx::Types::_di_IControl __fastcall GetCaptured();
	Fmx::Types::_di_IControl __fastcall GetFocused();
	System::Classes::TBiDiMode __fastcall GetBiDiMode();
	Fmx::Types::_di_IControl __fastcall GetHovered();
	void __fastcall BeginInternalDrag(System::TObject* const Source, System::TObject* const ABitmap);
	Fmx::Controls::TStyleBook* __fastcall GetStyleBook();
	void __fastcall SetStyleBook(Fmx::Controls::TStyleBook* const Value);
	virtual void __fastcall PaintRects(const System::Types::TRectF *UpdateRects, const int UpdateRects_High);
	NativeUInt __fastcall GetContextHandle();
	void __fastcall SetContextHandle(const NativeUInt AContextHandle);
#ifndef _WIN64
	__property NativeUInt ContextHandle = {read=FContextHandle, nodefault};
#else /* _WIN64 */
	__property NativeUInt ContextHandle = {read=FContextHandle};
#endif /* _WIN64 */
	virtual TFormBorder* __fastcall CreateBorder();
	virtual void __fastcall Loaded();
	virtual void __fastcall FreeNotification(System::TObject* AObject);
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	DYNAMIC void __fastcall Updated();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall ValidateRename(System::Classes::TComponent* AComponent, const System::UnicodeString CurName, const System::UnicodeString NewName);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	DYNAMIC void __fastcall GetDeltaStreams(System::Classes::TGetStreamProc Proc);
	float __fastcall GetContainerWidth();
	float __fastcall GetContainerHeight();
	virtual void __fastcall UpdateActions();
	virtual Fmx::Actnlist::TActionLinkClass __fastcall GetActionLinkClass();
	virtual void __fastcall ActionChange(System::Classes::TBasicAction* Sender, bool CheckDefaults);
	bool __fastcall CaptionStore();
	virtual void __fastcall VirtualKeyboardChangeHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	virtual void __fastcall IsDialogKey(const System::Word Key, const System::WideChar KeyChar, const System::Classes::TShiftState Shift, bool &IsDialog);
	virtual void __fastcall DoShow();
	virtual void __fastcall DoHide();
	virtual void __fastcall DoClose(System::Uitypes::TCloseAction &CloseAction);
	virtual void __fastcall DoScaleChanged();
	virtual void __fastcall DoStyleChanged();
	virtual void __fastcall DoMouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall DoMouseMove(System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall DoMouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall DoMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, bool &Handled);
	virtual void __fastcall DoFocusChanged();
	virtual void __fastcall DoPaddingChanged();
	virtual void __fastcall DoTap(const System::Types::TPointF &Point);
	virtual TWindowStyles __fastcall GetWindowStyle();
	virtual void __fastcall DoParentFormChanged();
	virtual void __fastcall DoRootChanged();
	__property System::Classes::TComponent* MainMenu = {read=FMainMenu};
	virtual void __fastcall DoGesture(const Fmx::Types::TGestureEventInfo &EventInfo, bool &Handled);
	void __fastcall BroadcastGesture(const Fmx::Types::TGestureEventInfo &EventInfo);
	virtual void __fastcall CMGesture(Fmx::Types::TGestureEventInfo &EventInfo);
	Fmx::Types::TTouchManager* __fastcall TouchManager();
	System::Classes::TComponent* __fastcall GetFirstControlWithGesture(Fmx::Types::TInteractiveGesture AGesture);
	System::Classes::TComponent* __fastcall GetFirstControlWithGestureEngine();
	Fmx::Types::TInteractiveGestures __fastcall GetListOfInteractiveGestures();
	virtual void __fastcall Tap(const System::Types::TPointF &Location);
	void __fastcall MultiTouch(const Fmx::Types::TTouches Touches, const Fmx::Types::TTouchAction Action);
	void __fastcall Engage();
	void __fastcall Disengage();
	virtual void __fastcall ScaleChangedHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	virtual void __fastcall StyleChangedHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	void __fastcall TriggerHints();
	void __fastcall RegisterHintReceiver(const Fmx::Controls::_di_IHintReceiver AReceiver);
	void __fastcall UnregisterHintReceiver(const Fmx::Controls::_di_IHintReceiver AReceiver);
	
public:
	__fastcall virtual TCommonCustomForm(System::Classes::TComponent* AOwner);
	__fastcall virtual TCommonCustomForm(System::Classes::TComponent* AOwner, NativeInt Dummy);
	__fastcall virtual ~TCommonCustomForm();
	virtual void __fastcall InitializeNewForm();
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall BeforeDestruction();
	virtual Fmx::Types::_di_IControl __fastcall ObjectAtPoint(const System::Types::TPointF &AScreenPoint);
	void __fastcall CreateChildFormList(Fmx::Types::TFmxObject* Parent, System::Generics::Collections::TList__1<TCommonCustomForm*>* &List);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float AFormX, float AFormY);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, float AFormX, float AFormY);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float AFormX, float AFormY, bool DoClick = true);
	virtual void __fastcall MouseWheel(System::Classes::TShiftState Shift, int WheelDelta, bool &Handled);
	virtual void __fastcall MouseLeave();
	virtual void __fastcall KeyDown(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift);
	virtual void __fastcall KeyUp(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift);
	void __fastcall MouseCapture();
	void __fastcall ReleaseCapture();
	virtual void __fastcall RecreateResources();
	void __fastcall HandleNeed _DEPRECATED_ATTRIBUTE1("Use HandleNeeded.") ();
	void __fastcall HandleNeeded();
	void __fastcall Activate();
	void __fastcall Deactivate();
	virtual void __fastcall DragEnter(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point);
	virtual void __fastcall DragOver(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point, Fmx::Types::TDragOperation &Operation);
	virtual void __fastcall DragDrop(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point);
	virtual void __fastcall DragLeave();
	void __fastcall EnterMenuLoop();
	virtual void __fastcall StartWindowDrag();
	virtual void __fastcall StartWindowResize();
	void __fastcall AddRecognizer(const Fmx::Types::TInteractiveGesture Recognizer);
	void __fastcall RemoveRecognizer(const Fmx::Types::TInteractiveGesture Recognizer);
	Fmx::Types::TInteractiveGestures __fastcall GetRecognizers();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight)/* overload */;
	void __fastcall SetBounds(const System::Types::TRect &ARect)/* overload */;
	virtual void __fastcall SetBoundsF(const float ALeft, const float ATop, const float AWidth, const float AHeight)/* overload */;
	void __fastcall SetBoundsF(const System::Types::TRectF &ARect)/* overload */;
	virtual System::Types::TRect __fastcall GetBounds();
	virtual System::Types::TRectF __fastcall GetBoundsF();
	System::Types::TPointF __fastcall ClientToScreen(const System::Types::TPointF &AFormPoint);
	System::Types::TPointF __fastcall ScreenToClient(const System::Types::TPointF &AScreenPoint);
	virtual bool __fastcall CanShow();
	virtual bool __fastcall CloseQuery();
	System::Types::TRectF __fastcall ClientRect();
	void __fastcall RecreateOsMenu();
	virtual void __fastcall Release _DEPRECATED_ATTRIBUTE0 ();
	System::Uitypes::TCloseAction __fastcall Close();
	void __fastcall Show();
	void __fastcall Hide();
	virtual void __fastcall BringToFront();
	virtual void __fastcall SendToBack();
	System::Uitypes::TModalResult __fastcall ShowModal()/* overload */;
	void __fastcall ShowModal(const System::DelphiInterface<System::Sysutils::TProc__1<System::Uitypes::TModalResult> > ResultProc)/* overload */;
	System::Uitypes::TCloseAction __fastcall CloseModal();
	virtual bool __fastcall IsPopupForm()/* overload */;
	__classmethod bool __fastcall IsPopupForm(TCommonCustomForm* const AForm)/* overload */;
	void __fastcall Invalidate();
	virtual void __fastcall BeginUpdate();
	virtual void __fastcall EndUpdate();
	Fmx::Types::_di_ITabList __fastcall GetTabList();
	bool __fastcall IsHandleAllocated();
	__property Fmx::Types::TWindowHandle* Handle = {read=FHandle};
	__property TCommonCustomForm* ParentForm = {read=FParentForm};
	__property Fmx::Types::TFormStyle FormStyle = {read=FFormStyle, write=SetFormStyle, default=0};
	__property System::Uitypes::TModalResult ModalResult = {read=FModalResult, write=SetModalResult, nodefault};
	__property TFmxFormStates FormState = {read=FFormState, nodefault};
	__property _di_IDesignerHook Designer = {read=FDesigner, write=SetDesigner};
	__property Fmx::Types::_di_IControl Captured = {read=FCaptured};
	__property Fmx::Types::_di_IControl Focused = {read=FFocused, write=SetFocused};
	__property Fmx::Types::_di_IControl Hovered = {read=FHovered};
	__property bool Active = {read=FActive, write=SetActive, nodefault};
	__property System::Classes::TBiDiMode BiDiMode = {read=GetBiDiMode, write=SetBiDiMode, default=0};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption, stored=CaptionStore};
	__property System::Uitypes::TCursor Cursor = {read=FCursor, write=SetCursor, default=0};
	__property TFormBorder* Border = {read=FBorder, write=SetBorder};
	__property TFmxFormBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=2};
	__property System::Uitypes::TBorderIcons BorderIcons = {read=FBorderIcons, write=SetBorderIcons, default=7};
	__property System::Types::TRect Bounds = {read=GetBounds, write=SetBounds};
	__property System::Types::TRectF BoundsF = {read=GetBoundsF, write=SetBoundsF};
	__property int ClientHeight = {read=GetClientHeight, write=SetClientHeight, nodefault};
	__property int ClientWidth = {read=GetClientWidth, write=SetClientWidth, nodefault};
	__property System::Types::TPointF OriginalContainerSize = {read=GetOriginalContainerSize};
	__property Fmx::Types::TBounds* Padding = {read=FPadding, write=SetPadding};
	__property TFormPosition Position = {read=FPosition, write=SetPosition, default=2};
	__property Fmx::Controls::TStyleBook* StyleBook = {read=FStyleBook, write=SetStyleBook};
	__property TFormSystemStatusBar* SystemStatusBar = {read=FSystemStatusBar, write=SetSystemStatusBar};
	__property bool Transparency = {read=FTransparency, write=SetTransparency, default=0};
	__property int Width = {read=GetWidth, write=SetWidth, stored=false, nodefault};
	__property int Height = {read=GetHeight, write=SetHeight, stored=false, nodefault};
	__property TSizeConstraints* Constraints = {read=FConstraints, write=SetConstraints};
	__property bool Visible = {read=GetVisible, write=SetVisible, default=0};
	__property System::Uitypes::TWindowState WindowState = {read=FWindowState, write=SetWindowState, default=0};
	__property TWindowStyles WindowStyle = {read=GetWindowStyle, nodefault};
	__property bool FullScreen = {read=GetFullScreen, write=SetFullScreen, default=0};
	__property bool ShowFullScreenIcon = {read=GetShowFullScreenIcon, write=SetShowFullScreenIcon, default=1};
	__property TFormFactor* FormFactor = {read=FFormFactor, write=FFormFactor};
	__property System::UnicodeString FormFamily = {read=FFormFamily, write=SetFormFamily};
	__property TFormSaveState* SaveState = {read=GetSaveState};
	__property bool ShowHint = {read=FShowHint, write=SetShowHint, default=1};
	__property System::Classes::TNotifyEvent OnCreate = {read=FOnCreate, write=FOnCreate};
	__property System::Classes::TNotifyEvent OnDestroy = {read=FOnDestroy, write=FOnDestroy};
	__property TCloseEvent OnClose = {read=FOnClose, write=FOnClose};
	__property TCloseQueryEvent OnCloseQuery = {read=FOnCloseQuery, write=FOnCloseQuery};
	__property System::Classes::TNotifyEvent OnActivate = {read=FOnActivate, write=FOnActivate};
	__property System::Classes::TNotifyEvent OnDeactivate = {read=FOnDeactivate, write=FOnDeactivate};
	__property Fmx::Types::TKeyEvent OnKeyDown = {read=FOnKeyDown, write=FOnKeyDown};
	__property Fmx::Types::TKeyEvent OnKeyUp = {read=FOnKeyUp, write=FOnKeyUp};
	__property Fmx::Types::TMouseEvent OnMouseDown = {read=FOnMouseDown, write=FOnMouseDown};
	__property Fmx::Types::TMouseMoveEvent OnMouseMove = {read=FOnMouseMove, write=FOnMouseMove};
	__property Fmx::Types::TMouseEvent OnMouseUp = {read=FOnMouseUp, write=FOnMouseUp};
	__property Fmx::Types::TMouseWheelEvent OnMouseWheel = {read=FOnMouseWheel, write=FOnMouseWheel};
	__property System::Classes::TNotifyEvent OnResize = {read=FOnResize, write=FOnResize};
	__property TConstrainedResizeEvent OnConstrainedResize = {read=FOnConstrainedResize, write=FOnConstrainedResize};
	__property System::Classes::TNotifyEvent OnShow = {read=FOnShow, write=FOnShow};
	__property System::Classes::TNotifyEvent OnHide = {read=FOnHide, write=FOnHide};
	__property System::Classes::TNotifyEvent OnFocusChanged = {read=FOnFocusChanged, write=FOnFocusChanged};
	__property Fmx::Types::TVirtualKeyboardEvent OnVirtualKeyboardShown = {read=FOnVirtualKeyboardShown, write=FOnVirtualKeyboardShown};
	__property Fmx::Types::TVirtualKeyboardEvent OnVirtualKeyboardHidden = {read=FOnVirtualKeyboardHidden, write=FOnVirtualKeyboardHidden};
	__property System::Classes::TNotifyEvent OnSaveState = {read=FOnSaveState, write=FOnSaveState};
	__property Fmx::Types::TTouchManager* Touch = {read=GetTouchManager, write=SetTouchManager};
	__property Fmx::Types::TGestureEvent OnGesture = {read=FOnGesture, write=FOnGesture};
	__property Fmx::Types::TTapEvent OnTap = {read=FOnTap, write=FOnTap};
	__property Fmx::Types::TTouchEvent OnTouch = {read=FOnTouch, write=FOnTouch};
	
__published:
	__property int Left = {read=GetLeft, write=SetLeft, nodefault};
	__property int Top = {read=GetTop, write=SetTop, nodefault};
private:
	void *__IHintRegistry;	// Fmx::Controls::IHintRegistry 
	void *__ICaption;	// Fmx::Actnlist::ICaption 
	void *__IMultiTouch;	// Fmx::Types::IMultiTouch 
	void *__IGestureControl;	// Fmx::Types::IGestureControl 
	void *__ITabStopController;	// Fmx::Types::ITabStopController 
	void *__IOriginalContainerSize;	// Fmx::Types::IOriginalContainerSize 
	void *__IDesignerStorage;	// IDesignerStorage 
	void *__IStyleBookOwner;	// Fmx::Controls::IStyleBookOwner 
	void *__IPaintControl;	// Fmx::Types::IPaintControl 
	void *__IAlignRoot;	// Fmx::Types::IAlignRoot 
	void *__IContainerObject;	// Fmx::Types::IContainerObject 
	void *__IRoot;	// Fmx::Types::IRoot 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {8F3B3C46-450B-4A8C-800F-FD47538244C3}
	operator Fmx::Controls::_di_IHintRegistry()
	{
		Fmx::Controls::_di_IHintRegistry intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Controls::IHintRegistry*(void) { return (Fmx::Controls::IHintRegistry*)&__IHintRegistry; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3D039C9C-8888-466F-A344-E7026EEE2C07}
	operator Fmx::Actnlist::_di_ICaption()
	{
		Fmx::Actnlist::_di_ICaption intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::ICaption*(void) { return (Fmx::Actnlist::ICaption*)&__ICaption; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A263006D-3472-40F8-A917-F2221B48ABDD}
	operator Fmx::Types::_di_IMultiTouch()
	{
		Fmx::Types::_di_IMultiTouch intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IMultiTouch*(void) { return (Fmx::Types::IMultiTouch*)&__IMultiTouch; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A263006D-3472-40F8-A917-F2221B48A459}
	operator Fmx::Types::_di_IGestureControl()
	{
		Fmx::Types::_di_IGestureControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IGestureControl*(void) { return (Fmx::Types::IGestureControl*)&__IGestureControl; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E7D2E0C5-EA3B-40BD-B728-5E4BB264EFC1}
	operator Fmx::Types::_di_ITabStopController()
	{
		Fmx::Types::_di_ITabStopController intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::ITabStopController*(void) { return (Fmx::Types::ITabStopController*)&__ITabStopController; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E76F6097-AF5D-49A1-9C7B-5127D6068059}
	operator Fmx::Types::_di_IOriginalContainerSize()
	{
		Fmx::Types::_di_IOriginalContainerSize intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IOriginalContainerSize*(void) { return (Fmx::Types::IOriginalContainerSize*)&__IOriginalContainerSize; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {ACCC9241-07E2-421B-8F4C-B70D1E4050AE}
	operator _di_IDesignerStorage()
	{
		_di_IDesignerStorage intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDesignerStorage*(void) { return (IDesignerStorage*)&__IDesignerStorage; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {BA1AE6C6-FCF7-43E2-92AA-2869FF203309}
	operator Fmx::Controls::_di_IStyleBookOwner()
	{
		Fmx::Controls::_di_IStyleBookOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Controls::IStyleBookOwner*(void) { return (Fmx::Controls::IStyleBookOwner*)&__IStyleBookOwner; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {47959F99-CCA5-4ACF-BB8D-357F126E9C78}
	operator Fmx::Types::_di_IPaintControl()
	{
		Fmx::Types::_di_IPaintControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IPaintControl*(void) { return (Fmx::Types::IPaintControl*)&__IPaintControl; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {86DF30A6-0394-4A0E-8722-1F2CDB242CE8}
	operator Fmx::Types::_di_IAlignRoot()
	{
		Fmx::Types::_di_IAlignRoot intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IAlignRoot*(void) { return (Fmx::Types::IAlignRoot*)&__IAlignRoot; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {DE635E60-CB00-4741-92BB-3B8F1F29A67C}
	operator Fmx::Types::_di_IContainerObject()
	{
		Fmx::Types::_di_IContainerObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IContainerObject*(void) { return (Fmx::Types::IContainerObject*)&__IContainerObject; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7F7BB7B0-5932-49DD-9D35-712B2BA5D8EF}
	operator Fmx::Types::_di_IRoot()
	{
		Fmx::Types::_di_IRoot intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IRoot*(void) { return (Fmx::Types::IRoot*)&__IRoot; }
	#endif
	
};


class PASCALIMPLEMENTATION TCustomForm : public TCommonCustomForm
{
	typedef TCommonCustomForm inherited;
	
	
private:
	typedef System::DynamicArray<System::Types::TRectF> _TCustomForm__1;
	
	
private:
	Fmx::Graphics::TCanvas* FCanvas;
	Fmx::Graphics::TCanvas* FTempCanvas;
	Fmx::Graphics::TBrush* FFill;
	bool FDrawing;
	_TCustomForm__1 FUpdateRects;
	System::UnicodeString FStyleLookup;
	bool FNeedStyleLookup;
	Fmx::Types::TFmxObject* FResourceLink;
	Fmx::Controls::TOnPaintEvent FOnPaint;
	System::Generics::Collections::TList__1<Fmx::Controls::TControl*>* FControls;
	Fmx::Graphics::TCanvasQuality FQuality;
	int FDisableUpdating;
	void __fastcall SetFill(Fmx::Graphics::TBrush* const Value);
	void __fastcall FillChanged(System::TObject* Sender);
	Fmx::Graphics::TCanvas* __fastcall GetCanvas();
	int __fastcall GetUpdateRectsCount();
	System::Types::TRectF __fastcall GetUpdateRect(const int Index);
	float __fastcall GetSceneScale();
	System::Types::TPointF __fastcall LocalToScreen(const System::Types::TPointF &P);
	System::Types::TPointF __fastcall ScreenToLocal(const System::Types::TPointF &P);
	void __fastcall SetStyleLookup(const System::UnicodeString Value);
	void __fastcall AddUpdateRect(const System::Types::TRectF &R);
	void __fastcall DisableUpdating();
	void __fastcall EnableUpdating();
	void __fastcall ChangeScrollingState(Fmx::Controls::TControl* const AControl, const bool Active);
	bool __fastcall IsStyleLookupStored();
	Fmx::Controls::TControl* __fastcall GetActiveHDControl();
	void __fastcall SetActiveHDControl(Fmx::Controls::TControl* const Value);
	void __fastcall SetQuality(const Fmx::Graphics::TCanvasQuality Value);
	void __fastcall AddUpdateRects(const System::Types::TRectF *UpdateRects, const int UpdateRects_High);
	void __fastcall PrepareForPaint();
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoDeleteChildren();
	virtual void __fastcall ChangeChildren();
	virtual void __fastcall UpdateStyleBook();
	virtual void __fastcall ApplyStyleLookup();
	virtual void __fastcall AddPreloadPropertyNames(System::Generics::Collections::TList__1<System::UnicodeString>* const PropertyNames);
	virtual void __fastcall SetPreloadProperties(System::Generics::Collections::TDictionary__2<System::UnicodeString,System::Variant>* const PropertyStore);
	virtual void __fastcall DoPaint(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &ARect);
	Fmx::Types::TFmxObject* __fastcall GetStyleObject();
	virtual void __fastcall PaintBackground();
	virtual void __fastcall CreateHandle();
	virtual void __fastcall DestroyHandle();
	virtual void __fastcall ResizeHandle();
	virtual void __fastcall PaintRects(const System::Types::TRectF *UpdateRects, const int UpdateRects_High);
	void __fastcall RecreateCanvas();
	void __fastcall RecalcControlsUpdateRect();
	virtual void __fastcall Realign();
	virtual void __fastcall DoScaleChanged();
	virtual void __fastcall DoStyleChanged();
	virtual TWindowStyles __fastcall GetWindowStyle();
	virtual void __fastcall StyleChangedHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	
public:
	__fastcall virtual TCustomForm(System::Classes::TComponent* AOwner);
	__fastcall virtual TCustomForm(System::Classes::TComponent* AOwner, NativeInt Dummy);
	__fastcall virtual ~TCustomForm();
	virtual void __fastcall InitializeNewForm();
	virtual void __fastcall EndUpdate();
	void __fastcall PaintTo(Fmx::Graphics::TCanvas* const Canvas);
	virtual void __fastcall RecreateResources();
	__property Action;
	__property Fmx::Graphics::TCanvas* Canvas = {read=GetCanvas};
	__property Fmx::Graphics::TBrush* Fill = {read=FFill, write=SetFill};
	__property Fmx::Graphics::TCanvasQuality Quality = {read=FQuality, write=SetQuality, nodefault};
	__property Fmx::Controls::TControl* ActiveControl = {read=GetActiveHDControl, write=SetActiveHDControl};
	__property System::UnicodeString StyleLookup = {read=FStyleLookup, write=SetStyleLookup, stored=IsStyleLookupStored};
	__property Fmx::Controls::TOnPaintEvent OnPaint = {read=FOnPaint, write=FOnPaint};
private:
	void *__IScene;	// Fmx::Controls::IScene 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {16DB110E-DA7D-4E75-BC2D-999FA12E45F5}
	operator Fmx::Controls::_di_IScene()
	{
		Fmx::Controls::_di_IScene intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Controls::IScene*(void) { return (Fmx::Controls::IScene*)&__IScene; }
	#endif
	
};


class PASCALIMPLEMENTATION TCustomPopupForm : public TCustomForm
{
	typedef TCustomForm inherited;
	
	
private:
	enum class DECLSPEC_DENUM TAniState : unsigned int { asNone, asShow, asClose };
	
	
private:
	bool FAutoFree;
	Fmx::Controls::TPlacement FPlacement;
	Fmx::Controls::TPlacement FRealPlacement;
	Fmx::Controls::TControl* FPlacementTarget;
	System::Types::TPointF FOffset;
	System::Types::TSizeF FSize;
	Fmx::Types::TBounds* FPlacementRectangle;
	System::Types::TRectF FScreenPlacementRect;
	bool FPlacementChanged;
	Fmx::Types::TTimer* FTimer;
	TAniState FAniState;
	float FAniDuration;
	float FMaxAniPosition;
	float FAniPosition;
	System::TDateTime FShowTime;
	System::TDateTime FCloseTime;
	System::Classes::TNotifyEvent FOnAniTimer;
	bool FFirstShow;
	bool FDragWithParent;
	bool FHideWhenPlacementTargetInvisible;
	System::Classes::TNotifyEvent FBeforeClose;
	System::Classes::TNotifyEvent FBeforeShow;
	System::Types::TRectF FScreenContentRect;
	Fmx::Types::TBounds* FContentPadding;
	Fmx::Controls::TControl* FContentControl;
	System::Classes::TNotifyEvent FOnRealPlacementChanged;
	int FPreferedDisplayIndex;
	void __fastcall SetOffset(const System::Types::TPointF &Value);
	void __fastcall SetSize(const System::Types::TSizeF &Value);
	void __fastcall SetPlacementRectangle(Fmx::Types::TBounds* const Value);
	void __fastcall SetPlacement(const Fmx::Controls::TPlacement Value);
	void __fastcall TimerProc(System::TObject* Sender);
	void __fastcall SetPlacementTarget(Fmx::Controls::TControl* const Value);
	void __fastcall SetDragWithParent(const bool Value);
	void __fastcall SetContentPadding(Fmx::Types::TBounds* const Value);
	void __fastcall SetContentControl(Fmx::Controls::TControl* const Value);
	void __fastcall SetPreferedDisplayIndex(const int Value);
	
protected:
	virtual void __fastcall DoBeforeShow();
	virtual void __fastcall DoBeforeClose();
	virtual void __fastcall DoClose(System::Uitypes::TCloseAction &CloseAction);
	virtual void __fastcall DoPaddingChanged();
	virtual void __fastcall DoApplyPlacement();
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall Updated();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall DoAniTimer();
	virtual void __fastcall Realign();
	virtual void __fastcall DoRealPlacementChanged();
	bool __fastcall IsVisibleOnScreen(Fmx::Controls::TControl* const AControl);
	
public:
	__fastcall virtual TCustomPopupForm(System::Classes::TComponent* AOwner, NativeInt Dummy);
	__fastcall TCustomPopupForm(System::Classes::TComponent* AOwner, Fmx::Controls::TStyleBook* AStyleBook, Fmx::Controls::TControl* APlacementTarget, bool AutoFree);
	__fastcall virtual ~TCustomPopupForm();
	void __fastcall ApplyPlacement();
	virtual bool __fastcall CanShow();
	virtual bool __fastcall CloseQuery();
	__property float AniDuration = {read=FAniDuration, write=FAniDuration};
	__property float AniPosition = {read=FAniPosition};
	__property bool AutoFree = {read=FAutoFree, nodefault};
	__property Fmx::Controls::TControl* ContentControl = {read=FContentControl, write=SetContentControl};
	__property Fmx::Types::TBounds* ContentPadding = {read=FContentPadding, write=SetContentPadding};
	__property bool DragWithParent = {read=FDragWithParent, write=SetDragWithParent, nodefault};
	__property bool HideWhenPlacementTargetInvisible = {read=FHideWhenPlacementTargetInvisible, write=FHideWhenPlacementTargetInvisible, nodefault};
	__property System::Types::TPointF Offset = {read=FOffset, write=SetOffset};
	__property Fmx::Controls::TPlacement Placement = {read=FPlacement, write=SetPlacement, nodefault};
	__property Fmx::Types::TBounds* PlacementRectangle = {read=FPlacementRectangle, write=SetPlacementRectangle};
	__property Fmx::Controls::TControl* PlacementTarget = {read=FPlacementTarget, write=SetPlacementTarget};
	__property int PreferedDisplayIndex = {read=FPreferedDisplayIndex, write=SetPreferedDisplayIndex, nodefault};
	__property Fmx::Controls::TPlacement RealPlacement = {read=FRealPlacement, nodefault};
	__property System::Types::TRectF ScreenContentRect = {read=FScreenContentRect};
	__property System::Types::TRectF ScreenPlacementRect = {read=FScreenPlacementRect};
	__property System::Types::TSizeF Size = {read=FSize, write=SetSize};
	__property System::Classes::TNotifyEvent OnAniTimer = {read=FOnAniTimer, write=FOnAniTimer};
	__property System::Classes::TNotifyEvent BeforeShow = {read=FBeforeShow, write=FBeforeShow};
	__property System::Classes::TNotifyEvent BeforeClose = {read=FBeforeClose, write=FBeforeClose};
	__property System::Classes::TNotifyEvent OnRealPlacementChanged = {read=FOnRealPlacementChanged, write=FOnRealPlacementChanged};
};


class PASCALIMPLEMENTATION TForm : public TCustomForm
{
	typedef TCustomForm inherited;
	
__published:
	__property Action;
	__property ActiveControl;
	__property BiDiMode = {default=0};
	__property Border;
	__property BorderIcons = {default=7};
	__property BorderStyle = {default=2};
	__property Caption = {default=0};
	__property ClientHeight;
	__property ClientWidth;
	__property Cursor = {default=0};
	__property Fill;
	__property Height;
	__property Left;
	__property Padding;
	__property Position = {default=2};
	__property Quality = {default=0};
	__property SystemStatusBar;
	__property StyleBook;
	__property StyleLookup = {default=0};
	__property Transparency = {default=0};
	__property Top;
	__property FormStyle = {default=0};
	__property Visible = {default=0};
	__property WindowState = {default=0};
	__property Width;
	__property Constraints;
	__property FormFactor;
	__property FormFamily = {default=0};
	__property FullScreen = {default=0};
	__property ShowFullScreenIcon = {default=0};
	__property ShowHint = {default=1};
	__property OnActivate;
	__property OnCreate;
	__property OnClose;
	__property OnCloseQuery;
	__property OnDeactivate;
	__property OnDestroy;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnResize;
	__property OnConstrainedResize;
	__property OnPaint;
	__property OnShow;
	__property OnHide;
	__property OnFocusChanged;
	__property OnVirtualKeyboardShown;
	__property OnVirtualKeyboardHidden;
	__property Touch;
	__property OnGesture;
	__property OnSaveState;
	__property OnTap;
	__property OnTouch;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TForm(System::Classes::TComponent* AOwner) : TCustomForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TForm(System::Classes::TComponent* AOwner, NativeInt Dummy) : TCustomForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TForm() { }
	
};


class PASCALIMPLEMENTATION TFrame : public Fmx::Controls::TControl
{
	typedef Fmx::Controls::TControl inherited;
	
private:
	bool FInLoaded;
	
protected:
	virtual void __fastcall Paint();
	virtual void __fastcall Loaded();
	virtual void __fastcall Resize();
	virtual void __fastcall DoResized();
	virtual bool __fastcall CheckHitTest(const bool AHitTest);
	HIDESBASE bool __fastcall GetVisible();
	
public:
	__fastcall virtual TFrame(System::Classes::TComponent* AOwner);
	virtual void __fastcall AfterConstruction();
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	virtual bool __fastcall ShouldTestMouseHits();
	
__published:
	__property Action;
	__property Align = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Locked = {default=0};
	__property Height;
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property Visible = {default=1};
	__property Width;
	__property TabStop = {default=1};
	__property TabOrder = {default=-1};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TControl.Destroy */ inline __fastcall virtual ~TFrame() { }
	
private:
	void *__IControl;	// Fmx::Types::IControl 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7318D022-D048-49DE-BF55-C5C36A2AD1AC}
	operator Fmx::Types::_di_IControl()
	{
		Fmx::Types::_di_IControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IControl*(void) { return (Fmx::Types::IControl*)&__IControl; }
	#endif
	
};


class PASCALIMPLEMENTATION TScreen : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	bool FManagingDataModules;
	System::Generics::Collections::TList__1<void *>* FForms;
	System::Generics::Collections::TList__1<void *>* FDataModules;
	System::Generics::Collections::TList__1<void *>* FPopupForms;
	TCommonCustomForm* FSaveForm;
	Fmx::Types::_di_IFMXMouseService FMouseSvc;
	System::_di_IInterface FMultiDisplaySvc;
	System::Generics::Collections::TList__1<TCommonCustomForm*>* FPopupList;
	bool FClosingPopupList;
	void __fastcall AddDataModule(System::Classes::TDataModule* DataModule);
	void __fastcall AddForm(TCommonCustomForm* const AForm);
	TCommonCustomForm* __fastcall GetForm(int Index);
	int __fastcall GetFormCount();
	void __fastcall RemoveDataModule(System::Classes::TDataModule* DataModule);
	void __fastcall RemoveForm(TCommonCustomForm* const AForm);
	System::Classes::TDataModule* __fastcall GetDataModule(int Index);
	int __fastcall GetDataModuleCount();
	TCommonCustomForm* __fastcall GetPopupForms(int Index);
	int __fastcall GetPopupFormCount();
	TCommonCustomForm* __fastcall GetActiveForm();
	void __fastcall SetActiveForm(TCommonCustomForm* const Value);
	Fmx::Types::_di_IControl __fastcall GetFocusControl();
	Fmx::Types::TFmxObject* __fastcall GetFocusObject();
	System::Types::TRectF __fastcall GetDesktopRect();
	System::Types::TRectF __fastcall GetWorkAreaRect();
	int __fastcall GetDisplayCount();
	Fmx::Types::TDisplay __fastcall GetDisplay(const int Index);
	float __fastcall GetDesktopHeight();
	float __fastcall GetDesktopLeft();
	float __fastcall GetDesktopTop();
	float __fastcall GetDesktopWidth();
	float __fastcall GetWorkAreaHeight();
	float __fastcall GetWorkAreaLeft();
	float __fastcall GetWorkAreaTop();
	float __fastcall GetWorkAreaWidth();
	float __fastcall GetHeight();
	float __fastcall GetWidth();
	
protected:
	__property Fmx::Types::TFmxObject* FocusObject = {read=GetFocusObject};
	void __fastcall CloseFormList(System::Generics::Collections::TList__1<TCommonCustomForm*>* const List);
	System::Generics::Collections::TList__1<TCommonCustomForm*>* __fastcall CreatePopupList(TCommonCustomForm* const SaveForm);
	
public:
	__fastcall virtual TScreen(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TScreen();
	int __fastcall IndexFormOfObject(Fmx::Types::TFmxObject* const AObject, const bool VisibleOnly = true);
	TCommonCustomForm* __fastcall NextActiveForm(TCommonCustomForm* const OldActiveForm);
	System::Types::TPointF __fastcall MousePos();
	System::Types::TSizeF __fastcall Size();
	__property float Height = {read=GetHeight};
	__property float Width = {read=GetWidth};
	bool __fastcall MultiDisplaySupported();
	void __fastcall UpdateDisplayInformation();
	System::Types::TRectF __fastcall GetDesktopCenterRect(const System::Types::TSizeF &Size);
	__property int DisplayCount = {read=GetDisplayCount, nodefault};
	__property Fmx::Types::TDisplay Displays[const int Index] = {read=GetDisplay};
	Fmx::Types::TDisplay __fastcall DisplayFromPoint(const System::Types::TPoint &Point)/* overload */;
	Fmx::Types::TDisplay __fastcall DisplayFromPoint(const System::Types::TPointF &Point)/* overload */;
	Fmx::Types::TDisplay __fastcall DisplayFromRect(const System::Types::TRect &Rect)/* overload */;
	Fmx::Types::TDisplay __fastcall DisplayFromRect(const System::Types::TRectF &Rect)/* overload */;
	Fmx::Types::TDisplay __fastcall DisplayFromForm(TCommonCustomForm* const Form)/* overload */;
	Fmx::Types::TDisplay __fastcall DisplayFromForm(TCommonCustomForm* const Form, const System::Types::TPoint &Point)/* overload */;
	Fmx::Types::TDisplay __fastcall DisplayFromForm(TCommonCustomForm* const Form, const System::Types::TPointF &Point)/* overload */;
	__property System::Types::TRectF DesktopRect = {read=GetDesktopRect};
	__property float DesktopTop = {read=GetDesktopTop};
	__property float DesktopLeft = {read=GetDesktopLeft};
	__property float DesktopHeight = {read=GetDesktopHeight};
	__property float DesktopWidth = {read=GetDesktopWidth};
	__property System::Types::TRectF WorkAreaRect = {read=GetWorkAreaRect};
	__property float WorkAreaHeight = {read=GetWorkAreaHeight};
	__property float WorkAreaLeft = {read=GetWorkAreaLeft};
	__property float WorkAreaTop = {read=GetWorkAreaTop};
	__property float WorkAreaWidth = {read=GetWorkAreaWidth};
	__property int FormCount = {read=GetFormCount, nodefault};
	__property TCommonCustomForm* Forms[int Index] = {read=GetForm};
	__property int DataModuleCount = {read=GetDataModuleCount, nodefault};
	__property System::Classes::TDataModule* DataModules[int Index] = {read=GetDataModule};
	__property int PopupFormCount = {read=GetPopupFormCount, nodefault};
	__property TCommonCustomForm* PopupForms[int Index] = {read=GetPopupForms};
	bool __fastcall Contains(System::Classes::TComponent* const AComponent);
	bool __fastcall IsParent(TCommonCustomForm* AForm, TCommonCustomForm* AParent);
	bool __fastcall PrepareClosePopups(TCommonCustomForm* const SaveForm);
	bool __fastcall ClosePopupForms();
	__property TCommonCustomForm* ActiveForm = {read=GetActiveForm, write=SetActiveForm};
	__property Fmx::Types::_di_IControl FocusControl = {read=GetFocusControl};
	Fmx::Types::TFmxObject* __fastcall GetObjectByTarget(System::TObject* const Target);
};


__interface  INTERFACE_UUID("{5D785E12-F0A8-416B-AC6A-20747833CE5D}") IDesignerForm  : public System::IInterface 
{
	
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int ActionUpdateDelayNever;
#define DefaultFormStyleLookup L"backgroundstyle"
extern DELPHI_PACKAGE TScreen* Screen;
extern DELPHI_PACKAGE TApplication* Application;
extern DELPHI_PACKAGE TApplicationState __fastcall ApplicationState(void);
extern DELPHI_PACKAGE void __fastcall FinalizeForms(void);
}	/* namespace Forms */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_FORMS)
using namespace Fmx::Forms;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif

//-- user supplied -----------------------------------------------------------
#if defined(__SAVE_CREATEWINDOW)
  #define CreateWindow __SAVE_CREATEWINDOW
  #undef  __SAVE_CREATEWINDOW
#endif

#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_FormsHPP
