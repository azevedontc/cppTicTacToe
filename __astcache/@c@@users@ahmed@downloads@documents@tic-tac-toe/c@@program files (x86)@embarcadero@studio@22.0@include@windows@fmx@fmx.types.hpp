// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Types.pas' rev: 35.00 (Windows)

#ifndef Fmx_TypesHPP
#define Fmx_TypesHPP

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
#include <System.Math.hpp>
#include <System.Math.Vectors.hpp>
#include <System.SysUtils.hpp>
#include <System.Rtti.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Messaging.hpp>
#include <FMX.ActnList.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------
#define FireMonkeyVersion 270

namespace Fmx
{
namespace Types
{
//-- forward type declarations -----------------------------------------------
struct TTextAlignHelper /* Helper for enum 'TTextAlign' */;
struct TVertRectAlignHelper /* Helper for enum 'System::Types::TVertRectAlign' */;
struct THorzRectAlignHelper /* Helper for enum 'System::Types::THorzRectAlign' */;
struct TGestureEventInfo;
struct TTouch;
struct TDragObject;
class DELPHICLASS TWindowHandle;
__interface DELPHIINTERFACE IFreeNotification;
typedef System::DelphiInterface<IFreeNotification> _di_IFreeNotification;
__interface DELPHIINTERFACE IFreeNotificationBehavior;
typedef System::DelphiInterface<IFreeNotificationBehavior> _di_IFreeNotificationBehavior;
__interface DELPHIINTERFACE ICaret;
typedef System::DelphiInterface<ICaret> _di_ICaret;
__interface DELPHIINTERFACE IFlasher;
typedef System::DelphiInterface<IFlasher> _di_IFlasher;
__interface DELPHIINTERFACE IContainerObject;
typedef System::DelphiInterface<IContainerObject> _di_IContainerObject;
__interface DELPHIINTERFACE IOriginalContainerSize;
typedef System::DelphiInterface<IOriginalContainerSize> _di_IOriginalContainerSize;
__interface DELPHIINTERFACE IObjectState;
typedef System::DelphiInterface<IObjectState> _di_IObjectState;
__interface DELPHIINTERFACE IContent;
typedef System::DelphiInterface<IContent> _di_IContent;
__interface DELPHIINTERFACE IFMXCursorService;
typedef System::DelphiInterface<IFMXCursorService> _di_IFMXCursorService;
__interface DELPHIINTERFACE IFMXMouseService;
typedef System::DelphiInterface<IFMXMouseService> _di_IFMXMouseService;
__interface DELPHIINTERFACE IControl;
typedef System::DelphiInterface<IControl> _di_IControl;
__interface DELPHIINTERFACE IReadOnly;
typedef System::DelphiInterface<IReadOnly> _di_IReadOnly;
__interface DELPHIINTERFACE IRoot;
typedef System::DelphiInterface<IRoot> _di_IRoot;
__interface DELPHIINTERFACE IAlignRoot;
typedef System::DelphiInterface<IAlignRoot> _di_IAlignRoot;
__interface DELPHIINTERFACE INativeControl;
typedef System::DelphiInterface<INativeControl> _di_INativeControl;
__interface DELPHIINTERFACE IPaintControl;
typedef System::DelphiInterface<IPaintControl> _di_IPaintControl;
__interface DELPHIINTERFACE IVirtualKeyboardControl;
typedef System::DelphiInterface<IVirtualKeyboardControl> _di_IVirtualKeyboardControl;
__interface DELPHIINTERFACE IAlignableObject;
typedef System::DelphiInterface<IAlignableObject> _di_IAlignableObject;
__interface DELPHIINTERFACE IItemsContainer;
typedef System::DelphiInterface<IItemsContainer> _di_IItemsContainer;
__interface DELPHIINTERFACE ITabList;
typedef System::DelphiInterface<ITabList> _di_ITabList;
__interface DELPHIINTERFACE ITabStopController;
typedef System::DelphiInterface<ITabStopController> _di_ITabStopController;
struct TTangentPair;
class DELPHICLASS TSpline;
struct TDeviceDisplayMetrics;
class DELPHICLASS TBounds;
class DELPHICLASS TPosition;
class DELPHICLASS TControlSize;
__interface DELPHIINTERFACE IRotatedControl;
typedef System::DelphiInterface<IRotatedControl> _di_IRotatedControl;
class DELPHICLASS TCustomCaret;
class DELPHICLASS TTransform;
__interface DELPHIINTERFACE TFmxObjectSortCompare;
typedef System::DelphiInterface<TFmxObjectSortCompare> _di_TFmxObjectSortCompare;
class DELPHICLASS TFmxChildrenList;
class DELPHICLASS TStyleIndexer;
class DELPHICLASS TFmxObject;
class DELPHICLASS TTabList;
class DELPHICLASS TCustomPopupMenu;
class DELPHICLASS TCustomGestureCollectionItem;
class DELPHICLASS TCustomGestureCollection;
class DELPHICLASS TCustomGestureEngine;
class DELPHICLASS TCustomGestureManager;
class DELPHICLASS TCustomTouchManager;
class DELPHICLASS TTouchManager;
__interface DELPHIINTERFACE IGestureControl;
typedef System::DelphiInterface<IGestureControl> _di_IGestureControl;
__interface DELPHIINTERFACE IMultiTouch;
typedef System::DelphiInterface<IMultiTouch> _di_IMultiTouch;
__interface DELPHIINTERFACE ISizeGrip;
typedef System::DelphiInterface<ISizeGrip> _di_ISizeGrip;
class DELPHICLASS TLang;
__interface DELPHIINTERFACE IFMXTimerService;
typedef System::DelphiInterface<IFMXTimerService> _di_IFMXTimerService;
class DELPHICLASS TTimer;
struct TLineMetric;
class DELPHICLASS TLineMetricInfo;
class DELPHICLASS TGuillotineBinPack;
class DELPHICLASS EGraphicsException;
class DELPHICLASS ECannotDetermineDirect3DLevel;
class DELPHICLASS ECannotCreateD3DDevice;
class DELPHICLASS ECannotCreateD2DFactory;
class DELPHICLASS ECannotCreateDWriteFactory;
class DELPHICLASS ECannotCreateWICImagingFactory;
class DELPHICLASS ECannotCreateRenderTarget;
class DELPHICLASS ECannotCreateTexture;
class DELPHICLASS ECannotCreateSwapChain;
class DELPHICLASS ERetrieveSurfaceContents;
class DELPHICLASS ECannotCreateRenderTargetView;
class DELPHICLASS ECannotResizeBuffers;
class DELPHICLASS EBitmapSizeTooBig;
class DELPHICLASS EBitmapLoadingFailed;
class DELPHICLASS EThumbnailLoadingFailed;
class DELPHICLASS EBitmapSavingFailed;
class DELPHICLASS EBitmapFormatUnsupported;
class DELPHICLASS EBitmapIncorrectSize;
class DELPHICLASS ERetrieveSurfaceDescription;
class DELPHICLASS EAcquireBitmapAccess;
class DELPHICLASS EVideoCaptureFault;
class DELPHICLASS EInvalidCallingConditions;
class DELPHICLASS EInvalidRenderingConditions;
class DELPHICLASS ETextureSizeTooSmall;
class DELPHICLASS ECannotAcquireBitmapAccess;
class DELPHICLASS ECannotFindSuitablePixelFormat;
class DELPHICLASS ECannotFindShader;
class DELPHICLASS ECannotCreateDirect3D;
class DELPHICLASS ECannotAcquireDXGIFactory;
class DELPHICLASS ECannotAssociateWindowHandle;
class DELPHICLASS ECannotRetrieveDisplayMode;
class DELPHICLASS ECannotRetrieveBufferDesc;
class DELPHICLASS ECannotCreateSamplerState;
class DELPHICLASS ECannotRetrieveSurface;
class DELPHICLASS ECannotUploadTexture;
class DELPHICLASS ECannotActivateTexture;
class DELPHICLASS ECannotAcquireTextureAccess;
class DELPHICLASS ECannotCopyTextureResource;
class DELPHICLASS ECannotActivateFrameBuffers;
class DELPHICLASS ECannotCreateRenderBuffers;
class DELPHICLASS ECannotRetrieveRenderBuffers;
class DELPHICLASS ECannotActivateRenderBuffers;
class DELPHICLASS ECannotBeginRenderingScene;
class DELPHICLASS ECannotSyncDeviceBuffers;
class DELPHICLASS ECannotUploadDeviceBuffers;
class DELPHICLASS ECannotCreateDepthStencil;
class DELPHICLASS ECannotRetrieveDepthStencil;
class DELPHICLASS ECannotActivateDepthStencil;
class DELPHICLASS ECannotResizeSwapChain;
class DELPHICLASS ECannotActivateSwapChain;
class DELPHICLASS ECannotCreateVertexShader;
class DELPHICLASS ECannotCreatePixelShader;
class DELPHICLASS ECannotCreateVertexLayout;
class DELPHICLASS ECannotCreateVertexDeclaration;
class DELPHICLASS ECannotCreateVertexBuffer;
class DELPHICLASS ECannotCreateIndexBuffer;
class DELPHICLASS EShaderCompilationError;
class DELPHICLASS EProgramCompilationError;
class DELPHICLASS ECannotFindShaderVariable;
class DELPHICLASS ECannotActivateShaderProgram;
class DELPHICLASS ECannotCreateOpenGLContext;
class DELPHICLASS ECannotUpdateOpenGLContext;
class DELPHICLASS ECannotDrawMeshObject;
class DELPHICLASS EFeatureNotSupported;
class DELPHICLASS EErrorCompressingStream;
class DELPHICLASS EErrorDecompressingStream;
class DELPHICLASS EErrorUnpackingShaderCode;
__interface DELPHIINTERFACE IPersistentProvider;
typedef System::DelphiInterface<IPersistentProvider> _di_IPersistentProvider;
__interface DELPHIINTERFACE IPersistentShim;
typedef System::DelphiInterface<IPersistentShim> _di_IPersistentShim;
__interface DELPHIINTERFACE IDesignablePersistent;
typedef System::DelphiInterface<IDesignablePersistent> _di_IDesignablePersistent;
__interface DELPHIINTERFACE IMovablePersistent;
typedef System::DelphiInterface<IMovablePersistent> _di_IMovablePersistent;
__interface DELPHIINTERFACE ISpriggedPersistent;
typedef System::DelphiInterface<ISpriggedPersistent> _di_ISpriggedPersistent;
class DELPHICLASS Log;
template<typename F, typename T> class DELPHICLASS TEnumerableFilter__2;
class DELPHICLASS TIdleMessage;
struct TDisplay;
//-- type declarations -------------------------------------------------------
enum class DECLSPEC_DENUM TVKAutoShowMode : unsigned int { DefinedBySystem, Never, Always };

enum class DECLSPEC_DENUM TOSPlatform : unsigned int { Windows, OSX, iOS, Android, Linux };

typedef System::StaticArray<System::Types::TPointF, 1> TPointArray;

typedef System::StaticArray<System::Byte, 2147483647> TLongByteArray;

typedef TLongByteArray *PLongByteArray;

enum class DECLSPEC_DENUM TCorner : unsigned int { TopLeft, TopRight, BottomLeft, BottomRight };

typedef System::Set<TCorner, _DELPHI_SET_ENUMERATOR(TCorner::TopLeft), _DELPHI_SET_ENUMERATOR(TCorner::BottomRight)> TCorners;

enum class DECLSPEC_DENUM TCornerType : unsigned int { Round, Bevel, InnerRound, InnerLine };

typedef System::StaticArray<System::Types::TPointF, 4> TCornersF;

typedef TCornersF *PCornersF;

enum class DECLSPEC_DENUM TSide : unsigned int { Top, Left, Bottom, Right };

typedef System::Set<TSide, _DELPHI_SET_ENUMERATOR(TSide::Top), _DELPHI_SET_ENUMERATOR(TSide::Right)> TSides;

enum class DECLSPEC_DENUM TTextAlign : unsigned int { Center, Leading, Trailing };

enum class DECLSPEC_DENUM TTextTrimming : unsigned int { None, Character, Word };

enum class DECLSPEC_DENUM TPrefixStyle : unsigned int { HidePrefix, NoPrefix };

enum class DECLSPEC_DENUM TStyledSetting : unsigned int { Family, Size, Style, FontColor, Other };

typedef System::Set<TStyledSetting, _DELPHI_SET_ENUMERATOR(TStyledSetting::Family), _DELPHI_SET_ENUMERATOR(TStyledSetting::Other)> TStyledSettings;

enum class DECLSPEC_DENUM TMenuItemChange : unsigned int { Enabled, Visible, Text, Shortcut, Checked, Bitmap };

typedef System::Set<TMenuItemChange, _DELPHI_SET_ENUMERATOR(TMenuItemChange::Enabled), _DELPHI_SET_ENUMERATOR(TMenuItemChange::Bitmap)> TMenuItemChanges;

enum class DECLSPEC_DENUM TScreenOrientation : unsigned int { Portrait, Landscape, InvertedPortrait, InvertedLandscape };

typedef System::Set<TScreenOrientation, _DELPHI_SET_ENUMERATOR(TScreenOrientation::Portrait), _DELPHI_SET_ENUMERATOR(TScreenOrientation::InvertedLandscape)> TScreenOrientations;

enum class DECLSPEC_DENUM TPixelFormat : unsigned int { None, RGB, RGBA, BGR, BGRA, RGBA16, BGR_565, BGRA4, BGR4, BGR5_A1, BGR5, BGR10_A2, RGB10_A2, L, LA, LA4, L16, A, R16F, RG16F, RGBA16F, R32F, RG32F, RGBA32F };

typedef System::Generics::Collections::TList__1<TPixelFormat>* TPixelFormatList;

typedef short TGestureID;

enum class DECLSPEC_DENUM TInteractiveGestureFlag : unsigned int { gfBegin, gfInertia, gfEnd };

typedef System::Set<TInteractiveGestureFlag, _DELPHI_SET_ENUMERATOR(TInteractiveGestureFlag::gfBegin), _DELPHI_SET_ENUMERATOR(TInteractiveGestureFlag::gfEnd)> TInteractiveGestureFlags;

struct DECLSPEC_DRECORD TGestureEventInfo
{
public:
	TGestureID GestureID;
	System::Types::TPointF Location;
	TInteractiveGestureFlags Flags;
	double Angle;
	System::Types::TPointF InertiaVector;
	int Distance;
	System::Types::TPointF TapLocation;
};


typedef void __fastcall (__closure *TGestureEvent)(System::TObject* Sender, const TGestureEventInfo &EventInfo, bool &Handled);

struct DECLSPEC_DRECORD TTouch
{
public:
	System::Types::TPointF Location;
};


typedef System::DynamicArray<TTouch> TTouches;

enum class DECLSPEC_DENUM TTouchAction : unsigned int { None, Up, Down, Move, Cancel };

typedef System::Set<TTouchAction, _DELPHI_SET_ENUMERATOR(TTouchAction::None), _DELPHI_SET_ENUMERATOR(TTouchAction::Cancel)> TTouchActions;

enum class DECLSPEC_DENUM TFormStyle : unsigned int { Normal, Popup, StayOnTop };

enum class DECLSPEC_DENUM TAlignLayout : unsigned int { None, Top, Left, Right, Bottom, MostTop, MostBottom, MostLeft, MostRight, Client, Contents, Center, VertCenter, HorzCenter, Horizontal, Vertical, Scale, Fit, FitLeft, FitRight };

enum class DECLSPEC_DENUM TImeMode : unsigned int { imDontCare, imDisable, imClose, imOpen, imSAlpha, imAlpha, imHira, imSKata, imKata, imChineseClose, imOnHalf, imSHanguel, imHanguel };

enum class DECLSPEC_DENUM TDragOperation : unsigned int { None, Move, Copy, Link };

struct DECLSPEC_DRECORD TDragObject
{
	
private:
	typedef System::DynamicArray<System::UnicodeString> _TDragObject__1;
	
	
public:
	System::TObject* Source;
	_TDragObject__1 Files;
	System::Rtti::TValue Data;
};


typedef NativeUInt TFmxHandle;

typedef short TFlasherInterval;

typedef void __fastcall (__closure *TCanActionExecEvent)(Fmx::Actnlist::TCustomAction* Sender, bool &CanExec);

#ifndef _WIN64
typedef System::TMetaClass* TFmxObjectClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFmxObjectClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TWindowHandle : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	virtual float __fastcall GetScale();
	
public:
	bool __fastcall IsScaleInteger();
	__property float Scale = {read=GetScale};
public:
	/* TObject.Create */ inline __fastcall TWindowHandle() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TWindowHandle() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{FEB50EAF-A3B9-4B37-8EDB-1EF9EE2F22D4}") IFreeNotification  : public System::IInterface 
{
	virtual void __fastcall FreeNotification(System::TObject* AObject) = 0 ;
};

__interface  INTERFACE_UUID("{83F052C5-8696-4AFA-88F5-DCDFEF005480}") IFreeNotificationBehavior  : public System::IInterface 
{
	virtual void __fastcall AddFreeNotify(const _di_IFreeNotification AObject) = 0 ;
	virtual void __fastcall RemoveFreeNotify(const _di_IFreeNotification AObject) = 0 ;
};

__interface  INTERFACE_UUID("{F4EFFFB8-E83C-421D-B123-C370FB7BCCC7}") ICaret  : public System::IInterface 
{
	virtual TCustomCaret* __fastcall GetObject() = 0 ;
	virtual void __fastcall ShowCaret() = 0 ;
	virtual void __fastcall HideCaret() = 0 ;
};

__interface  INTERFACE_UUID("{1A9163B4-47FD-45D6-A54F-70158CB01777}") IFlasher  : public System::IInterface 
{
	virtual System::Uitypes::TAlphaColor __fastcall GetColor() = 0 ;
	virtual System::Types::TPointF __fastcall GetPos() = 0 ;
	virtual System::Types::TSizeF __fastcall GetSize() = 0 ;
	virtual bool __fastcall GetVisible() = 0 ;
	virtual float __fastcall GetOpacity() = 0 ;
	virtual TFlasherInterval __fastcall GetInterval() = 0 ;
	virtual TCustomCaret* __fastcall GetCaret() = 0 ;
	virtual void __fastcall SetCaret(TCustomCaret* const Value) = 0 ;
	__property System::Uitypes::TAlphaColor Color = {read=GetColor};
	__property System::Types::TPointF Pos = {read=GetPos};
	__property System::Types::TSizeF Size = {read=GetSize};
	__property bool Visible = {read=GetVisible};
	__property float Opacity = {read=GetOpacity};
	__property TFlasherInterval Interval = {read=GetInterval};
	__property TCustomCaret* Caret = {read=GetCaret, write=SetCaret};
	virtual void __fastcall UpdateState() = 0 ;
};

__interface  INTERFACE_UUID("{DE635E60-CB00-4741-92BB-3B8F1F29A67C}") IContainerObject  : public System::IInterface 
{
	virtual float __fastcall GetContainerWidth() = 0 ;
	virtual float __fastcall GetContainerHeight() = 0 ;
	__property float ContainerWidth = {read=GetContainerWidth};
	__property float ContainerHeight = {read=GetContainerHeight};
};

__interface  INTERFACE_UUID("{E76F6097-AF5D-49A1-9C7B-5127D6068059}") IOriginalContainerSize  : public System::IInterface 
{
	virtual System::Types::TPointF __fastcall GetOriginalContainerSize() = 0 ;
	__property System::Types::TPointF OriginalContainerSize = {read=GetOriginalContainerSize};
};

__interface  INTERFACE_UUID("{0402E1A6-1F75-4D28-BFEA-8092803B00EE}") IObjectState  : public System::IInterface 
{
	virtual bool __fastcall SaveState() = 0 ;
	virtual bool __fastcall RestoreState() = 0 ;
};

__interface  INTERFACE_UUID("{96E89B94-2AD6-4AD3-A07C-92E66B2E6BC8}") IContent  : public System::IInterface 
{
	virtual TFmxObject* __fastcall GetParent() = 0 ;
	virtual TFmxObject* __fastcall GetObject() = 0 ;
	virtual int __fastcall GetChildrenCount() = 0 ;
	__property TFmxObject* Parent = {read=GetParent};
	__property int ChildrenCount = {read=GetChildrenCount};
	virtual void __fastcall Changed() = 0 ;
};

__interface  INTERFACE_UUID("{5D359E54-2543-414E-8268-A53292E4FDB4}") IFMXCursorService  : public System::IInterface 
{
	virtual void __fastcall SetCursor(const System::Uitypes::TCursor ACursor) = 0 ;
	virtual System::Uitypes::TCursor __fastcall GetCursor() = 0 ;
};

__interface  INTERFACE_UUID("{2370205F-CF27-4DF6-9B1F-5EBC27271D5A}") IFMXMouseService  : public System::IInterface 
{
	virtual System::Types::TPointF __fastcall GetMousePos() = 0 ;
};

__interface  INTERFACE_UUID("{7318D022-D048-49DE-BF55-C5C36A2AD1AC}") IControl  : public IFreeNotificationBehavior 
{
	virtual TFmxObject* __fastcall GetObject() = 0 ;
	virtual void __fastcall SetFocus() = 0 ;
	virtual bool __fastcall GetIsFocused() = 0 ;
	virtual bool __fastcall GetCanFocus() = 0 ;
	virtual bool __fastcall GetCanParentFocus() = 0 ;
	virtual bool __fastcall GetEnabled() = 0 ;
	virtual bool __fastcall GetAbsoluteEnabled() = 0 ;
	virtual TCustomPopupMenu* __fastcall GetPopupMenu() = 0 ;
	virtual bool __fastcall EnterChildren(_di_IControl AObject) = 0 ;
	virtual bool __fastcall ExitChildren(_di_IControl AObject) = 0 ;
	virtual void __fastcall DoEnter() = 0 ;
	virtual void __fastcall DoExit() = 0 ;
	virtual void __fastcall DoActivate() = 0 ;
	virtual void __fastcall DoDeactivate() = 0 ;
	virtual void __fastcall DoMouseEnter() = 0 ;
	virtual void __fastcall DoMouseLeave() = 0 ;
	virtual bool __fastcall ShowContextMenu(const System::Types::TPointF &ScreenPosition) = 0 ;
	virtual System::Types::TPointF __fastcall ScreenToLocal(const System::Types::TPointF &AScreenPoint) = 0 ;
	virtual System::Types::TPointF __fastcall LocalToScreen(const System::Types::TPointF &ALocalPoint) = 0 ;
	virtual _di_IControl __fastcall ObjectAtPoint(const System::Types::TPointF &AScreenPoint) = 0 ;
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y) = 0 ;
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, float X, float Y) = 0 ;
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y) = 0 ;
	virtual void __fastcall MouseWheel(System::Classes::TShiftState Shift, int WheelDelta, bool &Handled) = 0 ;
	virtual void __fastcall MouseClick(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y) = 0 ;
	virtual void __fastcall KeyDown(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift) = 0 ;
	virtual void __fastcall KeyUp(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift) = 0 ;
	virtual void __fastcall Tap(const System::Types::TPointF &Point) = 0 ;
	virtual void __fastcall DialogKey(System::Word &Key, System::Classes::TShiftState Shift) = 0 ;
	virtual void __fastcall AfterDialogKey(System::Word &Key, System::Classes::TShiftState Shift) = 0 ;
	virtual _di_IControl __fastcall FindTarget(const System::Types::TPointF &P, const TDragObject &Data) = 0 ;
	virtual void __fastcall DragEnter(const TDragObject &Data, const System::Types::TPointF &Point) = 0 ;
	virtual void __fastcall DragOver(const TDragObject &Data, const System::Types::TPointF &Point, TDragOperation &Operation) = 0 ;
	virtual void __fastcall DragDrop(const TDragObject &Data, const System::Types::TPointF &Point) = 0 ;
	virtual void __fastcall DragLeave() = 0 ;
	virtual void __fastcall DragEnd() = 0 ;
	virtual bool __fastcall CheckForAllowFocus() = 0 ;
	virtual void __fastcall Repaint() = 0 ;
	virtual System::Uitypes::TDragMode __fastcall GetDragMode() = 0 ;
	virtual void __fastcall SetDragMode(const System::Uitypes::TDragMode ADragMode) = 0 ;
	virtual void __fastcall BeginAutoDrag() = 0 ;
	virtual TFmxObject* __fastcall GetParent() = 0 ;
	virtual bool __fastcall GetLocked() = 0 ;
	virtual bool __fastcall GetVisible() = 0 ;
	virtual void __fastcall SetVisible(const bool Value) = 0 ;
	virtual bool __fastcall GetHitTest() = 0 ;
	virtual System::Uitypes::TCursor __fastcall GetCursor() = 0 ;
	virtual System::Uitypes::TCursor __fastcall GetInheritedCursor() = 0 ;
	virtual bool __fastcall GetDesignInteractive() = 0 ;
	virtual bool __fastcall GetAcceptsControls() = 0 ;
	virtual void __fastcall SetAcceptsControls(const bool Value) = 0 ;
	virtual void __fastcall BeginUpdate() = 0 ;
	virtual void __fastcall EndUpdate() = 0 ;
	virtual _di_ITabStopController __fastcall GetTabStopController() = 0 ;
	virtual bool __fastcall GetTabStop() = 0 ;
	virtual void __fastcall SetTabStop(const bool TabStop) = 0 ;
	virtual bool __fastcall HasHint() = 0 ;
	virtual System::UnicodeString __fastcall GetHintString() = 0 ;
	virtual System::TObject* __fastcall GetHintObject() = 0 ;
	__property bool AbsoluteEnabled = {read=GetAbsoluteEnabled};
	__property System::Uitypes::TCursor Cursor = {read=GetCursor};
	__property System::Uitypes::TCursor InheritedCursor = {read=GetInheritedCursor};
	__property System::Uitypes::TDragMode DragMode = {read=GetDragMode, write=SetDragMode};
	__property bool DesignInteractive = {read=GetDesignInteractive};
	__property bool Enabled = {read=GetEnabled};
	__property TFmxObject* Parent = {read=GetParent};
	__property bool Locked = {read=GetLocked};
	__property bool HitTest = {read=GetHitTest};
	__property TCustomPopupMenu* PopupMenu = {read=GetPopupMenu};
	__property bool Visible = {read=GetVisible, write=SetVisible};
	__property bool AcceptsControls = {read=GetAcceptsControls, write=SetAcceptsControls};
	__property bool IsFocused = {read=GetIsFocused};
	__property bool TabStop = {read=GetTabStop, write=SetTabStop};
};

