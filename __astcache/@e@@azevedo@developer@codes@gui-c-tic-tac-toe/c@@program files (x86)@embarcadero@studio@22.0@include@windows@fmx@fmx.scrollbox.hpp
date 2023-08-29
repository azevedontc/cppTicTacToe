// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.ScrollBox.pas' rev: 35.00 (Windows)

#ifndef Fmx_ScrollboxHPP
#define Fmx_ScrollboxHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.Classes.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Controls.Model.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.BehaviorManager.hpp>
#include <FMX.InertialMovement.hpp>
#include <FMX.Presentation.Messages.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Scrollbox
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TScrollContentSize;
class DELPHICLASS TCustomScrollBoxModel;
class DELPHICLASS TScrollContent;
class DELPHICLASS TCustomPresentedScrollBox;
class DELPHICLASS TPresentedScrollBox;
class DELPHICLASS TCustomPresentedVertScrollBox;
class DELPHICLASS TPresentedVertScrollBox;
class DELPHICLASS TCustomPresentedHorzScrollBox;
class DELPHICLASS TPresentedHorzScrollBox;
class DELPHICLASS TCustomPresentedFramedScrollBox;
class DELPHICLASS TPresentedFramedScrollBox;
class DELPHICLASS TCustomPresentedFramedVertScrollBox;
class DELPHICLASS TPresentedFramedVertScrollBox;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TPositionChangeEvent)(System::TObject* Sender, const System::Types::TPointF &OldViewportPosition, const System::Types::TPointF &NewViewportPosition, const bool ContentSizeChanged);

typedef void __fastcall (__closure *TOnCalcContentBoundsEvent)(System::TObject* Sender, System::Types::TRectF &ContentBounds);

class PASCALIMPLEMENTATION TScrollContentSize : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TCustomPresentedScrollBox* FScrollBox;
	float FWidth;
	float FHeight;
	System::Classes::TNotifyEvent FOnInternalChange;
	void __fastcall SetHeight(const float Value);
	void __fastcall SetWidth(const float Value);
	System::Types::TSizeF __fastcall GetSize();
	void __fastcall SetSize(const System::Types::TSizeF &Value);
	bool __fastcall StoreWidthHeight();
	
protected:
	virtual void __fastcall DoChanged();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	void __fastcall SetSizeWithoutChecks(const System::Types::TSizeF &Value);
	
public:
	__fastcall TScrollContentSize(System::Classes::TComponent* AOwner, const System::Classes::TNotifyEvent AOnChange);
	bool __fastcall IsReadOnly();
	__property TCustomPresentedScrollBox* ScrollBox = {read=FScrollBox};
	__property System::Types::TSizeF Size = {read=GetSize, write=SetSize};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnInternalChange};
	
__published:
	__property float Width = {read=FWidth, write=SetWidth, stored=StoreWidthHeight};
	__property float Height = {read=FHeight, write=SetHeight, stored=StoreWidthHeight};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TScrollContentSize() { }
	
};


enum class DECLSPEC_DENUM TScrollDirections : unsigned char { Both, Horizontal, Vertical };

class PASCALIMPLEMENTATION TCustomScrollBoxModel : public Fmx::Controls::Model::TDataModel
{
	typedef Fmx::Controls::Model::TDataModel inherited;
	
	
public:
	struct DECLSPEC_DRECORD TScrollByInfo
	{
	public:
		System::Types::TPointF Vector;
		bool Animated;
	};
	
	
	struct DECLSPEC_DRECORD TInViewRectInfo
	{
	public:
		System::Types::TRectF Rect;
		bool Animated;
	};
	
	
	
public:
	static const Fmx::Behaviormanager::TBehaviorBoolean DefaultAutoHide = (Fmx::Behaviormanager::TBehaviorBoolean)(2);
	
	static const bool DefaultAutoCalculateContentSize = true;
	
	static const Fmx::Behaviormanager::TBehaviorBoolean DefaultBounces = (Fmx::Behaviormanager::TBehaviorBoolean)(2);
	
	static const bool DefaultEnabledScroll = true;
	
	static const bool DefaultShowScrollBars = true;
	
	static const Fmx::Behaviormanager::TBehaviorBoolean DefaultScrollAnimation = (Fmx::Behaviormanager::TBehaviorBoolean)(2);
	
