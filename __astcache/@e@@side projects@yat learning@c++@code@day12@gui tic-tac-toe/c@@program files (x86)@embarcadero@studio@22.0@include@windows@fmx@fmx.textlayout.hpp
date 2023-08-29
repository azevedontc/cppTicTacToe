// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.TextLayout.pas' rev: 35.00 (Windows)

#ifndef Fmx_TextlayoutHPP
#define Fmx_TextlayoutHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <FMX.Types.hpp>
#include <FMX.Graphics.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Textlayout
{
//-- forward type declarations -----------------------------------------------
struct TTextRange;
struct TTextAttribute;
class DELPHICLASS TTextAttributedRange;
class DELPHICLASS TTextLayout;
class DELPHICLASS ETextLayoutException;
class DELPHICLASS ETextLayoutManagerException;
class DELPHICLASS TTextLayoutManager;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TTextRange
{
public:
	int Pos;
	int Length;
	__fastcall TTextRange(int APos, int ALength);
	bool __fastcall InRange(const int AIndex);
	TTextRange() {}
};


struct DECLSPEC_DRECORD TTextAttribute
{
public:
	Fmx::Graphics::TFont* Font;
	System::Uitypes::TAlphaColor Color;
	__fastcall TTextAttribute(Fmx::Graphics::TFont* const AFont, const System::Uitypes::TAlphaColor AColor)/* overload */;
	__fastcall TTextAttribute(const TTextAttribute &AExisting, Fmx::Graphics::TFont* const ANewFont)/* overload */;
	__fastcall TTextAttribute(const TTextAttribute &AExisting, const System::Uitypes::TAlphaColor ANewColor)/* overload */;
	TTextAttribute() {}
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTextAttributedRange : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TTextRange Range;
	TTextAttribute Attribute;
	__fastcall TTextAttributedRange(const TTextRange &ARange, const TTextAttribute &AAttribute);
	__fastcall virtual ~TTextAttributedRange();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTextLayout : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static System::Types::TPointF MaxLayoutSize;
	
private:
	System::Generics::Collections::TList__1<TTextAttributedRange*>* FAttributes;
	Fmx::Graphics::TFont* FFont;
	System::Uitypes::TAlphaColor FColor;
	System::UnicodeString FText;
	bool FWordWrap;
	Fmx::Types::TTextAlign FHorizontalAlign;
	Fmx::Types::TTextAlign FVerticalAlign;
	Fmx::Types::TBounds* FPadding;
	bool FNeedUpdate;
	System::Types::TPointF FMaxSize;
	System::Types::TPointF FTopLeft;
	int FUpdating;
	float FOpacity;
	Fmx::Types::TTextTrimming FTrimming;
	bool FRightToLeft;
	Fmx::Graphics::TCanvas* FCanvas;
	int FMessageId;
	void __fastcall SetMaxSize(const System::Types::TPointF &Value);
	void __fastcall AttributesChanged(System::TObject* Sender, TTextAttributedRange* const Item, System::Generics::Collections::TCollectionNotification Action);
	void __fastcall ChangedHandler(System::TObject* Sender);
	TTextAttributedRange* __fastcall GetAttribute(const int Index);
	int __fastcall GetAttributesCount();
	void __fastcall SetHorizontalAlign(const Fmx::Types::TTextAlign Value);
	void __fastcall SetFont(Fmx::Graphics::TFont* const Value);
	void __fastcall SetPadding(Fmx::Types::TBounds* const Value);
	void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetWordWrap(const bool Value);
	float __fastcall GetHeight();
	float __fastcall GetWidth();
	System::Types::TSizeF __fastcall GetSize();
	void __fastcall NeedUpdate();
	void __fastcall SetVerticalAlign(const Fmx::Types::TTextAlign Value);
	void __fastcall SetTrimming(const Fmx::Types::TTextTrimming Value);
	void __fastcall SetRightToLeft(const bool Value);
	void __fastcall SetCanvas(Fmx::Graphics::TCanvas* const Value);
	void __fastcall SetColor(const System::Uitypes::TAlphaColor Value);
	
protected:
	virtual void __fastcall DoRenderLayout() = 0 ;
	virtual void __fastcall DoDrawLayout(Fmx::Graphics::TCanvas* const ACanvas) = 0 ;
	virtual void __fastcall DoColorChanaged();
	virtual float __fastcall GetTextHeight() = 0 ;
	virtual float __fastcall GetTextWidth() = 0 ;
	virtual System::Types::TRectF __fastcall GetTextRect() = 0 ;
	virtual int __fastcall DoPositionAtPoint(const System::Types::TPointF &APoint) = 0 ;
	virtual Fmx::Graphics::TRegion __fastcall DoRegionForRange(const TTextRange &ARange) = 0 ;
	void __fastcall SetNeedUpdate();
	
public:
	__fastcall virtual TTextLayout(Fmx::Graphics::TCanvas* const ACanvas);
	__fastcall virtual ~TTextLayout();
	void __fastcall AddAttribute(const TTextRange &ARange, const TTextAttribute &AAttribute)/* overload */;
	void __fastcall AddAttribute(TTextAttributedRange* const AAttributeRange)/* overload */;
	void __fastcall DeleteAttribute(const int AIndex);
	void __fastcall DeleteAttributeRange(const int AFromIndex, const int AToIndex);
	void __fastcall ClearAttributes();
	void __fastcall RenderLayout(Fmx::Graphics::TCanvas* const ACanvas);
	virtual void __fastcall ConvertToPath(Fmx::Graphics::TPathData* const APath) = 0 ;
	int __fastcall PositionAtPoint(const System::Types::TPointF &APoint, const bool RoundToWord = false);
	Fmx::Graphics::TRegion __fastcall RegionForRange(const TTextRange &ARange, const bool RoundToWord = false);
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	__property Fmx::Graphics::TCanvas* LayoutCanvas = {read=FCanvas, write=SetCanvas};
	__property TTextAttributedRange* Attributes[const int Index] = {read=GetAttribute};
	__property int AttributesCount = {read=GetAttributesCount, nodefault};
	__property System::UnicodeString Text = {read=FText, write=SetText};
	__property Fmx::Types::TBounds* Padding = {read=FPadding, write=SetPadding};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, nodefault};
	__property Fmx::Types::TTextAlign HorizontalAlign = {read=FHorizontalAlign, write=SetHorizontalAlign, nodefault};
	__property Fmx::Types::TTextAlign VerticalAlign = {read=FVerticalAlign, write=SetVerticalAlign, nodefault};
	__property System::Uitypes::TAlphaColor Color = {read=FColor, write=SetColor, default=-16777216};
	__property Fmx::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property float Opacity = {read=FOpacity, write=FOpacity};
	__property Fmx::Types::TTextTrimming Trimming = {read=FTrimming, write=SetTrimming, nodefault};
	__property bool RightToLeft = {read=FRightToLeft, write=SetRightToLeft, nodefault};
	__property System::Types::TSizeF Size = {read=GetSize};
	__property System::Types::TPointF MaxSize = {read=FMaxSize, write=SetMaxSize};
	__property System::Types::TPointF TopLeft = {read=FTopLeft, write=FTopLeft};
	__property float Height = {read=GetHeight};
	__property float Width = {read=GetWidth};
	__property float TextHeight = {read=GetTextHeight};
	__property float TextWidth = {read=GetTextWidth};
	__property System::Types::TRectF TextRect = {read=GetTextRect};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ETextLayoutException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ETextLayoutException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ETextLayoutException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ETextLayoutException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ETextLayoutException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ETextLayoutException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ETextLayoutException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ETextLayoutException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ETextLayoutException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETextLayoutException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETextLayoutException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETextLayoutException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETextLayoutException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ETextLayoutException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TTextLayoutClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TTextLayoutClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ETextLayoutManagerException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ETextLayoutManagerException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ETextLayoutManagerException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ETextLayoutManagerException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ETextLayoutManagerException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ETextLayoutManagerException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ETextLayoutManagerException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ETextLayoutManagerException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ETextLayoutManagerException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETextLayoutManagerException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETextLayoutManagerException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETextLayoutManagerException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETextLayoutManagerException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ETextLayoutManagerException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTextLayoutManager : /*[[sealed]]*/ public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	struct DECLSPEC_DRECORD TTextLayoutRecord
	{
	public:
		TTextLayoutClass LayoutClass;
		Fmx::Graphics::TCanvasClass CanvasClass;
	};
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
	
private:
	static System::Generics::Collections::TList__1<TTextLayoutRecord>* FLayoutList;
	static TTextLayoutClass FDefaultLayoutClass;
	
private:
	static TTextLayoutClass __fastcall GetDefaultLayout();
	
public:
	__classmethod void __fastcall UnInitialize();
	__classmethod void __fastcall RegisterTextLayout(const TTextLayoutClass LayoutClass, const Fmx::Graphics::TCanvasClass CanvasClass);
	/* static */ __property TTextLayoutClass DefaultTextLayout = {read=GetDefaultLayout};
	__classmethod TTextLayoutClass __fastcall TextLayoutByCanvas(const System::TClass ACanvasClass);
	static TTextLayout* __fastcall TextLayoutForClass(TTextLayoutClass C);
public:
	/* TObject.Create */ inline __fastcall TTextLayoutManager() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TTextLayoutManager() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall IsPointInRect(const System::Types::TPointF &APoint, const System::Types::TRectF &ARect);
}	/* namespace Textlayout */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_TEXTLAYOUT)
using namespace Fmx::Textlayout;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_TextlayoutHPP
