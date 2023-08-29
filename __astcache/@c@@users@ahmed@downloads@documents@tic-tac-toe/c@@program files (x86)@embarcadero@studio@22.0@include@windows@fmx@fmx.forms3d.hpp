// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Forms3D.pas' rev: 35.00 (Windows)

#ifndef Fmx_Forms3dHPP
#define Fmx_Forms3dHPP

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
#include <System.Generics.Collections.hpp>
#include <FMX.Types.hpp>
#include <FMX.Types3D.hpp>
#include <FMX.Controls3D.hpp>
#include <FMX.Objects3D.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Graphics.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <FMX.Controls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Forms3d
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomForm3D;
class DELPHICLASS TForm3D;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TCustomForm3D : public Fmx::Forms::TCommonCustomForm
{
	typedef Fmx::Forms::TCommonCustomForm inherited;
	
private:
	Fmx::Controls3d::TCamera* FCamera;
	Fmx::Controls3d::TCamera* FDesignCamera;
	Fmx::Objects3d::TDummy* FDesignCameraZ;
	Fmx::Objects3d::TDummy* FDesignCameraX;
	System::Uitypes::TAlphaColor FFill;
	Fmx::Types3d::TMultisample FMultisample;
	bool FUsingDesignCamera;
	bool FDrawing;
	Fmx::Controls3d::TRenderEvent FOnRender;
	Fmx::Graphics::TBitmap* FEffectBitmap;
	Fmx::Types3d::TContext3D* FContext;
	System::Generics::Collections::TList__1<Fmx::Controls3d::TControl3D*>* FRenderingList;
	System::Generics::Collections::TList__1<Fmx::Controls3d::TLight*>* FLights;
	void __fastcall SetFill(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetMultisample(const Fmx::Types3d::TMultisample Value);
	System::Uitypes::TAlphaColor __fastcall GetFill();
	void __fastcall RebuildRenderingList();
	void __fastcall SetUsingDesignCamera(const bool Value);
	void __fastcall SkipTransparency(System::Classes::TReader* Reader);
	HIDESBASE Fmx::Types::TFmxObject* __fastcall GetObject();
	Fmx::Types3d::TContext3D* __fastcall GetContext();
	Fmx::Controls3d::TCamera* __fastcall GetCamera();
	bool __fastcall GetUsingDesignCamera();
	float __fastcall GetViewportScale();
	int __fastcall GetLightCount();
	Fmx::Controls3d::TLight* __fastcall GetLight(int Index);
	void __fastcall SetCamera(Fmx::Controls3d::TCamera* const ACamera);
	void __fastcall AddLight(Fmx::Controls3d::TLight* const ALight);
	void __fastcall RemoveLight(Fmx::Controls3d::TLight* const ALight);
	void __fastcall NeedRender();
	Fmx::Controls3d::TCamera* __fastcall GetCurrentCamera();
	void __fastcall RenderScene();
	
protected:
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall CreateContext();
	virtual void __fastcall DestroyContext();
	virtual void __fastcall CreateHandle();
	virtual void __fastcall DestroyHandle();
	virtual void __fastcall ResizeHandle();
	virtual void __fastcall PaintRects(const System::Types::TRectF *UpdateRects, const int UpdateRects_High);
	virtual void __fastcall AddPreloadPropertyNames(System::Generics::Collections::TList__1<System::UnicodeString>* const PropertyNames);
	virtual void __fastcall SetPreloadProperties(System::Generics::Collections::TDictionary__2<System::UnicodeString,System::Variant>* const PropertyStore);
	virtual void __fastcall Realign();
	virtual Fmx::Types::_di_IControl __fastcall FindTarget(const System::Types::TPointF &P, const Fmx::Types::TDragObject &Data);
	virtual void __fastcall SetTransparency(const bool Value);
	virtual void __fastcall DoScaleChanged();
	virtual Fmx::Forms::TWindowStyles __fastcall GetWindowStyle();
	
public:
	__fastcall virtual TCustomForm3D(System::Classes::TComponent* AOwner);
	__fastcall virtual TCustomForm3D(System::Classes::TComponent* AOwner, NativeInt Dummy);
	__fastcall virtual ~TCustomForm3D();
	virtual void __fastcall EndUpdate();
	virtual void __fastcall RecreateResources();
	virtual void __fastcall InitializeNewForm();
	__property Fmx::Types3d::TContext3D* Context = {read=FContext};
	__property Fmx::Types3d::TMultisample Multisample = {read=FMultisample, write=SetMultisample, default=2};
	__property System::Uitypes::TAlphaColor Color = {read=GetFill, write=SetFill, default=-1};
	__property Fmx::Controls3d::TCamera* Camera = {read=FCamera, write=SetCamera};
	__property bool UsingDesignCamera = {read=FUsingDesignCamera, write=SetUsingDesignCamera, default=1};
	virtual Fmx::Types::_di_IControl __fastcall ObjectAtPoint(const System::Types::TPointF &P);
	__property Fmx::Controls3d::TRenderEvent OnRender = {read=FOnRender, write=FOnRender};
private:
	void *__IViewport3D;	// Fmx::Controls3d::IViewport3D 
	void *__IContextObject;	// Fmx::Types3d::IContextObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F819CBB6-B3CD-47EA-B4BA-6ED76E668CA9}
	operator Fmx::Controls3d::_di_IViewport3D()
	{
		Fmx::Controls3d::_di_IViewport3D intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Controls3d::IViewport3D*(void) { return (Fmx::Controls3d::IViewport3D*)&__IViewport3D; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A78019E4-F09A-4F8D-AC43-E8D51FE3AD69}
	operator Fmx::Types3d::_di_IContextObject()
	{
		Fmx::Types3d::_di_IContextObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types3d::IContextObject*(void) { return (Fmx::Types3d::IContextObject*)&__IContextObject; }
	#endif
	
};


class PASCALIMPLEMENTATION TForm3D : public TCustomForm3D
{
	typedef TCustomForm3D inherited;
	
__published:
	__property BiDiMode = {default=0};
	__property Camera;
	__property Caption = {default=0};
	__property Color = {default=-1};
	__property Cursor = {default=0};
	__property Border;
	__property BorderIcons = {default=7};
	__property BorderStyle = {default=2};
	__property ClientHeight;
	__property ClientWidth;
	__property Height;
	__property Left;
	__property Padding;
	__property Multisample = {default=2};
	__property Position = {default=2};
	__property SystemStatusBar;
	__property StyleBook;
	__property Top;
	__property FormStyle = {default=0};
	__property UsingDesignCamera = {default=1};
	__property Visible = {default=0};
	__property Width;
	__property WindowState = {default=0};
	__property FormFactor;
	__property FormFamily = {default=0};
	__property OnActivate;
	__property OnCreate;
	__property OnClose;
	__property OnCloseQuery;
	__property OnDeactivate;
	__property OnDestroy;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnRender;
	__property OnResize;
	__property OnShow;
	__property OnHide;
	__property OnVirtualKeyboardShown;
	__property OnVirtualKeyboardHidden;
public:
	/* TCustomForm3D.Create */ inline __fastcall virtual TForm3D(System::Classes::TComponent* AOwner) : TCustomForm3D(AOwner) { }
	/* TCustomForm3D.CreateNew */ inline __fastcall virtual TForm3D(System::Classes::TComponent* AOwner, NativeInt Dummy) : TCustomForm3D(AOwner, Dummy) { }
	/* TCustomForm3D.Destroy */ inline __fastcall virtual ~TForm3D() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Forms3d */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_FORMS3D)
using namespace Fmx::Forms3d;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_Forms3dHPP