__interface  INTERFACE_UUID("{495B8B0C-D7C8-4835-AA5F-580939D21444}") IReadOnly  : public System::IInterface 
{
	virtual bool __fastcall GetReadOnly() = 0 ;
	virtual void __fastcall SetReadOnly(const bool Value) = 0 ;
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly};
};

__interface  INTERFACE_UUID("{7F7BB7B0-5932-49DD-9D35-712B2BA5D8EF}") IRoot  : public System::IInterface 
{
	virtual void __fastcall AddObject(TFmxObject* const AObject) = 0 ;
	virtual void __fastcall InsertObject(int Index, TFmxObject* const AObject) = 0 ;
	virtual void __fastcall RemoveObject(TFmxObject* const AObject) = 0 /* overload */;
	virtual void __fastcall RemoveObject(int Index) = 0 /* overload */;
	virtual void __fastcall BeginInternalDrag(System::TObject* const Source, System::TObject* const ABitmap) = 0 ;
	virtual _di_IControl __fastcall GetActiveControl() = 0 ;
	virtual void __fastcall SetActiveControl(const _di_IControl AControl) = 0 ;
	virtual _di_IControl __fastcall GetCaptured() = 0 ;
	virtual void __fastcall SetCaptured(const _di_IControl Value) = 0 ;
	virtual _di_IControl __fastcall GetFocused() = 0 ;
	virtual void __fastcall SetFocused(const _di_IControl Value) = 0 ;
	virtual _di_IControl __fastcall NewFocusedControl(const _di_IControl Value) = 0 ;
	virtual _di_IControl __fastcall GetHovered() = 0 ;
	virtual void __fastcall SetHovered(const _di_IControl Value) = 0 ;
	virtual TFmxObject* __fastcall GetObject() = 0 ;
	virtual System::Classes::TBiDiMode __fastcall GetBiDiMode() = 0 ;
	__property _di_IControl Captured = {read=GetCaptured, write=SetCaptured};
	__property _di_IControl Focused = {read=GetFocused, write=SetFocused};
	__property _di_IControl Hovered = {read=GetHovered, write=SetHovered};
	__property System::Classes::TBiDiMode BiDiMode = {read=GetBiDiMode};
};

__interface  INTERFACE_UUID("{86DF30A6-0394-4A0E-8722-1F2CDB242CE8}") IAlignRoot  : public System::IInterface 
{
	virtual void __fastcall Realign() = 0 ;
	virtual void __fastcall ChildrenAlignChanged() = 0 ;
};

__interface  INTERFACE_UUID("{3E6F1A17-BAE3-456C-8551-5F6EA92EEE32}") INativeControl  : public System::IInterface 
{
	virtual NativeUInt __fastcall GetHandle() = 0 ;
	virtual void __fastcall SetHandle(const NativeUInt Value) = 0 ;
	virtual bool __fastcall GetHandleSupported() = 0 ;
	__property bool HandleSupported = {read=GetHandleSupported};
	__property NativeUInt Handle = {read=GetHandle, write=SetHandle};
};

__interface  INTERFACE_UUID("{47959F99-CCA5-4ACF-BB8D-357F126E9C78}") IPaintControl  : public System::IInterface 
{
	virtual void __fastcall PaintRects(const System::Types::TRectF *UpdateRects, const int UpdateRects_High) = 0 ;
	virtual void __fastcall SetContextHandle(const NativeUInt AContextHandle) = 0 ;
	virtual NativeUInt __fastcall GetContextHandle() = 0 ;
	__property NativeUInt ContextHandle = {read=GetContextHandle, write=SetContextHandle};
};

enum class DECLSPEC_DENUM TVirtualKeyboardType : unsigned int { Default, NumbersAndPunctuation, NumberPad, PhonePad, Alphabet, URL, NamePhonePad, EmailAddress, DecimalNumberPad };

enum class DECLSPEC_DENUM TVirtualKeyboardState : unsigned int { AutoShow, Visible, Error, Transient };

typedef System::Set<TVirtualKeyboardState, _DELPHI_SET_ENUMERATOR(TVirtualKeyboardState::AutoShow), _DELPHI_SET_ENUMERATOR(TVirtualKeyboardState::Transient)> TVirtualKeyboardStates;

enum class DECLSPEC_DENUM TReturnKeyType : unsigned int { Default, Done, Go, Next, Search, Send };

__interface  INTERFACE_UUID("{41127080-97FC-4C30-A880-AB6CD351A6C4}") IVirtualKeyboardControl  : public System::IInterface 
{
	virtual void __fastcall SetKeyboardType(TVirtualKeyboardType Value) = 0 ;
	virtual TVirtualKeyboardType __fastcall GetKeyboardType() = 0 ;
	__property TVirtualKeyboardType KeyboardType = {read=GetKeyboardType, write=SetKeyboardType};
	virtual void __fastcall SetReturnKeyType(TReturnKeyType Value) = 0 ;
	virtual TReturnKeyType __fastcall GetReturnKeyType() = 0 ;
	__property TReturnKeyType ReturnKeyType = {read=GetReturnKeyType, write=SetReturnKeyType};
	virtual bool __fastcall IsPassword() = 0 ;
};

enum class DECLSPEC_DENUM TAdjustType : unsigned int { None, FixedSize, FixedWidth, FixedHeight };

__interface  INTERFACE_UUID("{420D3E98-4433-4CBE-9767-0B494DF08354}") IAlignableObject  : public System::IInterface 
{
	virtual TAlignLayout __fastcall GetAlign() = 0 ;
	virtual void __fastcall SetAlign(const TAlignLayout Value) = 0 ;
	virtual System::Uitypes::TAnchors __fastcall GetAnchors() = 0 ;
	virtual void __fastcall SetAnchors(const System::Uitypes::TAnchors Value) = 0 ;
	virtual TBounds* __fastcall GetMargins() = 0 ;
	virtual void __fastcall SetBounds(float X, float Y, float AWidth, float AHeight) = 0 ;
	virtual TBounds* __fastcall GetPadding() = 0 ;
	virtual float __fastcall GetWidth() = 0 ;
	virtual float __fastcall GetHeight() = 0 ;
	virtual float __fastcall GetLeft() = 0 ;
	virtual float __fastcall GetTop() = 0 ;
	virtual bool __fastcall GetAllowAlign() = 0 ;
	virtual System::Types::TPointF __fastcall GetAnchorRules() = 0 ;
	virtual System::Types::TPointF __fastcall GetAnchorOrigin() = 0 ;
	virtual System::Types::TPointF __fastcall GetOriginalParentSize() = 0 ;
	virtual bool __fastcall GetAnchorMove() = 0 ;
	virtual void __fastcall SetAnchorMove(bool Value) = 0 ;
	virtual TAdjustType __fastcall GetAdjustType() = 0 ;
	virtual System::Types::TSizeF __fastcall GetAdjustSizeValue() = 0 ;
	__property TAlignLayout Align = {read=GetAlign, write=SetAlign};
	__property bool AllowAlign = {read=GetAllowAlign};
	__property System::Uitypes::TAnchors Anchors = {read=GetAnchors, write=SetAnchors};
	__property TBounds* Margins = {read=GetMargins};
	__property TBounds* Padding = {read=GetPadding};
	__property float Left = {read=GetLeft};
	__property float Height = {read=GetHeight};
	__property float Width = {read=GetWidth};
	__property float Top = {read=GetTop};
	__property System::Types::TPointF AnchorRules = {read=GetAnchorRules};
	__property System::Types::TPointF AnchorOrigin = {read=GetAnchorOrigin};
	__property System::Types::TPointF OriginalParentSize = {read=GetOriginalParentSize};
	__property bool AnchorMove = {read=GetAnchorMove, write=SetAnchorMove};
	__property TAdjustType AdjustType = {read=GetAdjustType};
	__property System::Types::TSizeF AdjustSizeValue = {read=GetAdjustSizeValue};
};

