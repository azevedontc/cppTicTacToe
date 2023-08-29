// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Controls3D.pas' rev: 35.00 (Windows)

#ifndef Fmx_Controls3dHPP
#define Fmx_Controls3dHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <System.UIConsts.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Messaging.hpp>
#include <System.Math.Vectors.hpp>
#include <FMX.Types.hpp>
#include <FMX.Types3D.hpp>
#include <FMX.Graphics.hpp>
#include <FMX.Ani.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Controls3d
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IViewport3D;
typedef System::DelphiInterface<IViewport3D> _di_IViewport3D;
struct TObjectAtPointData;
class DELPHICLASS TControl3D;
class DELPHICLASS TCamera;
class DELPHICLASS TLight;
class DELPHICLASS TProxyObject;
class DELPHICLASS TRenderingCompare;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{F819CBB6-B3CD-47EA-B4BA-6ED76E668CA9}") IViewport3D  : public System::IInterface 
{
	virtual Fmx::Types::TFmxObject* __fastcall GetObject() = 0 ;
	virtual Fmx::Types3d::TContext3D* __fastcall GetContext() = 0 ;
	virtual bool __fastcall GetUsingDesignCamera() = 0 ;
	virtual TCamera* __fastcall GetCamera() = 0 ;
	virtual float __fastcall GetViewportScale() = 0 ;
	virtual int __fastcall GetLightCount() = 0 ;
	virtual TLight* __fastcall GetLight(int Index) = 0 ;
	virtual TCamera* __fastcall GetCurrentCamera() = 0 ;
	virtual void __fastcall SetCamera(TCamera* const ACamera) = 0 ;
	virtual void __fastcall AddLight(TLight* const ALight) = 0 ;
	virtual void __fastcall RemoveLight(TLight* const ALight) = 0 ;
	virtual System::Types::TPointF __fastcall ScreenToLocal(const System::Types::TPointF &AScreenPoint) = 0 ;
	virtual System::Types::TPointF __fastcall LocalToScreen(const System::Types::TPointF &ALocalPoint) = 0 ;
	virtual void __fastcall NeedRender() = 0 ;
	__property int LightCount = {read=GetLightCount};
	__property TLight* Lights[int Index] = {read=GetLight};
	__property TCamera* CurrentCamera = {read=GetCurrentCamera};
	__property TCamera* Camera = {read=GetCamera, write=SetCamera};
	__property Fmx::Types3d::TContext3D* Context = {read=GetContext};
	__property bool UsingDesignCamera = {read=GetUsingDesignCamera};
};

typedef void __fastcall (__closure *TMouseEvent3D)(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y, const System::Math::Vectors::TVector3D &RayPos, const System::Math::Vectors::TVector3D &RayDir);

typedef void __fastcall (__closure *TMouseMoveEvent3D)(System::TObject* Sender, System::Classes::TShiftState Shift, float X, float Y, const System::Math::Vectors::TVector3D &RayPos, const System::Math::Vectors::TVector3D &RayDir);

typedef void __fastcall (__closure *TRenderEvent)(System::TObject* Sender, Fmx::Types3d::TContext3D* Context);

typedef void __fastcall (__closure *TDragEnterEvent3D)(System::TObject* Sender, const Fmx::Types::TDragObject &Data, const System::Math::Vectors::TPoint3D &Point);

typedef void __fastcall (__closure *TDragOverEvent3D)(System::TObject* Sender, const Fmx::Types::TDragObject &Data, const System::Math::Vectors::TPoint3D &Point, Fmx::Types::TDragOperation &Operation);

typedef void __fastcall (__closure *TDragDropEvent3D)(System::TObject* Sender, const Fmx::Types::TDragObject &Data, const System::Math::Vectors::TPoint3D &Point);

typedef void __fastcall (__closure *TTapEvent3D)(System::TObject* Sender, const System::Types::TPointF &Point, const System::Math::Vectors::TVector3D &RayPos, const System::Math::Vectors::TVector3D &RayDir);

struct DECLSPEC_DRECORD TObjectAtPointData
{
public:
	float Distance;
	Fmx::Types3d::TProjection Projection;
};


