// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Objects3D.pas' rev: 35.00 (Windows)

#ifndef Fmx_Objects3dHPP
#define Fmx_Objects3dHPP

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
#include <System.Math.Vectors.hpp>
#include <FMX.Types.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types3D.hpp>
#include <FMX.Controls3D.hpp>
#include <FMX.MaterialSources.hpp>
#include <FMX.Graphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Objects3d
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDummy;
class DELPHICLASS TGrid3D;
class DELPHICLASS TShape3D;
class DELPHICLASS TStrokeCube;
class DELPHICLASS TCustomMesh;
class DELPHICLASS TCube;
class DELPHICLASS TPlane;
class DELPHICLASS TDisk;
class DELPHICLASS TMesh;
class DELPHICLASS TSphere;
class DELPHICLASS TCylinder;
class DELPHICLASS TRoundCube;
class DELPHICLASS TCone;
class DELPHICLASS TExtrudedShape3D;
class DELPHICLASS TRectangle3D;
class DELPHICLASS TEllipse3D;
class DELPHICLASS TText3D;
class DELPHICLASS TPath3D;
class DELPHICLASS TModel3D;
//-- type declarations -------------------------------------------------------
enum class DECLSPEC_DENUM TMeshWrapMode : unsigned char { Original, Fit, Stretch, Resize };

