// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.ListView.Types.pas' rev: 35.00 (Windows)

#ifndef Fmx_Listview_TypesHPP
#define Fmx_Listview_TypesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.SysUtils.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.hpp>
#include <FMX.TextLayout.hpp>
#include <System.Math.Vectors.hpp>
#include <System.Rtti.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Graphics.hpp>
#include <FMX.ActnList.hpp>
#include <FMX.Styles.Objects.hpp>
#include <FMX.ImgList.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Listview
{
namespace Types
{
//-- forward type declarations -----------------------------------------------
struct TListItemPurposeHelper /* Helper for enum 'TListItemPurpose' */;
class DELPHICLASS TListItemDrawable;
class DELPHICLASS TListItemObject;
class DELPHICLASS TListItemText;
class DELPHICLASS TListItemDummy;
class DELPHICLASS TListItemImage;
class DELPHICLASS TListItemControlScene;
class DELPHICLASS TListItemControlContainer;
class DELPHICLASS TListItemEmbeddedControl;
class DELPHICLASS TListItemSimpleControl;
class DELPHICLASS TListItemAccessory;
class DELPHICLASS TListItemGlyphButton;
class DELPHICLASS TListItemTextButton;
class DELPHICLASS TListItemView;
class DELPHICLASS TListItemObjects;
class DELPHICLASS TListItem;
class DELPHICLASS TListItemStyleResources;
__interface DELPHIINTERFACE IListItemStyleResources;
typedef System::DelphiInterface<IListItemStyleResources> _di_IListItemStyleResources;
__interface DELPHIINTERFACE IListViewController;
typedef System::DelphiInterface<IListViewController> _di_IListViewController;
__interface DELPHIINTERFACE IListViewPresentation;
typedef System::DelphiInterface<IListViewPresentation> _di_IListViewPresentation;
__interface DELPHIINTERFACE IListViewCustomPresentationParent;
typedef System::DelphiInterface<IListViewCustomPresentationParent> _di_IListViewCustomPresentationParent;
__interface DELPHIINTERFACE IListViewPresentationParent;
typedef System::DelphiInterface<IListViewPresentationParent> _di_IListViewPresentationParent;
__interface DELPHIINTERFACE IListViewDesignPresentationParent;
typedef System::DelphiInterface<IListViewDesignPresentationParent> _di_IListViewDesignPresentationParent;
__interface DELPHIINTERFACE IListViewDrawableShim;
typedef System::DelphiInterface<IListViewDrawableShim> _di_IListViewDrawableShim;
__interface DELPHIINTERFACE IListViewAdapter;
typedef System::DelphiInterface<IListViewAdapter> _di_IListViewAdapter;
__interface DELPHIINTERFACE IListViewEditor;
typedef System::DelphiInterface<IListViewEditor> _di_IListViewEditor;
__interface DELPHIINTERFACE IListViewCheckProvider;
typedef System::DelphiInterface<IListViewCheckProvider> _di_IListViewCheckProvider;
__interface DELPHIINTERFACE IListViewTextProvider;
typedef System::DelphiInterface<IListViewTextProvider> _di_IListViewTextProvider;
__interface DELPHIINTERFACE IListViewTextButtonProvider;
typedef System::DelphiInterface<IListViewTextButtonProvider> _di_IListViewTextButtonProvider;
__interface DELPHIINTERFACE IListViewGlyphButtonProvider;
typedef System::DelphiInterface<IListViewGlyphButtonProvider> _di_IListViewGlyphButtonProvider;
__interface DELPHIINTERFACE IListViewExtrasProvider;
typedef System::DelphiInterface<IListViewExtrasProvider> _di_IListViewExtrasProvider;
__interface DELPHIINTERFACE IListViewFilterable;
typedef System::DelphiInterface<IListViewFilterable> _di_IListViewFilterable;
//-- type declarations -------------------------------------------------------
enum class DECLSPEC_DENUM TListItemAlign : unsigned char { Leading, Center, Trailing };

enum class DECLSPEC_DENUM TListItemPurpose : unsigned char { None, Header, Footer };

typedef System::Set<TListItemPurpose, _DELPHI_SET_ENUMERATOR(TListItemPurpose::None), _DELPHI_SET_ENUMERATOR(TListItemPurpose::Footer)> TListItemPurposes;

enum class DECLSPEC_DENUM TListItemDrawState : unsigned char { Selected, Deleting, EditMode };

typedef System::Set<TListItemDrawState, _DELPHI_SET_ENUMERATOR(TListItemDrawState::Selected), _DELPHI_SET_ENUMERATOR(TListItemDrawState::EditMode)> TListItemDrawStates;

enum class DECLSPEC_DENUM TListItemCallbackOp : unsigned char { CreateDrawables, InvalidateOwner, Click };

typedef System::DelphiInterface<System::Sysutils::TProc__3<TListItemView*,TListItemDrawable*,TListItemCallbackOp> > TListItemCallback;

class PASCALIMPLEMENTATION TListItemDrawable : public System::Classes::TInterfacedPersistent
{
	typedef System::Classes::TInterfacedPersistent inherited;
	
	
public:
	struct DECLSPEC_DRECORD TParams
	{
	public:
		float AbsoluteOpacity;
		float ItemSelectedAlpha;
		float DeletingUnwantedOpacity;
		float EditModeTransitionAlpha;
		System::Types::TRectF ParentAbsoluteRect;
		Fmx::Imglist::TCustomImageList* Images;
	};
	
	
	
protected:
	enum class DECLSPEC_DENUM TStyleResource : unsigned char { FontSize, FontFamily, FontStyle, TextColor, SelectedTextColor, TextShadowColor, PressedTextColor };
	
	typedef System::Set<TStyleResource, _DELPHI_SET_ENUMERATOR(TStyleResource::FontSize), _DELPHI_SET_ENUMERATOR(TStyleResource::PressedTextColor)> TStyleResources;
	
	
private:
	Fmx::Types::TPosition* FPlaceOffsetX;
	
protected:
	static System::Set<TStyleResource, _DELPHI_SET_ENUMERATOR(TStyleResource::FontSize), _DELPHI_SET_ENUMERATOR(TStyleResource::PressedTextColor)> TextResources;
	
private:
	TListItemAlign FAlign;
	TListItemAlign FVertAlign;
	bool FVisible;
	float FWidth;
	float FHeight;
	float FOpacity;
	int FUpdating;
	bool NeedRepaint;
	System::Classes::TNotifyEvent FOnSelect;
	System::UnicodeString FName;
	System::TObject* FTagObject;
	float FTagFloat;
	System::UnicodeString FTagString;
	System::Types::TRectF FLocalRect;
	TStyleResources FStyleValuesNeedUpdate;
	_di_IListViewController FController;
	System::DelphiInterface<System::Sysutils::TProc__3<TListItemView*,TListItemDrawable*,TListItemCallbackOp> > FCallback;
	void __fastcall SetOneDimension(const int Index, const float Value);
	void __fastcall SetSize(const System::Types::TPointF &Value);
	System::Types::TPointF __fastcall GetSize();
	void __fastcall SetOpacity(const float Value);
	void __fastcall SetAlign(const TListItemAlign Value);
	void __fastcall SetVertAlign(const TListItemAlign Value);
	void __fastcall SetVisible(const bool Value);
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	Fmx::Types::TPosition* __fastcall GetPlaceOffset();
	virtual void __fastcall SetInvalidateCallback(const System::DelphiInterface<System::Sysutils::TProc__3<TListItemView*,TListItemDrawable*,TListItemCallbackOp> > Callback);
	void __fastcall PlaceOffsetChanged(System::TObject* Sender);
	
protected:
	virtual void __fastcall DoResize();
	virtual void __fastcall DoOpacityChange();
	virtual void __fastcall DoSelect();
	virtual void __fastcall DoPlaceOffsetChanged();
	virtual void __fastcall DoAlignChanged();
	virtual Fmx::Controls::TControl* __fastcall ObjectAtPoint(const System::Types::TPointF &Point);
	virtual bool __fastcall MouseDown(const System::Uitypes::TMouseButton Button, const System::Classes::TShiftState Shift, const System::Types::TPointF &MousePos);
	virtual void __fastcall MouseMove(const System::Classes::TShiftState Shift, const System::Types::TPointF &MousePos);
	virtual void __fastcall MouseUp(const System::Uitypes::TMouseButton Button, const System::Classes::TShiftState Shift, const System::Types::TPointF &MousePos);
	virtual void __fastcall DoUpdateValuesFromResources(TListItemStyleResources* const Resources, const TListItemPurpose Purpose);
	
public:
	__fastcall virtual TListItemDrawable(TListItem* const AOwner);
	__fastcall virtual ~TListItemDrawable();
	virtual System::UnicodeString __fastcall ToString();
	virtual int __fastcall GetRenderPassCount();
	virtual void __fastcall CalculateLocalRect(const System::Types::TRectF &DestRect, const float SceneScale, const TListItemDrawStates DrawStates, TListItem* const Item);
	bool __fastcall InLocalRect(const System::Types::TPointF &Point);
	void __fastcall Invalidate();
	virtual void __fastcall Render(Fmx::Graphics::TCanvas* const Canvas, const int DrawItemIndex, const TListItemDrawStates DrawStates, TListItemStyleResources* const Resources, const TParams &Params, const int SubPassNo = 0x0) = 0 ;
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	void __fastcall UpdateValuesFromResources(TListItemStyleResources* const Resources, const TListItemPurpose Purpose);
	void __fastcall UpdateValuesFromStyle();
	__property float Width = {read=FWidth, write=SetOneDimension, index=0};
	__property float Height = {read=FHeight, write=SetOneDimension, index=1};
	__property System::Types::TPointF Size = {read=GetSize, write=SetSize};
	__property TListItemAlign Align = {read=FAlign, write=SetAlign, nodefault};
	__property TListItemAlign VertAlign = {read=FVertAlign, write=SetVertAlign, nodefault};
	__property bool Visible = {read=FVisible, write=SetVisible, nodefault};
	__property Fmx::Types::TPosition* PlaceOffset = {read=GetPlaceOffset};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property float Opacity = {read=FOpacity, write=SetOpacity};
	__property System::Types::TRectF LocalRect = {read=FLocalRect};
	__property System::Classes::TNotifyEvent OnSelect = {read=FOnSelect, write=FOnSelect};
	__property System::Rtti::TValue Data = {read=GetData, write=SetData};
	__property System::TObject* TagObject = {read=FTagObject, write=FTagObject};
	__property float TagFloat = {read=FTagFloat, write=FTagFloat};
	__property System::UnicodeString TagString = {read=FTagString, write=FTagString};
	__property System::DelphiInterface<System::Sysutils::TProc__3<TListItemView*,TListItemDrawable*,TListItemCallbackOp> > InvalidateCallback = {write=SetInvalidateCallback};
};


class PASCALIMPLEMENTATION TListItemObject : public TListItemDrawable
{
	typedef TListItemDrawable inherited;
	
public:
	/* TListItemDrawable.Create */ inline __fastcall virtual TListItemObject(TListItem* const AOwner) : TListItemDrawable(AOwner) { }
	/* TListItemDrawable.Destroy */ inline __fastcall virtual ~TListItemObject() { }
	
};


class PASCALIMPLEMENTATION TListItemText : public TListItemDrawable
{
	typedef TListItemDrawable inherited;
	
	
private:
	struct DECLSPEC_DRECORD TFontSettings
	{
	public:
		System::UnicodeString Family;
		float Size;
		System::Uitypes::TFontStyles Style;
	};
	
	
	
private:
	#define TListItemText_DefaultFontFamily L"Helvetica"
	
	static const System::Int8 DefaultFontSize = System::Int8(0xe);
	
	static System::Types::TPointF ShadowOffset;
	
private:
	Fmx::Graphics::TFont* FFontX;
	TFontSettings FFontSettings;
	
private:
	Fmx::Textlayout::TTextLayout* FTextLayout;
	System::UnicodeString FText;
	Fmx::Types::TTextAlign FTextAlign;
	Fmx::Types::TTextAlign FTextVertAlign;
	bool FWordWrap;
	bool LayoutChanged;
	System::Uitypes::TAlphaColor FTextColor;
	System::Uitypes::TAlphaColor FSelectedTextColor;
	Fmx::Types::TTextTrimming FTrimming;
	Fmx::Types::TPosition* FTextShadowOffsetX;
	System::Uitypes::TAlphaColor FTextShadowColor;
	bool FIsDetailText;
	void __fastcall FontChanged(System::TObject* Sender);
	void __fastcall TextShadowOffsetChanged(System::TObject* Sender);
	void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetTextAlign(const Fmx::Types::TTextAlign Value);
	void __fastcall SetTextVertAlign(const Fmx::Types::TTextAlign Value);
	void __fastcall SetWordWrap(const bool Value);
	void __fastcall SetTextColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetTrimming(const Fmx::Types::TTextTrimming Value);
	void __fastcall SetSelectedTextColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetTextShadowColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetIsDetailText(const bool Value);
	virtual void __fastcall SetData(const System::Rtti::TValue &AValue);
	virtual System::Rtti::TValue __fastcall GetData();
	Fmx::Types::TPosition* __fastcall GetShadowOffset();
	Fmx::Graphics::TFont* __fastcall GetFont();
	TFontSettings __fastcall FontSettingsSnapshot();
	
protected:
	virtual void __fastcall DoResize();
	virtual void __fastcall DoUpdateValuesFromResources(TListItemStyleResources* const Resources, const TListItemPurpose Purpose);
	
public:
	__fastcall virtual TListItemText(TListItem* const AOwner);
	__fastcall virtual ~TListItemText();
	virtual void __fastcall CalculateLocalRect(const System::Types::TRectF &DestRect, const float SceneScale, const TListItemDrawStates DrawStates, TListItem* const Item);
	virtual void __fastcall Render(Fmx::Graphics::TCanvas* const Canvas, const int DrawItemIndex, const TListItemDrawStates DrawStates, TListItemStyleResources* const Resources, const TListItemDrawable::TParams &Params, const int SubPassNo = 0x0);
	__property Fmx::Graphics::TFont* Font = {read=GetFont};
	__property System::UnicodeString Text = {read=FText, write=SetText};
	__property Fmx::Types::TTextAlign TextAlign = {read=FTextAlign, write=SetTextAlign, nodefault};
	__property Fmx::Types::TTextAlign TextVertAlign = {read=FTextVertAlign, write=SetTextVertAlign, nodefault};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, nodefault};
	__property System::Uitypes::TAlphaColor TextColor = {read=FTextColor, write=SetTextColor, nodefault};
	__property System::Uitypes::TAlphaColor SelectedTextColor = {read=FSelectedTextColor, write=SetSelectedTextColor, nodefault};
	__property System::Uitypes::TAlphaColor TextShadowColor = {read=FTextShadowColor, write=SetTextShadowColor, nodefault};
	__property Fmx::Types::TPosition* TextShadowOffset = {read=GetShadowOffset};
	__property Fmx::Types::TTextTrimming Trimming = {read=FTrimming, write=SetTrimming, nodefault};
	__property bool IsDetailText = {read=FIsDetailText, write=SetIsDetailText, nodefault};
};


class PASCALIMPLEMENTATION TListItemDummy : public TListItemDrawable
{
	typedef TListItemDrawable inherited;
	
public:
	virtual void __fastcall Render(Fmx::Graphics::TCanvas* const Canvas, const int DrawItemIndex, const TListItemDrawStates DrawStates, TListItemStyleResources* const Resources, const TListItemDrawable::TParams &Params, const int SubPassNo = 0x0);
public:
	/* TListItemDrawable.Create */ inline __fastcall virtual TListItemDummy(TListItem* const AOwner) : TListItemDrawable(AOwner) { }
	/* TListItemDrawable.Destroy */ inline __fastcall virtual ~TListItemDummy() { }
	
};


enum class DECLSPEC_DENUM TImageScalingMode : unsigned char { StretchWithAspect, Original, Stretch };

class PASCALIMPLEMENTATION TListItemImage : public TListItemDrawable
{
	typedef TListItemDrawable inherited;
	
	
public:
	enum class DECLSPEC_DENUM TImageSource : unsigned char { None, Bitmap, ImageList };
	
	
private:
	Fmx::Graphics::TBitmap* FStaticBitmap;
	Fmx::Graphics::TBitmap* FReferBitmap;
	System::Types::TRectF FSrcRect;
	bool FOwnsBitmap;
	TImageScalingMode FImageScalingMode;
	System::Uitypes::TImageIndex FImageIndex;
	TImageSource FImageSource;
	Fmx::Graphics::TBitmap* __fastcall GetBitmap();
	void __fastcall SetBitmap(Fmx::Graphics::TBitmap* const Value);
	void __fastcall SetOwnsBitmap(const bool Value);
	void __fastcall SetSrcRect(const System::Types::TRectF &Value);
	void __fastcall SetImageScalingMode(const TImageScalingMode Value);
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	TImageSource __fastcall GetImageSource();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	
public:
	__fastcall virtual TListItemImage(TListItem* const AOwner);
	__fastcall virtual ~TListItemImage();
	virtual void __fastcall CalculateLocalRect(const System::Types::TRectF &DestRect, const float SceneScale, const TListItemDrawStates DrawStates, TListItem* const Item);
	virtual void __fastcall Render(Fmx::Graphics::TCanvas* const Canvas, const int DrawItemIndex, const TListItemDrawStates DrawStates, TListItemStyleResources* const Resources, const TListItemDrawable::TParams &Params, const int SubPassNo = 0x0);
	__property Fmx::Graphics::TBitmap* Bitmap = {read=GetBitmap, write=SetBitmap};
	__property bool OwnsBitmap = {read=FOwnsBitmap, write=SetOwnsBitmap, nodefault};
	void __fastcall FitInto(Fmx::Graphics::TBitmap* const Bitmap, System::Types::TRectF &InputRect, System::Types::TRectF &DestinationRect);
	__property System::Types::TRectF SrcRect = {read=FSrcRect, write=SetSrcRect};
	__property TImageScalingMode ScalingMode = {read=FImageScalingMode, write=SetImageScalingMode, default=0};
	__property TImageSource ImageSource = {read=GetImageSource, nodefault};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
};


class PASCALIMPLEMENTATION TListItemControlScene : public Fmx::Types::TFmxObject
{
	typedef Fmx::Types::TFmxObject inherited;
	
private:
	Fmx::Graphics::TCanvas* FCanvas;
	Fmx::Controls::TControl* FContainer;
	TListItem* FOwnerItem;
	bool FDrawing;
	int FDisableUpdating;
	
private:
	System::Types::TPoint FLayoutSize;
	Fmx::Controls::_di_IScene __fastcall GetRealScene();
	
protected:
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	Fmx::Controls::TStyleBook* __fastcall GetStyleBook();
	void __fastcall SetStyleBook(Fmx::Controls::TStyleBook* const Value);
	Fmx::Graphics::TCanvas* __fastcall GetCanvas();
	float __fastcall GetSceneScale();
	Fmx::Types::TFmxObject* __fastcall GetObject();
	void __fastcall AddUpdateRect(const System::Types::TRectF &R);
	int __fastcall GetUpdateRectsCount();
	System::Types::TRectF __fastcall GetUpdateRect(const int Index);
	System::Types::TPointF __fastcall LocalToScreen(const System::Types::TPointF &P);
	System::Types::TPointF __fastcall ScreenToLocal(const System::Types::TPointF &P);
	void __fastcall ChangeScrollingState(Fmx::Controls::TControl* const AControl, const bool Active);
	void __fastcall DisableUpdating();
	void __fastcall EnableUpdating();
	void __fastcall SetOwnerItem(TListItem* const Item);
	void __fastcall SetContainer(Fmx::Controls::TControl* const Container);
	__property Fmx::Controls::_di_IScene RealScene = {read=GetRealScene};
	
public:
	__fastcall virtual TListItemControlScene(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TListItemControlScene();
	void __fastcall RepaintScene(Fmx::Graphics::TCanvas* const Canvas);
	__property Fmx::Controls::TControl* Container = {read=FContainer};
private:
	void *__IScene;	// Fmx::Controls::IScene 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {16DB110E-DA7D-4E75-BC2D-999FA12E45F5}
	operator Fmx::Controls::_di_IScene()
	{
		Fmx::Controls::_di_IScene intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Controls::IScene*(void) { return (Fmx::Controls::IScene*)&__IScene; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {BA1AE6C6-FCF7-43E2-92AA-2869FF203309}
	operator Fmx::Controls::_di_IStyleBookOwner()
	{
		Fmx::Controls::_di_IStyleBookOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Controls::IStyleBookOwner*(void) { return (Fmx::Controls::IStyleBookOwner*)&__IScene; }
	#endif
	
};


class PASCALIMPLEMENTATION TListItemControlContainer : public Fmx::Controls::TControl
{
	typedef Fmx::Controls::TControl inherited;
	
private:
	TListItemEmbeddedControl* FItemOwner;
	
public:
	__fastcall virtual TListItemControlContainer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TListItemControlContainer();
};


class PASCALIMPLEMENTATION TListItemEmbeddedControl : public TListItemDrawable
{
	typedef TListItemDrawable inherited;
	
private:
	TListItemControlScene* FScene;
	TListItemControlContainer* FContainer;
	
protected:
	virtual Fmx::Controls::TControl* __fastcall ObjectAtPoint(const System::Types::TPointF &Point);
	
public:
	__fastcall virtual TListItemEmbeddedControl(TListItem* const AOwner);
	__fastcall virtual ~TListItemEmbeddedControl();
	virtual void __fastcall Render(Fmx::Graphics::TCanvas* const Canvas, const int DrawItemIndex, const TListItemDrawStates DrawStates, TListItemStyleResources* const Resources, const TListItemDrawable::TParams &Params, const int SubPassNo = 0x0);
	__property TListItemControlContainer* Container = {read=FContainer};
};


class PASCALIMPLEMENTATION TListItemSimpleControl : public TListItemDrawable
{
	typedef TListItemDrawable inherited;
	
private:
	#define TListItemSimpleControl_DisabledOpacity  (6.000000E-01)
	
	bool FEnabled;
	bool FPressed;
	bool FMouseOver;
	float FTouchExpand;
	void __fastcall SetEnabled(const bool Value);
	
protected:
	virtual bool __fastcall IsClickOpaque();
	virtual bool __fastcall MouseDown(const System::Uitypes::TMouseButton Button, const System::Classes::TShiftState Shift, const System::Types::TPointF &MousePos);
	virtual void __fastcall MouseMove(const System::Classes::TShiftState Shift, const System::Types::TPointF &MousePos);
	virtual void __fastcall MouseUp(const System::Uitypes::TMouseButton Button, const System::Classes::TShiftState Shift, const System::Types::TPointF &MousePos);
	virtual void __fastcall DoClick();
	virtual void __fastcall DoEnabledChange();
	
public:
	__fastcall virtual TListItemSimpleControl(TListItem* const AOwner);
	bool __fastcall PointInLocalRect(const System::Types::TPointF &Pos);
	void __fastcall Click();
	__property bool Enabled = {read=FEnabled, write=SetEnabled, nodefault};
	__property bool Pressed = {read=FPressed, nodefault};
	__property bool MouseOver = {read=FMouseOver, nodefault};
	__property float TouchExpand = {read=FTouchExpand, write=FTouchExpand};
public:
	/* TListItemDrawable.Destroy */ inline __fastcall virtual ~TListItemSimpleControl() { }
	
};


enum class DECLSPEC_DENUM TAccessoryType : unsigned char { More, Checkmark, Detail };

class PASCALIMPLEMENTATION TListItemAccessory : public TListItemDrawable
{
	typedef TListItemDrawable inherited;
	
private:
	TAccessoryType FAccessoryType;
	
protected:
	void __fastcall SetAccessoryType(TAccessoryType Value);
	
public:
	__fastcall virtual TListItemAccessory(TListItem* const AOwner);
	virtual void __fastcall CalculateLocalRect(const System::Types::TRectF &DestRect, const float SceneScale, const TListItemDrawStates DrawStates, TListItem* const Item);
	virtual void __fastcall Render(Fmx::Graphics::TCanvas* const Canvas, const int DrawItemIndex, const TListItemDrawStates DrawStates, TListItemStyleResources* const Resources, const TListItemDrawable::TParams &Params, const int SubPassNo = 0x0);
	__property TAccessoryType AccessoryType = {read=FAccessoryType, write=SetAccessoryType, nodefault};
public:
	/* TListItemDrawable.Destroy */ inline __fastcall virtual ~TListItemAccessory() { }
	
};


enum class DECLSPEC_DENUM TGlyphButtonType : unsigned char { Add, Delete, Checkbox };

class PASCALIMPLEMENTATION TListItemGlyphButton : public TListItemSimpleControl
{
	typedef TListItemSimpleControl inherited;
	
private:
	static const System::Int8 CheckedAnimationFrameRate = System::Int8(0x3c);
	
	#define TListItemGlyphButton_CheckedAnimationDuration  (1.500000E-01)
	
	TGlyphButtonType FButtonType;
	bool FClickOnSelect;
	bool FChecked;
	bool FTransitionEnabled;
	float FTransitionAlpha;
	Fmx::Types::TTimer* FTransitionTimer;
	double FTransitionStartTicks;
	Fmx::Types::_di_IFMXTimerService FTimerService;
	void __fastcall SetButtonType(const TGlyphButtonType Value);
	void __fastcall SetChecked(const bool Value);
	void __fastcall InitCheckedTransition();
	void __fastcall ResetCheckedTransition();
	void __fastcall TransitionTimerNotify(System::TObject* Sender);
	
protected:
	virtual void __fastcall DoSelect();
	virtual void __fastcall DoClick();
	virtual bool __fastcall MouseDown(const System::Uitypes::TMouseButton Button, const System::Classes::TShiftState Shift, const System::Types::TPointF &MousePos);
	virtual void __fastcall SetData(const System::Rtti::TValue &AValue);
	
public:
	__fastcall virtual TListItemGlyphButton(TListItem* const AOwner);
	__fastcall virtual ~TListItemGlyphButton();
	virtual void __fastcall CalculateLocalRect(const System::Types::TRectF &DestRect, const float SceneScale, const TListItemDrawStates DrawStates, TListItem* const Item);
	virtual void __fastcall Render(Fmx::Graphics::TCanvas* const Canvas, const int DrawItemIndex, const TListItemDrawStates DrawStates, TListItemStyleResources* const Resources, const TListItemDrawable::TParams &Params, const int SubPassNo = 0x0);
	__property TGlyphButtonType ButtonType = {read=FButtonType, write=SetButtonType, nodefault};
	__property bool ClickOnSelect = {read=FClickOnSelect, write=FClickOnSelect, nodefault};
	__property bool Checked = {read=FChecked, write=SetChecked, nodefault};
};


enum class DECLSPEC_DENUM TTextButtonType : unsigned char { Normal, Delete };

class PASCALIMPLEMENTATION TListItemTextButton : public TListItemSimpleControl
{
	typedef TListItemSimpleControl inherited;
	
private:
	TListItemText* FTextDrawable;
	TTextButtonType FButtonType;
	System::Uitypes::TAlphaColor FTintColor;
	System::Uitypes::TAlphaColor FPressedTextColor;
	System::Uitypes::TAlphaColor FTextColor;
	Fmx::Graphics::TFont* __fastcall GetFont();
	System::UnicodeString __fastcall GetText();
	void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetTextAlign(const Fmx::Types::TTextAlign Value);
	Fmx::Types::TTextAlign __fastcall GetTextAlign();
	void __fastcall SetTextVertAlign(const Fmx::Types::TTextAlign Value);
	Fmx::Types::TTextAlign __fastcall GetTextVertAlign();
	void __fastcall SetWordWrap(const bool Value);
	bool __fastcall GetWordWrap();
	void __fastcall SetTextColor(const System::Uitypes::TAlphaColor Value);
	System::Uitypes::TAlphaColor __fastcall GetTextColor();
	void __fastcall SetTrimming(const Fmx::Types::TTextTrimming Value);
	Fmx::Types::TTextTrimming __fastcall GetTrimming();
	void __fastcall SetTextShadowColor(const System::Uitypes::TAlphaColor Value);
	System::Uitypes::TAlphaColor __fastcall GetTextShadowColor();
	void __fastcall SetPressedTextColor(const System::Uitypes::TAlphaColor Value);
	Fmx::Types::TPosition* __fastcall GetTextShadowOffset();
	void __fastcall SetButtonType(const TTextButtonType Value);
	void __fastcall SetTintColor(const System::Uitypes::TAlphaColor Value);
	virtual void __fastcall SetInvalidateCallback(const System::DelphiInterface<System::Sysutils::TProc__3<TListItemView*,TListItemDrawable*,TListItemCallbackOp> > Callback);
	
protected:
	virtual bool __fastcall IsClickOpaque();
	virtual void __fastcall DoResize();
	virtual void __fastcall DoOpacityChange();
	virtual void __fastcall DoPlaceOffsetChanged();
	virtual void __fastcall DoAlignChanged();
	virtual void __fastcall SetData(const System::Rtti::TValue &AValue);
	
public:
	__fastcall virtual TListItemTextButton(TListItem* const AOwner);
	__fastcall virtual ~TListItemTextButton();
	virtual void __fastcall DoUpdateValuesFromResources(TListItemStyleResources* const Resources, const TListItemPurpose Purpose);
	virtual int __fastcall GetRenderPassCount();
	virtual void __fastcall CalculateLocalRect(const System::Types::TRectF &DestRect, const float SceneScale, const TListItemDrawStates DrawStates, TListItem* const Item);
	virtual void __fastcall Render(Fmx::Graphics::TCanvas* const Canvas, const int DrawItemIndex, const TListItemDrawStates DrawStates, TListItemStyleResources* const Resources, const TListItemDrawable::TParams &Params, const int SubPassNo = 0x0);
	__property TTextButtonType ButtonType = {read=FButtonType, write=SetButtonType, nodefault};
	__property System::Uitypes::TAlphaColor TintColor = {read=FTintColor, write=SetTintColor, nodefault};
	__property Fmx::Graphics::TFont* Font = {read=GetFont};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property Fmx::Types::TTextAlign TextAlign = {read=GetTextAlign, write=SetTextAlign, nodefault};
	__property Fmx::Types::TTextAlign TextVertAlign = {read=GetTextVertAlign, write=SetTextVertAlign, nodefault};
	__property bool WordWrap = {read=GetWordWrap, write=SetWordWrap, nodefault};
	__property System::Uitypes::TAlphaColor TextColor = {read=GetTextColor, write=SetTextColor, nodefault};
	__property System::Uitypes::TAlphaColor PressedTextColor = {read=FPressedTextColor, write=SetPressedTextColor, nodefault};
	__property System::Uitypes::TAlphaColor TextShadowColor = {read=GetTextShadowColor, write=SetTextShadowColor, nodefault};
	__property Fmx::Types::TPosition* TextShadowOffset = {read=GetTextShadowOffset};
	__property Fmx::Types::TTextTrimming Trimming = {read=GetTrimming, write=SetTrimming, nodefault};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListItemView : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::Generics::Collections::TObjectList__1<TListItemDrawable*>* TViewList;
	
	
public:
	TListItemDrawable* operator[](const int Index) { return this->Drawables[Index]; }
	
private:
	System::DelphiInterface<System::Sysutils::TProc__3<TListItemView*,TListItemDrawable*,TListItemCallbackOp> > FCallback;
	System::Generics::Collections::TObjectList__1<TListItemDrawable*>* FViewList;
	bool FInitialized;
	int __fastcall GetCount();
	TListItemDrawable* __fastcall GetObject(const int Index);
	System::Generics::Collections::TObjectList__1<TListItemDrawable*>* __fastcall GetViewList();
	
protected:
	void __fastcall Include(TListItemDrawable* const AItem);
	void __fastcall Exclude(TListItemDrawable* const AItem);
	bool __fastcall GetInitialized();
	void __fastcall SetInitialized(const bool Value);
	
public:
	__fastcall TListItemView(TListItem* const AOwner);
	__fastcall virtual ~TListItemView();
	int __fastcall Add(TListItemDrawable* const AItem);
	void __fastcall Insert(const int Index, TListItemDrawable* const Value);
	virtual void __fastcall Clear();
	void __fastcall Delete(int Index);
	TListItemDrawable* __fastcall FindDrawable(const System::UnicodeString AName);
	TListItemDrawable* __fastcall FindObject _DEPRECATED_ATTRIBUTE1("Use FindDrawable") (const System::UnicodeString AName);
	TListItemDrawable* __fastcall DrawableByName(const System::UnicodeString AName);
	TListItemDrawable* __fastcall ObjectByName _DEPRECATED_ATTRIBUTE1("Use DrawableByName") (const System::UnicodeString AName);
	__property int Count = {read=GetCount, nodefault};
	__property TListItemDrawable* Drawables[const int Index] = {read=GetObject/*, default*/};
	__property System::Generics::Collections::TObjectList__1<TListItemDrawable*>* ViewList = {read=GetViewList};
	__property System::DelphiInterface<System::Sysutils::TProc__3<TListItemView*,TListItemDrawable*,TListItemCallbackOp> > Callback = {write=FCallback};
	__property bool Initialized = {read=GetInitialized, write=SetInitialized, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListItemObjects : public TListItemView
{
	typedef TListItemView inherited;
	
public:
	/* TListItemView.Create */ inline __fastcall TListItemObjects(TListItem* const AOwner) : TListItemView(AOwner) { }
	/* TListItemView.Destroy */ inline __fastcall virtual ~TListItemObjects() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListItem : public System::TObject
{
	typedef System::TObject inherited;
	
	
public:
#ifndef _WIN64
	typedef System::TMetaClass* TListItemViewType;
#else /* _WIN64 */
	_DECLARE_METACLASS(System::TMetaClass, TListItemViewType);
#endif /* _WIN64 */
	
	typedef void __fastcall (__closure *TListItemNotifyEvent)(TListItem* const Item);
	
	
private:
	int FHeaderRef;
	_di_IListViewAdapter FAdapter;
	_di_IListViewController FController;
	
private:
	int FIndex;
	int FHeight;
	TListItemPurpose FPurpose;
	int FUpdating;
	bool FNeedRepaint;
	TListItemView* FView;
	System::TObject* FTagObject;
	NativeInt FTag;
	System::UnicodeString FTagString;
	int __fastcall GetCount();
	void __fastcall SetHeight(const int Value);
	_di_IListViewController __fastcall GetController();
	
protected:
	virtual void __fastcall InvalidateHeights();
	virtual void __fastcall SetPurpose(const TListItemPurpose AValue);
	virtual void __fastcall Repaint();
	virtual TListItemViewType __fastcall ListItemObjectsClass();
	virtual int __fastcall GetIndex();
	virtual void __fastcall SetIndex(const int Value);
	
public:
	__fastcall TListItem(const _di_IListViewAdapter AAdapter, const _di_IListViewController AController);
	__fastcall virtual ~TListItem();
	virtual System::UnicodeString __fastcall ToString();
	void __fastcall Invalidate();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	virtual void __fastcall CreateObjects();
	virtual void __fastcall WillBePainted();
	Fmx::Controls::TControl* __fastcall ObjectAtPoint(const System::Types::TPointF &Point);
	bool __fastcall MouseDown(const System::Uitypes::TMouseButton Button, const System::Classes::TShiftState Shift, const System::Types::TPointF &MousePos);
	void __fastcall MouseMove(const System::Classes::TShiftState Shift, const System::Types::TPointF &MousePos);
	void __fastcall MouseUp(const System::Uitypes::TMouseButton Button, const System::Classes::TShiftState Shift, const System::Types::TPointF &MousePos);
	void __fastcall MouseSelect();
	bool __fastcall HasClickOnSelectItems();
	__property _di_IListViewAdapter Adapter = {read=FAdapter};
	__property int Count = {read=GetCount, nodefault};
	__property TListItemView* View = {read=FView};
	__property int Height = {read=FHeight, write=SetHeight, nodefault};
	__property _di_IListViewController Controller = {read=GetController};
	__property TListItemPurpose Purpose = {read=FPurpose, write=SetPurpose, nodefault};
	__property int HeaderRef = {read=FHeaderRef, write=FHeaderRef, nodefault};
	__property int Index = {read=GetIndex, write=SetIndex, nodefault};
#ifndef _WIN64
	__property NativeInt Tag = {read=FTag, write=FTag, nodefault};
#else /* _WIN64 */
	__property NativeInt Tag = {read=FTag, write=FTag};
#endif /* _WIN64 */
	__property System::TObject* TagObject = {read=FTagObject, write=FTagObject};
	__property System::UnicodeString TagString = {read=FTagString, write=FTagString};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListItemStyleResources : public System::TObject
{
	typedef System::TObject inherited;
	
	
public:
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	struct DECLSPEC_DRECORD TAccessoryStyleObject
	{
	public:
		Fmx::Styles::Objects::TStyleObject* Normal;
		Fmx::Styles::Objects::TStyleObject* Selected;
	};
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	struct DECLSPEC_DRECORD TButtonStyleObject
	{
	public:
		Fmx::Styles::Objects::TStyleObject* Normal;
		Fmx::Styles::Objects::TStyleObject* Pressed;
	};
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
	
private:
	bool FOwnsObjects;
	
public:
	System::StaticArray<TAccessoryStyleObject, 3> AccessoryImages;
	Fmx::Graphics::TFont* HeaderTextFont;
	System::Uitypes::TAlphaColor HeaderTextColor;
	System::Uitypes::TAlphaColor HeaderTextShadowColor;
	Fmx::Graphics::TFont* DefaultTextFont;
	System::Uitypes::TAlphaColor DefaultTextColor;
	Fmx::Graphics::TFont* DetailTextFont;
	System::Uitypes::TAlphaColor DetailTextColor;
	System::Uitypes::TAlphaColor DefaultTextSelectedColor;
	TButtonStyleObject ButtonAddItemStyleImage;
	TButtonStyleObject ButtonDeleteItemStyleImage;
	TButtonStyleObject ButtonNormalStyleImage;
	TButtonStyleObject ButtonDeleteStyleImage;
	TButtonStyleObject ButtonCheckboxStyleImage;
	Fmx::Graphics::TFont* ButtonTextFont;
	System::Uitypes::TAlphaColor ButtonTextColor;
	System::Uitypes::TAlphaColor ButtonTextPressedColor;
	Fmx::Graphics::TFont* DeleteButtonTextFont;
	System::Uitypes::TAlphaColor DeleteButtonTextColor;
	System::Uitypes::TAlphaColor DeleteButtonTextPressedColor;
	System::Uitypes::TAlphaColor ScrollingStretchGlowColor;
	System::Uitypes::TAlphaColor PullRefreshIndicatorColor;
	System::Uitypes::TAlphaColor PullRefreshStrokeColor;
	__fastcall TListItemStyleResources()/* overload */;
	__fastcall TListItemStyleResources(TListItemStyleResources* const Source)/* overload */;
	__fastcall virtual ~TListItemStyleResources();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{0328C6F1-432C-4F8B-994B-7AB2543CD172}") IListItemStyleResources  : public System::IInterface 
{
	virtual TListItemStyleResources* __fastcall GetStyleResources() = 0 ;
	__property TListItemStyleResources* StyleResources = {read=GetStyleResources};
	virtual bool __fastcall StyleResourcesNeedUpdate() = 0 ;
};

__interface  INTERFACE_UUID("{3855EF72-3B32-41BE-9068-7B109B2DD8E5}") IListViewController  : public System::IInterface 
{
	virtual float __fastcall GetEditModeTransitionAlpha() = 0 ;
	virtual float __fastcall GetDeleteModeTransitionAlpha() = 0 ;
	virtual Fmx::Imglist::TCustomImageList* __fastcall GetImages() = 0 ;
	virtual bool __fastcall IsDeleteModeAllowed() = 0 ;
	virtual float __fastcall GetItemEditOffset(TListItem* const Item) = 0 ;
	virtual float __fastcall GetItemDeleteCutoff(TListItem* const Item) = 0 ;
	virtual float __fastcall GetItemSelectionAlpha(TListItem* const Item) = 0 ;
	virtual System::Types::TRectF __fastcall GetClientMargins() = 0 ;
	virtual Fmx::Controls::_di_IScene __fastcall GetScene() = 0 ;
	virtual void __fastcall RequestReindexing(TListItem* const Item) = 0 ;
	virtual void __fastcall ItemResized(TListItem* const Item) = 0 ;
	virtual void __fastcall ItemInvalidated(TListItem* const Item) = 0 ;
	virtual void __fastcall ControlClicked(TListItem* const Item, TListItemDrawable* const Control) = 0 ;
	virtual void __fastcall CheckStateChanged(TListItem* const Item, TListItemDrawable* const Control) = 0 ;
	__property float EditModeTransitionAlpha = {read=GetEditModeTransitionAlpha};
	__property float DeleteModeTransitionAlpha = {read=GetDeleteModeTransitionAlpha};
	__property Fmx::Imglist::TCustomImageList* Images = {read=GetImages};
};

__interface  INTERFACE_UUID("{85C07617-2BB7-44DC-BBCB-2E3FE422B006}") IListViewPresentation  : public System::IInterface 
{
	virtual void __fastcall AncestorVisibleChanged(const bool Visible) = 0 ;
	virtual void __fastcall ParentChanged() = 0 ;
	virtual void __fastcall OrderChanged() = 0 ;
	virtual void __fastcall SizeChanged() = 0 ;
	virtual void __fastcall EditModeChanged() = 0 ;
	virtual void __fastcall StatusChanged() = 0 ;
	virtual void __fastcall ItemsUpdated() = 0 ;
	virtual void __fastcall ItemInvalidated(TListItem* const Item) = 0 ;
	virtual void __fastcall SetItemSelected(const int ItemIndex, const bool Value) = 0 ;
	virtual void __fastcall SetItemIndex(const int ItemIndex) = 0 ;
	virtual void __fastcall StopPullRefresh() = 0 ;
};

__interface  INTERFACE_UUID("{EBBE5FAA-F2B3-4606-AE32-8027DB97EC92}") IListViewCustomPresentationParent  : public System::IInterface 
{
	virtual System::TObject* __fastcall GetRootObject() = 0 ;
	virtual System::Types::TRect __fastcall GetContentFrame() = 0 ;
	virtual float __fastcall GetControlOpacity() = 0 ;
};

enum class DECLSPEC_DENUM TListViewModeFlag : unsigned char { Edit, Enabled, Visible, Deletion, PullRefresh, Buttons, Search, SearchOnTop, PullRefreshWait, SwipeDelete };

typedef System::Set<TListViewModeFlag, _DELPHI_SET_ENUMERATOR(TListViewModeFlag::Edit), _DELPHI_SET_ENUMERATOR(TListViewModeFlag::SwipeDelete)> TListViewModeFlags;

enum class DECLSPEC_DENUM TListViewNativeOption : unsigned char { Grouped, Indexed, Styled };

typedef System::Set<TListViewNativeOption, _DELPHI_SET_ENUMERATOR(TListViewNativeOption::Grouped), _DELPHI_SET_ENUMERATOR(TListViewNativeOption::Styled)> TListViewNativeOptions;

__interface  INTERFACE_UUID("{F5657E45-0955-4A9F-9FE6-6C5E019846E4}") IListViewPresentationParent  : public IListViewCustomPresentationParent 
{
	virtual _di_IListViewAdapter __fastcall GetAdapter() = 0 ;
	virtual System::Types::TRectF __fastcall GetItemClientRect(const int ItemIndex) = 0 ;
	virtual int __fastcall GetItemCount() = 0 ;
	virtual int __fastcall GetItemHeight(const int ItemIndex) = 0 ;
	virtual float __fastcall GetEstimatedItemHeight() = 0 ;
	virtual float __fastcall GetEstimatedHeaderHeight() = 0 ;
	virtual float __fastcall GetEstimatedFooterHeight() = 0 ;
	virtual System::UnicodeString __fastcall GetItemText(const int ItemIndex) = 0 ;
	virtual System::UnicodeString __fastcall GetItemIndexTitle(const int ItemIndex) = 0 ;
	virtual bool __fastcall CanSelectItem(const int ItemIndex) = 0 ;
	virtual void __fastcall DidSelectItem(const int ItemIndex) = 0 ;
	virtual bool __fastcall CanUnselectItem(const int ItemIndex) = 0 ;
	virtual void __fastcall DidUnselectItem(const int ItemIndex) = 0 ;
	virtual void __fastcall ItemButtonClicked(const int ItemIndex) = 0 ;
	virtual TListViewModeFlags __fastcall GetFlags() = 0 ;
	virtual TListViewNativeOptions __fastcall GetOptions() = 0 ;
	virtual bool __fastcall DeleteItem(const int ItemIndex) = 0 ;
	virtual void __fastcall InvokePullRefresh() = 0 ;
	virtual void __fastcall SetSearchFilter(const System::UnicodeString Filter) = 0 ;
	virtual void __fastcall SetScrollViewPos(const float Value) = 0 ;
	virtual void __fastcall RebuildList() = 0 ;
	virtual void __fastcall SetCreatingNativeView(const bool Value) = 0 ;
	virtual bool __fastcall GetIsTransparent() = 0 ;
	virtual float __fastcall GetOpacity() = 0 ;
	virtual System::Uitypes::TAlphaColor __fastcall GetBackgroundStyleColor() = 0 ;
	virtual void __fastcall RecreateNativePresentation() = 0 ;
};

__interface  INTERFACE_UUID("{C62F3FE5-FE96-47A7-99CB-2EEBC85664FA}") IListViewDesignPresentationParent  : public System::IInterface 
{
	virtual bool __fastcall HasDesignPresentationAttached() = 0 ;
};

__interface  INTERFACE_UUID("{9FB67E2A-37B9-473B-A95A-13EDD19ED91B}") IListViewDrawableShim  : public System::IInterface 
{
	virtual System::Types::TRectF __fastcall CalcAppearanceBounds(const System::Types::TRect &AValue, const System::Types::TRectF &CurrentBounds) = 0 ;
};

typedef System::DelphiInterface<System::Sysutils::TPredicate__1<System::UnicodeString> > TFilterPredicate;

typedef System::Generics::Collections::TList__1<TListItem*>* TListItemsList;

__interface  INTERFACE_UUID("{6E850F76-BABD-4756-BF05-A30C66A692AD}") IListViewAdapter  : public System::IInterface 
{
	
public:
	TListItem* operator[](const int Index) { return this->Item[Index]; }
	virtual int __fastcall GetCount() = 0 ;
	virtual TListItem* __fastcall GetItem(const int Index) = 0 ;
	virtual int __fastcall IndexOf(TListItem* const AItem) = 0 ;
	virtual System::Generics::Collections::TEnumerator__1<TListItem*>* __fastcall GetEnumerator() = 0 ;
	virtual int __fastcall GetDefaultViewHeight() = 0 ;
	virtual void __fastcall SetOnChanged(const System::Classes::TNotifyEvent Value) = 0 ;
	virtual void __fastcall SetOnItemsMayChange(const System::Classes::TNotifyEvent Value) = 0 ;
	virtual void __fastcall SetOnItemsCouldHaveChanged(const System::Classes::TNotifyEvent Value) = 0 ;
	virtual void __fastcall SetOnItemsInvalidate(const System::Classes::TNotifyEvent Value) = 0 ;
	virtual void __fastcall SetOnItemsResize(const System::Classes::TNotifyEvent Value) = 0 ;
	virtual void __fastcall SetOnResetView(const System::Classes::TNotifyEvent Value) = 0 ;
	virtual void __fastcall Changed() = 0 ;
	virtual void __fastcall Sort(System::DelphiInterface<System::Generics::Defaults::IComparer__1<TListItem*> > AComparer) = 0 ;
	virtual void __fastcall CreateNewViews() = 0 ;
	virtual void __fastcall ResetViews(const TListItemPurposes Purposes) = 0 ;
	virtual void __fastcall ResetView(TListItem* const Item) = 0 ;
	__property TListItem* Item[const int Index] = {read=GetItem/*, default*/};
	__property int Count = {read=GetCount};
	__property System::Classes::TNotifyEvent OnChanged = {write=SetOnChanged};
	__property System::Classes::TNotifyEvent OnItemsMayChange = {write=SetOnItemsMayChange};
	__property System::Classes::TNotifyEvent OnItemsCouldHaveChanged = {write=SetOnItemsCouldHaveChanged};
	__property System::Classes::TNotifyEvent OnItemsInvalidate = {write=SetOnItemsInvalidate};
	__property System::Classes::TNotifyEvent OnItemsResize = {write=SetOnItemsResize};
	__property System::Classes::TNotifyEvent OnResetView = {write=SetOnResetView};
};

typedef void __fastcall (__closure *TBeforeItemAddedNotify)(_di_IListViewEditor Sender);

typedef void __fastcall (__closure *TAfterItemAddedNotify)(_di_IListViewEditor Sender, TListItem* const Item);

typedef void __fastcall (__closure *TBeforeItemDeletedNotify)(_di_IListViewEditor Sender, const int Index);

typedef void __fastcall (__closure *TAfterItemDeletedNotify)(_di_IListViewEditor Sender);

__interface  INTERFACE_UUID("{19A0606B-8C8E-49B2-A6B3-A708B7B8AD46}") IListViewEditor  : public System::IInterface 
{
	virtual TListItem* __fastcall Add() = 0 ;
	virtual void __fastcall Delete(const int Index) = 0 ;
	virtual TListItem* __fastcall Insert(const int Index) = 0 ;
	virtual void __fastcall Clear() = 0 ;
	virtual void __fastcall SetBeforeItemAdded(const TBeforeItemAddedNotify AHandler) = 0 ;
	virtual void __fastcall SetAfterItemAdded(const TAfterItemAddedNotify AHandler) = 0 ;
	virtual void __fastcall SetBeforeItemDeleted(const TBeforeItemDeletedNotify AHandler) = 0 ;
	virtual void __fastcall SetAfterItemDeleted(const TAfterItemDeletedNotify AHandler) = 0 ;
	__property TBeforeItemAddedNotify OnBeforeItemAdded = {write=SetBeforeItemAdded};
	__property TAfterItemAddedNotify OnAfterItemAdded = {write=SetAfterItemAdded};
	__property TBeforeItemDeletedNotify OnBeforeItemDeleted = {write=SetBeforeItemDeleted};
	__property TAfterItemDeletedNotify OnAfterItemDeleted = {write=SetAfterItemDeleted};
};

__interface  INTERFACE_UUID("{032EB974-1C25-4B5E-BB07-01FA82554748}") IListViewCheckProvider  : public System::IInterface 
{
	
public:
	bool operator[](const int Index) { return this->Checked[Index]; }
	virtual int __fastcall FirstChecked(const bool Checked = true) = 0 ;
	virtual bool __fastcall AnyChecked(const bool AChecked = true) = 0 ;
	virtual void __fastcall CheckAll(const bool NewState = true) = 0 ;
	virtual bool __fastcall GetChecked(const int Index) = 0 ;
	virtual void __fastcall SetChecked(const int Index, const bool Value) = 0 ;
	__property bool Checked[const int Index] = {read=GetChecked, write=SetChecked/*, default*/};
};

__interface  INTERFACE_UUID("{C6D52C15-423D-4B2F-AC87-7D7D47A9C7CC}") IListViewTextProvider  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetText(const int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetIndexTitle(const int Index) = 0 ;
	__property System::UnicodeString Text[const int Index] = {read=GetText};
	__property System::UnicodeString IndexTitle[const int Index] = {read=GetIndexTitle};
};

__interface  INTERFACE_UUID("{42CC3926-0A23-465B-9ECE-229C60B3BA8E}") IListViewTextButtonProvider  : public System::IInterface 
{
	virtual TListItemTextButton* __fastcall GetTextButtonDrawable(const int Index) = 0 ;
	__property TListItemTextButton* TextButtonDrawable[const int Index] = {read=GetTextButtonDrawable};
};

__interface  INTERFACE_UUID("{64FF4B01-E378-4F40-A9A5-E4C1A7C942D6}") IListViewGlyphButtonProvider  : public System::IInterface 
{
	virtual TListItemGlyphButton* __fastcall GetGlyphButtonDrawable(const int Index) = 0 ;
	__property TListItemGlyphButton* GlyphButtonDrawable[const int Index] = {read=GetGlyphButtonDrawable};
};

__interface  INTERFACE_UUID("{0BCFB611-3763-4C49-974F-1104F6116D6E}") IListViewExtrasProvider  : public System::IInterface 
{
	virtual System::Rtti::TValue __fastcall GetItemData(const int Index, const System::UnicodeString DataIndex) = 0 ;
	virtual void __fastcall SetItemData(const int Index, const System::UnicodeString DataIndex, const System::Rtti::TValue &AValue) = 0 ;
	virtual bool __fastcall GetHasData(const int Index, const System::UnicodeString DataIndex) = 0 ;
	virtual NativeInt __fastcall GetItemTag(const int Index) = 0 ;
	virtual void __fastcall SetItemTag(const int Index, const NativeInt AValue) = 0 ;
	__property System::Rtti::TValue Data[const int Index][const System::UnicodeString DataIndex] = {read=GetItemData, write=SetItemData};
	__property NativeInt Tag[const int Index] = {read=GetItemTag, write=SetItemTag};
	__property bool HasData[const int Index][const System::UnicodeString DataIndex] = {read=GetHasData};
};

__interface  INTERFACE_UUID("{02F85899-8787-4378-9622-105820EB4577}") IListViewFilterable  : public System::IInterface 
{
	virtual System::DelphiInterface<System::Sysutils::TPredicate__1<System::UnicodeString> > __fastcall GetFilterPredicate() = 0 ;
	virtual void __fastcall SetFilterPredicate(const System::DelphiInterface<System::Sysutils::TPredicate__1<System::UnicodeString> > Value) = 0 ;
	virtual System::Generics::Collections::TList__1<TListItem*>* __fastcall GetUnfilteredItems() = 0 ;
	virtual bool __fastcall GetFiltered() = 0 ;
	virtual void __fastcall ItemsCleared() = 0 ;
	virtual void __fastcall ItemDeleted(const int Index) = 0 ;
	virtual void __fastcall ItemAdded(const int Index, TListItem* const Item) = 0 ;
	__property System::Generics::Collections::TList__1<TListItem*>* UnfilteredItems = {read=GetUnfilteredItems};
	__property bool Filtered = {read=GetFiltered};
	__property System::DelphiInterface<System::Sysutils::TPredicate__1<System::UnicodeString> > Filter = {read=GetFilterPredicate, write=SetFilterPredicate};
};

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Types */
}	/* namespace Listview */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_LISTVIEW_TYPES)
using namespace Fmx::Listview::Types;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_LISTVIEW)
using namespace Fmx::Listview;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_Listview_TypesHPP