__interface  INTERFACE_UUID("{100B2F87-5DCB-4699-B751-B4439588E82A}") IItemsContainer  : public System::IInterface 
{
	virtual int __fastcall GetItemsCount() = 0 ;
	virtual TFmxObject* __fastcall GetItem(const int AIndex) = 0 ;
	virtual TFmxObject* __fastcall GetObject() = 0 ;
};

__interface  INTERFACE_UUID("{80C67BA2-3064-4D90-A8E1-B00028CA670E}") ITabList  : public System::IInterface 
{
	virtual void __fastcall Add(const _di_IControl TabStop) = 0 ;
	virtual void __fastcall Remove(const _di_IControl TabStop) = 0 ;
	virtual void __fastcall Update(const _di_IControl TabStop, const System::Uitypes::TTabOrder NewValue) = 0 ;
	virtual System::Uitypes::TTabOrder __fastcall GetTabOrder(const _di_IControl TabStop) = 0 ;
	virtual int __fastcall GetCount() = 0 ;
	virtual _di_IControl __fastcall GetItem(const int Index) = 0 ;
	virtual _di_IControl __fastcall FindNextTabStop(const _di_IControl Current, const bool MoveForward, const bool Climb) = 0 ;
	__property int Count = {read=GetCount};
};

__interface  INTERFACE_UUID("{E7D2E0C5-EA3B-40BD-B728-5E4BB264EFC1}") ITabStopController  : public System::IInterface 
{
	virtual _di_ITabList __fastcall GetTabList() = 0 ;
	__property _di_ITabList TabList = {read=GetTabList};
};

struct DECLSPEC_DRECORD TTangentPair
{
public:
	float I;
	float Ip1;
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSpline : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TTangentPair> _TSpline__1;
	
	typedef System::DynamicArray<float> _TSpline__2;
	
	
private:
	_TSpline__1 FTangentsX;
	_TSpline__1 FTangentsY;
	_TSpline__2 FValuesX;
	_TSpline__2 FValuesY;
	
public:
	__fastcall TSpline(const System::Math::Vectors::TPolygon Polygon);
	__fastcall virtual ~TSpline();
	void __fastcall SplineXY(const float t, float &X, float &Y);
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TDragEnterEvent)(System::TObject* Sender, const TDragObject &Data, const System::Types::TPointF &Point);

typedef void __fastcall (__closure *TDragOverEvent)(System::TObject* Sender, const TDragObject &Data, const System::Types::TPointF &Point, TDragOperation &Operation);

typedef void __fastcall (__closure *TDragDropEvent)(System::TObject* Sender, const TDragObject &Data, const System::Types::TPointF &Point);

typedef void __fastcall (__closure *TCanFocusEvent)(System::TObject* Sender, bool &ACanFocus);

typedef TDeviceDisplayMetrics *PDeviceDisplayMetrics;

struct DECLSPEC_DRECORD TDeviceDisplayMetrics
{
public:
	System::Types::TSize PhysicalScreenSize;
	System::Types::TSize LogicalScreenSize;
	System::Types::TSize RawScreenSize;
	float AspectRatio;
	int PixelsPerInch;
	float ScreenScale;
	float FontScale;
	__fastcall TDeviceDisplayMetrics(const System::Types::TSize &APhysicalScreenSize, const System::Types::TSize &ALogicalScreenSize, const float AAspectRatio, const int APixelsPerInch, const float AScreenScale, const float AFontScale);
	static bool __fastcall _op_Equality(const TDeviceDisplayMetrics &Left, const TDeviceDisplayMetrics &Right);
	static bool __fastcall _op_Inequality(const TDeviceDisplayMetrics &Left, const TDeviceDisplayMetrics &Right);
	static TDeviceDisplayMetrics __fastcall Default();
	TDeviceDisplayMetrics() {}
	
	friend bool operator ==(const TDeviceDisplayMetrics &Left, const TDeviceDisplayMetrics &Right) { return TDeviceDisplayMetrics::_op_Equality(Left, Right); }
	friend bool operator !=(const TDeviceDisplayMetrics &Left, const TDeviceDisplayMetrics &Right) { return TDeviceDisplayMetrics::_op_Inequality(Left, Right); }
};


class PASCALIMPLEMENTATION TBounds : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	float FRight;
	float FBottom;
	float FTop;
	float FLeft;
	System::Classes::TNotifyEvent FOnChange;
	System::Types::TRectF FDefaultValue;
	System::Types::TRectF __fastcall GetRect();
	void __fastcall SetRect(const System::Types::TRectF &Value);
	void __fastcall SetBottom(const float Value);
	void __fastcall SetLeft(const float Value);
	void __fastcall SetRight(const float Value);
	void __fastcall SetTop(const float Value);
	bool __fastcall IsBottomStored();
	bool __fastcall IsLeftStored();
	bool __fastcall IsRightStored();
	bool __fastcall IsTopStored();
	void __fastcall ReadLeftInt(System::Classes::TReader* Reader);
	void __fastcall ReadBottomInt(System::Classes::TReader* Reader);
	void __fastcall ReadRightInt(System::Classes::TReader* Reader);
	void __fastcall ReadTopInt(System::Classes::TReader* Reader);
	void __fastcall ReadRectInt(System::Classes::TReader* Reader);
	void __fastcall ReadRect(System::Classes::TReader* Reader);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall DoChange();
	
public:
	__fastcall virtual TBounds(const System::Types::TRectF &ADefaultValue);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual bool __fastcall Equals(System::TObject* Obj);
	System::Types::TRectF __fastcall PaddingRect(const System::Types::TRectF &R);
	System::Types::TRectF __fastcall MarginRect(const System::Types::TRectF &R);
	float __fastcall Width();
	float __fastcall Height();
	__property System::Types::TRectF Rect = {read=GetRect, write=SetRect};
	__property System::Types::TRectF DefaultValue = {read=FDefaultValue, write=FDefaultValue};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	bool __fastcall Empty();
	bool __fastcall MarginEmpty();
	virtual System::UnicodeString __fastcall ToString();
	
__published:
	__property float Left = {read=FLeft, write=SetLeft, stored=IsLeftStored};
	__property float Top = {read=FTop, write=SetTop, stored=IsTopStored};
	__property float Right = {read=FRight, write=SetRight, stored=IsRightStored};
	__property float Bottom = {read=FBottom, write=SetBottom, stored=IsBottomStored};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TBounds() { }
	
};


class PASCALIMPLEMENTATION TPosition : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TNotifyEvent FOnChange;
	float FY;
	float FX;
	System::Types::TPointF FDefaultValue;
	bool FStoreAsInt;
	void __fastcall SetPoint(const System::Types::TPointF &Value);
	void __fastcall SetX(const float Value);
	void __fastcall SetY(const float Value);
	System::Types::TPointF __fastcall GetPoint();
	bool __fastcall IsXStored();
	bool __fastcall IsYStored();
	void __fastcall ReadXInt(System::Classes::TReader* Reader);
	void __fastcall WriteXInt(System::Classes::TWriter* Writer);
	void __fastcall ReadYInt(System::Classes::TReader* Reader);
	void __fastcall WriteYInt(System::Classes::TWriter* Writer);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall ReadPoint(System::Classes::TReader* Reader);
	void __fastcall WritePoint(System::Classes::TWriter* Writer);
	virtual void __fastcall DoChange();
	
public:
	__fastcall virtual TPosition(const System::Types::TPointF &ADefaultValue);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall SetPointNoChange(const System::Types::TPointF &P);
	bool __fastcall Empty();
	void __fastcall Reflect(const System::Types::TPointF &Normal);
	__property System::Types::TPointF Point = {read=GetPoint, write=SetPoint};
	__property bool StoreAsInt = {read=FStoreAsInt, write=FStoreAsInt, nodefault};
	__property System::Types::TPointF DefaultValue = {read=FDefaultValue, write=FDefaultValue};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property float X = {read=FX, write=SetX, stored=IsXStored};
	__property float Y = {read=FY, write=SetY, stored=IsYStored};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TPosition() { }
	
};


class PASCALIMPLEMENTATION TControlSize : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FUsePlatformDefault;
	System::Types::TSizeF FSize;
	System::Types::TSizeF FDefaultValue;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetWidth(const float AValue);
	void __fastcall SetHeight(const float AValue);
	float __fastcall GetWidth();
	float __fastcall GetHeight();
	bool __fastcall StoreWidthHeight();
	void __fastcall SetUsePlatformDefault(const bool Value);
	System::Types::TSizeF __fastcall GetSize();
	void __fastcall SetSize(const System::Types::TSizeF &Value);
	
protected:
	virtual void __fastcall DoChange();
	
public:
	__fastcall TControlSize(const System::Types::TSizeF &ASize);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall SetPlatformDefaultWithoutNotification(const bool Value);
	void __fastcall SetSizeWithoutNotification(const System::Types::TSizeF &Value);
	__property System::Types::TSizeF DefaultValue = {read=FDefaultValue, write=FDefaultValue};
	__property System::Types::TSizeF Size = {read=GetSize, write=SetSize};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property float Width = {read=GetWidth, write=SetWidth, stored=StoreWidthHeight};
	__property float Height = {read=GetHeight, write=SetHeight, stored=StoreWidthHeight};
	__property bool PlatformDefault = {read=FUsePlatformDefault, write=SetUsePlatformDefault, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TControlSize() { }
	
};


__interface  INTERFACE_UUID("{9EACF441-30E1-467D-88DA-CC8B2977758F}") IRotatedControl  : public System::IInterface 
{
	virtual float __fastcall GetRotationAngle() = 0 ;
	virtual TPosition* __fastcall GetRotationCenter() = 0 ;
	virtual TPosition* __fastcall GetScale() = 0 ;
	virtual void __fastcall SetRotationAngle(const float Value) = 0 ;
	virtual void __fastcall SetRotationCenter(TPosition* const Value) = 0 ;
	virtual void __fastcall SetScale(TPosition* const Value) = 0 ;
	__property float RotationAngle = {read=GetRotationAngle, write=SetRotationAngle};
	__property TPosition* RotationCenter = {read=GetRotationCenter, write=SetRotationCenter};
	__property TPosition* Scale = {read=GetScale, write=SetScale};
};

typedef void __fastcall (__closure *TCaretDisplayChanged)(TCustomCaret* Sender, const TVirtualKeyboardStates VirtualKeyboardState);

#ifndef _WIN64
typedef System::TMetaClass* TCaretClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCaretClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TCustomCaret : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TFmxObject* FOwner;
	_di_IControl FIControl;
	bool FVisible;
	bool FDisplayed;
	bool FTemporarilyHidden;
	bool FChanged;
	int FUpdateCount;
	TCaretDisplayChanged FOnDisplayChanged;
	System::Uitypes::TAlphaColor FColor;
	System::Uitypes::TAlphaColor FDefaultColor;
	System::Types::TPointF FPos;
	System::Types::TSizeF FSize;
	TFlasherInterval FInterval;
	bool FReadOnly;
	void __fastcall SetColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetPos(const System::Types::TPointF &Value);
	void __fastcall SetSize(const System::Types::TSizeF &Value);
	void __fastcall SetTemporarilyHidden(const bool Value);
	void __fastcall SetVisible(const bool Value);
	void __fastcall SetInterval(const TFlasherInterval Value);
	void __fastcall SetReadOnly(const bool Value);
	void __fastcall StartTimer();
	System::Word __fastcall GetWidth();
	void __fastcall SetWidth(const System::Word Value);
	_di_IFlasher __fastcall GetFlasher();
	void __fastcall SetDefaultColor(const System::Uitypes::TAlphaColor Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual void __fastcall DoDisplayChanged(const TVirtualKeyboardStates VirtualKeyboardState);
	virtual void __fastcall DoUpdateFlasher();
	
public:
	__fastcall virtual TCustomCaret(TFmxObject* const AOwner);
	__fastcall virtual ~TCustomCaret();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall Hide();
	virtual void __fastcall Show();
	__property System::Types::TPointF Pos = {read=FPos, write=SetPos};
	__property System::Types::TSizeF Size = {read=FSize, write=SetSize};
	__property System::Uitypes::TAlphaColor Color = {read=FColor, write=SetColor, default=0};
	__property System::Uitypes::TAlphaColor DefaultColor = {read=FDefaultColor, write=SetDefaultColor, nodefault};
	__property TFlasherInterval Interval = {read=FInterval, write=SetInterval, default=0};
	__property TFmxObject* Owner = {read=FOwner};
	__property _di_IControl Control = {read=FIControl};
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	virtual __classmethod System::UnicodeString __fastcall FlasherName() = 0 ;
	__property int UpdateCount = {read=FUpdateCount, nodefault};
	void __fastcall UpdateFlasher();
	__property bool Visible = {read=FVisible, write=SetVisible, nodefault};
	virtual bool __fastcall CanShow();
	__property bool Displayed = {read=FDisplayed, nodefault};
	__property bool TemporarilyHidden = {read=FTemporarilyHidden, write=SetTemporarilyHidden, nodefault};
	__property _di_IFlasher Flasher = {read=GetFlasher};
	__property bool ReadOnly = {read=FReadOnly, write=SetReadOnly, nodefault};
	__property System::Word Width = {read=GetWidth, write=SetWidth, default=0};
	__property TCaretDisplayChanged OnDisplayChanged = {read=FOnDisplayChanged, write=FOnDisplayChanged};
};


class PASCALIMPLEMENTATION TTransform : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Math::Vectors::TMatrix FMatrix;
	float FRotationAngle;
	TPosition* FPosition;
	TPosition* FScale;
	TPosition* FSkew;
	TPosition* FRotationCenter;
	System::Classes::TNotifyEvent FOnChanged;
	void __fastcall SetRotationAngle(const float Value);
	void __fastcall SetScale(TPosition* const Value);
	void __fastcall SetPosition(TPosition* const Value);
	
protected:
	void __fastcall MatrixChanged(System::TObject* Sender);
	__property TPosition* Skew = {read=FSkew, write=FSkew};
	
public:
	__fastcall virtual TTransform();
	__fastcall virtual ~TTransform();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Math::Vectors::TMatrix Matrix = {read=FMatrix};
	__property System::Classes::TNotifyEvent OnChanged = {read=FOnChanged, write=FOnChanged};
	
__published:
	__property TPosition* Position = {read=FPosition, write=SetPosition};
	__property TPosition* Scale = {read=FScale, write=SetScale};
	__property float RotationAngle = {read=FRotationAngle, write=SetRotationAngle};
	__property TPosition* RotationCenter = {read=FRotationCenter, write=FRotationCenter};
};


typedef System::UnicodeString TTrigger;

enum class DECLSPEC_DENUM TAnimationType : unsigned int { In, Out, InOut };

enum class DECLSPEC_DENUM TInterpolationType : unsigned int { Linear, Quadratic, Cubic, Quartic, Quintic, Sinusoidal, Exponential, Circular, Elastic, Back, Bounce };

typedef void __fastcall (__closure *TMouseEvent)(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);

typedef void __fastcall (__closure *TMouseMoveEvent)(System::TObject* Sender, System::Classes::TShiftState Shift, float X, float Y);

typedef void __fastcall (__closure *TMouseWheelEvent)(System::TObject* Sender, System::Classes::TShiftState Shift, int WheelDelta, bool &Handled);

typedef void __fastcall (__closure *TKeyEvent)(System::TObject* Sender, System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift);

typedef void __fastcall (__closure *TProcessTickEvent)(System::TObject* Sender, float time, float deltaTime);

typedef void __fastcall (__closure *TVirtualKeyboardEvent)(System::TObject* Sender, bool KeyboardVisible, const System::Types::TRect &Bounds);

