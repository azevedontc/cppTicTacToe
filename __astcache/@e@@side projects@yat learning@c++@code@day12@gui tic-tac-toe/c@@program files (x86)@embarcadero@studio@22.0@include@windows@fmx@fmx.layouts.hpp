// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Layouts.pas' rev: 35.00 (Windows)

#ifndef Fmx_LayoutsHPP
#define Fmx_LayoutsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <System.SysUtils.hpp>
#include <System.Math.Vectors.hpp>
#include <FMX.Types.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Platform.hpp>
#include <FMX.Controls.hpp>
#include <FMX.InertialMovement.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Layouts
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TLayout;
class DELPHICLASS TScaledLayout;
class DELPHICLASS TScrollContent;
class DELPHICLASS TScrollCalculations;
class DELPHICLASS TCustomScrollBox;
class DELPHICLASS TScrollBox;
class DELPHICLASS TVertScrollBox;
class DELPHICLASS THorzScrollBox;
class DELPHICLASS TFramedScrollBox;
class DELPHICLASS TFramedVertScrollBox;
class DELPHICLASS TGridLayout;
class DELPHICLASS TGridPanelLayout;
struct TFlowLayoutRules;
class DELPHICLASS TFlowLayoutBreak;
class DELPHICLASS TFlowLayout;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TLayout : public Fmx::Controls::TControl
{
	typedef Fmx::Controls::TControl inherited;
	
protected:
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TLayout(System::Classes::TComponent* AOwner);
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property Hint = {default=0};
	__property HitTest = {default=0};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
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
	/* TControl.Destroy */ inline __fastcall virtual ~TLayout() { }
	
};


class PASCALIMPLEMENTATION TScaledLayout : public Fmx::Controls::TControl
{
	typedef Fmx::Controls::TControl inherited;
	
private:
	float FOriginalWidth;
	float FOriginalHeight;
	void __fastcall SetOriginalWidth(const float Value);
	void __fastcall SetOriginalHeight(const float Value);
	
protected:
	virtual void __fastcall DoRealign();
	virtual bool __fastcall GetChildrenMatrix(System::Math::Vectors::TMatrix &Matrix, bool &Simple);
	virtual void __fastcall SetHeight(const float Value);
	virtual void __fastcall SetWidth(const float Value);
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TScaledLayout(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TScaledLayout();
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property Hint = {default=0};
	__property HitTest = {default=0};
	__property Padding;
	__property Opacity;
	__property float OriginalWidth = {read=FOriginalWidth, write=SetOriginalWidth};
	__property float OriginalHeight = {read=FOriginalHeight, write=SetOriginalHeight};
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
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
};


class PASCALIMPLEMENTATION TScrollContent : public Fmx::Controls::TContent
{
	typedef Fmx::Controls::TContent inherited;
	
private:
	TCustomScrollBox* FScrollBox;
	bool FIsContentChanged;
	
protected:
	virtual System::Types::TRectF __fastcall GetClipRect();
	virtual System::Types::TRectF __fastcall GetChildrenRect();
	virtual Fmx::Types::_di_IControl __fastcall ObjectAtPoint(const System::Types::TPointF &P);
	virtual System::Types::TRectF __fastcall DoGetUpdateRect();
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRealign();
	virtual void __fastcall ContentChanged();
	__property bool IsContentChanged = {read=FIsContentChanged, write=FIsContentChanged, nodefault};
	
public:
	__fastcall virtual TScrollContent(System::Classes::TComponent* AOwner);
	__property TCustomScrollBox* ScrollBox = {read=FScrollBox};
	virtual bool __fastcall PointInObjectLocal(float X, float Y);
public:
	/* TControl.Destroy */ inline __fastcall virtual ~TScrollContent() { }
	
};


class PASCALIMPLEMENTATION TScrollCalculations : public Fmx::Inertialmovement::TAniCalculations
{
	typedef Fmx::Inertialmovement::TAniCalculations inherited;
	
private:
	TCustomScrollBox* FScrollBox;
	
protected:
	virtual void __fastcall DoChanged();
	virtual void __fastcall DoStart();
	virtual void __fastcall DoStop();
	
public:
	__fastcall virtual TScrollCalculations(System::Classes::TPersistent* AOwner);
	__property TCustomScrollBox* ScrollBox = {read=FScrollBox};
public:
	/* TAniCalculations.Destroy */ inline __fastcall virtual ~TScrollCalculations() { }
	
};


typedef void __fastcall (__closure *TPositionChangeEvent)(System::TObject* Sender, const System::Types::TPointF &OldViewportPosition, const System::Types::TPointF &NewViewportPosition, const bool ContentSizeChanged);

typedef void __fastcall (__closure *TOnCalcContentBoundsEvent)(System::TObject* Sender, System::Types::TRectF &ContentBounds);

class PASCALIMPLEMENTATION TCustomScrollBox : public Fmx::Controls::TStyledControl
{
	typedef Fmx::Controls::TStyledControl inherited;
	
	
private:
	struct DECLSPEC_DRECORD TScrollInfo
	{
	public:
		Fmx::Stdctrls::TScrollBar* Scroll;
		Fmx::Types::TAlignLayout Align;
		System::Types::TRectF Margins;
	};
	
	
	typedef System::DynamicArray<TScrollInfo> _TCustomScrollBox__1;
	
