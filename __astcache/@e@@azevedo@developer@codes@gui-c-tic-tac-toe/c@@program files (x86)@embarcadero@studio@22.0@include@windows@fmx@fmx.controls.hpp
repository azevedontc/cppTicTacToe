// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Controls.pas' rev: 35.00 (Windows)

#ifndef Fmx_ControlsHPP
#define Fmx_ControlsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Actions.hpp>
#include <System.Types.hpp>
#include <System.Rtti.hpp>
#include <System.UITypes.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.UIConsts.hpp>
#include <System.Math.hpp>
#include <System.Messaging.hpp>
#include <System.Math.Vectors.hpp>
#include <FMX.ActnList.hpp>
#include <FMX.Types.hpp>
#include <FMX.Styles.hpp>
#include <FMX.VirtualKeyboard.hpp>
#include <FMX.TextLayout.hpp>
#include <FMX.Graphics.hpp>
#include <FMX.Effects.hpp>
#include <FMX.Ani.hpp>
#include <FMX.AcceleratorKey.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Controls
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IStyleBookOwner;
typedef System::DelphiInterface<IStyleBookOwner> _di_IStyleBookOwner;
__interface DELPHIINTERFACE IScene;
typedef System::DelphiInterface<IScene> _di_IScene;
class DELPHICLASS EInvalidSceneUpdatingPairCall;
__interface DELPHIINTERFACE IDesignerControl;
typedef System::DelphiInterface<IDesignerControl> _di_IDesignerControl;
__interface DELPHIINTERFACE IHintReceiver;
typedef System::DelphiInterface<IHintReceiver> _di_IHintReceiver;
__interface DELPHIINTERFACE IHintRegistry;
typedef System::DelphiInterface<IHintRegistry> _di_IHintRegistry;
class DELPHICLASS THint;
class DELPHICLASS TCustomControlAction;
class DELPHICLASS TControlAction;
class DELPHICLASS TControlActionLink;
class DELPHICLASS TCaret;
__interface DELPHIINTERFACE TEnumControlsRef;
typedef System::DelphiInterface<TEnumControlsRef> _di_TEnumControlsRef;
struct TControlTypeHelper /* Helper for enum 'TControlType' */;
__interface DELPHIINTERFACE IControlTypeSupportable;
typedef System::DelphiInterface<IControlTypeSupportable> _di_IControlTypeSupportable;
class DELPHICLASS TControl;
__interface DELPHIINTERFACE IDrawableObject;
typedef System::DelphiInterface<IDrawableObject> _di_IDrawableObject;
__interface DELPHIINTERFACE ITintedObject;
typedef System::DelphiInterface<ITintedObject> _di_ITintedObject;
class DELPHICLASS TStyledControl;
class DELPHICLASS TStyleChangedMessage;
class DELPHICLASS TBeforeStyleChangingMessage;
class DELPHICLASS TStyleContainer;
class DELPHICLASS TStyleCollectionItem;
class DELPHICLASS TStyleCollection;
struct TStyleBookDesignInfo;
class DELPHICLASS TStyleBook;
class DELPHICLASS TTextSettingsInfo;
class DELPHICLASS TTextControl;
class DELPHICLASS TContent;
class DELPHICLASS TPopup;
class DELPHICLASS TPathAnimation;
template<typename T> __interface DELPHIINTERFACE IInflatableContent__1;
#ifdef __clang__
template<typename T> using _di_IInflatableContent__1 = System::DelphiInterface<IInflatableContent__1<T>>;
#endif
template<typename T> class DELPHICLASS TContentInflater__1;
template<typename T> class DELPHICLASS TControlsFilter__1;
__interface DELPHIINTERFACE ISearchResponder;
typedef System::DelphiInterface<ISearchResponder> _di_ISearchResponder;
__interface DELPHIINTERFACE IListBoxHeaderTrait;
typedef System::DelphiInterface<IListBoxHeaderTrait> _di_IListBoxHeaderTrait;
__interface DELPHIINTERFACE TPropertyApplyProc;
typedef System::DelphiInterface<TPropertyApplyProc> _di_TPropertyApplyProc;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{BA1AE6C6-FCF7-43E2-92AA-2869FF203309}") IStyleBookOwner  : public System::IInterface 
{
	virtual TStyleBook* __fastcall GetStyleBook() = 0 ;
	virtual void __fastcall SetStyleBook(TStyleBook* const Value) = 0 ;
	__property TStyleBook* StyleBook = {read=GetStyleBook, write=SetStyleBook};
};

