// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Header.pas' rev: 35.00 (Windows)

#ifndef Fmx_HeaderHPP
#define Fmx_HeaderHPP

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
#include <FMX.Types.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Graphics.hpp>
#include <FMX.Controls.Presentation.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Header
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THeaderItem;
class DELPHICLASS THeader;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION THeaderItem : public Fmx::Stdctrls::TCustomCornerButton
{
	typedef Fmx::Stdctrls::TCustomCornerButton inherited;
	
private:
	static const System::Int8 DragTolerance = System::Int8(0x3);
	
	Fmx::Controls::TControl* FSplitter;
	Fmx::Controls::TControl* FLeftSplitter;
	bool FDragging;
	System::Types::TPointF FDownPos;
	THeader* FHeader;
	bool __fastcall AllowDrag();
	void __fastcall UpdateSplitter();
	void __fastcall SplitterMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	void __fastcall SplitterMouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	THeaderItem* __fastcall GetPredItem();
	
protected:
	virtual void __fastcall Click();
	virtual void __fastcall DragEnd();
	virtual void __fastcall DragOver(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point, Fmx::Types::TDragOperation &Operation);
	virtual void __fastcall DragDrop(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point);
	void __fastcall DoSplitterMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, float X, float Y);
	void __fastcall DoLeftSplitterMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall SetVisible(const bool Value);
	virtual void __fastcall ParentChanged();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall PaintChildren();
	virtual void __fastcall DrawItem(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &Rect);
	virtual void __fastcall Resizing();
	virtual void __fastcall Resized();
	
public:
	__fastcall virtual THeaderItem(System::Classes::TComponent* AOwner)/* overload */;
	__property THeader* Header = {read=FHeader};
	
__published:
	__property Align = {default=0};
	__property CanFocus = {default=0};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property HitTest = {default=1};
	__property Locked = {default=0};
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
	__property StyledSettings;
	__property TextSettings;
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property OnApplyStyleLookup;
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
	__property OnResize;
	__property OnResized;
public:
	/* TCustomCornerButton.Destroy */ inline __fastcall virtual ~THeaderItem() { }
	
};


typedef void __fastcall (__closure *TOnRealignItemEvent)(System::TObject* Sender, int OldIndex, int NewIndex);

typedef void __fastcall (__closure *TOnResizeItemEvent)(System::TObject* Sender, float &NewSize);

typedef void __fastcall (__closure *THeaderItemClick)(THeaderItem* Item);

typedef void __fastcall (__closure *TDrawHeaderItemEvent)(System::TObject* Sender, Fmx::Graphics::TCanvas* const Canvas, THeaderItem* const Item, const System::Types::TRectF &Bounds);

class PASCALIMPLEMENTATION THeader : public Fmx::Controls::TStyledControl
{
	typedef Fmx::Controls::TStyledControl inherited;
	
private:
	TOnRealignItemEvent FOnRealignItem;
	TOnResizeItemEvent FOnResizeItem;
	float FOffset;
	THeaderItem* FLastItem;
	float FRadius;
	Fmx::Types::TSides FSides;
	THeaderItemClick FOnItemClick;
	bool FDragReorder;
	bool FSizing;
	TDrawHeaderItemEvent FOnDrawItem;
	THeaderItem* __fastcall GetHeaderItem(int Index);
	void __fastcall SetRadius(const float Value);
	void __fastcall SetSides(const Fmx::Types::TSides Value);
	int __fastcall GetCount();
	int __fastcall GetItemsCount();
	Fmx::Types::TFmxObject* __fastcall GetItem(const int AIndex);
	void __fastcall SetDragReorder(const bool Value);
	void __fastcall SetSizing(const bool Value);
	void __fastcall UpdateSplitters();
	
protected:
	virtual void __fastcall DoRealign();
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoItemClick(THeaderItem* const Item);
	__property float Offset = {read=FOffset, write=FOffset};
	__property THeaderItem* LastItem = {read=FLastItem};
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall DoDrawHeader(Fmx::Graphics::TCanvas* const Canvas, THeaderItem* const Item, const System::Types::TRectF &Bounds);
	
public:
	__fastcall virtual THeader(System::Classes::TComponent* AOwner)/* overload */;
	virtual void __fastcall BeforeDestruction();
	virtual void __fastcall Paint();
	__property int Count = {read=GetCount, nodefault};
	__property THeaderItem* Items[int Index] = {read=GetHeaderItem};
	
__published:
	__property Fmx::Types::TSides Sides = {read=FSides, write=SetSides, nodefault};
	__property Anchors;
	__property Align = {default=0};
	__property CanFocus = {default=0};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=1};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property bool DragReorder = {read=FDragReorder, write=SetDragReorder, default=1};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property HitTest = {default=1};
	__property bool Sizing = {read=FSizing, write=SetSizing, default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property float Radius = {read=FRadius, write=SetRadius};
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
	__property OnApplyStyleLookup;
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
	__property TDrawHeaderItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
	__property TOnRealignItemEvent OnRealignItem = {read=FOnRealignItem, write=FOnRealignItem};
	__property TOnResizeItemEvent OnResizeItem = {read=FOnResizeItem, write=FOnResizeItem};
	__property THeaderItemClick OnItemClick = {read=FOnItemClick, write=FOnItemClick};
public:
	/* TStyledControl.Destroy */ inline __fastcall virtual ~THeader() { }
	
private:
	void *__IItemsContainer;	// Fmx::Types::IItemsContainer 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {100B2F87-5DCB-4699-B751-B4439588E82A}
	operator Fmx::Types::_di_IItemsContainer()
	{
		Fmx::Types::_di_IItemsContainer intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IItemsContainer*(void) { return (Fmx::Types::IItemsContainer*)&__IItemsContainer; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Header */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_HEADER)
using namespace Fmx::Header;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_HeaderHPP
