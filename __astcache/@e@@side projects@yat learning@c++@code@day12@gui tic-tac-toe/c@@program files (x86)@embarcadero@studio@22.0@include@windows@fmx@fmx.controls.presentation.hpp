// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Controls.Presentation.pas' rev: 35.00 (Windows)

#ifndef Fmx_Controls_PresentationHPP
#define Fmx_Controls_PresentationHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Types.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Rtti.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Presentation.Messages.hpp>
#include <FMX.Controls.Model.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Controls
{
namespace Presentation
{
//-- forward type declarations -----------------------------------------------
struct TKeyInfo;
struct TActionInfo;
struct TFindStyleResourceInfo;
struct TObjectAtPointInfo;
struct TPointInObjectLocalInfo;
struct TTriggerInfo;
struct TMouseWheelInfo;
struct TFirstControlWithGestureInfo;
class DELPHICLASS EPresentationWrongModel;
__interface DELPHIINTERFACE IIgnoreControlPosition;
typedef System::DelphiInterface<IIgnoreControlPosition> _di_IIgnoreControlPosition;
class DELPHICLASS TPresentationProxy;
__interface DELPHIINTERFACE ISceneChildrenObserver;
typedef System::DelphiInterface<ISceneChildrenObserver> _di_ISceneChildrenObserver;
class DELPHICLASS TPresentedControl;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TKeyInfo
{
public:
	System::Word Key;
	System::WideChar KeyChar;
	System::Classes::TShiftState Shift;
};


struct DECLSPEC_DRECORD TActionInfo
{
public:
	System::Classes::TBasicAction* Sender;
	bool CheckDefaults;
};


struct DECLSPEC_DRECORD TFindStyleResourceInfo
{
public:
	bool Clone;
	System::UnicodeString ResourceName;
	Fmx::Types::TFmxObject* Resource;
};


struct DECLSPEC_DRECORD TObjectAtPointInfo
{
public:
	System::Types::TPointF Point;
	Fmx::Types::_di_IControl Control;
};


struct DECLSPEC_DRECORD TPointInObjectLocalInfo
{
public:
	System::Types::TPointF Point;
	bool Result;
};


struct DECLSPEC_DRECORD TTriggerInfo
{
public:
	Fmx::Types::TFmxObject* Instance;
	System::UnicodeString Trigger;
	bool Wait;
};


struct DECLSPEC_DRECORD TMouseWheelInfo
{
public:
	System::Classes::TShiftState Shift;
	int WheelDelta;
	bool Handled;
};


struct DECLSPEC_DRECORD TFirstControlWithGestureInfo
{
public:
	Fmx::Types::TInteractiveGesture Gestures;
	System::Classes::TComponent* Control;
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPresentationWrongModel : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPresentationWrongModel(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPresentationWrongModel(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPresentationWrongModel(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPresentationWrongModel(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPresentationWrongModel(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPresentationWrongModel(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPresentationWrongModel(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPresentationWrongModel(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPresentationWrongModel(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPresentationWrongModel(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPresentationWrongModel(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPresentationWrongModel(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPresentationWrongModel() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{6C5DA960-D0E0-457B-9464-D489034510B7}") IIgnoreControlPosition  : public System::IInterface 
{
	virtual bool __fastcall GetIgnoreControlPosition() = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPresentationProxy : public Fmx::Presentation::Messages::TMessageSender
{
	typedef Fmx::Presentation::Messages::TMessageSender inherited;
	
private:
	System::_di_IInterface FNativeObject;
	Fmx::Controls::TControl* FControl;
	Fmx::Controls::Model::TDataModel* FModel;
	
public:
	__fastcall virtual TPresentationProxy()/* overload */;
	__fastcall virtual TPresentationProxy(Fmx::Controls::Model::TDataModel* const AModel, Fmx::Controls::TControl* const AControl)/* overload */;
	__fastcall virtual ~TPresentationProxy();
	bool __fastcall HasNativeObject();
	__property Fmx::Controls::TControl* PresentedControl = {read=FControl};
	__property Fmx::Controls::Model::TDataModel* Model = {read=FModel};
	__property System::_di_IInterface NativeObject = {read=FNativeObject};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TPresentationProxyClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TPresentationProxyClass);
#endif /* _WIN64 */

typedef void __fastcall (__closure *TPresenterNameChoosingEvent)(System::TObject* Sender, System::UnicodeString &PresenterName);

enum class DECLSPEC_DENUM TPresentationState : unsigned char { NotLoaded, Loading, Loaded, Unloading };

__interface  INTERFACE_UUID("{FD2EF8F6-EFF5-40EF-84A1-2850C42B3554}") ISceneChildrenObserver  : public System::IInterface 
{
	virtual void __fastcall ChildWasRemoved(Fmx::Types::TFmxObject* const AChild) = 0 ;
};

class PASCALIMPLEMENTATION TPresentedControl : public Fmx::Controls::TStyledControl
{
	typedef Fmx::Controls::TStyledControl inherited;
	
	
public:
	typedef Fmx::Controls::TControlType TControlType;
	
	
private:
	Fmx::Controls::Model::TDataModel* FModel;
	Fmx::Controls::TControlType FControlType;
	TPresentationProxy* FPresentationProxy;
	TPresentationState FState;
	System::Generics::Collections::TList__1<Fmx::Types::TFmxObject*>* FSceneObjects;
	bool FCanUseDefaultPresentation;
	TPresenterNameChoosingEvent FOnPresenterNameChoosing;
	System::TObject* __fastcall GetPresentation();
	Fmx::Types::TFmxObject* __fastcall GetPresentationScene();
	Fmx::Controls::Model::TDataModel* __fastcall CreateModel();
	void __fastcall DoPresentationNameChoosing(System::UnicodeString &APresentationName);
	void __fastcall RemoveStyleResource();
	Fmx::Presentation::Messages::TMessageSender* __fastcall GetMessageSender();
	Fmx::Controls::TControlType __fastcall GetControlType();
	void __fastcall SetControlType(const Fmx::Controls::TControlType Value);
	void __fastcall ChildWasRemoved(Fmx::Types::TFmxObject* const AChild);
	
protected:
	virtual void __fastcall Loaded();
	virtual void __fastcall PaintChildren();
	virtual void __fastcall ControlTypeChanged();
	virtual void __fastcall ClipChildrenChanged();
	virtual void __fastcall HitTestChanged();
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	virtual void __fastcall StyleLookupChanged();
	virtual void __fastcall StyleDataChanged(const System::UnicodeString Index, const System::Rtti::TValue &Value);
	virtual System::Rtti::TValue __fastcall RequestStyleData(const System::UnicodeString Index);
	virtual Fmx::Types::TFmxObject* __fastcall GetResourceLink();
	virtual void __fastcall AncestorParentChanged();
	virtual void __fastcall AncestorVisibleChanged(const bool AVisible);
	virtual void __fastcall SetVisible(const bool Value);
	virtual Fmx::Types::_di_IControl __fastcall ObjectAtPoint(const System::Types::TPointF &P);
	virtual void __fastcall ChangeOrder();
	virtual void __fastcall ParentChanged();
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoDeleteChildren();
	virtual void __fastcall DoRootChanged();
	virtual bool __fastcall DoSetSize(Fmx::Types::TControlSize* const ASize, const bool NewPlatformDefault, float ANewWidth, float ANewHeight, float &ALastWidth, float &ALastHeight);
	virtual void __fastcall DoAbsoluteChanged();
	virtual void __fastcall DoRealign();
	virtual System::Types::TSizeF __fastcall RecommendSize(const System::Types::TSizeF &AWishedSize);
	virtual void __fastcall KeyDown(System::Word &AKey, System::WideChar &AKeyChar, System::Classes::TShiftState AShift);
	virtual void __fastcall KeyUp(System::Word &AKey, System::WideChar &AKeyChar, System::Classes::TShiftState AShift);
	virtual void __fastcall DoEnter();
	virtual void __fastcall DoExit();
	virtual void __fastcall AfterPaint();
	virtual System::Classes::TComponent* __fastcall GetFirstControlWithGesture(Fmx::Types::TInteractiveGesture AGesture);
	virtual void __fastcall SetAdjustSizeValue(const System::Types::TSizeF &Value);
	virtual System::Types::TSizeF __fastcall GetAdjustSizeValue();
	virtual Fmx::Types::TAdjustType __fastcall GetAdjustType();
	virtual void __fastcall SetAdjustType(const Fmx::Types::TAdjustType Value);
	virtual void __fastcall ActionChange(System::Classes::TBasicAction* ASender, bool ACheckDefaults);
	virtual void __fastcall DoActionClientChanged();
	virtual System::UnicodeString __fastcall DefinePresentationName();
	System::UnicodeString __fastcall GetPresentationSuffix();
	virtual void __fastcall InitPresentation(TPresentationProxy* APresentation);
	void __fastcall AncestorPresentationLoaded(TPresentedControl* const AControl);
	void __fastcall AncestorPresentationUnloading(TPresentedControl* const AControl);
	template<typename T> T __fastcall GetModel();
	virtual Fmx::Controls::Model::TDataModelClass __fastcall DefineModelClass();
	__property bool CanUseDefaultPresentation = {read=FCanUseDefaultPresentation, write=FCanUseDefaultPresentation, nodefault};
	virtual HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	__property Fmx::Types::TFmxObject* PresentationScene = {read=GetPresentationScene};
	
public:
	__fastcall virtual TPresentedControl(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TPresentedControl();
	bool __fastcall HasPresentationProxy();
	virtual void __fastcall RecalcEnabled();
	virtual void __fastcall RecalcOpacity();
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall BeforeDestruction();
	virtual void __fastcall ApplyStyleLookup();
	virtual void __fastcall NeedStyleLookup();
	virtual Fmx::Types::TFmxObject* __fastcall FindStyleResource(const System::UnicodeString AStyleLookup, const bool AClone = false)/* overload */;
	virtual bool __fastcall PointInObjectLocal(float X, float Y);
	virtual void __fastcall ApplyTriggerEffect(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
	virtual void __fastcall StartTriggerAnimation(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
	virtual void __fastcall StartTriggerAnimationWait(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
	virtual void __fastcall LoadPresentation();
	virtual void __fastcall UnloadPresentation();
	void __fastcall ReloadPresentation();
	__property Fmx::Controls::TControlType ControlType = {read=GetControlType, write=SetControlType, default=0};
	__property System::TObject* Presentation = {read=GetPresentation};
	__property TPresentationProxy* PresentationProxy = {read=FPresentationProxy};
	__property TPresentationState PresentationState = {read=FState, nodefault};
	__property Fmx::Controls::Model::TDataModel* Model = {read=FModel};
	__property TPresenterNameChoosingEvent OnPresentationNameChoosing = {read=FOnPresenterNameChoosing, write=FOnPresenterNameChoosing};
private:
	void *__ISceneChildrenObserver;	// ISceneChildrenObserver 
	void *__IControlTypeSupportable;	// Fmx::Controls::IControlTypeSupportable 
	void *__IMessageSendingCompatible;	// Fmx::Presentation::Messages::IMessageSendingCompatible 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FD2EF8F6-EFF5-40EF-84A1-2850C42B3554}
	operator _di_ISceneChildrenObserver()
	{
		_di_ISceneChildrenObserver intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ISceneChildrenObserver*(void) { return (ISceneChildrenObserver*)&__ISceneChildrenObserver; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0B538F5C-98AC-4F86-AAF1-9979B2F40B90}
	operator Fmx::Controls::_di_IControlTypeSupportable()
	{
		Fmx::Controls::_di_IControlTypeSupportable intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Controls::IControlTypeSupportable*(void) { return (Fmx::Controls::IControlTypeSupportable*)&__IControlTypeSupportable; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7777134E-CEC9-40F6-9AAA-CE4D6F55001A}
	operator Fmx::Presentation::Messages::_di_IMessageSendingCompatible()
	{
		Fmx::Presentation::Messages::_di_IMessageSendingCompatible intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Presentation::Messages::IMessageSendingCompatible*(void) { return (Fmx::Presentation::Messages::IMessageSendingCompatible*)&__IMessageSendingCompatible; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word PM_BASE = System::Word(0x400);
static const System::Word PM_INIT = System::Word(0x401);
static const System::Word PM_UNLOAD = System::Word(0x402);
static const System::Word PM_SET_VISIBLE = System::Word(0x406);
static const System::Word PM_GET_VISIBLE = System::Word(0x407);
static const System::Word PM_SET_ABSOLUTE_OPACITY = System::Word(0x408);
static const System::Word PM_GET_ABSOLUTE_OPACITY = System::Word(0x409);
static const System::Word PM_SET_SIZE = System::Word(0x40a);
static const System::Word PM_GET_SIZE = System::Word(0x40b);
static const System::Word PM_SET_ABSOLUTE_ENABLED = System::Word(0x40c);
static const System::Word PM_GET_ABSOLUTE_ENABLED = System::Word(0x40d);
static const System::Word PM_SET_CLIP_CHILDREN = System::Word(0x40e);
static const System::Word PM_GET_CLIP_CHILDREN = System::Word(0x40f);
static const System::Word PM_SET_STYLE_LOOKUP = System::Word(0x410);
static const System::Word PM_GET_STYLE_LOOKUP = System::Word(0x411);
static const System::Word PM_GET_NATIVE_OBJECT = System::Word(0x414);
static const System::Word PM_GET_RECOMMEND_SIZE = System::Word(0x416);
static const System::Word PM_IS_FOCUSED = System::Word(0x419);
static const System::Word PM_RESET_FOCUS = System::Word(0x41a);
static const System::Word PM_DO_ENTER = System::Word(0x421);
static const System::Word PM_DO_EXIT = System::Word(0x422);
static const System::Word PM_REALIGN = System::Word(0x41c);
static const System::Word PM_REFRESH_PARENT = System::Word(0x41d);
static const System::Word PM_PARENT_CHANGED = System::Word(0x41e);
static const System::Word PM_ANCESSTOR_VISIBLE_CHANGED = System::Word(0x41f);
static const System::Word PM_KEYDOWN = System::Word(0x420);
static const System::Word PM_KEYUP = System::Word(0x423);
static const System::Word PM_ACTION_CLIENT_CHANGED = System::Word(0x424);
static const System::Word PM_ACTION_CHANGE = System::Word(0x425);
static const System::Word PM_APPLY_STYLE_LOOKUP = System::Word(0x426);
static const System::Word PM_SET_STYLES_DATA = System::Word(0x427);
static const System::Word PM_GET_STYLES_DATA = System::Word(0x428);
static const System::Word PM_ABSOLUTE_CHANGED = System::Word(0x429);
static const System::Word PM_HITTEST_CHANGED = System::Word(0x42a);
static const System::Word PM_GET_ADJUST_TYPE = System::Word(0x42b);
static const System::Word PM_GET_ADJUST_SIZE = System::Word(0x42c);
static const System::Word PM_SET_ADJUST_SIZE = System::Word(0x42d);
static const System::Word PM_NEED_STYLE_LOOKUP = System::Word(0x42e);
static const System::Word PM_ANCESTOR_PRESENTATION_LOADED = System::Word(0x42f);
static const System::Word PM_FIND_STYLE_RESOURCE = System::Word(0x430);
static const System::Word PM_OBJECT_AT_POINT = System::Word(0x431);
static const System::Word PM_POINT_IN_OBJECT_LOCAL = System::Word(0x432);
static const System::Word PM_CHANGE_ORDER = System::Word(0x433);
static const System::Word PM_START_TRIGGER_ANIMATION = System::Word(0x434);
static const System::Word PM_APPLY_TRIGGER_EFFECT = System::Word(0x435);
static const System::Word PM_GET_RESOURCE_LINK = System::Word(0x436);
static const System::Word PM_SET_ADJUST_TYPE = System::Word(0x437);
static const System::Word PM_ROOT_CHANGED = System::Word(0x438);
static const System::Word PM_MOUSE_WHEEL = System::Word(0x439);
static const System::Word PM_GET_FIRST_CONTROL_WITH_GESTURE = System::Word(0x43a);
static const System::Word PM_ANCESTOR_PRESENTATION_UNLOADING = System::Word(0x43b);
static const System::Word PM_DO_BEFORE_EXIT = System::Word(0x43c);
static const System::Word PM_PAINT_CHILDREN = System::Word(0x43d);
static const System::Word PM_GET_SCENE = System::Word(0x43e);
static const System::Word PM_USER = System::Word(0x1000);
}	/* namespace Presentation */
}	/* namespace Controls */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_CONTROLS_PRESENTATION)
using namespace Fmx::Controls::Presentation;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_CONTROLS)
using namespace Fmx::Controls;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_Controls_PresentationHPP