class PASCALIMPLEMENTATION TDummy : public Fmx::Controls3d::TControl3D
{
	typedef Fmx::Controls3d::TControl3D inherited;
	
protected:
	virtual void __fastcall Render();
	virtual bool __fastcall DoRayCastIntersect(const System::Math::Vectors::TPoint3D &RayPos, const System::Math::Vectors::TPoint3D &RayDir, System::Math::Vectors::TPoint3D &Intersection);
	
public:
	__fastcall virtual TDummy(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDummy();
	
__published:
	__property HitTest = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Position;
	__property Scale;
	__property RotationAngle;
	__property Locked = {default=0};
	__property Width = {default=0};
	__property Height = {default=0};
	__property Depth = {default=0};
	__property Opacity;
	__property Projection = {default=0};
	__property VisibleContextMenu = {default=1};
	__property TwoSide = {default=0};
	__property Visible = {default=1};
	__property ZWrite = {default=1};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnRender;
};


class PASCALIMPLEMENTATION TGrid3D : public Fmx::Controls3d::TControl3D
{
	typedef Fmx::Controls3d::TControl3D inherited;
	
private:
	System::Uitypes::TAlphaColor FLineColor;
	float FFrequency;
	float FMarks;
	void __fastcall SetLineColor(const System::Uitypes::TAlphaColor Value);
	System::Uitypes::TAlphaColor __fastcall GetLineColor();
	void __fastcall SetFrequency(const float Value);
	void __fastcall SetMarks(const float Value);
	
protected:
	virtual void __fastcall SetDepth(const float Value);
	virtual void __fastcall Render();
	virtual bool __fastcall DoRayCastIntersect(const System::Math::Vectors::TPoint3D &RayPos, const System::Math::Vectors::TPoint3D &RayDir, System::Math::Vectors::TPoint3D &Intersection);
	
public:
	__fastcall virtual TGrid3D(System::Classes::TComponent* AOwner);
	
__published:
	__property float Marks = {read=FMarks, write=SetMarks};
	__property float Frequency = {read=FFrequency, write=SetFrequency};
	__property System::Uitypes::TAlphaColor LineColor = {read=GetLineColor, write=SetLineColor, nodefault};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Position;
	__property Scale;
	__property RotationAngle;
	__property Locked = {default=0};
	__property Width = {default=0};
	__property Height = {default=0};
	__property Depth = {default=0};
	__property Opacity;
	__property Projection = {default=0};
	__property HitTest = {default=1};
	__property VisibleContextMenu = {default=1};
	__property TwoSide = {default=0};
	__property Visible = {default=1};
	__property ZWrite = {default=1};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnRender;
public:
	/* TControl3D.Destroy */ inline __fastcall virtual ~TGrid3D() { }
	
};


class PASCALIMPLEMENTATION TShape3D : public Fmx::Controls3d::TControl3D
{
	typedef Fmx::Controls3d::TControl3D inherited;
	
private:
	TMeshWrapMode FWrapMode;
	Fmx::Materialsources::TMaterialSource* FMaterialSource;
	void __fastcall SetMaterialSource(Fmx::Materialsources::TMaterialSource* const Value);
	void __fastcall PrepareMaterialSource();
	void __fastcall ReadMaterialDiffuse(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialLighting(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialSpecular(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialAmbient(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialEmissive(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialFillMode(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialModulation(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialShadeMode(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialTexture(System::Classes::TStream* Stream);
	void __fastcall ReadMaterialTextureFiltering(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialShininess(System::Classes::TReader* Reader);
	void __fastcall SetWrapMode(const TMeshWrapMode AMode);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall FreeNotification(System::TObject* AObject);
	virtual Fmx::Types3d::TMaterial* __fastcall GetMaterialForSorting();
	virtual void __fastcall WrapModeChanged();
	
public:
	__fastcall virtual TShape3D(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TShape3D();
	__property Fmx::Materialsources::TMaterialSource* MaterialSource = {read=FMaterialSource, write=SetMaterialSource};
	
__published:
	__property TMeshWrapMode WrapMode = {read=FWrapMode, write=SetWrapMode, default=2};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Position;
	__property Scale;
	__property RotationAngle;
	__property Locked = {default=0};
	__property Width = {default=0};
	__property Height = {default=0};
	__property Depth = {default=0};
	__property Opacity;
	__property Projection = {default=0};
	__property HitTest = {default=1};
	__property VisibleContextMenu = {default=1};
	__property TwoSide = {default=0};
	__property Visible = {default=1};
	__property ZWrite = {default=1};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnRender;
};


class PASCALIMPLEMENTATION TStrokeCube : public Fmx::Controls3d::TControl3D
{
	typedef Fmx::Controls3d::TControl3D inherited;
	
private:
	System::Uitypes::TAlphaColor FColor;
	void __fastcall SetColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall ReadMaterialDiffuse(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialLighting(System::Classes::TReader* Reader);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall Render();
	
public:
	__fastcall virtual TStrokeCube(System::Classes::TComponent* AOwner);
	
__published:
	__property System::Uitypes::TAlphaColor Color = {read=FColor, write=SetColor, nodefault};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Position;
	__property Scale;
	__property RotationAngle;
	__property Locked = {default=0};
	__property Width = {default=0};
	__property Height = {default=0};
	__property Depth = {default=0};
	__property Opacity;
	__property Projection = {default=0};
	__property HitTest = {default=1};
	__property VisibleContextMenu = {default=1};
	__property TwoSide = {default=0};
	__property Visible = {default=1};
	__property ZWrite = {default=1};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnRender;
public:
	/* TControl3D.Destroy */ inline __fastcall virtual ~TStrokeCube() { }
	
};


class PASCALIMPLEMENTATION TCustomMesh : public TShape3D
{
	typedef TShape3D inherited;
	
private:
	Fmx::Types3d::TMeshData* FData;
	void __fastcall SetMeshData(Fmx::Types3d::TMeshData* const Value);
	
protected:
	void __fastcall DoMeshChanged(System::TObject* Sender);
	virtual void __fastcall Render();
	virtual bool __fastcall DoRayCastIntersect(const System::Math::Vectors::TPoint3D &RayPos, const System::Math::Vectors::TPoint3D &RayDir, System::Math::Vectors::TPoint3D &Intersection);
	System::Math::Vectors::TMatrix3D __fastcall GetMeshMatrix();
	__property Fmx::Types3d::TMeshData* Data = {read=FData, write=SetMeshData};
	
public:
	__fastcall virtual TCustomMesh(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomMesh();
};


class PASCALIMPLEMENTATION TCube : public TCustomMesh
{
	typedef TCustomMesh inherited;
	
private:
	int FSubdivisionsWidth;
	int FSubdivisionsDepth;
	int FSubdivisionsHeight;
	void __fastcall SetSubdivisionsDepth(const int Value);
	void __fastcall SetSubdivisionsHeight(const int Value);
	void __fastcall SetSubdivisionsWidth(const int Value);
	
protected:
	void __fastcall RebuildMesh();
	virtual bool __fastcall DoRayCastIntersect(const System::Math::Vectors::TPoint3D &RayPos, const System::Math::Vectors::TPoint3D &RayDir, System::Math::Vectors::TPoint3D &Intersection);
	
public:
	__fastcall virtual TCube(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCube();
	
__published:
	__property int SubdivisionsDepth = {read=FSubdivisionsDepth, write=SetSubdivisionsDepth, default=1};
	__property int SubdivisionsHeight = {read=FSubdivisionsHeight, write=SetSubdivisionsHeight, default=1};
	__property int SubdivisionsWidth = {read=FSubdivisionsWidth, write=SetSubdivisionsWidth, default=1};
	__property MaterialSource;
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Position;
	__property Scale;
	__property RotationAngle;
	__property Locked = {default=0};
	__property Width = {default=0};
	__property Height = {default=0};
	__property Depth = {default=0};
	__property Opacity;
	__property Projection = {default=0};
	__property HitTest = {default=1};
	__property VisibleContextMenu = {default=1};
	__property TwoSide = {default=0};
	__property Visible = {default=1};
	__property ZWrite = {default=1};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnRender;
};


class PASCALIMPLEMENTATION TPlane : public TCustomMesh
{
	typedef TCustomMesh inherited;
	
private:
	int FSubdivisionsWidth;
	int FSubdivisionsHeight;
	void __fastcall SetSubdivisionsHeight(const int Value);
	void __fastcall SetSubdivisionsWidth(const int Value);
	
protected:
	virtual void __fastcall SetDepth(const float Value);
	void __fastcall RebuildMesh();
	virtual bool __fastcall DoRayCastIntersect(const System::Math::Vectors::TPoint3D &RayPos, const System::Math::Vectors::TPoint3D &RayDir, System::Math::Vectors::TPoint3D &Intersection);
	
public:
	__fastcall virtual TPlane(System::Classes::TComponent* AOwner);
	
__published:
	__property int SubdivisionsHeight = {read=FSubdivisionsHeight, write=SetSubdivisionsHeight, default=1};
	__property int SubdivisionsWidth = {read=FSubdivisionsWidth, write=SetSubdivisionsWidth, default=1};
	__property MaterialSource;
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Position;
	__property Scale;
	__property RotationAngle;
	__property Locked = {default=0};
	__property Width = {default=0};
	__property Opacity;
	__property Projection = {default=0};
	__property HitTest = {default=1};
	__property VisibleContextMenu = {default=1};
	__property Visible = {default=1};
	__property ZWrite = {default=1};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnRender;
public:
	/* TCustomMesh.Destroy */ inline __fastcall virtual ~TPlane() { }
	
};


class PASCALIMPLEMENTATION TDisk : public TCustomMesh
{
	typedef TCustomMesh inherited;
	
private:
	int FSubdivisionsAxes;
	int FSubdivisionsCap;
	void __fastcall SetSubdivisionsAxes(const int Value);
	void __fastcall SetSubdivisionsCap(const int Value);
	
protected:
	virtual void __fastcall SetHeight(const float Value);
	void __fastcall RebuildMesh();
	virtual bool __fastcall DoRayCastIntersect(const System::Math::Vectors::TPoint3D &RayPos, const System::Math::Vectors::TPoint3D &RayDir, System::Math::Vectors::TPoint3D &Intersection);
	
public:
	__fastcall virtual TDisk(System::Classes::TComponent* AOwner);
	
__published:
	__property int SubdivisionsAxes = {read=FSubdivisionsAxes, write=SetSubdivisionsAxes, default=16};
	__property int SubdivisionsCap = {read=FSubdivisionsCap, write=SetSubdivisionsCap, default=3};
	__property MaterialSource;
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Position;
	__property Scale;
	__property RotationAngle;
	__property Locked = {default=0};
	__property Width = {default=0};
	__property Opacity;
	__property Projection = {default=0};
	__property HitTest = {default=1};
	__property VisibleContextMenu = {default=1};
	__property Visible = {default=1};
	__property ZWrite = {default=1};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnRender;
public:
	/* TCustomMesh.Destroy */ inline __fastcall virtual ~TDisk() { }
	
};


class PASCALIMPLEMENTATION TMesh : public TCustomMesh
{
	typedef TCustomMesh inherited;
	
__published:
	__property Data;
	__property MaterialSource;
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Position;
	__property Scale;
	__property RotationAngle;
	__property Locked = {default=0};
	__property Width = {default=0};
	__property Height = {default=0};
	__property Depth = {default=0};
	__property Opacity;
	__property Projection = {default=0};
	__property HitTest = {default=1};
	__property VisibleContextMenu = {default=1};
	__property TwoSide = {default=0};
	__property Visible = {default=1};
	__property ZWrite = {default=1};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnRender;
public:
	/* TCustomMesh.Create */ inline __fastcall virtual TMesh(System::Classes::TComponent* AOwner) : TCustomMesh(AOwner) { }
	/* TCustomMesh.Destroy */ inline __fastcall virtual ~TMesh() { }
	
};


class PASCALIMPLEMENTATION TSphere : public TCustomMesh
{
	typedef TCustomMesh inherited;
	
private:
	int FSubdivisionsAxes;
	int FSubdivisionsHeight;
	void __fastcall SetSubdivisionsAxes(const int Value);
	void __fastcall SetSubdivisionsHeight(const int Value);
	
protected:
	void __fastcall RebuildMesh();
	virtual bool __fastcall DoRayCastIntersect(const System::Math::Vectors::TPoint3D &RayPos, const System::Math::Vectors::TPoint3D &RayDir, System::Math::Vectors::TPoint3D &Intersection);
	
public:
	__fastcall virtual TSphere(System::Classes::TComponent* AOwner);
	
__published:
	__property int SubdivisionsAxes = {read=FSubdivisionsAxes, write=SetSubdivisionsAxes, default=16};
	__property int SubdivisionsHeight = {read=FSubdivisionsHeight, write=SetSubdivisionsHeight, default=12};
	__property MaterialSource;
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Position;
	__property Scale;
	__property RotationAngle;
	__property Locked = {default=0};
	__property Width = {default=0};
	__property Height = {default=0};
	__property Depth = {default=0};
	__property Opacity;
	__property Projection = {default=0};
	__property HitTest = {default=1};
	__property VisibleContextMenu = {default=1};
	__property TwoSide = {default=0};
	__property Visible = {default=1};
	__property ZWrite = {default=1};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnRender;
public:
	/* TCustomMesh.Destroy */ inline __fastcall virtual ~TSphere() { }
	
};


class PASCALIMPLEMENTATION TCylinder : public TCustomMesh
{
	typedef TCustomMesh inherited;
	
private:
	int FSubdivisionsAxes;
	int FSubdivisionsCap;
	int FSubdivisionsHeight;
	void __fastcall SetSubdivisionsAxes(const int Value);
	void __fastcall SetSubdivisionsCap(const int Value);
	void __fastcall SetSubdivisionsHeight(const int Value);
	
protected:
	void __fastcall RebuildMesh();
	
public:
	__fastcall virtual TCylinder(System::Classes::TComponent* AOwner);
	
__published:
	__property int SubdivisionsAxes = {read=FSubdivisionsAxes, write=SetSubdivisionsAxes, default=12};
	__property int SubdivisionsCap = {read=FSubdivisionsCap, write=SetSubdivisionsCap, default=1};
	__property int SubdivisionsHeight = {read=FSubdivisionsHeight, write=SetSubdivisionsHeight, default=1};
	__property MaterialSource;
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Position;
	__property Scale;
	__property RotationAngle;
	__property Locked = {default=0};
	__property Width = {default=0};
	__property Height = {default=0};
	__property Depth = {default=0};
	__property Opacity;
	__property Projection = {default=0};
	__property HitTest = {default=1};
	__property VisibleContextMenu = {default=1};
	__property TwoSide = {default=0};
	__property Visible = {default=1};
	__property ZWrite = {default=1};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnRender;
public:
	/* TCustomMesh.Destroy */ inline __fastcall virtual ~TCylinder() { }
	
};


class PASCALIMPLEMENTATION TRoundCube : public TCustomMesh
{
	typedef TCustomMesh inherited;
	
public:
	__fastcall virtual TRoundCube(System::Classes::TComponent* AOwner);
	
__published:
	__property MaterialSource;
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Position;
	__property Scale;
	__property RotationAngle;
	__property Locked = {default=0};
	__property Width = {default=0};
	__property Height = {default=0};
	__property Depth = {default=0};
	__property Opacity;
	__property Projection = {default=0};
	__property HitTest = {default=1};
	__property VisibleContextMenu = {default=1};
	__property TwoSide = {default=0};
	__property Visible = {default=1};
	__property ZWrite = {default=1};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnRender;
public:
	/* TCustomMesh.Destroy */ inline __fastcall virtual ~TRoundCube() { }
	
};


class PASCALIMPLEMENTATION TCone : public TCustomMesh
{
	typedef TCustomMesh inherited;
	
private:
	int FSubdivisionsAxes;
	int FSubdivisionsCap;
	int FSubdivisionsHeight;
	bool FJoinPeakNormals;
	void __fastcall SetJoinPeakNormals(const bool Value);
	void __fastcall SetSubdivisionsAxes(const int Value);
	void __fastcall SetSubdivisionsCap(const int Value);
	void __fastcall SetSubdivisionsHeight(const int Value);
	
protected:
	void __fastcall RebuildMesh();
	
public:
	__fastcall virtual TCone(System::Classes::TComponent* AOwner);
	
__published:
	__property bool JoinPeakNormals = {read=FJoinPeakNormals, write=SetJoinPeakNormals, default=1};
	__property int SubdivisionsAxes = {read=FSubdivisionsAxes, write=SetSubdivisionsAxes, default=12};
	__property int SubdivisionsCap = {read=FSubdivisionsCap, write=SetSubdivisionsCap, default=1};
	__property int SubdivisionsHeight = {read=FSubdivisionsHeight, write=SetSubdivisionsHeight, default=1};
	__property MaterialSource;
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Position;
	__property Scale;
	__property RotationAngle;
	__property Locked = {default=0};
	__property Width = {default=0};
	__property Height = {default=0};
	__property Depth = {default=0};
	__property Opacity;
	__property Projection = {default=0};
	__property HitTest = {default=1};
	__property VisibleContextMenu = {default=1};
	__property TwoSide = {default=0};
	__property Visible = {default=1};
	__property ZWrite = {default=1};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnRender;
public:
	/* TCustomMesh.Destroy */ inline __fastcall virtual ~TCone() { }
	
};


enum class DECLSPEC_DENUM TExtrudedShapeSide : unsigned char { Front, Back, Shaft };

typedef System::Set<TExtrudedShapeSide, _DELPHI_SET_ENUMERATOR(TExtrudedShapeSide::Front), _DELPHI_SET_ENUMERATOR(TExtrudedShapeSide::Shaft)> TExtrudedShapeSides;

class PASCALIMPLEMENTATION TExtrudedShape3D : public TShape3D
{
	typedef TShape3D inherited;
	
private:
	float FFlatness;
	TExtrudedShapeSides FSides;
	Fmx::Materialsources::TMaterialSource* FMaterialShaftSource;
	Fmx::Materialsources::TMaterialSource* FMaterialBackSource;
	void __fastcall SetFlatness(const float Value);
	void __fastcall SetSides(const TExtrudedShapeSides Value);
	void __fastcall SetMaterialBack(Fmx::Materialsources::TMaterialSource* const Value);
	void __fastcall SetMaterialShaft(Fmx::Materialsources::TMaterialSource* const Value);
	void __fastcall PrepareMaterialBackSource();
	void __fastcall ReadMaterialBackDiffuse(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialBackLighting(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialBackSpecular(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialBackAmbient(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialBackEmissive(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialBackFillMode(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialBackModulation(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialBackShadeMode(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialBackTexture(System::Classes::TStream* Stream);
	void __fastcall ReadMaterialBackTextureFiltering(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialBackShininess(System::Classes::TReader* Reader);
	void __fastcall PrepareMaterialShaftSource();
	void __fastcall ReadMaterialShaftDiffuse(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialShaftLighting(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialShaftSpecular(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialShaftAmbient(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialShaftEmissive(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialShaftFillMode(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialShaftModulation(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialShaftShadeMode(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialShaftTexture(System::Classes::TStream* Stream);
	void __fastcall ReadMaterialShaftTextureFiltering(System::Classes::TReader* Reader);
	void __fastcall ReadMaterialShaftShininess(System::Classes::TReader* Reader);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall FreeNotification(System::TObject* AObject);
	virtual void __fastcall Render();
	virtual void __fastcall ShapeMouseMove(System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall ShapeMouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall ShapeMouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseMove3D(System::Classes::TShiftState Shift, float X, float Y, const System::Math::Vectors::TVector3D &RayPos, const System::Math::Vectors::TVector3D &RayDir);
	virtual void __fastcall MouseDown3D(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y, const System::Math::Vectors::TVector3D &RayPos, const System::Math::Vectors::TVector3D &RayDir);
	virtual void __fastcall MouseUp3D(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y, const System::Math::Vectors::TVector3D &RayPos, const System::Math::Vectors::TVector3D &RayDir);
	
public:
	__fastcall virtual TExtrudedShape3D(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TExtrudedShape3D();
	__property float Flatness = {read=FFlatness, write=SetFlatness};
	__property TExtrudedShapeSides Sides = {read=FSides, write=SetSides, nodefault};
	__property Fmx::Materialsources::TMaterialSource* MaterialBackSource = {read=FMaterialBackSource, write=SetMaterialBack};
	__property Fmx::Materialsources::TMaterialSource* MaterialShaftSource = {read=FMaterialShaftSource, write=SetMaterialShaft};
};


class PASCALIMPLEMENTATION TRectangle3D : public TExtrudedShape3D
{
	typedef TExtrudedShape3D inherited;
	
private:
	float FYRadius;
	float FXRadius;
	Fmx::Types::TCorners FCorners;
	Fmx::Types::TCornerType FCornerType;
	void __fastcall SetXRadius(const float Value);
	void __fastcall SetYRadius(const float Value);
	bool __fastcall IsCornersStored();
	void __fastcall SetCorners(const Fmx::Types::TCorners Value);
	void __fastcall SetCornerType(const Fmx::Types::TCornerType Value);
	
protected:
	virtual void __fastcall Render();
	
public:
	__fastcall virtual TRectangle3D(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TRectangle3D();
	
__published:
	__property float XRadius = {read=FXRadius, write=SetXRadius};
	__property float YRadius = {read=FYRadius, write=SetYRadius};
	__property Fmx::Types::TCorners Corners = {read=FCorners, write=SetCorners, stored=IsCornersStored, nodefault};
	__property Fmx::Types::TCornerType CornerType = {read=FCornerType, write=SetCornerType, nodefault};
	__property Flatness = {default=0};
	__property Sides;
	__property MaterialBackSource;
	__property MaterialShaftSource;
	__property MaterialSource;
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Position;
	__property Scale;
	__property RotationAngle;
	__property Locked = {default=0};
	__property Width = {default=0};
	__property Height = {default=0};
	__property Depth;
	__property Opacity;
	__property Projection = {default=0};
	__property HitTest = {default=1};
	__property VisibleContextMenu = {default=1};
	__property Visible = {default=1};
	__property ZWrite = {default=1};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnRender;
};


class PASCALIMPLEMENTATION TEllipse3D : public TExtrudedShape3D
{
	typedef TExtrudedShape3D inherited;
	
protected:
	virtual void __fastcall Render();
	
__published:
	__property Flatness = {default=0};
	__property Sides;
	__property MaterialBackSource;
	__property MaterialShaftSource;
	__property MaterialSource;
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Position;
	__property Scale;
	__property RotationAngle;
	__property Locked = {default=0};
	__property Width = {default=0};
	__property Height = {default=0};
	__property Depth;
	__property Opacity;
	__property Projection = {default=0};
	__property HitTest = {default=1};
	__property VisibleContextMenu = {default=1};
	__property Visible = {default=1};
	__property ZWrite = {default=1};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnRender;
public:
	/* TExtrudedShape3D.Create */ inline __fastcall virtual TEllipse3D(System::Classes::TComponent* AOwner) : TExtrudedShape3D(AOwner) { }
	/* TExtrudedShape3D.Destroy */ inline __fastcall virtual ~TEllipse3D() { }
	
};


class PASCALIMPLEMENTATION TText3D : public TExtrudedShape3D
{
	typedef TExtrudedShape3D inherited;
	
private:
	Fmx::Graphics::TFont* FFont;
	System::UnicodeString FText;
	bool FWordWrap;
	bool FStretch;
	Fmx::Types::TTextAlign FVertTextAlign;
	Fmx::Types::TTextAlign FHorzTextAlign;
	System::Math::Vectors::TPolygon FPolygon;
	System::Types::TRectF FTextRect;
	void __fastcall SetFont(Fmx::Graphics::TFont* const Value);
	void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetHorzTextAlign(const Fmx::Types::TTextAlign Value);
	void __fastcall SetStretch(const bool Value);
	void __fastcall SetVertTextAlign(const Fmx::Types::TTextAlign Value);
	void __fastcall SetWordWrap(const bool Value);
	void __fastcall RebuildPolygon();
	
protected:
	void __fastcall FontChanged(System::TObject* Sender);
	virtual void __fastcall Render();
	
public:
	__fastcall virtual TText3D(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TText3D();
	System::Types::TRectF __fastcall GetTextBounds();
	System::Types::TRectF __fastcall GetPathBounds();
	float __fastcall GetPathLength();
	
__published:
	__property Fmx::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property Fmx::Types::TTextAlign HorzTextAlign = {read=FHorzTextAlign, write=SetHorzTextAlign, default=0};
	__property Fmx::Types::TTextAlign VertTextAlign = {read=FVertTextAlign, write=SetVertTextAlign, default=0};
	__property System::UnicodeString Text = {read=FText, write=SetText};
	__property bool Stretch = {read=FStretch, write=SetStretch, default=0};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, default=1};
	__property Flatness = {default=0};
	__property Sides;
	__property MaterialBackSource;
	__property MaterialShaftSource;
	__property MaterialSource;
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Position;
	__property Scale;
	__property RotationAngle;
	__property Locked = {default=0};
	__property Width = {default=0};
	__property Height = {default=0};
	__property Depth;
	__property Opacity;
	__property Projection = {default=0};
	__property HitTest = {default=1};
	__property VisibleContextMenu = {default=1};
	__property Visible = {default=1};
	__property ZWrite = {default=1};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnRender;
};


class PASCALIMPLEMENTATION TPath3D : public TExtrudedShape3D
{
	typedef TExtrudedShape3D inherited;
	
private:
	Fmx::Graphics::TPathData* FPath;
	Fmx::Objects::TPathWrapMode FWrapMode;
	void __fastcall SetPath(Fmx::Graphics::TPathData* const Value);
	HIDESBASE void __fastcall SetWrapMode(const Fmx::Objects::TPathWrapMode Value);
	
protected:
	void __fastcall PathChanged(System::TObject* Sender);
	virtual void __fastcall Render();
	
public:
	__fastcall virtual TPath3D(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TPath3D();
	
__published:
	__property Fmx::Graphics::TPathData* Path = {read=FPath, write=SetPath};
	__property Fmx::Objects::TPathWrapMode WrapMode = {read=FWrapMode, write=SetWrapMode, default=2};
	__property Flatness = {default=0};
	__property Sides;
	__property MaterialBackSource;
	__property MaterialShaftSource;
	__property MaterialSource;
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property Position;
	__property Scale;
	__property RotationAngle;
	__property Locked = {default=0};
	__property Width = {default=0};
	__property Height = {default=0};
	__property Depth;
	__property Opacity;
	__property Projection = {default=0};
	__property HitTest = {default=1};
	__property VisibleContextMenu = {default=1};
	__property Visible = {default=1};
	__property ZWrite = {default=1};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnRender;
};


typedef System::DynamicArray<TMesh*> TMeshDynArray;

typedef TMeshDynArray TMeshCollection;

class PASCALIMPLEMENTATION TModel3D : public TDummy
{
	typedef TDummy inherited;
	
private:
	TDummy* FMeshesOwner;
	TMeshWrapMode FWrapMode;
	TMeshDynArray FMeshCollection;
	void __fastcall RelocateMeshes();
	void __fastcall SetWrapMode(const TMeshWrapMode AMode);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall ReadModel(System::Classes::TStream* Stream);
	void __fastcall WriteModel(System::Classes::TStream* Stream);
	void __fastcall UpdateMeshCollection();
	virtual void __fastcall Resize3D();
	virtual bool __fastcall DoRayCastIntersect(const System::Math::Vectors::TPoint3D &RayPos, const System::Math::Vectors::TPoint3D &RayDir, System::Math::Vectors::TPoint3D &Intersection);
	Fmx::Types3d::TBoundingBox __fastcall GetMeshesLocalBoundingBox();
	
public:
	__fastcall virtual TModel3D(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TModel3D();
	virtual void __fastcall Clear();
	virtual bool __fastcall LoadFromFile(const System::UnicodeString AFileName);
	
__published:
	__property TMeshDynArray MeshCollection = {read=FMeshCollection};
	__property TMeshWrapMode WrapMode = {read=FWrapMode, write=SetWrapMode, default=1};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Objects3d */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_OBJECTS3D)
using namespace Fmx::Objects3d;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_Objects3dHPP
