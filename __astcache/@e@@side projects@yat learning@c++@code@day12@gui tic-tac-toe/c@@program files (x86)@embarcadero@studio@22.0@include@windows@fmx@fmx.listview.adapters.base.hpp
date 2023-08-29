// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.ListView.Adapters.Base.pas' rev: 35.00 (Windows)

#ifndef Fmx_Listview_Adapters_BaseHPP
#define Fmx_Listview_Adapters_BaseHPP

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
#include <FMX.Graphics.hpp>
#include <System.Types.hpp>
#include <FMX.TextLayout.hpp>
#include <System.UITypes.hpp>
#include <FMX.Controls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Listview
{
namespace Adapters
{
namespace Base
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbstractListViewAdapter;
class DELPHICLASS TListViewItems;
class DELPHICLASS TFilterableListViewItems;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAbstractListViewAdapter : public System::Classes::TInterfacedPersistent
{
	typedef System::Classes::TInterfacedPersistent inherited;
	
private:
	int FUpdatingCount;
	System::Classes::TNotifyEvent FOnChanged;
	System::Classes::TNotifyEvent FOnItemsMayChange;
	System::Classes::TNotifyEvent FOnItemsCouldHaveChanged;
	System::Classes::TNotifyEvent FOnItemsInvalidate;
	System::Classes::TNotifyEvent FOnItemsResize;
	System::Classes::TNotifyEvent FOnResetView;
	
protected:
	void __fastcall CreateNewViews();
	virtual void __fastcall DoCreateNewViews();
	void __fastcall ResetViews(const Fmx::Listview::Types::TListItemPurposes APurposes);
	virtual void __fastcall DoResetViews(const Fmx::Listview::Types::TListItemPurposes APurposes);
	void __fastcall ResetView(Fmx::Listview::Types::TListItem* const Item);
	virtual void __fastcall DoResetView(Fmx::Listview::Types::TListItem* const Item);
	virtual void __fastcall DoSort(System::DelphiInterface<System::Generics::Defaults::IComparer__1<Fmx::Listview::Types::TListItem*> > AComparer);
	void __fastcall SetOnChanged(const System::Classes::TNotifyEvent Value);
	void __fastcall SetOnItemsMayChange(const System::Classes::TNotifyEvent Value);
	void __fastcall SetOnItemsCouldHaveChanged(const System::Classes::TNotifyEvent Value);
	void __fastcall SetOnItemsInvalidate(const System::Classes::TNotifyEvent Value);
	void __fastcall SetOnItemsResize(const System::Classes::TNotifyEvent Value);
	void __fastcall SetOnResetView(const System::Classes::TNotifyEvent Value);
	virtual void __fastcall DoEndUpdate();
	
public:
	virtual void __fastcall Changed();
	void __fastcall ItemsMayChange();
	void __fastcall ItemsCouldHaveChanged();
	void __fastcall ItemsInvalidate();
	void __fastcall ItemsResize();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	bool __fastcall IsUpdating();
	void __fastcall Sort(System::DelphiInterface<System::Generics::Defaults::IComparer__1<Fmx::Listview::Types::TListItem*> > AComparer);
	__property System::Classes::TNotifyEvent OnChanged = {write=SetOnChanged};
	__property System::Classes::TNotifyEvent OnItemsMayChange = {write=SetOnItemsMayChange};
	__property System::Classes::TNotifyEvent OnItemsCouldHaveChanged = {write=SetOnItemsCouldHaveChanged};
	__property System::Classes::TNotifyEvent OnItemsInvalidate = {write=SetOnItemsInvalidate};
	__property System::Classes::TNotifyEvent OnItemsResize = {write=SetOnItemsResize};
	__property System::Classes::TNotifyEvent OnResetView = {write=SetOnResetView};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TAbstractListViewAdapter() { }
	
public:
	/* TObject.Create */ inline __fastcall TAbstractListViewAdapter() : System::Classes::TInterfacedPersistent() { }
	
};


class PASCALIMPLEMENTATION TListViewItems : public TAbstractListViewAdapter
{
	typedef TAbstractListViewAdapter inherited;
	
	
public:
	enum class DECLSPEC_DENUM TOrder : unsigned char { FirstToLast, LastToFirst };
	
	
public:
	Fmx::Listview::Types::TListItem* operator[](const int Index) { return this->Item[Index]; }
	
private:
	System::Generics::Collections::TList__1<Fmx::Listview::Types::TListItem*>* FActiveItems;
#ifndef _WIN64
	typedef void __fastcall (__closure *_dt_Fmx_Listview_Adapters_Base_1)(System::TObject* Sender, const Fmx::Listview::Types::TListItem* Item, System::Generics::Collections::TCollectionNotification Action);
	_dt_Fmx_Listview_Adapters_Base_1 FOnNotify;
#else /* _WIN64 */
	System::Generics::Collections::TCollectionNotifyEvent__1<Fmx::Listview::Types::TListItem*> FOnNotify;
#endif /* _WIN64 */
	int __fastcall GetDefaultViewHeight();
	
protected:
	virtual int __fastcall GetCount();
	virtual Fmx::Listview::Types::TListItem* __fastcall GetItem(const int Index);
	void __fastcall ResetIndexes();
	void __fastcall ObjectsNotify(System::TObject* Sender, Fmx::Listview::Types::TListItem* const Item, System::Generics::Collections::TCollectionNotification Action);
	__property System::Generics::Collections::TList__1<Fmx::Listview::Types::TListItem*>* ActiveItems = {read=FActiveItems, write=FActiveItems};
	virtual void __fastcall DoSort(System::DelphiInterface<System::Generics::Defaults::IComparer__1<Fmx::Listview::Types::TListItem*> > AComparer);
	
public:
	__fastcall TListViewItems();
	__fastcall virtual ~TListViewItems();
	int __fastcall IndexOf(Fmx::Listview::Types::TListItem* const AItem);
	System::Generics::Collections::TEnumerator__1<Fmx::Listview::Types::TListItem*>* __fastcall GetEnumerator();
	__property Fmx::Listview::Types::TListItem* Item[const int Index] = {read=GetItem/*, default*/};
	__property int Count = {read=GetCount, nodefault};
#ifndef _WIN64
	typedef void __fastcall (__closure *_dt_Fmx_Listview_Adapters_Base_2)(System::TObject* Sender, const Fmx::Listview::Types::TListItem* Item, System::Generics::Collections::TCollectionNotification Action);
	__property _dt_Fmx_Listview_Adapters_Base_2 OnNotify = {read=FOnNotify, write=FOnNotify};
#else /* _WIN64 */
	__property System::Generics::Collections::TCollectionNotifyEvent__1<Fmx::Listview::Types::TListItem*> OnNotify = {read=FOnNotify, write=FOnNotify};
#endif /* _WIN64 */
private:
	void *__IListViewAdapter;	// Fmx::Listview::Types::IListViewAdapter 
	
public:
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


class PASCALIMPLEMENTATION TFilterableListViewItems : public TListViewItems
{
	typedef TListViewItems inherited;
	
private:
	System::Generics::Collections::TList__1<Fmx::Listview::Types::TListItem*>* FUnfilteredItems;
	System::Generics::Collections::TList__1<Fmx::Listview::Types::TListItem*>* FFilteredItems;
	System::DelphiInterface<System::Sysutils::TPredicate__1<System::UnicodeString> > FFilterPredicate;
	bool FNeedApplyFilter;
	bool FIsFiltering;
	void __fastcall ItemsCleared();
	void __fastcall ItemDeleted(const int Index);
	void __fastcall ItemAdded(const int Index, Fmx::Listview::Types::TListItem* const Item);
	System::DelphiInterface<System::Sysutils::TPredicate__1<System::UnicodeString> > __fastcall GetFilterPredicate();
	System::Generics::Collections::TList__1<Fmx::Listview::Types::TListItem*>* __fastcall GetUnfilteredItems();
	void __fastcall SetFilterPredicate(const System::DelphiInterface<System::Sysutils::TPredicate__1<System::UnicodeString> > Value);
	bool __fastcall GetFiltered();
	
protected:
	virtual bool __fastcall DoFilterItem(Fmx::Listview::Types::TListItem* const Item) = 0 ;
	virtual System::Generics::Collections::TList__1<Fmx::Listview::Types::TListItem*>* __fastcall DoGetUnfilteredItems();
	virtual void __fastcall DoEndUpdate();
	
public:
	__fastcall TFilterableListViewItems();
	__fastcall virtual ~TFilterableListViewItems();
	virtual void __fastcall Changed();
	void __fastcall ApplyFilter();
	__property System::DelphiInterface<System::Sysutils::TPredicate__1<System::UnicodeString> > Filter = {read=GetFilterPredicate, write=SetFilterPredicate};
	__property System::Generics::Collections::TList__1<Fmx::Listview::Types::TListItem*>* UnfilteredItems = {read=GetUnfilteredItems};
	__property bool Filtered = {read=GetFiltered, nodefault};
private:
	void *__IListViewFilterable;	// Fmx::Listview::Types::IListViewFilterable 
	
public:
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
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Base */
}	/* namespace Adapters */
}	/* namespace Listview */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_LISTVIEW_ADAPTERS_BASE)
using namespace Fmx::Listview::Adapters::Base;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_LISTVIEW_ADAPTERS)
using namespace Fmx::Listview::Adapters;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_LISTVIEW)
using namespace Fmx::Listview;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_Listview_Adapters_BaseHPP
