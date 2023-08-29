// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.ListView.DynamicAppearance.pas' rev: 35.00 (Windows)

#ifndef Fmx_Listview_DynamicappearanceHPP
#define Fmx_Listview_DynamicappearanceHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Rtti.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Classes.hpp>
#include <System.TypInfo.hpp>
#include <System.SysUtils.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.ListView.Types.hpp>
#include <FMX.ListView.Appearances.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Listview
{
namespace Dynamicappearance
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAppearanceObjectItem;
class DELPHICLASS TAppearanceObjectItemCollection;
class DELPHICLASS TDynamicAppearance;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TAppearanceObjectItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	static System::StaticArray<System::TClass, 5> FObjectAppearanceClassNames;
	TDynamicAppearance* FOwner;
	Fmx::Listview::Appearances::TCommonObjectAppearance* FAppearance;
	System::TClass FAppearanceClass;
	System::UnicodeString FObjectName;
	void __fastcall SetAppearanceClass(System::TClass Value);
	void __fastcall SetAppearance(Fmx::Listview::Appearances::TCommonObjectAppearance* Value);
	System::UnicodeString __fastcall GetObjectName();
	void __fastcall SetObjectName(System::UnicodeString Value);
	System::UnicodeString __fastcall GetClassName();
	void __fastcall SetClassName(System::UnicodeString Value);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__fastcall virtual TAppearanceObjectItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TAppearanceObjectItem();
	
__published:
	__property System::UnicodeString AppearanceObjectName = {read=GetObjectName, write=SetObjectName};
	__property System::UnicodeString AppearanceClassName = {read=GetClassName, write=SetClassName};
	__property Fmx::Listview::Appearances::TCommonObjectAppearance* Appearance = {read=FAppearance, write=SetAppearance};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TAppearanceObjectItemCollection : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
private:
	TDynamicAppearance* FDynamicAppearance;
	
protected:
	virtual void __fastcall Notify(System::Classes::TCollectionItem* Item, System::Generics::Collections::TCollectionNotification Action);
	DYNAMIC int __fastcall GetAttrCount();
	DYNAMIC System::UnicodeString __fastcall GetAttr(int Index);
	DYNAMIC System::UnicodeString __fastcall GetItemAttr(int Index, int ItemIndex);
	
public:
	__fastcall TAppearanceObjectItemCollection(System::Classes::TComponent* Owner, TDynamicAppearance* DynamicAppearance);
	virtual void __fastcall BeginUpdate();
	virtual void __fastcall EndUpdate();
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TAppearanceObjectItemCollection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TDynamicAppearance : public Fmx::Listview::Appearances::TPresetItemObjects
{
	typedef Fmx::Listview::Appearances::TPresetItemObjects inherited;
	
private:
	System::Classes::TCollection* FObjectsCollection;
	
protected:
	virtual Fmx::Listview::Appearances::TPresetItemObjects::TGroupClass __fastcall GetGroupClass();
	System::Classes::TCollection* __fastcall GetObjectsCollection();
	void __fastcall SetObjectsCollection(System::Classes::TCollection* Value);
	void __fastcall CreateObjectAppearance(const System::TClass AppearanceClass, const System::UnicodeString Name, TAppearanceObjectItem* const Item);
	void __fastcall InitDataMember(Fmx::Listview::Appearances::TCommonObjectAppearance* const ObjectAppearance);
	void __fastcall ObjectPropertyChange(System::TObject* Sender);
	void __fastcall ObjectRenamed(Fmx::Listview::Appearances::TCommonObjectAppearance* const Sender, const System::UnicodeString OldName);
	void __fastcall ItemAppearanceChange();
	void __fastcall ObjectRemoving(Fmx::Listview::Appearances::TCommonObjectAppearance* const Value);
	void __fastcall ObjectAdded(Fmx::Listview::Appearances::TCommonObjectAppearance* const Value);
	
public:
	__fastcall virtual TDynamicAppearance(Fmx::Controls::TControl* const Owner)/* overload */;
	__fastcall virtual ~TDynamicAppearance();
	
__published:
	__property System::Classes::TCollection* ObjectsCollection = {read=GetObjectsCollection, write=SetObjectsCollection};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dynamicappearance */
}	/* namespace Listview */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_LISTVIEW_DYNAMICAPPEARANCE)
using namespace Fmx::Listview::Dynamicappearance;
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
#endif	// Fmx_Listview_DynamicappearanceHPP
