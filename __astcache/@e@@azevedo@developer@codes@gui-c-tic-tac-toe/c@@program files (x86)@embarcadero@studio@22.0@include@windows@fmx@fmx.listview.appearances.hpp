// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.ListView.Appearances.pas' rev: 35.00 (Windows)

#ifndef Fmx_Listview_AppearancesHPP
#define Fmx_Listview_AppearancesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Collections.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Rtti.hpp>
#include <FMX.Types.hpp>
#include <FMX.ListView.Types.hpp>
#include <FMX.ListView.Adapters.Base.hpp>
#include <FMX.Graphics.hpp>
#include <System.Types.hpp>
#include <FMX.TextLayout.hpp>
#include <System.UITypes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Utils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Listview
{
namespace Appearances
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IAppearanceItemOwner;
typedef System::DelphiInterface<IAppearanceItemOwner> _di_IAppearanceItemOwner;
__interface DELPHIINTERFACE IPublishedAppearanceOwner;
typedef System::DelphiInterface<IPublishedAppearanceOwner> _di_IPublishedAppearanceOwner;
class DELPHICLASS TAppearanceNames;
class DELPHICLASS TAppearanceListViewItems;
class DELPHICLASS TListViewItem;
class DELPHICLASS TObjectAppearance;
class DELPHICLASS TCommonObjectAppearance;
class DELPHICLASS TCustomTextObjectAppearance;
class DELPHICLASS TTextObjectAppearance;
class DELPHICLASS TCustomImageObjectAppearance;
class DELPHICLASS TImageObjectAppearance;
class DELPHICLASS TCustomAccessoryObjectAppearance;
class DELPHICLASS TAccessoryObjectAppearance;
class DELPHICLASS TCustomTextButtonObjectAppearance;
class DELPHICLASS TTextButtonObjectAppearance;
class DELPHICLASS TCustomGlyphButtonObjectAppearance;
class DELPHICLASS TGlyphButtonObjectAppearance;
class DELPHICLASS TAppearanceObjects;
class DELPHICLASS TItemAppearanceObjects;
struct TRegisteredAppearance;
class DELPHICLASS TItemAppearanceProperties;
class DELPHICLASS TEmptyItemObjects;
class DELPHICLASS TNullItemObjects;
class DELPHICLASS TCustomItemObjects;
class DELPHICLASS TPresetItemObjects;
class DELPHICLASS TPublishedAppearance;
class DELPHICLASS TPublishedObjects;
struct TRegisterAppearanceValue;
class DELPHICLASS TAppearancesRegistry;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TItemControlEvent)(System::TObject* const Sender, Fmx::Listview::Types::TListItem* const AItem, Fmx::Listview::Types::TListItemSimpleControl* const AObject);

__interface  INTERFACE_UUID("{A3CAF8E2-ECD5-4989-9B03-B3E79B02DFBC}") IAppearanceItemOwner  : public System::IInterface 
{
#ifndef _WIN64
	virtual System::DynamicArray<TItemAppearanceProperties*> __fastcall GetAppearanceProperties() = 0 ;
#else /* _WIN64 */
	virtual System::TArray__1<TItemAppearanceProperties*> __fastcall GetAppearanceProperties() = 0 ;
#endif /* _WIN64 */
	virtual void __fastcall BeginUpdate() = 0 ;
	virtual void __fastcall EndUpdate() = 0 ;
};

__interface  INTERFACE_UUID("{990AB866-92AB-4552-BB12-223F44CFD062}") IPublishedAppearanceOwner  : public System::IInterface 
{
	virtual void __fastcall ItemAppearanceChange(TItemAppearanceProperties* const Sender) = 0 ;
	virtual void __fastcall ItemAppearanceChangeObjects(TItemAppearanceProperties* const Sender) = 0 ;
	virtual void __fastcall ItemAppearanceChangeHeight(TItemAppearanceProperties* const Sender) = 0 ;
	virtual bool __fastcall IsEditMode() = 0 ;
	virtual int __fastcall GetHeaderHeight() = 0 ;
	virtual void __fastcall SetHeaderHeight(const int Value) = 0 ;
	virtual int __fastcall GetFooterHeight() = 0 ;
	virtual void __fastcall SetFooterHeight(const int Value) = 0 ;
	virtual int __fastcall GetItemHeight() = 0 ;
	virtual void __fastcall SetItemHeight(const int Value) = 0 ;
	virtual int __fastcall GetItemEditHeight() = 0 ;
	virtual void __fastcall SetItemEditHeight(const int Value) = 0 ;
	virtual System::UnicodeString __fastcall GetFooterAppearanceName() = 0 ;
	virtual void __fastcall SetFooterAppearanceName(const System::UnicodeString Value) = 0 ;
	virtual System::UnicodeString __fastcall GetHeaderAppearanceName() = 0 ;
	virtual void __fastcall SetHeaderAppearanceName(const System::UnicodeString Value) = 0 ;
	virtual System::UnicodeString __fastcall GetItemAppearanceName() = 0 ;
	virtual void __fastcall SetItemAppearanceName(const System::UnicodeString Value) = 0 ;
	virtual System::UnicodeString __fastcall GetItemEditAppearanceName() = 0 ;
	virtual void __fastcall SetItemEditAppearanceName(const System::UnicodeString Value) = 0 ;
	virtual TItemAppearanceProperties* __fastcall GetFooterAppearanceProperties() = 0 ;
	virtual TItemAppearanceProperties* __fastcall GetHeaderAppearanceProperties() = 0 ;
	virtual TItemAppearanceProperties* __fastcall GetItemAppearanceProperties() = 0 ;
	virtual TItemAppearanceProperties* __fastcall GetItemEditAppearanceProperties() = 0 ;
	virtual void __fastcall SetItemAppearanceObjects(TPublishedObjects* const Value) = 0 ;
	virtual TPublishedObjects* __fastcall GetItemAppearanceObjects() = 0 ;
	__property int FooterHeight = {read=GetFooterHeight, write=SetFooterHeight};
	__property int HeaderHeight = {read=GetHeaderHeight, write=SetHeaderHeight};
	__property int ItemHeight = {read=GetItemHeight, write=SetItemHeight};
	__property int ItemEditHeight = {read=GetItemEditHeight, write=SetItemEditHeight};
	__property System::UnicodeString FooterAppearanceName = {read=GetFooterAppearanceName, write=SetFooterAppearanceName};
	__property System::UnicodeString HeaderAppearanceName = {read=GetHeaderAppearanceName, write=SetHeaderAppearanceName};
	__property System::UnicodeString ItemAppearanceName = {read=GetItemAppearanceName, write=SetItemAppearanceName};
	__property System::UnicodeString ItemEditAppearanceName = {read=GetItemEditAppearanceName, write=SetItemEditAppearanceName};
	__property TItemAppearanceProperties* FooterAppearanceProperties = {read=GetFooterAppearanceProperties};
	__property TItemAppearanceProperties* HeaderAppearanceProperties = {read=GetHeaderAppearanceProperties};
	__property TItemAppearanceProperties* ItemAppearanceProperties = {read=GetItemAppearanceProperties};
	__property TItemAppearanceProperties* ItemEditAppearanceProperties = {read=GetItemEditAppearanceProperties};
	__property TPublishedObjects* ItemAppearanceObjects = {read=GetItemAppearanceObjects, write=SetItemAppearanceObjects};
};

typedef System::Generics::Collections::TPair__2<System::UnicodeString,System::UnicodeString> TAppearanceNamePair;

enum class DECLSPEC_DENUM TAppearanceType : unsigned char { Item, ItemEdit, Header, Footer };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TAppearanceNames : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TAppearanceNames_Empty L""
	
	#define TAppearanceNames_Null L"Null"
	
	#define TAppearanceNames_Custom L"Custom"
	
	#define TAppearanceNames_ListHeader L"ListHeader"
	
	#define TAppearanceNames_ListItem L"ListItem"
	
	#define TAppearanceNames_ListItemDelete L"ListItemDelete"
	
	#define TAppearanceNames_ListItemShowCheck L"ListItemShowCheck"
	
	#define TAppearanceNames_ListItemRightDetail L"ListItemRightDetail"
	
	#define TAppearanceNames_ListItemRightDetailDelete L"ListItemRightDetailDelete"
	
	#define TAppearanceNames_ListItemRightDetailShowCheck L"ListItemRightDetailShowCheck"
	
	#define TAppearanceNames_ImageListItem L"ImageListItem"
	
	#define TAppearanceNames_ImageListItemDelete L"ImageListItemDelete"
	
	#define TAppearanceNames_ImageListItemShowCheck L"ImageListItemShowCheck"
	
	#define TAppearanceNames_ImageListItemBottomDetail L"ImageListItemBottomDetail"
	
	#define TAppearanceNames_ImageListItemBottomDetailShowCheck L"ImageListItemBottomDetailShowCheck"
	
	#define TAppearanceNames_ImageListItemBottomDetailRightButton L"ImageListItemBottomDetailRightButton"
	
	#define TAppearanceNames_ImageListItemBottomDetailRightButtonShowCheck L"ImageListItemBottomDetailRightButtonShowCheck"
	
	#define TAppearanceNames_ImageListItemRightButton L"ImageListItemRightButton"
	
	#define TAppearanceNames_ImageListItemRightButtonDelete L"ImageListItemRightButtonDelete"
	
	#define TAppearanceNames_ImageListItemRightButtonShowCheck L"ImageListItemRightButtonShowCheck"
	
