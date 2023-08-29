// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Effects.pas' rev: 35.00 (Windows)

#ifndef Fmx_EffectsHPP
#define Fmx_EffectsHPP

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
#include <FMX.Types.hpp>
#include <FMX.Types3D.hpp>
#include <FMX.Filter.hpp>
#include <FMX.Graphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Effects
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE ITriggerEffect;
typedef System::DelphiInterface<ITriggerEffect> _di_ITriggerEffect;
class DELPHICLASS TEffectAnimator;
__interface DELPHIINTERFACE IEffectContainer;
typedef System::DelphiInterface<IEffectContainer> _di_IEffectContainer;
class DELPHICLASS TEffect;
class DELPHICLASS TFilterEffect;
class DELPHICLASS TBlurEffect;
class DELPHICLASS TShadowEffect;
class DELPHICLASS TGlowEffect;
class DELPHICLASS TInnerGlowEffect;
class DELPHICLASS TReflectionEffect;
class DELPHICLASS TBevelEffect;
class DELPHICLASS TRasterEffect;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{945DC18B-7801-43F8-997D-F19607399AE9}") ITriggerEffect  : public System::IInterface 
{
	virtual void __fastcall ApplyTriggerEffect(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TEffectAnimator : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod void __fastcall ApplyTriggerEffect(Fmx::Types::TFmxObject* const Target, Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
	__classmethod void __fastcall DefaultApplyTriggerEffect(Fmx::Types::TFmxObject* const Target, Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
public:
	/* TObject.Create */ inline __fastcall TEffectAnimator() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TEffectAnimator() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{FFC591A9-A520-45F2-BD49-17F76E7B057C}") IEffectContainer  : public System::IInterface 
{
	virtual void __fastcall NeedUpdateEffects() = 0 ;
	virtual void __fastcall BeforeEffectEnabledChanged(const bool Enabled) = 0 ;
	virtual void __fastcall EffectEnabledChanged(const bool Enabled) = 0 ;
};

enum class DECLSPEC_DENUM TEffectStyle : unsigned char { AfterPaint, DisablePaint, DisablePaintToBitmap };

typedef System::Set<TEffectStyle, _DELPHI_SET_ENUMERATOR(TEffectStyle::AfterPaint), _DELPHI_SET_ENUMERATOR(TEffectStyle::DisablePaintToBitmap)> TEffectStyles;

class PASCALIMPLEMENTATION TEffect : public Fmx::Types::TFmxObject
{
	typedef Fmx::Types::TFmxObject inherited;
	
private:
	bool FEnabled;
	Fmx::Types::TTrigger FTrigger;
	void __fastcall SetEnabled(const bool Value);
	
protected:
	TEffectStyles FEffectStyle;
	
public:
	__fastcall virtual TEffect(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TEffect();
	virtual System::Types::TRectF __fastcall GetRect(const System::Types::TRectF &ARect);
	virtual System::Types::TPointF __fastcall GetOffset();
	virtual void __fastcall ProcessEffect(Fmx::Graphics::TCanvas* const Canvas, Fmx::Graphics::TBitmap* const Visual, const float Data);
	virtual void __fastcall ApplyTrigger(Fmx::Types::TFmxObject* AInstance, const System::UnicodeString ATrigger);
	void __fastcall UpdateParentEffects();
	__property TEffectStyles EffectStyle = {read=FEffectStyle, nodefault};
	__property Fmx::Types::TTrigger Trigger = {read=FTrigger, write=FTrigger};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
};


class PASCALIMPLEMENTATION TFilterEffect : public TEffect
{
	typedef TEffect inherited;
	
private:
	Fmx::Filter::TFilter* FFilter;
	
protected:
	virtual Fmx::Filter::TFilter* __fastcall CreateFilter() = 0 ;
	__property Fmx::Filter::TFilter* Filter = {read=FFilter};
	
public:
	__fastcall virtual TFilterEffect(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFilterEffect();
	virtual void __fastcall ProcessEffect(Fmx::Graphics::TCanvas* const Canvas, Fmx::Graphics::TBitmap* const Visual, const float Data);
	virtual void __fastcall ProcessTexture(Fmx::Types3d::TTexture* const Visual, Fmx::Types3d::TContext3D* const Context);
};


class PASCALIMPLEMENTATION TBlurEffect : public TFilterEffect
{
	typedef TFilterEffect inherited;
	
private:
	float FSoftness;
	void __fastcall SetSoftness(const float Value);
	
protected:
	virtual Fmx::Filter::TFilter* __fastcall CreateFilter();
	
public:
	__fastcall virtual TBlurEffect(System::Classes::TComponent* AOwner);
	virtual System::Types::TRectF __fastcall GetRect(const System::Types::TRectF &ARect);
	virtual System::Types::TPointF __fastcall GetOffset();
	
__published:
	__property float Softness = {read=FSoftness, write=SetSoftness};
	__property Trigger = {default=0};
	__property Enabled = {default=1};
public:
	/* TFilterEffect.Destroy */ inline __fastcall virtual ~TBlurEffect() { }
	
};


class PASCALIMPLEMENTATION TShadowEffect : public TFilterEffect
{
	typedef TFilterEffect inherited;
	
private:
	float FDistance;
	float FSoftness;
	System::Uitypes::TAlphaColor FShadowColor;
	float FOpacity;
	float FDirection;
	void __fastcall SetDistance(const float Value);
	void __fastcall SetSoftness(const float Value);
	void __fastcall SetShadowColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetOpacity(const float Value);
	System::Uitypes::TAlphaColor __fastcall GetShadowColor();
	void __fastcall SetDirection(const float Value);
	
protected:
	virtual Fmx::Filter::TFilter* __fastcall CreateFilter();
	
public:
	__fastcall virtual TShadowEffect(System::Classes::TComponent* AOwner);
	virtual System::Types::TRectF __fastcall GetRect(const System::Types::TRectF &ARect);
	virtual System::Types::TPointF __fastcall GetOffset();
	
__published:
	__property float Distance = {read=FDistance, write=SetDistance};
	__property float Direction = {read=FDirection, write=SetDirection};
	__property float Softness = {read=FSoftness, write=SetSoftness};
	__property float Opacity = {read=FOpacity, write=SetOpacity};
	__property System::Uitypes::TAlphaColor ShadowColor = {read=GetShadowColor, write=SetShadowColor, nodefault};
	__property Trigger = {default=0};
	__property Enabled = {default=1};
public:
	/* TFilterEffect.Destroy */ inline __fastcall virtual ~TShadowEffect() { }
	
};


class PASCALIMPLEMENTATION TGlowEffect : public TFilterEffect
{
	typedef TFilterEffect inherited;
	
private:
	System::Uitypes::TAlphaColor FGlowColor;
	float FSoftness;
	float FOpacity;
	void __fastcall SetSoftness(const float Value);
	System::Uitypes::TAlphaColor __fastcall GetGlowColor();
	void __fastcall SetGlowColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetOpacity(const float Value);
	
protected:
	virtual Fmx::Filter::TFilter* __fastcall CreateFilter();
	
public:
	__fastcall virtual TGlowEffect(System::Classes::TComponent* AOwner);
	virtual System::Types::TRectF __fastcall GetRect(const System::Types::TRectF &ARect);
	virtual System::Types::TPointF __fastcall GetOffset();
	
__published:
	__property float Softness = {read=FSoftness, write=SetSoftness};
	__property System::Uitypes::TAlphaColor GlowColor = {read=GetGlowColor, write=SetGlowColor, nodefault};
	__property float Opacity = {read=FOpacity, write=SetOpacity};
	__property Trigger = {default=0};
	__property Enabled = {default=1};
public:
	/* TFilterEffect.Destroy */ inline __fastcall virtual ~TGlowEffect() { }
	
};


class PASCALIMPLEMENTATION TInnerGlowEffect : public TFilterEffect
{
	typedef TFilterEffect inherited;
	
private:
	System::Uitypes::TAlphaColor FGlowColor;
	float FSoftness;
	float FOpacity;
	void __fastcall SetSoftness(const float Value);
	System::Uitypes::TAlphaColor __fastcall GetGlowColor();
	void __fastcall SetGlowColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetOpacity(const float Value);
	
protected:
	virtual Fmx::Filter::TFilter* __fastcall CreateFilter();
	
public:
	__fastcall virtual TInnerGlowEffect(System::Classes::TComponent* AOwner);
	virtual System::Types::TRectF __fastcall GetRect(const System::Types::TRectF &ARect);
	virtual System::Types::TPointF __fastcall GetOffset();
	
__published:
	__property float Softness = {read=FSoftness, write=SetSoftness};
	__property System::Uitypes::TAlphaColor GlowColor = {read=GetGlowColor, write=SetGlowColor, nodefault};
	__property float Opacity = {read=FOpacity, write=SetOpacity};
	__property Trigger = {default=0};
	__property Enabled = {default=1};
public:
	/* TFilterEffect.Destroy */ inline __fastcall virtual ~TInnerGlowEffect() { }
	
};


class PASCALIMPLEMENTATION TReflectionEffect : public TFilterEffect
{
	typedef TFilterEffect inherited;
	
private:
	int FOffset;
	float FOpacity;
	float FLength;
	void __fastcall SetOpacity(const float Value);
	void __fastcall SetOffset(const int Value);
	void __fastcall SetLength(const float Value);
	
protected:
	virtual Fmx::Filter::TFilter* __fastcall CreateFilter();
	
public:
	__fastcall virtual TReflectionEffect(System::Classes::TComponent* AOwner);
	virtual System::Types::TRectF __fastcall GetRect(const System::Types::TRectF &ARect);
	virtual System::Types::TPointF __fastcall GetOffset();
	
__published:
	__property float Opacity = {read=FOpacity, write=SetOpacity};
	__property int Offset = {read=FOffset, write=SetOffset, nodefault};
	__property float Length = {read=FLength, write=SetLength};
	__property Trigger = {default=0};
	__property Enabled = {default=1};
public:
	/* TFilterEffect.Destroy */ inline __fastcall virtual ~TReflectionEffect() { }
	
};


class PASCALIMPLEMENTATION TBevelEffect : public TEffect
{
	typedef TEffect inherited;
	
private:
	float FDirection;
	int FSize;
	void __fastcall SetDirection(const float Value);
	void __fastcall SetSize(const int Value);
	
public:
	__fastcall virtual TBevelEffect(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TBevelEffect();
	virtual System::Types::TRectF __fastcall GetRect(const System::Types::TRectF &ARect);
	virtual System::Types::TPointF __fastcall GetOffset();
	virtual void __fastcall ProcessEffect(Fmx::Graphics::TCanvas* const Canvas, Fmx::Graphics::TBitmap* const Visual, const float Data);
	
__published:
	__property float Direction = {read=FDirection, write=SetDirection};
	__property int Size = {read=FSize, write=SetSize, nodefault};
	__property Trigger = {default=0};
	__property Enabled = {default=1};
};


class PASCALIMPLEMENTATION TRasterEffect : public TEffect
{
	typedef TEffect inherited;
	
public:
	__fastcall virtual TRasterEffect(System::Classes::TComponent* AOwner);
	
__published:
	__property Trigger = {default=0};
	__property Enabled = {default=1};
public:
	/* TEffect.Destroy */ inline __fastcall virtual ~TRasterEffect() { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall Blur(Fmx::Graphics::TCanvas* const Canvas, Fmx::Graphics::TBitmap* const Bitmap, const int Radius, bool UseAlpha = true);
}	/* namespace Effects */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_EFFECTS)
using namespace Fmx::Effects;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_EffectsHPP
