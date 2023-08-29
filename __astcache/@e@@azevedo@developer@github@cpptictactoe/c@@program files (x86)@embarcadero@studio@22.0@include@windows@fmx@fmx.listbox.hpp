// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.ListBox.pas' rev: 35.00 (Windows)

#ifndef Fmx_ListboxHPP
#define Fmx_ListboxHPP

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
#include <System.Rtti.hpp>
#include <System.Generics.Collections.hpp>
#include <System.ImageList.hpp>
#include <FMX.Types.hpp>
#include <FMX.ActnList.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Pickers.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Graphics.hpp>
#include <FMX.ListBox.Selection.hpp>
#include <FMX.ImgList.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Messaging.hpp>
#include <FMX.Controls.Presentation.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Listbox
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TListBoxItem;
class DELPHICLASS TListBoxItemData;
class DELPHICLASS TListBoxItemStyleDefaults;
class DELPHICLASS TCustomListBox;
class DELPHICLASS TListBox;
class DELPHICLASS TListBoxHeader;
class DELPHICLASS TListBoxSeparatorItem;
class DELPHICLASS TListBoxGroupHeader;
class DELPHICLASS TListBoxGroupFooter;
class DELPHICLASS TListBoxSelector;
class DELPHICLASS TListBoxSelectorFactory;
class DELPHICLASS TComboListBox;
class DELPHICLASS TCustomComboBox;
class DELPHICLASS TComboBox;
class DELPHICLASS TMetropolisUIListBoxItem;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TListBoxItem : public Fmx::Controls::TTextControl
{
	typedef Fmx::Controls::TTextControl inherited;
	
	
private:
	enum class DECLSPEC_DENUM TBackgroundShape : unsigned char { SeparatorBottom, Sharp, RoundTop, RoundBottom, RoundAll };
	
	
private:
	bool FIsChecked;
	Fmx::Stdctrls::TCheckBox* FCheck;
	bool FIsSelected;
	bool FIsSelectable;
	System::TObject* FData;
	TListBoxItemData* FItemData;
	Fmx::Graphics::TBitmap* FBitmap;
	Fmx::Objects::TImage* FIcon;
	bool FOldIconVisible;
	Fmx::Types::TAlignLayout FOldCheckAlign;
	Fmx::Imglist::TGlyph* FGlyph;
	TBackgroundShape FBackgroundShape;
	Fmx::Imglist::TGlyphImageLink* FImageLink;
	void __fastcall SetIsChecked(const bool Value);
	void __fastcall DoCheckClick(System::TObject* Sender);
	void __fastcall InitCheckBox(bool Visible);
	void __fastcall UpdateCheck();
	void __fastcall SetIsSelected(const bool Value);
	void __fastcall SetSelectable(const bool Value);
	Fmx::Imglist::TCustomImageList* __fastcall GetImages();
	void __fastcall SetImages(Fmx::Imglist::TCustomImageList* const Value);
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	System::Imagelist::TBaseImageList* __fastcall GetImageList();
	void __fastcall SetImageList(System::Imagelist::TBaseImageList* const Value);
	void __fastcall SetItemData(TListBoxItemData* const Value);
	
protected:
	virtual void __fastcall ChangeOrder();
	TCustomListBox* __fastcall ListBox();
	TCustomComboBox* __fastcall ComboBox();
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual bool __fastcall EnterChildren(Fmx::Types::_di_IControl AObject);
	virtual void __fastcall DragOver(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point, Fmx::Types::TDragOperation &Operation);
	virtual void __fastcall DragEnd();
	virtual void __fastcall Paint();
	virtual float __fastcall GetHeight();
	virtual float __fastcall GetWidth();
	virtual void __fastcall SetHeight(const float Value);
	virtual bool __fastcall DoSetSize(Fmx::Types::TControlSize* const ASize, const bool NewPlatformDefault, float ANewWidth, float ANewHeight, float &ALastWidth, float &ALastHeight);
	void __fastcall SelectBackground(const TBackgroundShape Shape);
	void __fastcall OnBitmapChanged(System::TObject* Sender);
	virtual bool __fastcall StyledSettingsStored();
	__property Align = {default=0};
	__property RotationAngle = {default=0};
	__property RotationCenter;
	virtual Fmx::Controls::TTextSettingsInfo::TCustomTextSettingsClass __fastcall GetTextSettingsClass();
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	virtual System::UnicodeString __fastcall DoGetDefaultStyleLookupName(TListBoxItemStyleDefaults* const Defaults);
	virtual void __fastcall ImagesChanged();
	virtual bool __fastcall ImageIndexStored();
	virtual void __fastcall SetVisible(const bool Value);
	
public:
	__fastcall virtual TListBoxItem(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TListBoxItem();
	__property System::TObject* Data = {read=FData, write=FData};
	DYNAMIC System::Classes::TComponent* __fastcall GetParentComponent();
	virtual void __fastcall ApplyTriggerEffect(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
	void __fastcall SetIsSelectedInternal(const bool Value, const bool UserChange);
	__property Font;
	__property TextAlign = {default=1};
	__property WordWrap = {default=0};
	__property Fmx::Imglist::TCustomImageList* Images = {read=GetImages};
	
__published:
	__property AutoTranslate = {default=1};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property bool Selectable = {read=FIsSelectable, write=SetSelectable, default=1};
	__property TextSettings;
	__property StyledSettings;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property HitTest = {default=0};
	__property bool IsChecked = {read=FIsChecked, write=SetIsChecked, default=0};
	__property bool IsSelected = {read=FIsSelected, write=SetIsSelected, default=0};
	__property TListBoxItemData* ItemData = {read=FItemData, write=SetItemData};
	__property System::Uitypes::TImageIndex ImageIndex = {read=GetImageIndex, write=SetImageIndex, stored=ImageIndexStored, nodefault};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
	__property Width;
	__property Visible = {default=1};
	__property ParentShowHint = {default=1};
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnClick;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
private:
	void *__IGlyph;	// Fmx::Actnlist::IGlyph 
	
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
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListBoxItemData : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
	
public:
	enum class DECLSPEC_DENUM TAccessory : unsigned char { aNone, aMore, aDetail, aCheckmark };
	
	
private:
	#define TListBoxItemData_StyleSelectorMore L"accessorymore.Visible"
	
	#define TListBoxItemData_StyleSelectorDetail L"accessorydetail.Visible"
	
	#define TListBoxItemData_StyleSelectorCheckmark L"accessorycheckmark.Visible"
	
	
private:
	TListBoxItem* FItem;
	TAccessory FAccessory;
	void __fastcall SetText(const System::UnicodeString Text);
	System::UnicodeString __fastcall GetText();
	void __fastcall SetDetail(const System::UnicodeString Detail);
	System::UnicodeString __fastcall GetDetail();
	void __fastcall SetBitmap(Fmx::Graphics::TBitmap* const Bitmap);
	Fmx::Graphics::TBitmap* __fastcall GetBitmap();
	TAccessory __fastcall GetAccessory();
	void __fastcall SetAccessory(const TAccessory Accessory);
	
public:
	__fastcall TListBoxItemData(TListBoxItem* const HostItem);
	__fastcall virtual ~TListBoxItemData();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall Disappear();
	
__published:
	__property System::UnicodeString Text = {read=GetText, write=SetText, stored=false};
	__property System::UnicodeString Detail = {read=GetDetail, write=SetDetail};
	__property TAccessory Accessory = {read=GetAccessory, write=SetAccessory, default=0};
	__property Fmx::Graphics::TBitmap* Bitmap = {read=GetBitmap, write=SetBitmap};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum class DECLSPEC_DENUM TListStyle : unsigned char { Vertical, Horizontal };

enum class DECLSPEC_DENUM TListGroupingKind : unsigned char { Plain, Grouped };

typedef void __fastcall (__closure *TOnCompareListBoxItemEvent)(TListBoxItem* Item1, TListBoxItem* Item2, int &Result);

typedef void __fastcall (__closure *TOnListBoxDragChange)(TListBoxItem* SourceItem, TListBoxItem* DestItem, bool &Allow);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListBoxItemStyleDefaults : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::UnicodeString FItemStyle;
	System::UnicodeString FHeaderStyle;
	System::UnicodeString FFooterStyle;
	TCustomListBox* FListBox;
	
private:
	System::UnicodeString __fastcall GetItemStyle();
	void __fastcall SetItemStyle(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetGroupHeaderStyle();
	void __fastcall SetGroupHeaderStyle(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetGroupFooterStyle();
	void __fastcall SetGroupFooterStyle(const System::UnicodeString Value);
	void __fastcall RefreshListBox();
	
protected:
	__fastcall TListBoxItemStyleDefaults(TCustomListBox* const ListBox);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TCustomListBox* ListBox = {read=FListBox};
	
__published:
	__property System::UnicodeString ItemStyle = {read=GetItemStyle, write=SetItemStyle};
	__property System::UnicodeString GroupHeaderStyle = {read=GetGroupHeaderStyle, write=SetGroupHeaderStyle};
	__property System::UnicodeString GroupFooterStyle = {read=GetGroupFooterStyle, write=SetGroupFooterStyle};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TListBoxItemStyleDefaults() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum class DECLSPEC_DENUM TMultiSelectStyle : unsigned char { None, Default, Extended };

class PASCALIMPLEMENTATION TCustomListBox : public Fmx::Layouts::TScrollBox
{
	typedef Fmx::Layouts::TScrollBox inherited;
	
	
public:
	enum class DECLSPEC_DENUM TStringsChangeOp : unsigned char { Added, Deleted, Clear };
	
	typedef void __fastcall (__closure *TStringsChangedEvent)(const System::UnicodeString S, const TStringsChangeOp StringsEvent);
	
	typedef void __fastcall (__closure *TItemClickEvent)(TCustomListBox* const Sender, TListBoxItem* const Item);
	
	
private:
	class DELPHICLASS TListBoxStrings;
#ifndef _WIN64
	#pragma pack(push,4)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TListBoxStrings : public System::Classes::TStrings
	{
		typedef System::Classes::TStrings inherited;
		
	private:
		TCustomListBox* FListBox;
		HIDESBASE void __fastcall ReadData(System::Classes::TReader* Reader);
		HIDESBASE void __fastcall WriteData(System::Classes::TWriter* Writer);
		
	protected:
		virtual void __fastcall Put(int Index, const System::UnicodeString S);
		virtual System::UnicodeString __fastcall Get(int Index);
		virtual int __fastcall GetCount();
		virtual System::TObject* __fastcall GetObject(int Index);
		virtual void __fastcall PutObject(int Index, System::TObject* AObject);
		virtual void __fastcall SetUpdateState(bool Updating);
		virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
		
	public:
		virtual int __fastcall Add(const System::UnicodeString S);
		virtual void __fastcall Clear();
		virtual void __fastcall Delete(int Index);
		virtual void __fastcall Exchange(int Index1, int Index2);
		virtual int __fastcall IndexOf(const System::UnicodeString S);
		virtual void __fastcall Insert(int Index, const System::UnicodeString S);
	public:
		/* TStrings.Create */ inline __fastcall TListBoxStrings() : System::Classes::TStrings() { }
		/* TStrings.Destroy */ inline __fastcall virtual ~TListBoxStrings() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	struct DECLSPEC_DRECORD TGroup
	{
	public:
		int First;
		int Length;
		__fastcall TGroup(const int AFirst, const int ALength);
		TGroup() {}
	};
	
	
	class DELPHICLASS TGroups;
	class PASCALIMPLEMENTATION TGroups : public System::Generics::Collections::TList__1<TCustomListBox::TGroup>
	{
		typedef System::Generics::Collections::TList__1<TCustomListBox::TGroup> inherited;
		
	public:
		int __fastcall FindGroup(const int Index);
	public:
		/* {System_Generics_Collections}TList<FMX_ListBox_TCustomListBox_TGroup>.Create */ inline __fastcall TGroups()/* overload */ : System::Generics::Collections::TList__1<TCustomListBox::TGroup>() { }
		/* {System_Generics_Collections}TList<FMX_ListBox_TCustomListBox_TGroup>.Create */ inline __fastcall TGroups(const System::DelphiInterface<System::Generics::Defaults::IComparer__1<TCustomListBox::TGroup> > AComparer)/* overload */ : System::Generics::Collections::TList__1<TCustomListBox::TGroup>(AComparer) { }
		/* {System_Generics_Collections}TList<FMX_ListBox_TCustomListBox_TGroup>.Create */ inline __fastcall TGroups(System::Generics::Collections::TEnumerable__1<TCustomListBox::TGroup>* const Collection)/* overload */ : System::Generics::Collections::TList__1<TCustomListBox::TGroup>(Collection) { }
		/* {System_Generics_Collections}TList<FMX_ListBox_TCustomListBox_TGroup>.Create */ inline __fastcall TGroups(const TCustomListBox::TGroup *Values, const int Values_High)/* overload */ : System::Generics::Collections::TList__1<TCustomListBox::TGroup>(Values, Values_High) { }
		/* {System_Generics_Collections}TList<FMX_ListBox_TCustomListBox_TGroup>.Destroy */ inline __fastcall virtual ~TGroups() { }
		
	};
	
	
	class DELPHICLASS TStyledSelection;
#ifndef _WIN64
	#pragma pack(push,4)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TStyledSelection : public System::TObject
	{
		typedef System::TObject inherited;
		
	private:
		TCustomListBox* FListBox;
		System::Generics::Collections::TList__1<Fmx::Controls::TControl*>* FUnfocusedObjectsPool;
		System::Generics::Collections::TList__1<Fmx::Controls::TControl*>* FFocusedObjectsPool;
		System::Generics::Collections::TList__1<Fmx::Controls::TControl*>* FCurrentObjects;
		bool FIsFocused;
		Fmx::Controls::TControl* FUnfocusedSelection;
		Fmx::Controls::TControl* FFocusedSelection;
		void __fastcall SetIsFocused(const bool Value);
		Fmx::Controls::TControl* __fastcall CreateSelectionControl(const bool AIsFocused);
		
	public:
		__fastcall TStyledSelection(TCustomListBox* const AListBox);
		__fastcall virtual ~TStyledSelection();
		void __fastcall Realign(System::Generics::Collections::TList__1<System::Types::TRectF>* const ASelectionRects);
		void __fastcall ClearPools();
		__property Fmx::Controls::TControl* UnfocusedSelection = {read=FUnfocusedSelection, write=FUnfocusedSelection};
		__property Fmx::Controls::TControl* FocusedSelection = {read=FFocusedSelection, write=FFocusedSelection};
		__property bool IsFocused = {read=FIsFocused, write=SetIsFocused, nodefault};
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
private:
	#define TCustomListBox_UnfocusedSelectionOpacity  (7.000000E-01)
	
	#define TCustomListBox_ExtendedSelectionOpacity  (7.000000E-01)
	
	
private:
	bool FBeingPainted;
	bool FRealignRequested;
	bool FUpdateGroupsRequested;
	System::Generics::Collections::TList__1<TListBoxItem*>* FToInflate;
	Fmx::Controls::TContentInflater__1<TListBoxItem*>* FInflater;
	TStringsChangedEvent FStringsChanged;
	TItemClickEvent FOnItemClick;
	TListBoxItem* FItemDown;
	System::Classes::TNotifyEvent FOnChange;
	bool FShowCheckboxes;
	System::Classes::TNotifyEvent FOnChangeCheck;
	bool FSorted;
	TOnCompareListBoxItemEvent FOnCompare;
	bool FAlternatingRowBackground;
	bool FAllowDrag;
	TOnListBoxDragChange FOnDragChange;
	Fmx::Controls::TContent* FNoItemsContent;
	Fmx::Controls::TContent* FHeaderCompartment;
	Fmx::Controls::TContent* FFooterCompartment;
	Fmx::Controls::TContent* FContentOverlay;
	TListBoxItemStyleDefaults* FDefaultStyles;
	TGroups* FGroups;
	TListGroupingKind FGroupingKind;
	bool FClickEnable;
	Fmx::Controls::TControl* FSelection;
	Fmx::Controls::TControl* FExtendedSelection;
	Fmx::Controls::TControl* FFocusedSelection;
	TListBoxSelector* FSelector;
	Fmx::Imglist::TGlyphImageLink* FImageLink;
	Fmx::Imglist::TCustomImageList* FImages;
	System::Generics::Collections::TList__1<TListBoxItem*>* __fastcall GetInflatableItems();
	void __fastcall CalcSelectionRects(System::Generics::Collections::TList__1<System::Types::TRectF>* const SelRects);
	void __fastcall PerformInternalDrag();
	Fmx::Imglist::TCustomImageList* __fastcall GetImages();
	void __fastcall SetImages(Fmx::Imglist::TCustomImageList* const Value);
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	System::Imagelist::TBaseImageList* __fastcall GetImageList();
	void __fastcall SetImageList(System::Imagelist::TBaseImageList* const Value);
	
private:
	TListBoxItem* FDragItem;
	int FFirstVisibleItem;
	int FLastVisibleItem;
	System::Classes::TStrings* FItems;
	int FColumns;
	float FItemWidth;
	float FItemHeight;
	TListStyle FListStyle;
	Fmx::Graphics::TBrush* FOddFill;
	System::Types::TRectF FContentInsets;
	TStyledSelection* FSelectionObjects;
	void __fastcall IgnoreString(System::Classes::TReader* Reader);
	void __fastcall ReadMultiSelect(System::Classes::TReader* Reader);
	int __fastcall GetCount();
	TListBoxItem* __fastcall GetSelected();
	void __fastcall SetColumns(const int Value);
	void __fastcall SetItemHeight(const float Value);
	void __fastcall SetItemWidth(const float Value);
	void __fastcall SetListStyle(const TListStyle Value);
	void __fastcall SetShowCheckboxes(const bool Value);
	TListBoxItem* __fastcall GetListItem(int Index);
	void __fastcall SetSorted(const bool Value);
	void __fastcall SetAlternatingRowBackground(const bool Value);
	void __fastcall SetItems(System::Classes::TStrings* const Value);
	void __fastcall SetMultiSelectStyle(const TMultiSelectStyle Value);
	TMultiSelectStyle __fastcall GetMultiSelectStyle();
	void __fastcall SetAllowDrag(const bool Value);
	bool __fastcall GetMultiSelect();
	void __fastcall SetMultiSelect(const bool Value);
	Fmx::Types::TFmxObject* __fastcall GetItem(const int AIndex);
	System::DelphiInterface<System::Sysutils::TPredicate__1<System::UnicodeString> > __fastcall GetFilterPredicate();
	void __fastcall SetFilterPredicate(const System::DelphiInterface<System::Sysutils::TPredicate__1<System::UnicodeString> > Predicate);
	void __fastcall SetItemDown(TListBoxItem* const Value);
	bool __fastcall ItemsStored();
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	virtual bool __fastcall CanObserve(const int ID);
	DYNAMIC void __fastcall DoChangeCheck(TListBoxItem* const Item);
	virtual int __fastcall CompareItems(TListBoxItem* const Item1, TListBoxItem* const Item2);
	DYNAMIC void __fastcall DoChange();
	virtual void __fastcall SortItems();
	virtual void __fastcall SetItemIndex(const int Value);
	virtual int __fastcall GetItemIndex();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseClick(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall KeyDown(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift);
	virtual void __fastcall DragOver(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point, Fmx::Types::TDragOperation &Operation);
	virtual void __fastcall DragDrop(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point);
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual void __fastcall DoEnter();
	virtual void __fastcall DoExit();
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	float __fastcall GetBorderHeight();
	virtual Fmx::Layouts::TScrollContent* __fastcall CreateScrollContent();
	virtual System::Types::TRectF __fastcall DoCalcContentBounds();
	virtual void __fastcall DoEndUpdate();
	virtual void __fastcall ImagesChanged();
	virtual void __fastcall Loaded();
	void __fastcall DoContentPaint(System::TObject* Sender, Fmx::Graphics::TCanvas* Canvas, const System::Types::TRectF &ARect);
	virtual void __fastcall Painting();
	virtual void __fastcall AfterPaint();
	virtual void __fastcall ViewportPositionChange(const System::Types::TPointF &OldViewportPosition, const System::Types::TPointF &NewViewportPosition, const bool ContentSizeChanged);
	virtual void __fastcall DoUpdateAniCalculations(Fmx::Layouts::TScrollCalculations* const AAniCalculations);
	virtual bool __fastcall IsAddToContent(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall ContentAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall ContentInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall ContentBeforeRemoveObject(Fmx::Types::TFmxObject* AObject);
	virtual void __fastcall ContentRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual bool __fastcall IsOpaque();
	void __fastcall UpdateVisibleItems();
	void __fastcall UpdateSelection();
	void __fastcall UpdateGroups();
	virtual void __fastcall RealUpdateGroups();
	void __fastcall UpdateStickyHeader();
	void __fastcall SetGroupingKind(const TListGroupingKind Value);
	virtual void __fastcall DoRealign();
	void __fastcall DispatchStringsChangeEvent(const System::UnicodeString S, const TStringsChangeOp Op);
	virtual void __fastcall Show();
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property Fmx::Controls::TControl* Selection = {read=FSelection};
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	TListBoxItem* __fastcall GetFirstSelect();
	__property bool AllowDrag = {read=FAllowDrag, write=SetAllowDrag, default=0};
	__property bool AlternatingRowBackground = {read=FAlternatingRowBackground, write=SetAlternatingRowBackground, default=0};
	__property int Columns = {read=FColumns, write=SetColumns, default=1};
	__property float ItemWidth = {read=FItemWidth, write=SetItemWidth};
	__property float ItemHeight = {read=FItemHeight, write=SetItemHeight};
	__property TListStyle ListStyle = {read=FListStyle, write=SetListStyle, default=0};
	__property TMultiSelectStyle MultiSelectStyle = {read=GetMultiSelectStyle, write=SetMultiSelectStyle, default=0};
	__property bool Sorted = {read=FSorted, write=SetSorted, default=0};
	__property bool ShowCheckboxes = {read=FShowCheckboxes, write=SetShowCheckboxes, default=0};
	__property TListBoxItem* FirstSelectedItem = {read=GetFirstSelect};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnChangeCheck = {read=FOnChangeCheck, write=FOnChangeCheck};
	__property TOnCompareListBoxItemEvent OnCompare = {read=FOnCompare, write=FOnCompare};
	__property TOnListBoxDragChange OnDragChange = {read=FOnDragChange, write=FOnDragChange};
	__property TStringsChangedEvent OnStringsChanged = {read=FStringsChanged, write=FStringsChanged};
	__property TListBoxSelector* SelectionController = {read=FSelector};
	
public:
	__fastcall virtual TCustomListBox(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TCustomListBox();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall Clear();
	DYNAMIC bool __fastcall DragChange(TListBoxItem* const SourceItem, TListBoxItem* const DestItem);
	void __fastcall SelectAll();
	void __fastcall ClearSelection();
	void __fastcall SelectRange(TListBoxItem* const Item1, TListBoxItem* const Item2);
	void __fastcall ScrollToItem(TListBoxItem* const Item);
	TListBoxItem* __fastcall FirstSelectedItemFrom(TListBoxItem* const Item);
	TListBoxItem* __fastcall LastSelectedItemFrom(TListBoxItem* const Item);
	TListBoxItem* __fastcall ItemByPoint(const float X, const float Y);
	TListBoxItem* __fastcall ItemByIndex(const int Idx);
	void __fastcall ItemsExchange(TListBoxItem* Item1, TListBoxItem* Item2);
	virtual void __fastcall Sort(Fmx::Types::_di_TFmxObjectSortCompare Compare);
	void __fastcall NotifyInflated();
	__property float BorderHeight = {read=GetBorderHeight};
	__property int Count = {read=GetCount, nodefault};
	__property TListBoxItem* Selected = {read=GetSelected};
	__property System::Classes::TStrings* Items = {read=FItems, write=SetItems, stored=ItemsStored};
	__property TListBoxItem* ItemDown = {read=FItemDown, write=SetItemDown};
	__property Fmx::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
	__property TListBoxItem* ListItems[int Index] = {read=GetListItem};
	__property int ItemIndex = {read=GetItemIndex, write=SetItemIndex, default=-1};
	__property TListGroupingKind GroupingKind = {read=FGroupingKind, write=SetGroupingKind, default=0};
	__property System::DelphiInterface<System::Sysutils::TPredicate__1<System::UnicodeString> > FilterPredicate = {read=GetFilterPredicate, write=SetFilterPredicate, stored=false};
	__property bool MultiSelect = {read=GetMultiSelect, write=SetMultiSelect, nodefault};
	__property TListBoxItemStyleDefaults* DefaultItemStyles = {read=FDefaultStyles, write=FDefaultStyles};
	__property TItemClickEvent OnItemClick = {read=FOnItemClick, write=FOnItemClick};
private:
	void *__IGlyph;	// Fmx::Actnlist::IGlyph 
	void *__ISearchResponder;	// Fmx::Controls::ISearchResponder 
	void *__IInflatableContent__1;	// Fmx::Controls::IInflatableContent__1<TListBoxItem*> 
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
	// {C73631F4-5AD7-48B9-92D2-CC808B911B5E}
	operator Fmx::Controls::_di_ISearchResponder()
	{
		Fmx::Controls::_di_ISearchResponder intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Controls::ISearchResponder*(void) { return (Fmx::Controls::ISearchResponder*)&__ISearchResponder; }
	#endif
	operator Fmx::Controls::IInflatableContent__1<TListBoxItem*>*(void) { return (Fmx::Controls::IInflatableContent__1<TListBoxItem*>*)&__IInflatableContent__1; }
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


class PASCALIMPLEMENTATION TListBox : public TCustomListBox
{
	typedef TCustomListBox inherited;
	
__published:
	__property Align = {default=0};
	__property AllowDrag = {default=0};
	__property AlternatingRowBackground = {default=0};
	__property Anchors;
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Columns = {default=1};
	__property Cursor = {default=0};
	__property DisableFocusEffect = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property HitTest = {default=1};
	__property Hint = {default=0};
	__property ItemIndex = {default=-1};
	__property ItemHeight = {default=0};
	__property Items;
	__property ItemWidth = {default=0};
	__property Images;
	__property DefaultItemStyles;
	__property GroupingKind = {default=0};
	__property ListStyle = {default=0};
	__property Padding;
	__property MultiSelectStyle = {default=0};
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property ShowCheckboxes = {default=0};
	__property Sorted = {default=0};
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnChange;
	__property OnChangeCheck;
	__property OnCompare;
	__property OnDragChange;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnItemClick;
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
	/* TCustomListBox.Create */ inline __fastcall virtual TListBox(System::Classes::TComponent* AOwner)/* overload */ : TCustomListBox(AOwner) { }
	/* TCustomListBox.Destroy */ inline __fastcall virtual ~TListBox() { }
	
};


class PASCALIMPLEMENTATION TListBoxHeader : public Fmx::Stdctrls::TToolBar
{
	typedef Fmx::Stdctrls::TToolBar inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
public:
	/* TToolBar.Create */ inline __fastcall virtual TListBoxHeader(System::Classes::TComponent* AOwner)/* overload */ : Fmx::Stdctrls::TToolBar(AOwner) { }
	
public:
	/* TPresentedControl.Destroy */ inline __fastcall virtual ~TListBoxHeader() { }
	
private:
	void *__IListBoxHeaderTrait;	// Fmx::Controls::IListBoxHeaderTrait 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C7BDF195-C1E2-48F9-9376-1382C60A6BCC}
	operator Fmx::Controls::_di_IListBoxHeaderTrait()
	{
		Fmx::Controls::_di_IListBoxHeaderTrait intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Controls::IListBoxHeaderTrait*(void) { return (Fmx::Controls::IListBoxHeaderTrait*)&__IListBoxHeaderTrait; }
	#endif
	
};


class PASCALIMPLEMENTATION TListBoxSeparatorItem : public TListBoxItem
{
	typedef TListBoxItem inherited;
	
public:
	System::UnicodeString __fastcall GetDefaultGroupHeaderStyle();
public:
	/* TListBoxItem.Create */ inline __fastcall virtual TListBoxSeparatorItem(System::Classes::TComponent* AOwner)/* overload */ : TListBoxItem(AOwner) { }
	/* TListBoxItem.Destroy */ inline __fastcall virtual ~TListBoxSeparatorItem() { }
	
};


class PASCALIMPLEMENTATION TListBoxGroupHeader : public TListBoxSeparatorItem
{
	typedef TListBoxSeparatorItem inherited;
	
private:
	TListBoxGroupHeader* FCloneRef;
	
protected:
	virtual System::UnicodeString __fastcall DoGetDefaultStyleLookupName(TListBoxItemStyleDefaults* const Defaults);
	virtual void __fastcall DoTextChanged();
	
public:
	__fastcall virtual TListBoxGroupHeader(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TListBoxGroupHeader();
	__property TListBoxGroupHeader* CloneRef = {read=FCloneRef, write=FCloneRef};
};


class PASCALIMPLEMENTATION TListBoxGroupFooter : public TListBoxSeparatorItem
{
	typedef TListBoxSeparatorItem inherited;
	
protected:
	virtual System::UnicodeString __fastcall DoGetDefaultStyleLookupName(TListBoxItemStyleDefaults* const Defaults);
	
public:
	__fastcall virtual TListBoxGroupFooter(System::Classes::TComponent* AOwner)/* overload */;
public:
	/* TListBoxItem.Destroy */ inline __fastcall virtual ~TListBoxGroupFooter() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListBoxSelector : public System::TObject
{
	typedef System::TObject inherited;
	
	
public:
	enum class DECLSPEC_DENUM TKeyAction : unsigned char { Move, Toggle };
	
	
protected:
	TCustomListBox* FListBox;
	int FCurrent;
	int FFirst;
	Fmx::Types::TTimer* FSelectionTimer;
	TListBoxItem* FSelectionTimerTarget;
	bool FInternalChange;
	bool FMouseSelectActive;
	
protected:
	__fastcall virtual TListBoxSelector(TCustomListBox* const ListBox);
	virtual TMultiSelectStyle __fastcall GetMultiSelectStyle() = 0 ;
	void __fastcall UpdateSelection();
	void __fastcall DelayedMouseDown(TListBoxItem* const ItemDown, const System::Classes::TShiftState Shift);
	void __fastcall AbortDelayed();
	bool __fastcall GetMouseSelectActive();
	virtual void __fastcall SetMouseSelectActive(const bool Value);
	
public:
	__fastcall virtual ~TListBoxSelector();
	int __fastcall GetFirst();
	int __fastcall GetCurrent();
	TListBoxItem* __fastcall GetCurrentItem();
	void __fastcall ClearSelection();
	virtual void __fastcall CopySelection(TListBoxSelector* const Other) = 0 ;
	void __fastcall SelectAll();
	bool __fastcall SelectRange(TListBoxItem* const Item1, TListBoxItem* const Item2);
	bool __fastcall SetSelected(TListBoxItem* const Item, const bool Value);
	bool __fastcall SetCurrent(const int Index);
	void __fastcall ItemStateChanged(TListBoxItem* const Item, const bool UserChange);
	virtual void __fastcall MouseSelectStart(TListBoxItem* const Item, const System::Uitypes::TMouseButton Button, const System::Classes::TShiftState Shift);
	virtual void __fastcall MouseSelectMove(TListBoxItem* const Item, const System::Classes::TShiftState Shift);
	virtual void __fastcall MouseSelectFinishing(TListBoxItem* const Item, const System::Uitypes::TMouseButton Button, const System::Classes::TShiftState Shift);
	virtual void __fastcall MouseSelectFinish(TListBoxItem* const Item, const System::Uitypes::TMouseButton Button, const System::Classes::TShiftState Shift);
	virtual void __fastcall KeyboardSelect(const TKeyAction KeyAction, const System::Classes::TShiftState Shift, TListBoxItem* const Item);
	virtual void __fastcall UserSetIndex(const int Index);
	void __fastcall Change();
	virtual void __fastcall DoMouseSelectStart(TListBoxItem* const Item, const System::Classes::TShiftState Shift) = 0 ;
	virtual void __fastcall DoMouseSelectMove(TListBoxItem* const Item, const System::Classes::TShiftState Shift) = 0 ;
	virtual void __fastcall DoMouseSelectFinishing(TListBoxItem* const Item, const System::Classes::TShiftState Shift);
	virtual void __fastcall DoMouseSelectFinish(TListBoxItem* const Item, const System::Classes::TShiftState Shift) = 0 ;
	virtual void __fastcall DoKeyboardSelect(const TKeyAction KeyAction, const System::Classes::TShiftState Shift, TListBoxItem* const Item) = 0 ;
	virtual void __fastcall DoUserSetIndex(const int Index) = 0 ;
	virtual void __fastcall DoItemStateChanged(TListBoxItem* const Item, const bool UserChange);
	__property TMultiSelectStyle MultiSelectStyle = {read=GetMultiSelectStyle, nodefault};
	__property bool MouseSelectActive = {read=GetMouseSelectActive, write=SetMouseSelectActive, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TListBoxSelectorClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TListBoxSelectorClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListBoxSelectorFactory : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static System::StaticArray<TListBoxSelectorClass, 3> FSelectors;
	
public:
	__classmethod TListBoxSelector* __fastcall CreateSelector(TCustomListBox* const ListBox, const TMultiSelectStyle MultiSelectStyle);
	__classmethod void __fastcall RegisterSelector(TMultiSelectStyle MultiSelectStyle, TListBoxSelectorClass Selector);
public:
	/* TObject.Create */ inline __fastcall TListBoxSelectorFactory() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TListBoxSelectorFactory() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TComboListBox : public TCustomListBox
{
	typedef TCustomListBox inherited;
	
protected:
	TCustomComboBox* FComboBox;
	bool FInKeyDown;
	virtual void __fastcall KeyDown(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift);
	virtual System::Classes::TObservers* __fastcall GetObservers();
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	virtual void __fastcall ContentChanged();
	
public:
	__fastcall virtual TComboListBox(System::Classes::TComponent* AOwner)/* overload */;
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
public:
	/* TCustomListBox.Destroy */ inline __fastcall virtual ~TComboListBox() { }
	
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


class PASCALIMPLEMENTATION TCustomComboBox : public Fmx::Controls::TStyledControl
{
	typedef Fmx::Controls::TStyledControl inherited;
	
private:
	int FDropDownCount;
	bool FDroppedDown;
	bool FIsPressed;
	int FOldItemIndex;
	float FItemWidth;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnClosePopup;
	System::Classes::TNotifyEvent FOnPopup;
	Fmx::Imglist::TGlyphImageLink* FImageLink;
	Fmx::Pickers::TDropDownKind FDropDownKind;
	Fmx::Controls::TPopup* FPopup;
	TComboListBox* FListBox;
	int FItemIndex;
	Fmx::Pickers::TCustomListPicker* FListPicker;
	Fmx::Imglist::TCustomImageList* FImages;
	bool FItemsChanged;
	void __fastcall SetItemIndex(const int Value);
	int __fastcall GetItemIndex();
	int __fastcall GetCount();
	void __fastcall SetListBoxResource(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetListBoxResource();
	float __fastcall GetItemHeight();
	void __fastcall SetItemHeight(const float Value);
	void __fastcall SetItemWidth(const float Value);
	Fmx::Controls::TPlacement __fastcall GetPlacement();
	Fmx::Types::TBounds* __fastcall GetPlacementRectangle();
	void __fastcall SetPlacement(const Fmx::Controls::TPlacement Value);
	void __fastcall SetPlacementRectangle(Fmx::Types::TBounds* const Value);
	void __fastcall UpdateCurrentItem();
	System::Classes::TStrings* __fastcall GetItems();
	TListBoxItem* __fastcall GetListItem(int Index);
	TListBoxItem* __fastcall GetSelected();
	void __fastcall SetItems(System::Classes::TStrings* const Value);
	Fmx::Imglist::TCustomImageList* __fastcall GetImages();
	void __fastcall SetImages(Fmx::Imglist::TCustomImageList* const Value);
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	System::Imagelist::TBaseImageList* __fastcall GetImageList();
	void __fastcall SetImageList(System::Imagelist::TBaseImageList* const Value);
	int __fastcall GetItemsCount();
	Fmx::Types::TFmxObject* __fastcall GetItem(const int AIndex);
	bool __fastcall UseNativePicker();
	bool __fastcall ItemsStored();
	void __fastcall HandleStringsChanged(const System::UnicodeString S, const TCustomListBox::TStringsChangeOp Op);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall DoOnValueChangedFromDropDownList(System::TObject* Sender, const int AValueIndex);
	DYNAMIC void __fastcall DoChange();
	void __fastcall DoPopup(System::TObject* Sender);
	void __fastcall DoClosePopup(System::TObject* Sender);
	void __fastcall DoClosePicker(System::TObject* Sender);
	virtual TComboListBox* __fastcall CreateListBox();
	virtual bool __fastcall CanObserve(const int ID);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall DoRealign();
	virtual void __fastcall DoContentPaint(System::TObject* Sender, Fmx::Graphics::TCanvas* Canvas, const System::Types::TRectF &ARect);
	virtual void __fastcall DoExit();
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseWheel(System::Classes::TShiftState Shift, int WheelDelta, bool &Handled);
	virtual void __fastcall KeyDown(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift);
	virtual void __fastcall Loaded();
	virtual void __fastcall InitPicker(Fmx::Pickers::TCustomListPicker* AListPicker);
	virtual void __fastcall RecalculatePopupSize();
	virtual void __fastcall ImagesChanged();
	__property Fmx::Controls::TPopup* Popup = {read=FPopup};
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property float ItemHeight = {read=GetItemHeight, write=SetItemHeight};
	__property float ItemWidth = {read=FItemWidth, write=SetItemWidth};
	__property int DropDownCount = {read=FDropDownCount, write=FDropDownCount, default=8};
	__property Fmx::Controls::TPlacement Placement = {read=GetPlacement, write=SetPlacement, default=0};
	__property Fmx::Types::TBounds* PlacementRectangle = {read=GetPlacementRectangle, write=SetPlacementRectangle};
	__property Fmx::Pickers::TDropDownKind DropDownKind = {read=FDropDownKind, write=FDropDownKind, default=1};
	__property System::UnicodeString ListBoxResource = {read=GetListBoxResource, write=SetListBoxResource};
	__property Fmx::Pickers::TCustomListPicker* Picker = {read=FListPicker};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnClosePopup = {read=FOnClosePopup, write=FOnClosePopup};
	__property System::Classes::TNotifyEvent OnPopup = {read=FOnPopup, write=FOnPopup};
	
public:
	__fastcall virtual TCustomComboBox(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TCustomComboBox();
	virtual void __fastcall SetNewScene(Fmx::Controls::_di_IScene AScene);
	virtual void __fastcall Clear();
	virtual void __fastcall DropDown();
	virtual void __fastcall Sort(Fmx::Types::_di_TFmxObjectSortCompare Compare);
	__property TComboListBox* ListBox = {read=FListBox};
	__property int Count = {read=GetCount, nodefault};
	__property TListBoxItem* Selected = {read=GetSelected};
	__property System::Classes::TStrings* Items = {read=GetItems, write=SetItems, stored=ItemsStored};
	__property Fmx::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
	__property TListBoxItem* ListItems[int Index] = {read=GetListItem};
	__property int ItemIndex = {read=GetItemIndex, write=SetItemIndex, nodefault};
	__property bool DroppedDown = {read=FDroppedDown, nodefault};
	__property bool IsPressed = {read=FIsPressed, nodefault};
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


class PASCALIMPLEMENTATION TComboBox : public TCustomComboBox
{
	typedef TCustomComboBox inherited;
	
public:
	__property PlacementRectangle;
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DisableFocusEffect = {default=0};
	__property DragMode = {default=0};
	__property DropDownCount = {default=8};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Items;
	__property Images;
	__property ItemIndex = {default=-1};
	__property ItemWidth = {default=0};
	__property ItemHeight = {default=0};
	__property ListBoxResource = {default=0};
	__property Padding;
	__property DropDownKind = {default=1};
	__property Opacity;
	__property Margins;
	__property Placement = {default=0};
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
	__property OnChange;
	__property OnClosePopup;
	__property OnPopup;
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
	/* TCustomComboBox.Create */ inline __fastcall virtual TComboBox(System::Classes::TComponent* AOwner)/* overload */ : TCustomComboBox(AOwner) { }
	/* TCustomComboBox.Destroy */ inline __fastcall virtual ~TComboBox() { }
	
};


class PASCALIMPLEMENTATION TMetropolisUIListBoxItem : public TListBoxItem
{
	typedef TListBoxItem inherited;
	
private:
	Fmx::Objects::TImage* FImage;
	Fmx::Layouts::TLayout* FText;
	Fmx::Stdctrls::TPanel* FTextPanel;
	Fmx::Stdctrls::TLabel* FTitle;
	Fmx::Stdctrls::TLabel* FSubTitle;
	Fmx::Stdctrls::TLabel* FDescription;
	int FIconSize;
	void __fastcall SkipIconSize(System::Classes::TReader* Reader);
	void __fastcall SkipAlign(System::Classes::TReader* Reader);
	
protected:
	virtual void __fastcall SetIcon(Fmx::Graphics::TBitmap* const Bitmap);
	virtual Fmx::Graphics::TBitmap* __fastcall GetIcon();
	virtual void __fastcall SetTitle(const System::UnicodeString Title);
	virtual System::UnicodeString __fastcall GetTitle();
	virtual void __fastcall SetSubTitle(const System::UnicodeString SubTitle);
	virtual System::UnicodeString __fastcall GetSubTitle();
	virtual void __fastcall SetDescription(const System::UnicodeString Description);
	virtual System::UnicodeString __fastcall GetDescription();
	virtual void __fastcall SetIconSize(int Value);
	virtual void __fastcall SetParent(Fmx::Types::TFmxObject* const AParent);
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	HIDESBASE void __fastcall OnBitmapChanged(System::TObject* Sender);
	virtual void __fastcall Resize();
	virtual void __fastcall DoRealign();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	
public:
	__fastcall virtual TMetropolisUIListBoxItem(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TMetropolisUIListBoxItem();
	__property int IconSize = {read=FIconSize, write=SetIconSize, nodefault};
	
__published:
	__property System::UnicodeString Title = {read=GetTitle, write=SetTitle};
	__property System::UnicodeString SubTitle = {read=GetSubTitle, write=SetSubTitle};
	__property System::UnicodeString Description = {read=GetDescription, write=SetDescription};
	__property Fmx::Graphics::TBitmap* Icon = {read=GetIcon, write=SetIcon};
	__property Padding;
	__property Margins;
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Listbox */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_LISTBOX)
using namespace Fmx::Listbox;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_ListboxHPP
