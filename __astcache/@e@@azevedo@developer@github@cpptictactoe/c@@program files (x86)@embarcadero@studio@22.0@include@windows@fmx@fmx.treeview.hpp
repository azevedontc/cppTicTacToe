// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.TreeView.pas' rev: 35.00 (Windows)

#ifndef Fmx_TreeviewHPP
#define Fmx_TreeviewHPP

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
#include <System.Generics.Collections.hpp>
#include <System.ImageList.hpp>
#include <FMX.Types.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Controls.hpp>
#include <FMX.TextLayout.hpp>
#include <FMX.Graphics.hpp>
#include <FMX.ActnList.hpp>
#include <FMX.ImgList.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Messaging.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Treeview
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TTreeViewItem;
class DELPHICLASS TCustomTreeView;
class DELPHICLASS TTreeView;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TTreeViewItem : public Fmx::Controls::TTextControl
{
	typedef Fmx::Controls::TTextControl inherited;
	
public:
	TTreeViewItem* operator[](const int Index) { return this->Items[Index]; }
	
public:
	static const System::Int8 DefaultHeight = System::Int8(0x13);
	
	
private:
	bool FIsExpanded;
	Fmx::Controls::TControl* FExpander;
	Fmx::Stdctrls::TCustomButton* FButton;
	Fmx::Stdctrls::TCheckBox* FCheck;
	int FGlobalIndex;
	bool FIsChecked;
	bool FIsSelected;
	Fmx::Controls::TContent* FContent;
	Fmx::Layouts::TLayout* FNoItemsContent;
	int FVisibleCount;
	System::Types::TSizeF FMinItemSize;
	bool FCustomHeight;
	float FChildrenOffset;
	bool FOldButtonVisible;
	bool FOldCheckVisible;
	bool FOldChecked;
	Fmx::Imglist::TGlyph* FGlyph;
	bool FOldGlyphVisible;
	Fmx::Imglist::TGlyphImageLink* FImageLink;
	Fmx::Imglist::TCustomImageList* FImages;
	float FCustomChildrenOffset;
	float __fastcall GetLevelOffset();
	void __fastcall DoButtonClick(System::TObject* Sender);
	void __fastcall DoCheckClick(System::TObject* Sender);
	int __fastcall GetCount();
	void __fastcall SetIsChecked(const bool Value);
	void __fastcall UpdateCheckBoxVisibility();
	void __fastcall UpdateExpandedButtonVisibility();
	void __fastcall SetIsSelected(const bool Value);
	void __fastcall RecountVisibleItems();
	void __fastcall RequestRecount();
	Fmx::Imglist::TCustomImageList* __fastcall GetImages();
	void __fastcall SetImages(Fmx::Imglist::TCustomImageList* const Value);
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	System::Imagelist::TBaseImageList* __fastcall GetImageList();
	void __fastcall SetImageList(System::Imagelist::TBaseImageList* const Value);
	Fmx::Types::TFmxObject* __fastcall GetItem(const int AIndex);
	System::Types::TSizeF __fastcall GetMinItemSize();
	void __fastcall OnExpandButtonStyleLookup(System::TObject* Sender);
	void __fastcall UpdateChildrenOffset();
	void __fastcall SetCustomChildrenOffset(const float Value);
	bool __fastcall IsCustomChildrenOffsetStored();
	
protected:
	virtual void __fastcall ChangeOrder();
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual void __fastcall DragEnd();
	virtual Fmx::Controls::TTextSettingsInfo::TCustomTextSettingsClass __fastcall GetTextSettingsClass();
	System::Types::TSizeF __fastcall CalcMinSize();
	void __fastcall InvalidateTextSize();
	virtual bool __fastcall ImageIndexStored();
	virtual void __fastcall ImagesChanged();
	virtual void __fastcall DoChanged();
	virtual bool __fastcall IsSizeStored();
	virtual bool __fastcall IsPositionStored();
	virtual void __fastcall SetText(const System::UnicodeString Value);
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual bool __fastcall EnterChildren(Fmx::Types::_di_IControl AObject);
	virtual System::Types::TRectF __fastcall GetAbsoluteRect();
	virtual System::Types::TRectF __fastcall DoGetUpdateRect();
	virtual void __fastcall ContentAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall ContentInsertObject(const int AIndex, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall ContentRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall Paint();
	virtual void __fastcall SetVisible(const bool Value);
	virtual void __fastcall SetHeight(const float Value);
	virtual void __fastcall SetIsExpanded(const bool Value);
	
public:
	__fastcall virtual TTreeViewItem(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TTreeViewItem();
	virtual void __fastcall Sort(Fmx::Types::_di_TFmxObjectSortCompare Compare);
	TTreeViewItem* __fastcall ItemByPoint(const float X, const float Y);
	TTreeViewItem* __fastcall ItemByIndex(const int Idx);
	TCustomTreeView* __fastcall TreeView();
	int __fastcall Level();
	TTreeViewItem* __fastcall ParentItem();
	void __fastcall Select();
	void __fastcall Deselect();
	void __fastcall ExpandAll();
	void __fastcall CollapseAll();
	void __fastcall Expand();
	void __fastcall Collapse();
	virtual void __fastcall Inflate();
	__property int Count = {read=GetCount, nodefault};
	__property int VisibleCount = {read=FVisibleCount, nodefault};
	__property int GlobalIndex = {read=FGlobalIndex, nodefault};
	__property System::Types::TSizeF MinItemSize = {read=GetMinItemSize};
	__property float ChildrenOffset = {read=FChildrenOffset};
	__property float CustomChildrenOffset = {read=FCustomChildrenOffset, write=SetCustomChildrenOffset, stored=IsCustomChildrenOffsetStored};
	__property TTreeViewItem* Items[const int Index] = {read=ItemByIndex/*, default*/};
	__property float Width = {read=GetWidth};
	__property Fmx::Imglist::TCustomImageList* Images = {read=GetImages};
	
__published:
	__property Align = {default=0};
	__property AutoTranslate = {default=1};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property StyledSettings;
	__property TextSettings;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property bool IsChecked = {read=FIsChecked, write=SetIsChecked, nodefault};
	__property bool IsExpanded = {read=FIsExpanded, write=SetIsExpanded, nodefault};
	__property bool IsSelected = {read=FIsSelected, write=SetIsSelected, nodefault};
	__property System::Uitypes::TImageIndex ImageIndex = {read=GetImageIndex, write=SetImageIndex, stored=ImageIndexStored, nodefault};
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
	__property Visible = {default=1};
	__property ParentShowHint = {default=1};
	__property OnApplyStyleLookup;
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
private:
	void *__IGlyph;	// Fmx::Actnlist::IGlyph 
	void *__IItemsContainer;	// Fmx::Types::IItemsContainer 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {62BDCA4F-820A-4058-B57A-FE8931DB3CCC}
	operator Fmx::Actnlist::_di_IGlyph()
	{
		Fmx::Actnlist::_di_IGlyph intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::IGlyph*(void) { return (Fmx::Actnlist::IGlyph*)&__IGlyph; }
	#endif
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


typedef int __fastcall (__closure *TOnCompareTreeViewItemEvent)(TTreeViewItem* Item1, TTreeViewItem* Item2);

typedef void __fastcall (__closure *TOnTreeViewDragChange)(TTreeViewItem* SourceItem, TTreeViewItem* DestItem, bool &Allow);

class PASCALIMPLEMENTATION TCustomTreeView : public Fmx::Layouts::TScrollBox
{
	typedef Fmx::Layouts::TScrollBox inherited;
	
private:
	bool FMouseSelecting;
	System::Classes::TNotifyEvent FOnChange;
	TTreeViewItem* FSelected;
	float FItemHeight;
	int FCountExpanded;
	bool FShowCheckboxes;
	System::Classes::TNotifyEvent FOnChangeCheck;
	bool FSorted;
	TOnCompareTreeViewItemEvent FOnCompare;
	bool FMultiSelect;
	TTreeViewItem* FFirstSelect;
	Fmx::Controls::TControl* FFocusedSelection;
	Fmx::Controls::TControl* FSelection;
	System::Generics::Collections::TList__1<Fmx::Controls::TControl*>* FSelections;
	bool FAllowDrag;
	bool FStartDrag;
	TTreeViewItem* FDragItem;
	TOnTreeViewDragChange FOnDragChange;
	System::Generics::Collections::TList__1<TTreeViewItem*>* FGlobalList;
	bool FAlternatingRowBackground;
	Fmx::Graphics::TBrush* FOddFill;
	int FFirstVisibleItem;
	int FLastVisibleItem;
	Fmx::Controls::TContent* FNoItemsContent;
	TTreeViewItem* FHoveredItem;
	Fmx::Textlayout::TTextLayout* FTextLayout;
	System::Generics::Collections::TList__1<TTreeViewItem*>* FToInflate;
	Fmx::Controls::TContentInflater__1<TTreeViewItem*>* FInflater;
	bool FSelectionChanging;
	Fmx::Imglist::TGlyphImageLink* FImageLink;
	Fmx::Imglist::TCustomImageList* FImages;
	void __fastcall SetItemHeight(const float Value);
	void __fastcall SetCheckboxesVisibility(const bool Value);
	TTreeViewItem* __fastcall GetTreeItem(int Index);
	void __fastcall SetSorted(const bool Value);
	void __fastcall SortItems();
	void __fastcall SelectRange(TTreeViewItem* const Item1, TTreeViewItem* const Item2);
	void __fastcall UpdateSelection();
	void __fastcall UpdateVisibleItems();
	void __fastcall UpdateGlobalIndexes(const bool Force = false);
	void __fastcall SetAllowDrag(const bool Value);
	int __fastcall GetCount();
	void __fastcall SetAlternatingRowBackground(const bool Value);
	void __fastcall SetHoveredItem(TTreeViewItem* const Value);
	System::Types::TPointF __fastcall LocalPointToHoveredItemLocalPoint(const float AX, const float AY);
	Fmx::Imglist::TCustomImageList* __fastcall GetImages();
	void __fastcall SetImages(Fmx::Imglist::TCustomImageList* const Value);
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	System::Imagelist::TBaseImageList* __fastcall GetImageList();
	void __fastcall SetImageList(System::Imagelist::TBaseImageList* const Value);
	Fmx::Types::TFmxObject* __fastcall GetItem(const int AIndex);
	bool __fastcall MouseInContentLayout(const float X, const float Y);
	int __fastcall GetGlobalCount();
	void __fastcall InvalidateGlobalList();
	void __fastcall ItemSizeMightHaveChanged(TTreeViewItem* const AItem);
	System::Generics::Collections::TList__1<TTreeViewItem*>* __fastcall GetInflatableItems();
	void __fastcall NotifyInflated();
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall DoUpdateAniCalculations(Fmx::Layouts::TScrollCalculations* const AAniCalculations);
	virtual void __fastcall Loaded();
	virtual void __fastcall ImagesChanged();
	void __fastcall ClearSelection();
	void __fastcall SelectAll();
	virtual void __fastcall SetSelected(TTreeViewItem* const Value);
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual void __fastcall DoChange();
	virtual void __fastcall DoChangeCheck(TTreeViewItem* const Item);
	virtual void __fastcall DoEnter();
	virtual void __fastcall DoExit();
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual bool __fastcall IsAddToContent(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall ContentAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall ContentInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall ContentRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall ContentBeforeRemoveObject(Fmx::Types::TFmxObject* AObject);
	virtual void __fastcall ViewportPositionChange(const System::Types::TPointF &OldViewportPosition, const System::Types::TPointF &NewViewportPosition, const bool ContentSizeChanged);
	virtual Fmx::Layouts::TScrollContent* __fastcall CreateScrollContent();
	virtual System::Types::TRectF __fastcall DoCalcContentBounds();
	System::Types::TRectF __fastcall GetItemRect(TTreeViewItem* const Item);
	void __fastcall DoContentPaint(System::TObject* Sender, Fmx::Graphics::TCanvas* Canvas, const System::Types::TRectF &ARect);
	virtual bool __fastcall IsOpaque();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseWheel(System::Classes::TShiftState Shift, int WheelDelta, bool &Handled);
	virtual void __fastcall MouseClick(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall KeyDown(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift);
	virtual void __fastcall KeyUp(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift);
	virtual void __fastcall DragOver(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point, Fmx::Types::TDragOperation &Operation);
	virtual void __fastcall DragDrop(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point);
	virtual void __fastcall DragLeave();
	virtual Fmx::Types::_di_IControl __fastcall ObjectAtPoint(const System::Types::TPointF &P);
	virtual void __fastcall ChangeOrder();
	void __fastcall ItemExpanded(TTreeViewItem* const Item);
	__property TTreeViewItem* HoveredItem = {read=FHoveredItem, write=SetHoveredItem};
	__property TTreeViewItem* FirstSelectedItem = {read=FFirstSelect};
	
public:
	__fastcall virtual TCustomTreeView(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TCustomTreeView();
	void __fastcall Clear();
	void __fastcall ExpandAll();
	void __fastcall CollapseAll();
	TTreeViewItem* __fastcall ItemByText(const System::UnicodeString AText);
	TTreeViewItem* __fastcall ItemByPoint(const float X, const float Y);
	TTreeViewItem* __fastcall ItemByIndex(const int Idx);
	TTreeViewItem* __fastcall ItemByGlobalIndex(const int Idx);
	__property int Count = {read=GetCount, nodefault};
	__property int GlobalCount = {read=GetGlobalCount, nodefault};
	__property int CountExpanded = {read=FCountExpanded, nodefault};
	__property TTreeViewItem* Selected = {read=FSelected, write=SetSelected};
	__property TTreeViewItem* Items[int Index] = {read=GetTreeItem};
	__property bool AllowDrag = {read=FAllowDrag, write=SetAllowDrag, nodefault};
	__property bool AlternatingRowBackground = {read=FAlternatingRowBackground, write=SetAlternatingRowBackground, nodefault};
	__property float ItemHeight = {read=FItemHeight, write=SetItemHeight};
	__property Fmx::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
	__property bool MultiSelect = {read=FMultiSelect, write=FMultiSelect, default=0};
	__property bool ShowCheckboxes = {read=FShowCheckboxes, write=SetCheckboxesVisibility, default=0};
	__property bool Sorted = {read=FSorted, write=SetSorted, default=0};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnChangeCheck = {read=FOnChangeCheck, write=FOnChangeCheck};
	__property TOnCompareTreeViewItemEvent OnCompare = {read=FOnCompare, write=FOnCompare};
	__property TOnTreeViewDragChange OnDragChange = {read=FOnDragChange, write=FOnDragChange};
private:
	void *__IGlyph;	// Fmx::Actnlist::IGlyph 
	void *__IInflatableContent__1;	// Fmx::Controls::IInflatableContent__1<TTreeViewItem*> 
	void *__IItemsContainer;	// Fmx::Types::IItemsContainer 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {62BDCA4F-820A-4058-B57A-FE8931DB3CCC}
	operator Fmx::Actnlist::_di_IGlyph()
	{
		Fmx::Actnlist::_di_IGlyph intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::IGlyph*(void) { return (Fmx::Actnlist::IGlyph*)&__IGlyph; }
	#endif
	operator Fmx::Controls::IInflatableContent__1<TTreeViewItem*>*(void) { return (Fmx::Controls::IInflatableContent__1<TTreeViewItem*>*)&__IInflatableContent__1; }
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


class PASCALIMPLEMENTATION TTreeView : public TCustomTreeView
{
	typedef TCustomTreeView inherited;
	
__published:
	__property StyleLookup = {default=0};
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property DisableFocusEffect = {default=1};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property AllowDrag = {default=0};
	__property AlternatingRowBackground = {default=0};
	__property Hint = {default=0};
	__property ItemHeight = {default=0};
	__property Images;
	__property MultiSelect = {default=0};
	__property ShowCheckboxes = {default=0};
	__property Sorted = {default=0};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnCanFocus;
	__property OnChange;
	__property OnChangeCheck;
	__property OnCompare;
	__property OnDragChange;
	__property OnKeyDown;
	__property OnKeyUp;
public:
	/* TCustomTreeView.Create */ inline __fastcall virtual TTreeView(System::Classes::TComponent* AOwner)/* overload */ : TCustomTreeView(AOwner) { }
	/* TCustomTreeView.Destroy */ inline __fastcall virtual ~TTreeView() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Treeview */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_TREEVIEW)
using namespace Fmx::Treeview;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_TreeviewHPP