public:
	/* TObject.Create */ inline __fastcall TAppearanceNames() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAppearanceNames() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TAppearanceListViewItems : public Fmx::Listview::Adapters::Base::TFilterableListViewItems
{
	typedef Fmx::Listview::Adapters::Base::TFilterableListViewItems inherited;
	
public:
	TListViewItem* operator[](const int Index) { return this->AppearanceItem[Index]; }
	
private:
	Fmx::Controls::TControl* FOwnerControl;
	System::Generics::Collections::TList__1<Fmx::Listview::Types::TListItem*>* FNewItems;
	Fmx::Listview::Types::_di_IListViewFilterable FAsFilterable;
	Fmx::Listview::Types::_di_IListViewPresentationParent FPresentationParent;
	Fmx::Listview::Types::_di_IListViewController FListViewController;
	Fmx::Listview::Types::TBeforeItemAddedNotify FBeforeItemAdded;
	Fmx::Listview::Types::TAfterItemAddedNotify FAfterItemAdded;
	Fmx::Listview::Types::TBeforeItemDeletedNotify FBeforeItemDeleted;
	Fmx::Listview::Types::TAfterItemDeletedNotify FAfterItemDeleted;
	int FCheckedCount;
	Fmx::Listview::Types::TListItem* __fastcall EditorAdd();
	Fmx::Listview::Types::TListItem* __fastcall EditorInsert(const int Index);
	void __fastcall SetBeforeItemAdded(const Fmx::Listview::Types::TBeforeItemAddedNotify AHandler);
	void __fastcall SetAfterItemAdded(const Fmx::Listview::Types::TAfterItemAddedNotify AHandler);
	void __fastcall SetBeforeItemDeleted(const Fmx::Listview::Types::TBeforeItemDeletedNotify AHandler);
	void __fastcall SetAfterItemDeleted(const Fmx::Listview::Types::TAfterItemDeletedNotify AHandler);
	System::UnicodeString __fastcall GetText(const int Index);
	System::UnicodeString __fastcall GetIndexTitle(const int Index);
	Fmx::Listview::Types::TListItemGlyphButton* __fastcall GetGlyphButtonDrawable(const int Index);
	Fmx::Listview::Types::TListItemTextButton* __fastcall GetTextButtonDrawable(const int Index);
	System::Rtti::TValue __fastcall GetItemData(const int Index, const System::UnicodeString DataIndex);
	void __fastcall SetItemData(const int Index, const System::UnicodeString DataIndex, const System::Rtti::TValue &AValue);
	bool __fastcall GetHasData(const int Index, const System::UnicodeString DataIndex);
	NativeInt __fastcall GetItemTag(const int Index);
	void __fastcall SetItemTag(const int Index, const NativeInt AValue);
	TListViewItem* __fastcall GetAppearanceItem(const int Index);
	
protected:
	virtual void __fastcall DoCreateNewViews();
	virtual bool __fastcall DoFilterItem(Fmx::Listview::Types::TListItem* const Item);
	virtual void __fastcall DoResetViews(const Fmx::Listview::Types::TListItemPurposes APurposes);
	virtual void __fastcall DoClear();
	virtual TListViewItem* __fastcall DoAddItem(const int Index = 0xffffffff);
	
protected:
	__property Fmx::Controls::TControl* OwnerControl = {read=FOwnerControl};
	_di_IAppearanceItemOwner __fastcall AppearanceItemOwner();
	
public:
	__fastcall TAppearanceListViewItems(Fmx::Controls::TControl* const Owner);
	__fastcall virtual ~TAppearanceListViewItems();
	HIDESBASE void __fastcall Sort(System::DelphiInterface<System::Generics::Defaults::IComparer__1<TListViewItem*> > AComparer)/* overload */;
	bool __fastcall AnyChecked(const bool AChecked = true);
	int __fastcall FirstChecked(const bool AChecked = true);
	int __fastcall CheckedCount(const bool AChecked = true);
	void __fastcall CheckAll(const bool AChecked = true)/* overload */;
	void __fastcall CheckAll(const System::DelphiInterface<System::Sysutils::TFunc__2<int,bool> > ACallback, const bool AChecked = true)/* overload */;
	bool __fastcall GetChecked(const int Index);
	void __fastcall SetChecked(const int Index, const bool Value);
	__property bool Checked[const int Index] = {read=GetChecked, write=SetChecked};
#ifndef _WIN64
	System::DynamicArray<int> __fastcall CheckedIndexes(const bool AChecked)/* overload */;
	System::DynamicArray<int> __fastcall CheckedIndexes(const Fmx::Listview::Adapters::Base::TListViewItems::TOrder AOrder, const bool AChecked)/* overload */;
#else /* _WIN64 */
	System::TArray__1<int> __fastcall CheckedIndexes(const bool AChecked)/* overload */;
	System::TArray__1<int> __fastcall CheckedIndexes(const Fmx::Listview::Adapters::Base::TListViewItems::TOrder AOrder, const bool AChecked)/* overload */;
#endif /* _WIN64 */
	HIDESBASE System::Generics::Collections::TEnumerator__1<TListViewItem*>* __fastcall GetEnumerator();
	int __fastcall ReindexAndFindItem(TListViewItem* const AItem);
	TListViewItem* __fastcall Add();
	TListViewItem* __fastcall Insert(const int Index);
	void __fastcall Delete(const int Index);
	void __fastcall Clear();
	TListViewItem* __fastcall AddItem(const int Index = 0xffffffff);
	__property TListViewItem* AppearanceItem[const int Index] = {read=GetAppearanceItem/*, default*/};
	__property Fmx::Listview::Types::_di_IListViewFilterable AsFilterable = {read=FAsFilterable};
private:
	void *__IListViewExtrasProvider;	// Fmx::Listview::Types::IListViewExtrasProvider 
	void *__IListViewGlyphButtonProvider;	// Fmx::Listview::Types::IListViewGlyphButtonProvider 
	void *__IListViewTextButtonProvider;	// Fmx::Listview::Types::IListViewTextButtonProvider 
	void *__IListViewTextProvider;	// Fmx::Listview::Types::IListViewTextProvider 
	void *__IListViewFilterable;	// Fmx::Listview::Types::IListViewFilterable 
	void *__IListViewEditor;	// Fmx::Listview::Types::IListViewEditor 
	void *__IListViewCheckProvider;	// Fmx::Listview::Types::IListViewCheckProvider 
	void *__IListViewAdapter;	// Fmx::Listview::Types::IListViewAdapter 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0BCFB611-3763-4C49-974F-1104F6116D6E}
	operator Fmx::Listview::Types::_di_IListViewExtrasProvider()
	{
		Fmx::Listview::Types::_di_IListViewExtrasProvider intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Listview::Types::IListViewExtrasProvider*(void) { return (Fmx::Listview::Types::IListViewExtrasProvider*)&__IListViewExtrasProvider; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {64FF4B01-E378-4F40-A9A5-E4C1A7C942D6}
	operator Fmx::Listview::Types::_di_IListViewGlyphButtonProvider()
	{
		Fmx::Listview::Types::_di_IListViewGlyphButtonProvider intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Listview::Types::IListViewGlyphButtonProvider*(void) { return (Fmx::Listview::Types::IListViewGlyphButtonProvider*)&__IListViewGlyphButtonProvider; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {42CC3926-0A23-465B-9ECE-229C60B3BA8E}
	operator Fmx::Listview::Types::_di_IListViewTextButtonProvider()
	{
		Fmx::Listview::Types::_di_IListViewTextButtonProvider intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Listview::Types::IListViewTextButtonProvider*(void) { return (Fmx::Listview::Types::IListViewTextButtonProvider*)&__IListViewTextButtonProvider; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C6D52C15-423D-4B2F-AC87-7D7D47A9C7CC}
	operator Fmx::Listview::Types::_di_IListViewTextProvider()
	{
		Fmx::Listview::Types::_di_IListViewTextProvider intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Listview::Types::IListViewTextProvider*(void) { return (Fmx::Listview::Types::IListViewTextProvider*)&__IListViewTextProvider; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {02F85899-8787-4378-9622-105820EB4577}
	operator Fmx::Listview::Types::_di_IListViewFilterable()
	{
		Fmx::Listview::Types::_di_IListViewFilterable intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Listview::Types::IListViewFilterable*(void) { return (Fmx::Listview::Types::IListViewFilterable*)&__IListViewFilterable; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {19A0606B-8C8E-49B2-A6B3-A708B7B8AD46}
	operator Fmx::Listview::Types::_di_IListViewEditor()
	{
		Fmx::Listview::Types::_di_IListViewEditor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Listview::Types::IListViewEditor*(void) { return (Fmx::Listview::Types::IListViewEditor*)&__IListViewEditor; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {032EB974-1C25-4B5E-BB07-01FA82554748}
	operator Fmx::Listview::Types::_di_IListViewCheckProvider()
	{
		Fmx::Listview::Types::_di_IListViewCheckProvider intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Listview::Types::IListViewCheckProvider*(void) { return (Fmx::Listview::Types::IListViewCheckProvider*)&__IListViewCheckProvider; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6E850F76-BABD-4756-BF05-A30C66A692AD}
	operator Fmx::Listview::Types::_di_IListViewAdapter()
	{
		Fmx::Listview::Types::_di_IListViewAdapter intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Listview::Types::IListViewAdapter*(void) { return (Fmx::Listview::Types::IListViewAdapter*)&__IListViewAdapter; }
	#endif
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListViewItem : public Fmx::Listview::Types::TListItem
{
	typedef Fmx::Listview::Types::TListItem inherited;
	
	
private:
	enum class DECLSPEC_DENUM TFlag : unsigned char { HasButtonText, HasCheck };
	
	typedef System::Set<TFlag, _DELPHI_SET_ENUMERATOR(TFlag::HasButtonText), _DELPHI_SET_ENUMERATOR(TFlag::HasCheck)> TFlags;
	
	
public:
	class DELPHICLASS TObjectNames;
	class PASCALIMPLEMENTATION TObjectNames : public System::TObject
	{
		typedef System::TObject inherited;
		
	public:
		static const System::WideChar Text = (System::WideChar)(0x54);
		
		static const System::WideChar Detail = (System::WideChar)(0x44);
		
		static const System::WideChar Accessory = (System::WideChar)(0x41);
		
		static const System::WideChar TextButton = (System::WideChar)(0x42);
		
		static const System::WideChar GlyphButton = (System::WideChar)(0x47);
		
		static const System::WideChar Image = (System::WideChar)(0x49);
		
	public:
		/* TObject.Create */ inline __fastcall TObjectNames() : System::TObject() { }
		/* TObject.Destroy */ inline __fastcall virtual ~TObjectNames() { }
		
	};
	
	
	class DELPHICLASS TMemberNames;
	class PASCALIMPLEMENTATION TMemberNames : public System::TObject
	{
		typedef System::TObject inherited;
		
	public:
		#define TListViewItem_TMemberNames_Text L"Text"
		
		#define TListViewItem_TMemberNames_Detail L"Detail"
		
		#define TListViewItem_TMemberNames_ButtonText L"ButtonText"
		
		#define TListViewItem_TMemberNames_Bitmap L"Bitmap"
		
		#define TListViewItem_TMemberNames_ImageIndex L"ImageIndex"
		
	public:
		/* TObject.Create */ inline __fastcall TMemberNames() : System::TObject() { }
		/* TObject.Destroy */ inline __fastcall virtual ~TMemberNames() { }
		
	};
	
	
	class DELPHICLASS TListViewItemObjects;
	class PASCALIMPLEMENTATION TListViewItemObjects : public Fmx::Listview::Types::TListItemView
	{
		typedef Fmx::Listview::Types::TListItemView inherited;
		
	private:
		TItemAppearanceObjects* FAppearance;
		Fmx::Listview::Types::TListItemText* __fastcall GetDetailObject();
		Fmx::Listview::Types::TListItemGlyphButton* __fastcall GetGlyphButton();
		Fmx::Listview::Types::TListItemImage* __fastcall GetImageObject();
		Fmx::Listview::Types::TListItemTextButton* __fastcall GetTextButton();
		Fmx::Listview::Types::TListItemText* __fastcall GetTextObject();
		Fmx::Listview::Types::TListItemAccessory* __fastcall GetAccessoryObject();
		
	public:
		virtual void __fastcall Clear();
		template<typename T> T __fastcall FindObjectT(const System::UnicodeString AName);
		__property Fmx::Listview::Types::TListItemText* TextObject = {read=GetTextObject};
		__property Fmx::Listview::Types::TListItemText* DetailObject = {read=GetDetailObject};
		__property Fmx::Listview::Types::TListItemImage* ImageObject = {read=GetImageObject};
		__property Fmx::Listview::Types::TListItemTextButton* TextButton = {read=GetTextButton};
		__property Fmx::Listview::Types::TListItemGlyphButton* GlyphButton = {read=GetGlyphButton};
		__property Fmx::Listview::Types::TListItemAccessory* AccessoryObject = {read=GetAccessoryObject};
		__property TItemAppearanceObjects* Appearance = {read=FAppearance, write=FAppearance};
	public:
		/* TListItemView.Create */ inline __fastcall TListViewItemObjects(Fmx::Listview::Types::TListItem* const AOwner) : Fmx::Listview::Types::TListItemView(AOwner) { }
		/* TListItemView.Destroy */ inline __fastcall virtual ~TListViewItemObjects() { }
		
	};
	
	
	
private:
	enum class DECLSPEC_DENUM TDirtyDrawable : unsigned char { Text, Detail, Check, ButtonText, Accessory, ImageIndex, BitmapValue, BitmapRef };
	
	typedef System::Set<TDirtyDrawable, _DELPHI_SET_ENUMERATOR(TDirtyDrawable::Text), _DELPHI_SET_ENUMERATOR(TDirtyDrawable::BitmapRef)> TDirtyDrawables;
	
	
private:
	System::Generics::Collections::TDictionary__2<System::UnicodeString,System::Rtti::TValue>* FData;
	System::Generics::Collections::TDictionary__2<System::UnicodeString,Fmx::Graphics::TBitmap*>* FDataBitmaps;
	TFlags FFlags;
	System::UnicodeString FText;
	System::UnicodeString FDetail;
	System::UnicodeString FIndexTitle;
	System::UnicodeString FButtonText;
	Fmx::Listview::Types::TAccessoryType FAccessory;
	Fmx::Graphics::TBitmap* FBitmap;
	bool FChecked;
	int FImageIndex;
	Fmx::Graphics::TBitmap* FBitmapRef;
	bool FCreatingObjectsGuard;
	TDirtyDrawables FDirtyDrawables;
	Fmx::Listview::Types::_di_IListViewPresentationParent FPresentationParent;
	void __fastcall SetText(const System::UnicodeString Value);
	Fmx::Graphics::TBitmap* __fastcall GetBitmap();
	void __fastcall SetAccessory(const Fmx::Listview::Types::TAccessoryType Value);
	void __fastcall SetDetail(const System::UnicodeString Value);
	void __fastcall SetButtonText(const System::UnicodeString Value);
	void __fastcall SetImageIndex(int Value);
	void __fastcall SetBitmap(Fmx::Graphics::TBitmap* const Value);
	void __fastcall OnBitmapChanged(System::TObject* Sender);
	void __fastcall SetBitmapRef(Fmx::Graphics::TBitmap* const Value);
	void __fastcall CheckBitmap();
	bool __fastcall GetChecked();
	void __fastcall SetChecked(const bool Value);
	TListViewItemObjects* __fastcall GetViewObjects();
	System::Rtti::TValue __fastcall GetData(const System::UnicodeString AIndex);
	void __fastcall SetData(const System::UnicodeString AIndex, const System::Rtti::TValue &AValue);
	System::UnicodeString __fastcall GetIndexTitle();
	void __fastcall SetIndexTitle(const System::UnicodeString Value);
	void __fastcall UpdateDrawables();
	
protected:
	virtual int __fastcall GetIndex();
	bool __fastcall GetHasButtonText();
	bool __fastcall GetHasData(const System::UnicodeString AIndex);
	virtual Fmx::Listview::Types::TListItem::TListItemViewType __fastcall ListItemObjectsClass();
	virtual void __fastcall SetPurpose(const Fmx::Listview::Types::TListItemPurpose AValue);
	virtual void __fastcall InvalidateHeights();
	void __fastcall ClearData(const System::UnicodeString AIndex);
	
public:
	__fastcall TListViewItem(TAppearanceListViewItems* const Owner, Fmx::Listview::Types::_di_IListViewPresentationParent PresentationParent, Fmx::Listview::Types::_di_IListViewController AController);
	__fastcall virtual ~TListViewItem();
	virtual void __fastcall CreateObjects();
	virtual void __fastcall WillBePainted();
	__property System::UnicodeString Text = {read=FText, write=SetText};
	__property System::UnicodeString Detail = {read=FDetail, write=SetDetail};
	__property System::UnicodeString IndexTitle = {read=GetIndexTitle, write=SetIndexTitle};
	__property Fmx::Listview::Types::TAccessoryType Accessory = {read=FAccessory, write=SetAccessory, nodefault};
	__property Fmx::Graphics::TBitmap* Bitmap = {read=GetBitmap, write=SetBitmap};
	__property Fmx::Graphics::TBitmap* BitmapRef = {read=FBitmapRef, write=SetBitmapRef};
	__property System::UnicodeString ButtonText = {read=FButtonText, write=SetButtonText};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property bool Checked = {read=GetChecked, write=SetChecked, nodefault};
	__property TListViewItemObjects* Objects = {read=GetViewObjects};
	__property System::Rtti::TValue Data[const System::UnicodeString AIndex] = {read=GetData, write=SetData};
	__property bool HasData[const System::UnicodeString AIndex] = {read=GetHasData};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef TListViewItem TAppearanceListViewItem;

class PASCALIMPLEMENTATION TObjectAppearance : public System::Classes::TInterfacedPersistent
{
	typedef System::Classes::TInterfacedPersistent inherited;
	
	
public:
	typedef System::Generics::Collections::TPair__2<System::UnicodeString,System::UnicodeString> TDataMember;
	
#ifndef _WIN64
	typedef System::DynamicArray<System::Generics::Collections::TPair__2<System::UnicodeString,System::UnicodeString> > TDataMembers;
#else /* _WIN64 */
	typedef System::TArray__1<System::Generics::Collections::TPair__2<System::UnicodeString,System::UnicodeString> > TDataMembers;
#endif /* _WIN64 */
	
	
private:
	TItemAppearanceObjects* FOwner;
	System::UnicodeString FName;
	TObjectAppearance* FDefaultValues;
	bool FVisible;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnHeightChange;
	bool FInitializing;
#ifndef _WIN64
	System::DynamicArray<System::Generics::Collections::TPair__2<System::UnicodeString,System::UnicodeString> > FDataMembers;
#else /* _WIN64 */
	System::TArray__1<System::Generics::Collections::TPair__2<System::UnicodeString,System::UnicodeString> > FDataMembers;
#endif /* _WIN64 */
	bool FUsingDefaultValues;
	Fmx::Types::_di_IPersistentShim FShim;
	void __fastcall SetDefaultValues(TObjectAppearance* const Value);
	bool __fastcall IgnoreChanges();
	void __fastcall SetVisible(const bool Value);
	System::Types::TRect __fastcall GetBoundsRect();
	System::Classes::TPersistent* __fastcall GetDesignParent();
	void __fastcall BindShim(Fmx::Types::_di_IPersistentShim AShim);
	void __fastcall UnbindShim();
	bool __fastcall BeingDesigned();
	
protected:
	virtual void __fastcall DoChange();
	virtual void __fastcall DoHeightChange _DEPRECATED_ATTRIBUTE0 ();
	virtual bool __fastcall IsActive();
	virtual int __fastcall GetHeight();
	virtual TObjectAppearance* __fastcall CreateDefaultValues();
	
public:
	__fastcall virtual TObjectAppearance()/* overload */;
	__fastcall TObjectAppearance(bool AIsDefaultValues)/* overload */;
	__fastcall virtual ~TObjectAppearance();
	virtual void __fastcall RestoreDefaults();
	virtual void __fastcall AfterConstruction();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	virtual void __fastcall CreateObject(TListViewItem* const AListViewItem) = 0 ;
	virtual void __fastcall ResetObject(TListViewItem* const AListViewItem) = 0 ;
	__property TObjectAppearance* DefaultValues = {read=FDefaultValues, write=SetDefaultValues};
	__property TItemAppearanceObjects* Owner = {read=FOwner, write=FOwner};
	__property System::UnicodeString Name = {read=FName, write=FName};
#ifndef _WIN64
	__property System::DynamicArray<System::Generics::Collections::TPair__2<System::UnicodeString,System::UnicodeString> > DataMembers = {read=FDataMembers, write=FDataMembers};
#else /* _WIN64 */
	__property System::TArray__1<System::Generics::Collections::TPair__2<System::UnicodeString,System::UnicodeString> > DataMembers = {read=FDataMembers, write=FDataMembers};
#endif /* _WIN64 */
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnHeightChange = {read=FOnHeightChange, write=FOnHeightChange};
	__property int Height = {read=GetHeight, nodefault};
	__property bool Visible = {read=FVisible, write=SetVisible, nodefault};
private:
	void *__IDesignablePersistent;	// Fmx::Types::IDesignablePersistent 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4A731994-9060-4F3C-92D7-C123B04601D4}
	operator Fmx::Types::_di_IDesignablePersistent()
	{
		Fmx::Types::_di_IDesignablePersistent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IDesignablePersistent*(void) { return (Fmx::Types::IDesignablePersistent*)&__IDesignablePersistent; }
	#endif
	
};


#ifndef _WIN64
typedef System::TMetaClass* TListItemObjectClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TListItemObjectClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TCommonObjectAppearance : public TObjectAppearance
{
	typedef TObjectAppearance inherited;
	
private:
	float FWidth;
	float FHeight;
	Fmx::Listview::Types::TListItemAlign FAlign;
	Fmx::Listview::Types::TListItemAlign FVertAlign;
	Fmx::Types::TPosition* FPlaceOffset;
	Fmx::Types::TPosition* FInternalPlaceOffset;
	float FInternalWidth;
	float FInternalHeight;
	float FOpacity;
	void __fastcall SetAlign(const Fmx::Listview::Types::TListItemAlign Value);
	void __fastcall SetPlaceOffset(Fmx::Types::TPosition* const Value);
	void __fastcall SetVertAlign(const Fmx::Listview::Types::TListItemAlign Value);
	void __fastcall SetHeight(const float Value);
	void __fastcall SetWidth(const float Value);
	void __fastcall OnPlaceOffsetChange(System::TObject* Sender);
	void __fastcall SetInternalPlaceOffset(Fmx::Types::TPosition* const Value);
	void __fastcall SetOpacity(const float Value);
	void __fastcall SetInternalWidth(const float Value);
	void __fastcall SetInternalHeight(const float Value);
	
private:
	float __fastcall GetActualHeight();
	System::Types::TPointF __fastcall GetActualPlaceOffset();
	float __fastcall GetActualWidth();
	float __fastcall GetWidthWhenVisible();
	float __fastcall GetHeightWhenVisible();
	System::Types::TPointF __fastcall GetSizeWhenVisible();
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* ADest);
	virtual void __fastcall InitDefaultValues(TCommonObjectAppearance* const ADefaults);
	template<typename T> void __fastcall ResetObjectT(TListViewItem* const AListViewItem);
	bool __fastcall IsAlignStored();
	bool __fastcall IsVertAlignStored();
	bool __fastcall IsVisibleStored();
	bool __fastcall IsPlaceOffsetStored();
	bool __fastcall IsWidthStored();
	bool __fastcall IsHeightStored();
	bool __fastcall IsOpacityStored();
	void __fastcall SetBoundsRect(const System::Types::TRect &AValue);
	
public:
	__fastcall virtual TCommonObjectAppearance()/* overload */;
	__fastcall virtual ~TCommonObjectAppearance();
	__property float ActualHeight = {read=GetActualHeight};
	__property float ActualWidth = {read=GetActualWidth};
	__property float WidthWhenVisible = {read=GetWidthWhenVisible};
	__property float HeightWhenVisible = {read=GetHeightWhenVisible};
	__property System::Types::TPointF SizeWhenVisible = {read=GetSizeWhenVisible};
	__property System::Types::TPointF ActualPlaceOffset = {read=GetActualPlaceOffset};
	__property float InternalWidth = {read=FInternalWidth, write=SetInternalWidth};
	__property float InternalHeight = {read=FInternalHeight, write=SetInternalHeight};
	__property Fmx::Types::TPosition* InternalPlaceOffset = {read=FInternalPlaceOffset, write=SetInternalPlaceOffset};
	__property float Width = {read=FWidth, write=SetWidth};
	__property float Height = {read=FHeight, write=SetHeight};
	__property Fmx::Listview::Types::TListItemAlign Align = {read=FAlign, write=SetAlign, nodefault};
	__property Fmx::Listview::Types::TListItemAlign VertAlign = {read=FVertAlign, write=SetVertAlign, nodefault};
	__property Fmx::Types::TPosition* PlaceOffset = {read=FPlaceOffset, write=SetPlaceOffset};
	__property float Opacity = {read=FOpacity, write=SetOpacity};
public:
	/* TObjectAppearance.Create */ inline __fastcall TCommonObjectAppearance(bool AIsDefaultValues)/* overload */ : TObjectAppearance(AIsDefaultValues) { }
	
private:
	void *__IMovablePersistent;	// Fmx::Types::IMovablePersistent 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A86F9221-09E9-40A7-AF0E-5C3EB859C297}
	operator Fmx::Types::_di_IMovablePersistent()
	{
		Fmx::Types::_di_IMovablePersistent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IMovablePersistent*(void) { return (Fmx::Types::IMovablePersistent*)&__IMovablePersistent; }
	#endif
	
};


class PASCALIMPLEMENTATION TCustomTextObjectAppearance : public TCommonObjectAppearance
{
	typedef TCommonObjectAppearance inherited;
	
private:
	Fmx::Graphics::TFont* FFont;
	bool FFontDirty;
	Fmx::Textlayout::TTextLayout* FTextLayout;
	Fmx::Types::TTextAlign FTextAlign;
	Fmx::Types::TTextAlign FTextVertAlign;
	bool FWordWrap;
	System::Uitypes::TAlphaColor FTextColor;
	Fmx::Types::TTextTrimming FTrimming;
	bool FIsDetailText;
	void __fastcall FontChanged(System::TObject* Sender);
	void __fastcall SetTextAlign(const Fmx::Types::TTextAlign Value);
	void __fastcall SetTextVertAlign(const Fmx::Types::TTextAlign Value);
	void __fastcall SetWordWrap(const bool Value);
	void __fastcall SetTextColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetTrimming(const Fmx::Types::TTextTrimming Value);
	void __fastcall SetFont(Fmx::Graphics::TFont* const Value);
	TCustomTextObjectAppearance* __fastcall GetDefaultValues();
	void __fastcall SetIsDetailText(const bool Value);
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* ADest);
	virtual TObjectAppearance* __fastcall CreateDefaultValues();
	bool __fastcall IsFontStored();
	bool __fastcall IsTextAlignStored();
	bool __fastcall IsTextVertAlignStored();
	bool __fastcall IsWordWrapStored();
	bool __fastcall IsDetailTextStored();
	bool __fastcall IsTextColorStored();
	HIDESBASE bool __fastcall IsOpacityStored();
	bool __fastcall IsTrimmingStored();
	
public:
	__fastcall virtual TCustomTextObjectAppearance()/* overload */;
	__fastcall virtual ~TCustomTextObjectAppearance();
	virtual void __fastcall CreateObject(TListViewItem* const AListViewItem);
	virtual void __fastcall ResetObject(TListViewItem* const AListViewItem);
	__property Fmx::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property Fmx::Types::TTextAlign TextAlign = {read=FTextAlign, write=SetTextAlign, nodefault};
	__property Fmx::Types::TTextAlign TextVertAlign = {read=FTextVertAlign, write=SetTextVertAlign, nodefault};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, nodefault};
	__property System::Uitypes::TAlphaColor TextColor = {read=FTextColor, write=SetTextColor, nodefault};
	__property Fmx::Types::TTextTrimming Trimming = {read=FTrimming, write=SetTrimming, nodefault};
	__property bool IsDetailText = {read=FIsDetailText, write=SetIsDetailText, nodefault};
	__property TCustomTextObjectAppearance* DefaultValues = {read=GetDefaultValues};
public:
	/* TObjectAppearance.Create */ inline __fastcall TCustomTextObjectAppearance(bool AIsDefaultValues)/* overload */ : TCommonObjectAppearance(AIsDefaultValues) { }
	
};


class PASCALIMPLEMENTATION TTextObjectAppearance : public TCustomTextObjectAppearance
{
	typedef TCustomTextObjectAppearance inherited;
	
__published:
	__property Font = {stored=IsFontStored};
	__property TextAlign = {stored=IsTextAlignStored};
	__property TextVertAlign = {stored=IsTextVertAlignStored};
	__property WordWrap = {stored=IsWordWrapStored};
	__property TextColor = {stored=IsTextColorStored};
	__property Trimming = {stored=IsTrimmingStored};
	__property Width = {stored=IsWidthStored};
	__property Height = {stored=IsHeightStored};
	__property Align = {stored=IsAlignStored};
	__property VertAlign = {stored=IsVertAlignStored};
	__property Visible = {stored=IsVisibleStored};
	__property PlaceOffset = {stored=IsPlaceOffsetStored};
	__property Opacity = {stored=IsOpacityStored};
public:
	/* TCustomTextObjectAppearance.Create */ inline __fastcall virtual TTextObjectAppearance()/* overload */ : TCustomTextObjectAppearance() { }
	/* TCustomTextObjectAppearance.Destroy */ inline __fastcall virtual ~TTextObjectAppearance() { }
	
public:
	/* TObjectAppearance.Create */ inline __fastcall TTextObjectAppearance(bool AIsDefaultValues)/* overload */ : TCustomTextObjectAppearance(AIsDefaultValues) { }
	
};


class PASCALIMPLEMENTATION TCustomImageObjectAppearance : public TCommonObjectAppearance
{
	typedef TCommonObjectAppearance inherited;
	
private:
	Fmx::Listview::Types::TImageScalingMode FScalingMode;
	void __fastcall SetScalingMode(const Fmx::Listview::Types::TImageScalingMode Value);
	
private:
	TCustomImageObjectAppearance* __fastcall GetDefaultValues();
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* ADest);
	virtual TObjectAppearance* __fastcall CreateDefaultValues();
	HIDESBASE bool __fastcall IsOpacityStored();
	bool __fastcall IsScalingModeStored();
	
public:
	__fastcall virtual TCustomImageObjectAppearance()/* overload */;
	virtual void __fastcall CreateObject(TListViewItem* const AListViewItem);
	virtual void __fastcall ResetObject(TListViewItem* const AListViewItem);
	__property Fmx::Listview::Types::TImageScalingMode ScalingMode = {read=FScalingMode, write=SetScalingMode, nodefault};
	__property TCustomImageObjectAppearance* DefaultValues = {read=GetDefaultValues};
public:
	/* TCommonObjectAppearance.Destroy */ inline __fastcall virtual ~TCustomImageObjectAppearance() { }
	
public:
	/* TObjectAppearance.Create */ inline __fastcall TCustomImageObjectAppearance(bool AIsDefaultValues)/* overload */ : TCommonObjectAppearance(AIsDefaultValues) { }
	
};


class PASCALIMPLEMENTATION TImageObjectAppearance : public TCustomImageObjectAppearance
{
	typedef TCustomImageObjectAppearance inherited;
	
__published:
	__property ScalingMode = {stored=IsScalingModeStored};
	__property Width = {stored=IsWidthStored};
	__property Height = {stored=IsHeightStored};
	__property Align = {stored=IsAlignStored};
	__property VertAlign = {stored=IsVertAlignStored};
	__property Visible = {stored=IsVisibleStored};
	__property PlaceOffset = {stored=IsPlaceOffsetStored};
	__property Opacity = {stored=IsOpacityStored};
public:
	/* TCustomImageObjectAppearance.Create */ inline __fastcall virtual TImageObjectAppearance()/* overload */ : TCustomImageObjectAppearance() { }
	
public:
	/* TCommonObjectAppearance.Destroy */ inline __fastcall virtual ~TImageObjectAppearance() { }
	
public:
	/* TObjectAppearance.Create */ inline __fastcall TImageObjectAppearance(bool AIsDefaultValues)/* overload */ : TCustomImageObjectAppearance(AIsDefaultValues) { }
	
};


class PASCALIMPLEMENTATION TCustomAccessoryObjectAppearance : public TCommonObjectAppearance
{
	typedef TCommonObjectAppearance inherited;
	
private:
	Fmx::Listview::Types::TAccessoryType FAccessoryType;
	void __fastcall SetAccessoryType(const Fmx::Listview::Types::TAccessoryType Value);
	
private:
	TCustomAccessoryObjectAppearance* __fastcall GetDefaultValues();
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* ADest);
	virtual TObjectAppearance* __fastcall CreateDefaultValues();
	bool __fastcall IsAccessoryTypeStored();
	
public:
	__fastcall virtual TCustomAccessoryObjectAppearance()/* overload */;
	virtual void __fastcall CreateObject(TListViewItem* const AListViewItem);
	virtual void __fastcall ResetObject(TListViewItem* const AListViewItem);
	__property Fmx::Listview::Types::TAccessoryType AccessoryType = {read=FAccessoryType, write=SetAccessoryType, nodefault};
	__property TCustomAccessoryObjectAppearance* DefaultValues = {read=GetDefaultValues};
public:
	/* TCommonObjectAppearance.Destroy */ inline __fastcall virtual ~TCustomAccessoryObjectAppearance() { }
	
public:
	/* TObjectAppearance.Create */ inline __fastcall TCustomAccessoryObjectAppearance(bool AIsDefaultValues)/* overload */ : TCommonObjectAppearance(AIsDefaultValues) { }
	
};


class PASCALIMPLEMENTATION TAccessoryObjectAppearance : public TCustomAccessoryObjectAppearance
{
	typedef TCustomAccessoryObjectAppearance inherited;
	
__published:
	__property AccessoryType = {stored=IsAccessoryTypeStored};
	__property Width = {stored=IsWidthStored};
	__property Height = {stored=IsHeightStored};
	__property Align = {stored=IsAlignStored};
	__property VertAlign = {stored=IsVertAlignStored};
	__property Visible = {stored=IsVisibleStored};
	__property PlaceOffset = {stored=IsPlaceOffsetStored};
	__property Opacity = {stored=IsOpacityStored};
public:
	/* TCustomAccessoryObjectAppearance.Create */ inline __fastcall virtual TAccessoryObjectAppearance()/* overload */ : TCustomAccessoryObjectAppearance() { }
	
public:
	/* TCommonObjectAppearance.Destroy */ inline __fastcall virtual ~TAccessoryObjectAppearance() { }
	
public:
	/* TObjectAppearance.Create */ inline __fastcall TAccessoryObjectAppearance(bool AIsDefaultValues)/* overload */ : TCustomAccessoryObjectAppearance(AIsDefaultValues) { }
	
};


class PASCALIMPLEMENTATION TCustomTextButtonObjectAppearance : public TCommonObjectAppearance
{
	typedef TCommonObjectAppearance inherited;
	
private:
	Fmx::Listview::Types::TTextButtonType FButtonType;
	void __fastcall SetButtonType(const Fmx::Listview::Types::TTextButtonType Value);
	
private:
	System::Classes::TNotifyEvent FOnControlClick;
	System::Classes::TNotifyEvent FOnControlChange;
	System::UnicodeString FText;
	Fmx::Graphics::TFont* FFont;
	Fmx::Types::TTextTrimming FTrimming;
	Fmx::Types::TTextAlign FTextVertAlign;
	Fmx::Types::TTextAlign FTextAlign;
	bool FWordWrap;
	System::Uitypes::TAlphaColor FTextColor;
	System::Uitypes::TAlphaColor FTintColor;
	System::Uitypes::TAlphaColor FPressedTextColor;
	System::Uitypes::TAlphaColor FTextShadowColor;
	bool FEnabled;
	bool FHasButtonText;
	TCustomTextButtonObjectAppearance* __fastcall GetDefaultValues();
	void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetFont(Fmx::Graphics::TFont* const Value);
	void __fastcall SetTextAlign(const Fmx::Types::TTextAlign Value);
	void __fastcall SetTextVertAlign(const Fmx::Types::TTextAlign Value);
	void __fastcall SetTrimming(const Fmx::Types::TTextTrimming Value);
	void __fastcall SetWordWrap(const bool Value);
	void __fastcall FontChanged(System::TObject* Sender);
	void __fastcall SetPressedTextColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetTextColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetTintColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetTextShadowColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetEnabled(const bool Value);
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* ADest);
	virtual TObjectAppearance* __fastcall CreateDefaultValues();
	bool __fastcall IsButtonTypeStored();
	bool __fastcall IsTextStored();
	bool __fastcall IsTrimmingStored();
	bool __fastcall IsFontStored();
	bool __fastcall IsTextAlignStored();
	bool __fastcall IsTextColorStored();
	bool __fastcall IsTintColorStored();
	bool __fastcall IsPressedTextColorStored();
	bool __fastcall IsTextShadowColorStored();
	bool __fastcall IsTextVertAlignStored();
	bool __fastcall IsWordWrapStored();
	bool __fastcall IsEnabledStored();
	virtual void __fastcall DoControlClick(System::TObject* Sender);
	virtual void __fastcall DoControlChange(System::TObject* Sender);
	
public:
	__fastcall virtual TCustomTextButtonObjectAppearance()/* overload */;
	__fastcall virtual ~TCustomTextButtonObjectAppearance();
	virtual void __fastcall CreateObject(TListViewItem* const AListViewItem);
	virtual void __fastcall ResetObject(TListViewItem* const AListViewItem);
	__property Fmx::Listview::Types::TTextButtonType ButtonType = {read=FButtonType, write=SetButtonType, nodefault};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, nodefault};
	__property System::UnicodeString Text = {read=FText, write=SetText};
	__property Fmx::Types::TTextTrimming Trimming = {read=FTrimming, write=SetTrimming, nodefault};
	__property Fmx::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property System::Uitypes::TAlphaColor TextColor = {read=FTextColor, write=SetTextColor, nodefault};
	__property System::Uitypes::TAlphaColor TintColor = {read=FTintColor, write=SetTintColor, nodefault};
	__property System::Uitypes::TAlphaColor PressedTextColor = {read=FPressedTextColor, write=SetPressedTextColor, nodefault};
	__property System::Uitypes::TAlphaColor TextShadowColor = {read=FTextShadowColor, write=SetTextShadowColor, nodefault};
	__property Fmx::Types::TTextAlign TextAlign = {read=FTextAlign, write=SetTextAlign, nodefault};
	__property Fmx::Types::TTextAlign TextVertAlign = {read=FTextVertAlign, write=SetTextVertAlign, nodefault};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, nodefault};
	__property TCustomTextButtonObjectAppearance* DefaultValues = {read=GetDefaultValues};
	__property System::Classes::TNotifyEvent OnControlClick = {read=FOnControlClick, write=FOnControlClick};
	__property System::Classes::TNotifyEvent OnControlChange = {read=FOnControlChange, write=FOnControlChange};
public:
	/* TObjectAppearance.Create */ inline __fastcall TCustomTextButtonObjectAppearance(bool AIsDefaultValues)/* overload */ : TCommonObjectAppearance(AIsDefaultValues) { }
	
};


class PASCALIMPLEMENTATION TTextButtonObjectAppearance : public TCustomTextButtonObjectAppearance
{
	typedef TCustomTextButtonObjectAppearance inherited;
	
__published:
	__property ButtonType = {stored=IsButtonTypeStored};
	__property Trimming = {stored=IsTrimmingStored};
	__property Font = {stored=IsFontStored};
	__property Enabled = {stored=IsEnabledStored};
	__property TextAlign = {stored=IsTextAlignStored};
	__property TextVertAlign = {stored=IsTextVertAlignStored};
	__property WordWrap = {stored=IsWordWrapStored};
	__property TextColor = {stored=IsTextColorStored};
	__property TintColor = {stored=IsTintColorStored};
	__property PressedTextColor = {stored=IsPressedTextColorStored};
	__property TextShadowColor = {stored=IsTextShadowColorStored};
	__property Width = {stored=IsWidthStored};
	__property Height = {stored=IsHeightStored};
	__property Align = {stored=IsAlignStored};
	__property VertAlign = {stored=IsVertAlignStored};
	__property Visible = {stored=IsVisibleStored};
	__property PlaceOffset = {stored=IsPlaceOffsetStored};
	__property Opacity = {stored=IsOpacityStored};
	__property Text = {stored=IsTextStored};
public:
	/* TCustomTextButtonObjectAppearance.Create */ inline __fastcall virtual TTextButtonObjectAppearance()/* overload */ : TCustomTextButtonObjectAppearance() { }
	/* TCustomTextButtonObjectAppearance.Destroy */ inline __fastcall virtual ~TTextButtonObjectAppearance() { }
	
public:
	/* TObjectAppearance.Create */ inline __fastcall TTextButtonObjectAppearance(bool AIsDefaultValues)/* overload */ : TCustomTextButtonObjectAppearance(AIsDefaultValues) { }
	
};


class PASCALIMPLEMENTATION TCustomGlyphButtonObjectAppearance : public TCommonObjectAppearance
{
	typedef TCommonObjectAppearance inherited;
	
private:
	Fmx::Listview::Types::TGlyphButtonType FButtonType;
	bool FEnabled;
	void __fastcall SetButtonType(const Fmx::Listview::Types::TGlyphButtonType Value);
	
private:
	System::Classes::TNotifyEvent FOnControlClick;
	System::Classes::TNotifyEvent FOnControlChange;
	bool FClickOnSelect;
	TCustomGlyphButtonObjectAppearance* __fastcall GetDefaultValues();
	void __fastcall SetClickOnSelect(const bool AValue);
	void __fastcall SetEnabled(const bool Value);
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* ADest);
	virtual TObjectAppearance* __fastcall CreateDefaultValues();
	bool __fastcall IsButtonTypeStored();
	bool __fastcall IsEnabledStored();
	bool __fastcall IsClickOnSelectStored();
	virtual void __fastcall DoControlClick(System::TObject* Sender);
	virtual void __fastcall DoControlChange(System::TObject* Sender);
	
public:
	__fastcall virtual TCustomGlyphButtonObjectAppearance()/* overload */;
	virtual void __fastcall CreateObject(TListViewItem* const AListViewItem);
	virtual void __fastcall ResetObject(TListViewItem* const AListViewItem);
	__property Fmx::Listview::Types::TGlyphButtonType ButtonType = {read=FButtonType, write=SetButtonType, nodefault};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, nodefault};
	__property bool ClickOnSelect = {read=FClickOnSelect, write=SetClickOnSelect, nodefault};
	__property TCustomGlyphButtonObjectAppearance* DefaultValues = {read=GetDefaultValues};
	__property System::Classes::TNotifyEvent OnControlClick = {read=FOnControlClick, write=FOnControlClick};
	__property System::Classes::TNotifyEvent OnControlChange = {read=FOnControlChange, write=FOnControlChange};
public:
	/* TCommonObjectAppearance.Destroy */ inline __fastcall virtual ~TCustomGlyphButtonObjectAppearance() { }
	
public:
	/* TObjectAppearance.Create */ inline __fastcall TCustomGlyphButtonObjectAppearance(bool AIsDefaultValues)/* overload */ : TCommonObjectAppearance(AIsDefaultValues) { }
	
};


class PASCALIMPLEMENTATION TGlyphButtonObjectAppearance : public TCustomGlyphButtonObjectAppearance
{
	typedef TCustomGlyphButtonObjectAppearance inherited;
	
__published:
	__property ButtonType = {stored=IsButtonTypeStored};
	__property Enabled = {stored=IsEnabledStored};
	__property ClickOnSelect = {stored=IsClickOnSelectStored};
	__property Width = {stored=IsWidthStored};
	__property Height = {stored=IsHeightStored};
	__property Align = {stored=IsAlignStored};
	__property VertAlign = {stored=IsVertAlignStored};
	__property Visible = {stored=IsVisibleStored};
	__property PlaceOffset = {stored=IsPlaceOffsetStored};
	__property Opacity = {stored=IsOpacityStored};
public:
	/* TCustomGlyphButtonObjectAppearance.Create */ inline __fastcall virtual TGlyphButtonObjectAppearance()/* overload */ : TCustomGlyphButtonObjectAppearance() { }
	
public:
	/* TCommonObjectAppearance.Destroy */ inline __fastcall virtual ~TGlyphButtonObjectAppearance() { }
	
public:
	/* TObjectAppearance.Create */ inline __fastcall TGlyphButtonObjectAppearance(bool AIsDefaultValues)/* overload */ : TCustomGlyphButtonObjectAppearance(AIsDefaultValues) { }
	
};


class PASCALIMPLEMENTATION TAppearanceObjects : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
	
public:
	typedef void __fastcall (__closure *TControlEvent)(System::TObject* const Sender, Fmx::Listview::Types::TListItemSimpleControl* const AControl);
	
	typedef void __fastcall (__closure *TCreatingObjectsEvent)(System::TObject* const Sender, TListViewItem* const AListViewItem, bool &AHandled);
	
	typedef void __fastcall (__closure *TCreateObjectsEvent)(System::TObject* const Sender, TListViewItem* const AListViewItem);
	
	
private:
	static const System::Int8 cDefaultHeight = System::Int8(0x2c);
	
	static const System::Int8 cDefaultHeaderHeight = System::Int8(0x18);
	
	
private:
	Fmx::Controls::TControl* FOwnerControl;
	Fmx::Listview::Types::_di_IListItemStyleResources FResources;
	
private:
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnChangeHeight;
	TItemControlEvent FOnButtonClick;
	TItemControlEvent FOnButtonChange;
	virtual int __fastcall GetHeight();
	virtual void __fastcall SetHeight(int Value);
	void __fastcall TakeOwnership(Fmx::Controls::TControl* const NewOwner);
	
protected:
	void __fastcall ItemPropertyChange(System::TObject* Sender);
	virtual void __fastcall DoChange();
	virtual void __fastcall DoChangeHeight();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* ADest);
	virtual void __fastcall UpdateSizes(const System::Types::TSizeF &FinalSize);
	virtual int __fastcall DefaultHeight();
#ifndef _WIN64
	virtual System::DynamicArray<TCommonObjectAppearance*> __fastcall GetPublishedObjects();
	virtual System::DynamicArray<TCommonObjectAppearance*> __fastcall GetObjects();
#else /* _WIN64 */
	virtual System::TArray__1<TCommonObjectAppearance*> __fastcall GetPublishedObjects();
	virtual System::TArray__1<TCommonObjectAppearance*> __fastcall GetObjects();
#endif /* _WIN64 */
	virtual void __fastcall SetObjectData(TListViewItem* const AListViewItem, const System::UnicodeString AIndex, const System::Rtti::TValue &AValue, bool &AHandled);
	bool __fastcall StyleResourcesNeedUpdate();
	Fmx::Listview::Types::TListItemStyleResources* __fastcall GetStyleResources();
	__property Fmx::Controls::TControl* OwnerControl = {read=FOwnerControl};
	
public:
	__fastcall virtual TAppearanceObjects(Fmx::Controls::TControl* const Owner);
	virtual void __fastcall ResetObjects(TListViewItem* const AListViewItem, const System::Types::TSizeF &FinalSize);
	__property int Height = {read=GetHeight, write=SetHeight, nodefault};
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnChangeHeight = {read=FOnChangeHeight, write=FOnChangeHeight};
#ifndef _WIN64
	__property System::DynamicArray<TCommonObjectAppearance*> Objects = {read=GetObjects};
	__property System::DynamicArray<TCommonObjectAppearance*> PublishedObjects = {read=GetPublishedObjects};
#else /* _WIN64 */
	__property System::TArray__1<TCommonObjectAppearance*> Objects = {read=GetObjects};
	__property System::TArray__1<TCommonObjectAppearance*> PublishedObjects = {read=GetPublishedObjects};
#endif /* _WIN64 */
	__property TItemControlEvent OnButtonClick = {write=FOnButtonClick};
	__property TItemControlEvent OnButtonChange = {write=FOnButtonChange};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TAppearanceObjects() { }
	
};


class PASCALIMPLEMENTATION TItemAppearanceObjects : public TAppearanceObjects
{
	typedef TAppearanceObjects inherited;
	
private:
	static const System::Int8 cDefaultHeight = System::Int8(0x2c);
	
	
private:
	TTextObjectAppearance* FText;
	TTextObjectAppearance* FDetail;
	TImageObjectAppearance* FImage;
	TAccessoryObjectAppearance* FAccessory;
	TTextButtonObjectAppearance* FTextButton;
	TGlyphButtonObjectAppearance* FGlyphButton;
	int FHeight;
#ifndef _WIN64
	System::DynamicArray<TCommonObjectAppearance*> FObjects;
	System::DynamicArray<TCommonObjectAppearance*> FPublishedObjects;
#else /* _WIN64 */
	System::TArray__1<TCommonObjectAppearance*> FObjects;
	System::TArray__1<TCommonObjectAppearance*> FPublishedObjects;
#endif /* _WIN64 */
	void __fastcall SetAccessoryElement(TAccessoryObjectAppearance* const Value);
	void __fastcall SetTextButtonElement(TTextButtonObjectAppearance* const Value);
	void __fastcall SetGlyphButtonElement(TGlyphButtonObjectAppearance* const Value);
	void __fastcall SetImageElement(TImageObjectAppearance* const Value);
	void __fastcall SetTextElement(TTextObjectAppearance* const Value);
	void __fastcall SetDetailElement(TTextObjectAppearance* const Value);
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* ADest);
	virtual int __fastcall GetHeight();
	virtual void __fastcall SetHeight(int Value);
	virtual int __fastcall DefaultHeight();
#ifndef _WIN64
	virtual System::DynamicArray<TCommonObjectAppearance*> __fastcall GetPublishedObjects();
#else /* _WIN64 */
	virtual System::TArray__1<TCommonObjectAppearance*> __fastcall GetPublishedObjects();
#endif /* _WIN64 */
	void __fastcall AddObject(TCommonObjectAppearance* const AObjectAppearance, bool APublished);
	TCommonObjectAppearance* __fastcall UpdateObject(TCommonObjectAppearance* const AObjectAppearance, bool APublished);
	void __fastcall RemoveObject(TCommonObjectAppearance* const AObjectAppearance);
#ifndef _WIN64
	virtual System::DynamicArray<TCommonObjectAppearance*> __fastcall GetObjects();
#else /* _WIN64 */
	virtual System::TArray__1<TCommonObjectAppearance*> __fastcall GetObjects();
#endif /* _WIN64 */
	
public:
	__fastcall virtual TItemAppearanceObjects(Fmx::Controls::TControl* const Owner)/* overload */;
	__fastcall virtual ~TItemAppearanceObjects();
	__property TTextObjectAppearance* Text = {read=FText, write=SetTextElement};
	__property TTextObjectAppearance* Detail = {read=FDetail, write=SetDetailElement};
	__property TImageObjectAppearance* Image = {read=FImage, write=SetImageElement};
	__property TAccessoryObjectAppearance* Accessory = {read=FAccessory, write=SetAccessoryElement};
	__property TTextButtonObjectAppearance* TextButton = {read=FTextButton, write=SetTextButtonElement};
	__property TGlyphButtonObjectAppearance* GlyphButton = {read=FGlyphButton, write=SetGlyphButtonElement};
};


#ifndef _WIN64
typedef System::TMetaClass* TItemAppearanceObjectsClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TItemAppearanceObjectsClass);
#endif /* _WIN64 */

enum class DECLSPEC_DENUM TRegisterAppearanceOption : unsigned char { Footer, Header, Item, ItemEdit, DefaultFooter, DefaultHeader, DefaultItem, DefaultItemEdit };

typedef System::Set<TRegisterAppearanceOption, _DELPHI_SET_ENUMERATOR(TRegisterAppearanceOption::Footer), _DELPHI_SET_ENUMERATOR(TRegisterAppearanceOption::DefaultItemEdit)> TRegisterAppearanceOptions;

struct DECLSPEC_DRECORD TRegisteredAppearance
{
public:
	System::UnicodeString Name;
	TItemAppearanceObjectsClass Value;
	System::UnicodeString UnitName;
	TRegisterAppearanceOptions Options;
};


class PASCALIMPLEMENTATION TItemAppearanceProperties : public System::Classes::TInterfacedPersistent
{
	typedef System::Classes::TInterfacedPersistent inherited;
	
	
public:
	typedef TItemAppearanceObjectsClass TItemAppearanceObjectsClass;
	
	typedef void __fastcall (__closure *TAppearancePropertiesEvent)(TItemAppearanceProperties* const Sender);
	
	
public:
	static const System::Int8 cDefaultHeight = System::Int8(0x2c);
	
	
private:
	Fmx::Controls::TControl* FOwnerControl;
	System::UnicodeString FName;
	TAppearanceType FAppearanceType;
	System::Generics::Collections::TDictionary__2<TItemAppearanceObjectsClass,TItemAppearanceObjects*>* FAppearanceCache;
	TItemAppearanceObjects* FAppearance;
	TItemAppearanceObjectsClass FAppearanceClass;
	Fmx::Listview::Types::TListItemPurpose FPurpose;
	_di_IPublishedAppearanceOwner FPropertiesOwner;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnDestroy;
	System::Classes::TPersistent* FSprig;
	Fmx::Types::_di_IPersistentShim FShim;
	void __fastcall SetName(const System::UnicodeString Value);
	void __fastcall SetObjects(TItemAppearanceObjects* const Value);
	void __fastcall PropertiesChange(System::TObject* Sender);
	void __fastcall PropertiesChangeHeight(System::TObject* Sender);
	int __fastcall GetHeight();
	void __fastcall SetHeight(int AValue);
	void __fastcall SetAppearanceClass(const TItemAppearanceObjectsClass Value);
	System::UnicodeString __fastcall GetAppearanceClassName();
	void __fastcall SetAppearanceClassName(const System::UnicodeString Value);
	bool __fastcall GetActive();
	_di_IPublishedAppearanceOwner __fastcall PropertiesOwner();
	System::Types::TRect __fastcall GetBoundsRect();
	System::Classes::TPersistent* __fastcall GetDesignParent();
	void __fastcall BindShim(Fmx::Types::_di_IPersistentShim AShim);
	void __fastcall UnbindShim();
	bool __fastcall BeingDesigned();
	void __fastcall SetSprig(System::Classes::TPersistent* const APersistent);
	System::Classes::TPersistent* __fastcall GetSprig();
	
protected:
	virtual void __fastcall DoChange();
	virtual void __fastcall DoChangeHeight();
	virtual void __fastcall DoChangeObjects();
	bool __fastcall IsHeightStored();
	
public:
	__fastcall TItemAppearanceProperties(Fmx::Controls::TControl* const Owner, TAppearanceType AType);
	__fastcall virtual ~TItemAppearanceProperties();
	__property Fmx::Controls::TControl* Owner = {read=FOwnerControl};
	__property Fmx::Listview::Types::TListItemPurpose Purpose = {read=FPurpose, nodefault};
	__property TItemAppearanceObjectsClass AppearanceClass = {read=FAppearanceClass, write=SetAppearanceClass};
	__property System::UnicodeString AppearanceClassName = {read=GetAppearanceClassName, write=SetAppearanceClassName};
	__property bool Active = {read=GetActive, nodefault};
	__property System::UnicodeString Name = {read=FName, write=SetName, stored=false};
	__property int Height = {read=GetHeight, write=SetHeight, nodefault};
	__property TItemAppearanceObjects* Objects = {read=FAppearance, write=SetObjects};
	__property TAppearanceType AppearanceType = {read=FAppearanceType, nodefault};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnDestroy = {read=FOnDestroy, write=FOnDestroy};
private:
	void *__ISpriggedPersistent;	// Fmx::Types::ISpriggedPersistent 
	void *__IDesignablePersistent;	// Fmx::Types::IDesignablePersistent 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0F1D325A-8082-4DEA-8ABF-56A359A218A4}
	operator Fmx::Types::_di_ISpriggedPersistent()
	{
		Fmx::Types::_di_ISpriggedPersistent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::ISpriggedPersistent*(void) { return (Fmx::Types::ISpriggedPersistent*)&__ISpriggedPersistent; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4A731994-9060-4F3C-92D7-C123B04601D4}
	operator Fmx::Types::_di_IDesignablePersistent()
	{
		Fmx::Types::_di_IDesignablePersistent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IDesignablePersistent*(void) { return (Fmx::Types::IDesignablePersistent*)&__IDesignablePersistent; }
	#endif
	
};


class PASCALIMPLEMENTATION TEmptyItemObjects : public TItemAppearanceObjects
{
	typedef TItemAppearanceObjects inherited;
	
private:
	static const System::Int8 cDefaultHeight = System::Int8(0x2c);
	
	int FHeight;
	
protected:
	virtual void __fastcall SetHeight(int Value);
	virtual int __fastcall GetHeight();
	virtual int __fastcall DefaultHeight();
	
public:
	__fastcall virtual TEmptyItemObjects(Fmx::Controls::TControl* const Owner)/* overload */;
public:
	/* TItemAppearanceObjects.Destroy */ inline __fastcall virtual ~TEmptyItemObjects() { }
	
};


class PASCALIMPLEMENTATION TNullItemObjects : public TEmptyItemObjects
{
	typedef TEmptyItemObjects inherited;
	
public:
	/* TEmptyItemObjects.Create */ inline __fastcall virtual TNullItemObjects(Fmx::Controls::TControl* const Owner)/* overload */ : TEmptyItemObjects(Owner) { }
	
public:
	/* TItemAppearanceObjects.Destroy */ inline __fastcall virtual ~TNullItemObjects() { }
	
};


class PASCALIMPLEMENTATION TCustomItemObjects : public TItemAppearanceObjects
{
	typedef TItemAppearanceObjects inherited;
	
public:
	static const System::Int8 cDefaultHeight = System::Int8(0x2c);
	
	static const System::Int8 cDefaultButtonHeight = System::Int8(0x1f);
	
	static const System::Int8 cDefaultTextButtonWidth = System::Int8(0x40);
	
	static const System::Int8 cDefaultImageWidth = System::Int8(0x1d);
	
	static const System::Int8 cDefaultImageHeight = System::Int8(0x1d);
	
	static const System::Int8 cDefaultImageTextPlaceOffsetX = System::Int8(0xa);
	
	static const System::Int8 cDefaultGlyphPlaceOffsetX = System::Int8(-6);
	
	
protected:
	virtual void __fastcall UpdateSizes(const System::Types::TSizeF &FinalSize);
	void __fastcall SetInternalSize(TGlyphButtonObjectAppearance* const AGlyphButton, Fmx::Listview::Types::TListItemStyleResources* AStyleResources)/* overload */;
	void __fastcall SetInternalSize(TAccessoryObjectAppearance* const AAccessory, Fmx::Listview::Types::TListItemStyleResources* AStyleResources)/* overload */;
	virtual int __fastcall DefaultHeight();
	
public:
	__fastcall virtual TCustomItemObjects(Fmx::Controls::TControl* const Owner)/* overload */;
	__property Text;
	__property Detail;
	__property Image;
	__property Accessory;
	__property TextButton;
	__property GlyphButton;
public:
	/* TItemAppearanceObjects.Destroy */ inline __fastcall virtual ~TCustomItemObjects() { }
	
};


class PASCALIMPLEMENTATION TPresetItemObjects : public TCustomItemObjects
{
	typedef TCustomItemObjects inherited;
	
	
public:
#ifndef _WIN64
	typedef System::TMetaClass* TGroupClass;
#else /* _WIN64 */
	_DECLARE_METACLASS(System::TMetaClass, TGroupClass);
#endif /* _WIN64 */
	
	
protected:
	virtual TGroupClass __fastcall GetGroupClass();
	virtual bool __fastcall GetIsItemEdit();
	__property bool IsItemEdit = {read=GetIsItemEdit, nodefault};
	__property TGroupClass GroupClass = {read=GetGroupClass};
	
public:
	virtual void __fastcall ResetObjects(TListViewItem* const AListViewItem, const System::Types::TSizeF &FinalSize);
public:
	/* TCustomItemObjects.Create */ inline __fastcall virtual TPresetItemObjects(Fmx::Controls::TControl* const Owner)/* overload */ : TCustomItemObjects(Owner) { }
	
public:
	/* TItemAppearanceObjects.Destroy */ inline __fastcall virtual ~TPresetItemObjects() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPublishedAppearance : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TComponent* FOwnerComponent;
	_di_IPublishedAppearanceOwner FPropertiesOwner;
	System::UnicodeString __fastcall GetFooterAppearance();
	int __fastcall GetFooterHeight();
	System::UnicodeString __fastcall GetHeaderAppearance();
	int __fastcall GetHeaderHeight();
	System::UnicodeString __fastcall GetItemAppearance();
	System::UnicodeString __fastcall GetItemEditAppearance();
	int __fastcall GetItemHeight();
	int __fastcall GetItemEditHeight();
	void __fastcall SetFooterAppearance(const System::UnicodeString Value);
	void __fastcall SetFooterHeight(const int Value);
	void __fastcall SetHeaderAppearance(const System::UnicodeString Value);
	void __fastcall SetHeaderHeight(const int Value);
	void __fastcall SetItemAppearance(const System::UnicodeString Value);
	void __fastcall SetItemEditAppearance(const System::UnicodeString Value);
	void __fastcall SetItemHeight(const int Value);
	void __fastcall SetItemEditHeight(const int Value);
	bool __fastcall IsFooterHeightStored();
	bool __fastcall IsHeaderHeightStored();
	bool __fastcall IsItemEditHeightStored();
	bool __fastcall IsItemHeightStored();
	
__published:
	__fastcall TPublishedAppearance(System::Classes::TComponent* const AOwner);
	__property System::Classes::TComponent* Owner = {read=FOwnerComponent};
	__property int ItemHeight = {read=GetItemHeight, write=SetItemHeight, stored=IsItemHeightStored, nodefault};
	__property int ItemEditHeight = {read=GetItemEditHeight, write=SetItemEditHeight, stored=IsItemEditHeightStored, nodefault};
	__property int HeaderHeight = {read=GetHeaderHeight, write=SetHeaderHeight, stored=IsHeaderHeightStored, nodefault};
	__property int FooterHeight = {read=GetFooterHeight, write=SetFooterHeight, stored=IsFooterHeightStored, nodefault};
	__property System::UnicodeString ItemAppearance = {read=GetItemAppearance, write=SetItemAppearance, stored=false};
	__property System::UnicodeString ItemEditAppearance = {read=GetItemEditAppearance, write=SetItemEditAppearance, stored=false};
	__property System::UnicodeString HeaderAppearance = {read=GetHeaderAppearance, write=SetHeaderAppearance, stored=false};
	__property System::UnicodeString FooterAppearance = {read=GetFooterAppearance, write=SetFooterAppearance, stored=false};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TPublishedAppearance() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPublishedObjects : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	_di_IPublishedAppearanceOwner FOwner;
	TItemAppearanceObjects* __fastcall GetFooterObjects();
	TItemAppearanceObjects* __fastcall GetHeaderObjects();
	TItemAppearanceObjects* __fastcall GetItemEditObjects();
	TItemAppearanceObjects* __fastcall GetItemObjects();
	void __fastcall SetFooterObjects(TItemAppearanceObjects* const Value);
	void __fastcall SetHeaderObjects(TItemAppearanceObjects* const Value);
	void __fastcall SetItemEditObjects(TItemAppearanceObjects* const Value);
	void __fastcall SetItemObjects(TItemAppearanceObjects* const Value);
	
__published:
	__fastcall TPublishedObjects(const _di_IPublishedAppearanceOwner AOwner);
	__property TItemAppearanceObjects* ItemObjects = {read=GetItemObjects, write=SetItemObjects};
	__property TItemAppearanceObjects* ItemEditObjects = {read=GetItemEditObjects, write=SetItemEditObjects};
	__property TItemAppearanceObjects* HeaderObjects = {read=GetHeaderObjects, write=SetHeaderObjects};
	__property TItemAppearanceObjects* FooterObjects = {read=GetFooterObjects, write=SetFooterObjects};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TPublishedObjects() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TRegisterAppearanceValue
{
public:
	System::UnicodeString Name;
	System::UnicodeString UnitName;
	TRegisterAppearanceOptions Options;
	__fastcall TRegisterAppearanceValue(const System::UnicodeString AName, TRegisterAppearanceOptions AOptions, const System::UnicodeString AUnitName);
	TRegisterAppearanceValue() {}
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TAppearancesRegistry : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static System::Generics::Collections::TDictionary__2<TItemAppearanceObjectsClass,TRegisterAppearanceValue>* FFactories;
	
public:
	#define TAppearancesRegistry_cRegisterDefault (System::Set<TRegisterAppearanceOption, _DELPHI_SET_ENUMERATOR(TRegisterAppearanceOption::Footer), _DELPHI_SET_ENUMERATOR(TRegisterAppearanceOption::DefaultItemEdit)>() << TRegisterAppearanceOption::DefaultFooter << TRegisterAppearanceOption::DefaultHeader << TRegisterAppearanceOption::DefaultItem << TRegisterAppearanceOption::DefaultItemEdit )
	
	#define TAppearancesRegistry_cRegisterAll (System::Set<TRegisterAppearanceOption, _DELPHI_SET_ENUMERATOR(TRegisterAppearanceOption::Footer), _DELPHI_SET_ENUMERATOR(TRegisterAppearanceOption::DefaultItemEdit)>() << TRegisterAppearanceOption::Footer << TRegisterAppearanceOption::Header << TRegisterAppearanceOption::Item << TRegisterAppearanceOption::ItemEdit << TRegisterAppearanceOption::DefaultFooter << TRegisterAppearanceOption::DefaultHeader << TRegisterAppearanceOption::DefaultItem << TRegisterAppearanceOption::DefaultItemEdit )
	
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
public:
#ifndef _WIN64
	__classmethod void __fastcall RegisterAppearances(System::DynamicArray<TItemAppearanceObjectsClass> AFactories, System::DynamicArray<System::UnicodeString> ADisplayNames, TRegisterAppearanceOptions AOptions = (TRegisterAppearanceOptions() << TRegisterAppearanceOption::Item ), const System::UnicodeString AUnitName = System::UnicodeString())/* overload */;
#else /* _WIN64 */
	__classmethod void __fastcall RegisterAppearances(System::TArray__1<TItemAppearanceObjectsClass> AFactories, System::TArray__1<System::UnicodeString> ADisplayNames, TRegisterAppearanceOptions AOptions = (TRegisterAppearanceOptions() << TRegisterAppearanceOption::Item ), const System::UnicodeString AUnitName = System::UnicodeString())/* overload */;
#endif /* _WIN64 */
	__classmethod void __fastcall RegisterAppearance(const TItemAppearanceObjectsClass AFactory, const System::UnicodeString ADisplayName, TRegisterAppearanceOptions AOptions = (TRegisterAppearanceOptions() << TRegisterAppearanceOption::Item ), const System::UnicodeString AUnitName = System::UnicodeString())/* overload */;
	__classmethod void __fastcall UnregisterAppearance(const TItemAppearanceObjectsClass AFactory)/* overload */;
#ifndef _WIN64
	__classmethod void __fastcall UnregisterAppearances(System::DynamicArray<TItemAppearanceObjectsClass> AFactories)/* overload */;
	__classmethod System::DynamicArray<TRegisteredAppearance> __fastcall GetRegisteredAppearances(TRegisterAppearanceOptions AFilter = TRegisterAppearanceOptions() );
#else /* _WIN64 */
	__classmethod void __fastcall UnregisterAppearances(System::TArray__1<TItemAppearanceObjectsClass> AFactories)/* overload */;
	__classmethod System::TArray__1<TRegisteredAppearance> __fastcall GetRegisteredAppearances(TRegisterAppearanceOptions AFilter = TRegisterAppearanceOptions() );
#endif /* _WIN64 */
	__classmethod TItemAppearanceObjectsClass __fastcall FindItemAppearanceObjectsClassByOption(TRegisterAppearanceOption AOption);
public:
	/* TObject.Create */ inline __fastcall TAppearancesRegistry() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAppearancesRegistry() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Appearances */
}	/* namespace Listview */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_LISTVIEW_APPEARANCES)
using namespace Fmx::Listview::Appearances;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_LISTVIEW)
using namespace Fmx::Listview;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif

//-- user supplied -----------------------------------------------------------
namespace Fmx
{
namespace Listview
{
namespace Appearances
{
template<typename T>
T __fastcall TListViewItem::TListViewItemObjects::FindObjectT(const System::UnicodeString AName) {
  Fmx::Listview::Types::TListItemDrawable* LObject = FindDrawable(AName);
  if (T t = dynamic_cast<T>(LObject)) {
    return t;
  }
  return 0;
}
}	/* namespace Appearances */
}	/* namespace Listview */
}	/* namespace Fmx */

#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_Listview_AppearancesHPP
