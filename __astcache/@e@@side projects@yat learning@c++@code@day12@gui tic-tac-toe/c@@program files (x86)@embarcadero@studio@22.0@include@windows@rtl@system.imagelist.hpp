// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.ImageList.pas' rev: 35.00 (Windows)

#ifndef System_ImagelistHPP
#define System_ImagelistHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Collections.hpp>
#include <System.UITypes.hpp>
#include <System.RTLConsts.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Imagelist
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TBaseImageList;
class DELPHICLASS TImageLink;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TBaseImageList : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	int FUpdateCount;
	System::Generics::Collections::TList__1<TImageLink*>* FLinks;
	bool FChanged;
	
private:
	int __fastcall GetLinkCount();
	TImageLink* __fastcall GetLinks(const int Index);
	
protected:
	void __fastcall AddLink(TImageLink* Link);
	void __fastcall DeleteLink(TImageLink* Link);
	__property int LinkCount = {read=GetLinkCount, nodefault};
	__property TImageLink* Links[const int Index] = {read=GetLinks};
	bool __fastcall LinkContains(TImageLink* const Link, const int StartIndex = 0xffffffff);
	virtual void __fastcall DoChange() = 0 ;
	virtual int __fastcall GetCount() = 0 ;
	DYNAMIC void __fastcall Updated();
	virtual void __fastcall Loaded();
	
public:
	virtual void __fastcall BeforeDestruction();
	virtual void __fastcall Change();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	__property int Count = {read=GetCount, nodefault};
public:
	/* TComponent.Create */ inline __fastcall virtual TBaseImageList(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TBaseImageList() { }
	
};


class PASCALIMPLEMENTATION TImageLink : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TBaseImageList* FImages;
	System::Uitypes::TImageIndex FImageIndex;
	bool FIgnoreIndex;
	System::Classes::TNotifyEvent FOnChange;
	bool FIgnoreImages;
	void __fastcall SetImageList(TBaseImageList* const Value);
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	
public:
	__fastcall virtual TImageLink();
	__fastcall virtual ~TImageLink();
	virtual void __fastcall Change();
	__property TBaseImageList* Images = {read=FImages, write=SetImageList};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property bool IgnoreIndex = {read=FIgnoreIndex, write=FIgnoreIndex, nodefault};
	__property bool IgnoreImages = {read=FIgnoreImages, write=FIgnoreImages, nodefault};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Imagelist */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_IMAGELIST)
using namespace System::Imagelist;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_ImagelistHPP