typedef void __fastcall (__closure *TTapEvent)(System::TObject* Sender, const System::Types::TPointF &Point);

typedef void __fastcall (__closure *TTouchEvent)(System::TObject* Sender, const TTouches Touches, const TTouchAction Action);

__interface TFmxObjectSortCompare  : public System::IInterface 
{
	virtual int __fastcall Invoke(TFmxObject* Left, TFmxObject* Right) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFmxChildrenList : public System::Generics::Collections::TEnumerable__1<TFmxObject*>
{
	typedef System::Generics::Collections::TEnumerable__1<TFmxObject*> inherited;
	
public:
	TFmxObject* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Generics::Collections::TList__1<TFmxObject*>* FChildren;
	
protected:
	virtual System::Generics::Collections::TEnumerator__1<TFmxObject*>* __fastcall DoGetEnumerator();
	virtual int __fastcall GetChildCount();
	virtual TFmxObject* __fastcall GetChild(int AIndex);
	
public:
	__fastcall TFmxChildrenList(System::Generics::Collections::TList__1<TFmxObject*>* const AChildren);
	__fastcall virtual ~TFmxChildrenList();
	__property int Count = {read=GetChildCount, nodefault};
	virtual int __fastcall IndexOf(TFmxObject* const Obj);
	__property TFmxObject* Items[int Index] = {read=GetChild/*, default*/};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum class DECLSPEC_DENUM TEnumProcResult : unsigned int { Continue, Discard, Stop };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStyleIndexer : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TFmxObject* FStyle;
	System::Generics::Collections::TDictionary__2<System::UnicodeString,TFmxObject*>* FIndex;
	void __fastcall Rebuild();
	
public:
	__fastcall TStyleIndexer(TFmxObject* const AStyle);
	__fastcall virtual ~TStyleIndexer();
	void __fastcall NeedRebuild();
	void __fastcall RebuildIfNeeded();
	bool __fastcall FindStyleObject(const System::UnicodeString AStyleLookup, TFmxObject* &AObject);
	void __fastcall Clear();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TFmxObject : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
	
public:
	enum DECLSPEC_DENUM _TFmxObject__1 : unsigned int { CallingFreeNotify, CallingRelease };
	
	typedef System::Set<_TFmxObject__1, _TFmxObject__1::CallingFreeNotify, _TFmxObject__1::CallingRelease> TObjectState _DEPRECATED_ATTRIBUTE1("Support to this state will be removed") ;
	
	
private:
	System::Generics::Collections::TList__1<TFmxObject*>* FChildren;
	TFmxChildrenList* FChildrenList;
	TStyleIndexer* FStyleIndexer;
	
private:
	bool FStored;
	System::TObject* FTagObject;
	float FTagFloat;
	System::UnicodeString FTagString;
	System::Generics::Collections::TList__1<void *>* FNotifyList;
	int FIndex;
	bool FActionClient;
	Fmx::Actnlist::TActionLink* FActionLink;
	_di_IRoot FRoot;
	void __fastcall SetStyleName(const System::UnicodeString Value);
	void __fastcall SetStored(const bool Value);
	int __fastcall GetChildrenCount();
	int __fastcall GetIndexOfChild(TFmxObject* const Child);
	void __fastcall SetIndexOfChild(TFmxObject* const Child, int NewIndex);
	void __fastcall SetIndex(int NewIndex);
	System::Classes::TComponent* __fastcall GetActionRoot();
	bool __fastcall GetActionClient();
	void __fastcall SetActionClient(const bool Value);
	System::Classes::TBasicAction* __fastcall GetAction();
	void __fastcall SetAction(System::Classes::TBasicAction* const Value);
	int __fastcall GetIndex();
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
protected:
	System::UnicodeString FStyleName;
	TFmxObject* FParent;
	virtual TFmxChildrenList* __fastcall CreateChildrenList(System::Generics::Collections::TList__1<TFmxObject*>* const Children);
	void __fastcall ResetChildrenIndicesSpan(const int First, const int Last);
	void __fastcall ResetChildrenIndices();
	virtual int __fastcall GetBackIndex();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall IgnoreBindingName(System::Classes::TReader* Reader);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	DYNAMIC void __fastcall SetParentComponent(System::Classes::TComponent* Value);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual Fmx::Actnlist::TActionLinkClass __fastcall GetActionLinkClass();
	virtual void __fastcall InitiateAction();
	virtual void __fastcall DoActionChange(System::TObject* Sender);
	virtual void __fastcall ActionChange(System::Classes::TBasicAction* Sender, bool CheckDefaults);
	virtual void __fastcall DoActionClientChanged();
	__property Fmx::Actnlist::TActionLink* ActionLink = {read=FActionLink};
	__property System::Classes::TBasicAction* Action = {read=GetAction, write=SetAction};
	__property TStyleIndexer* StyleIndexer = {read=FStyleIndexer};
	
public:
	DYNAMIC System::Classes::TComponent* __fastcall GetParentComponent();
	DYNAMIC bool __fastcall HasParent();
	
protected:
	virtual void __fastcall AddToResourcePool();
	virtual void __fastcall RemoveFromResourcePool();
	virtual void __fastcall SetParent(TFmxObject* const Value);
	virtual void __fastcall DoRootChanging(const _di_IRoot NewRoot);
	virtual void __fastcall DoRootChanged();
	virtual void __fastcall ParentChanged();
	virtual void __fastcall ChangeOrder();
	virtual void __fastcall ChangeChildren();
	virtual void __fastcall DoAddObject(TFmxObject* const AObject);
	virtual void __fastcall DoInsertObject(int Index, TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(TFmxObject* const AObject);
	virtual void __fastcall DoDeleteChildren();
	virtual bool __fastcall SearchInto();
	HIDESBASE virtual void __fastcall FreeNotification(System::TObject* AObject);
	virtual bool __fastcall SupportsPlatformService(const GUID &AServiceGUID, /* out */ void *AService);
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	void __fastcall IgnoreIntegerValue(System::Classes::TReader* Reader);
	void __fastcall IgnoreFloatValue(System::Classes::TReader* Reader);
	void __fastcall IgnoreBooleanValue(System::Classes::TReader* Reader);
	void __fastcall IgnoreIdentValue(System::Classes::TReader* Reader);
	
public:
	__fastcall virtual TFmxObject(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFmxObject();
	virtual void __fastcall BeforeDestruction();
	virtual void __fastcall Release();
	bool __fastcall Released _DEPRECATED_ATTRIBUTE1("Support for this method will be removed") ();
	TObjectState __fastcall ObjectState _DEPRECATED_ATTRIBUTE1("Support for this funcionality will be removed") ();
	void __fastcall SetRoot(_di_IRoot ARoot);
	void __fastcall SetDesign(bool Value, bool SetChildren = true);
	TFmxObject* __fastcall Clone(System::Classes::TComponent* const AOwner);
	void __fastcall AddObject(TFmxObject* const AObject);
	void __fastcall InsertObject(int Index, TFmxObject* const AObject);
	void __fastcall RemoveObject(TFmxObject* const AObject)/* overload */;
	void __fastcall RemoveObject(int Index)/* overload */;
	virtual bool __fastcall ContainsObject(TFmxObject* AObject);
	virtual void __fastcall Exchange(TFmxObject* const AObject1, TFmxObject* const AObject2);
	void __fastcall DeleteChildren();
	virtual bool __fastcall IsChild(TFmxObject* AObject);
	void __fastcall BringChildToFront(TFmxObject* const Child);
	void __fastcall SendChildToBack(TFmxObject* const Child);
	virtual void __fastcall BringToFront();
	virtual void __fastcall SendToBack();
	void __fastcall AddObjectsToList(System::Generics::Collections::TList__1<TFmxObject*>* const AList);
	virtual void __fastcall Sort(_di_TFmxObjectSortCompare Compare);
	void __fastcall EnumObjects(const System::DelphiInterface<System::Sysutils::TFunc__2<TFmxObject*,TEnumProcResult> > Proc);
	void __fastcall AnimateFloat _DEPRECATED_ATTRIBUTE1("Use FMX.Ani.TAnimator instead") (const System::UnicodeString APropertyName, const float NewValue, float Duration = 2.000000E-01f, TAnimationType AType = (TAnimationType)(0x0), TInterpolationType AInterpolation = (TInterpolationType)(0x0));
	void __fastcall AnimateFloatDelay _DEPRECATED_ATTRIBUTE1("Use FMX.Ani.TAnimator instead") (const System::UnicodeString APropertyName, const float NewValue, float Duration = 2.000000E-01f, float Delay = 0.000000E+00f, TAnimationType AType = (TAnimationType)(0x0), TInterpolationType AInterpolation = (TInterpolationType)(0x0));
	void __fastcall AnimateFloatWait _DEPRECATED_ATTRIBUTE1("Use FMX.Ani.TAnimator instead") (const System::UnicodeString APropertyName, const float NewValue, float Duration = 2.000000E-01f, TAnimationType AType = (TAnimationType)(0x0), TInterpolationType AInterpolation = (TInterpolationType)(0x0));
	void __fastcall AnimateInt _DEPRECATED_ATTRIBUTE1("Use FMX.Ani.TAnimator instead") (const System::UnicodeString APropertyName, const int NewValue, float Duration = 2.000000E-01f, TAnimationType AType = (TAnimationType)(0x0), TInterpolationType AInterpolation = (TInterpolationType)(0x0));
	void __fastcall AnimateIntWait _DEPRECATED_ATTRIBUTE1("Use FMX.Ani.TAnimator instead") (const System::UnicodeString APropertyName, const int NewValue, float Duration = 2.000000E-01f, TAnimationType AType = (TAnimationType)(0x0), TInterpolationType AInterpolation = (TInterpolationType)(0x0));
	void __fastcall AnimateColor _DEPRECATED_ATTRIBUTE1("Use FMX.Ani.TAnimator instead") (const System::UnicodeString APropertyName, System::Uitypes::TAlphaColor NewValue, float Duration = 2.000000E-01f, TAnimationType AType = (TAnimationType)(0x0), TInterpolationType AInterpolation = (TInterpolationType)(0x0));
	void __fastcall StopPropertyAnimation(const System::UnicodeString APropertyName);
	void __fastcall AddFreeNotify(const _di_IFreeNotification AObject);
	void __fastcall RemoveFreeNotify(const _di_IFreeNotification AObject);
	virtual TFmxObject* __fastcall FindStyleResource(const System::UnicodeString AStyleLookup, const bool AClone = false)/* overload */;
	__property _di_IRoot Root = {read=FRoot};
	__property bool Stored = {read=FStored, write=SetStored, nodefault};
	__property System::TObject* TagObject = {read=FTagObject, write=FTagObject};
	__property float TagFloat = {read=FTagFloat, write=FTagFloat};
	__property System::UnicodeString TagString = {read=FTagString, write=FTagString};
	__property int ChildrenCount = {read=GetChildrenCount, nodefault};
	__property TFmxChildrenList* Children = {read=FChildrenList};
	__property System::Rtti::TValue Data = {read=GetData, write=SetData};
	__property TFmxObject* Parent = {read=FParent, write=SetParent};
	__property int Index = {read=GetIndex, write=SetIndex, nodefault};
	__property bool ActionClient = {read=GetActionClient, nodefault};
	
__published:
	__property System::UnicodeString StyleName = {read=FStyleName, write=SetStyleName};
private:
	void *__IActionClient;	// Fmx::Actnlist::IActionClient 
	void *__IFreeNotification;	// IFreeNotification 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4CAAFEEE-73ED-4C4B-8413-8BF1C3FFD777}
	operator Fmx::Actnlist::_di_IActionClient()
	{
		Fmx::Actnlist::_di_IActionClient intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::IActionClient*(void) { return (Fmx::Actnlist::IActionClient*)&__IActionClient; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FEB50EAF-A3B9-4B37-8EDB-1EF9EE2F22D4}
	operator _di_IFreeNotification()
	{
		_di_IFreeNotification intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IFreeNotification*(void) { return (IFreeNotification*)&__IFreeNotification; }
	#endif
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTabList : public System::TAggregatedObject
{
	typedef System::TAggregatedObject inherited;
	
private:
	System::Generics::Collections::TList__1<_di_IControl>* FTabList;
	void __fastcall CreateTabList();
	bool __fastcall ParentIsRoot();
	
protected:
	virtual bool __fastcall IsAddable(const _di_IControl TabStop);
	
public:
	__fastcall TTabList(const _di_ITabStopController TabStopController);
	__fastcall virtual ~TTabList();
	void __fastcall Clear();
	virtual void __fastcall Add(const _di_IControl TabStop);
	virtual void __fastcall Remove(const _di_IControl TabStop);
	void __fastcall Update(const _di_IControl TabStop, const System::Uitypes::TTabOrder NewValue);
	virtual int __fastcall IndexOf(const _di_IControl TabStop);
	virtual int __fastcall GetCount();
	virtual _di_IControl __fastcall GetItem(const int Index);
	System::Uitypes::TTabOrder __fastcall GetTabOrder(const _di_IControl TabStop);
	_di_IControl __fastcall FindNextTabStop(const _di_IControl ACurrent, const bool AMoveForward, const bool AClimb);
private:
	void *__ITabList;	// ITabList 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {80C67BA2-3064-4D90-A8E1-B00028CA670E}
	operator _di_ITabList()
	{
		_di_ITabList intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ITabList*(void) { return (ITabList*)&__ITabList; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TTabListClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TTabListClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TCustomPopupMenu : public TFmxObject
{
	typedef TFmxObject inherited;
	
private:
	System::Classes::TComponent* FPopupComponent;
	System::Classes::TNotifyEvent FOnPopup;
	
protected:
	virtual void __fastcall DoPopup();
	__property System::Classes::TNotifyEvent OnPopup = {read=FOnPopup, write=FOnPopup};
	
public:
	virtual void __fastcall Popup(float X, float Y) = 0 ;
	__property System::Classes::TComponent* PopupComponent = {read=FPopupComponent, write=FPopupComponent};
public:
	/* TFmxObject.Create */ inline __fastcall virtual TCustomPopupMenu(System::Classes::TComponent* AOwner) : TFmxObject(AOwner) { }
	/* TFmxObject.Destroy */ inline __fastcall virtual ~TCustomPopupMenu() { }
	
};


enum class DECLSPEC_DENUM TStandardGesture : unsigned int { sgLeft = 1, sgRight, sgUp, sgDown, sgUpLeft, sgUpRight, sgDownLeft, sgDownRight, sgLeftUp, sgLeftDown, sgRightUp, sgRightDown, sgUpDown, sgDownUp, sgLeftRight, sgRightLeft, sgUpLeftLong, sgUpRightLong, sgDownLeftLong, sgDownRightLong, sgScratchout, sgTriangle, sgSquare, sgCheck, sgCurlicue, sgDoubleCurlicue, sgCircle, sgDoubleCircle, sgSemiCircleLeft, sgSemiCircleRight, sgChevronUp, sgChevronDown, sgChevronLeft, sgChevronRight };

typedef System::Set<TStandardGesture, _DELPHI_SET_ENUMERATOR(TStandardGesture::sgLeft), _DELPHI_SET_ENUMERATOR(TStandardGesture::sgChevronRight)> TStandardGestures;

enum class DECLSPEC_DENUM TInteractiveGesture : unsigned int { Zoom, Pan, Rotate, TwoFingerTap, PressAndTap, LongTap, DoubleTap };

typedef System::Set<TInteractiveGesture, _DELPHI_SET_ENUMERATOR(TInteractiveGesture::Zoom), _DELPHI_SET_ENUMERATOR(TInteractiveGesture::DoubleTap)> TInteractiveGestures;

enum class DECLSPEC_DENUM TGestureType : unsigned int { Standard, Recorded, Registered, None };

typedef System::Set<TGestureType, _DELPHI_SET_ENUMERATOR(TGestureType::Standard), _DELPHI_SET_ENUMERATOR(TGestureType::None)> TGestureTypes;

enum class DECLSPEC_DENUM TGestureOption : unsigned int { UniDirectional, Skew, Endpoint, Rotate };

typedef System::Set<TGestureOption, _DELPHI_SET_ENUMERATOR(TGestureOption::UniDirectional), _DELPHI_SET_ENUMERATOR(TGestureOption::Rotate)> TGestureOptions;

typedef System::DynamicArray<TCustomGestureCollectionItem*> TGestureArray;

typedef System::DynamicArray<System::Types::TPointF> TGesturePointArray;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomGestureCollectionItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
protected:
	virtual Fmx::Actnlist::TCustomAction* __fastcall GetAction() = 0 ;
	virtual int __fastcall GetDeviation() = 0 ;
	virtual int __fastcall GetErrorMargin() = 0 ;
	virtual TGestureID __fastcall GetGestureID() = 0 ;
	virtual TGestureType __fastcall GetGestureType() = 0 ;
	virtual System::UnicodeString __fastcall GetName() = 0 ;
	virtual TGestureOptions __fastcall GetOptions() = 0 ;
	virtual TGesturePointArray __fastcall GetPoints() = 0 ;
	virtual void __fastcall SetAction(Fmx::Actnlist::TCustomAction* const Value) = 0 ;
	virtual void __fastcall SetDeviation(const int Value) = 0 ;
	virtual void __fastcall SetErrorMargin(const int Value) = 0 ;
	virtual void __fastcall SetGestureID(const TGestureID Value) = 0 ;
	virtual void __fastcall SetName(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetOptions(const TGestureOptions Value) = 0 ;
	virtual void __fastcall SetPoints(const TGesturePointArray Value) = 0 ;
	
public:
	__property int Deviation = {read=GetDeviation, write=SetDeviation, default=20};
	__property int ErrorMargin = {read=GetErrorMargin, write=SetErrorMargin, default=20};
	__property TGestureID GestureID = {read=GetGestureID, write=SetGestureID, nodefault};
	__property TGestureType GestureType = {read=GetGestureType, nodefault};
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property TGesturePointArray Points = {read=GetPoints, write=SetPoints};
	__property Fmx::Actnlist::TCustomAction* Action = {read=GetAction, write=SetAction};
	__property TGestureOptions Options = {read=GetOptions, write=SetOptions, default=9};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TCustomGestureCollectionItem(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TCustomGestureCollectionItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomGestureCollection : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TCustomGestureCollectionItem* operator[](int Index) { return this->Items[Index]; }
	
protected:
	virtual TCustomGestureManager* __fastcall GetGestureManager() = 0 ;
	HIDESBASE TCustomGestureCollectionItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TCustomGestureCollectionItem* const Value);
	
public:
	virtual TCustomGestureCollectionItem* __fastcall AddGesture() = 0 ;
	virtual TCustomGestureCollectionItem* __fastcall FindGesture(TGestureID AGestureID) = 0 /* overload */;
	virtual TCustomGestureCollectionItem* __fastcall FindGesture(const System::UnicodeString AName) = 0 /* overload */;
	virtual TGestureID __fastcall GetUniqueGestureID() = 0 ;
	virtual void __fastcall RemoveGesture(TGestureID AGestureID) = 0 ;
	__property TCustomGestureManager* GestureManager = {read=GetGestureManager};
	__property TCustomGestureCollectionItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Create */ inline __fastcall TCustomGestureCollection(System::Classes::TCollectionItemClass ItemClass) : System::Classes::TCollection(ItemClass) { }
	/* TCollection.Destroy */ inline __fastcall virtual ~TCustomGestureCollection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomGestureEngine : public System::TObject
{
	typedef System::TObject inherited;
	
	
public:
	enum class DECLSPEC_DENUM TGestureEngineFlag : unsigned int { MouseEvents, TouchEvents };
	
	typedef System::Set<TGestureEngineFlag, _DELPHI_SET_ENUMERATOR(TGestureEngineFlag::MouseEvents), _DELPHI_SET_ENUMERATOR(TGestureEngineFlag::TouchEvents)> TGestureEngineFlags;
	
	
protected:
	virtual bool __fastcall GetActive() = 0 ;
	virtual TGestureEngineFlags __fastcall GetFlags() = 0 ;
	virtual void __fastcall SetActive(const bool Value) = 0 ;
	
public:
	__fastcall virtual TCustomGestureEngine(System::Classes::TComponent* const AControl) = 0 ;
	virtual void __fastcall BroadcastGesture(System::Classes::TComponent* const AControl, const TGestureEventInfo &EventInfo) = 0 ;
	__property bool Active = {read=GetActive, write=SetActive, nodefault};
	__property TGestureEngineFlags Flags = {read=GetFlags, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomGestureEngine() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCustomGestureManager : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
protected:
	virtual TGestureArray __fastcall GetGestureList(System::Classes::TComponent* AControl) = 0 ;
	virtual TStandardGestures __fastcall GetStandardGestures(System::Classes::TComponent* AControl) = 0 ;
	virtual void __fastcall SetStandardGestures(System::Classes::TComponent* AControl, const TStandardGestures &AStandardGestures) = 0 ;
	
public:
	virtual TGestureID __fastcall AddRecordedGesture(TCustomGestureCollectionItem* const Item) = 0 /* overload */;
	virtual TCustomGestureCollectionItem* __fastcall FindCustomGesture(TGestureID AGestureID) = 0 /* overload */;
	virtual TCustomGestureCollectionItem* __fastcall FindCustomGesture(const System::UnicodeString AName) = 0 /* overload */;
	virtual TCustomGestureCollectionItem* __fastcall FindGesture(System::Classes::TComponent* const AControl, TGestureID AGestureID) = 0 /* overload */;
	virtual TCustomGestureCollectionItem* __fastcall FindGesture(System::Classes::TComponent* const AControl, const System::UnicodeString AName) = 0 /* overload */;
	virtual void __fastcall RemoveActionNotification(Fmx::Actnlist::TCustomAction* Action, TCustomGestureCollectionItem* Item);
	virtual void __fastcall RegisterControl(System::Classes::TComponent* const AControl) = 0 ;
	virtual void __fastcall RemoveRecordedGesture(TGestureID AGestureID) = 0 /* overload */;
	virtual void __fastcall RemoveRecordedGesture(TCustomGestureCollectionItem* const AGesture) = 0 /* overload */;
	virtual bool __fastcall SelectGesture(System::Classes::TComponent* const AControl, TGestureID AGestureID) = 0 /* overload */;
	virtual bool __fastcall SelectGesture(System::Classes::TComponent* const AControl, const System::UnicodeString AName) = 0 /* overload */;
	virtual void __fastcall UnregisterControl(System::Classes::TComponent* const AControl) = 0 ;
	virtual void __fastcall UnselectGesture(System::Classes::TComponent* const AControl, TGestureID AGestureID) = 0 ;
	__property TGestureArray GestureList[System::Classes::TComponent* AControl] = {read=GetGestureList};
	__property TStandardGestures StandardGestures[System::Classes::TComponent* AControl] = {read=GetStandardGestures, write=SetStandardGestures};
public:
	/* TComponent.Create */ inline __fastcall virtual TCustomGestureManager(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TCustomGestureManager() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomTouchManager : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
	
private:
	class DELPHICLASS TObjectWrapper;
	class PASCALIMPLEMENTATION TObjectWrapper : public System::TObject
	{
		typedef System::TObject inherited;
		
	public:
		System::Classes::TComponent* FObject;
		__fastcall TObjectWrapper(System::Classes::TComponent* const AObject);
	public:
		/* TObject.Destroy */ inline __fastcall virtual ~TObjectWrapper() { }
		
	};
	
	
	
private:
	System::Classes::TComponent* FControl;
	TCustomGestureEngine* FGestureEngine;
	TCustomGestureManager* FGestureManager;
	TInteractiveGestures FInteractiveGestures;
	TInteractiveGestures FDefaultInteractiveGestures;
	TStandardGestures FStandardGestures;
	TStandardGestures __fastcall GetStandardGestures();
	bool __fastcall IsInteractiveGesturesStored();
	void __fastcall SetInteractiveGestures(const TInteractiveGestures Value);
	void __fastcall SetGestureEngine(TCustomGestureEngine* const Value);
	void __fastcall SetGestureManager(TCustomGestureManager* const Value);
	void __fastcall SetStandardGestures(const TStandardGestures &Value);
	TGestureArray __fastcall GetGestureList();
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	bool __fastcall IsDefault();
	
public:
	__fastcall TCustomTouchManager(System::Classes::TComponent* AControl);
	__fastcall virtual ~TCustomTouchManager();
	void __fastcall ChangeNotification(System::Classes::TComponent* const AControl);
	TCustomGestureCollectionItem* __fastcall FindGesture(TGestureID AGestureID)/* overload */;
	TCustomGestureCollectionItem* __fastcall FindGesture(const System::UnicodeString AName)/* overload */;
	void __fastcall RemoveChangeNotification(System::Classes::TComponent* const AControl);
	bool __fastcall SelectGesture(TGestureID AGestureID)/* overload */;
	bool __fastcall SelectGesture(const System::UnicodeString AName)/* overload */;
	void __fastcall UnselectGesture(TGestureID AGestureID);
	__property TCustomGestureEngine* GestureEngine = {read=FGestureEngine, write=SetGestureEngine};
	__property TGestureArray GestureList = {read=GetGestureList};
	__property TCustomGestureManager* GestureManager = {read=FGestureManager, write=SetGestureManager};
	__property TInteractiveGestures InteractiveGestures = {read=FInteractiveGestures, write=SetInteractiveGestures, stored=IsInteractiveGesturesStored, nodefault};
	__property TInteractiveGestures DefaultInteractiveGestures = {read=FDefaultInteractiveGestures, write=FDefaultInteractiveGestures, nodefault};
	__property TStandardGestures StandardGestures = {read=GetStandardGestures, write=SetStandardGestures};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTouchManager : public TCustomTouchManager
{
	typedef TCustomTouchManager inherited;
	
__published:
	__property GestureManager;
	__property InteractiveGestures;
public:
	/* TCustomTouchManager.Create */ inline __fastcall TTouchManager(System::Classes::TComponent* AControl) : TCustomTouchManager(AControl) { }
	/* TCustomTouchManager.Destroy */ inline __fastcall virtual ~TTouchManager() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{A263006D-3472-40F8-A917-F2221B48A459}") IGestureControl  : public System::IInterface 
{
	virtual void __fastcall BroadcastGesture(const TGestureEventInfo &EventInfo) = 0 ;
	virtual void __fastcall CMGesture(TGestureEventInfo &EventInfo) = 0 ;
	virtual TTouchManager* __fastcall TouchManager() = 0 ;
	virtual System::Classes::TComponent* __fastcall GetFirstControlWithGesture(TInteractiveGesture AGesture) = 0 ;
	virtual System::Classes::TComponent* __fastcall GetFirstControlWithGestureEngine() = 0 ;
	virtual TInteractiveGestures __fastcall GetListOfInteractiveGestures() = 0 ;
	virtual void __fastcall Tap(const System::Types::TPointF &Point) = 0 ;
};

__interface  INTERFACE_UUID("{A263006D-3472-40F8-A917-F2221B48ABDD}") IMultiTouch  : public System::IInterface 
{
	virtual void __fastcall MultiTouch(const TTouches Touches, const TTouchAction Action) = 0 ;
};

__interface  INTERFACE_UUID("{181729B7-53B2-45EA-97C7-91E1F3CBAABE}") ISizeGrip  : public System::IInterface 
{
	
};

class PASCALIMPLEMENTATION TLang : public TFmxObject
{
	typedef TFmxObject inherited;
	
private:
	System::UnicodeString FLang;
	System::Classes::TStrings* FResources;
	System::Classes::TStrings* FOriginal;
	bool FAutoSelect;
	System::UnicodeString FFileName;
	bool FStoreInForm;
	void __fastcall SetLang(const System::UnicodeString Value);
	System::Classes::TStrings* __fastcall GetLangStr(const System::UnicodeString Index);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall ReadResources(System::Classes::TStream* Stream);
	void __fastcall WriteResources(System::Classes::TStream* Stream);
	virtual void __fastcall Loaded();
	
public:
	__fastcall virtual TLang(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TLang();
	void __fastcall AddLang(const System::UnicodeString AName);
	void __fastcall LoadFromFile(const System::UnicodeString AFileName);
	void __fastcall SaveToFile(const System::UnicodeString AFileName);
	__property System::Classes::TStrings* Original = {read=FOriginal};
	__property System::Classes::TStrings* Resources = {read=FResources};
	__property System::Classes::TStrings* LangStr[const System::UnicodeString Index] = {read=GetLangStr};
	
__published:
	__property bool AutoSelect = {read=FAutoSelect, write=FAutoSelect, default=1};
	__property System::UnicodeString FileName = {read=FFileName, write=FFileName};
	__property bool StoreInForm = {read=FStoreInForm, write=FStoreInForm, default=1};
	__property System::UnicodeString Lang = {read=FLang, write=SetLang};
};


typedef void __fastcall (__closure *TTimerProc)(void);

__interface  INTERFACE_UUID("{856E938B-FF7B-4E13-85D4-3414A6A9FF2F}") IFMXTimerService  : public System::IInterface 
{
	virtual NativeUInt __fastcall CreateTimer(int Interval, TTimerProc TimerFunc) = 0 ;
	virtual bool __fastcall DestroyTimer(NativeUInt Timer) = 0 ;
	virtual double __fastcall GetTick() = 0 ;
};

class PASCALIMPLEMENTATION TTimer : public TFmxObject
{
	typedef TFmxObject inherited;
	
private:
	unsigned FInterval;
	NativeUInt FTimerHandle;
	System::Classes::TNotifyEvent FOnTimer;
	bool FEnabled;
	_di_IFMXTimerService FPlatformTimer;
	void __fastcall Timer();
	
protected:
	virtual void __fastcall SetEnabled(bool Value);
	virtual void __fastcall SetInterval(unsigned Value);
	virtual void __fastcall SetOnTimer(System::Classes::TNotifyEvent Value);
	virtual void __fastcall DoOnTimer();
	virtual void __fastcall UpdateTimer();
	virtual void __fastcall KillTimer();
	virtual void __fastcall Loaded();
	
public:
	__fastcall virtual TTimer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTimer();
	
__published:
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property unsigned Interval = {read=FInterval, write=SetInterval, default=1000};
	__property System::Classes::TNotifyEvent OnTimer = {read=FOnTimer, write=SetOnTimer};
};


typedef TLineMetric *PLineMetric;

struct DECLSPEC_DRECORD TLineMetric
{
public:
	int Index;
	int Len;
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TLineMetricInfo : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TLineMetric> _TLineMetricInfo__1;
	
	
protected:
	_TLineMetricInfo__1 FLineMetrics;
	virtual int __fastcall GetCount();
	virtual PLineMetric __fastcall GetMetrics(int Index);
	virtual void __fastcall SetCount(const int Value);
	
public:
	__fastcall TLineMetricInfo();
	__fastcall virtual ~TLineMetricInfo();
	virtual void __fastcall Clear();
	__property int Count = {read=GetCount, write=SetCount, nodefault};
	__property PLineMetric Metrics[int ind] = {read=GetMetrics};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum class DECLSPEC_DENUM TFreeChoiceHeuristic : unsigned int { BestAreaFit, BestShortSideFit, BestLongSideFit, WorstAreaFit, WorstShortSideFit, WorstLongSideFit };

enum class DECLSPEC_DENUM TSplitMethodHeuristic : unsigned int { ShorterLeftoverAxis, LongerLeftoverAxis, MinimizeArea, MaximizeArea, ShorterAxis, LongerAxis };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGuillotineBinPack : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Types::TPoint FSize;
	System::Generics::Collections::TList__1<System::Types::TRect>* FUsedRectangles;
	System::Generics::Collections::TList__1<System::Types::TRect>* FFreeRectangles;
	bool FSupportsRectangleInversion;
	int FUsedRectangleArea;
	int __fastcall ScoreByHeuristic(const System::Types::TPoint &NodeSize, const System::Types::TRect &FreeRect, const TFreeChoiceHeuristic Heuristic);
	void __fastcall FindPositionForNewNode(const System::Types::TPoint &NodeSize, const TFreeChoiceHeuristic Heuristic, /* out */ int &NodeIndex, /* out */ System::Types::TRect &NodeRect);
	void __fastcall SplitFreeRectAlongAxis(const System::Types::TRect &FreeRect, const System::Types::TRect &PlacedRect, const bool SplitHorizontal);
	void __fastcall SplitFreeRectByHeuristic(const System::Types::TRect &FreeRect, const System::Types::TRect &PlacedRect, const TSplitMethodHeuristic AMethod);
	float __fastcall GetOccupancy();
	
public:
	__fastcall TGuillotineBinPack()/* overload */;
	__fastcall TGuillotineBinPack(const System::Types::TPoint &ASize)/* overload */;
	__fastcall virtual ~TGuillotineBinPack();
	void __fastcall Init(const System::Types::TPoint &ASize);
	void __fastcall MergeFreeList();
	System::Types::TRect __fastcall Insert(const System::Types::TPoint &NodeSize, const bool Merge = true, const TFreeChoiceHeuristic FreeChoice = (TFreeChoiceHeuristic)(0x0), const TSplitMethodHeuristic SplitMethod = (TSplitMethodHeuristic)(0x2));
	__property System::Types::TPoint Size = {read=FSize};
	__property float Occupancy = {read=GetOccupancy};
	__property bool SupportsRectangleInversion = {read=FSupportsRectangleInversion, write=FSupportsRectangleInversion, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EGraphicsException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EGraphicsException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EGraphicsException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EGraphicsException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EGraphicsException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EGraphicsException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EGraphicsException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EGraphicsException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EGraphicsException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EGraphicsException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EGraphicsException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EGraphicsException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EGraphicsException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EGraphicsException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotDetermineDirect3DLevel : public EGraphicsException
{
	typedef EGraphicsException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotDetermineDirect3DLevel(const System::UnicodeString Msg) : EGraphicsException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotDetermineDirect3DLevel(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EGraphicsException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotDetermineDirect3DLevel(NativeUInt Ident)/* overload */ : EGraphicsException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotDetermineDirect3DLevel(System::PResStringRec ResStringRec)/* overload */ : EGraphicsException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotDetermineDirect3DLevel(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotDetermineDirect3DLevel(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotDetermineDirect3DLevel(const System::UnicodeString Msg, int AHelpContext) : EGraphicsException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotDetermineDirect3DLevel(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EGraphicsException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotDetermineDirect3DLevel(NativeUInt Ident, int AHelpContext)/* overload */ : EGraphicsException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotDetermineDirect3DLevel(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotDetermineDirect3DLevel(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotDetermineDirect3DLevel(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotDetermineDirect3DLevel() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCreateD3DDevice : public EGraphicsException
{
	typedef EGraphicsException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCreateD3DDevice(const System::UnicodeString Msg) : EGraphicsException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCreateD3DDevice(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EGraphicsException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateD3DDevice(NativeUInt Ident)/* overload */ : EGraphicsException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateD3DDevice(System::PResStringRec ResStringRec)/* overload */ : EGraphicsException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateD3DDevice(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateD3DDevice(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCreateD3DDevice(const System::UnicodeString Msg, int AHelpContext) : EGraphicsException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCreateD3DDevice(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EGraphicsException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateD3DDevice(NativeUInt Ident, int AHelpContext)/* overload */ : EGraphicsException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateD3DDevice(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateD3DDevice(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateD3DDevice(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCreateD3DDevice() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCreateD2DFactory : public EGraphicsException
{
	typedef EGraphicsException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCreateD2DFactory(const System::UnicodeString Msg) : EGraphicsException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCreateD2DFactory(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EGraphicsException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateD2DFactory(NativeUInt Ident)/* overload */ : EGraphicsException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateD2DFactory(System::PResStringRec ResStringRec)/* overload */ : EGraphicsException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateD2DFactory(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateD2DFactory(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCreateD2DFactory(const System::UnicodeString Msg, int AHelpContext) : EGraphicsException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCreateD2DFactory(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EGraphicsException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateD2DFactory(NativeUInt Ident, int AHelpContext)/* overload */ : EGraphicsException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateD2DFactory(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateD2DFactory(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateD2DFactory(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCreateD2DFactory() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCreateDWriteFactory : public EGraphicsException
{
	typedef EGraphicsException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCreateDWriteFactory(const System::UnicodeString Msg) : EGraphicsException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCreateDWriteFactory(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EGraphicsException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateDWriteFactory(NativeUInt Ident)/* overload */ : EGraphicsException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateDWriteFactory(System::PResStringRec ResStringRec)/* overload */ : EGraphicsException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateDWriteFactory(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateDWriteFactory(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCreateDWriteFactory(const System::UnicodeString Msg, int AHelpContext) : EGraphicsException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCreateDWriteFactory(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EGraphicsException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateDWriteFactory(NativeUInt Ident, int AHelpContext)/* overload */ : EGraphicsException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateDWriteFactory(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateDWriteFactory(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateDWriteFactory(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCreateDWriteFactory() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCreateWICImagingFactory : public EGraphicsException
{
	typedef EGraphicsException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCreateWICImagingFactory(const System::UnicodeString Msg) : EGraphicsException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCreateWICImagingFactory(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EGraphicsException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateWICImagingFactory(NativeUInt Ident)/* overload */ : EGraphicsException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateWICImagingFactory(System::PResStringRec ResStringRec)/* overload */ : EGraphicsException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateWICImagingFactory(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateWICImagingFactory(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCreateWICImagingFactory(const System::UnicodeString Msg, int AHelpContext) : EGraphicsException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCreateWICImagingFactory(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EGraphicsException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateWICImagingFactory(NativeUInt Ident, int AHelpContext)/* overload */ : EGraphicsException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateWICImagingFactory(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateWICImagingFactory(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateWICImagingFactory(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCreateWICImagingFactory() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCreateRenderTarget : public EGraphicsException
{
	typedef EGraphicsException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCreateRenderTarget(const System::UnicodeString Msg) : EGraphicsException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCreateRenderTarget(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EGraphicsException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateRenderTarget(NativeUInt Ident)/* overload */ : EGraphicsException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateRenderTarget(System::PResStringRec ResStringRec)/* overload */ : EGraphicsException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateRenderTarget(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateRenderTarget(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCreateRenderTarget(const System::UnicodeString Msg, int AHelpContext) : EGraphicsException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCreateRenderTarget(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EGraphicsException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateRenderTarget(NativeUInt Ident, int AHelpContext)/* overload */ : EGraphicsException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateRenderTarget(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateRenderTarget(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateRenderTarget(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCreateRenderTarget() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCreateTexture : public EGraphicsException
{
	typedef EGraphicsException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCreateTexture(const System::UnicodeString Msg) : EGraphicsException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCreateTexture(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EGraphicsException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateTexture(NativeUInt Ident)/* overload */ : EGraphicsException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateTexture(System::PResStringRec ResStringRec)/* overload */ : EGraphicsException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateTexture(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateTexture(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCreateTexture(const System::UnicodeString Msg, int AHelpContext) : EGraphicsException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCreateTexture(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EGraphicsException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateTexture(NativeUInt Ident, int AHelpContext)/* overload */ : EGraphicsException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateTexture(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateTexture(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateTexture(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCreateTexture() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCreateSwapChain : public EGraphicsException
{
	typedef EGraphicsException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCreateSwapChain(const System::UnicodeString Msg) : EGraphicsException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCreateSwapChain(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EGraphicsException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateSwapChain(NativeUInt Ident)/* overload */ : EGraphicsException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateSwapChain(System::PResStringRec ResStringRec)/* overload */ : EGraphicsException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateSwapChain(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateSwapChain(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCreateSwapChain(const System::UnicodeString Msg, int AHelpContext) : EGraphicsException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCreateSwapChain(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EGraphicsException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateSwapChain(NativeUInt Ident, int AHelpContext)/* overload */ : EGraphicsException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateSwapChain(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateSwapChain(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateSwapChain(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCreateSwapChain() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ERetrieveSurfaceContents : public EGraphicsException
{
	typedef EGraphicsException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ERetrieveSurfaceContents(const System::UnicodeString Msg) : EGraphicsException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ERetrieveSurfaceContents(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EGraphicsException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ERetrieveSurfaceContents(NativeUInt Ident)/* overload */ : EGraphicsException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ERetrieveSurfaceContents(System::PResStringRec ResStringRec)/* overload */ : EGraphicsException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ERetrieveSurfaceContents(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ERetrieveSurfaceContents(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ERetrieveSurfaceContents(const System::UnicodeString Msg, int AHelpContext) : EGraphicsException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ERetrieveSurfaceContents(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EGraphicsException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ERetrieveSurfaceContents(NativeUInt Ident, int AHelpContext)/* overload */ : EGraphicsException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ERetrieveSurfaceContents(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ERetrieveSurfaceContents(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ERetrieveSurfaceContents(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ERetrieveSurfaceContents() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCreateRenderTargetView : public EGraphicsException
{
	typedef EGraphicsException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCreateRenderTargetView(const System::UnicodeString Msg) : EGraphicsException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCreateRenderTargetView(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EGraphicsException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateRenderTargetView(NativeUInt Ident)/* overload */ : EGraphicsException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateRenderTargetView(System::PResStringRec ResStringRec)/* overload */ : EGraphicsException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateRenderTargetView(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateRenderTargetView(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCreateRenderTargetView(const System::UnicodeString Msg, int AHelpContext) : EGraphicsException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCreateRenderTargetView(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EGraphicsException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateRenderTargetView(NativeUInt Ident, int AHelpContext)/* overload */ : EGraphicsException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateRenderTargetView(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateRenderTargetView(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateRenderTargetView(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCreateRenderTargetView() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotResizeBuffers : public EGraphicsException
{
	typedef EGraphicsException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotResizeBuffers(const System::UnicodeString Msg) : EGraphicsException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotResizeBuffers(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EGraphicsException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotResizeBuffers(NativeUInt Ident)/* overload */ : EGraphicsException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotResizeBuffers(System::PResStringRec ResStringRec)/* overload */ : EGraphicsException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotResizeBuffers(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotResizeBuffers(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotResizeBuffers(const System::UnicodeString Msg, int AHelpContext) : EGraphicsException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotResizeBuffers(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EGraphicsException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotResizeBuffers(NativeUInt Ident, int AHelpContext)/* overload */ : EGraphicsException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotResizeBuffers(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotResizeBuffers(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotResizeBuffers(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EGraphicsException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotResizeBuffers() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EBitmapSizeTooBig : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EBitmapSizeTooBig(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EBitmapSizeTooBig(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EBitmapSizeTooBig(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EBitmapSizeTooBig(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EBitmapSizeTooBig(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EBitmapSizeTooBig(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EBitmapSizeTooBig(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EBitmapSizeTooBig(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EBitmapSizeTooBig(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EBitmapSizeTooBig(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EBitmapSizeTooBig(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EBitmapSizeTooBig(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EBitmapSizeTooBig() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EBitmapLoadingFailed : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EBitmapLoadingFailed(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EBitmapLoadingFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EBitmapLoadingFailed(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EBitmapLoadingFailed(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EBitmapLoadingFailed(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EBitmapLoadingFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EBitmapLoadingFailed(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EBitmapLoadingFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EBitmapLoadingFailed(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EBitmapLoadingFailed(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EBitmapLoadingFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EBitmapLoadingFailed(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EBitmapLoadingFailed() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EThumbnailLoadingFailed : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EThumbnailLoadingFailed(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EThumbnailLoadingFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EThumbnailLoadingFailed(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EThumbnailLoadingFailed(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EThumbnailLoadingFailed(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EThumbnailLoadingFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EThumbnailLoadingFailed(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EThumbnailLoadingFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EThumbnailLoadingFailed(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EThumbnailLoadingFailed(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EThumbnailLoadingFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EThumbnailLoadingFailed(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EThumbnailLoadingFailed() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EBitmapSavingFailed : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EBitmapSavingFailed(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EBitmapSavingFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EBitmapSavingFailed(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EBitmapSavingFailed(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EBitmapSavingFailed(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EBitmapSavingFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EBitmapSavingFailed(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EBitmapSavingFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EBitmapSavingFailed(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EBitmapSavingFailed(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EBitmapSavingFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EBitmapSavingFailed(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EBitmapSavingFailed() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EBitmapFormatUnsupported : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EBitmapFormatUnsupported(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EBitmapFormatUnsupported(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EBitmapFormatUnsupported(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EBitmapFormatUnsupported(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EBitmapFormatUnsupported(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EBitmapFormatUnsupported(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EBitmapFormatUnsupported(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EBitmapFormatUnsupported(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EBitmapFormatUnsupported(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EBitmapFormatUnsupported(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EBitmapFormatUnsupported(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EBitmapFormatUnsupported(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EBitmapFormatUnsupported() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EBitmapIncorrectSize : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EBitmapIncorrectSize(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EBitmapIncorrectSize(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EBitmapIncorrectSize(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EBitmapIncorrectSize(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EBitmapIncorrectSize(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EBitmapIncorrectSize(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EBitmapIncorrectSize(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EBitmapIncorrectSize(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EBitmapIncorrectSize(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EBitmapIncorrectSize(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EBitmapIncorrectSize(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EBitmapIncorrectSize(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EBitmapIncorrectSize() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ERetrieveSurfaceDescription : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ERetrieveSurfaceDescription(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ERetrieveSurfaceDescription(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ERetrieveSurfaceDescription(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ERetrieveSurfaceDescription(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ERetrieveSurfaceDescription(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ERetrieveSurfaceDescription(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ERetrieveSurfaceDescription(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ERetrieveSurfaceDescription(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ERetrieveSurfaceDescription(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ERetrieveSurfaceDescription(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ERetrieveSurfaceDescription(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ERetrieveSurfaceDescription(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ERetrieveSurfaceDescription() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EAcquireBitmapAccess : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAcquireBitmapAccess(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAcquireBitmapAccess(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAcquireBitmapAccess(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAcquireBitmapAccess(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAcquireBitmapAccess(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAcquireBitmapAccess(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAcquireBitmapAccess(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAcquireBitmapAccess(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAcquireBitmapAccess(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAcquireBitmapAccess(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAcquireBitmapAccess(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAcquireBitmapAccess(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAcquireBitmapAccess() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EVideoCaptureFault : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVideoCaptureFault(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVideoCaptureFault(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVideoCaptureFault(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVideoCaptureFault(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVideoCaptureFault(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVideoCaptureFault(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVideoCaptureFault(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVideoCaptureFault(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVideoCaptureFault(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVideoCaptureFault(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVideoCaptureFault(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVideoCaptureFault(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVideoCaptureFault() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EInvalidCallingConditions : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvalidCallingConditions(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvalidCallingConditions(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidCallingConditions(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidCallingConditions(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidCallingConditions(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidCallingConditions(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidCallingConditions(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidCallingConditions(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidCallingConditions(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidCallingConditions(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidCallingConditions(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidCallingConditions(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidCallingConditions() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EInvalidRenderingConditions : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvalidRenderingConditions(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvalidRenderingConditions(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidRenderingConditions(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidRenderingConditions(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidRenderingConditions(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidRenderingConditions(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidRenderingConditions(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidRenderingConditions(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidRenderingConditions(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidRenderingConditions(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidRenderingConditions(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidRenderingConditions(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidRenderingConditions() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ETextureSizeTooSmall : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ETextureSizeTooSmall(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ETextureSizeTooSmall(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ETextureSizeTooSmall(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ETextureSizeTooSmall(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ETextureSizeTooSmall(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ETextureSizeTooSmall(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ETextureSizeTooSmall(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ETextureSizeTooSmall(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETextureSizeTooSmall(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETextureSizeTooSmall(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETextureSizeTooSmall(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETextureSizeTooSmall(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ETextureSizeTooSmall() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotAcquireBitmapAccess : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotAcquireBitmapAccess(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotAcquireBitmapAccess(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotAcquireBitmapAccess(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotAcquireBitmapAccess(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotAcquireBitmapAccess(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotAcquireBitmapAccess(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotAcquireBitmapAccess(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotAcquireBitmapAccess(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotAcquireBitmapAccess(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotAcquireBitmapAccess(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotAcquireBitmapAccess(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotAcquireBitmapAccess(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotAcquireBitmapAccess() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotFindSuitablePixelFormat : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotFindSuitablePixelFormat(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotFindSuitablePixelFormat(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotFindSuitablePixelFormat(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotFindSuitablePixelFormat(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotFindSuitablePixelFormat(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotFindSuitablePixelFormat(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotFindSuitablePixelFormat(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotFindSuitablePixelFormat(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotFindSuitablePixelFormat(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotFindSuitablePixelFormat(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotFindSuitablePixelFormat(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotFindSuitablePixelFormat(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotFindSuitablePixelFormat() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotFindShader : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotFindShader(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotFindShader(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotFindShader(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotFindShader(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotFindShader(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotFindShader(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotFindShader(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotFindShader(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotFindShader(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotFindShader(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotFindShader(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotFindShader(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotFindShader() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCreateDirect3D : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCreateDirect3D(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCreateDirect3D(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateDirect3D(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateDirect3D(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateDirect3D(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateDirect3D(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCreateDirect3D(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCreateDirect3D(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateDirect3D(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateDirect3D(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateDirect3D(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateDirect3D(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCreateDirect3D() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotAcquireDXGIFactory : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotAcquireDXGIFactory(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotAcquireDXGIFactory(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotAcquireDXGIFactory(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotAcquireDXGIFactory(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotAcquireDXGIFactory(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotAcquireDXGIFactory(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotAcquireDXGIFactory(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotAcquireDXGIFactory(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotAcquireDXGIFactory(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotAcquireDXGIFactory(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotAcquireDXGIFactory(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotAcquireDXGIFactory(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotAcquireDXGIFactory() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotAssociateWindowHandle : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotAssociateWindowHandle(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotAssociateWindowHandle(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotAssociateWindowHandle(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotAssociateWindowHandle(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotAssociateWindowHandle(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotAssociateWindowHandle(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotAssociateWindowHandle(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotAssociateWindowHandle(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotAssociateWindowHandle(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotAssociateWindowHandle(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotAssociateWindowHandle(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotAssociateWindowHandle(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotAssociateWindowHandle() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotRetrieveDisplayMode : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotRetrieveDisplayMode(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotRetrieveDisplayMode(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotRetrieveDisplayMode(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotRetrieveDisplayMode(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotRetrieveDisplayMode(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotRetrieveDisplayMode(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotRetrieveDisplayMode(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotRetrieveDisplayMode(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotRetrieveDisplayMode(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotRetrieveDisplayMode(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotRetrieveDisplayMode(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotRetrieveDisplayMode(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotRetrieveDisplayMode() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotRetrieveBufferDesc : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotRetrieveBufferDesc(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotRetrieveBufferDesc(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotRetrieveBufferDesc(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotRetrieveBufferDesc(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotRetrieveBufferDesc(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotRetrieveBufferDesc(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotRetrieveBufferDesc(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotRetrieveBufferDesc(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotRetrieveBufferDesc(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotRetrieveBufferDesc(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotRetrieveBufferDesc(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotRetrieveBufferDesc(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotRetrieveBufferDesc() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCreateSamplerState : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCreateSamplerState(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCreateSamplerState(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateSamplerState(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateSamplerState(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateSamplerState(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateSamplerState(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCreateSamplerState(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCreateSamplerState(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateSamplerState(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateSamplerState(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateSamplerState(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateSamplerState(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCreateSamplerState() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotRetrieveSurface : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotRetrieveSurface(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotRetrieveSurface(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotRetrieveSurface(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotRetrieveSurface(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotRetrieveSurface(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotRetrieveSurface(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotRetrieveSurface(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotRetrieveSurface(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotRetrieveSurface(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotRetrieveSurface(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotRetrieveSurface(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotRetrieveSurface(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotRetrieveSurface() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotUploadTexture : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotUploadTexture(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotUploadTexture(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotUploadTexture(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotUploadTexture(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotUploadTexture(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotUploadTexture(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotUploadTexture(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotUploadTexture(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotUploadTexture(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotUploadTexture(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotUploadTexture(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotUploadTexture(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotUploadTexture() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotActivateTexture : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotActivateTexture(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotActivateTexture(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotActivateTexture(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotActivateTexture(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotActivateTexture(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotActivateTexture(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotActivateTexture(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotActivateTexture(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotActivateTexture(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotActivateTexture(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotActivateTexture(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotActivateTexture(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotActivateTexture() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotAcquireTextureAccess : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotAcquireTextureAccess(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotAcquireTextureAccess(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotAcquireTextureAccess(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotAcquireTextureAccess(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotAcquireTextureAccess(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotAcquireTextureAccess(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotAcquireTextureAccess(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotAcquireTextureAccess(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotAcquireTextureAccess(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotAcquireTextureAccess(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotAcquireTextureAccess(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotAcquireTextureAccess(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotAcquireTextureAccess() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCopyTextureResource : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCopyTextureResource(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCopyTextureResource(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCopyTextureResource(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCopyTextureResource(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCopyTextureResource(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCopyTextureResource(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCopyTextureResource(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCopyTextureResource(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCopyTextureResource(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCopyTextureResource(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCopyTextureResource(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCopyTextureResource(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCopyTextureResource() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotActivateFrameBuffers : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotActivateFrameBuffers(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotActivateFrameBuffers(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotActivateFrameBuffers(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotActivateFrameBuffers(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotActivateFrameBuffers(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotActivateFrameBuffers(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotActivateFrameBuffers(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotActivateFrameBuffers(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotActivateFrameBuffers(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotActivateFrameBuffers(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotActivateFrameBuffers(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotActivateFrameBuffers(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotActivateFrameBuffers() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCreateRenderBuffers : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCreateRenderBuffers(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCreateRenderBuffers(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateRenderBuffers(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateRenderBuffers(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateRenderBuffers(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateRenderBuffers(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCreateRenderBuffers(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCreateRenderBuffers(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateRenderBuffers(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateRenderBuffers(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateRenderBuffers(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateRenderBuffers(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCreateRenderBuffers() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotRetrieveRenderBuffers : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotRetrieveRenderBuffers(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotRetrieveRenderBuffers(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotRetrieveRenderBuffers(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotRetrieveRenderBuffers(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotRetrieveRenderBuffers(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotRetrieveRenderBuffers(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotRetrieveRenderBuffers(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotRetrieveRenderBuffers(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotRetrieveRenderBuffers(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotRetrieveRenderBuffers(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotRetrieveRenderBuffers(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotRetrieveRenderBuffers(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotRetrieveRenderBuffers() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotActivateRenderBuffers : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotActivateRenderBuffers(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotActivateRenderBuffers(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotActivateRenderBuffers(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotActivateRenderBuffers(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotActivateRenderBuffers(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotActivateRenderBuffers(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotActivateRenderBuffers(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotActivateRenderBuffers(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotActivateRenderBuffers(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotActivateRenderBuffers(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotActivateRenderBuffers(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotActivateRenderBuffers(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotActivateRenderBuffers() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotBeginRenderingScene : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotBeginRenderingScene(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotBeginRenderingScene(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotBeginRenderingScene(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotBeginRenderingScene(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotBeginRenderingScene(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotBeginRenderingScene(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotBeginRenderingScene(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotBeginRenderingScene(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotBeginRenderingScene(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotBeginRenderingScene(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotBeginRenderingScene(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotBeginRenderingScene(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotBeginRenderingScene() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotSyncDeviceBuffers : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotSyncDeviceBuffers(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotSyncDeviceBuffers(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotSyncDeviceBuffers(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotSyncDeviceBuffers(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotSyncDeviceBuffers(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotSyncDeviceBuffers(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotSyncDeviceBuffers(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotSyncDeviceBuffers(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotSyncDeviceBuffers(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotSyncDeviceBuffers(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotSyncDeviceBuffers(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotSyncDeviceBuffers(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotSyncDeviceBuffers() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotUploadDeviceBuffers : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotUploadDeviceBuffers(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotUploadDeviceBuffers(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotUploadDeviceBuffers(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotUploadDeviceBuffers(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotUploadDeviceBuffers(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotUploadDeviceBuffers(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotUploadDeviceBuffers(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotUploadDeviceBuffers(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotUploadDeviceBuffers(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotUploadDeviceBuffers(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotUploadDeviceBuffers(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotUploadDeviceBuffers(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotUploadDeviceBuffers() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCreateDepthStencil : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCreateDepthStencil(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCreateDepthStencil(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateDepthStencil(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateDepthStencil(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateDepthStencil(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateDepthStencil(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCreateDepthStencil(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCreateDepthStencil(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateDepthStencil(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateDepthStencil(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateDepthStencil(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateDepthStencil(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCreateDepthStencil() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotRetrieveDepthStencil : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotRetrieveDepthStencil(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotRetrieveDepthStencil(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotRetrieveDepthStencil(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotRetrieveDepthStencil(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotRetrieveDepthStencil(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotRetrieveDepthStencil(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotRetrieveDepthStencil(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotRetrieveDepthStencil(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotRetrieveDepthStencil(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotRetrieveDepthStencil(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotRetrieveDepthStencil(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotRetrieveDepthStencil(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotRetrieveDepthStencil() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotActivateDepthStencil : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotActivateDepthStencil(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotActivateDepthStencil(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotActivateDepthStencil(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotActivateDepthStencil(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotActivateDepthStencil(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotActivateDepthStencil(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotActivateDepthStencil(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotActivateDepthStencil(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotActivateDepthStencil(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotActivateDepthStencil(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotActivateDepthStencil(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotActivateDepthStencil(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotActivateDepthStencil() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotResizeSwapChain : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotResizeSwapChain(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotResizeSwapChain(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotResizeSwapChain(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotResizeSwapChain(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotResizeSwapChain(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotResizeSwapChain(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotResizeSwapChain(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotResizeSwapChain(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotResizeSwapChain(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotResizeSwapChain(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotResizeSwapChain(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotResizeSwapChain(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotResizeSwapChain() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotActivateSwapChain : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotActivateSwapChain(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotActivateSwapChain(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotActivateSwapChain(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotActivateSwapChain(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotActivateSwapChain(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotActivateSwapChain(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotActivateSwapChain(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotActivateSwapChain(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotActivateSwapChain(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotActivateSwapChain(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotActivateSwapChain(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotActivateSwapChain(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotActivateSwapChain() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCreateVertexShader : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCreateVertexShader(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCreateVertexShader(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateVertexShader(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateVertexShader(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateVertexShader(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateVertexShader(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCreateVertexShader(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCreateVertexShader(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateVertexShader(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateVertexShader(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateVertexShader(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateVertexShader(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCreateVertexShader() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCreatePixelShader : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCreatePixelShader(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCreatePixelShader(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreatePixelShader(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreatePixelShader(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreatePixelShader(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreatePixelShader(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCreatePixelShader(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCreatePixelShader(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreatePixelShader(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreatePixelShader(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreatePixelShader(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreatePixelShader(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCreatePixelShader() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCreateVertexLayout : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCreateVertexLayout(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCreateVertexLayout(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateVertexLayout(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateVertexLayout(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateVertexLayout(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateVertexLayout(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCreateVertexLayout(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCreateVertexLayout(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateVertexLayout(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateVertexLayout(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateVertexLayout(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateVertexLayout(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCreateVertexLayout() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCreateVertexDeclaration : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCreateVertexDeclaration(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCreateVertexDeclaration(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateVertexDeclaration(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateVertexDeclaration(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateVertexDeclaration(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateVertexDeclaration(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCreateVertexDeclaration(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCreateVertexDeclaration(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateVertexDeclaration(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateVertexDeclaration(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateVertexDeclaration(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateVertexDeclaration(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCreateVertexDeclaration() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCreateVertexBuffer : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCreateVertexBuffer(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCreateVertexBuffer(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateVertexBuffer(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateVertexBuffer(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateVertexBuffer(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateVertexBuffer(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCreateVertexBuffer(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCreateVertexBuffer(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateVertexBuffer(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateVertexBuffer(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateVertexBuffer(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateVertexBuffer(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCreateVertexBuffer() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCreateIndexBuffer : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCreateIndexBuffer(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCreateIndexBuffer(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateIndexBuffer(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateIndexBuffer(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateIndexBuffer(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateIndexBuffer(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCreateIndexBuffer(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCreateIndexBuffer(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateIndexBuffer(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateIndexBuffer(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateIndexBuffer(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateIndexBuffer(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCreateIndexBuffer() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EShaderCompilationError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EShaderCompilationError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EShaderCompilationError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EShaderCompilationError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EShaderCompilationError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EShaderCompilationError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EShaderCompilationError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EShaderCompilationError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EShaderCompilationError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EShaderCompilationError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EShaderCompilationError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EShaderCompilationError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EShaderCompilationError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EShaderCompilationError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EProgramCompilationError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EProgramCompilationError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EProgramCompilationError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EProgramCompilationError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EProgramCompilationError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EProgramCompilationError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EProgramCompilationError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EProgramCompilationError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EProgramCompilationError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EProgramCompilationError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EProgramCompilationError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EProgramCompilationError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EProgramCompilationError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EProgramCompilationError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotFindShaderVariable : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotFindShaderVariable(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotFindShaderVariable(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotFindShaderVariable(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotFindShaderVariable(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotFindShaderVariable(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotFindShaderVariable(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotFindShaderVariable(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotFindShaderVariable(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotFindShaderVariable(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotFindShaderVariable(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotFindShaderVariable(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotFindShaderVariable(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotFindShaderVariable() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotActivateShaderProgram : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotActivateShaderProgram(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotActivateShaderProgram(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotActivateShaderProgram(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotActivateShaderProgram(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotActivateShaderProgram(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotActivateShaderProgram(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotActivateShaderProgram(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotActivateShaderProgram(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotActivateShaderProgram(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotActivateShaderProgram(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotActivateShaderProgram(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotActivateShaderProgram(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotActivateShaderProgram() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotCreateOpenGLContext : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotCreateOpenGLContext(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotCreateOpenGLContext(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateOpenGLContext(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotCreateOpenGLContext(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateOpenGLContext(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotCreateOpenGLContext(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotCreateOpenGLContext(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotCreateOpenGLContext(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateOpenGLContext(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotCreateOpenGLContext(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateOpenGLContext(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotCreateOpenGLContext(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotCreateOpenGLContext() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotUpdateOpenGLContext : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotUpdateOpenGLContext(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotUpdateOpenGLContext(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotUpdateOpenGLContext(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotUpdateOpenGLContext(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotUpdateOpenGLContext(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotUpdateOpenGLContext(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotUpdateOpenGLContext(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotUpdateOpenGLContext(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotUpdateOpenGLContext(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotUpdateOpenGLContext(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotUpdateOpenGLContext(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotUpdateOpenGLContext(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotUpdateOpenGLContext() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECannotDrawMeshObject : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotDrawMeshObject(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotDrawMeshObject(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotDrawMeshObject(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotDrawMeshObject(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotDrawMeshObject(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotDrawMeshObject(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotDrawMeshObject(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotDrawMeshObject(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotDrawMeshObject(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotDrawMeshObject(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotDrawMeshObject(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotDrawMeshObject(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotDrawMeshObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EFeatureNotSupported : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EFeatureNotSupported(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EFeatureNotSupported(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EFeatureNotSupported(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EFeatureNotSupported(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EFeatureNotSupported(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EFeatureNotSupported(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EFeatureNotSupported(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EFeatureNotSupported(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFeatureNotSupported(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFeatureNotSupported(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFeatureNotSupported(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFeatureNotSupported(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EFeatureNotSupported() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EErrorCompressingStream : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EErrorCompressingStream(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EErrorCompressingStream(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EErrorCompressingStream(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EErrorCompressingStream(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EErrorCompressingStream(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EErrorCompressingStream(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EErrorCompressingStream(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EErrorCompressingStream(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EErrorCompressingStream(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EErrorCompressingStream(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EErrorCompressingStream(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EErrorCompressingStream(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EErrorCompressingStream() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EErrorDecompressingStream : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EErrorDecompressingStream(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EErrorDecompressingStream(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EErrorDecompressingStream(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EErrorDecompressingStream(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EErrorDecompressingStream(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EErrorDecompressingStream(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EErrorDecompressingStream(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EErrorDecompressingStream(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EErrorDecompressingStream(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EErrorDecompressingStream(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EErrorDecompressingStream(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EErrorDecompressingStream(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EErrorDecompressingStream() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EErrorUnpackingShaderCode : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EErrorUnpackingShaderCode(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EErrorUnpackingShaderCode(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EErrorUnpackingShaderCode(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EErrorUnpackingShaderCode(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EErrorUnpackingShaderCode(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EErrorUnpackingShaderCode(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EErrorUnpackingShaderCode(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EErrorUnpackingShaderCode(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EErrorUnpackingShaderCode(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EErrorUnpackingShaderCode(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EErrorUnpackingShaderCode(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EErrorUnpackingShaderCode(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EErrorUnpackingShaderCode() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{B0B03758-A2F5-49B9-9A39-C2C2405B2EAD}") IPersistentProvider  : public System::IInterface 
{
	virtual System::Classes::TPersistent* __fastcall GetPersistent() = 0 ;
};

__interface  INTERFACE_UUID("{B6F815C7-BFD1-489D-A661-0CD4639EC920}") IPersistentShim  : public System::IInterface 
{
	virtual System::Types::TRect __fastcall GetBoundsRect() = 0 ;
};

__interface  INTERFACE_UUID("{4A731994-9060-4F3C-92D7-C123B04601D4}") IDesignablePersistent  : public System::IInterface 
{
	virtual System::Classes::TPersistent* __fastcall GetDesignParent() = 0 ;
	virtual System::Types::TRect __fastcall GetBoundsRect() = 0 ;
	virtual void __fastcall Bind(_di_IPersistentShim AShim) = 0 ;
	virtual void __fastcall Unbind() = 0 ;
	virtual bool __fastcall BeingDesigned() = 0 ;
};

__interface  INTERFACE_UUID("{A86F9221-09E9-40A7-AF0E-5C3EB859C297}") IMovablePersistent  : public System::IInterface 
{
	virtual void __fastcall SetBoundsRect(const System::Types::TRect &AValue) = 0 ;
};

__interface  INTERFACE_UUID("{0F1D325A-8082-4DEA-8ABF-56A359A218A4}") ISpriggedPersistent  : public System::IInterface 
{
	virtual void __fastcall SetSprig(System::Classes::TPersistent* const APersistent) = 0 ;
	virtual System::Classes::TPersistent* __fastcall GetSprig() = 0 ;
};

typedef TFmxObject* __fastcall (__closure *TCustomFindStyleResource)(const System::UnicodeString AStyleLookup, const bool Clone/* = false*/);

typedef System::UnicodeString __fastcall (*TCustomTranslateProc)(const System::UnicodeString AText);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION Log : public System::TObject
{
	typedef System::TObject inherited;
	
	
public:
	__interface DELPHIINTERFACE TToStringFunc;
	typedef System::DelphiInterface<TToStringFunc> _di_TToStringFunc;
	__interface TToStringFunc  : public System::IInterface 
	{
		virtual System::UnicodeString __fastcall Invoke(System::TObject* const AObject) = 0 ;
	};
	
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	struct DECLSPEC_DRECORD TLogMark
	{
	public:
		System::UnicodeString Msg;
		System::TDateTime Time;
	};
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
	class DELPHICLASS TLogToken;
	class PASCALIMPLEMENTATION TLogToken : public System::TObject
	{
		typedef System::TObject inherited;
		
	private:
		System::Generics::Collections::TList__1<Log::TLogMark>* FMarks;
		Log::TLogMark __fastcall GetMarkAt(const int Index);
		int __fastcall GetCount();
		
	protected:
		__fastcall TLogToken();
		
	public:
		void __fastcall Mark(const System::UnicodeString Msg);
		__property Log::TLogMark MarkAt[const int Index] = {read=GetMarkAt};
		__property int Count = {read=GetCount, nodefault};
	public:
		/* TObject.Destroy */ inline __fastcall virtual ~TLogToken() { }
		
	};
	
	
	
private:
	static System::_di_IInterface FLogger;
	static System::_di_IInterface __fastcall GetLogger();
	
protected:
	/* static */ __property System::_di_IInterface Logger = {read=GetLogger};
	
public:
	__classmethod void __fastcall d(const System::UnicodeString Fmt, const System::TVarRec *Args, const int Args_High)/* overload */;
	__classmethod void __fastcall d(const System::UnicodeString Msg)/* overload */;
	__classmethod void __fastcall d(const System::UnicodeString Tag, System::TObject* const Instance, const System::UnicodeString Method, const System::UnicodeString Msg)/* overload */;
	__classmethod void __fastcall d(const System::UnicodeString Tag, System::TObject* const Instance, const System::UnicodeString Msg)/* overload */;
	__classmethod void __fastcall TimeStamp(const System::UnicodeString Msg)/* overload */;
	template<typename TResult> __classmethod TResult __fastcall Trace(const System::UnicodeString Tag, const System::DelphiInterface<System::Sysutils::TFunc__2<TLogToken*,TResult> > Func, const int Threshold = 0xffffffff)/* overload */;
	template<typename TResult> __classmethod TResult __fastcall Trace(const System::UnicodeString Tag, const System::DelphiInterface<System::Sysutils::TFunc__1<TResult> > Func, const int Threshold = 0xffffffff)/* overload */;
	__classmethod void __fastcall Trace(const System::UnicodeString Tag, const System::DelphiInterface<System::Sysutils::TProc__1<TLogToken*> > Proc, const int Threshold = 0xffffffff)/* overload */;
	__classmethod void __fastcall Trace(const System::UnicodeString Tag, const System::Sysutils::_di_TProc Proc, const int Threshold = 0xffffffff)/* overload */;
	__classmethod System::UnicodeString __fastcall ObjToString(System::TObject* const Instance);
	__classmethod System::UnicodeString __fastcall ArrayToString(System::Generics::Collections::TEnumerable__1<TFmxObject*>* const AArray, const _di_TToStringFunc MakeStr)/* overload */;
	__classmethod System::UnicodeString __fastcall ArrayToString(System::Generics::Collections::TEnumerable__1<TFmxObject*>* const AArray)/* overload */;
	__classmethod void __fastcall DumpFmxObject(TFmxObject* const AObject, const int Nest = 0x0);
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
public:
	/* TObject.Create */ inline __fastcall Log() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~Log() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename F, typename T> class PASCALIMPLEMENTATION TEnumerableFilter__2 : public System::Generics::Collections::TEnumerable__1<T>
{
	typedef System::Generics::Collections::TEnumerable__1<T> inherited;
	
	
public:
	class DELPHICLASS TFilterEnumerator;
	// Template declaration generated by Delphi parameterized types is
	// used only for accessing Delphi variables and fields.
	// Don't instantiate with new type parameters in user code.
	class PASCALIMPLEMENTATION TFilterEnumerator : public System::Generics::Collections::TEnumerator__1<T>
	{
		typedef System::Generics::Collections::TEnumerator__1<T> inherited;
		
	private:
		TEnumerableFilter__2<F,T>* FCleanup;
		System::Generics::Collections::TEnumerator__1<F>* FRawEnumerator;
		T FCurrent;
		System::DelphiInterface<System::Sysutils::TPredicate__1<T> > FPredicate;
		T __fastcall GetCurrent();
		
	protected:
		virtual T __fastcall DoGetCurrent();
		virtual bool __fastcall DoMoveNext();
		
	public:
		__fastcall TFilterEnumerator(System::Generics::Collections::TEnumerable__1<F>* const Enumerable, TEnumerableFilter__2<F,T>* const Cleanup, const System::DelphiInterface<System::Sysutils::TPredicate__1<T> > Pred);
		__fastcall virtual ~TFilterEnumerator();
		__property T Current = {read=GetCurrent};
		HIDESBASE bool __fastcall MoveNext();
	};
	
	
	
private:
	System::Generics::Collections::TEnumerable__1<F>* FBaseEnum;
	bool FSelfDestruct;
	System::DelphiInterface<System::Sysutils::TPredicate__1<T> > FPredicate;
	
protected:
	virtual System::Generics::Collections::TEnumerator__1<T>* __fastcall DoGetEnumerator();
	
public:
	__fastcall TEnumerableFilter__2(System::Generics::Collections::TEnumerable__1<F>* const FullEnum, bool SelfDestruct, const System::DelphiInterface<System::Sysutils::TPredicate__1<T> > Pred);
	__classmethod TEnumerableFilter__2<F,T>* __fastcall Filter(System::Generics::Collections::TEnumerable__1<F>* const Src, const System::DelphiInterface<System::Sysutils::TPredicate__1<T> > Predicate = (System::DelphiInterface<System::Sysutils::TPredicate__1<T> >)(0x0));
public:
	/* {System_Generics_Collections}TEnumerable<FMX_Types_TEnumerableFilter<F,T>_T>.Destroy */ inline __fastcall virtual ~TEnumerableFilter__2() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TIdleMessage : public System::Messaging::TMessageBase
{
	typedef System::Messaging::TMessageBase inherited;
	
public:
	/* TObject.Create */ inline __fastcall TIdleMessage() : System::Messaging::TMessageBase() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIdleMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TDisplay
{
public:
	NativeUInt Id;
	int Index;
	bool Primary;
	System::Types::TRectF Bounds;
	System::Types::TRect PhysicalBounds;
	System::Types::TRectF Workarea;
	System::Types::TRect PhysicalWorkarea;
	float Scale;
	System::Types::TRectF __fastcall BoundsRect();
	System::Types::TRectF __fastcall WorkareaRect();
	__fastcall TDisplay(const int AIndex, const bool APrimary, const System::Types::TRectF &ABounds, const System::Types::TRectF &AWorkArea);
	TDisplay() {}
};


typedef void __fastcall (*TShowVirtualKeyboard)(const bool Displayed, TCustomCaret* const Caret, TVirtualKeyboardStates &VirtualKeyboardState);

enum class DECLSPEC_DENUM TKeyKind : unsigned int { Usual, Functional, Unknown };

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool GlobalUseHWEffects _DEPRECATED_ATTRIBUTE0 ;
extern DELPHI_PACKAGE bool GlobalDisableFocusEffect;
extern DELPHI_PACKAGE bool GlobalUseDX;
extern DELPHI_PACKAGE bool GlobalUseDXInDX9Mode;
extern DELPHI_PACKAGE bool GlobalUseDXSoftware;
extern DELPHI_PACKAGE bool GlobalUseDirect2D;
extern DELPHI_PACKAGE bool GlobalUseGDIPlusClearType;
extern DELPHI_PACKAGE System::Math::TRoundToRange DigitRoundSize;
extern DELPHI_PACKAGE bool GlobalUseGPUCanvas;
extern DELPHI_PACKAGE bool GlobalUseMetal;
extern DELPHI_PACKAGE bool GlobalEventDrivenDisplayUpdates;
extern DELPHI_PACKAGE int GlobalPreferredFramesPerSecond;
extern DELPHI_PACKAGE bool GlobalUseDX10 _DEPRECATED_ATTRIBUTE1("Use GlobalUseDX.") ;
extern DELPHI_PACKAGE bool GlobalUseDX10Software _DEPRECATED_ATTRIBUTE1("Use GlobalUseDXSoftware.") ;
extern DELPHI_PACKAGE TVKAutoShowMode VKAutoShowMode;
extern DELPHI_PACKAGE System::StaticArray<int, 24> PixelFormatBytes;
extern DELPHI_PACKAGE System::Types::TRectF NullRect;
extern DELPHI_PACKAGE TCorners AllCorners;
extern DELPHI_PACKAGE TSides AllSides;
extern DELPHI_PACKAGE System::Types::TPointF ClosePolygon _DEPRECATED_ATTRIBUTE1("Non-closed polygons are not supported.") ;
extern DELPHI_PACKAGE System::Types::TPointF PolygonPointBreak;
extern DELPHI_PACKAGE TStyledSettings AllStyledSettings;
extern DELPHI_PACKAGE TStyledSettings DefaultStyledSettings;
extern DELPHI_PACKAGE System::Types::TSizeF InvalidSize;
extern DELPHI_PACKAGE System::StaticArray<TTextAlign, 3> AlignmentToTTextAlign;
extern DELPHI_PACKAGE NativeUInt cIdNoTimer;
extern DELPHI_PACKAGE TCustomTranslateProc CustomTranslateProc;
extern DELPHI_PACKAGE System::StaticArray<System::Uitypes::TAnchors, 20> AnchorAlign;
extern DELPHI_PACKAGE System::Rtti::TRttiContext SharedContext;
extern DELPHI_PACKAGE System::Generics::Collections::TDictionary__2<System::UnicodeString,System::Generics::Collections::TList__1<System::Rtti::TRttiProperty*>*>* ClonePropertiesCache;
extern DELPHI_PACKAGE bool __fastcall IsHandleValid(NativeUInt Hnd);
extern DELPHI_PACKAGE void __fastcall DisposeOfAndNil(void *AObject);
extern DELPHI_PACKAGE void __fastcall RegisterFmxClasses(System::Classes::TPersistentClass const *RegClasses, const int RegClasses_High, System::Classes::TPersistentClass const *GroupClasses, const int GroupClasses_High)/* overload */;
extern DELPHI_PACKAGE void __fastcall RegisterFmxClasses(System::Classes::TPersistentClass const *RegClasses, const int RegClasses_High)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall DelAmp(const System::UnicodeString AText);
extern DELPHI_PACKAGE TPixelFormat __fastcall FindClosestPixelFormat(TPixelFormat Format, System::Generics::Collections::TList__1<TPixelFormat>* const FormatList);
extern DELPHI_PACKAGE System::Uitypes::TAlphaColorF __fastcall PixelToFloat4(void * Input, TPixelFormat InputFormat);
extern DELPHI_PACKAGE void __fastcall Float4ToPixel(const System::Uitypes::TAlphaColorF &Input, void * Output, TPixelFormat OutputFormat);
extern DELPHI_PACKAGE System::Uitypes::TAlphaColor __fastcall PixelToAlphaColor(void * Input, TPixelFormat InputFormat);
extern DELPHI_PACKAGE void __fastcall AlphaColorToPixel(System::Uitypes::TAlphaColor Input, void * Output, TPixelFormat OutputFormat);
extern DELPHI_PACKAGE void __fastcall ChangePixelFormat(const void * AInput, const void * AOutput, const int APixelCount, const TPixelFormat AInputFormat, const TPixelFormat AOutputFormat);
extern DELPHI_PACKAGE void __fastcall ScanlineToAlphaColor(void * Input, System::Uitypes::PAlphaColor Output, int PixelCount, TPixelFormat InputFormat);
extern DELPHI_PACKAGE void __fastcall AlphaColorToScanline(System::Uitypes::PAlphaColor Input, void * Output, int PixelCount, TPixelFormat OutputFormat);
extern DELPHI_PACKAGE System::UnicodeString __fastcall PixelFormatToString(TPixelFormat Format);
extern DELPHI_PACKAGE void __fastcall AddCustomFindStyleResource(const TCustomFindStyleResource ACustomProc);
extern DELPHI_PACKAGE void __fastcall RemoveCustomFindStyleResource(const TCustomFindStyleResource ACustomProc);
extern DELPHI_PACKAGE void __fastcall AddResource(TFmxObject* const AObject);
extern DELPHI_PACKAGE void __fastcall RemoveResource(TFmxObject* const AObject);
extern DELPHI_PACKAGE TFmxObject* __fastcall FindStyleResource(const System::UnicodeString AStyleLookup, const bool Clone = false);
extern DELPHI_PACKAGE void __fastcall CollectLangStart(void);
extern DELPHI_PACKAGE void __fastcall CollectLangFinish(void);
extern DELPHI_PACKAGE System::Classes::TStrings* __fastcall CollectLangStrings(void);
extern DELPHI_PACKAGE void __fastcall LoadLangFromFile(const System::UnicodeString AFileName);
extern DELPHI_PACKAGE void __fastcall LoadLangFromStrings(System::Classes::TStrings* const AStr);
extern DELPHI_PACKAGE void __fastcall ResetLang(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall Translate(const System::UnicodeString AText);
extern DELPHI_PACKAGE System::UnicodeString __fastcall TranslateText(const System::UnicodeString AText);
extern DELPHI_PACKAGE void __fastcall ArrangeControl(const _di_IAlignableObject Control, TAlignLayout AAlign, const float AParentWidth, const float AParentHeight, const float ALastWidth, const float ALastHeight, System::Types::TRectF &R);
extern DELPHI_PACKAGE void __fastcall AlignObjects(TFmxObject* const AParent, TBounds* APadding, float AParentWidth, float AParentHeight, float &ALastWidth, float &ALastHeight, bool &ADisableAlign);
extern DELPHI_PACKAGE TCornersF __fastcall CornersF(const System::Types::TPointF &Pt1, const System::Types::TPointF &Pt2, const System::Types::TPointF &Pt3, const System::Types::TPointF &Pt4)/* overload */;
extern DELPHI_PACKAGE TCornersF __fastcall CornersF(float Left, float Top, float Width, float Height)/* overload */;
extern DELPHI_PACKAGE TCornersF __fastcall CornersF(const System::Types::TRectF &Rect)/* overload */;
extern DELPHI_PACKAGE TCornersF __fastcall CornersF(const System::Types::TRect &Rect)/* overload */;
extern DELPHI_PACKAGE void __fastcall RecalcAnchorRules(TFmxObject* const Parent, System::Uitypes::TAnchors Anchors, const System::Types::TRectF &BoundsRect, System::Types::TPointF &AOriginalParentSize, System::Types::TPointF &AAnchorOrigin, System::Types::TPointF &AAnchorRules);
extern DELPHI_PACKAGE void __fastcall RecalcControlOriginalParentSize(TFmxObject* const Parent, System::Classes::TComponentState ComponentState, const bool Anchoring, System::Types::TPointF &AOriginalParentSize);
extern DELPHI_PACKAGE void __fastcall RegisterShowVKProc(const TShowVirtualKeyboard ShowVirtualKeyboard);
extern DELPHI_PACKAGE void __fastcall RegisterFlasherClass(const TFmxObjectClass FlasherClass, const TCaretClass CaretClass);
extern DELPHI_PACKAGE TFmxObjectClass __fastcall FlasherClass(const TCaretClass CaretClass);
extern DELPHI_PACKAGE bool __fastcall AssignedFlasher(const TCaretClass CaretClass);
extern DELPHI_PACKAGE TFmxObject* __fastcall Flasher(const TCaretClass CaretClass);
}	/* namespace Types */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_TYPES)
using namespace Fmx::Types;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_TypesHPP
