// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.ExtCtrls.pas' rev: 35.00 (Windows)

#ifndef Fmx_ExtctrlsHPP
#define Fmx_ExtctrlsHPP

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
#include <System.Rtti.hpp>
#include <FMX.Types.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Graphics.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Menus.hpp>
#include <FMX.Controls.hpp>
#include <FMX.ActnList.hpp>
#include <FMX.Pickers.hpp>
#include <FMX.Controls.Presentation.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Extctrls
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDropTarget;
class DELPHICLASS TPlotGrid;
class DELPHICLASS TImageViewer;
class DELPHICLASS TPopupBox;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TDropTarget : public Fmx::Controls::TTextControl
{
	typedef Fmx::Controls::TTextControl inherited;
	
private:
	Fmx::Types::TDragDropEvent FOnDrop;
	System::UnicodeString FFilter;
	int FFilterIndex;
	
protected:
	System::UnicodeString __fastcall CurrentFilter();
	virtual void __fastcall DragOver(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point, Fmx::Types::TDragOperation &Operation);
	virtual void __fastcall DragDrop(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point);
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	virtual Fmx::Controls::TTextSettingsInfo::TCustomTextSettingsClass __fastcall GetTextSettingsClass();
	
public:
	__fastcall virtual TDropTarget(System::Classes::TComponent* AOwner)/* overload */;
	__property Font;
	__property FontColor = {default=-16777216};
	__property TextAlign = {default=1};
	
__published:
	__property Anchors;
	__property Align = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Enabled;
	__property System::UnicodeString Filter = {read=FFilter, write=FFilter};
	__property int FilterIndex = {read=FFilterIndex, write=FFilterIndex, default=1};
	__property TextSettings;
	__property StyledSettings;
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
	__property Text = {default=0};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property Fmx::Types::TDragDropEvent OnDropped = {read=FOnDrop, write=FOnDrop};
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
	/* TTextControl.Destroy */ inline __fastcall virtual ~TDropTarget() { }
	
};


class PASCALIMPLEMENTATION TPlotGrid : public Fmx::Controls::TControl
{
	typedef Fmx::Controls::TControl inherited;
	
private:
	float FMarks;
	float FFrequency;
	Fmx::Graphics::TStrokeBrush* FLineFill;
	void __fastcall SetFrequency(const float Value);
	void __fastcall SetMarks(const float Value);
	void __fastcall SetLineFill(Fmx::Graphics::TStrokeBrush* const Value);
	void __fastcall LineFillChanged(System::TObject* Sender);
	
protected:
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TPlotGrid(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TPlotGrid();
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property float Frequency = {read=FFrequency, write=SetFrequency};
	__property Locked = {default=0};
	__property Height;
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Fmx::Graphics::TStrokeBrush* LineFill = {read=FLineFill, write=SetLineFill};
	__property Padding;
	__property float Marks = {read=FMarks, write=SetMarks};
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
};


class PASCALIMPLEMENTATION TImageViewer : public Fmx::Layouts::TCustomScrollBox
{
	typedef Fmx::Layouts::TCustomScrollBox inherited;
	
private:
	Fmx::Objects::TRectangle* FBack;
	Fmx::Objects::TImage* FImage;
	float FBitmapScale;
	bool FMouseScaling;
	bool FShowBackground;
	Fmx::Graphics::TBitmap* __fastcall GetBitmap();
	void __fastcall SetBitmap(Fmx::Graphics::TBitmap* const Value);
	void __fastcall SetBitmapScale(const float Value);
	Fmx::Graphics::TBrush* __fastcall GetBackgroundFill();
	void __fastcall SetBackgroundFill(Fmx::Graphics::TBrush* const Value);
	void __fastcall SetShowBackground(const bool Value);
	bool __fastcall BitmapScaleStored();
	
protected:
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	virtual System::Types::TRectF __fastcall DoCalcContentBounds();
	void __fastcall DoBitmapChange(System::TObject* Sender);
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	virtual void __fastcall MouseWheel(System::Classes::TShiftState Shift, int WheelDelta, bool &Handled);
	
public:
	__fastcall virtual TImageViewer(System::Classes::TComponent* AOwner)/* overload */;
	void __fastcall BestFit();
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property AutoHide = {default=1};
	__property Fmx::Graphics::TBrush* BackgroundFill = {read=GetBackgroundFill, write=SetBackgroundFill};
	__property Fmx::Graphics::TBitmap* Bitmap = {read=GetBitmap, write=SetBitmap};
	__property float BitmapScale = {read=FBitmapScale, write=SetBitmapScale, stored=BitmapScaleStored};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=-21};
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
	__property bool MouseScaling = {read=FMouseScaling, write=FMouseScaling, default=1};
	__property Opacity;
	__property Padding;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property bool ShowBackground = {read=FShowBackground, write=SetShowBackground, default=0};
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
	/* TCustomScrollBox.Destroy */ inline __fastcall virtual ~TImageViewer() { }
	
};


class PASCALIMPLEMENTATION TPopupBox : public Fmx::Stdctrls::TCustomButton
{
	typedef Fmx::Stdctrls::TCustomButton inherited;
	
private:
	System::Classes::TStrings* FItems;
	int FItemIndex;
	Fmx::Pickers::TCustomListPicker* FListPicker;
	Fmx::Pickers::TDropDownKind FDropDownKind;
	Fmx::Menus::TPopupMenu* FPopup;
	System::Classes::TNotifyEvent FOnChange;
	bool FChanged;
	void __fastcall SetItems(System::Classes::TStrings* const Value);
	void __fastcall SetItemIndex(const int Value);
	HIDESBASE void __fastcall Change();
	
protected:
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	virtual void __fastcall Click();
	virtual void __fastcall DoChange();
	virtual void __fastcall DoItemsChanged(System::TObject* Sender);
	void __fastcall DoItemClick(System::TObject* Sender);
	void __fastcall DoValueChangedFromDropDownList(System::TObject* Sender, const int AValueIndex);
	virtual void __fastcall DoPopup();
	virtual void __fastcall DoExit();
	virtual void __fastcall DoEndUpdate();
	virtual void __fastcall SetText(const System::UnicodeString Value);
	virtual void __fastcall Loaded();
	virtual Fmx::Actnlist::TActionLinkClass __fastcall GetActionLinkClass();
	__property Fmx::Pickers::TDropDownKind DropDownKind = {read=FDropDownKind, nodefault};
	virtual Fmx::Controls::TTextSettingsInfo::TCustomTextSettingsClass __fastcall GetTextSettingsClass();
	
public:
	__fastcall virtual TPopupBox(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TPopupBox();
	void __fastcall Clear();
	__property Font;
	__property TextAlign = {default=1};
	__property WordWrap = {default=0};
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property AutoTranslate = {default=1};
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property ControlType = {default=0};
	__property Cursor = {default=0};
	__property DisableFocusEffect = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property StyledSettings;
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property HitTest = {default=1};
	__property Hint = {default=0};
	__property IsPressed = {default=0};
	__property System::Classes::TStrings* Items = {read=FItems, write=SetItems};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, default=-1};
	__property Locked = {default=0};
	__property Padding;
	__property ModalResult = {default=0};
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RepeatClick = {default=0};
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StaysPressed = {default=0};
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {stored=false, default=0};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
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


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Extctrls */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_EXTCTRLS)
using namespace Fmx::Extctrls;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_ExtctrlsHPP
