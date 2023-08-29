// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.MaterialSources.pas' rev: 35.00 (Windows)

#ifndef Fmx_MaterialsourcesHPP
#define Fmx_MaterialsourcesHPP

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
#include <System.Messaging.hpp>
#include <FMX.Types.hpp>
#include <FMX.Types3D.hpp>
#include <FMX.Controls3D.hpp>
#include <FMX.Graphics.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Materialsources
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMaterialSource;
class DELPHICLASS TMaterialBook;
class DELPHICLASS TColorMaterialSource;
class DELPHICLASS TTextureMaterialSource;
class DELPHICLASS TLightMaterialSource;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TMaterialSource : public Fmx::Types::TFmxObject
{
	typedef Fmx::Types::TFmxObject inherited;
	
private:
	Fmx::Types3d::TMaterial* FMaterial;
	System::Generics::Collections::TList__1<Fmx::Controls3d::TControl3D*>* FNotifierList;
	void __fastcall DoMaterialChange(System::TObject* Sender);
	
protected:
	virtual Fmx::Types3d::TMaterial* __fastcall CreateMaterial() = 0 ;
	
public:
	__fastcall virtual TMaterialSource(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TMaterialSource();
	void __fastcall AddChangeNotifier(Fmx::Controls3d::TControl3D* const AObject);
	void __fastcall RemoveChangeNotifier(Fmx::Controls3d::TControl3D* const AObject);
	__property Fmx::Types3d::TMaterial* Material = {read=FMaterial};
	__classmethod Fmx::Types3d::TMaterial* __fastcall ValidMaterial(TMaterialSource* const MaterialObject);
};


class PASCALIMPLEMENTATION TMaterialBook : public Fmx::Types::TFmxObject
{
	typedef Fmx::Types::TFmxObject inherited;
	
public:
	TMaterialSource* operator[](int Index) { return this->Materials[Index]; }
	
private:
	Fmx::Types::TFmxObject* FNoMaterialItems;
	TMaterialSource* __fastcall GetMaterial(int Index);
	int __fastcall GetMaterialCount();
	
protected:
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	
public:
	__fastcall virtual TMaterialBook(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TMaterialBook();
	__property TMaterialSource* Materials[int Index] = {read=GetMaterial/*, default*/};
	__property int MaterialCount = {read=GetMaterialCount, nodefault};
};


class PASCALIMPLEMENTATION TColorMaterialSource : public TMaterialSource
{
	typedef TMaterialSource inherited;
	
private:
	System::Uitypes::TAlphaColor __fastcall GetColor();
	void __fastcall SetColor(const System::Uitypes::TAlphaColor Value);
	
protected:
	virtual Fmx::Types3d::TMaterial* __fastcall CreateMaterial();
	
__published:
	__property System::Uitypes::TAlphaColor Color = {read=GetColor, write=SetColor, nodefault};
public:
	/* TMaterialSource.Create */ inline __fastcall virtual TColorMaterialSource(System::Classes::TComponent* AOwner) : TMaterialSource(AOwner) { }
	/* TMaterialSource.Destroy */ inline __fastcall virtual ~TColorMaterialSource() { }
	
};


class PASCALIMPLEMENTATION TTextureMaterialSource : public TMaterialSource
{
	typedef TMaterialSource inherited;
	
private:
	Fmx::Graphics::TBitmap* FTexture;
	int FContextResetId;
	void __fastcall SetTexture(Fmx::Graphics::TBitmap* const Value);
	void __fastcall DoTextureChanged(System::TObject* Sender);
	void __fastcall ContextResetHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	
protected:
	virtual Fmx::Types3d::TMaterial* __fastcall CreateMaterial();
	
public:
	__fastcall virtual TTextureMaterialSource(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTextureMaterialSource();
	
__published:
	__property Fmx::Graphics::TBitmap* Texture = {read=FTexture, write=SetTexture};
};


class PASCALIMPLEMENTATION TLightMaterialSource : public TMaterialSource
{
	typedef TMaterialSource inherited;
	
private:
	Fmx::Graphics::TBitmap* FTexture;
	int FContextResetId;
	System::Uitypes::TAlphaColor __fastcall GetAmbient();
	System::Uitypes::TAlphaColor __fastcall GetDiffuse();
	System::Uitypes::TAlphaColor __fastcall GetEmissive();
	int __fastcall GetShininess();
	System::Uitypes::TAlphaColor __fastcall GetSpecular();
	void __fastcall SetAmbient(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetDiffuse(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetEmissive(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetShininess(const int Value);
	void __fastcall SetSpecular(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetTexture(Fmx::Graphics::TBitmap* const Value);
	void __fastcall DoTextureChanged(System::TObject* Sender);
	void __fastcall ContextResetHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	
protected:
	virtual Fmx::Types3d::TMaterial* __fastcall CreateMaterial();
	
public:
	__fastcall virtual TLightMaterialSource(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TLightMaterialSource();
	
__published:
	__property System::Uitypes::TAlphaColor Diffuse = {read=GetDiffuse, write=SetDiffuse, nodefault};
	__property System::Uitypes::TAlphaColor Ambient = {read=GetAmbient, write=SetAmbient, nodefault};
	__property System::Uitypes::TAlphaColor Emissive = {read=GetEmissive, write=SetEmissive, nodefault};
	__property System::Uitypes::TAlphaColor Specular = {read=GetSpecular, write=SetSpecular, nodefault};
	__property Fmx::Graphics::TBitmap* Texture = {read=FTexture, write=SetTexture};
	__property int Shininess = {read=GetShininess, write=SetShininess, nodefault};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Materialsources */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_MATERIALSOURCES)
using namespace Fmx::Materialsources;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_MaterialsourcesHPP