	static const TScrollDirections DefaultScrollDirections = (TScrollDirections)(0);
	
	static const Fmx::Behaviormanager::TBehaviorBoolean DefaultTouchTracking = (Fmx::Behaviormanager::TBehaviorBoolean)(2);
	
	
private:
	Fmx::Behaviormanager::TBehaviorBoolean FAutoHide;
	bool FAutoCalculateContentSize;
	Fmx::Behaviormanager::TBehaviorBoolean FBounces;
	TScrollContentSize* FContentSize;
	bool FDisableMouseWheel;
	bool FEnabledScroll;
	Fmx::Behaviormanager::TBehaviorBoolean FScrollAnimation;
	TScrollDirections FScrollDirections;
	bool FShowScrollBars;
	bool FShowSizeGrip;
	System::Types::TPointF FViewportPosition;
	Fmx::Behaviormanager::TBehaviorBoolean FTouchTracking;
	TOnCalcContentBoundsEvent FOnCalcContentBounds;
	TPositionChangeEvent FOnViewportPositionChange;
	void __fastcall SetAutoHide(const Fmx::Behaviormanager::TBehaviorBoolean Value);
	void __fastcall SetBounces(const Fmx::Behaviormanager::TBehaviorBoolean Value);
	void __fastcall SetContentBounds(const System::Types::TRectF &Value);
	System::Types::TRectF __fastcall GetContentBounds();
	void __fastcall SetContentSize(TScrollContentSize* const Value);
	void __fastcall SetDisableMouseWheel(const bool Value);
	void __fastcall SetEnabledScroll(const bool Value);
	void __fastcall SetScrollAnimation(const Fmx::Behaviormanager::TBehaviorBoolean Value);
	void __fastcall SetScrollDirections(const TScrollDirections Value);
	void __fastcall SetShowScrollBars(const bool Value);
	void __fastcall SetShowSizeGrip(const bool Value);
	void __fastcall SetTouchTracking(const Fmx::Behaviormanager::TBehaviorBoolean Value);
	System::Types::TSizeF __fastcall GetViewportSize();
	void __fastcall SetViewportPosition(const System::Types::TPointF &Value);
	System::Types::TPointF __fastcall GetViewportPosition();
	void __fastcall DoContentSizeChanged(System::TObject* Sender);
	
public:
	__fastcall virtual TCustomScrollBoxModel(System::Classes::TComponent* const AOwner)/* overload */;
	__fastcall virtual ~TCustomScrollBoxModel();
	virtual void __fastcall DoViewportPositionChange(const System::Types::TPointF &OldViewportPosition, const System::Types::TPointF &NewViewportPosition, const bool ContentSizeChanged);
	bool __fastcall IsOpaque();
	__property System::Types::TRectF ContentBounds = {read=GetContentBounds, write=SetContentBounds};
	__property Fmx::Behaviormanager::TBehaviorBoolean AutoHide = {read=FAutoHide, write=SetAutoHide, nodefault};
	__property bool AutoCalculateContentSize = {read=FAutoCalculateContentSize, write=FAutoCalculateContentSize, nodefault};
	__property Fmx::Behaviormanager::TBehaviorBoolean Bounces = {read=FBounces, write=SetBounces, nodefault};
	__property TScrollContentSize* ContentSize = {read=FContentSize, write=SetContentSize};
	__property bool DisableMouseWheel = {read=FDisableMouseWheel, write=SetDisableMouseWheel, nodefault};
	__property bool EnabledScroll = {read=FEnabledScroll, write=SetEnabledScroll, nodefault};
	__property Fmx::Behaviormanager::TBehaviorBoolean ScrollAnimation = {read=FScrollAnimation, write=SetScrollAnimation, nodefault};
	__property TScrollDirections ScrollDirections = {read=FScrollDirections, write=SetScrollDirections, nodefault};
	__property bool ShowScrollBars = {read=FShowScrollBars, write=SetShowScrollBars, nodefault};
	__property bool ShowSizeGrip = {read=FShowSizeGrip, write=SetShowSizeGrip, nodefault};
	__property Fmx::Behaviormanager::TBehaviorBoolean TouchTracking = {read=FTouchTracking, write=SetTouchTracking, nodefault};
	__property System::Types::TPointF ViewportPosition = {read=GetViewportPosition, write=SetViewportPosition};
	__property System::Types::TSizeF ViewportSize = {read=GetViewportSize};
	__property TOnCalcContentBoundsEvent OnCalcContentBounds = {read=FOnCalcContentBounds, write=FOnCalcContentBounds};
	__property TPositionChangeEvent OnViewportPositionChange = {read=FOnViewportPositionChange, write=FOnViewportPositionChange};
public:
	/* TMessageSender.Create */ inline __fastcall virtual TCustomScrollBoxModel()/* overload */ : Fmx::Controls::Model::TDataModel() { }
	
};