	typedef System::DynamicArray<TScrollInfo> _TCustomScrollBox__2;
	
	
private:
	static const System::Int8 SmallChangeFraction = System::Int8(0x5);
	
	static System::Uitypes::TAlphaColor DesignBorderColor;
	Fmx::Platform::_di_IFMXSystemInformationService FSystemInfoSrv;
	bool FDisableMouseWheel;
	TScrollCalculations* FAniCalculations;
	System::Types::TPointF FLastViewportPosition;
	bool FInInternalAlign;
	Fmx::Controls::TControl* FBackground;
	TScrollContent* FContent;
	Fmx::Controls::TControl* FContentLayout;
	System::Types::TRectF FContentBounds;
	System::Types::TSizeF FCachedContentSize;
	bool FCachedAutoShowing;
	System::Types::TSizeF FOriginalContentLayoutSize;
	bool FShowScrollBars;
	bool FAutoHide;
	_TCustomScrollBox__1 FHScrollInfo;
	_TCustomScrollBox__2 FVScrollInfo;
	System::Types::TRectF FContentMargins;
	bool FVDisablePaint;
	bool FHDisablePaint;
	bool FGDisablePaint;
	Fmx::Controls::TControl* FSizeGripContent;
	Fmx::Controls::TControl* FSizeGripParent;
	Fmx::Controls::TControl* FSizeGrip;
	bool FShowSizeGrip;
	TPositionChangeEvent FOnViewportPositionChange;
	System::Classes::TNotifyEvent FOnHScrollChange;
	System::Classes::TNotifyEvent FOnVScrollChange;
	TOnCalcContentBoundsEvent FOnCalcContentBounds;
	bool FMouseEvents;
	bool FContentCalculated;
	int __fastcall HScrollIndex();
	int __fastcall VScrollIndex();
	Fmx::Types::TAlignLayout __fastcall GetHScrollAlign();
	Fmx::Types::TAlignLayout __fastcall GetVScrollAlign();
	System::Types::TRectF __fastcall GetHScrollMargins();
	System::Types::TRectF __fastcall GetVScrollMargins();
	float __fastcall GetSceneScale();
	void __fastcall SetShowScrollBars(const bool Value);
	void __fastcall SetShowSizeGrip(const bool Value);
	Fmx::Stdctrls::TScrollBar* __fastcall GetVScrollBar();
	Fmx::Stdctrls::TScrollBar* __fastcall GetHScrollBar();
	void __fastcall UpdateSizeGrip();
	void __fastcall UpdateVScrollBar(const float Value, const float ViewportSize);
	void __fastcall UpdateHScrollBar(const float Value, const float ViewportSize);
	void __fastcall InternalAlign();
	void __fastcall HScrollChangeProc(System::TObject* Sender);
	void __fastcall VScrollChangeProc(System::TObject* Sender);
	void __fastcall MousePosToAni(float &X, float &Y);
	void __fastcall SetAutoHide(const bool Value);
	void __fastcall SaveDisablePaint();
	void __fastcall RestoreDisablePaint();
	void __fastcall SetDisablePaint();
	System::Types::TPointF __fastcall GetViewportPosition();
	void __fastcall SetViewportPosition(const System::Types::TPointF &Value);
	void __fastcall StartScrolling();
	void __fastcall StopScrolling();
	void __fastcall UpdateOriginalContentLayoutSize(const bool Force);
	void __fastcall ReadPartSize(System::Classes::TReader* Reader, float &Size);
	void __fastcall ReadContentLayoutHeight(System::Classes::TReader* Reader);
	void __fastcall ReadContentLayoutWidth(System::Classes::TReader* Reader);
	void __fastcall WriteContentLayoutHeight(System::Classes::TWriter* Writer);
	void __fastcall WriteContentLayoutWidth(System::Classes::TWriter* Writer);
	
protected:
	virtual void __fastcall AniMouseDown(const bool Touch, const float X, const float Y);
	virtual void __fastcall AniMouseMove(const bool Touch, const float X, const float Y);
	virtual void __fastcall AniMouseUp(const bool Touch, const float X, const float Y);
	Fmx::Platform::TScrollingBehaviours __fastcall GetScrollingBehaviours();
	virtual void __fastcall Loaded();
	virtual void __fastcall PaddingChanged()/* overload */;
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRealign();
	virtual bool __fastcall IsAddToContent(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall ContentAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall ContentInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall ContentBeforeRemoveObject(Fmx::Types::TFmxObject* AObject);
	virtual void __fastcall ContentRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall HScrollChange();
	virtual void __fastcall VScrollChange();
	virtual void __fastcall ViewportPositionChange(const System::Types::TPointF &OldViewportPosition, const System::Types::TPointF &NewViewportPosition, const bool ContentSizeChanged);
	virtual void __fastcall CMGesture(Fmx::Types::TGestureEventInfo &EventInfo);
	virtual void __fastcall Painting();
	virtual void __fastcall AfterPaint();
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual bool __fastcall IsOpaque();
	System::Types::TRectF __fastcall ContentRect();
	float __fastcall VScrollBarValue();
	float __fastcall HScrollBarValue();
	virtual TScrollContent* __fastcall CreateScrollContent();
	virtual TScrollCalculations* __fastcall CreateAniCalculations();
	virtual void __fastcall DoUpdateAniCalculations(TScrollCalculations* const AAniCalculations);
	void __fastcall UpdateAniCalculations();
	virtual System::Types::TRectF __fastcall DoCalcContentBounds();
	virtual void __fastcall DoRealignContent(const System::Types::TRectF &R);
	System::Types::TRectF __fastcall GetContentBounds();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall DoMouseLeave();
	virtual void __fastcall MouseWheel(System::Classes::TShiftState Shift, int WheelDelta, bool &Handled);
	__property Fmx::Controls::TControl* ContentLayout = {read=FContentLayout};
	__property TScrollContent* Content = {read=FContent};
	__property Fmx::Types::TAlignLayout HScrollAlign = {read=GetHScrollAlign, nodefault};
	__property Fmx::Types::TAlignLayout VScrollAlign = {read=GetVScrollAlign, nodefault};
	__property System::Types::TRectF HScrollMargins = {read=GetHScrollMargins};
	__property System::Types::TRectF VScrollMargins = {read=GetVScrollMargins};
	__property bool InInternalAlign = {read=FInInternalAlign, nodefault};
	__property Fmx::Stdctrls::TScrollBar* HScrollBar = {read=GetHScrollBar};
	__property Fmx::Stdctrls::TScrollBar* VScrollBar = {read=GetVScrollBar};
	
public:
	__fastcall virtual TCustomScrollBox(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TCustomScrollBox();
	__property TScrollCalculations* AniCalculations = {read=FAniCalculations};
	__property System::Types::TPointF ViewportPosition = {read=GetViewportPosition, write=SetViewportPosition};
	virtual void __fastcall Sort(Fmx::Types::_di_TFmxObjectSortCompare Compare);
	void __fastcall Center();
	void __fastcall ScrollTo _DEPRECATED_ATTRIBUTE1("use ScrollBy(const Dx, Dy: Single)") (const float Dx, const float Dy);
	void __fastcall ScrollBy(const float Dx, const float Dy);
	void __fastcall InViewRect(const System::Types::TRectF &Rect);
	float __fastcall ClientWidth();
	float __fastcall ClientHeight();
	virtual Fmx::Types::_di_ITabList __fastcall GetTabList();
	__property System::Types::TRectF ContentBounds = {read=GetContentBounds};
	void __fastcall InvalidateContentSize();
	void __fastcall RealignContent();
	__property bool AutoHide = {read=FAutoHide, write=SetAutoHide, default=1};
	__property bool DisableMouseWheel = {read=FDisableMouseWheel, write=FDisableMouseWheel, default=0};
	__property bool ShowScrollBars = {read=FShowScrollBars, write=SetShowScrollBars, default=1};
	__property bool ShowSizeGrip = {read=FShowSizeGrip, write=SetShowSizeGrip, default=0};
	__property TPositionChangeEvent OnViewportPositionChange = {read=FOnViewportPositionChange, write=FOnViewportPositionChange};
	__property System::Classes::TNotifyEvent OnHScrollChange = {read=FOnHScrollChange, write=FOnHScrollChange};
	__property System::Classes::TNotifyEvent OnVScrollChange = {read=FOnVScrollChange, write=FOnVScrollChange};
	__property TOnCalcContentBoundsEvent OnCalcContentBounds = {read=FOnCalcContentBounds, write=FOnCalcContentBounds};
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
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
};


class PASCALIMPLEMENTATION TScrollBox : public TCustomScrollBox
{
	typedef TCustomScrollBox inherited;
	
protected:
	virtual void __fastcall Paint();
	
public:
	__property Content;
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property AutoHide = {default=1};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DisableMouseWheel = {default=0};
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
	__property ShowScrollBars = {default=1};
	__property ShowSizeGrip = {default=0};
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
	__property OnViewportPositionChange;
	__property OnHScrollChange;
	__property OnVScrollChange;
	__property OnCalcContentBounds;
public:
	/* TCustomScrollBox.Create */ inline __fastcall virtual TScrollBox(System::Classes::TComponent* AOwner)/* overload */ : TCustomScrollBox(AOwner) { }
	/* TCustomScrollBox.Destroy */ inline __fastcall virtual ~TScrollBox() { }
	
};


class PASCALIMPLEMENTATION TVertScrollBox : public TCustomScrollBox
{
	typedef TCustomScrollBox inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	virtual System::Types::TRectF __fastcall DoCalcContentBounds();
	virtual void __fastcall Paint();
	virtual void __fastcall DoUpdateAniCalculations(TScrollCalculations* const AAniCalculations);
	
public:
	__property Content;
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property AutoHide = {default=1};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DisableMouseWheel = {default=0};
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
	__property ShowScrollBars = {default=1};
	__property ShowSizeGrip = {default=0};
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
	__property OnViewportPositionChange;
	__property OnVScrollChange;
	__property OnCalcContentBounds;
public:
	/* TCustomScrollBox.Create */ inline __fastcall virtual TVertScrollBox(System::Classes::TComponent* AOwner)/* overload */ : TCustomScrollBox(AOwner) { }
	/* TCustomScrollBox.Destroy */ inline __fastcall virtual ~TVertScrollBox() { }
	
};


class PASCALIMPLEMENTATION THorzScrollBox : public TCustomScrollBox
{
	typedef TCustomScrollBox inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	virtual System::Types::TRectF __fastcall DoCalcContentBounds();
	virtual void __fastcall Paint();
	virtual void __fastcall DoUpdateAniCalculations(TScrollCalculations* const AAniCalculations);
	
public:
	__property Content;
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property AutoHide = {default=1};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DisableMouseWheel = {default=0};
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
	__property ShowScrollBars = {default=1};
	__property ShowSizeGrip = {default=0};
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
	__property OnViewportPositionChange;
	__property OnHScrollChange;
	__property OnCalcContentBounds;
public:
	/* TCustomScrollBox.Create */ inline __fastcall virtual THorzScrollBox(System::Classes::TComponent* AOwner)/* overload */ : TCustomScrollBox(AOwner) { }
	/* TCustomScrollBox.Destroy */ inline __fastcall virtual ~THorzScrollBox() { }
	
};


class PASCALIMPLEMENTATION TFramedScrollBox : public TCustomScrollBox
{
	typedef TCustomScrollBox inherited;
	
protected:
	virtual bool __fastcall IsOpaque();
	
public:
	__property Content;
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property AutoHide = {default=1};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DisableMouseWheel = {default=0};
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
	__property ShowScrollBars = {default=1};
	__property ShowSizeGrip = {default=0};
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
	__property OnViewportPositionChange;
	__property OnHScrollChange;
	__property OnVScrollChange;
	__property OnCalcContentBounds;
public:
	/* TCustomScrollBox.Create */ inline __fastcall virtual TFramedScrollBox(System::Classes::TComponent* AOwner)/* overload */ : TCustomScrollBox(AOwner) { }
	/* TCustomScrollBox.Destroy */ inline __fastcall virtual ~TFramedScrollBox() { }
	
};


class PASCALIMPLEMENTATION TFramedVertScrollBox : public TVertScrollBox
{
	typedef TVertScrollBox inherited;
	
protected:
	virtual bool __fastcall IsOpaque();
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
public:
	/* TCustomScrollBox.Create */ inline __fastcall virtual TFramedVertScrollBox(System::Classes::TComponent* AOwner)/* overload */ : TVertScrollBox(AOwner) { }
	/* TCustomScrollBox.Destroy */ inline __fastcall virtual ~TFramedVertScrollBox() { }
	
};


class PASCALIMPLEMENTATION TGridLayout : public Fmx::Controls::TControl
{
	typedef Fmx::Controls::TControl inherited;
	
private:
	float FItemWidth;
	float FItemHeight;
	Fmx::Controls::TOrientation FOrientation;
	void __fastcall SetItemHeight(const float Value);
	void __fastcall SetItemWidth(const float Value);
	void __fastcall SetOrientation(const Fmx::Controls::TOrientation Value);
	
protected:
	virtual void __fastcall DoRealign();
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TGridLayout(System::Classes::TComponent* AOwner);
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property float ItemHeight = {read=FItemHeight, write=SetItemHeight};
	__property float ItemWidth = {read=FItemWidth, write=SetItemWidth};
	__property Padding;
	__property Opacity;
	__property Fmx::Controls::TOrientation Orientation = {read=FOrientation, write=SetOrientation, nodefault};
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
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
	/* TControl.Destroy */ inline __fastcall virtual ~TGridLayout() { }
	
};


class PASCALIMPLEMENTATION TGridPanelLayout : public Fmx::Controls::TControl
{
	typedef Fmx::Controls::TControl inherited;
	
	
public:
	enum class DECLSPEC_DENUM TSizeStyle : unsigned char { Absolute, Percent, Auto };
	
	class DELPHICLASS EGridLayoutException;
#ifndef _WIN64
	#pragma pack(push,4)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION EGridLayoutException : public System::Sysutils::Exception
	{
		typedef System::Sysutils::Exception inherited;
		
	public:
		/* Exception.Create */ inline __fastcall EGridLayoutException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
		/* Exception.CreateFmt */ inline __fastcall EGridLayoutException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
		/* Exception.CreateRes */ inline __fastcall EGridLayoutException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
		/* Exception.CreateRes */ inline __fastcall EGridLayoutException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
		/* Exception.CreateResFmt */ inline __fastcall EGridLayoutException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
		/* Exception.CreateResFmt */ inline __fastcall EGridLayoutException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
		/* Exception.CreateHelp */ inline __fastcall EGridLayoutException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
		/* Exception.CreateFmtHelp */ inline __fastcall EGridLayoutException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
		/* Exception.CreateResHelp */ inline __fastcall EGridLayoutException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
		/* Exception.CreateResHelp */ inline __fastcall EGridLayoutException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
		/* Exception.CreateResFmtHelp */ inline __fastcall EGridLayoutException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
		/* Exception.CreateResFmtHelp */ inline __fastcall EGridLayoutException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
		/* Exception.Destroy */ inline __fastcall virtual ~EGridLayoutException() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	class DELPHICLASS TCellItem;
	class PASCALIMPLEMENTATION TCellItem : public System::Classes::TCollectionItem
	{
		typedef System::Classes::TCollectionItem inherited;
		
	private:
		TGridPanelLayout::TSizeStyle FSizeStyle;
		double FValue;
		float FSize;
		bool FAutoAdded;
		
	protected:
		virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
		void __fastcall SetSizeStyle(TGridPanelLayout::TSizeStyle Value);
		void __fastcall SetValue(double Value);
		__property float Size = {read=FSize, write=FSize};
		__property bool AutoAdded = {read=FAutoAdded, write=FAutoAdded, nodefault};
		
	public:
		__fastcall virtual TCellItem(System::Classes::TCollection* Collection);
		
	__published:
		__property TGridPanelLayout::TSizeStyle SizeStyle = {read=FSizeStyle, write=SetSizeStyle, default=1};
		__property double Value = {read=FValue, write=SetValue};
	public:
		/* TCollectionItem.Destroy */ inline __fastcall virtual ~TCellItem() { }
		
	};
	
	
	class DELPHICLASS TRowItem;
	class PASCALIMPLEMENTATION TRowItem : public TGridPanelLayout::TCellItem
	{
		typedef TGridPanelLayout::TCellItem inherited;
		
	public:
		/* TCellItem.Create */ inline __fastcall virtual TRowItem(System::Classes::TCollection* Collection) : TGridPanelLayout::TCellItem(Collection) { }
		
	public:
		/* TCollectionItem.Destroy */ inline __fastcall virtual ~TRowItem() { }
		
	};
	
	
	class DELPHICLASS TColumnItem;
	class PASCALIMPLEMENTATION TColumnItem : public TGridPanelLayout::TCellItem
	{
		typedef TGridPanelLayout::TCellItem inherited;
		
	public:
		/* TCellItem.Create */ inline __fastcall virtual TColumnItem(System::Classes::TCollection* Collection) : TGridPanelLayout::TCellItem(Collection) { }
		
	public:
		/* TCollectionItem.Destroy */ inline __fastcall virtual ~TColumnItem() { }
		
	};
	
	
	class DELPHICLASS TCellCollection;
#ifndef _WIN64
	#pragma pack(push,4)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TCellCollection : public System::Classes::TOwnedCollection
	{
		typedef System::Classes::TOwnedCollection inherited;
		
public:
		TGridPanelLayout::TCellItem* operator[](int Index) { return this->Items[Index]; }
		
	protected:
		DYNAMIC int __fastcall GetAttrCount();
		DYNAMIC System::UnicodeString __fastcall GetAttr(int Index);
		DYNAMIC System::UnicodeString __fastcall GetItemAttr(int Index, int ItemIndex);
		HIDESBASE TGridPanelLayout::TCellItem* __fastcall GetItem(int Index);
		HIDESBASE void __fastcall SetItem(int Index, TGridPanelLayout::TCellItem* Value);
		virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
		
	public:
		HIDESBASE TGridPanelLayout* __fastcall Owner();
		__property TGridPanelLayout::TCellItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	public:
		/* TOwnedCollection.Create */ inline __fastcall TCellCollection(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : System::Classes::TOwnedCollection(AOwner, ItemClass) { }
		
	public:
		/* TCollection.Destroy */ inline __fastcall virtual ~TCellCollection() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	typedef int TCellSpan;
	
	class DELPHICLASS TRowCollection;
#ifndef _WIN64
	#pragma pack(push,4)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TRowCollection : public TGridPanelLayout::TCellCollection
	{
		typedef TGridPanelLayout::TCellCollection inherited;
		
	protected:
		DYNAMIC System::UnicodeString __fastcall GetItemAttr(int Index, int ItemIndex);
		virtual void __fastcall Notify(System::Classes::TCollectionItem* Item, System::Generics::Collections::TCollectionNotification Action);
		
	public:
		__fastcall TRowCollection(System::Classes::TPersistent* AOwner);
		HIDESBASE TGridPanelLayout::TRowItem* __fastcall Add();
	public:
		/* TCollection.Destroy */ inline __fastcall virtual ~TRowCollection() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	class DELPHICLASS TColumnCollection;
#ifndef _WIN64
	#pragma pack(push,4)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TColumnCollection : public TGridPanelLayout::TCellCollection
	{
		typedef TGridPanelLayout::TCellCollection inherited;
		
	protected:
		DYNAMIC System::UnicodeString __fastcall GetItemAttr(int Index, int ItemIndex);
		virtual void __fastcall Notify(System::Classes::TCollectionItem* Item, System::Generics::Collections::TCollectionNotification Action);
		
	public:
		__fastcall TColumnCollection(System::Classes::TPersistent* AOwner);
		HIDESBASE TGridPanelLayout::TColumnItem* __fastcall Add();
	public:
		/* TCollection.Destroy */ inline __fastcall virtual ~TColumnCollection() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	class DELPHICLASS TControlItem;
#ifndef _WIN64
	#pragma pack(push,4)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TControlItem : public System::Classes::TCollectionItem
	{
		typedef System::Classes::TCollectionItem inherited;
		
	private:
		Fmx::Controls::TControl* FControl;
		int FColumn;
		int FRow;
		TGridPanelLayout::TCellSpan FColumnSpan;
		TGridPanelLayout::TCellSpan FRowSpan;
		int FPushed;
		TGridPanelLayout* __fastcall GetGridPanelLayout();
		bool __fastcall GetPushed();
		void __fastcall SetColumn(int Value);
		void __fastcall SetColumnSpan(TGridPanelLayout::TCellSpan Value);
		void __fastcall SetControl(Fmx::Controls::TControl* Value);
		void __fastcall SetRow(int Value);
		void __fastcall SetRowSpan(TGridPanelLayout::TCellSpan Value);
		
	protected:
		virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
		void __fastcall InternalSetLocation(int AColumn, int ARow, bool APushed, bool MoveExisting);
		__property TGridPanelLayout* GridPanelLayout = {read=GetGridPanelLayout};
		__property bool Pushed = {read=GetPushed, nodefault};
		
	public:
		__fastcall virtual TControlItem(System::Classes::TCollection* Collection);
		__fastcall virtual ~TControlItem();
		void __fastcall SetLocation(int AColumn, int ARow, bool APushed = false);
		
	__published:
		__property int Column = {read=FColumn, write=SetColumn, nodefault};
		__property TGridPanelLayout::TCellSpan ColumnSpan = {read=FColumnSpan, write=SetColumnSpan, default=1};
		__property Fmx::Controls::TControl* Control = {read=FControl, write=SetControl};
		__property int Row = {read=FRow, write=SetRow, nodefault};
		__property TGridPanelLayout::TCellSpan RowSpan = {read=FRowSpan, write=SetRowSpan, default=1};
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	class DELPHICLASS TControlCollection;
#ifndef _WIN64
	#pragma pack(push,4)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TControlCollection : public System::Classes::TOwnedCollection
	{
		typedef System::Classes::TOwnedCollection inherited;
		
public:
		TGridPanelLayout::TControlItem* operator[](int Index) { return this->Items[Index]; }
		
	protected:
		Fmx::Controls::TControl* __fastcall GetControl(int AColumn, int ARow);
		TGridPanelLayout::TControlItem* __fastcall GetControlItem(int AColumn, int ARow);
		HIDESBASE TGridPanelLayout::TControlItem* __fastcall GetItem(int Index);
		void __fastcall SetControl(int AColumn, int ARow, Fmx::Controls::TControl* Value);
		HIDESBASE void __fastcall SetItem(int Index, TGridPanelLayout::TControlItem* Value);
		virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
		
	public:
		__fastcall TControlCollection(System::Classes::TPersistent* AOwner);
		HIDESBASE TGridPanelLayout::TControlItem* __fastcall Add();
		void __fastcall AddControl(Fmx::Controls::TControl* AControl, int AColumn = 0xffffffff, int ARow = 0xffffffff);
		void __fastcall RemoveControl(Fmx::Controls::TControl* AControl);
		int __fastcall IndexOf(Fmx::Controls::TControl* AControl);
		HIDESBASE TGridPanelLayout* __fastcall Owner();
		__property Fmx::Controls::TControl* Controls[int AColumn][int ARow] = {read=GetControl, write=SetControl};
		__property TGridPanelLayout::TControlItem* ControlItems[int AColumn][int ARow] = {read=GetControlItem};
		__property TGridPanelLayout::TControlItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	public:
		/* TCollection.Destroy */ inline __fastcall virtual ~TControlCollection() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	enum class DECLSPEC_DENUM TExpandStyle : unsigned char { AddRows, AddColumns, FixedSize };
	
	
private:
	bool FRecalcCellSizes;
	TExpandStyle FExpandStyle;
	TRowCollection* FRowCollection;
	TColumnCollection* FColumnCollection;
	TControlCollection* FControlCollection;
	void __fastcall SetColumnCollection(TColumnCollection* const Value);
	void __fastcall SetControlCollection(TControlCollection* const Value);
	void __fastcall SetRowCollection(TRowCollection* const Value);
	int __fastcall GetCellCount();
	System::Types::TPointF __fastcall GetCellSizes(int AColumn, int ARow);
	System::Types::TRectF __fastcall GetCellRect(int AColumn, int ARow);
	int __fastcall GetColumnSpanIndex(int AColumn, int ARow);
	int __fastcall GetRowSpanIndex(int AColumn, int ARow);
	void __fastcall RecalcCellDimensions(const System::Types::TRectF &Rect);
	
protected:
	virtual void __fastcall DoRealign();
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	TColumnItem* __fastcall AutoAddColumn();
	TRowItem* __fastcall AutoAddRow();
	void __fastcall RemoveEmptyAutoAddColumns();
	void __fastcall RemoveEmptyAutoAddRows();
	int __fastcall CellToCellIndex(int AColumn, int ARow);
	void __fastcall CellIndexToCell(int AIndex, int &AColumn, int &ARow);
	virtual void __fastcall DoPaint();
	virtual void __fastcall Resize();
	
public:
	__fastcall virtual TGridPanelLayout(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TGridPanelLayout();
	bool __fastcall IsColumnEmpty(int AColumn);
	bool __fastcall IsRowEmpty(int ARow);
	void __fastcall UpdateControlsColumn(int AColumn);
	void __fastcall UpdateControlsRow(int ARow);
	__property int ColumnSpanIndex[int AColumn][int ARow] = {read=GetColumnSpanIndex};
	__property int CellCount = {read=GetCellCount, nodefault};
	__property System::Types::TPointF CellSize[int AColumn][int ARow] = {read=GetCellSizes};
	__property System::Types::TRectF CellRect[int AColumn][int ARow] = {read=GetCellRect};
	__property int RowSpanIndex[int AColumn][int ARow] = {read=GetRowSpanIndex};
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
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
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property TColumnCollection* ColumnCollection = {read=FColumnCollection, write=SetColumnCollection};
	__property TControlCollection* ControlCollection = {read=FControlCollection, write=SetControlCollection};
	__property TExpandStyle ExpandStyle = {read=FExpandStyle, write=FExpandStyle, default=0};
	__property TRowCollection* RowCollection = {read=FRowCollection, write=SetRowCollection};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
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


enum class DECLSPEC_DENUM TFlowJustify : unsigned char { Left, Right, Center, Justify };

enum class DECLSPEC_DENUM TFlowDirection : unsigned char { LeftToRight, RightToLeft };

struct DECLSPEC_DRECORD TFlowLayoutRules
{
public:
	TFlowJustify Justify;
	TFlowJustify JustifyLast;
	TFlowDirection Direction;
	float HorizontalGap;
	float VerticalGap;
};


class PASCALIMPLEMENTATION TFlowLayoutBreak : public Fmx::Controls::TControl
{
	typedef Fmx::Controls::TControl inherited;
	
private:
	TFlowLayoutRules FRules;
	bool FChangesRules;
	
protected:
	void __fastcall SetChangesRules(bool AChangesRules);
	virtual void __fastcall Paint();
	virtual bool __fastcall VisibleStored();
	
public:
	__fastcall virtual TFlowLayoutBreak(System::Classes::TComponent* AOwner);
	
__published:
	__property bool ChangesRules = {read=FChangesRules, write=SetChangesRules, nodefault};
	__property TFlowJustify Justify = {read=FRules.Justify, write=FRules.Justify, nodefault};
	__property TFlowJustify JustifyLastLine = {read=FRules.JustifyLast, write=FRules.JustifyLast, nodefault};
	__property TFlowDirection FlowDirection = {read=FRules.Direction, write=FRules.Direction, nodefault};
	__property float HorizontalGap = {read=FRules.HorizontalGap, write=FRules.HorizontalGap};
	__property float VerticalGap = {read=FRules.VerticalGap, write=FRules.VerticalGap};
	__property Visible = {default=1};
public:
	/* TControl.Destroy */ inline __fastcall virtual ~TFlowLayoutBreak() { }
	
};


class PASCALIMPLEMENTATION TFlowLayout : public Fmx::Controls::TControl
{
	typedef Fmx::Controls::TControl inherited;
	
private:
	TFlowLayoutRules FRules;
	
protected:
	virtual void __fastcall DoRealign();
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall Paint();
	void __fastcall SetJustify(TFlowJustify AJustify);
	void __fastcall SetJustifyLast(TFlowJustify AJustify);
	void __fastcall SetFlowDirection(TFlowDirection ADirection);
	void __fastcall SetHGap(float AHGap);
	void __fastcall SetVGap(float AVGap);
	
public:
	__fastcall virtual TFlowLayout(System::Classes::TComponent* AOwner);
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
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
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TFlowJustify Justify = {read=FRules.Justify, write=SetJustify, nodefault};
	__property TFlowJustify JustifyLastLine = {read=FRules.JustifyLast, write=SetJustifyLast, nodefault};
	__property TFlowDirection FlowDirection = {read=FRules.Direction, write=SetFlowDirection, nodefault};
	__property float HorizontalGap = {read=FRules.HorizontalGap, write=SetHGap};
	__property float VerticalGap = {read=FRules.VerticalGap, write=SetVGap};
	__property ParentShowHint = {default=1};
	__property ShowHint;
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
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TControl.Destroy */ inline __fastcall virtual ~TFlowLayout() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Layouts */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_LAYOUTS)
using namespace Fmx::Layouts;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_LayoutsHPP