class PASCALIMPLEMENTATION TControl3D : public Fmx::Types::TFmxObject
{
	typedef Fmx::Types::TFmxObject inherited;
	
private:
	bool FVisible;
	System::Generics::Collections::TList__1<TControl3D*>* FRenderingList;
	TMouseEvent3D FOnMouseUp;
	TMouseEvent3D FOnMouseDown;
	TMouseMoveEvent3D FOnMouseMove;
	Fmx::Types::TMouseWheelEvent FOnMouseWheel;
	System::Classes::TNotifyEvent FOnClick;
	System::Classes::TNotifyEvent FOnDblClick;
	TTapEvent3D FOnTap;
	bool FMouseInObject;
	bool FHitTest;
	bool FAutoCapture;
	bool FLocked;
	Fmx::Types3d::TContext3D* FTempContext;
	bool FCanFocus;
	bool FIsMouseOver;
	bool FIsFocused;
	Fmx::Types3d::TPosition3D* FRotationCenter;
	Fmx::Types::TKeyEvent FOnKeyUp;
	Fmx::Types::TKeyEvent FOnKeyDown;
	TRenderEvent FOnRender;
	bool FTwoSide;
	System::Uitypes::TDragMode FDragMode;
	bool FDisableDragHighlight;
	TDragEnterEvent3D FOnDragEnter;
	TDragDropEvent3D FOnDragDrop;
	System::Classes::TNotifyEvent FOnDragEnd;
	System::Classes::TNotifyEvent FOnDragLeave;
	TDragOverEvent3D FOnDragOver;
	bool FIsDragOver;
	bool FShowHint;
	System::UnicodeString FHint;
	bool FPressed;
	bool FDoubleClick;
	System::Uitypes::TCursor FCursor;
	System::Uitypes::TCursor FInheritedCursor;
	bool FVisibleContextMenu;
	Fmx::Types::TTabList* FTabList;
	bool FAcceptsControls;
	System::Classes::TNotifyEvent FOnMouseEnter;
	System::Classes::TNotifyEvent FOnMouseLeave;
	bool FCanParentFocus;
	System::Classes::TNotifyEvent FOnDeactivate;
	System::Classes::TNotifyEvent FOnActivate;
	bool FRecalcHasEffect;
	bool FAbsoluteHasEffect;
	bool FAbsoluteHasDisablePaintEffect;
	bool FAbsoluteHasAfterPaintEffect;
	bool FOpaque;
	bool FTabStop;
	System::Math::Vectors::TMatrix3D __fastcall GetInvertAbsoluteMatrix();
	void __fastcall SetHitTest(const bool Value);
	Fmx::Types3d::TContext3D* __fastcall GetContext();
	void __fastcall SetLocked(const bool Value);
	void __fastcall SetTempContext(Fmx::Types3d::TContext3D* const Value);
	void __fastcall SetOpacity(const float Value);
	bool __fastcall IsOpacityStored();
	bool __fastcall GetEnabled();
	System::Math::Vectors::TVector3D __fastcall GetAbsolutePosition();
	System::Math::Vectors::TVector3D __fastcall GetAbsoluteUp();
	System::Math::Vectors::TVector3D __fastcall GetAbsoluteDirection();
	System::Math::Vectors::TVector3D __fastcall GetAbsoluteLeft();
	System::Math::Vectors::TMatrix3D __fastcall GetAbsoluteMatrix();
	float __fastcall GetAbsoluteOpacity();
	Fmx::Types::TCustomPopupMenu* __fastcall GetPopupMenu();
	System::Types::TRectF __fastcall GetScreenBounds();
	Fmx::Types3d::TBoundingBox __fastcall GetGlobalBounds();
	Fmx::Types3d::TBoundingBox __fastcall GetLocalBounds();
	void __fastcall SetAbsolutePosition(const System::Math::Vectors::TVector3D &Value);
	void __fastcall ReadQuaternion(System::Classes::TReader* Reader);
	void __fastcall WriteQuaternion(System::Classes::TWriter* Writer);
	void __fastcall SetZWrite(const bool Value);
	void __fastcall SetTabOrder(const System::Uitypes::TTabOrder Value);
	System::Uitypes::TTabOrder __fastcall GetTabOrder();
	bool __fastcall GetTabStop();
	void __fastcall SetTabStop(const bool TabStop);
	System::Uitypes::TCursor __fastcall GetCursor();
	void __fastcall SetCursor(const System::Uitypes::TCursor Value);
	void __fastcall RefreshInheritedCursor();
	void __fastcall RefreshInheritedCursorForChildren();
	System::Uitypes::TCursor __fastcall GetInheritedCursor();
	bool __fastcall GetIsFocused();
	bool __fastcall GetAbsoluteHasEffect();
	void __fastcall UpdateEffects();
	bool __fastcall GetAbsoluteHasAfterPaintEffect();
	bool __fastcall GetAbsoluteHasDisablePaintEffect();
	bool __fastcall GetAbsoluteEnabled();
	void __fastcall SetOpaque(const bool Value);
	void __fastcall ReadShowContextMenu(System::Classes::TReader* Reader);
	void __fastcall ReadDesignVisible(System::Classes::TReader* Reader);
	
protected:
	Fmx::Types3d::TPosition3D* FPosition;
	System::Math::Vectors::TQuaternion3D FQuaternion;
	Fmx::Types3d::TPosition3D* FRotationAngle;
	System::Math::Vectors::TPoint3D FSavedRotationAngle;
	Fmx::Types3d::TPosition3D* FScale;
	Fmx::Types3d::TPosition3D* FSkew;
	bool FZWrite;
	Fmx::Types3d::TProjection FProjection;
	_di_IViewport3D FViewport;
	float FHeight;
	float FLastHeight;
	float FWidth;
	float FLastWidth;
	float FDepth;
	float FLastDepth;
	System::Math::Vectors::TMatrix3D FLocalMatrix;
	System::Math::Vectors::TMatrix3D FAbsoluteMatrix;
	System::Math::Vectors::TMatrix3D FInvAbsoluteMatrix;
	bool FRecalcAbsolute;
	bool FCanResize;
	bool FCanRotate;
	int FBody;
	bool FDesignInteract;
	bool FDesignLocked;
	float FOpacity;
	float FAbsoluteOpacity;
	bool FRecalcOpacity;
	int FUpdating;
	bool FDisableEffect;
	Fmx::Types3d::TTexture* FEffectTexture;
	Fmx::Types3d::TContext3D* FEffectContext;
	bool FInRenderTo;
	bool FUpdateEffects;
	virtual void __fastcall Loaded();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	bool __fastcall CheckHitTest(const bool AHitTest);
	virtual void __fastcall FreeNotification(System::TObject* AObject);
	virtual void __fastcall SetVisible(const bool Value);
	virtual void __fastcall SetHeight(const float Value);
	virtual void __fastcall SetWidth(const float Value);
	virtual void __fastcall SetDepth(const float Value);
	virtual void __fastcall SetProjection(const Fmx::Types3d::TProjection Value);
	virtual void __fastcall RecalcOpacity();
	virtual void __fastcall RecalcAbsolute();
	virtual System::Math::Vectors::TMatrix3D __fastcall CalculateAbsoluteMatrix();
	virtual float __fastcall CalculateAbsoluteOpacity();
	void __fastcall Capture();
	void __fastcall ReleaseCapture();
	virtual void __fastcall MouseDown3D(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y, const System::Math::Vectors::TVector3D &RayPos, const System::Math::Vectors::TVector3D &RayDir);
	virtual void __fastcall MouseMove3D(System::Classes::TShiftState Shift, float X, float Y, const System::Math::Vectors::TVector3D &RayPos, const System::Math::Vectors::TVector3D &RayDir);
	virtual void __fastcall MouseUp3D(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y, const System::Math::Vectors::TVector3D &RayPos, const System::Math::Vectors::TVector3D &RayDir);
	virtual void __fastcall MouseWheel(System::Classes::TShiftState Shift, int WheelDelta, bool &Handled);
	virtual void __fastcall KeyDown(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift);
	virtual void __fastcall KeyUp(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift);
	virtual void __fastcall DialogKey(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall AfterDialogKey(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall Click();
	virtual void __fastcall DblClick();
	virtual void __fastcall DragEnter(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point);
	virtual void __fastcall DragOver(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point, Fmx::Types::TDragOperation &Operation);
	virtual void __fastcall DragDrop(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point);
	virtual void __fastcall DragLeave();
	virtual void __fastcall DragEnd();
	virtual bool __fastcall DoRayCastIntersect(const System::Math::Vectors::TPoint3D &RayPos, const System::Math::Vectors::TPoint3D &RayDir, System::Math::Vectors::TPoint3D &Intersection);
	virtual bool __fastcall GetCanFocus();
	virtual bool __fastcall GetCanParentFocus();
	virtual bool __fastcall EnterChildren(Fmx::Types::_di_IControl AObject);
	virtual bool __fastcall ExitChildren(Fmx::Types::_di_IControl AObject);
	virtual bool __fastcall ShowContextMenu(const System::Types::TPointF &ScreenPosition);
	virtual void __fastcall DoMouseEnter();
	virtual void __fastcall DoMouseLeave();
	virtual void __fastcall DoEnter();
	virtual void __fastcall DoExit();
	virtual void __fastcall DoActivate();
	virtual void __fastcall DoDeactivate();
	virtual Fmx::Types::_di_IControl __fastcall ObjectAtPoint(const System::Types::TPointF &P);
	Fmx::Types::TFmxObject* __fastcall GetObject();
	bool __fastcall GetVisible();
	bool __fastcall GetDesignInteractive();
	System::Types::TPointF __fastcall AbsoluteToLocal(const System::Types::TPointF &P);
	void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	void __fastcall MouseMove(System::Classes::TShiftState Shift, float X, float Y);
	void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	void __fastcall MouseClick(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	void __fastcall Tap(const System::Types::TPointF &Point);
	bool __fastcall CheckForAllowFocus();
	System::Types::TPointF __fastcall ScreenToLocal(const System::Types::TPointF &AScreenPoint);
	System::Types::TPointF __fastcall LocalToScreen(const System::Types::TPointF &ALocalPoint);
	void __fastcall BeginAutoDrag();
	System::Uitypes::TDragMode __fastcall GetDragMode();
	void __fastcall SetDragMode(const System::Uitypes::TDragMode ADragMode);
	Fmx::Types::TFmxObject* __fastcall GetParent();
	bool __fastcall GetLocked();
	bool __fastcall GetHitTest();
	bool __fastcall GetAcceptsControls();
	void __fastcall SetAcceptsControls(const bool Value);
	virtual Fmx::Types::_di_IControl __fastcall FindTarget(const System::Types::TPointF &P, const Fmx::Types::TDragObject &Data);
	virtual Fmx::Types::_di_ITabStopController __fastcall GetTabStopController();
	virtual bool __fastcall HasHint();
	virtual System::UnicodeString __fastcall GetHintString();
	virtual System::TObject* __fastcall GetHintObject();
	void __fastcall RecalcHasEffect();
	void __fastcall RenderTo(Fmx::Types3d::TContext3D* const AContext, const System::Types::TPointF &Offset);
	virtual void __fastcall BeforeRender();
	virtual void __fastcall ApplyEffect();
	virtual void __fastcall Render();
	virtual void __fastcall RenderHelper();
	virtual void __fastcall RenderChildren();
	void __fastcall DoRender();
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	void __fastcall RebuildRenderingList();
	virtual Fmx::Types3d::TMaterial* __fastcall GetMaterialForSorting();
	virtual void __fastcall Resize3D();
	virtual void __fastcall MatrixChanged(System::TObject* Sender);
	virtual void __fastcall RotationChanged(System::TObject* Sender);
	virtual void __fastcall RotateXChanged(System::TObject* Sender);
	virtual void __fastcall RotateYChanged(System::TObject* Sender);
	virtual void __fastcall RotateZChanged(System::TObject* Sender);
	virtual void __fastcall SetParent(Fmx::Types::TFmxObject* const Value);
	__property bool MouseInObject = {read=FMouseInObject, write=FMouseInObject, nodefault};
	__property Fmx::Types3d::TPosition3D* Skew = {read=FSkew, write=FSkew};
	__property Fmx::Types3d::TContext3D* TempContext = {read=FTempContext, write=SetTempContext};
	
public:
	__fastcall virtual TControl3D(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TControl3D();
	void __fastcall PaintToBitmap(Fmx::Graphics::TBitmap* const ABitmap, int AWidth, int AHeight, System::Uitypes::TAlphaColor ClearColor, bool AutoFit = false, const Fmx::Types3d::TMultisample AMultisample = (Fmx::Types3d::TMultisample)(0x0));
	void __fastcall CreateHighMultisampleSnapshot(Fmx::Graphics::TBitmap* const ABitmap, int AWidth, int AHeight, System::Uitypes::TAlphaColor ClearColor, int Multisample);
	void __fastcall CreateTileSnapshot(Fmx::Graphics::TBitmap* const ABitmap, int AWidth, int AHeight, int OffsetX, int OffsetY, float Scale, System::Uitypes::TAlphaColor ClearColor);
	void __fastcall CopyRotationFrom(TControl3D* const AObject);
	virtual System::Math::Vectors::TPoint3D __fastcall AbsoluteToLocal3D(const System::Math::Vectors::TPoint3D &Point);
	virtual System::Math::Vectors::TPoint3D __fastcall LocalToAbsolute3D(const System::Math::Vectors::TPoint3D &Point);
	virtual System::Math::Vectors::TVector3D __fastcall AbsoluteToLocalVector(const System::Math::Vectors::TVector3D &Vector);
	virtual System::Math::Vectors::TVector3D __fastcall LocalToAbsoluteVector(const System::Math::Vectors::TVector3D &Vector);
	System::Math::Vectors::TVector3D __fastcall AbsoluteToLocalDirection(const System::Math::Vectors::TVector3D &Vector);
	System::Math::Vectors::TVector3D __fastcall LocalToAbsoluteDirection(const System::Math::Vectors::TVector3D &Vector);
	void __fastcall SetSize(const float AWidth, const float AHeight, const float ADepth);
	virtual bool __fastcall RayCastIntersect(const System::Math::Vectors::TPoint3D &RayPos, const System::Math::Vectors::TPoint3D &RayDir, System::Math::Vectors::TPoint3D &Intersection);
	void __fastcall ResetRotationAngle();
	void __fastcall SetFocus();
	void __fastcall Repaint();
	void __fastcall Lock();
	virtual void __fastcall BeginUpdate();
	virtual void __fastcall EndUpdate();
	void __fastcall RenderInternal();
	virtual void __fastcall SetNewViewport(_di_IViewport3D AViewport);
	virtual Fmx::Types::_di_ITabList __fastcall GetTabList();
	bool __fastcall ShowInDesigner();
	__property System::Math::Vectors::TMatrix3D AbsoluteMatrix = {read=GetAbsoluteMatrix};
	__property System::Math::Vectors::TMatrix3D LocalMatrix = {read=FLocalMatrix};
	__property System::Math::Vectors::TVector3D AbsolutePosition = {read=GetAbsolutePosition, write=SetAbsolutePosition};
	__property System::Math::Vectors::TVector3D AbsoluteUp = {read=GetAbsoluteUp};
	__property System::Math::Vectors::TVector3D AbsoluteDirection = {read=GetAbsoluteDirection};
	__property System::Math::Vectors::TVector3D AbsoluteLeft = {read=GetAbsoluteLeft};
	__property float AbsoluteOpacity = {read=GetAbsoluteOpacity};
	__property System::Math::Vectors::TMatrix3D InvertAbsoluteMatrix = {read=GetInvertAbsoluteMatrix};
	__property Fmx::Types3d::TContext3D* Context = {read=GetContext};
	__property bool DesignInteract = {read=FDesignInteract, nodefault};
	__property bool AutoCapture = {read=FAutoCapture, write=FAutoCapture, default=0};
	__property Fmx::Types3d::TPosition3D* RotationCenter = {read=FRotationCenter, write=FRotationCenter};
	__property System::Types::TRectF ScreenBounds = {read=GetScreenBounds};
	__property Fmx::Types3d::TBoundingBox GlobalBounds = {read=GetGlobalBounds};
	__property Fmx::Types3d::TBoundingBox LocalBounds = {read=GetLocalBounds};
	__property bool CanFocus = {read=FCanFocus, write=FCanFocus, default=0};
	__property bool CanParentFocus = {read=FCanParentFocus, write=FCanParentFocus, default=0};
	__property System::Uitypes::TTabOrder TabOrder = {read=GetTabOrder, write=SetTabOrder, nodefault};
	__property bool DesignLocked = {read=FDesignLocked, write=FDesignLocked, nodefault};
	__property bool DisableDragHighlight = {read=FDisableDragHighlight, write=FDisableDragHighlight, default=0};
	__property System::UnicodeString Hint = {read=FHint, write=FHint};
	__property bool ShowHint = {read=FShowHint, write=FShowHint, default=0};
	__property bool IsDragOver = {read=FIsDragOver, nodefault};
	__property bool IsMouseOver = {read=FIsMouseOver, nodefault};
	__property bool IsFocused = {read=GetIsFocused, nodefault};
	__property bool IsVisible = {read=FVisible, nodefault};
	__property System::Uitypes::TCursor Cursor = {read=GetCursor, write=SetCursor, default=0};
	__property System::Uitypes::TCursor InheritedCursor = {read=GetInheritedCursor, default=0};
	__property System::Uitypes::TDragMode DragMode = {read=GetDragMode, write=SetDragMode, default=0};
	__property bool HasEffect = {read=GetAbsoluteHasEffect, nodefault};
	__property bool HasDisablePaintEffect = {read=GetAbsoluteHasDisablePaintEffect, nodefault};
	__property bool HasAfterPaintEffect = {read=GetAbsoluteHasAfterPaintEffect, nodefault};
	__property bool Opaque = {read=FOpaque, write=SetOpaque, nodefault};
	__property Fmx::Types3d::TPosition3D* Position = {read=FPosition, write=FPosition};
	__property Fmx::Types3d::TPosition3D* Scale = {read=FScale, write=FScale};
	__property Fmx::Types3d::TPosition3D* RotationAngle = {read=FRotationAngle, write=FRotationAngle};
	__property bool Locked = {read=FLocked, write=SetLocked, default=0};
	__property float Width = {read=FWidth, write=SetWidth};
	__property float Height = {read=FHeight, write=SetHeight};
	__property float Depth = {read=FDepth, write=SetDepth};
	__property float Opacity = {read=FOpacity, write=SetOpacity, stored=IsOpacityStored};
	__property Fmx::Types3d::TProjection Projection = {read=FProjection, write=SetProjection, default=0};
	__property _di_IViewport3D Viewport = {read=FViewport};
	__property bool HitTest = {read=FHitTest, write=SetHitTest, default=1};
	__property bool VisibleContextMenu = {read=FVisibleContextMenu, write=FVisibleContextMenu, default=1};
	__property bool TwoSide = {read=FTwoSide, write=FTwoSide, default=0};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
	__property bool ZWrite = {read=FZWrite, write=SetZWrite, default=1};
	__property TDragEnterEvent3D OnDragEnter = {read=FOnDragEnter, write=FOnDragEnter};
	__property System::Classes::TNotifyEvent OnDragLeave = {read=FOnDragLeave, write=FOnDragLeave};
	__property TDragOverEvent3D OnDragOver = {read=FOnDragOver, write=FOnDragOver};
	__property TDragDropEvent3D OnDragDrop = {read=FOnDragDrop, write=FOnDragDrop};
	__property System::Classes::TNotifyEvent OnDragEnd = {read=FOnDragEnd, write=FOnDragEnd};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property System::Classes::TNotifyEvent OnDblClick = {read=FOnDblClick, write=FOnDblClick};
	__property TMouseEvent3D OnMouseDown = {read=FOnMouseDown, write=FOnMouseDown};
	__property TMouseMoveEvent3D OnMouseMove = {read=FOnMouseMove, write=FOnMouseMove};
	__property TMouseEvent3D OnMouseUp = {read=FOnMouseUp, write=FOnMouseUp};
	__property Fmx::Types::TMouseWheelEvent OnMouseWheel = {read=FOnMouseWheel, write=FOnMouseWheel};
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property Fmx::Types::TKeyEvent OnKeyDown = {read=FOnKeyDown, write=FOnKeyDown};
	__property Fmx::Types::TKeyEvent OnKeyUp = {read=FOnKeyUp, write=FOnKeyUp};
	__property TRenderEvent OnRender = {read=FOnRender, write=FOnRender};
	__property System::Classes::TNotifyEvent OnActivate = {read=FOnActivate, write=FOnActivate};
	__property System::Classes::TNotifyEvent OnDeactivate = {read=FOnDeactivate, write=FOnDeactivate};
	__property TTapEvent3D OnTap = {read=FOnTap, write=FOnTap};
private:
	void *__ITabStopController;	// Fmx::Types::ITabStopController 
	void *__IControl;	// Fmx::Types::IControl 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E7D2E0C5-EA3B-40BD-B728-5E4BB264EFC1}
	operator Fmx::Types::_di_ITabStopController()
	{
		Fmx::Types::_di_ITabStopController intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::ITabStopController*(void) { return (Fmx::Types::ITabStopController*)&__ITabStopController; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7318D022-D048-49DE-BF55-C5C36A2AD1AC}
	operator Fmx::Types::_di_IControl()
	{
		Fmx::Types::_di_IControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IControl*(void) { return (Fmx::Types::IControl*)&__IControl; }
	#endif
	
};


class PASCALIMPLEMENTATION TCamera : public TControl3D
{
	typedef TControl3D inherited;
	
private:
	TControl3D* FTarget;
	float FAngleOfView;
	void __fastcall SetTarget(TControl3D* const Value);
	System::Math::Vectors::TMatrix3D __fastcall GetCameraMatrix();
	void __fastcall SetAngleOfView(const float Value);
	
protected:
	virtual void __fastcall RecalcAbsolute();
	virtual void __fastcall Render();
	virtual bool __fastcall DoRayCastIntersect(const System::Math::Vectors::TPoint3D &RayPos, const System::Math::Vectors::TPoint3D &RayDir, System::Math::Vectors::TPoint3D &Intersection);
	
public:
	__fastcall virtual TCamera(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCamera();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	__property System::Math::Vectors::TMatrix3D CameraMatrix = {read=GetCameraMatrix};
	
__published:
	__property float AngleOfView = {read=FAngleOfView, write=SetAngleOfView};
	__property HitTest = {default=0};
	__property TControl3D* Target = {read=FTarget, write=SetTarget};
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


class PASCALIMPLEMENTATION TLight : public TControl3D
{
	typedef TControl3D inherited;
	
private:
	bool FEnabled;
	Fmx::Types3d::TLightType FLightType;
	float FSpotCutOff;
	float FSpotExponent;
	System::Uitypes::TAlphaColor FColor;
	void __fastcall SetLightType(const Fmx::Types3d::TLightType Value);
	void __fastcall SetEnabled(const bool Value);
	void __fastcall SetSpotCutOff(const float Value);
	void __fastcall SetSpotExponent(const float Value);
	void __fastcall SetColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall ReadDiffuse(System::Classes::TReader* Reader);
	void __fastcall SkipColor(System::Classes::TReader* Reader);
	void __fastcall SkipFloat(System::Classes::TReader* Reader);
	Fmx::Types3d::TLightDescription __fastcall GetLightDescription();
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall Render();
	virtual void __fastcall SetHeight(const float Value);
	virtual void __fastcall SetWidth(const float Value);
	virtual void __fastcall SetDepth(const float Value);
	virtual bool __fastcall DoRayCastIntersect(const System::Math::Vectors::TPoint3D &RayPos, const System::Math::Vectors::TPoint3D &RayDir, System::Math::Vectors::TPoint3D &Intersection);
	
public:
	__fastcall virtual TLight(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TLight();
	virtual void __fastcall SetNewViewport(_di_IViewport3D AViewport);
	__property Fmx::Types3d::TLightDescription LightDescription = {read=GetLightDescription};
	
__published:
	__property HitTest = {default=0};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property System::Uitypes::TAlphaColor Color = {read=FColor, write=SetColor, nodefault};
	__property Fmx::Types3d::TLightType LightType = {read=FLightType, write=SetLightType, nodefault};
	__property float SpotCutOff = {read=FSpotCutOff, write=SetSpotCutOff};
	__property float SpotExponent = {read=FSpotExponent, write=SetSpotExponent};
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
	__property Visible = {default=1};
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


class PASCALIMPLEMENTATION TProxyObject : public TControl3D
{
	typedef TControl3D inherited;
	
private:
	TControl3D* FSourceObject;
	bool FDisableRendering;
	void __fastcall SetSourceObject(TControl3D* const Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall Render();
	
public:
	__fastcall virtual TProxyObject(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TProxyObject();
	
__published:
	__property TControl3D* SourceObject = {read=FSourceObject, write=SetSourceObject};
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


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRenderingCompare : public System::Generics::Defaults::TComparer__1<TControl3D*>
{
	typedef System::Generics::Defaults::TComparer__1<TControl3D*> inherited;
	
public:
	virtual int __fastcall Compare(TControl3D* const Left, TControl3D* const Right);
public:
	/* TObject.Create */ inline __fastcall TRenderingCompare() : System::Generics::Defaults::TComparer__1<TControl3D*>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TRenderingCompare() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE float GlobalDistance;
extern DELPHI_PACKAGE Fmx::Types3d::TProjection GlobalProjection;
}	/* namespace Controls3d */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_CONTROLS3D)
using namespace Fmx::Controls3d;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_Controls3dHPP