class PASCALIMPLEMENTATION TScrollContent : public Fmx::Controls::TContent
{
	typedef Fmx::Controls::TContent inherited;
	
private:
	TCustomPresentedScrollBox* FScrollBox;
	TOnCalcContentBoundsEvent FOnGetClipRect;
	
protected:
	virtual System::Types::TRectF __fastcall GetClipRect();
	virtual Fmx::Types::_di_IControl __fastcall ObjectAtPoint(const System::Types::TPointF &P);
	virtual System::Types::TRectF __fastcall DoGetUpdateRect();
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall ContentChanged();
	bool __fastcall GetIgnoreControlPosition();
	
public:
	__fastcall virtual TScrollContent(System::Classes::TComponent* AOwner);
	virtual bool __fastcall PointInObjectLocal(float X, float Y);
	__property TCustomPresentedScrollBox* ScrollBox = {read=FScrollBox};
	__property TOnCalcContentBoundsEvent OnGetClipRect = {read=FOnGetClipRect, write=FOnGetClipRect};
public:
	/* TControl.Destroy */ inline __fastcall virtual ~TScrollContent() { }
	
private:
	void *__IIgnoreControlPosition;	// Fmx::Controls::Presentation::IIgnoreControlPosition 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6C5DA960-D0E0-457B-9464-D489034510B7}
	operator Fmx::Controls::Presentation::_di_IIgnoreControlPosition()
	{
		Fmx::Controls::Presentation::_di_IIgnoreControlPosition intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Controls::Presentation::IIgnoreControlPosition*(void) { return (Fmx::Controls::Presentation::IIgnoreControlPosition*)&__IIgnoreControlPosition; }
	#endif
	
};


class PASCALIMPLEMENTATION TCustomPresentedScrollBox : public Fmx::Controls::Presentation::TPresentedControl
{
	typedef Fmx::Controls::Presentation::TPresentedControl inherited;
	
private:
	TScrollContent* FContent;
	HIDESBASE TCustomScrollBoxModel* __fastcall GetModel()/* overload */;
	void __fastcall SetAutoHide(const Fmx::Behaviormanager::TBehaviorBoolean Value);
	Fmx::Behaviormanager::TBehaviorBoolean __fastcall GetAutoHide();
	void __fastcall SetBounces(const Fmx::Behaviormanager::TBehaviorBoolean Value);
	Fmx::Behaviormanager::TBehaviorBoolean __fastcall GetBounces();
	void __fastcall SetCalculateContentSize(const bool Value);
	bool __fastcall GetCalculateContentSize();
	void __fastcall SetContentBounds(const System::Types::TRectF &Value);
	System::Types::TRectF __fastcall GetContentBounds();
	void __fastcall SetContentSize(TScrollContentSize* const Value);
	TScrollContentSize* __fastcall GetContentSize();
	void __fastcall SetDisableMouseWheel(const bool Value);
	bool __fastcall GetDisableMouseWheel();
	void __fastcall SetEnabledScroll(const bool Value);
	bool __fastcall GetEnabledScroll();
	void __fastcall SetScrollAnimation(const Fmx::Behaviormanager::TBehaviorBoolean Value);
	Fmx::Behaviormanager::TBehaviorBoolean __fastcall GetScrollAnimation();
	void __fastcall SetScrollDirections(const TScrollDirections Value);
	TScrollDirections __fastcall GetScrollDirections();
	void __fastcall SetShowScrollBars(const bool Value);
	bool __fastcall GetShowScrollBars();
	void __fastcall SetShowSizeGrip(const bool Value);
	bool __fastcall GetShowSizeGrip();
	void __fastcall SetTouchTracking(const Fmx::Behaviormanager::TBehaviorBoolean Value);
	Fmx::Behaviormanager::TBehaviorBoolean __fastcall GetTouchTracking();
	void __fastcall SetViewportPosition(const System::Types::TPointF &Value);
	System::Types::TPointF __fastcall GetViewportPosition();
	System::Types::TSizeF __fastcall GetViewportSize();
	void __fastcall SetOnCalcContentBounds(const TOnCalcContentBoundsEvent Value);
	TOnCalcContentBoundsEvent __fastcall GetOnCalcContentBounds();
	void __fastcall SetOnViewportPositionChange(const TPositionChangeEvent Value);
	TPositionChangeEvent __fastcall GetOnViewportPositionChange();
	void __fastcall ReadSizeValue(System::Classes::TReader* AReader, float &ASize);
	void __fastcall ReadViewportHeight(System::Classes::TReader* Reader);
	void __fastcall ReadViewportWidth(System::Classes::TReader* Reader);
	void __fastcall WriteViewportHeight(System::Classes::TWriter* Writer);
	void __fastcall WriteViewportWidth(System::Classes::TWriter* Writer);
	Fmx::Controls::TControl* __fastcall GetContentLayout();
	Fmx::Stdctrls::TScrollBar* __fastcall GetHScrollBar();
	Fmx::Stdctrls::TScrollBar* __fastcall GetVScrollBar();
	Fmx::Inertialmovement::TAniCalculations* __fastcall GetAniCalculations();
	
protected:
	virtual void __fastcall Loaded();
	virtual void __fastcall PaddingChanged()/* overload */;
	virtual TScrollContent* __fastcall CreateScrollContent();
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall PaintChildren();
	virtual System::Types::TRectF __fastcall DoCalcContentBounds();
	virtual bool __fastcall IsAddToContent(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall ContentAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall ContentInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall ContentBeforeRemoveObject(Fmx::Types::TFmxObject* AObject);
	virtual void __fastcall ContentRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual bool __fastcall IsOpaque();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	__property Fmx::Inertialmovement::TAniCalculations* AniCalculations = {read=GetAniCalculations};
	virtual void __fastcall MouseWheel(System::Classes::TShiftState Shift, int WheelDelta, bool &Handled);
	virtual Fmx::Controls::Model::TDataModelClass __fastcall DefineModelClass();
	virtual void __fastcall InitPresentation(Fmx::Controls::Presentation::TPresentationProxy* APresentation);
	
public:
	__fastcall virtual TCustomPresentedScrollBox(System::Classes::TComponent* AOwner)/* overload */;
	void __fastcall ScrollBy(const float ADX, const float ADY, const bool AAnimated = true);
	void __fastcall ScrollTo(const float AX, const float AY, const bool AAnimated = true);
	void __fastcall ScrollToTop(const bool AAnimated = true);
	void __fastcall ScrollToCenter(const bool AAnimated = true);
	void __fastcall InViewRect(const System::Types::TRectF &ARect, const bool AAnimated = true);
	virtual void __fastcall Sort(Fmx::Types::_di_TFmxObjectSortCompare Compare);
	virtual Fmx::Types::_di_ITabList __fastcall GetTabList();
	void __fastcall UpdateContentSize();
	void __fastcall RealignContent();
	__property TScrollContent* Content = {read=FContent};
	__property System::Types::TRectF ContentBounds = {read=GetContentBounds, write=SetContentBounds};
	void __fastcall ClearContent();
	__property TCustomScrollBoxModel* Model = {read=GetModel};
	__property System::Types::TPointF ViewportPosition = {read=GetViewportPosition, write=SetViewportPosition};
	__property System::Types::TSizeF ViewportSize = {read=GetViewportSize};
	__property Fmx::Stdctrls::TScrollBar* VScrollBar = {read=GetVScrollBar};
	__property Fmx::Stdctrls::TScrollBar* HScrollBar = {read=GetHScrollBar};
	__property Fmx::Controls::TControl* ContentLayout = {read=GetContentLayout};
	__property bool AutoCalculateContentSize = {read=GetCalculateContentSize, write=SetCalculateContentSize, default=1};
	__property Fmx::Behaviormanager::TBehaviorBoolean AutoHide = {read=GetAutoHide, write=SetAutoHide, default=2};
	__property Fmx::Behaviormanager::TBehaviorBoolean Bounces = {read=GetBounces, write=SetBounces, default=2};
	__property TScrollContentSize* ContentSize = {read=GetContentSize, write=SetContentSize};
	__property bool DisableMouseWheel = {read=GetDisableMouseWheel, write=SetDisableMouseWheel, default=0};
	__property bool EnabledScroll = {read=GetEnabledScroll, write=SetEnabledScroll, default=1};
	__property Fmx::Behaviormanager::TBehaviorBoolean ScrollAnimation = {read=GetScrollAnimation, write=SetScrollAnimation, default=2};
	__property TScrollDirections ScrollDirections = {read=GetScrollDirections, write=SetScrollDirections, default=0};
	__property bool ShowScrollBars = {read=GetShowScrollBars, write=SetShowScrollBars, default=1};
	__property bool ShowSizeGrip = {read=GetShowSizeGrip, write=SetShowSizeGrip, default=0};
	__property Fmx::Behaviormanager::TBehaviorBoolean TouchTracking = {read=GetTouchTracking, write=SetTouchTracking, default=2};
	__property TOnCalcContentBoundsEvent OnCalcContentBounds = {read=GetOnCalcContentBounds, write=SetOnCalcContentBounds};
	__property TPositionChangeEvent OnViewportPositionChange = {read=GetOnViewportPositionChange, write=SetOnViewportPositionChange};
public:
	/* TPresentedControl.Destroy */ inline __fastcall virtual ~TCustomPresentedScrollBox() { }
	
};


class PASCALIMPLEMENTATION TPresentedScrollBox : public TCustomPresentedScrollBox
{
	typedef TCustomPresentedScrollBox inherited;
	
__published:
	__property AutoCalculateContentSize = {default=1};
	__property AutoHide = {default=2};
	__property Bounces = {default=2};
	__property ContentSize;
	__property ControlType = {default=0};
	__property DisableMouseWheel = {default=0};
	__property EnabledScroll = {default=1};
	__property ScrollAnimation = {default=2};
	__property ScrollDirections = {default=0};
	__property ShowScrollBars = {default=1};
	__property ShowSizeGrip = {default=0};
	__property TouchTracking = {default=2};
	__property OnViewportPositionChange;
	__property OnCalcContentBounds;
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=1};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Enabled;
	__property EnableDragHighlight = {default=1};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Locked = {default=0};
	__property Margins;
	__property Opacity;
	__property Padding;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
public:
	/* TCustomPresentedScrollBox.Create */ inline __fastcall virtual TPresentedScrollBox(System::Classes::TComponent* AOwner)/* overload */ : TCustomPresentedScrollBox(AOwner) { }
	
public:
	/* TPresentedControl.Destroy */ inline __fastcall virtual ~TPresentedScrollBox() { }
	
};


class PASCALIMPLEMENTATION TCustomPresentedVertScrollBox : public TCustomPresentedScrollBox
{
	typedef TCustomPresentedScrollBox inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	
public:
	__fastcall virtual TCustomPresentedVertScrollBox(System::Classes::TComponent* AOwner)/* overload */;
public:
	/* TPresentedControl.Destroy */ inline __fastcall virtual ~TCustomPresentedVertScrollBox() { }
	
};


class PASCALIMPLEMENTATION TPresentedVertScrollBox : public TCustomPresentedVertScrollBox
{
	typedef TCustomPresentedVertScrollBox inherited;
	
__published:
	__property AutoCalculateContentSize = {default=1};
	__property AutoHide = {default=2};
	__property Bounces = {default=2};
	__property ContentSize;
	__property ControlType = {default=0};
	__property DisableMouseWheel = {default=0};
	__property EnabledScroll = {default=1};
	__property ScrollDirections = {default=2};
	__property ShowScrollBars = {default=1};
	__property ShowSizeGrip = {default=0};
	__property OnViewportPositionChange;
	__property OnCalcContentBounds;
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Enabled;
	__property EnableDragHighlight = {default=1};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Locked = {default=0};
	__property Margins;
	__property Opacity;
	__property Padding;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
public:
	/* TCustomPresentedVertScrollBox.Create */ inline __fastcall virtual TPresentedVertScrollBox(System::Classes::TComponent* AOwner)/* overload */ : TCustomPresentedVertScrollBox(AOwner) { }
	
public:
	/* TPresentedControl.Destroy */ inline __fastcall virtual ~TPresentedVertScrollBox() { }
	
};


class PASCALIMPLEMENTATION TCustomPresentedHorzScrollBox : public TCustomPresentedScrollBox
{
	typedef TCustomPresentedScrollBox inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	
public:
	__fastcall virtual TCustomPresentedHorzScrollBox(System::Classes::TComponent* AOwner)/* overload */;
public:
	/* TPresentedControl.Destroy */ inline __fastcall virtual ~TCustomPresentedHorzScrollBox() { }
	
};


class PASCALIMPLEMENTATION TPresentedHorzScrollBox : public TCustomPresentedHorzScrollBox
{
	typedef TCustomPresentedHorzScrollBox inherited;
	
__published:
	__property AutoCalculateContentSize = {default=1};
	__property AutoHide = {default=2};
	__property Bounces = {default=2};
	__property ContentSize;
	__property ControlType = {default=0};
	__property DisableMouseWheel = {default=0};
	__property EnabledScroll = {default=1};
	__property ScrollDirections = {default=1};
	__property ShowScrollBars = {default=1};
	__property ShowSizeGrip = {default=0};
	__property OnViewportPositionChange;
	__property OnCalcContentBounds;
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Enabled;
	__property EnableDragHighlight = {default=1};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Locked = {default=0};
	__property Margins;
	__property Opacity;
	__property Padding;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
public:
	/* TCustomPresentedHorzScrollBox.Create */ inline __fastcall virtual TPresentedHorzScrollBox(System::Classes::TComponent* AOwner)/* overload */ : TCustomPresentedHorzScrollBox(AOwner) { }
	
public:
	/* TPresentedControl.Destroy */ inline __fastcall virtual ~TPresentedHorzScrollBox() { }
	
};


class PASCALIMPLEMENTATION TCustomPresentedFramedScrollBox : public TCustomPresentedScrollBox
{
	typedef TCustomPresentedScrollBox inherited;
	
protected:
	virtual bool __fastcall IsOpaque();
public:
	/* TCustomPresentedScrollBox.Create */ inline __fastcall virtual TCustomPresentedFramedScrollBox(System::Classes::TComponent* AOwner)/* overload */ : TCustomPresentedScrollBox(AOwner) { }
	
public:
	/* TPresentedControl.Destroy */ inline __fastcall virtual ~TCustomPresentedFramedScrollBox() { }
	
};


class PASCALIMPLEMENTATION TPresentedFramedScrollBox : public TCustomPresentedFramedScrollBox
{
	typedef TCustomPresentedFramedScrollBox inherited;
	
__published:
	__property AutoCalculateContentSize = {default=1};
	__property AutoHide = {default=2};
	__property Bounces = {default=2};
	__property ContentSize;
	__property ControlType = {default=0};
	__property DisableMouseWheel = {default=0};
	__property EnabledScroll = {default=1};
	__property ScrollDirections = {default=0};
	__property ShowScrollBars = {default=1};
	__property ShowSizeGrip = {default=0};
	__property OnViewportPositionChange;
	__property OnCalcContentBounds;
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Enabled;
	__property EnableDragHighlight = {default=1};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Locked = {default=0};
	__property Margins;
	__property Opacity;
	__property Padding;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
public:
	/* TCustomPresentedScrollBox.Create */ inline __fastcall virtual TPresentedFramedScrollBox(System::Classes::TComponent* AOwner)/* overload */ : TCustomPresentedFramedScrollBox(AOwner) { }
	
public:
	/* TPresentedControl.Destroy */ inline __fastcall virtual ~TPresentedFramedScrollBox() { }
	
};


class PASCALIMPLEMENTATION TCustomPresentedFramedVertScrollBox : public TCustomPresentedVertScrollBox
{
	typedef TCustomPresentedVertScrollBox inherited;
	
protected:
	virtual bool __fastcall IsOpaque();
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
public:
	/* TCustomPresentedVertScrollBox.Create */ inline __fastcall virtual TCustomPresentedFramedVertScrollBox(System::Classes::TComponent* AOwner)/* overload */ : TCustomPresentedVertScrollBox(AOwner) { }
	
public:
	/* TPresentedControl.Destroy */ inline __fastcall virtual ~TCustomPresentedFramedVertScrollBox() { }
	
};


class PASCALIMPLEMENTATION TPresentedFramedVertScrollBox : public TCustomPresentedFramedVertScrollBox
{
	typedef TCustomPresentedFramedVertScrollBox inherited;
	
__published:
	__property AutoCalculateContentSize = {default=1};
	__property AutoHide = {default=2};
	__property Bounces = {default=2};
	__property ContentSize;
	__property ControlType = {default=0};
	__property DisableMouseWheel = {default=0};
	__property EnabledScroll = {default=1};
	__property ScrollDirections = {default=2};
	__property ShowScrollBars = {default=1};
	__property ShowSizeGrip = {default=0};
	__property OnViewportPositionChange;
	__property OnCalcContentBounds;
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Enabled;
	__property EnableDragHighlight = {default=1};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Locked = {default=0};
	__property Margins;
	__property Opacity;
	__property Padding;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
public:
	/* TCustomPresentedVertScrollBox.Create */ inline __fastcall virtual TPresentedFramedVertScrollBox(System::Classes::TComponent* AOwner)/* overload */ : TCustomPresentedFramedVertScrollBox(AOwner) { }
	
public:
	/* TPresentedControl.Destroy */ inline __fastcall virtual ~TPresentedFramedVertScrollBox() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word MM_AUTOHIDE_CHANGED = System::Word(0x1701);
static const System::Word MM_BOUNCES_CHANGED = System::Word(0x1702);
static const System::Word MM_DISABLE_MOUSE_WHEEL_CHANGED = System::Word(0x1703);
static const System::Word MM_ENABLED_SCROLL_CHANGED = System::Word(0x1704);
static const System::Word MM_SCROLLBAR_VISIBLE_CHANGED = System::Word(0x1705);
static const System::Word MM_SHOW_SIZE_GRIP_CHANGED = System::Word(0x1706);
static const System::Word MM_SHOW_SCROLLBAR_CHANGED = System::Word(0x1707);
static const System::Word MM_GET_VIEWPORT_POSITION = System::Word(0x1708);
static const System::Word MM_SET_VIEWPORT_POSITION = System::Word(0x1709);
static const System::Word MM_GET_VIEWPORT_SIZE = System::Word(0x170a);
static const System::Word MM_SCROLL_ANIMATION_CHANGED = System::Word(0x170b);
static const System::Word MM_SCROLL_DIRECTIONS_CHANGED = System::Word(0x170c);
static const System::Word MM_SET_CONTENT_BOUNDS = System::Word(0x170d);
static const System::Word MM_TOUCH_TRACKING_CHANGED = System::Word(0x170e);
static const System::Word MM_SCROLLBOX_USER = System::Word(0x170f);
static const System::Word PM_SCROLL_BY = System::Word(0x1001);
static const System::Word PM_SCROLL_IN_RECT = System::Word(0x1002);
static const System::Word PM_SET_CONTENT = System::Word(0x1003);
static const System::Word PM_GET_CONTENT_LAYOUT = System::Word(0x1004);
static const System::Word PM_GET_VSCROLLBAR = System::Word(0x1005);
static const System::Word PM_GET_HSCROLLBAR = System::Word(0x1006);
static const System::Word PM_GET_ANICALCULATIONS = System::Word(0x1007);
static const System::Word PM_BEGIN_PAINT_CHILDREN = System::Word(0x1008);
static const System::Word PM_END_PAINT_CHILDREN = System::Word(0x1009);
static const System::Word PM_USER_SCROLLBOX = System::Word(0x100a);
extern DELPHI_PACKAGE System::Types::TRectF __fastcall NormalizeInViewRect(const System::Types::TRectF &AContentRect, const System::Types::TSizeF &AViewportSize, const System::Types::TRectF &AWishedViewPortRect);
}	/* namespace Scrollbox */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_SCROLLBOX)
using namespace Fmx::Scrollbox;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_ScrollboxHPP