__interface  INTERFACE_UUID("{16DB110E-DA7D-4E75-BC2D-999FA12E45F5}") IScene  : public IStyleBookOwner 
{
	virtual void __fastcall AddUpdateRect(const System::Types::TRectF &R) = 0 ;
	virtual int __fastcall GetUpdateRectsCount() = 0 ;
	virtual System::Types::TRectF __fastcall GetUpdateRect(const int Index) = 0 ;
	virtual Fmx::Types::TFmxObject* __fastcall GetObject() = 0 ;
	virtual Fmx::Graphics::TCanvas* __fastcall GetCanvas() = 0 ;
	virtual float __fastcall GetSceneScale() = 0 ;
	virtual System::Types::TPointF __fastcall LocalToScreen(const System::Types::TPointF &AScenePoint) = 0 ;
	virtual System::Types::TPointF __fastcall ScreenToLocal(const System::Types::TPointF &AScreenPoint) = 0 ;
	virtual void __fastcall ChangeScrollingState(TControl* const AControl, const bool AActive) = 0 ;
	virtual void __fastcall DisableUpdating() = 0 ;
	virtual void __fastcall EnableUpdating() = 0 ;
	__property Fmx::Graphics::TCanvas* Canvas = {read=GetCanvas};
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EInvalidSceneUpdatingPairCall : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvalidSceneUpdatingPairCall(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvalidSceneUpdatingPairCall(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidSceneUpdatingPairCall(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidSceneUpdatingPairCall(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidSceneUpdatingPairCall(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidSceneUpdatingPairCall(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidSceneUpdatingPairCall(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidSceneUpdatingPairCall(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidSceneUpdatingPairCall(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidSceneUpdatingPairCall(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidSceneUpdatingPairCall(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidSceneUpdatingPairCall(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidSceneUpdatingPairCall() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{C57A701D-E4B5-4711-BFA4-716E2164A929}") IDesignerControl  : public System::IInterface 
{
	
};

__interface  INTERFACE_UUID("{533671CF-86C5-489E-B32A-724AF8464DCE}") IHintReceiver  : public System::IInterface 
{
	virtual void __fastcall TriggerOnHint() = 0 ;
};

__interface  INTERFACE_UUID("{8F3B3C46-450B-4A8C-800F-FD47538244C3}") IHintRegistry  : public System::IInterface 
{
	virtual void __fastcall TriggerHints() = 0 ;
	virtual void __fastcall RegisterHintReceiver(const _di_IHintReceiver AReceiver) = 0 ;
	virtual void __fastcall UnregisterHintReceiver(const _di_IHintReceiver AReceiver) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION THint : public System::TObject
{
	typedef System::TObject inherited;
	
	
public:
#ifndef _WIN64
	typedef System::TMetaClass* THintClass;
#else /* _WIN64 */
	_DECLARE_METACLASS(System::TMetaClass, THintClass);
#endif /* _WIN64 */
	
	
private:
#ifndef _WIN64
	static System::DynamicArray<THintClass> FClassRegistry;
#else /* _WIN64 */
	static System::TArray__1<THintClass> FClassRegistry;
#endif /* _WIN64 */
	
protected:
	System::UnicodeString FHint;
	bool FEnabled;
	virtual void __fastcall SetEnabled(const bool Value);
	
public:
	__fastcall virtual THint(Fmx::Types::TWindowHandle* const AHandle);
	virtual void __fastcall SetHint(const System::UnicodeString AString);
	System::UnicodeString __fastcall GetHint();
	System::UnicodeString __fastcall GetShortText();
	System::UnicodeString __fastcall GetLongText();
	virtual void __fastcall SetPosition(const float X, const float Y) = 0 ;
	__classmethod void __fastcall RegisterClass(const THintClass AClass);
	__classmethod THint* __fastcall CreateNewInstance(Fmx::Types::TWindowHandle* const AHandle);
	__classmethod bool __fastcall ContainsRegistredHintClasses();
	__property bool Enabled = {read=FEnabled, write=SetEnabled, nodefault};
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~THint() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCustomControlAction : public Fmx::Actnlist::TCustomAction
{
	typedef Fmx::Actnlist::TCustomAction inherited;
	
private:
	Fmx::Types::TCustomPopupMenu* FPopupMenu;
	void __fastcall SetPopupMenu(Fmx::Types::TCustomPopupMenu* const Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TCustomControlAction(System::Classes::TComponent* AOwner);
	__property Fmx::Types::TCustomPopupMenu* PopupMenu = {read=FPopupMenu, write=SetPopupMenu};
public:
	/* TContainedAction.Destroy */ inline __fastcall virtual ~TCustomControlAction() { }
	
};


class PASCALIMPLEMENTATION TControlAction : public TCustomControlAction
{
	typedef TCustomControlAction inherited;
	
__published:
	__property AutoCheck = {default=0};
	__property Text = {default=0};
	__property Checked = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property UnsupportedArchitectures = {default=0};
	__property UnsupportedPlatforms = {default=0};
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property PopupMenu;
public:
	/* TCustomControlAction.Create */ inline __fastcall virtual TControlAction(System::Classes::TComponent* AOwner) : TCustomControlAction(AOwner) { }
	
public:
	/* TContainedAction.Destroy */ inline __fastcall virtual ~TControlAction() { }
	
};


class PASCALIMPLEMENTATION TControlActionLink : public Fmx::Actnlist::TActionLink
{
	typedef Fmx::Actnlist::TActionLink inherited;
	
private:
	TControl* __fastcall GetClient();
	
protected:
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsEnabledLinked();
	virtual bool __fastcall IsHelpLinked();
	virtual bool __fastcall IsHintLinked();
	virtual bool __fastcall IsVisibleLinked();
	virtual bool __fastcall IsOnExecuteLinked();
	virtual bool __fastcall IsPopupMenuLinked();
	virtual bool __fastcall DoShowHint(System::UnicodeString &HintStr);
	virtual void __fastcall SetHint(const System::UnicodeString Value);
	virtual void __fastcall SetEnabled(bool Value);
	virtual void __fastcall SetHelpContext(System::Classes::THelpContext Value);
	virtual void __fastcall SetHelpKeyword(const System::UnicodeString Value);
	virtual void __fastcall SetHelpType(System::Classes::THelpType Value);
	virtual void __fastcall SetVisible(bool Value);
	virtual void __fastcall SetOnExecute(System::Classes::TNotifyEvent Value);
	virtual void __fastcall SetPopupMenu(Fmx::Types::TCustomPopupMenu* const Value);
	
public:
	__property TControl* Client = {read=GetClient};
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TControlActionLink(System::TObject* AClient) : Fmx::Actnlist::TActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TControlActionLink() { }
	
};


class PASCALIMPLEMENTATION TCaret : public Fmx::Types::TCustomCaret
{
	typedef Fmx::Types::TCustomCaret inherited;
	
private:
	#define TCaret_FMXFlasher L"FMXFlasher"
	
	
public:
	__classmethod virtual System::UnicodeString __fastcall FlasherName();
	
__published:
	__property Color = {default=0};
	__property Interval = {default=0};
	__property Width = {default=0};
public:
	/* TCustomCaret.Create */ inline __fastcall virtual TCaret(Fmx::Types::TFmxObject* const AOwner) : Fmx::Types::TCustomCaret(AOwner) { }
	/* TCustomCaret.Destroy */ inline __fastcall virtual ~TCaret() { }
	
};


typedef Fmx::Types::TEnumProcResult TEnumControlsResult;

__interface TEnumControlsRef  : public System::IInterface 
{
	virtual void __fastcall Invoke(TControl* const AControl, bool &Done) = 0 ;
};

typedef System::Generics::Collections::TList__1<TControl*>* TControlList;

typedef void __fastcall (__closure *TOnPaintEvent)(System::TObject* Sender, Fmx::Graphics::TCanvas* Canvas, const System::Types::TRectF &ARect);

typedef void __fastcall (__closure *TCustomSceneAddRectEvent)(TControl* Sender, const System::Types::TRectF &ARect);

enum class DECLSPEC_DENUM TPaintStage : unsigned char { All, Background, Text };

enum class DECLSPEC_DENUM TControlType : unsigned char { Styled, Platform };

__interface  INTERFACE_UUID("{0B538F5C-98AC-4F86-AAF1-9979B2F40B90}") IControlTypeSupportable  : public System::IInterface 
{
	virtual void __fastcall SetControlType(const TControlType AControlType) = 0 ;
	virtual TControlType __fastcall GetControlType() = 0 ;
	__property TControlType ControlType = {read=GetControlType, write=SetControlType};
};

class PASCALIMPLEMENTATION TControl : public Fmx::Types::TFmxObject
{
	typedef Fmx::Types::TFmxObject inherited;
	
	
private:
	enum class DECLSPEC_DENUM TDelayedEvent : unsigned char { Resize, Resized };
	
	
private:
	static const System::Int8 InitialControlsCapacity = System::Int8(0xa);
	
	
public:
	static const System::Int8 DefaultTouchTargetExpansion = System::Int8(0x6);
	
	#define TControl_DefaultDisabledOpacity  (6.000000E-01)
	
	static const unsigned DesignBorderColor = unsigned(0xa0909090);
	
	
private:
	static TPaintStage FPaintStage;
	
private:
	Fmx::Types::TMouseEvent FOnMouseUp;
	Fmx::Types::TMouseEvent FOnMouseDown;
	Fmx::Types::TMouseMoveEvent FOnMouseMove;
	Fmx::Types::TMouseWheelEvent FOnMouseWheel;
	System::Classes::TNotifyEvent FOnClick;
	System::Classes::TNotifyEvent FOnDblClick;
	bool FHitTest;
	bool FClipChildren;
	bool FAutoCapture;
	Fmx::Types::TBounds* FPadding;
	Fmx::Types::TBounds* FMargins;
	Fmx::Graphics::TCanvas* FTempCanvas;
	float FRotationAngle;
	Fmx::Types::TPosition* FPosition;
	Fmx::Types::TPosition* FScale;
	Fmx::Types::TPosition* FSkew;
	Fmx::Types::TPosition* FRotationCenter;
	bool FCanFocus;
	Fmx::Types::TCanFocusEvent FOnCanFocus;
	System::Classes::TNotifyEvent FOnEnter;
	System::Classes::TNotifyEvent FOnExit;
	bool FClipParent;
	System::Classes::TNotifyEvent FOnMouseLeave;
	System::Classes::TNotifyEvent FOnMouseEnter;
	TOnPaintEvent FOnPaint;
	TOnPaintEvent FOnPainting;
	System::Uitypes::TCursor FCursor;
	System::Uitypes::TCursor FInheritedCursor;
	System::Uitypes::TDragMode FDragMode;
	bool FEnableDragHighlight;
	Fmx::Types::TDragEnterEvent FOnDragEnter;
	Fmx::Types::TDragDropEvent FOnDragDrop;
	System::Classes::TNotifyEvent FOnDragLeave;
	Fmx::Types::TDragOverEvent FOnDragOver;
	System::Classes::TNotifyEvent FOnDragEnd;
	bool FIsDragOver;
	Fmx::Types::TKeyEvent FOnKeyDown;
	Fmx::Types::TKeyEvent FOnKeyUp;
	Fmx::Types::TTapEvent FOnTap;
	System::UnicodeString FHint;
	System::UnicodeString FActionHint;
	bool FShowHint;
	Fmx::Types::TCustomPopupMenu* FPopupMenu;
	bool FRecalcEnabled;
	bool FEnabled;
	bool FAbsoluteEnabled;
	Fmx::Types::TTabList* FTabList;
	System::Classes::TNotifyEvent FOnResize;
	System::Classes::TNotifyEvent FOnResized;
	bool FDisableEffect;
	bool FAcceptsControls;
	System::Generics::Collections::TList__1<TControl*>* FControls;
	bool FEnableExecuteAction;
	bool FCanParentFocus;
	float FMinClipHeight;
	float FMinClipWidth;
	bool FSmallSizeControl;
	Fmx::Types::TBounds* FTouchTargetExpansion;
	System::Classes::TNotifyEvent FOnDeactivate;
	System::Classes::TNotifyEvent FOnActivate;
	bool FSimpleTransform;
	System::Types::TSize FFixedSize;
	System::Generics::Collections::TList__1<Fmx::Effects::TEffect*>* FEffects;
	float FDisabledOpacity;
	TControl* FParentControl;
	Fmx::Types::_di_IContent FParentContent;
	System::Types::TRectF FUpdateRect;
	bool FTabStop;
	int FDisableDisappear;
	bool FAnchorMove;
	bool FApplyingEffect;
	bool FExitingOrEntering;
	System::Set<TDelayedEvent, _DELPHI_SET_ENUMERATOR(TDelayedEvent::Resize), _DELPHI_SET_ENUMERATOR(TDelayedEvent::Resized)> FDelayedEvents;
	System::Uitypes::TTabOrder FTabOrder;
	void __fastcall AddToEffectsList(Fmx::Effects::TEffect* const AEffect);
	void __fastcall RemoveFromEffectsList(Fmx::Effects::TEffect* const AEffect);
	static System::Generics::Collections::TList__1<TControl*>* FEmptyControlList;
	System::Math::Vectors::TMatrix __fastcall GetInvertAbsoluteMatrix();
	void __fastcall SetPosition(Fmx::Types::TPosition* const Value);
	void __fastcall SetHitTest(const bool Value);
	void __fastcall SetClipChildren(const bool Value);
	Fmx::Graphics::TCanvas* __fastcall GetCanvas();
	void __fastcall SetLocked(const bool Value);
	void __fastcall SetTempCanvas(Fmx::Graphics::TCanvas* const Value);
	void __fastcall SetOpacity(const float Value);
	bool __fastcall IsOpacityStored();
	void __fastcall SetCursor(const System::Uitypes::TCursor Value);
	void __fastcall RefreshInheritedCursor();
	void __fastcall RefreshInheritedCursorForChildren();
	float __fastcall GetAbsoluteWidth();
	float __fastcall GetAbsoluteHeight();
	bool __fastcall IsAnchorsStored();
	bool __fastcall GetEnabled();
	System::Uitypes::TCursor __fastcall GetCursor();
	System::Uitypes::TCursor __fastcall GetInheritedCursor();
	bool __fastcall GetAbsoluteHasEffect();
	bool __fastcall GetAbsoluteHasDisablePaintEffect();
	bool __fastcall GetAbsoluteHasAfterPaintEffect();
	void __fastcall PaddingChangedHandler(System::TObject* Sender)/* overload */;
	void __fastcall MarginsChanged(System::TObject* Sender);
	void __fastcall MatrixChanged(System::TObject* Sender);
	void __fastcall SizeChanged(System::TObject* Sender);
	int __fastcall GetControlsCount();
	bool __fastcall OnClickStored();
	bool __fastcall IsPopupMenuStored();
	void __fastcall RequestAlign();
	void __fastcall SetMinClipHeight(const float Value);
	void __fastcall SetMinClipWidth(const float Value);
	bool __fastcall UpdateSmallSizeControl();
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	void __fastcall SetOnClick(const System::Classes::TNotifyEvent Value);
	bool __fastcall GetIsFocused();
	void __fastcall SetPadding(Fmx::Types::TBounds* const Value);
	void __fastcall SetMargins(Fmx::Types::TBounds* const Value);
	void __fastcall SetTouchTargetExpansion(Fmx::Types::TBounds* const Value);
	void __fastcall InternalSizeChanged();
	void __fastcall ReadFixedWidth(System::Classes::TReader* Reader);
	void __fastcall WriteFixedWidth(System::Classes::TWriter* Writer);
	void __fastcall ReadFixedHeight(System::Classes::TReader* Reader);
	void __fastcall WriteFixedHeight(System::Classes::TWriter* Writer);
	void __fastcall ReadDesignVisible(System::Classes::TReader* Reader);
	void __fastcall ReadHint(System::Classes::TReader* Reader);
	void __fastcall ReadShowHint(System::Classes::TReader* Reader);
	bool __fastcall DisabledOpacityStored();
	void __fastcall SetDisabledOpacity(const float Value);
	System::Types::TRectF __fastcall GetAxisAlignedRect();
	float __fastcall GetRotationAngle();
	Fmx::Types::TPosition* __fastcall GetRotationCenter();
	Fmx::Types::TPosition* __fastcall GetScale();
	void __fastcall SetRotationAngle(const float Value);
	void __fastcall SetRotationCenter(Fmx::Types::TPosition* const Value);
	void __fastcall SetScale(Fmx::Types::TPosition* const Value);
	System::Uitypes::TTabOrder __fastcall GetTabOrder();
	void __fastcall SetTabOrder(const System::Uitypes::TTabOrder Value);
	bool __fastcall GetTabStop();
	void __fastcall SetTabStop(const bool TabStop);
	void __fastcall SetDisableDisappear(const bool Value);
	bool __fastcall GetDisableDisappear();
	void __fastcall UpdateParentProperties();
	
private:
	bool FInflated;
	System::Classes::TNotifyEvent FOnApplyStyleLookup;
	Fmx::Types::TAlignLayout FAlign;
	System::Uitypes::TAnchors FAnchors;
	bool FUpdateEffects;
	bool FDisableFocusEffect;
	Fmx::Types::TTouchManager* FTouchManager;
	Fmx::Types::TGestureEvent FOnGesture;
	bool FVisible;
	bool FPressed;
	System::Types::TPointF FPressedPosition;
	bool FDoubleClick;
	bool FParentShowHint;
	TCustomSceneAddRectEvent FCustomSceneAddRect;
	void __fastcall CreateTouchManagerIfRequired();
	Fmx::Types::TTouchManager* __fastcall GetTouchManager();
	void __fastcall SetTouchManager(Fmx::Types::TTouchManager* const Value);
	bool __fastcall IsShowHintStored();
	void __fastcall SetParentShowHint(const bool Value);
	void __fastcall SetShowHint(const bool Value);
	System::Types::TRectF __fastcall GetAbsoluteClipRect();
	bool __fastcall HintStored();
	
protected:
	void __fastcall RepaintJointArea(System::TObject* const DestControl);
	
protected:
	_di_IScene FScene;
	float FLastHeight;
	float FLastWidth;
	Fmx::Types::TControlSize* FSize;
	System::Math::Vectors::TMatrix FLocalMatrix;
	System::Math::Vectors::TMatrix FAbsoluteMatrix;
	System::Math::Vectors::TMatrix FInvAbsoluteMatrix;
	Fmx::Graphics::TBitmap* FEffectBitmap;
	bool FLocked;
	float FOpacity;
	float FAbsoluteOpacity;
	bool FInPaintTo;
	System::Math::Vectors::TMatrix FInPaintToAbsMatrix;
	System::Math::Vectors::TMatrix FInPaintToInvMatrix;
	bool FAbsoluteHasEffect;
	bool FAbsoluteHasDisablePaintEffect;
	bool FAbsoluteHasAfterPaintEffect;
	int FUpdating;
	bool FNeedAlign;
	bool FDisablePaint;
	bool FDisableAlign;
	bool FRecalcOpacity;
	bool FRecalcUpdateRect;
	bool FRecalcAbsolute;
	bool FRecalcHasEffect;
	TControl* FHasClipParent;
	bool FRecalcHasClipParent;
	bool FDesignInteractive;
	bool FDesignSelectionMarks;
	bool FIsMouseOver;
	bool FIsFocused;
	System::Types::TPointF FAnchorRules;
	System::Types::TPointF FAnchorOrigin;
	System::Types::TPointF FOriginalParentSize;
	float FLeft;
	float FTop;
	float FExplicitLeft;
	float FExplicitTop;
	float FExplicitWidth;
	float FExplicitHeight;
	virtual void __fastcall DoAbsoluteChanged();
	virtual bool __fastcall CheckHitTest(const bool AHitTest);
	void __fastcall SetInPaintTo(bool Value);
	void __fastcall EndUpdateNoChanges();
	virtual void __fastcall SetHint(const System::UnicodeString AHint);
	virtual void __fastcall SetEnabled(const bool Value);
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall Updated();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall ParentChanged();
	virtual void __fastcall ChangeOrder();
	virtual void __fastcall ChangeChildren();
	virtual void __fastcall SetVisible(const bool Value);
	virtual bool __fastcall DoSetWidth _DEPRECATED_ATTRIBUTE1("Use DoSetSize") (float &Value, float NewValue, float &LastValue);
	virtual bool __fastcall DoSetHeight _DEPRECATED_ATTRIBUTE1("Use DoSetSize") (float &Value, float NewValue, float &LastValue);
	virtual bool __fastcall DoSetSize(Fmx::Types::TControlSize* const ASize, const bool NewPlatformDefault, float ANewWidth, float ANewHeight, float &ALastWidth, float &ALastHeight);
	virtual void __fastcall HandleSizeChanged();
	virtual void __fastcall DoMatrixChanged(System::TObject* Sender);
	virtual void __fastcall SetHeight(const float Value);
	virtual void __fastcall SetWidth(const float Value);
	virtual void __fastcall SetSize(Fmx::Types::TControlSize* const AValue)/* overload */;
	virtual void __fastcall SetSize(const float AWidth, const float AHeight, const bool APlatformDefault = false)/* overload */;
	virtual System::Types::TRectF __fastcall GetAbsoluteRect();
	virtual bool __fastcall GetChildrenMatrix(System::Math::Vectors::TMatrix &Matrix, bool &Simple);
	virtual System::Types::TPointF __fastcall GetAbsoluteScale();
	virtual System::Types::TRectF __fastcall GetParentedRect _DEPRECATED_ATTRIBUTE1("Use GetBoundsRect") ();
	virtual System::Types::TRectF __fastcall GetClipRect();
	virtual System::Types::TRectF __fastcall GetEffectsRect();
	virtual bool __fastcall GetAbsoluteEnabled();
	virtual System::Types::TRectF __fastcall GetChildrenRect();
	virtual System::Types::TRectF __fastcall GetLocalRect();
	virtual System::Types::TRectF __fastcall GetBoundsRect();
	virtual void __fastcall SetBoundsRect(const System::Types::TRectF &Value);
	virtual bool __fastcall IsHeightStored _DEPRECATED_ATTRIBUTE1("Use IsSizeStored") ();
	virtual bool __fastcall IsWidthStored _DEPRECATED_ATTRIBUTE1("Use IsSizeStored") ();
	virtual bool __fastcall IsPositionStored();
	virtual bool __fastcall IsSizeStored();
	void __fastcall SetPopupMenu(Fmx::Types::TCustomPopupMenu* const Value);
	virtual System::Math::Vectors::TMatrix __fastcall GetAbsoluteMatrix();
	TControl* __fastcall GetHasClipParent();
	System::Types::TRectF __fastcall GetUpdateRect();
	virtual System::Types::TRectF __fastcall DoGetUpdateRect();
	virtual float __fastcall GetAbsoluteOpacity();
	virtual void __fastcall BeginAutoDrag();
	void __fastcall Capture();
	void __fastcall ReleaseCapture();
	__property bool EnableExecuteAction = {read=FEnableExecuteAction, write=FEnableExecuteAction, nodefault};
	virtual void __fastcall Click();
	virtual void __fastcall DblClick();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseWheel(System::Classes::TShiftState Shift, int WheelDelta, bool &Handled);
	virtual void __fastcall MouseClick(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall KeyDown(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift);
	virtual void __fastcall KeyUp(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift);
	virtual void __fastcall DialogKey(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall AfterDialogKey(System::Word &Key, System::Classes::TShiftState Shift);
	virtual bool __fastcall ShowContextMenu(const System::Types::TPointF &ScreenPosition);
	virtual void __fastcall DragEnter(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point);
	virtual void __fastcall DragOver(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point, Fmx::Types::TDragOperation &Operation);
	virtual void __fastcall DragDrop(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point);
	virtual void __fastcall DragLeave();
	virtual void __fastcall DragEnd();
	virtual System::Types::TRectF __fastcall GetDefaultTouchTargetExpansion();
	virtual bool __fastcall GetCanFocus();
	virtual bool __fastcall GetCanParentFocus();
	virtual bool __fastcall EnterChildren(Fmx::Types::_di_IControl AObject);
	virtual bool __fastcall ExitChildren(Fmx::Types::_di_IControl AObject);
	virtual bool __fastcall GetParentedVisible();
	void __fastcall NeedUpdateEffects();
	void __fastcall BeforeEffectEnabledChanged(const bool Enabled);
	void __fastcall EffectEnabledChanged(const bool Enabled);
	void __fastcall Realign();
	void __fastcall ChildrenAlignChanged();
	Fmx::Types::TAlignLayout __fastcall GetAlign();
	virtual void __fastcall SetAlign(const Fmx::Types::TAlignLayout Value);
	System::Uitypes::TAnchors __fastcall GetAnchors();
	virtual void __fastcall SetAnchors(const System::Uitypes::TAnchors Value);
	Fmx::Types::TBounds* __fastcall GetMargins();
	Fmx::Types::TBounds* __fastcall GetPadding();
	virtual float __fastcall GetWidth();
	virtual float __fastcall GetHeight();
	virtual float __fastcall GetLeft();
	virtual float __fastcall GetTop();
	bool __fastcall GetAllowAlign();
	System::Types::TPointF __fastcall GetAnchorRules();
	System::Types::TPointF __fastcall GetAnchorOrigin();
	System::Types::TPointF __fastcall GetOriginalParentSize();
	bool __fastcall GetAnchorMove();
	void __fastcall SetAnchorMove(bool Value);
	virtual System::Types::TSizeF __fastcall GetAdjustSizeValue();
	virtual Fmx::Types::TAdjustType __fastcall GetAdjustType();
	float __fastcall GetContainerWidth();
	float __fastcall GetContainerHeight();
	Fmx::Types::TFmxObject* __fastcall GetObject();
	Fmx::Types::TFmxObject* __fastcall GetParent();
	bool __fastcall GetVisible();
	bool __fastcall GetDesignInteractive();
	Fmx::Types::TCustomPopupMenu* __fastcall GetPopupMenu();
	virtual void __fastcall DoEnter();
	virtual void __fastcall DoExit();
	virtual void __fastcall DoActivate();
	virtual void __fastcall DoDeactivate();
	virtual void __fastcall DoMouseEnter();
	virtual void __fastcall DoMouseLeave();
	bool __fastcall CheckForAllowFocus();
	virtual System::Uitypes::TDragMode __fastcall GetDragMode();
	virtual void __fastcall SetDragMode(const System::Uitypes::TDragMode ADragMode);
	bool __fastcall GetLocked();
	bool __fastcall GetHitTest();
	bool __fastcall GetAcceptsControls();
	void __fastcall SetAcceptsControls(const bool Value);
	virtual Fmx::Types::_di_IControl __fastcall FindTarget(const System::Types::TPointF &P, const Fmx::Types::TDragObject &Data);
	virtual Fmx::Types::_di_IControl __fastcall ObjectAtPoint(const System::Types::TPointF &AScreenPoint);
	virtual bool __fastcall HasHint();
	virtual System::UnicodeString __fastcall GetHintString();
	virtual System::TObject* __fastcall GetHintObject();
	virtual bool __fastcall CanShowHint();
	void __fastcall BroadcastGesture(const Fmx::Types::TGestureEventInfo &EventInfo);
	virtual void __fastcall CMGesture(Fmx::Types::TGestureEventInfo &EventInfo);
	Fmx::Types::TTouchManager* __fastcall TouchManager();
	virtual System::Classes::TComponent* __fastcall GetFirstControlWithGesture(Fmx::Types::TInteractiveGesture AGesture);
	System::Classes::TComponent* __fastcall GetFirstControlWithGestureEngine();
	Fmx::Types::TInteractiveGestures __fastcall GetListOfInteractiveGestures();
	virtual void __fastcall Tap(const System::Types::TPointF &Point);
	virtual int __fastcall GetFirstVisibleObjectIndex();
	virtual int __fastcall GetLastVisibleObjectIndex();
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	virtual Fmx::Graphics::TFillTextFlags __fastcall FillTextFlags();
	virtual void __fastcall ApplyEffect();
	void __fastcall PaintInternal();
	virtual bool __fastcall SupportsPaintStage(const TPaintStage Stage);
	virtual bool __fastcall CanRepaint();
	void __fastcall RepaintRect(const System::Types::TRectF &Rect);
	virtual void __fastcall PaintChildren();
	virtual void __fastcall Painting();
	virtual void __fastcall Paint();
	virtual void __fastcall DoPaint();
	virtual void __fastcall AfterPaint();
	void __fastcall DrawDesignBorder(const System::Uitypes::TAlphaColor VertColor = (System::Uitypes::TAlphaColor)(0xa0909090), const System::Uitypes::TAlphaColor HorzColor = (System::Uitypes::TAlphaColor)(0xa0909090));
	virtual void __fastcall DoRealign();
	virtual void __fastcall DoBeginUpdate();
	virtual void __fastcall DoEndUpdate();
	virtual void __fastcall Move();
	virtual void __fastcall Resize();
	virtual void __fastcall DoResized();
	virtual void __fastcall Disappear();
	virtual void __fastcall Show();
	virtual void __fastcall Hide();
	virtual void __fastcall AncestorVisibleChanged(const bool Visible);
	virtual void __fastcall AncestorParentChanged();
	virtual void __fastcall ClipChildrenChanged();
	virtual void __fastcall HitTestChanged();
	virtual void __fastcall PaddingChanged()/* overload */;
	__property float MinClipWidth = {read=FMinClipWidth, write=SetMinClipWidth};
	__property float MinClipHeight = {read=FMinClipHeight, write=SetMinClipHeight};
	__property bool SmallSizeControl = {read=FSmallSizeControl, nodefault};
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoDeleteChildren();
	/* static */ __property TPaintStage PaintStage = {read=FPaintStage, write=FPaintStage, nodefault};
	__property Fmx::Graphics::TCanvas* TempCanvas = {read=FTempCanvas, write=SetTempCanvas};
	void __fastcall SetLeft(const float Value);
	void __fastcall SetTop(const float Value);
	void __fastcall UpdateExplicitBounds();
	void __fastcall UpdateAnchorRules(const bool Anchoring = false);
	__property float Left = {read=FLeft, write=SetLeft};
	__property float Top = {read=FTop, write=SetTop};
	__property float ExplicitLeft = {read=FExplicitLeft};
	__property float ExplicitTop = {read=FExplicitTop};
	__property float ExplicitWidth = {read=FExplicitWidth};
	__property float ExplicitHeight = {read=FExplicitHeight};
	virtual Fmx::Actnlist::TActionLinkClass __fastcall GetActionLinkClass();
	virtual void __fastcall ActionChange(System::Classes::TBasicAction* Sender, bool CheckDefaults);
	virtual bool __fastcall EnabledStored();
	virtual bool __fastcall VisibleStored();
	virtual void __fastcall EnabledChanged();
	virtual void __fastcall VisibleChanged();
	virtual bool __fastcall IsControlRectEmpty();
	System::Generics::Collections::TList__1<TControl*>* __fastcall GetControls();
	virtual void __fastcall DoGesture(const Fmx::Types::TGestureEventInfo &EventInfo, bool &Handled);
	virtual Fmx::Types::_di_ITabStopController __fastcall GetTabStopController();
	virtual Fmx::Types::TTabListClass __fastcall GetTabListClass();
	__property bool DoubleClick = {read=FDoubleClick, nodefault};
	__property float RotationAngle = {read=GetRotationAngle, write=SetRotationAngle};
	__property Fmx::Types::TPosition* RotationCenter = {read=GetRotationCenter, write=SetRotationCenter};
	__property Fmx::Types::TPosition* Scale = {read=GetScale, write=SetScale};
	__property float DisabledOpacity = {read=FDisabledOpacity, write=SetDisabledOpacity, stored=DisabledOpacityStored};
	__property Fmx::Types::_di_IContent ParentContent = {read=FParentContent};
	__property bool ParentShowHint = {read=FParentShowHint, write=SetParentShowHint, default=1};
	
public:
	__fastcall virtual TControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TControl();
	virtual void __fastcall SetNewScene(_di_IScene AScene);
	virtual void __fastcall SetBounds(float X, float Y, float AWidth, float AHeight);
	virtual System::Types::TPointF __fastcall AbsoluteToLocal(const System::Types::TPointF &APoint)/* overload */;
	System::Types::TRectF __fastcall AbsoluteToLocal(const System::Types::TRectF &ARect)/* overload */;
	virtual System::Types::TPointF __fastcall LocalToAbsolute(const System::Types::TPointF &APoint)/* overload */;
	System::Types::TRectF __fastcall LocalToAbsolute(const System::Types::TRectF &ARect)/* overload */;
	virtual System::Types::TPointF __fastcall ScreenToLocal(const System::Types::TPointF &AScreenPoint);
	virtual System::Types::TPointF __fastcall LocalToScreen(const System::Types::TPointF &ALocalPoint);
	System::Types::TPointF __fastcall ConvertLocalPointFrom(TControl* const AControl, const System::Types::TPointF &AControlLocalPoint);
	System::Types::TPointF __fastcall ConvertLocalPointTo(TControl* const AControl, const System::Types::TPointF &ALocalPoint);
	virtual System::Math::Vectors::TVector __fastcall AbsoluteToLocalVector(const System::Math::Vectors::TVector &Vector);
	virtual System::Math::Vectors::TVector __fastcall LocalToAbsoluteVector(const System::Math::Vectors::TVector &Vector);
	virtual bool __fastcall PointInObject(float X, float Y);
	virtual bool __fastcall PointInObjectLocal(float X, float Y);
	Fmx::Graphics::TBitmap* __fastcall MakeScreenshot();
	virtual void __fastcall BeginUpdate();
	virtual bool __fastcall IsUpdating();
	virtual void __fastcall EndUpdate();
	void __fastcall RecalcAbsoluteNow();
	virtual void __fastcall RecalcUpdateRect();
	virtual void __fastcall RecalcOpacity();
	virtual void __fastcall RecalcAbsolute();
	virtual void __fastcall RecalcEnabled();
	virtual void __fastcall RecalcHasEffect();
	virtual void __fastcall RecalcHasClipParent();
	virtual void __fastcall PrepareForPaint();
	virtual void __fastcall RecalcSize();
	void __fastcall UpdateEffects();
	virtual void __fastcall ApplyTriggerEffect(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
	virtual void __fastcall StartTriggerAnimation(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
	virtual void __fastcall StartTriggerAnimationWait(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
	void __fastcall SetFocus();
	void __fastcall ResetFocus();
	void __fastcall PaintTo(Fmx::Graphics::TCanvas* const ACanvas, const System::Types::TRectF &ARect, Fmx::Types::TFmxObject* const AParent = (Fmx::Types::TFmxObject*)(0x0));
	void __fastcall Repaint();
	void __fastcall InvalidateRect(const System::Types::TRectF &ARect);
	void __fastcall Lock();
	__property System::Math::Vectors::TMatrix AbsoluteMatrix = {read=GetAbsoluteMatrix};
	__property float AbsoluteOpacity = {read=GetAbsoluteOpacity};
	__property float AbsoluteWidth = {read=GetAbsoluteWidth};
	__property float AbsoluteHeight = {read=GetAbsoluteHeight};
	__property System::Types::TPointF AbsoluteScale = {read=GetAbsoluteScale};
	__property bool AbsoluteEnabled = {read=GetAbsoluteEnabled, nodefault};
	__property System::Types::TRectF AbsoluteRect = {read=GetAbsoluteRect};
	__property System::Types::TRectF AbsoluteClipRect = {read=GetAbsoluteClipRect};
	__property System::Types::TRectF AxisAlignedRect = {read=GetAxisAlignedRect};
	__property bool ApplyingEffect = {read=FApplyingEffect, nodefault};
	__property bool HasEffect = {read=GetAbsoluteHasEffect, nodefault};
	__property bool HasDisablePaintEffect = {read=GetAbsoluteHasDisablePaintEffect, nodefault};
	__property bool HasAfterPaintEffect = {read=GetAbsoluteHasAfterPaintEffect, nodefault};
	__property TControl* HasClipParent = {read=GetHasClipParent};
	__property System::Types::TRectF ChildrenRect = {read=GetChildrenRect};
	__property System::Types::TSizeF DefaultSize = {read=GetDefaultSize};
	__property System::Types::TSize FixedSize = {read=FFixedSize, write=FFixedSize};
	__property System::Math::Vectors::TMatrix InvertAbsoluteMatrix = {read=GetInvertAbsoluteMatrix};
	__property bool InPaintTo = {read=FInPaintTo, nodefault};
	__property System::Types::TRectF LocalRect = {read=GetLocalRect};
	__property bool Pressed = {read=FPressed, write=FPressed, nodefault};
	__property System::Types::TPointF PressedPosition = {read=FPressedPosition, write=FPressedPosition};
	__property System::Types::TRectF UpdateRect = {read=GetUpdateRect};
	__property System::Types::TRectF BoundsRect = {read=GetBoundsRect, write=SetBoundsRect};
	__property System::Types::TRectF ParentedRect = {read=GetParentedRect};
	__property bool ParentedVisible = {read=GetParentedVisible, nodefault};
	__property System::Types::TRectF ClipRect = {read=GetClipRect};
	__property Fmx::Graphics::TCanvas* Canvas = {read=GetCanvas};
	__property System::Generics::Collections::TList__1<TControl*>* Controls = {read=GetControls};
	__property int ControlsCount = {read=GetControlsCount, nodefault};
	__property TControl* ParentControl = {read=FParentControl};
	__property _di_IScene Scene = {read=FScene};
	__property bool AutoCapture = {read=FAutoCapture, write=FAutoCapture, default=0};
	__property bool CanFocus = {read=FCanFocus, write=FCanFocus, default=0};
	__property bool CanParentFocus = {read=FCanParentFocus, write=FCanParentFocus, default=0};
	__property bool DisableFocusEffect = {read=FDisableFocusEffect, write=FDisableFocusEffect, default=0};
	__property bool IsInflated = {read=FInflated, nodefault};
	void __fastcall EnumControls(const System::DelphiInterface<System::Sysutils::TFunc__2<TControl*,Fmx::Types::TEnumProcResult> > Proc)/* overload */;
	bool __fastcall EnumControls _DEPRECATED_ATTRIBUTE1("Use another version of EnumControls") (_di_TEnumControlsRef Proc, const bool VisibleOnly = true)/* overload */;
	virtual Fmx::Types::_di_ITabList __fastcall GetTabList();
	virtual bool __fastcall ShowInDesigner();
	virtual bool __fastcall ShouldTestMouseHits();
	__property bool IsMouseOver = {read=FIsMouseOver, nodefault};
	__property bool IsDragOver = {read=FIsDragOver, nodefault};
	__property bool IsFocused = {read=GetIsFocused, nodefault};
	__property bool IsVisible = {read=FVisible, nodefault};
	__property Fmx::Types::TAlignLayout Align = {read=FAlign, write=SetAlign, default=0};
	__property System::Uitypes::TAnchors Anchors = {read=FAnchors, write=SetAnchors, stored=IsAnchorsStored, nodefault};
	__property System::Uitypes::TCursor Cursor = {read=GetCursor, write=SetCursor, default=0};
	__property System::Uitypes::TCursor InheritedCursor = {read=GetInheritedCursor, default=0};
	__property System::Uitypes::TDragMode DragMode = {read=GetDragMode, write=SetDragMode, default=0};
	__property bool EnableDragHighlight = {read=FEnableDragHighlight, write=FEnableDragHighlight, default=1};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, stored=EnabledStored, nodefault};
	__property Fmx::Types::TPosition* Position = {read=FPosition, write=SetPosition, stored=IsPositionStored};
	__property bool Locked = {read=FLocked, write=SetLocked, default=0};
	__property float Width = {read=GetWidth, write=SetWidth, stored=false};
	__property float Height = {read=GetHeight, write=SetHeight, stored=false};
	__property Fmx::Types::TControlSize* Size = {read=FSize, write=SetSize, stored=IsSizeStored};
	__property Fmx::Types::TBounds* Padding = {read=GetPadding, write=SetPadding};
	__property Fmx::Types::TBounds* Margins = {read=GetMargins, write=SetMargins};
	__property float Opacity = {read=FOpacity, write=SetOpacity, stored=IsOpacityStored};
	__property bool ClipChildren = {read=FClipChildren, write=SetClipChildren, default=0};
	__property bool ClipParent = {read=FClipParent, write=FClipParent, default=0};
	__property bool HitTest = {read=FHitTest, write=SetHitTest, default=1};
	__property Fmx::Types::TCustomPopupMenu* PopupMenu = {read=FPopupMenu, write=SetPopupMenu, stored=IsPopupMenuStored};
	__property System::Uitypes::TTabOrder TabOrder = {read=GetTabOrder, write=SetTabOrder, default=-1};
	__property bool Visible = {read=FVisible, write=SetVisible, stored=VisibleStored, default=1};
	__property TCustomSceneAddRectEvent CustomSceneAddRect = {read=FCustomSceneAddRect, write=FCustomSceneAddRect};
	__property Fmx::Types::TDragEnterEvent OnDragEnter = {read=FOnDragEnter, write=FOnDragEnter};
	__property System::Classes::TNotifyEvent OnDragLeave = {read=FOnDragLeave, write=FOnDragLeave};
	__property Fmx::Types::TDragOverEvent OnDragOver = {read=FOnDragOver, write=FOnDragOver};
	__property Fmx::Types::TDragDropEvent OnDragDrop = {read=FOnDragDrop, write=FOnDragDrop};
	__property System::Classes::TNotifyEvent OnDragEnd = {read=FOnDragEnd, write=FOnDragEnd};
	__property Fmx::Types::TKeyEvent OnKeyDown = {read=FOnKeyDown, write=FOnKeyDown};
	__property Fmx::Types::TKeyEvent OnKeyUp = {read=FOnKeyUp, write=FOnKeyUp};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=SetOnClick, stored=OnClickStored};
	__property System::Classes::TNotifyEvent OnDblClick = {read=FOnDblClick, write=FOnDblClick};
	__property Fmx::Types::TCanFocusEvent OnCanFocus = {read=FOnCanFocus, write=FOnCanFocus};
	__property System::Classes::TNotifyEvent OnEnter = {read=FOnEnter, write=FOnEnter};
	__property System::Classes::TNotifyEvent OnExit = {read=FOnExit, write=FOnExit};
	__property Fmx::Types::TMouseEvent OnMouseDown = {read=FOnMouseDown, write=FOnMouseDown};
	__property Fmx::Types::TMouseMoveEvent OnMouseMove = {read=FOnMouseMove, write=FOnMouseMove};
	__property Fmx::Types::TMouseEvent OnMouseUp = {read=FOnMouseUp, write=FOnMouseUp};
	__property Fmx::Types::TMouseWheelEvent OnMouseWheel = {read=FOnMouseWheel, write=FOnMouseWheel};
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property TOnPaintEvent OnPainting = {read=FOnPainting, write=FOnPainting};
	__property TOnPaintEvent OnPaint = {read=FOnPaint, write=FOnPaint};
	__property System::Classes::TNotifyEvent OnResize = {read=FOnResize, write=FOnResize};
	__property System::Classes::TNotifyEvent OnResized = {read=FOnResized, write=FOnResized};
	__property System::Classes::TNotifyEvent OnActivate = {read=FOnActivate, write=FOnActivate};
	__property System::Classes::TNotifyEvent OnDeactivate = {read=FOnDeactivate, write=FOnDeactivate};
	__property System::Classes::TNotifyEvent OnApplyStyleLookup = {read=FOnApplyStyleLookup, write=FOnApplyStyleLookup};
	__property Fmx::Types::TBounds* TouchTargetExpansion = {read=FTouchTargetExpansion, write=SetTouchTargetExpansion};
	__property bool TabStop = {read=GetTabStop, write=SetTabStop, default=1};
	__property bool DisableDisappear = {read=GetDisableDisappear, write=SetDisableDisappear, nodefault};
	__property bool ShowHint = {read=FShowHint, write=SetShowHint, stored=IsShowHintStored, nodefault};
	__property System::UnicodeString Hint = {read=FHint, write=SetHint, stored=HintStored};
	
__published:
	__property Fmx::Types::TTouchManager* Touch = {read=GetTouchManager, write=SetTouchManager};
	__property Fmx::Types::TGestureEvent OnGesture = {read=FOnGesture, write=FOnGesture};
	__property Fmx::Types::TTapEvent OnTap = {read=FOnTap, write=FOnTap};
private:
	void *__ITriggerEffect;	// Fmx::Effects::ITriggerEffect 
	void *__ITriggerAnimation;	// Fmx::Ani::ITriggerAnimation 
	void *__ITabStopController;	// Fmx::Types::ITabStopController 
	void *__IGestureControl;	// Fmx::Types::IGestureControl 
	void *__IEffectContainer;	// Fmx::Effects::IEffectContainer 
	void *__IAlignableObject;	// Fmx::Types::IAlignableObject 
	void *__IRotatedControl;	// Fmx::Types::IRotatedControl 
	void *__IAlignRoot;	// Fmx::Types::IAlignRoot 
	void *__IContainerObject;	// Fmx::Types::IContainerObject 
	void *__IControl;	// Fmx::Types::IControl 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {945DC18B-7801-43F8-997D-F19607399AE9}
	operator Fmx::Effects::_di_ITriggerEffect()
	{
		Fmx::Effects::_di_ITriggerEffect intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Effects::ITriggerEffect*(void) { return (Fmx::Effects::ITriggerEffect*)&__ITriggerEffect; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {8A291102-742F-45CB-9159-4E1D283AAF20}
	operator Fmx::Ani::_di_ITriggerAnimation()
	{
		Fmx::Ani::_di_ITriggerAnimation intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Ani::ITriggerAnimation*(void) { return (Fmx::Ani::ITriggerAnimation*)&__ITriggerAnimation; }
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
	// {FFC591A9-A520-45F2-BD49-17F76E7B057C}
	operator Fmx::Effects::_di_IEffectContainer()
	{
		Fmx::Effects::_di_IEffectContainer intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Effects::IEffectContainer*(void) { return (Fmx::Effects::IEffectContainer*)&__IEffectContainer; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {420D3E98-4433-4CBE-9767-0B494DF08354}
	operator Fmx::Types::_di_IAlignableObject()
	{
		Fmx::Types::_di_IAlignableObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IAlignableObject*(void) { return (Fmx::Types::IAlignableObject*)&__IAlignableObject; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9EACF441-30E1-467D-88DA-CC8B2977758F}
	operator Fmx::Types::_di_IRotatedControl()
	{
		Fmx::Types::_di_IRotatedControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IRotatedControl*(void) { return (Fmx::Types::IRotatedControl*)&__IRotatedControl; }
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


__interface  INTERFACE_UUID("{C86EEAD8-69BF-4FDF-9FEE-A2F65E0EB3F0}") IDrawableObject  : public System::IInterface 
{
	virtual void __fastcall DrawToCanvas(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &ARect, const float AOpacity = 1.000000E+00f) = 0 ;
};

__interface  INTERFACE_UUID("{42D829B7-6D86-41CC-86D5-F92C1FCAB060}") ITintedObject  : public System::IInterface 
{
	virtual bool __fastcall GetCanBeTinted() = 0 ;
	virtual void __fastcall SetTintColor(const System::Uitypes::TAlphaColor ATintColor) = 0 ;
	__property bool CanBeTinted = {read=GetCanBeTinted};
	__property System::Uitypes::TAlphaColor TintColor = {write=SetTintColor};
};

enum class DECLSPEC_DENUM TOrientation : unsigned char { Horizontal, Vertical };

enum class DECLSPEC_DENUM TStyleState : unsigned char { Unapplied, Freeing, Applying, Error, Applied };

class PASCALIMPLEMENTATION TStyledControl : public TControl
{
	typedef TControl inherited;
	
public:
	#define TStyledControl_StyleSuffix L"style"
	
	
private:
	static Fmx::Types::TFmxObject* FLoadableStyle;
	System::Generics::Collections::TDictionary__2<System::UnicodeString,System::Rtti::TValue>* FStylesData;
	Fmx::Types::TFmxObject* FResourceLink;
	Fmx::Types::TAdjustType FAdjustType;
	System::Types::TSizeF FAdjustSizeValue;
	System::UnicodeString FStyleLookup;
	bool FIsNeedStyleLookup;
	bool FAutoTranslate;
	System::Classes::THelpType FHelpType;
	System::UnicodeString FHelpKeyword;
	System::Classes::THelpContext FHelpContext;
	TStyleState FStyleState;
	System::Rtti::TValue __fastcall GetStyleData(const System::UnicodeString Index);
	void __fastcall SetStyleData(const System::UnicodeString Index, const System::Rtti::TValue &Value);
	void __fastcall SetStyleLookup(const System::UnicodeString Value);
	void __fastcall ScaleChangedHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	void __fastcall StyleChangedHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	
private:
	void __fastcall InternalFreeStyle();
	
protected:
	virtual bool __fastcall SearchInto();
	virtual int __fastcall GetBackIndex();
	bool __fastcall IsHelpContextStored();
	void __fastcall SetHelpContext(const System::Classes::THelpContext Value);
	void __fastcall SetHelpKeyword(const System::UnicodeString Value);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual bool __fastcall DoSetSize(Fmx::Types::TControlSize* const ASize, const bool NewPlatformDefault, float ANewWidth, float ANewHeight, float &ALastWidth, float &ALastHeight);
	virtual void __fastcall DoApplyStyleLookup();
	virtual void __fastcall StyleDataChanged(const System::UnicodeString Index, const System::Rtti::TValue &Value);
	virtual System::Rtti::TValue __fastcall RequestStyleData(const System::UnicodeString Index);
	virtual void __fastcall Painting();
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual Fmx::Types::TFmxObject* __fastcall GetStyleContext();
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	virtual System::UnicodeString __fastcall GetParentClassStyleLookupName();
	virtual void __fastcall DoEnter();
	virtual void __fastcall Disappear();
	virtual void __fastcall AdjustSize();
	virtual void __fastcall AdjustFixedSize(TControl* const ReferenceControl);
	virtual Fmx::Types::TAdjustType __fastcall ChooseAdjustType(const System::Types::TSize &FixedSize);
	virtual void __fastcall DoStyleChanged();
	virtual void __fastcall StyleLookupChanged();
	void __fastcall RecycleResourceLink();
	void __fastcall KillResourceLink();
	virtual void __fastcall DoDeleteChildren();
	System::UnicodeString __fastcall GenerateStyleName(const System::UnicodeString AClassName);
	virtual Fmx::Types::TFmxObject* __fastcall GetStyleObject()/* overload */;
	virtual Fmx::Types::TFmxObject* __fastcall GetStyleObject(const bool Clone)/* overload */;
	virtual void __fastcall SetAdjustSizeValue(const System::Types::TSizeF &Value);
	virtual void __fastcall SetAdjustType(const Fmx::Types::TAdjustType Value);
	virtual Fmx::Types::TFmxObject* __fastcall GetResourceLink();
	TControl* __fastcall GetResourceControl();
	__property bool IsNeedStyleLookup = {read=FIsNeedStyleLookup, nodefault};
	__property Fmx::Types::TFmxObject* ResourceLink = {read=GetResourceLink};
	__property TControl* ResourceControl = {read=GetResourceControl};
	virtual System::Types::TSizeF __fastcall GetAdjustSizeValue();
	virtual Fmx::Types::TAdjustType __fastcall GetAdjustType();
	
public:
	__fastcall virtual TStyledControl(System::Classes::TComponent* AOwner)/* overload */;
	virtual void __fastcall BeforeDestruction();
	__fastcall virtual ~TStyledControl();
	__property Fmx::Types::TAdjustType AdjustType = {read=GetAdjustType, nodefault};
	__property System::Types::TSizeF AdjustSizeValue = {read=GetAdjustSizeValue};
	__property TStyleState StyleState = {read=FStyleState, nodefault};
	virtual void __fastcall RecalcSize();
	virtual Fmx::Types::TFmxObject* __fastcall FindStyleResource(const System::UnicodeString AStyleLookup, const bool Clone = false)/* overload */;
	template<typename T> HIDESBASE bool __fastcall FindStyleResource(const System::UnicodeString AStyleLookup, T &AResource)/* overload */;
	template<typename T> bool __fastcall FindAndCloneStyleResource(const System::UnicodeString AStyleLookup, T &AResource);
	virtual void __fastcall SetNewScene(_di_IScene AScene);
	virtual void __fastcall ApplyStyleLookup();
	virtual void __fastcall NeedStyleLookup();
	virtual void __fastcall Inflate();
	virtual void __fastcall PrepareForPaint();
	virtual void __fastcall StartTriggerAnimation(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
	virtual void __fastcall StartTriggerAnimationWait(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
	__property bool AutoTranslate = {read=FAutoTranslate, write=FAutoTranslate, nodefault};
	__property System::UnicodeString DefaultStyleLookupName = {read=GetDefaultStyleLookupName};
	__property System::UnicodeString ParentClassStyleLookupName = {read=GetParentClassStyleLookupName};
	__property System::Classes::THelpType HelpType = {read=FHelpType, write=FHelpType, default=1};
	__property System::UnicodeString HelpKeyword = {read=FHelpKeyword, write=SetHelpKeyword, stored=IsHelpContextStored};
	__property System::Classes::THelpContext HelpContext = {read=FHelpContext, write=SetHelpContext, stored=IsHelpContextStored, default=0};
	__property System::Rtti::TValue StylesData[const System::UnicodeString Index] = {read=GetStyleData, write=SetStyleData};
	__property System::UnicodeString StyleLookup = {read=FStyleLookup, write=SetStyleLookup};
	/* static */ __property Fmx::Types::TFmxObject* LoadableStyle = {read=FLoadableStyle, write=FLoadableStyle};
	__classmethod Fmx::Types::TFmxObject* __fastcall LookupStyleObject(Fmx::Types::TFmxObject* const Instance, Fmx::Types::TFmxObject* const Context, const _di_IScene Scene, const System::UnicodeString StyleLookup, const System::UnicodeString DefaultStyleLookup, const System::UnicodeString ParentClassStyleLookup, const bool Clone, const bool UseGlobalPool = true);
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStyleChangedMessage : public System::Messaging::TMessage__1<TStyleBook*>
{
	typedef System::Messaging::TMessage__1<TStyleBook*> inherited;
	
private:
	_di_IScene FScene;
	
public:
	__fastcall TStyleChangedMessage(TStyleBook* const StyleBook, const _di_IScene Scene)/* overload */;
	__property _di_IScene Scene = {read=FScene};
public:
	/* {System_Messaging}TMessage<FMX_Controls_TStyleBook>.Destroy */ inline __fastcall virtual ~TStyleChangedMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBeforeStyleChangingMessage : public System::Messaging::TMessageBase
{
	typedef System::Messaging::TMessageBase inherited;
	
public:
	/* TObject.Create */ inline __fastcall TBeforeStyleChangingMessage() : System::Messaging::TMessageBase() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TBeforeStyleChangingMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TStyleContainer : public TControl
{
	typedef TControl inherited;
	
private:
	System::Generics::Collections::TDictionary__2<System::UnicodeString,System::Classes::TMemoryStream*>* FBinaryDict;
	Fmx::Types::TFmxObject* __fastcall CreateStyleResource(const System::UnicodeString AStyleLookup);
	void __fastcall ClearContainer();
	void __fastcall UnpackAllBinaries();
	void __fastcall AddBinaryFromStream(const System::UnicodeString Name, System::Classes::TStream* const SourceStream, const __int64 Size);
	void __fastcall AddObjectFromStream(const System::UnicodeString Name, System::Classes::TStream* const SourceStream, const __int64 Size);
	Fmx::Types::TFmxObject* __fastcall LoadStyleResource(System::Classes::TStream* const AStream);
	
public:
	__fastcall virtual TStyleContainer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TStyleContainer();
	virtual Fmx::Types::TFmxObject* __fastcall FindStyleResource(const System::UnicodeString AStyleLookup, const bool Clone = false)/* overload */;
private:
	void *__IBinaryStyleContainer;	// Fmx::Styles::IBinaryStyleContainer 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {76589FDB-7430-4F7A-A993-44AB1664BCFD}
	operator Fmx::Styles::_di_IBinaryStyleContainer()
	{
		Fmx::Styles::_di_IBinaryStyleContainer intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Styles::IBinaryStyleContainer*(void) { return (Fmx::Styles::IBinaryStyleContainer*)&__IBinaryStyleContainer; }
	#endif
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStyleCollectionItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
public:
	#define TStyleCollectionItem_DefaultItem L"Default"
	
	
private:
	TStyleBook* FStyleBook;
	System::Classes::TMemoryStream* FBinary;
	Fmx::Types::TFmxObject* FStyle;
	System::UnicodeString FPlatform;
	bool FUnsupportedPlatform;
	bool FNeedLoadFromBinary;
	void __fastcall SetPlatform(const System::UnicodeString Value);
	void __fastcall SetResource(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetResource();
	Fmx::Types::TFmxObject* __fastcall GetStyle();
	void __fastcall ReadResources(System::Classes::TStream* Stream);
	void __fastcall WriteResources(System::Classes::TStream* Stream);
	bool __fastcall StyleStored();
	bool __fastcall GetIsEmpty();
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual System::UnicodeString __fastcall GetDisplayName();
	
public:
	__fastcall virtual TStyleCollectionItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TStyleCollectionItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall LoadFromBinary();
	void __fastcall SaveToBinary();
	void __fastcall Clear();
	__property bool IsEmpty = {read=GetIsEmpty, nodefault};
	void __fastcall LoadFromStream(System::Classes::TStream* const Stream);
	void __fastcall LoadFromFile(const System::UnicodeString FileName);
	void __fastcall SaveToStream(System::Classes::TStream* const Stream, const Fmx::Styles::TStyleFormat Format = (Fmx::Styles::TStyleFormat)(0x0));
	__property TStyleBook* StyleBook = {read=FStyleBook};
	__property Fmx::Types::TFmxObject* Style = {read=GetStyle};
	__property bool UnsupportedPlatform = {read=FUnsupportedPlatform, nodefault};
	
__published:
	__property System::UnicodeString Platform = {read=FPlatform, write=SetPlatform};
	__property System::UnicodeString Resource = {read=GetResource, write=SetResource, stored=false};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStyleCollection : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TStyleCollectionItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TStyleBook* FStyleBook;
	HIDESBASE TStyleCollectionItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TStyleCollectionItem* const Value);
	
protected:
	virtual void __fastcall Notify(System::Classes::TCollectionItem* Item, System::Generics::Collections::TCollectionNotification Action);
	
public:
	__fastcall TStyleCollection(System::Classes::TPersistent* AOwner);
	HIDESBASE TStyleCollectionItem* __fastcall Add();
	__property TStyleCollectionItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TStyleCollection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TStyleBookDesignInfo
{
public:
	System::UnicodeString ClassName;
	bool CustomStyle;
	System::UnicodeString DefaultStyleLookup;
	System::UnicodeString Name;
	System::UnicodeString StyleLookup;
	TStyledControl* Control;
	bool JustCreated;
};


class PASCALIMPLEMENTATION TStyleBook : public Fmx::Types::TFmxObject
{
	typedef Fmx::Types::TFmxObject inherited;
	
private:
	TStyleCollection* FStyles;
	System::Generics::Collections::TDictionary__2<System::UnicodeString,TStyleCollectionItem*>* FStylesDic;
	int FCurrentItemIndex;
	System::UnicodeString FFileName;
	TStyleBookDesignInfo FDesignInfo;
	bool FUseStyleManager;
	int FBeforeStyleChangingId;
	int FStyleChangedId;
	System::Classes::TStrings* FResource;
	void __fastcall SetFileName(const System::UnicodeString Value);
	void __fastcall SetUseStyleManager(const bool Value);
	void __fastcall SetStyles(TStyleCollection* const Value);
	Fmx::Types::TFmxObject* __fastcall GetStyle()/* overload */;
	void __fastcall SetCurrentItemIndex(const int Value);
	void __fastcall BeforeStyleChangingHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	void __fastcall StyleChangedHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	TStyleCollectionItem* __fastcall GetCurrentItem();
	bool __fastcall GetUnsupportedPlatform();
	void __fastcall RebuildDictionary();
	void __fastcall ResourceChanged(System::TObject* Sender);
	int __fastcall StyleIndexByContext(Fmx::Types::TFmxObject* const Context);
	void __fastcall CollectionChanged();
	void __fastcall ReadStrings(System::Classes::TReader* Reader);
	
protected:
	virtual Fmx::Types::TFmxObject* __fastcall CustomFindStyleResource(const System::UnicodeString AStyleLookup, const bool Clone);
	virtual void __fastcall ChooseStyleIndex();
	virtual void __fastcall CreateDefaultItem();
	virtual void __fastcall Loaded();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall ReadResources(System::Classes::TStream* Stream);
	
public:
	__fastcall virtual TStyleBook(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TStyleBook();
	__property TStyleBookDesignInfo DesignInfo = {read=FDesignInfo, write=FDesignInfo};
	void __fastcall Clear();
	Fmx::Types::TFmxObject* __fastcall GetStyle(Fmx::Types::TFmxObject* const Context)/* overload */;
	void __fastcall LoadFromStream(System::Classes::TStream* const Stream);
	void __fastcall LoadFromFile(const System::UnicodeString AFileName);
	__property Fmx::Types::TFmxObject* Style = {read=GetStyle};
	__property int CurrentItemIndex = {read=FCurrentItemIndex, write=SetCurrentItemIndex, nodefault};
	__property TStyleCollectionItem* CurrentItem = {read=GetCurrentItem};
	__property System::Classes::TStrings* Resource = {read=FResource};
	__property bool UnsupportedPlatform = {read=GetUnsupportedPlatform, nodefault};
	
__published:
	__property System::UnicodeString FileName = {read=FFileName, write=SetFileName};
	__property bool UseStyleManager = {read=FUseStyleManager, write=SetUseStyleManager, default=0};
	__property TStyleCollection* Styles = {read=FStyles, write=SetStyles};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTextSettingsInfo : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
	
public:
	class DELPHICLASS TBaseTextSettings;
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TBaseTextSettings : public Fmx::Graphics::TTextSettings
	{
		typedef Fmx::Graphics::TTextSettings inherited;
		
	private:
		TTextSettingsInfo* FInfo;
		TControl* FControl;
		
	public:
		__fastcall virtual TBaseTextSettings(System::Classes::TPersistent* const AOwner);
		__property TTextSettingsInfo* Info = {read=FInfo};
		__property TControl* Control = {read=FControl};
	public:
		/* TTextSettings.Destroy */ inline __fastcall virtual ~TBaseTextSettings() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	class DELPHICLASS TCustomTextSettings;
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TCustomTextSettings : public TTextSettingsInfo::TBaseTextSettings
	{
		typedef TTextSettingsInfo::TBaseTextSettings inherited;
		
	public:
		__fastcall virtual TCustomTextSettings(System::Classes::TPersistent* const AOwner);
		__property WordWrap = {default=1};
		__property Trimming = {default=0};
	public:
		/* TTextSettings.Destroy */ inline __fastcall virtual ~TCustomTextSettings() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
#ifndef _WIN64
	typedef System::TMetaClass* TCustomTextSettingsClass;
#else /* _WIN64 */
	_DECLARE_METACLASS(System::TMetaClass, TCustomTextSettingsClass);
#endif /* _WIN64 */
	
	class DELPHICLASS TTextPropLoader;
	class PASCALIMPLEMENTATION TTextPropLoader : public System::TObject
	{
		typedef System::TObject inherited;
		
	private:
		System::Classes::TPersistent* FInstance;
		System::Classes::TFiler* FFiler;
		Fmx::Graphics::_di_ITextSettings FITextSettings;
		Fmx::Graphics::TTextSettings* FTextSettings;
		
	protected:
		void __fastcall ReadSet(System::Classes::TPersistent* const Instance, System::Classes::TReader* const Reader, const System::UnicodeString PropertyName);
		void __fastcall ReadEnumeration(System::Classes::TPersistent* const Instance, System::Classes::TReader* const Reader, const System::UnicodeString PropertyName);
		void __fastcall ReadFontFillColor(System::Classes::TReader* Reader);
		void __fastcall ReadFontFamily(System::Classes::TReader* Reader);
		void __fastcall ReadFontFillKind(System::Classes::TReader* Reader);
		void __fastcall ReadFontStyle(System::Classes::TReader* Reader);
		void __fastcall ReadFontSize(System::Classes::TReader* Reader);
		void __fastcall ReadTextAlign(System::Classes::TReader* Reader);
		void __fastcall ReadTrimming(System::Classes::TReader* Reader);
		void __fastcall ReadVertTextAlign(System::Classes::TReader* Reader);
		void __fastcall ReadWordWrap(System::Classes::TReader* Reader);
		
	public:
		__fastcall TTextPropLoader(System::Classes::TComponent* const AInstance, System::Classes::TFiler* const AFiler);
		virtual void __fastcall ReadProperties();
		__property System::Classes::TPersistent* Instance = {read=FInstance};
		__property System::Classes::TFiler* Filer = {read=FFiler};
		__property Fmx::Graphics::TTextSettings* TextSettings = {read=FTextSettings};
	public:
		/* TObject.Destroy */ inline __fastcall virtual ~TTextPropLoader() { }
		
	};
	
	
	
private:
	Fmx::Graphics::TTextSettings* FDefaultTextSettings;
	Fmx::Graphics::TTextSettings* FTextSettings;
	Fmx::Graphics::TTextSettings* FResultingTextSettings;
	Fmx::Graphics::TTextSettings* FOldTextSettings;
	System::Classes::TPersistent* FOwner;
	bool FDesign;
	Fmx::Types::TStyledSettings FStyledSettings;
	void __fastcall SetDefaultTextSettings(Fmx::Graphics::TTextSettings* const Value);
	void __fastcall SetStyledSettings(const Fmx::Types::TStyledSettings Value);
	void __fastcall SetTextSettings(Fmx::Graphics::TTextSettings* const Value);
	void __fastcall OnDefaultChanged(System::TObject* Sender);
	void __fastcall OnTextChanged(System::TObject* Sender);
	void __fastcall OnCalculatedTextSettings(System::TObject* Sender);
	
protected:
	virtual void __fastcall RecalculateTextSettings();
	virtual void __fastcall DoDefaultChanged();
	virtual void __fastcall DoTextChanged();
	virtual void __fastcall DoCalculatedTextSettings();
	virtual void __fastcall DoStyledSettingsChanged();
	
public:
	__fastcall virtual TTextSettingsInfo(System::Classes::TPersistent* AOwner, TCustomTextSettingsClass ATextSettingsClass);
	__fastcall virtual ~TTextSettingsInfo();
	__property bool Design = {read=FDesign, write=FDesign, nodefault};
	__property Fmx::Types::TStyledSettings StyledSettings = {read=FStyledSettings, write=SetStyledSettings, nodefault};
	__property Fmx::Graphics::TTextSettings* DefaultTextSettings = {read=FDefaultTextSettings, write=SetDefaultTextSettings};
	__property Fmx::Graphics::TTextSettings* TextSettings = {read=FTextSettings, write=SetTextSettings};
	__property Fmx::Graphics::TTextSettings* ResultingTextSettings = {read=FResultingTextSettings};
	__property System::Classes::TPersistent* Owner = {read=FOwner};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TTextControl : public TStyledControl
{
	typedef TStyledControl inherited;
	
private:
	TTextSettingsInfo* FTextSettingsInfo;
	TControl* FTextObject;
	Fmx::Graphics::_di_ITextSettings FITextSettings;
	Fmx::Types::_di_IObjectState FObjectState;
	System::UnicodeString FText;
	bool FIsChanging;
	Fmx::Types::TPrefixStyle FPrefixStyle;
	System::WideChar FAcceleratorKey;
	int FAcceleratorKeyIndex;
	Fmx::Graphics::TFont* __fastcall GetFont();
	System::UnicodeString __fastcall GetText();
	bool __fastcall TextStored();
	void __fastcall SetFont(Fmx::Graphics::TFont* const Value);
	Fmx::Types::TTextAlign __fastcall GetTextAlign();
	void __fastcall SetTextAlign(const Fmx::Types::TTextAlign Value);
	Fmx::Types::TTextAlign __fastcall GetVertTextAlign();
	void __fastcall SetVertTextAlign(const Fmx::Types::TTextAlign Value);
	bool __fastcall GetWordWrap();
	void __fastcall SetWordWrap(const bool Value);
	System::Uitypes::TAlphaColor __fastcall GetFontColor();
	void __fastcall SetFontColor(const System::Uitypes::TAlphaColor Value);
	Fmx::Types::TTextTrimming __fastcall GetTrimming();
	void __fastcall SetTrimming(const Fmx::Types::TTextTrimming Value);
	void __fastcall SetPrefixStyle(const Fmx::Types::TPrefixStyle Value);
	Fmx::Graphics::TTextSettings* __fastcall GetDefaultTextSettings();
	Fmx::Graphics::TTextSettings* __fastcall GetTextSettings();
	Fmx::Types::TStyledSettings __fastcall GetStyledSettings();
	Fmx::Graphics::TTextSettings* __fastcall GetResultingTextSettings();
	
protected:
	virtual void __fastcall DoRootChanging(const Fmx::Types::_di_IRoot NewRoot);
	virtual System::UnicodeString __fastcall DoFilterControlText(const System::UnicodeString AText);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual void __fastcall DoStyleChanged();
	virtual void __fastcall SetText(const System::UnicodeString Value);
	virtual void __fastcall SetTextInternal(const System::UnicodeString Value);
	virtual void __fastcall SetName(const System::Classes::TComponentName Value);
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	virtual void __fastcall ActionChange(System::Classes::TBasicAction* Sender, bool CheckDefaults);
	virtual void __fastcall Loaded();
	virtual Fmx::Types::TFmxObject* __fastcall FindTextObject();
	void __fastcall UpdateTextObject(TControl* const TextControl, const System::UnicodeString Str);
	__property TControl* TextObject = {read=FTextObject};
	virtual void __fastcall DoTextChanged();
	virtual void __fastcall DoEndUpdate();
	bool __fastcall CalcTextObjectSize(const float MaxWidth, System::Types::TSizeF &Size);
	virtual void __fastcall SetTextSettings(Fmx::Graphics::TTextSettings* const Value);
	virtual void __fastcall SetStyledSettings(const Fmx::Types::TStyledSettings Value);
	virtual void __fastcall DoChanged();
	virtual bool __fastcall StyledSettingsStored();
	virtual TTextSettingsInfo::TCustomTextSettingsClass __fastcall GetTextSettingsClass();
	virtual void __fastcall TriggerAcceleratorKey();
	virtual bool __fastcall CanTriggerAcceleratorKey();
	System::WideChar __fastcall GetAcceleratorChar();
	int __fastcall GetAcceleratorCharIndex();
	
public:
	__fastcall virtual TTextControl(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TTextControl();
	virtual void __fastcall AfterConstruction();
	virtual System::UnicodeString __fastcall ToString();
	__property System::UnicodeString Text = {read=GetText, write=SetText, stored=TextStored};
	__property Fmx::Graphics::TTextSettings* DefaultTextSettings = {read=GetDefaultTextSettings};
	__property Fmx::Graphics::TTextSettings* TextSettings = {read=GetTextSettings, write=SetTextSettings};
	__property Fmx::Types::TStyledSettings StyledSettings = {read=GetStyledSettings, write=SetStyledSettings, stored=StyledSettingsStored, nodefault};
	__property Fmx::Graphics::TTextSettings* ResultingTextSettings = {read=GetResultingTextSettings};
	void __fastcall Change();
	__property Fmx::Graphics::TFont* Font = {read=GetFont, write=SetFont};
	__property System::Uitypes::TAlphaColor FontColor = {read=GetFontColor, write=SetFontColor, default=-16777216};
	__property Fmx::Types::TTextAlign VertTextAlign = {read=GetVertTextAlign, write=SetVertTextAlign, default=0};
	__property Fmx::Types::TTextAlign TextAlign = {read=GetTextAlign, write=SetTextAlign, default=1};
	__property bool WordWrap = {read=GetWordWrap, write=SetWordWrap, default=0};
	__property Fmx::Types::TTextTrimming Trimming = {read=GetTrimming, write=SetTrimming, default=0};
	__property Fmx::Types::TPrefixStyle PrefixStyle = {read=FPrefixStyle, write=SetPrefixStyle, default=0};
private:
	void *__IAcceleratorKeyReceiver;	// Fmx::Acceleratorkey::IAcceleratorKeyReceiver 
	void *__ICaption;	// Fmx::Actnlist::ICaption 
	void *__ITextSettings;	// Fmx::Graphics::ITextSettings 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1C679082-65F2-4C54-A2C4-CD4C00E2C465}
	operator Fmx::Acceleratorkey::_di_IAcceleratorKeyReceiver()
	{
		Fmx::Acceleratorkey::_di_IAcceleratorKeyReceiver intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Acceleratorkey::IAcceleratorKeyReceiver*(void) { return (Fmx::Acceleratorkey::IAcceleratorKeyReceiver*)&__IAcceleratorKeyReceiver; }
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
	// {FD99635D-D8DB-4E26-B36F-97D3AABBCCB3}
	operator Fmx::Graphics::_di_ITextSettings()
	{
		Fmx::Graphics::_di_ITextSettings intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Graphics::ITextSettings*(void) { return (Fmx::Graphics::ITextSettings*)&__ITextSettings; }
	#endif
	
};


class PASCALIMPLEMENTATION TContent : public TControl
{
	typedef TControl inherited;
	
private:
	bool FParentAligning;
	
protected:
	virtual Fmx::Types::_di_ITabStopController __fastcall GetTabStopController();
	virtual void __fastcall DoRealign();
	virtual void __fastcall ContentChanged();
	
public:
	__fastcall virtual TContent(System::Classes::TComponent* AOwner);
	virtual Fmx::Types::TTabListClass __fastcall GetTabListClass();
	
__published:
	__property Align = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property HitTest = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Visible = {default=1};
	__property Width;
	__property Size;
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
	/* TControl.Destroy */ inline __fastcall virtual ~TContent() { }
	
private:
	void *__IContent;	// Fmx::Types::IContent 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {96E89B94-2AD6-4AD3-A07C-92E66B2E6BC8}
	operator Fmx::Types::_di_IContent()
	{
		Fmx::Types::_di_IContent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IContent*(void) { return (Fmx::Types::IContent*)&__IContent; }
	#endif
	
};


enum class DECLSPEC_DENUM TPlacement : unsigned char { Bottom, Top, Left, Right, Center, BottomCenter, TopCenter, LeftCenter, RightCenter, Absolute, Mouse, MouseCenter };

class PASCALIMPLEMENTATION TPopup : public TStyledControl
{
	typedef TStyledControl inherited;
	
private:
	Fmx::Types::TFmxObject* FSaveParent;
	System::Types::TPointF FSaveScale;
	Fmx::Types::TFmxObject* FPopupForm;
	bool FIsOpen;
	bool FStaysOpen;
	TPlacement FPlacement;
	TControl* FPlacementTarget;
	Fmx::Types::TBounds* FPlacementRectangle;
	float FHorizontalOffset;
	float FVerticalOffset;
	bool FDragWithParent;
	bool FHideWhenPlacementTargetInvisible;
	bool FClosingAnimation;
	TStyleBook* FStyleBook;
	System::Uitypes::TModalResult FModalResult;
	bool FModal;
	System::Classes::TNotifyEvent FOnClosePopup;
	System::Classes::TNotifyEvent FOnPopup;
	float FBorderWidth;
	float FAniDuration;
	System::Types::TSizeF FPopupFormSize;
	int FPreferedDisplayIndex;
	System::Classes::TNotifyEvent FOnAniTimer;
	void __fastcall SetIsOpen(const bool Value);
	void __fastcall SetPlacementRectangle(Fmx::Types::TBounds* const Value);
	void __fastcall SetModalResult(const System::Uitypes::TModalResult Value);
	void __fastcall SetPlacementTarget(TControl* const Value);
	void __fastcall SetStyleBook(TStyleBook* const Value);
	void __fastcall SetPlacement(const TPlacement Value);
	void __fastcall SetDragWithParent(const bool Value);
	void __fastcall SetHideWhenPlacementTargetInvisible(const bool Value);
	void __fastcall SetBorderWidth(const float Value);
	void __fastcall BeforeShowProc(System::TObject* Sender);
	void __fastcall BeforeCloseProc(System::TObject* Sender);
	void __fastcall CloseProc(System::TObject* Sender, System::Uitypes::TCloseAction &Action);
	void __fastcall SetAniDuration(const float Value);
	HIDESBASE void __fastcall ReadLeft(System::Classes::TReader* Reader);
	HIDESBASE void __fastcall ReadTop(System::Classes::TReader* Reader);
	void __fastcall SetPopupFormSize(const System::Types::TSizeF &Value);
	void __fastcall UpdatePopupSize();
	void __fastcall SetOnAniTimer(const System::Classes::TNotifyEvent Value);
	
protected:
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall Paint();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall DialogKey(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall DoClosePopup();
	virtual void __fastcall DoPopup();
	virtual void __fastcall ClosePopup();
	virtual Fmx::Types::TFmxObject* __fastcall CreatePopupForm();
	__property Fmx::Types::TFmxObject* PopupForm = {read=FPopupForm};
	virtual bool __fastcall VisibleStored();
	
public:
	__fastcall virtual TPopup(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TPopup();
	virtual void __fastcall Popup(const bool AShowModal = false);
	virtual System::Uitypes::TModalResult __fastcall PopupModal();
	bool __fastcall HasPopupForm();
	virtual void __fastcall BringToFront();
	__property float AniDuration = {read=FAniDuration, write=SetAniDuration};
	__property float BorderWidth = {read=FBorderWidth, write=SetBorderWidth};
	__property System::Uitypes::TModalResult ModalResult = {read=FModalResult, write=SetModalResult, nodefault};
	__property bool IsOpen = {read=FIsOpen, write=SetIsOpen, nodefault};
	__property bool ClosingAnimation = {read=FClosingAnimation, nodefault};
	__property System::Types::TSizeF PopupFormSize = {read=FPopupFormSize, write=SetPopupFormSize};
	__property int PreferedDisplayIndex = {read=FPreferedDisplayIndex, write=FPreferedDisplayIndex, nodefault};
	__property System::Classes::TNotifyEvent OnAniTimer = {read=FOnAniTimer, write=SetOnAniTimer};
	
__published:
	__property Align = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property bool DragWithParent = {read=FDragWithParent, write=SetDragWithParent, default=0};
	__property bool HideWhenPlacementTargetInvisible = {read=FHideWhenPlacementTargetInvisible, write=SetHideWhenPlacementTargetInvisible, default=1};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property HitTest = {default=1};
	__property float HorizontalOffset = {read=FHorizontalOffset, write=FHorizontalOffset};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property TPlacement Placement = {read=FPlacement, write=SetPlacement, default=0};
	__property Fmx::Types::TBounds* PlacementRectangle = {read=FPlacementRectangle, write=SetPlacementRectangle};
	__property TControl* PlacementTarget = {read=FPlacementTarget, write=SetPlacementTarget};
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property TStyleBook* StyleBook = {read=FStyleBook, write=SetStyleBook};
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property float VerticalOffset = {read=FVerticalOffset, write=FVerticalOffset};
	__property Visible = {stored=VisibleStored, default=1};
	__property Width;
	__property OnApplyStyleLookup;
	__property System::Classes::TNotifyEvent OnClosePopup = {read=FOnClosePopup, write=FOnClosePopup};
	__property System::Classes::TNotifyEvent OnPopup = {read=FOnPopup, write=FOnPopup};
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
};


class PASCALIMPLEMENTATION TPathAnimation : public Fmx::Ani::TAnimation
{
	typedef Fmx::Ani::TAnimation inherited;
	
private:
	Fmx::Graphics::TPathData* FPath;
	System::Math::Vectors::TPolygon FPolygon;
	TControl* FObj;
	System::Types::TPointF FStart;
	bool FRotate;
	Fmx::Types::TSpline* FSpline;
	void __fastcall SetPath(Fmx::Graphics::TPathData* const Value);
	bool __fastcall EnabledStored();
	
protected:
	virtual void __fastcall ProcessAnimation();
	
public:
	__fastcall virtual TPathAnimation(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TPathAnimation();
	virtual void __fastcall Start();
	
__published:
	__property AnimationType = {default=0};
	__property AutoReverse = {default=0};
	__property Enabled = {stored=EnabledStored, default=0};
	__property Delay = {default=0};
	__property Duration;
	__property Interpolation = {default=0};
	__property Inverse = {default=0};
	__property Loop = {default=0};
	__property OnProcess;
	__property OnFinish;
	__property Fmx::Graphics::TPathData* Path = {read=FPath, write=SetPath};
	__property bool Rotate = {read=FRotate, write=FRotate, default=0};
	__property Trigger = {index=0, default=0};
	__property TriggerInverse = {index=1, default=0};
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface IInflatableContent__1  : public System::IInterface 
{
	virtual System::Generics::Collections::TList__1<T>* __fastcall GetInflatableItems() = 0 ;
	virtual void __fastcall NotifyInflated() = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TContentInflater__1 : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::DelphiInterface<IInflatableContent__1<T> > FInflatable;
	bool FBusy;
	void __fastcall ReceiveIdleMessage(System::TObject* const Sender, System::Messaging::TMessageBase* const M);
	
public:
	__fastcall TContentInflater__1(const System::DelphiInterface<IInflatableContent__1<T> > Inflatable);
	__fastcall virtual ~TContentInflater__1();
	void __fastcall Inflate(bool Total);
private:
	void *__IInterface;	// System::IInterface 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IInterface; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TControlsFilter__1 : public Fmx::Types::TEnumerableFilter__2<TControl*,T>
{
	typedef Fmx::Types::TEnumerableFilter__2<TControl*,T> inherited;
	
public:
	/* {FMX_Types}TEnumerableFilter<FMX_Controls_TControl,FMX_Controls_TControlsFilter<T>_T>.Create */ inline __fastcall TControlsFilter__1(System::Generics::Collections::TEnumerable__1<TControl*>* const FullEnum, bool SelfDestruct, const System::DelphiInterface<System::Sysutils::TPredicate__1<T> > Pred) : Fmx::Types::TEnumerableFilter__2<TControl*,T>(FullEnum, SelfDestruct, Pred) { }
	
public:
	/* {System_Generics_Collections}TEnumerable<FMX_Controls_TControlsFilter<T>_T>.Destroy */ inline __fastcall virtual ~TControlsFilter__1() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{C73631F4-5AD7-48B9-92D2-CC808B911B5E}") ISearchResponder  : public System::IInterface 
{
	virtual void __fastcall SetFilterPredicate(const System::DelphiInterface<System::Sysutils::TPredicate__1<System::UnicodeString> > Predicate) = 0 ;
};

__interface  INTERFACE_UUID("{C7BDF195-C1E2-48F9-9376-1382C60A6BCC}") IListBoxHeaderTrait  : public System::IInterface 
{
	
};

__interface TPropertyApplyProc  : public System::IInterface 
{
	virtual void __fastcall Invoke(System::TObject* Instance, System::Rtti::TRttiProperty* Prop) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall FindProperty(System::TObject* &O, System::UnicodeString Path, const _di_TPropertyApplyProc Apply);
extern DELPHI_PACKAGE void __fastcall ClosePopup(const int AIndex)/* overload */;
extern DELPHI_PACKAGE void __fastcall ClosePopup(Fmx::Types::TFmxObject* Wnd)/* overload */;
extern DELPHI_PACKAGE void __fastcall CloseAllPopups(void);
extern DELPHI_PACKAGE bool __fastcall IsPopup(Fmx::Types::TFmxObject* const Wnd);
extern DELPHI_PACKAGE bool __fastcall CanClosePopup(Fmx::Types::TFmxObject* const Wnd);
extern DELPHI_PACKAGE void __fastcall PopupBringToFront(void);
extern DELPHI_PACKAGE Fmx::Types::TFmxObject* __fastcall GetPopup(const int AIndex);
extern DELPHI_PACKAGE int __fastcall GetPopupCount(void);
extern DELPHI_PACKAGE void __fastcall FreeControls(void);
}	/* namespace Controls */
}	/* namespace Fmx */
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
#endif	// Fmx_ControlsHPP
