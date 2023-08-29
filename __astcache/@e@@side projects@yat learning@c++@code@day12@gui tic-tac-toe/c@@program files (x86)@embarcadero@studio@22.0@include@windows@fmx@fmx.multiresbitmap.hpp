// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.MultiResBitmap.pas' rev: 35.00 (Windows)

#ifndef Fmx_MultiresbitmapHPP
#define Fmx_MultiresbitmapHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <System.Classes.hpp>
#include <FMX.Graphics.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Multiresbitmap
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EMultiResBitmap;
class DELPHICLASS TBitmapOfItem;
class DELPHICLASS TCustomBitmapItem;
class DELPHICLASS TCustomMultiResBitmap;
class DELPHICLASS TFixedBitmapItem;
class DELPHICLASS TFixedMultiResBitmap;
struct TScaleName;
class DELPHICLASS TScaleNameComparer;
__interface DELPHIINTERFACE IMultiResBitmapObject;
typedef System::DelphiInterface<IMultiResBitmapObject> _di_IMultiResBitmapObject;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EMultiResBitmap : public System::Classes::EComponentError
{
	typedef System::Classes::EComponentError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EMultiResBitmap(const System::UnicodeString Msg) : System::Classes::EComponentError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EMultiResBitmap(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Classes::EComponentError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EMultiResBitmap(NativeUInt Ident)/* overload */ : System::Classes::EComponentError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EMultiResBitmap(System::PResStringRec ResStringRec)/* overload */ : System::Classes::EComponentError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EMultiResBitmap(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Classes::EComponentError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EMultiResBitmap(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Classes::EComponentError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EMultiResBitmap(const System::UnicodeString Msg, int AHelpContext) : System::Classes::EComponentError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EMultiResBitmap(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Classes::EComponentError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EMultiResBitmap(NativeUInt Ident, int AHelpContext)/* overload */ : System::Classes::EComponentError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EMultiResBitmap(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Classes::EComponentError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EMultiResBitmap(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Classes::EComponentError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EMultiResBitmap(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Classes::EComponentError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EMultiResBitmap() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TBitmapOfItem : public Fmx::Graphics::TBitmap
{
	typedef Fmx::Graphics::TBitmap inherited;
	
private:
	TCustomBitmapItem* FBitmapItem;
	bool FIsChanged;
	
protected:
	virtual void __fastcall DoChange();
	
public:
	__property TCustomBitmapItem* BitmapItem = {read=FBitmapItem};
	__property bool IsChanged = {read=FIsChanged, write=FIsChanged, nodefault};
public:
	/* TBitmap.Create */ inline __fastcall virtual TBitmapOfItem()/* overload */ : Fmx::Graphics::TBitmap() { }
	/* TBitmap.Create */ inline __fastcall virtual TBitmapOfItem(const int AWidth, const int AHeight)/* overload */ : Fmx::Graphics::TBitmap(AWidth, AHeight) { }
	/* TBitmap.CreateFromStream */ inline __fastcall virtual TBitmapOfItem(System::Classes::TStream* const AStream) : Fmx::Graphics::TBitmap(AStream) { }
	/* TBitmap.CreateFromFile */ inline __fastcall virtual TBitmapOfItem(const System::UnicodeString AFileName) : Fmx::Graphics::TBitmap(AFileName) { }
	/* TBitmap.CreateFromBitmapAndMask */ inline __fastcall TBitmapOfItem(Fmx::Graphics::TBitmap* const Bitmap, Fmx::Graphics::TBitmap* const Mask) : Fmx::Graphics::TBitmap(Bitmap, Mask) { }
	/* TBitmap.Destroy */ inline __fastcall virtual ~TBitmapOfItem() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomBitmapItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
public:
	static const System::Int8 ScaleRange = System::Int8(-3);
	
	static const System::Int8 ScaleMax = System::Int8(0x64);
	
	static const System::Int8 ScaleDefault = System::Int8(0x1);
	
	
private:
	bool FFixed;
	bool FDormant;
	bool FDormantChanging;
	TBitmapOfItem* FBitmap;
	System::Classes::TMemoryStream* FStream;
	TCustomMultiResBitmap* FMultiResBitmap;
	float FScale;
	System::UnicodeString FFileName;
	System::Word FWidth;
	System::Word FHeight;
	bool __fastcall GetFixed();
	void __fastcall SetScale(const float Value);
	void __fastcall SetBitmap(TBitmapOfItem* const Value);
	TBitmapOfItem* __fastcall GetBitmap();
	void __fastcall ReadFileName(System::Classes::TReader* Reader);
	void __fastcall WriteFileName(System::Classes::TWriter* Writer);
	System::Classes::TComponent* __fastcall GetComponent();
	void __fastcall SetDormant(const bool Value);
	void __fastcall ReadBitmap(System::Classes::TStream* Stream);
	void __fastcall WriteBitmap(System::Classes::TStream* Stream);
	bool __fastcall GetIsEmpty();
	void __fastcall ReadHeight(System::Classes::TReader* Reader);
	void __fastcall ReadWidth(System::Classes::TReader* Reader);
	void __fastcall WriteHeight(System::Classes::TWriter* Writer);
	void __fastcall WriteWidth(System::Classes::TWriter* Writer);
	
protected:
	virtual void __fastcall SetCollection(System::Classes::TCollection* Value);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual bool __fastcall ScaleStored();
	void __fastcall SetFixed(const bool Value);
	virtual System::UnicodeString __fastcall GetDisplayName();
	virtual void __fastcall SetIndex(int Value);
	virtual bool __fastcall BitmapStored();
	
public:
	__fastcall virtual TCustomBitmapItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TCustomBitmapItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual bool __fastcall Equals(System::TObject* Obj);
	void __fastcall Clear();
	__property TCustomMultiResBitmap* MultiResBitmap = {read=FMultiResBitmap};
	__property bool Fixed = {read=GetFixed, nodefault};
	__property System::Classes::TComponent* Component = {read=GetComponent};
	__classmethod double __fastcall ScaleOfBitmap(const System::Types::TSize &SourceSize, const System::Types::TSize &DestinationSize);
	__classmethod System::Types::TRect __fastcall RectOfBitmap(const System::Types::TSize &SourceSize, const System::Types::TSize &DestinationSize);
	virtual Fmx::Graphics::TBitmap* __fastcall CreateBitmap(const System::UnicodeString AFileName = System::UnicodeString());
	__property float Scale = {read=FScale, write=SetScale, stored=ScaleStored};
	__property TBitmapOfItem* Bitmap = {read=GetBitmap, write=SetBitmap, stored=false};
	__property System::UnicodeString FileName = {read=FFileName, write=FFileName, stored=false};
	__property bool Dormant = {read=FDormant, write=SetDormant, nodefault};
	__property bool IsEmpty = {read=GetIsEmpty, nodefault};
	__property System::Word Width = {read=FWidth, stored=false, nodefault};
	__property System::Word Height = {read=FHeight, stored=false, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TCustomBitmapItemClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomBitmapItemClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TFixedBitmapItemClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFixedBitmapItemClass);
#endif /* _WIN64 */

enum class DECLSPEC_DENUM TSizeKind : unsigned char { Custom, Default, Source };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomMultiResBitmap : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TCustomBitmapItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	bool FFixed;
	System::Word FWidth;
	System::Word FHeight;
	TSizeKind FSizeKind;
	System::Uitypes::TColor FTransparentColor;
	bool __fastcall GetFixed();
	void __fastcall ReadWidth(System::Classes::TReader* Reader);
	void __fastcall WriteWidth(System::Classes::TWriter* Writer);
	void __fastcall ReadHeight(System::Classes::TReader* Reader);
	void __fastcall WriteHeight(System::Classes::TWriter* Writer);
	HIDESBASE TCustomBitmapItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TCustomBitmapItem* const Value);
	System::Classes::TComponent* __fastcall GetComponent();
	void __fastcall ReadLoadSize(System::Classes::TReader* Reader);
	void __fastcall WriteLoadSize(System::Classes::TWriter* Writer);
	void __fastcall ReadColor(System::Classes::TReader* Reader);
	void __fastcall WriteColor(System::Classes::TWriter* Writer);
	TBitmapOfItem* __fastcall GetBitmaps(float Scale);
	void __fastcall SetBitmaps(float Scale, TBitmapOfItem* const Value);
	
protected:
	void __fastcall SetFixed(const bool Value);
	virtual System::Types::TSize __fastcall GetDefaultSize();
	virtual void __fastcall Notify(System::Classes::TCollectionItem* Item, System::Generics::Collections::TCollectionNotification Action);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	
public:
	__fastcall TCustomMultiResBitmap(System::Classes::TPersistent* AOwner, TCustomBitmapItemClass ItemClass);
#ifndef _WIN64
	System::DynamicArray<float> __fastcall ScaleArray(bool IncludeEmpty);
#else /* _WIN64 */
	System::TArray__1<float> __fastcall ScaleArray(bool IncludeEmpty);
#endif /* _WIN64 */
	TCustomBitmapItem* __fastcall ItemByScale(const float AScale, const bool ExactMatch, const bool IncludeEmpty);
	void __fastcall LoadItemFromStream(System::Classes::TStream* Stream, float Scale);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* S);
	virtual void __fastcall SaveToStream(System::Classes::TStream* S);
	virtual bool __fastcall Equals(System::TObject* Obj);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual TSizeKind __fastcall GetDefaultSizeKind();
	HIDESBASE TCustomBitmapItem* __fastcall Add();
	TCustomBitmapItem* __fastcall AddOrSet(const float Scale, const System::UnicodeString FileName);
	HIDESBASE TCustomBitmapItem* __fastcall Insert(int Index);
	__property TCustomBitmapItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property TBitmapOfItem* Bitmaps[float Scale] = {read=GetBitmaps, write=SetBitmaps};
	__property System::Classes::TComponent* Component = {read=GetComponent};
	__property bool Fixed = {read=GetFixed, nodefault};
	__property System::Types::TSize DefaultSize = {read=GetDefaultSize};
	__property TSizeKind SizeKind = {read=FSizeKind, write=FSizeKind, stored=false, nodefault};
	__property System::Word Width = {read=FWidth, write=FWidth, stored=false, nodefault};
	__property System::Word Height = {read=FHeight, write=FHeight, stored=false, nodefault};
	__property System::Uitypes::TColor TransparentColor = {read=FTransparentColor, write=FTransparentColor, stored=false, nodefault};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TCustomMultiResBitmap() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFixedBitmapItem : public TCustomBitmapItem
{
	typedef TCustomBitmapItem inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	
public:
	__fastcall virtual TFixedBitmapItem(System::Classes::TCollection* Collection);
	
__published:
	__property Scale;
	__property Bitmap;
public:
	/* TCustomBitmapItem.Destroy */ inline __fastcall virtual ~TFixedBitmapItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFixedMultiResBitmap : public TCustomMultiResBitmap
{
	typedef TCustomMultiResBitmap inherited;
	
public:
	TFixedBitmapItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	void __fastcall CreateItem(float Scale);
	void __fastcall CreateItems();
	HIDESBASE TFixedBitmapItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TFixedBitmapItem* const Value);
	void __fastcall UpdateFixed();
	
public:
	__fastcall TFixedMultiResBitmap(System::Classes::TPersistent* AOwner, TFixedBitmapItemClass ItemClass)/* overload */;
	__fastcall TFixedMultiResBitmap(System::Classes::TPersistent* AOwner)/* overload */;
	virtual void __fastcall EndUpdate();
	HIDESBASE TFixedBitmapItem* __fastcall Add();
	HIDESBASE TFixedBitmapItem* __fastcall Insert(int Index);
	__property TFixedBitmapItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TFixedMultiResBitmap() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TScaleName
{
public:
	float Scale;
	System::UnicodeString Name;
};


typedef System::Generics::Collections::TList__1<TScaleName>* TScaleList;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TScaleNameComparer : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	int __fastcall Compare(const TScaleName &Left, const TScaleName &Right);
public:
	/* TObject.Create */ inline __fastcall TScaleNameComparer() : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TScaleNameComparer() { }
	
private:
	void *__IComparer__1;	// System::Generics::Defaults::IComparer__1<TScaleName> 
	
public:
	operator System::Generics::Defaults::IComparer__1<TScaleName>*(void) { return (System::Generics::Defaults::IComparer__1<TScaleName>*)&__IComparer__1; }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{D64BEB1F-D3C5-4C83-BE1C-DBBA319C0EA5}") IMultiResBitmapObject  : public Fmx::Graphics::IBitmapObject 
{
	virtual TCustomMultiResBitmap* __fastcall GetMultiResBitmap() = 0 ;
	__property TCustomMultiResBitmap* MultiResBitmap = {read=GetMultiResBitmap};
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Generics::Collections::TList__1<TScaleName>* __fastcall ScaleList(void);
extern DELPHI_PACKAGE bool __fastcall RegisterScaleName(float Scale, System::UnicodeString Name);
}	/* namespace Multiresbitmap */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_MULTIRESBITMAP)
using namespace Fmx::Multiresbitmap;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_MultiresbitmapHPP
