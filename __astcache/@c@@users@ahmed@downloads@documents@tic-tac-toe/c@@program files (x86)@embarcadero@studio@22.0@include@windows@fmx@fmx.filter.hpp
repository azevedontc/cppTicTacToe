// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Filter.pas' rev: 35.00 (Windows)

#ifndef Fmx_FilterHPP
#define Fmx_FilterHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.Types.hpp>
#include <System.Rtti.hpp>
#include <System.UITypes.hpp>
#include <System.Generics.Collections.hpp>
#include <FMX.Types3D.hpp>
#include <FMX.Graphics.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Filter
{
//-- forward type declarations -----------------------------------------------
struct TFilterValueRec;
struct TFilterRec;
class DELPHICLASS TFilter;
class DELPHICLASS TFilterManager;
//-- type declarations -------------------------------------------------------
enum class DECLSPEC_DENUM TFilterValueType : unsigned char { Float, Point, Color, Bitmap };

struct DECLSPEC_DRECORD TFilterValueRec
{
public:
	System::UnicodeString Name;
	System::UnicodeString Desc;
	TFilterValueType ValueType;
	System::Rtti::TValue Value;
	System::Rtti::TValue Min;
	System::Rtti::TValue Max;
	System::Rtti::TValue Default;
	Fmx::Graphics::TBitmap* Bitmap;
	__fastcall TFilterValueRec(const System::UnicodeString AName, const System::UnicodeString ADesc, TFilterValueType AType, const System::Rtti::TValue &ADefault, const System::Rtti::TValue &AMin, const System::Rtti::TValue &AMax)/* overload */;
	__fastcall TFilterValueRec(const System::UnicodeString AName, const System::UnicodeString ADesc, TFilterValueType AType)/* overload */;
	__fastcall TFilterValueRec(const System::UnicodeString AName, const System::UnicodeString ADesc, System::Uitypes::TAlphaColor ADefault)/* overload */;
	__fastcall TFilterValueRec(const System::UnicodeString AName, const System::UnicodeString ADesc, float ADefault, float AMin, float AMax)/* overload */;
	__fastcall TFilterValueRec(const System::UnicodeString AName, const System::UnicodeString ADesc, const System::Types::TPointF &ADefault, const System::Types::TPointF &AMin, const System::Types::TPointF &AMax)/* overload */;
	TFilterValueRec() {}
};


typedef System::DynamicArray<TFilterValueRec> TFilterValueRecArray;

struct DECLSPEC_DRECORD TFilterRec
{
public:
	System::UnicodeString Name;
	System::UnicodeString Desc;
	TFilterValueRecArray Values;
	__fastcall TFilterRec(const System::UnicodeString AName, const System::UnicodeString ADesc, TFilterValueRec *AValues, const int AValues_High)/* overload */;
	TFilterRec() {}
};


#ifndef _WIN64
typedef System::TMetaClass* TFilterClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFilterClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFilter : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
	
private:
	typedef System::DynamicArray<Fmx::Types3d::TContextShader*> _TFilter__1;
	
	
public:
	System::Rtti::TValue operator[](const System::UnicodeString Index) { return this->Values[Index]; }
	
private:
	System::Rtti::TValue __fastcall GetFilterValues(const System::UnicodeString Index);
	void __fastcall SetFilterValues(const System::UnicodeString Index, const System::Rtti::TValue &Value);
	Fmx::Graphics::TBitmap* __fastcall GetFilterValuesAsBitmap(const System::UnicodeString Index);
	void __fastcall SetFilterValuesAsBitmap(const System::UnicodeString Index, Fmx::Graphics::TBitmap* const Value);
	System::Types::TPointF __fastcall GetFilterValuesAsPoint(const System::UnicodeString Index);
	void __fastcall SetFilterValuesAsPoint(const System::UnicodeString Index, const System::Types::TPointF &Value);
	void __fastcall SetInputFilter(TFilter* const Value);
	float __fastcall GetFilterValuesAsFloat(const System::UnicodeString Index);
	void __fastcall SetFilterValuesAsFloat(const System::UnicodeString Index, const float Value);
	System::Uitypes::TAlphaColor __fastcall GetFilterValuesAsColor(const System::UnicodeString Index);
	void __fastcall SetFilterValuesAsColor(const System::UnicodeString Index, const System::Uitypes::TAlphaColor Value);
	Fmx::Types3d::TTexture* __fastcall GetFilterValuesAsTexture(const System::UnicodeString Index);
	void __fastcall SetFilterValuesAsTexture(const System::UnicodeString Index, Fmx::Types3d::TTexture* const Value);
	__property System::Rtti::TValue Values[const System::UnicodeString Index] = {read=GetFilterValues, write=SetFilterValues/*, default*/};
	static Fmx::Types3d::TTexture* FNoise;
	void __fastcall CreateNoise();
	void __fastcall RenderTextureToContext(Fmx::Types3d::TContext3D* const Context, Fmx::Types3d::TTexture* const Texture, const System::Types::TRect &ARect, const System::Types::TPoint &DstPos);
	
protected:
	static Fmx::Types3d::TContextShader* FVertexShader;
	TFilterValueRecArray FValues;
	Fmx::Types3d::TTexture* FInputRT;
	Fmx::Types3d::TContext3D* FInputRTContext;
	Fmx::Types3d::TTexture* FTargetRT;
	Fmx::Types3d::TContext3D* FTargetRTContext;
	Fmx::Types3d::TTexture* FPassInputRT;
	Fmx::Types3d::TContext3D* FPassInputRTContext;
	Fmx::Types3d::TTexture* FInput;
	Fmx::Graphics::TBitmap* FInputBitmap;
	Fmx::Types3d::TTexture* FTarget;
	Fmx::Graphics::TBitmap* FTargetBitmap;
	System::Types::TSize FOutputSize;
	Fmx::Graphics::TBitmap* FOutputBitmap;
	bool FProcessing;
	bool FModified;
	TFilter* FInputFilter;
	System::UnicodeString FNeedInternalSecondTex;
	bool FNoCopyForOutput;
	bool FAntiAlise;
	_TFilter__1 FShaders;
	int FPass;
	int FPassCount;
	virtual Fmx::Types3d::TMaterial* __fastcall CreateFilterMaterial();
	virtual void __fastcall CalcSize(int &W, int &H);
	virtual void __fastcall LoadShaders();
	virtual void __fastcall LoadTextures();
	virtual void __fastcall Render(int W, int H);
	System::Types::TSize __fastcall InputSize();
	Fmx::Types3d::TTexture* __fastcall InputTexture();
	Fmx::Types3d::TTexture* __fastcall TargetTexture();
	
public:
	__fastcall virtual TFilter();
	__fastcall virtual ~TFilter();
	__classmethod void __fastcall UnInitialize();
	__classmethod virtual TFilterRec __fastcall FilterAttr();
	static TFilterRec __fastcall FilterAttrForClass(TFilterClass C);
	virtual void __fastcall Apply();
	void __fastcall ApplyWithoutCopyToOutput();
	__property Fmx::Graphics::TBitmap* ValuesAsBitmap[const System::UnicodeString Index] = {read=GetFilterValuesAsBitmap, write=SetFilterValuesAsBitmap};
	__property Fmx::Types3d::TTexture* ValuesAsTexture[const System::UnicodeString Index] = {read=GetFilterValuesAsTexture, write=SetFilterValuesAsTexture};
	__property System::Types::TPointF ValuesAsPoint[const System::UnicodeString Index] = {read=GetFilterValuesAsPoint, write=SetFilterValuesAsPoint};
	__property float ValuesAsFloat[const System::UnicodeString Index] = {read=GetFilterValuesAsFloat, write=SetFilterValuesAsFloat};
	__property System::Uitypes::TAlphaColor ValuesAsColor[const System::UnicodeString Index] = {read=GetFilterValuesAsColor, write=SetFilterValuesAsColor};
	__property TFilter* InputFilter = {read=FInputFilter, write=SetInputFilter};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef System::Generics::Collections::TDictionary__2<TFilterClass,System::UnicodeString>* TFilterClassDict;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFilterManager : /*[[sealed]]*/ public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	struct DECLSPEC_DRECORD TContextRec
	{
	public:
		Fmx::Types3d::TTexture* Texture;
		Fmx::Types3d::TContext3D* Context;
	};
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
	
private:
	static System::Generics::Collections::TDictionary__2<TFilterClass,System::UnicodeString>* FFilterList;
	static System::Generics::Collections::TList__1<TContextRec>* FContextList;
	static int FCurrentContext;
	static Fmx::Types3d::TContext3D* __fastcall GetFilterContext();
	static Fmx::Types3d::TTexture* __fastcall GetFilterTexture();
	static void __fastcall SetCurrentContext(const int Value);
	static int __fastcall GetContextCount();
	static void __fastcall SetContextCount(const int Value);
	
public:
	__classmethod void __fastcall UnInitialize();
	__classmethod void __fastcall RegisterFilter(const System::UnicodeString Category, TFilterClass Filter);
	__classmethod TFilter* __fastcall FilterByName(const System::UnicodeString AName);
	__classmethod TFilterClass __fastcall FilterClassByName(const System::UnicodeString AName);
	__classmethod void __fastcall FillCategory(System::Classes::TStrings* AList);
	__classmethod void __fastcall FillFiltersInCategory(const System::UnicodeString Category, System::Classes::TStrings* AList);
	__classmethod void __fastcall ResizeContext(int Width, int Height);
	__classmethod Fmx::Types3d::TTexture* __fastcall GetTexture(const int Index);
	/* static */ __property int CurrentContext = {read=FCurrentContext, write=SetCurrentContext, nodefault};
	/* static */ __property int ContextCount = {read=GetContextCount, write=SetContextCount, nodefault};
	/* static */ __property Fmx::Types3d::TContext3D* FilterContext = {read=GetFilterContext};
	/* static */ __property Fmx::Types3d::TTexture* FilterTexture = {read=GetFilterTexture};
public:
	/* TObject.Create */ inline __fastcall TFilterManager() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TFilterManager() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Filter */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_FILTER)
using namespace Fmx::Filter;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_FilterHPP
