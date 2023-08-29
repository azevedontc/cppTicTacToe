// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.ImgList.pas' rev: 35.00 (Windows)

#ifndef Fmx_ImglistHPP
#define Fmx_ImglistHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <System.Classes.hpp>
#include <System.ImageList.hpp>
#include <FMX.ActnList.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Graphics.hpp>
#include <FMX.MultiResBitmap.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Imglist
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TBitmapItem;
class DELPHICLASS TMultiResBitmap;
class DELPHICLASS TCustomSourceItem;
class DELPHICLASS TSourceItem;
class DELPHICLASS TSourceCollection;
class DELPHICLASS TLayer;
class DELPHICLASS TLayers;
class DELPHICLASS TCustomDestinationItem;
class DELPHICLASS TDestinationItem;
class DELPHICLASS TDestinationCollection;
class DELPHICLASS TCustomImageList;
class DELPHICLASS TImageList;
class DELPHICLASS TGlyphImageLink;
class DELPHICLASS TGlyph;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
typedef System::TMetaClass* TImageListClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TImageListClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TSourceItemClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TSourceItemClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TDestinationItemClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TDestinationItemClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TLayerClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TLayerClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBitmapItem : public Fmx::Multiresbitmap::TCustomBitmapItem
{
	typedef Fmx::Multiresbitmap::TCustomBitmapItem inherited;
	
private:
	TCustomImageList* __fastcall GetImageList();
	
public:
	__property TCustomImageList* ImageList = {read=GetImageList};
	__fastcall virtual TBitmapItem(System::Classes::TCollection* Collection);
	
__published:
	__property Bitmap;
	__property Scale;
public:
	/* TCustomBitmapItem.Destroy */ inline __fastcall virtual ~TBitmapItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMultiResBitmap : public Fmx::Multiresbitmap::TCustomMultiResBitmap
{
	typedef Fmx::Multiresbitmap::TCustomMultiResBitmap inherited;
	
private:
	TCustomSourceItem* FSourceItem;
	TCustomImageList* __fastcall GetImageList();
	
protected:
	virtual System::Types::TSize __fastcall GetDefaultSize();
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	virtual void __fastcall Notify(System::Classes::TCollectionItem* Item, System::Generics::Collections::TCollectionNotification Action);
	
public:
	__fastcall TMultiResBitmap(System::Classes::TPersistent* AOwner, Fmx::Multiresbitmap::TCustomBitmapItemClass ItemClass);
	virtual Fmx::Multiresbitmap::TSizeKind __fastcall GetDefaultSizeKind();
	__property TCustomSourceItem* SourceItem = {read=FSourceItem};
	__property TCustomImageList* ImageList = {read=GetImageList};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TMultiResBitmap() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomSourceItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
public:
	#define TCustomSourceItem_DefaultName L"Item 0"
	
	#define TCustomSourceItem_TemporaryName L"Tmp_Item 0"
	
	static const System::Int8 DefaultDesktopSize = System::Int8(0x10);
	
	
private:
	TSourceCollection* FSource;
	TMultiResBitmap* FMultiResBitmap;
	System::UnicodeString FOldName;
	System::UnicodeString FName;
	void __fastcall SetMultiResBitmap(TMultiResBitmap* const Value);
	void __fastcall SetName(const System::UnicodeString Value);
	System::UnicodeString __fastcall UniqueName(const System::UnicodeString AName, System::Classes::TCollection* const Collection);
	void __fastcall CheckName(const System::UnicodeString Name, TSourceCollection* SourceCollection);
	
protected:
	virtual TMultiResBitmap* __fastcall CreateMultiResBitmap();
	virtual void __fastcall SetCollection(System::Classes::TCollection* Value);
	virtual System::UnicodeString __fastcall GetDisplayName();
	
public:
	__fastcall virtual TCustomSourceItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TCustomSourceItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TMultiResBitmap* MultiResBitmap = {read=FMultiResBitmap, write=SetMultiResBitmap};
	__property System::UnicodeString Name = {read=FName, write=SetName};
	__property TSourceCollection* Source = {read=FSource};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSourceItem : public TCustomSourceItem
{
	typedef TCustomSourceItem inherited;
	
__published:
	__property MultiResBitmap;
	__property Name = {default=0};
public:
	/* TCustomSourceItem.Create */ inline __fastcall virtual TSourceItem(System::Classes::TCollection* Collection) : TCustomSourceItem(Collection) { }
	/* TCustomSourceItem.Destroy */ inline __fastcall virtual ~TSourceItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSourceCollection : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TCustomSourceItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCustomImageList* FImageList;
	HIDESBASE TCustomSourceItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TCustomSourceItem* const Value);
	
protected:
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall TSourceCollection(System::Classes::TPersistent* AOwner, TSourceItemClass ItemClass);
	__property TCustomImageList* ImageList = {read=FImageList};
	__property TCustomSourceItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	HIDESBASE TCustomSourceItem* __fastcall Add();
	TCustomSourceItem* __fastcall AddOrSet(const System::UnicodeString SourceName, const float *Scales, const int Scales_High, const System::UnicodeString *FileNames, const int FileNames_High, const System::Uitypes::TColor TransparentColor = (System::Uitypes::TColor)(0x1fffffff), const int Width = 0x0, const int Height = 0x0);
	HIDESBASE TCustomSourceItem* __fastcall Insert(int Index);
	int __fastcall IndexOf(const System::UnicodeString Name);
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TSourceCollection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TLayer : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	TLayers* FLayers;
	TMultiResBitmap* FMultiResBitmap;
	bool FMultiResBitmapIsValid;
	System::UnicodeString FName;
	Fmx::Types::TBounds* FSourceRect;
	void __fastcall SetName(const System::UnicodeString Value);
	TCustomImageList* __fastcall GetImageList();
	void __fastcall SetSourceRect(Fmx::Types::TBounds* const Value);
	TMultiResBitmap* __fastcall GetMultiResBitmap();
	
protected:
	virtual void __fastcall SetCollection(System::Classes::TCollection* Value);
	virtual System::UnicodeString __fastcall GetDisplayName();
	
public:
	__fastcall virtual TLayer(System::Classes::TCollection* Collection);
	__fastcall virtual ~TLayer();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TLayers* Layers = {read=FLayers};
	__property TCustomImageList* ImageList = {read=GetImageList};
	__property TMultiResBitmap* MultiResBitmap = {read=GetMultiResBitmap, stored=false};
	
__published:
	__property System::UnicodeString Name = {read=FName, write=SetName};
	__property Fmx::Types::TBounds* SourceRect = {read=FSourceRect, write=SetSourceRect};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TLayers : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TLayer* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCustomDestinationItem* FDestinationItem;
	TCustomImageList* __fastcall GetImageList();
	HIDESBASE TLayer* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TLayer* const Value);
	
protected:
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	virtual void __fastcall Notify(System::Classes::TCollectionItem* Item, System::Generics::Collections::TCollectionNotification Action);
	
public:
	__fastcall TLayers(System::Classes::TPersistent* AOwner, TLayerClass ItemClass);
	__property TCustomDestinationItem* DestinationItem = {read=FDestinationItem};
	__property TCustomImageList* ImageList = {read=GetImageList};
	HIDESBASE TLayer* __fastcall Add();
	HIDESBASE TLayer* __fastcall Insert(int Index);
	__property TLayer* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TLayers() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomDestinationItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
public:
	#define TCustomDestinationItem_StrDestinationDisplay L"%d (%s)"
	
	
private:
	TLayers* FLayers;
	TDestinationCollection* FDestination;
	bool FIsChanged;
	void __fastcall SetLayers(TLayers* const Value);
	
protected:
	virtual TLayers* __fastcall CreateLayers();
	virtual void __fastcall SetCollection(System::Classes::TCollection* Value);
	virtual System::UnicodeString __fastcall GetDisplayName();
	
public:
	__fastcall virtual TCustomDestinationItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TCustomDestinationItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	int __fastcall LayersCount();
	__property bool IsChanged = {read=FIsChanged, nodefault};
	__property TLayers* Layers = {read=FLayers, write=SetLayers};
	__property TDestinationCollection* Destination = {read=FDestination};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDestinationItem : public TCustomDestinationItem
{
	typedef TCustomDestinationItem inherited;
	
__published:
	__property Layers;
public:
	/* TCustomDestinationItem.Create */ inline __fastcall virtual TDestinationItem(System::Classes::TCollection* Collection) : TCustomDestinationItem(Collection) { }
	/* TCustomDestinationItem.Destroy */ inline __fastcall virtual ~TDestinationItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDestinationCollection : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TCustomDestinationItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCustomImageList* FImageList;
	HIDESBASE TCustomDestinationItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TCustomDestinationItem* const Value);
	
protected:
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall TDestinationCollection(System::Classes::TPersistent* AOwner, TDestinationItemClass ItemClass);
	__property TCustomImageList* ImageList = {read=FImageList};
	HIDESBASE TCustomDestinationItem* __fastcall Add();
	HIDESBASE TCustomDestinationItem* __fastcall Insert(int Index);
	__property TCustomDestinationItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDestinationCollection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCustomImageList : public System::Imagelist::TBaseImageList
{
	typedef System::Imagelist::TBaseImageList inherited;
	
	
private:
	struct DECLSPEC_DRECORD TItemRec
	{
	public:
		Fmx::Multiresbitmap::TCustomBitmapItem* Item;
		System::Types::TRectF SourceRect;
		System::Types::TRectF ItemRect;
	};
	
	
	
private:
	Fmx::Graphics::TBitmap* FTmpBitmap1;
	Fmx::Graphics::TBitmap* FTmpBitmap2;
	
private:
	TSourceCollection* FSource;
	TDestinationCollection* FDestination;
	System::Generics::Collections::TDictionary__2<int,TCustomDestinationItem*>* FChangedList;
	System::TObject* FCache;
	NativeUInt FTimerHandle;
	Fmx::Types::_di_IFMXTimerService FPlatformTimer;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnChanged;
	void __fastcall SetSource(TSourceCollection* const Value);
	void __fastcall SetDestination(TDestinationCollection* const Value);
	void __fastcall SetCacheSize(const System::Word Value);
	System::Word __fastcall GetCacheSize();
	void __fastcall StartTimer();
	void __fastcall StopTimer();
	void __fastcall TimerProc();
	bool __fastcall GetDormant();
	void __fastcall SetDormant(const bool Value);
	System::Generics::Collections::TList__1<TItemRec>* __fastcall GetItemList(const System::Types::TSize &Size, const int Index);
	bool __fastcall InvalidateDestination(const System::UnicodeString Name);
	bool __fastcall IsIgnoreIndex();
	
protected:
	virtual TSourceCollection* __fastcall CreateSource();
	virtual TDestinationCollection* __fastcall CreateDestination();
	virtual void __fastcall DoChange();
	virtual void __fastcall DoChanged();
	virtual void __fastcall Loaded();
	virtual Fmx::Graphics::TBitmap* __fastcall DoBitmap(const System::Types::TSize &Size, const int Index);
	Fmx::Graphics::TBitmap* __fastcall FindInCache(const System::Types::TSize &Size, const int Index);
	void __fastcall AddToCache(const System::Types::TSize &Size, const int Index, Fmx::Graphics::TBitmap* const Bitmap);
	virtual int __fastcall GetCount();
	
public:
	__fastcall virtual TCustomImageList(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomImageList();
	virtual void __fastcall BeforeDestruction();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	System::Uitypes::TImageIndex __fastcall AddOrSet(const System::UnicodeString SourceName, const float *Scales, const int Scales_High, const System::UnicodeString *FileNames, const int FileNames_High, const System::Uitypes::TColor TransparentColor = (System::Uitypes::TColor)(0x1fffffff), const int Width = 0x0, const int Height = 0x0);
	bool __fastcall BitmapItemByName(const System::UnicodeString Name, Fmx::Multiresbitmap::TCustomBitmapItem* &Item, System::Types::TSize &Size);
	Fmx::Graphics::TBitmap* __fastcall Bitmap(const System::Types::TSizeF &Size, const int Index);
	bool __fastcall BitmapExists(const int Index);
	bool __fastcall BestSize(const int Index, System::Types::TSize &Size)/* overload */;
	bool __fastcall BestSize(const int Index, System::Types::TSizeF &Size)/* overload */;
	bool __fastcall Draw(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &Rect, const int Index, const float Opacity = 1.000000E+00f);
	void __fastcall DrawBitmapToCanvas(Fmx::Graphics::TCanvas* const Canvas, Fmx::Graphics::TBitmap* const Bitmap, const System::Types::TRect &SrcRect, const System::Types::TRect &DstRect, const bool Fast = false);
	void __fastcall ClearCache(const int Index = 0xffffffff);
	void __fastcall UpdateImmediately();
	__property System::Word CacheSize = {read=GetCacheSize, write=SetCacheSize, nodefault};
	__property bool Dormant = {read=GetDormant, write=SetDormant, nodefault};
	__property TSourceCollection* Source = {read=FSource, write=SetSource};
	__property TDestinationCollection* Destination = {read=FDestination, write=SetDestination};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnChanged = {read=FOnChanged, write=FOnChanged};
};


class PASCALIMPLEMENTATION TImageList : public TCustomImageList
{
	typedef TCustomImageList inherited;
	
__published:
	__property Source;
	__property Destination;
	__property OnChange;
	__property OnChanged;
public:
	/* TCustomImageList.Create */ inline __fastcall virtual TImageList(System::Classes::TComponent* AOwner) : TCustomImageList(AOwner) { }
	/* TCustomImageList.Destroy */ inline __fastcall virtual ~TImageList() { }
	
};


class PASCALIMPLEMENTATION TGlyphImageLink : public System::Imagelist::TImageLink
{
	typedef System::Imagelist::TImageLink inherited;
	
private:
	System::Classes::TComponent* FOwner;
	Fmx::Actnlist::_di_IGlyph FGlyph;
	
public:
	__fastcall TGlyphImageLink(System::Classes::TComponent* AOwner);
	virtual void __fastcall Change();
	__property System::Classes::TComponent* Owner = {read=FOwner};
	__property Fmx::Actnlist::_di_IGlyph Glyph = {read=FGlyph};
public:
	/* TImageLink.Destroy */ inline __fastcall virtual ~TGlyphImageLink() { }
	
};


class PASCALIMPLEMENTATION TGlyph : public Fmx::Controls::TControl
{
	typedef Fmx::Controls::TControl inherited;
	
public:
	static const unsigned DesignBorderColor = unsigned(0xa080d080);
	
	
private:
	System::Imagelist::TImageLink* FImageLink;
	bool FIsChanging;
	bool FIsChanged;
	bool FAutoHide;
	System::Classes::TNotifyEvent FOnChanged;
	bool FBitmapExists;
	bool FStretch;
	bool FDisableInterpolation;
	TCustomImageList* __fastcall GetImages();
	void __fastcall SetImages(TCustomImageList* const Value);
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	System::Imagelist::TBaseImageList* __fastcall GetImageList();
	void __fastcall SetImageList(System::Imagelist::TBaseImageList* const Value);
	void __fastcall SetAutoHide(const bool Value);
	void __fastcall SetStretch(const bool Value);
	void __fastcall SetDisableInterpolation(const bool Value);
	
protected:
	virtual void __fastcall Paint();
	virtual void __fastcall Loaded();
	virtual void __fastcall DoEndUpdate();
	virtual void __fastcall DoChanged();
	void __fastcall UpdateVisible();
	virtual void __fastcall ActionChange(System::Classes::TBasicAction* Sender, bool CheckDefaults);
	virtual bool __fastcall ImageIndexStored();
	virtual bool __fastcall ImagesStored();
	virtual void __fastcall SetVisible(const bool Value);
	virtual bool __fastcall VisibleStored();
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	
public:
	__fastcall virtual TGlyph(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TGlyph();
	virtual void __fastcall AfterConstruction();
	void __fastcall ImagesChanged();
	__property bool BitmapExists = {read=FBitmapExists, nodefault};
	__property bool IsChanged = {read=FIsChanged, write=FIsChanged, nodefault};
	
__published:
	__property Action;
	__property bool AutoHide = {read=FAutoHide, write=SetAutoHide, default=1};
	__property bool DisableInterpolation = {read=FDisableInterpolation, write=SetDisableInterpolation, default=0};
	__property Enabled;
	__property Padding;
	__property Margins;
	__property Align = {default=0};
	__property Position;
	__property Width;
	__property Height;
	__property Opacity;
	__property Visible = {default=1};
	__property Size;
	__property bool Stretch = {read=FStretch, write=SetStretch, default=1};
	__property System::Uitypes::TImageIndex ImageIndex = {read=GetImageIndex, write=SetImageIndex, stored=ImageIndexStored, nodefault};
	__property TCustomImageList* Images = {read=GetImages, write=SetImages, stored=ImagesStored};
	__property System::Classes::TNotifyEvent OnChanged = {read=FOnChanged, write=FOnChanged};
	__property OnPaint;
	__property OnPainting;
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


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Imglist */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_IMGLIST)
using namespace Fmx::Imglist;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_ImglistHPP
