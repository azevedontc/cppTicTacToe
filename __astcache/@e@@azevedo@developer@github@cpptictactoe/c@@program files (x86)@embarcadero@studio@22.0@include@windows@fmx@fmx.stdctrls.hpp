// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.StdCtrls.pas' rev: 35.00 (Windows)

#ifndef Fmx_StdctrlsHPP
#define Fmx_StdctrlsHPP

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
#include <System.Messaging.hpp>
#include <System.Math.hpp>
#include <System.ImageList.hpp>
#include <FMX.ActnList.hpp>
#include <FMX.Types.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Ani.hpp>
#include <FMX.StdActns.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Graphics.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Controls.Model.hpp>
#include <FMX.ImgList.hpp>
#include <FMX.AcceleratorKey.hpp>
#include <FMX.Presentation.Messages.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Stdctrls
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TPresentedTextControl;
class DELPHICLASS TPanel;
class DELPHICLASS TCalloutPanel;
class DELPHICLASS TLabel;
class DELPHICLASS TCustomButton;
class DELPHICLASS TButton;
class DELPHICLASS TSpeedButtonGroupMessage;
class DELPHICLASS TSpeedButton;
class DELPHICLASS TCustomCornerButton;
class DELPHICLASS TCornerButton;
class DELPHICLASS TCheckBox;
class DELPHICLASS TRadioButtonGroupMessage;
class DELPHICLASS TRadioButton;
class DELPHICLASS TGroupBox;
class DELPHICLASS TStatusBar;
class DELPHICLASS TToolBar;
class DELPHICLASS TSizeGrip;
class DELPHICLASS TSplitter;
class DELPHICLASS TProgressBar;
class DELPHICLASS TThumb;
class DELPHICLASS TCustomTrack;
class DELPHICLASS TTrack;
class DELPHICLASS TTrackBar;
class DELPHICLASS TBitmapTrackBar;
class DELPHICLASS TSwitchModel;
class DELPHICLASS TCustomSwitch;
class DELPHICLASS TSwitch;
class DELPHICLASS TScrollBar;
class DELPHICLASS TSmallScrollBar;
class DELPHICLASS TAniIndicator;
class DELPHICLASS TArcDial;
class DELPHICLASS TExpanderButton;
class DELPHICLASS TExpander;
class DELPHICLASS TImageControl;
class DELPHICLASS TPathLabel;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TPresentedTextControl : public Fmx::Controls::Presentation::TPresentedControl
{
	typedef Fmx::Controls::Presentation::TPresentedControl inherited;
	
private:
	Fmx::Controls::TTextSettingsInfo* FTextSettingsInfo;
	Fmx::Controls::TControl* FTextObject;
	Fmx::Graphics::_di_ITextSettings FITextSettings;
	Fmx::Types::_di_IObjectState FObjectState;
	System::UnicodeString FText;
	bool FIsChanging;
	Fmx::Types::TPrefixStyle FPrefixStyle;
	System::WideChar FAcceleratorKey;
	int FAcceleratorKeyIndex;
	bool __fastcall TextStored();
	Fmx::Graphics::TFont* __fastcall GetFont();
	System::UnicodeString __fastcall GetText();
	void __fastcall SetFont(Fmx::Graphics::TFont* const Value);
	Fmx::Types::TTextAlign __fastcall GetTextAlign();
	void __fastcall SetTextAlign(const Fmx::Types::TTextAlign Value);
	Fmx::Types::TTextAlign __fastcall GetVertTextAlign();
	void __fastcall SetVertTextAlign(const Fmx::Types::TTextAlign Value);
	bool __fastcall GetWordWrap();
	void __fastcall SetWordWrap(const bool Value);
	System::Uitypes::TAlphaColor __fastcall GetFontColor();
	void __fastcall SetFontColor(const System::Uitypes::TAlphaColor Value);
	Fmx::Types::TTextTrimming __fastcall GetTrimming();
	void __fastcall SetTrimming(const Fmx::Types::TTextTrimming Value);
	void __fastcall SetPrefixStyle(const Fmx::Types::TPrefixStyle Value);
	Fmx::Graphics::TTextSettings* __fastcall GetDefaultTextSettings();
	Fmx::Graphics::TTextSettings* __fastcall GetTextSettings();
	Fmx::Types::TStyledSettings __fastcall GetStyledSettings();
	Fmx::Graphics::TTextSettings* __fastcall GetResultingTextSettings();
	
protected:
	virtual void __fastcall DoRootChanging(const Fmx::Types::_di_IRoot NewRoot);
	virtual System::UnicodeString __fastcall DoFilterPresentedText(const System::UnicodeString AText);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual void __fastcall DoStyleChanged();
	virtual void __fastcall SetText(const System::UnicodeString Value);
	virtual void __fastcall SetTextInternal(const System::UnicodeString Value);
	virtual void __fastcall SetName(const System::Classes::TComponentName Value);
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	virtual void __fastcall ActionChange(System::Classes::TBasicAction* Sender, bool CheckDefaults);
	virtual void __fastcall Loaded();
	virtual Fmx::Types::TFmxObject* __fastcall FindTextObject();
	void __fastcall UpdateTextObject(Fmx::Controls::TControl* const TextControl, const System::UnicodeString Str);
	__property Fmx::Controls::TControl* TextObject = {read=FTextObject};
	virtual void __fastcall DoTextChanged();
	virtual void __fastcall DoEndUpdate();
	bool __fastcall CalcTextObjectSize(const float MaxWidth, System::Types::TSizeF &Size);
	virtual void __fastcall SetTextSettings(Fmx::Graphics::TTextSettings* const Value);
	virtual void __fastcall SetStyledSettings(const Fmx::Types::TStyledSettings Value);
	virtual void __fastcall DoChanged();
	virtual bool __fastcall StyledSettingsStored();
	virtual Fmx::Controls::TTextSettingsInfo::TCustomTextSettingsClass __fastcall GetTextSettingsClass();
	virtual void __fastcall TriggerAcceleratorKey();
	virtual bool __fastcall CanTriggerAcceleratorKey();
	System::WideChar __fastcall GetAcceleratorChar();
	int __fastcall GetAcceleratorCharIndex();
	
public:
	__fastcall virtual TPresentedTextControl(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TPresentedTextControl();
	virtual void __fastcall AfterConstruction();
	virtual System::UnicodeString __fastcall ToString();
	__property System::UnicodeString Text = {read=GetText, write=SetText, stored=TextStored};
	__property Fmx::Graphics::TTextSettings* DefaultTextSettings = {read=GetDefaultTextSettings};
	__property Fmx::Graphics::TTextSettings* TextSettings = {read=GetTextSettings, write=SetTextSettings};
	__property Fmx::Types::TStyledSettings StyledSettings = {read=GetStyledSettings, write=SetStyledSettings, stored=StyledSettingsStored, nodefault};
	__property Fmx::Graphics::TTextSettings* ResultingTextSettings = {read=GetResultingTextSettings};
	void __fastcall Change();
	__property Fmx::Graphics::TFont* Font = {read=GetFont, write=SetFont};
	__property System::Uitypes::TAlphaColor FontColor = {read=GetFontColor, write=SetFontColor, default=-16777216};
	__property Fmx::Types::TTextAlign VertTextAlign = {read=GetVertTextAlign, write=SetVertTextAlign, default=0};
	__property Fmx::Types::TTextAlign TextAlign = {read=GetTextAlign, write=SetTextAlign, default=1};
	__property bool WordWrap = {read=GetWordWrap, write=SetWordWrap, default=0};
	__property Fmx::Types::TTextTrimming Trimming = {read=GetTrimming, write=SetTrimming, default=0};
	__property Fmx::Types::TPrefixStyle PrefixStyle = {read=FPrefixStyle, write=SetPrefixStyle, default=0};
private:
	void *__IAcceleratorKeyReceiver;	// Fmx::Acceleratorkey::IAcceleratorKeyReceiver 
	void *__ICaption;	// Fmx::Actnlist::ICaption 
	void *__ITextSettings;	// Fmx::Graphics::ITextSettings 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1C679082-65F2-4C54-A2C4-CD4C00E2C465}
	operator Fmx::Acceleratorkey::_di_IAcceleratorKeyReceiver()
	{
		Fmx::Acceleratorkey::_di_IAcceleratorKeyReceiver intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Acceleratorkey::IAcceleratorKeyReceiver*(void) { return (Fmx::Acceleratorkey::IAcceleratorKeyReceiver*)&__IAcceleratorKeyReceiver; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3D039C9C-8888-466F-A344-E7026EEE2C07}
	operator Fmx::Actnlist::_di_ICaption()
	{
		Fmx::Actnlist::_di_ICaption intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::ICaption*(void) { return (Fmx::Actnlist::ICaption*)&__ICaption; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FD99635D-D8DB-4E26-B36F-97D3AABBCCB3}
	operator Fmx::Graphics::_di_ITextSettings()
	{
		Fmx::Graphics::_di_ITextSettings intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Graphics::ITextSettings*(void) { return (Fmx::Graphics::ITextSettings*)&__ITextSettings; }
	#endif
	
};


class PASCALIMPLEMENTATION TPanel : public Fmx::Controls::Presentation::TPresentedControl
{
	typedef Fmx::Controls::Presentation::TPresentedControl inherited;
	
protected:
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	
public:
	__fastcall virtual TPanel(System::Classes::TComponent* AOwner)/* overload */;
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property ControlType = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnEnter;
	__property OnExit;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TPresentedControl.Destroy */ inline __fastcall virtual ~TPanel() { }
	
};


class PASCALIMPLEMENTATION TCalloutPanel : public TPanel
{
	typedef TPanel inherited;
	
public:
	static const Fmx::Objects::TCalloutPosition DefaultCalloutPosition = (Fmx::Objects::TCalloutPosition)(0);
	
	static const System::Int8 DefaultCalloutWidth = System::Int8(0x17);
	
	static const System::Int8 DefaultCalloutLength = System::Int8(0xb);
	
	
private:
	Fmx::Objects::TCalloutRectangle* FCalloutRect;
	float FCalloutLength;
	float FCalloutWidth;
	Fmx::Objects::TCalloutPosition FCalloutPosition;
	float FCalloutOffset;
	System::Types::TRectF FSavedPadding;
	bool FUpdatingPadding;
	void __fastcall SetCalloutLength(const float Value);
	void __fastcall SetCalloutPosition(const Fmx::Objects::TCalloutPosition Value);
	void __fastcall SetCalloutWidth(const float Value);
	void __fastcall SetCalloutOffset(const float Value);
	
protected:
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	void __fastcall UpdateCallout();
	void __fastcall UpdatePadding();
	void __fastcall SavePadding();
	void __fastcall RestorePadding();
	virtual void __fastcall PaddingChanged()/* overload */;
	
public:
	__fastcall virtual TCalloutPanel(System::Classes::TComponent* AOwner)/* overload */;
	__property Fmx::Objects::TCalloutRectangle* CalloutRectangle = {read=FCalloutRect, write=FCalloutRect};
	
__published:
	__property float CalloutWidth = {read=FCalloutWidth, write=SetCalloutWidth};
	__property float CalloutLength = {read=FCalloutLength, write=SetCalloutLength};
	__property Fmx::Objects::TCalloutPosition CalloutPosition = {read=FCalloutPosition, write=SetCalloutPosition, default=0};
	__property float CalloutOffset = {read=FCalloutOffset, write=SetCalloutOffset};
public:
	/* TPresentedControl.Destroy */ inline __fastcall virtual ~TCalloutPanel() { }
	
};


class PASCALIMPLEMENTATION TLabel : public TPresentedTextControl
{
	typedef TPresentedTextControl inherited;
	
private:
	bool FAutoSize;
	bool FPressing;
	bool FIsPressed;
	bool FInFitSize;
	bool FNeedFitSize;
	Fmx::Controls::TControl* FFocusControl;
	void __fastcall SetAutoSize(const bool Value);
	void __fastcall FitSize();
	void __fastcall SetFocusControl(Fmx::Controls::TControl* const Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	virtual void __fastcall Resize();
	virtual void __fastcall DoChanged();
	virtual void __fastcall ApplyStyle();
	virtual Fmx::Controls::TTextSettingsInfo::TCustomTextSettingsClass __fastcall GetTextSettingsClass();
	virtual void __fastcall TriggerAcceleratorKey();
	
public:
	__fastcall virtual TLabel(System::Classes::TComponent* AOwner)/* overload */;
	virtual void __fastcall SetNewScene(Fmx::Controls::_di_IScene AScene);
	__property bool IsPressed = {read=FIsPressed, nodefault};
	__property Font;
	__property FontColor = {default=-16777216};
	__property TextAlign = {default=1};
	__property VertTextAlign = {default=0};
	__property WordWrap = {default=0};
	__property Trimming = {default=0};
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, default=0};
	__property AutoTranslate = {default=1};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property ControlType = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property StyledSettings;
	__property Locked = {default=0};
	__property Fmx::Controls::TControl* FocusControl = {read=FFocusControl, write=SetFocusControl};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=0};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TextSettings;
	__property Text = {default=0};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TPresentedTextControl.Destroy */ inline __fastcall virtual ~TLabel() { }
	
};


class PASCALIMPLEMENTATION TCustomButton : public TPresentedTextControl
{
	typedef TPresentedTextControl inherited;
	
private:
	bool FPressing;
	bool FIsPressed;
	System::Uitypes::TModalResult FModalResult;
	bool FStaysPressed;
	Fmx::Types::TTimer* FRepeatTimer;
	bool FRepeat;
	System::Uitypes::TAlphaColor FTintColor;
	Fmx::Controls::_di_ITintedObject FTintObject;
	System::Uitypes::TAlphaColor FIconTintColor;
	Fmx::Controls::_di_ITintedObject FIconTintObject;
	Fmx::Controls::TControl* FIcon;
	bool FOldIconVisible;
	Fmx::Imglist::TGlyph* FGlyph;
	System::Types::TSizeF FGlyphSize;
	Fmx::Imglist::TGlyphImageLink* FImageLink;
	void __fastcall SetTintColor(const System::Uitypes::TAlphaColor Value);
	bool __fastcall IsTintColorStored();
	bool __fastcall IsIconTintColorStored();
	void __fastcall SetIconTintColor(const System::Uitypes::TAlphaColor Value);
	Fmx::Imglist::TCustomImageList* __fastcall GetImages();
	void __fastcall SetImages(Fmx::Imglist::TCustomImageList* const Value);
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	System::Imagelist::TBaseImageList* __fastcall GetImageList();
	void __fastcall SetImageList(System::Imagelist::TBaseImageList* const Value);
	bool __fastcall UpdateGlyphSize();
	
protected:
	virtual void __fastcall ActionChange(System::Classes::TBasicAction* Sender, bool CheckDefaults);
	virtual bool __fastcall IsPressedStored();
	void __fastcall RestoreButtonState();
	virtual void __fastcall ApplyTriggers();
	virtual void __fastcall SetIsPressed(const bool Value);
	virtual void __fastcall SetStaysPressed(const bool Value);
	virtual void __fastcall Click();
	virtual void __fastcall DblClick();
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual void __fastcall ToggleStaysPressed();
	virtual void __fastcall DoRealign();
	void __fastcall DoRepeatTimer(System::TObject* Sender);
	void __fastcall DoRepeatDelayTimer(System::TObject* Sender);
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall KeyDown(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift);
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	virtual System::Types::TRectF __fastcall GetDefaultTouchTargetExpansion();
	virtual Fmx::Controls::TTextSettingsInfo::TCustomTextSettingsClass __fastcall GetTextSettingsClass();
	__property System::Uitypes::TAlphaColor TintColor = {read=FTintColor, write=SetTintColor, stored=IsTintColorStored, nodefault};
	__property Fmx::Controls::_di_ITintedObject TintObject = {read=FTintObject};
	__property System::Uitypes::TAlphaColor IconTintColor = {read=FIconTintColor, write=SetIconTintColor, stored=IsIconTintColorStored, nodefault};
	__property Fmx::Controls::_di_ITintedObject IconTintObject = {read=FIconTintObject};
	virtual void __fastcall ImagesChanged();
	virtual bool __fastcall ImageIndexStored();
	virtual void __fastcall TriggerAcceleratorKey();
	
public:
	__fastcall virtual TCustomButton(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TCustomButton();
	virtual void __fastcall SetNewScene(Fmx::Controls::_di_IScene AScene);
	__property Action;
	__property bool StaysPressed = {read=FStaysPressed, write=SetStaysPressed, stored=IsPressedStored, default=0};
	__property bool IsPressed = {read=FIsPressed, write=SetIsPressed, default=0};
	__property System::Uitypes::TModalResult ModalResult = {read=FModalResult, write=FModalResult, default=0};
	__property bool RepeatClick = {read=FRepeat, write=FRepeat, default=0};
	__property Fmx::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
	__property System::Uitypes::TImageIndex ImageIndex = {read=GetImageIndex, write=SetImageIndex, stored=ImageIndexStored, nodefault};
private:
	void *__IGlyph;	// Fmx::Actnlist::IGlyph 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {62BDCA4F-820A-4058-B57A-FE8931DB3CCC}
	operator Fmx::Actnlist::_di_IGlyph()
	{
		Fmx::Actnlist::_di_IGlyph intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::IGlyph*(void) { return (Fmx::Actnlist::IGlyph*)&__IGlyph; }
	#endif
	
};


class PASCALIMPLEMENTATION TButton : public TCustomButton
{
	typedef TCustomButton inherited;
	
private:
	bool FDefault;
	bool FCancel;
	
public:
	__property TintObject;
	__property IconTintObject;
	
protected:
	virtual void __fastcall AfterDialogKey(System::Word &Key, System::Classes::TShiftState Shift);
	__property Font;
	__property TextAlign = {default=1};
	__property Trimming = {default=0};
	__property WordWrap = {default=0};
	
__published:
	__property StaysPressed = {default=0};
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property AutoTranslate = {default=1};
	__property bool Cancel = {read=FCancel, write=FCancel, default=0};
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property ControlType = {default=0};
	__property Cursor = {default=0};
	__property bool Default = {read=FDefault, write=FDefault, default=0};
	__property DisableFocusEffect = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property StyledSettings;
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property IconTintColor;
	__property Images;
	__property ImageIndex;
	__property IsPressed = {default=0};
	__property Locked = {default=0};
	__property Padding;
	__property ModalResult = {default=0};
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RepeatClick = {default=0};
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
	__property TextSettings;
	__property TintColor;
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TCustomButton.Create */ inline __fastcall virtual TButton(System::Classes::TComponent* AOwner)/* overload */ : TCustomButton(AOwner) { }
	/* TCustomButton.Destroy */ inline __fastcall virtual ~TButton() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSpeedButtonGroupMessage : public System::Messaging::TMessage__1<System::UnicodeString>
{
	typedef System::Messaging::TMessage__1<System::UnicodeString> inherited;
	
public:
	/* {System_Messaging}TMessage<System_string>.Create */ inline __fastcall TSpeedButtonGroupMessage(const System::UnicodeString AValue) : System::Messaging::TMessage__1<System::UnicodeString>(AValue) { }
	/* {System_Messaging}TMessage<System_string>.Destroy */ inline __fastcall virtual ~TSpeedButtonGroupMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TSpeedButton : public TCustomButton
{
	typedef TCustomButton inherited;
	
private:
	System::UnicodeString FGroupName;
	bool __fastcall GetIsChecked();
	void __fastcall SetIsChecked(const bool Value);
	bool __fastcall IsCheckedStored();
	void __fastcall GroupMessageCall(System::TObject* const Sender, System::Messaging::TMessageBase* const M);
	System::UnicodeString __fastcall GetGroupName();
	bool __fastcall GroupNameStored();
	void __fastcall SetGroupName(const System::UnicodeString Value);
	
protected:
	virtual bool __fastcall IsPressedStored();
	virtual void __fastcall ToggleStaysPressed();
	virtual void __fastcall SetIsPressed(const bool Value);
	virtual void __fastcall ActionChange(System::Classes::TBasicAction* Sender, bool CheckDefaults);
	
public:
	__fastcall virtual TSpeedButton(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TSpeedButton();
	__property Font;
	__property IconTintObject;
	__property TextAlign = {default=1};
	__property TintObject;
	__property Trimming = {default=0};
	__property WordWrap = {default=0};
	
__published:
	__property StaysPressed = {default=0};
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property AutoTranslate = {default=1};
	__property CanFocus = {default=0};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property ControlType = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property System::UnicodeString GroupName = {read=GetGroupName, write=SetGroupName, stored=GroupNameStored};
	__property StyledSettings;
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property IsPressed = {default=0};
	__property IconTintColor;
	__property Images;
	__property ImageIndex;
	__property Locked = {default=0};
	__property Padding;
	__property ModalResult = {default=0};
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RepeatClick = {default=0};
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property StyleLookup = {default=0};
	__property Text = {default=0};
	__property TextSettings;
	__property TintColor;
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property OnApplyStyleLookup;
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
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
private:
	void *__IGroupName;	// Fmx::Actnlist::IGroupName 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {DE946EB7-0A6F-4458-AEB0-C911122630D0}
	operator Fmx::Actnlist::_di_IIsChecked()
	{
		Fmx::Actnlist::_di_IIsChecked intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::IIsChecked*(void) { return (Fmx::Actnlist::IIsChecked*)&__IGroupName; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F5C14792-67AB-41F2-99C1-90C7F94102EE}
	operator Fmx::Actnlist::_di_IGroupName()
	{
		Fmx::Actnlist::_di_IGroupName intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::IGroupName*(void) { return (Fmx::Actnlist::IGroupName*)&__IGroupName; }
	#endif
	
};


class PASCALIMPLEMENTATION TCustomCornerButton : public TCustomButton
{
	typedef TCustomButton inherited;
	
private:
	float FYRadius;
	float FXRadius;
	Fmx::Types::TCorners FCorners;
	Fmx::Types::TCornerType FCornerType;
	Fmx::Types::TSides FSides;
	bool __fastcall IsCornersStored();
	void __fastcall SetXRadius(const float Value);
	void __fastcall SetYRadius(const float Value);
	void __fastcall SetCorners(const Fmx::Types::TCorners Value);
	void __fastcall SetCornerType(const Fmx::Types::TCornerType Value);
	void __fastcall SetSides(const Fmx::Types::TSides Value);
	bool __fastcall IsSidesStored();
	
protected:
	virtual void __fastcall ApplyStyle();
	
public:
	__fastcall virtual TCustomCornerButton(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TCustomCornerButton();
	__property float XRadius = {read=FXRadius, write=SetXRadius};
	__property float YRadius = {read=FYRadius, write=SetYRadius};
	__property Fmx::Types::TCorners Corners = {read=FCorners, write=SetCorners, stored=IsCornersStored, nodefault};
	__property Fmx::Types::TCornerType CornerType = {read=FCornerType, write=SetCornerType, default=0};
	__property Fmx::Types::TSides Sides = {read=FSides, write=SetSides, stored=IsSidesStored, nodefault};
};


class PASCALIMPLEMENTATION TCornerButton : public TCustomCornerButton
{
	typedef TCustomCornerButton inherited;
	
public:
	__property Font;
	__property TextAlign = {default=0};
	__property WordWrap = {default=0};
	
__published:
	__property StaysPressed = {default=0};
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property AutoTranslate = {default=1};
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property ControlType = {default=0};
	__property Corners;
	__property CornerType = {default=0};
	__property Cursor = {default=0};
	__property DisableFocusEffect = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property StyledSettings;
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Images;
	__property ImageIndex;
	__property IsPressed = {default=0};
	__property Locked = {default=0};
	__property Padding;
	__property ModalResult = {default=0};
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RepeatClick = {default=0};
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Sides;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
	__property TextSettings;
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property XRadius = {default=0};
	__property YRadius = {default=0};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TCustomCornerButton.Create */ inline __fastcall virtual TCornerButton(System::Classes::TComponent* AOwner)/* overload */ : TCustomCornerButton(AOwner) { }
	/* TCustomCornerButton.Destroy */ inline __fastcall virtual ~TCornerButton() { }
	
};


class PASCALIMPLEMENTATION TCheckBox : public TPresentedTextControl
{
	typedef TPresentedTextControl inherited;
	
private:
	bool FPressing;
	System::Classes::TNotifyEvent FOnChange;
	bool FIsPressed;
	bool FIsChecked;
	bool FIsPan;
	bool __fastcall GetIsChecked();
	void __fastcall SetIsChecked(const bool Value);
	bool __fastcall IsCheckedStored();
	
protected:
	virtual void __fastcall DoExit();
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual bool __fastcall CanObserve(const int ID);
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	virtual void __fastcall ActionChange(System::Classes::TBasicAction* Sender, bool CheckDefaults);
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	virtual Fmx::Controls::TTextSettingsInfo::TCustomTextSettingsClass __fastcall GetTextSettingsClass();
	bool __fastcall TryValueIsChecked(const System::Rtti::TValue &Value, /* out */ bool &IsChecked);
	virtual void __fastcall TriggerAcceleratorKey();
	
public:
	__fastcall virtual TCheckBox(System::Classes::TComponent* AOwner)/* overload */;
	virtual void __fastcall SetNewScene(Fmx::Controls::_di_IScene AScene);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall KeyDown(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift);
	__property bool IsPressed = {read=FIsPressed, default=0};
	__property Font;
	__property TextAlign = {default=1};
	__property WordWrap = {default=0};
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property AutoTranslate = {default=1};
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property ControlType = {default=0};
	__property Cursor = {default=0};
	__property DisableFocusEffect = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property StyledSettings;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property bool IsChecked = {read=GetIsChecked, write=SetIsChecked, stored=IsCheckedStored, default=0};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
	__property TextSettings;
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TPresentedTextControl.Destroy */ inline __fastcall virtual ~TCheckBox() { }
	
private:
	void *__IIsChecked;	// Fmx::Actnlist::IIsChecked 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {DE946EB7-0A6F-4458-AEB0-C911122630D0}
	operator Fmx::Actnlist::_di_IIsChecked()
	{
		Fmx::Actnlist::_di_IIsChecked intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::IIsChecked*(void) { return (Fmx::Actnlist::IIsChecked*)&__IIsChecked; }
	#endif
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRadioButtonGroupMessage : public System::Messaging::TMessageBase
{
	typedef System::Messaging::TMessageBase inherited;
	
private:
	System::UnicodeString FGroupName;
	
public:
	__fastcall TRadioButtonGroupMessage(const System::UnicodeString AGroupName);
	__property System::UnicodeString GroupName = {read=FGroupName};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRadioButtonGroupMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TRadioButton : public TPresentedTextControl
{
	typedef TPresentedTextControl inherited;
	
private:
	bool FPressing;
	System::Classes::TNotifyEvent FOnChange;
	bool FIsPressed;
	bool FIsChecked;
	System::UnicodeString FGroupName;
	bool __fastcall GetIsChecked();
	void __fastcall SetIsChecked(const bool Value);
	bool __fastcall IsCheckedStored();
	System::UnicodeString __fastcall GetGroupName();
	void __fastcall SetGroupName(const System::UnicodeString Value);
	bool __fastcall GroupNameStored();
	void __fastcall GroupMessageCall(System::TObject* const Sender, System::Messaging::TMessageBase* const M);
	
protected:
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	virtual void __fastcall ActionChange(System::Classes::TBasicAction* Sender, bool CheckDefaults);
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	virtual Fmx::Controls::TTextSettingsInfo::TCustomTextSettingsClass __fastcall GetTextSettingsClass();
	virtual void __fastcall TriggerAcceleratorKey();
	
public:
	__fastcall virtual TRadioButton(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TRadioButton();
	virtual void __fastcall SetNewScene(Fmx::Controls::_di_IScene AScene);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall KeyDown(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift);
	__property bool IsPressed = {read=FIsPressed, nodefault};
	__property TextAlign = {default=1};
	__property Font;
	__property WordWrap = {default=0};
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property AutoTranslate = {default=1};
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property ControlType = {default=0};
	__property Cursor = {default=0};
	__property DisableFocusEffect = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property StyledSettings;
	__property System::UnicodeString GroupName = {read=GetGroupName, write=SetGroupName, stored=GroupNameStored};
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property bool IsChecked = {read=GetIsChecked, write=SetIsChecked, stored=IsCheckedStored, default=0};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
	__property TextSettings;
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
private:
	void *__IGroupName;	// Fmx::Actnlist::IGroupName 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {DE946EB7-0A6F-4458-AEB0-C911122630D0}
	operator Fmx::Actnlist::_di_IIsChecked()
	{
		Fmx::Actnlist::_di_IIsChecked intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::IIsChecked*(void) { return (Fmx::Actnlist::IIsChecked*)&__IGroupName; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F5C14792-67AB-41F2-99C1-90C7F94102EE}
	operator Fmx::Actnlist::_di_IGroupName()
	{
		Fmx::Actnlist::_di_IGroupName intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::IGroupName*(void) { return (Fmx::Actnlist::IGroupName*)&__IGroupName; }
	#endif
	
};


class PASCALIMPLEMENTATION TGroupBox : public TPresentedTextControl
{
	typedef TPresentedTextControl inherited;
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	virtual bool __fastcall StyledSettingsStored();
	virtual Fmx::Controls::TTextSettingsInfo::TCustomTextSettingsClass __fastcall GetTextSettingsClass();
	
public:
	__fastcall virtual TGroupBox(System::Classes::TComponent* AOwner)/* overload */;
	__property Font;
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property AutoTranslate = {default=1};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property ControlType = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property StyledSettings;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property Text = {default=0};
	__property TextSettings;
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TPresentedTextControl.Destroy */ inline __fastcall virtual ~TGroupBox() { }
	
};


class PASCALIMPLEMENTATION TStatusBar : public Fmx::Controls::Presentation::TPresentedControl
{
	typedef Fmx::Controls::Presentation::TPresentedControl inherited;
	
private:
	bool FShowSizeGrip;
	System::Classes::TNotifyEvent FOnHint;
	bool FAutoHint;
	void __fastcall SetShowSizeGrip(const bool Value);
	
protected:
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	virtual void __fastcall DoRootChanging(const Fmx::Types::_di_IRoot NewRoot);
	void __fastcall TriggerOnHint();
	virtual bool __fastcall DoHint();
	
public:
	__fastcall virtual TStatusBar(System::Classes::TComponent* AOwner)/* overload */;
	
__published:
	__property Action;
	__property Align = {default=4};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property ControlType = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property bool ShowSizeGrip = {read=FShowSizeGrip, write=SetShowSizeGrip, nodefault};
	__property Size;
	__property StyleLookup = {default=0};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property bool AutoHint = {read=FAutoHint, write=FAutoHint, default=0};
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
	__property System::Classes::TNotifyEvent OnHint = {read=FOnHint, write=FOnHint};
public:
	/* TPresentedControl.Destroy */ inline __fastcall virtual ~TStatusBar() { }
	
private:
	void *__IHintReceiver;	// Fmx::Controls::IHintReceiver 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {533671CF-86C5-489E-B32A-724AF8464DCE}
	operator Fmx::Controls::_di_IHintReceiver()
	{
		Fmx::Controls::_di_IHintReceiver intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Controls::IHintReceiver*(void) { return (Fmx::Controls::IHintReceiver*)&__IHintReceiver; }
	#endif
	
};


class PASCALIMPLEMENTATION TToolBar : public Fmx::Controls::Presentation::TPresentedControl
{
	typedef Fmx::Controls::Presentation::TPresentedControl inherited;
	
private:
	System::Uitypes::TAlphaColor FTintColor;
	Fmx::Controls::_di_ITintedObject FTintObject;
	void __fastcall SetTintColor(const System::Uitypes::TAlphaColor Value);
	bool __fastcall IsTintColorStored();
	
protected:
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	
public:
	__fastcall virtual TToolBar(System::Classes::TComponent* AOwner)/* overload */;
	__property Fmx::Controls::_di_ITintedObject TintObject = {read=FTintObject};
	
__published:
	__property Action;
	__property Align = {default=1};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property ControlType = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property System::Uitypes::TAlphaColor TintColor = {read=FTintColor, write=SetTintColor, stored=IsTintColorStored, nodefault};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TPresentedControl.Destroy */ inline __fastcall virtual ~TToolBar() { }
	
};


class PASCALIMPLEMENTATION TSizeGrip : public Fmx::Controls::TStyledControl
{
	typedef Fmx::Controls::TStyledControl inherited;
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	
public:
	__fastcall virtual TSizeGrip(System::Classes::TComponent* AOwner)/* overload */;
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TStyledControl.Destroy */ inline __fastcall virtual ~TSizeGrip() { }
	
private:
	void *__ISizeGrip;	// Fmx::Types::ISizeGrip 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {181729B7-53B2-45EA-97C7-91E1F3CBAABE}
	operator Fmx::Types::_di_ISizeGrip()
	{
		Fmx::Types::_di_ISizeGrip intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::ISizeGrip*(void) { return (Fmx::Types::ISizeGrip*)&__ISizeGrip; }
	#endif
	
};


class PASCALIMPLEMENTATION TSplitter : public Fmx::Controls::TStyledControl
{
	typedef Fmx::Controls::TStyledControl inherited;
	
private:
	bool FPressed;
	Fmx::Controls::TControl* FControl;
	System::Types::TPointF FDownPos;
	float FMinSize;
	float FMaxSize;
	float FNewSize;
	float FOldSize;
	float FSplit;
	bool FShowGrip;
	void __fastcall SetShowGrip(const bool Value);
	
protected:
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall Paint();
	virtual void __fastcall SetAlign(const Fmx::Types::TAlignLayout Value);
	Fmx::Controls::TControl* __fastcall FindObject();
	void __fastcall CalcSplitSize(float X, float Y, float &NewSize, float &Split);
	void __fastcall UpdateSize(float X, float Y);
	bool __fastcall DoCanResize(float &NewSize);
	void __fastcall UpdateControlSize();
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	
public:
	__fastcall virtual TSplitter(System::Classes::TComponent* AOwner)/* overload */;
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	
__published:
	__property Action;
	__property Align = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property float MinSize = {read=FMinSize, write=FMinSize};
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property bool ShowGrip = {read=FShowGrip, write=SetShowGrip, default=1};
	__property Size;
	__property StyleLookup = {default=0};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property TabStop = {default=1};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TStyledControl.Destroy */ inline __fastcall virtual ~TSplitter() { }
	
};


class PASCALIMPLEMENTATION TProgressBar : public Fmx::Controls::Presentation::TPresentedControl
{
	typedef Fmx::Controls::Presentation::TPresentedControl inherited;
	
private:
	Fmx::Controls::TOrientation FOrientation;
	Fmx::Stdactns::TValueRange* FValueRange;
	Fmx::Stdactns::TBaseValueRange* FDefaultValueRange;
	void __fastcall SetOrientation(const Fmx::Controls::TOrientation Value);
	float __fastcall GetMax();
	float __fastcall GetMin();
	float __fastcall GetValue();
	void __fastcall SetMax(const float Value);
	void __fastcall SetMin(const float Value);
	void __fastcall SetValue(const float Value);
	Fmx::Stdactns::TCustomValueRange* __fastcall GetValueRange();
	void __fastcall SetValueRange(Fmx::Stdactns::TCustomValueRange* const AValue);
	bool __fastcall DefStored();
	void __fastcall ChangedProc(System::TObject* Sender);
	bool __fastcall MaxStored();
	bool __fastcall MinStored();
	bool __fastcall ValueStored();
	
protected:
	virtual Fmx::Types::TAdjustType __fastcall ChooseAdjustType(const System::Types::TSize &FixedSize);
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	virtual void __fastcall DoRealign();
	virtual Fmx::Actnlist::TActionLinkClass __fastcall GetActionLinkClass();
	virtual void __fastcall ActionChange(System::Classes::TBasicAction* Sender, bool CheckDefaults);
	virtual void __fastcall AfterChangeProc(System::TObject* Sender);
	__property Fmx::Stdactns::TBaseValueRange* DefaultValueRange = {read=FDefaultValueRange};
	virtual void __fastcall Loaded();
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	
public:
	__fastcall virtual TProgressBar(System::Classes::TComponent* AOwner)/* overload */;
	virtual void __fastcall AfterConstruction();
	__fastcall virtual ~TProgressBar();
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property ControlType = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property float Max = {read=GetMax, write=SetMax, stored=MaxStored};
	__property float Min = {read=GetMin, write=SetMin, stored=MinStored};
	__property Opacity;
	__property Fmx::Controls::TOrientation Orientation = {read=FOrientation, write=SetOrientation, nodefault};
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TouchTargetExpansion;
	__property float Value = {read=GetValue, write=SetValue, stored=ValueStored};
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
private:
	void *__IValueRange;	// Fmx::Stdactns::IValueRange 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6DFA65EF-A8BF-4D58-9655-664B50C30312}
	operator Fmx::Stdactns::_di_IValueRange()
	{
		Fmx::Stdactns::_di_IValueRange intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Stdactns::IValueRange*(void) { return (Fmx::Stdactns::IValueRange*)&__IValueRange; }
	#endif
	
};


class PASCALIMPLEMENTATION TThumb : public Fmx::Controls::TStyledControl
{
	typedef Fmx::Controls::TStyledControl inherited;
	
private:
	TCustomTrack* FTrack;
	System::Types::TPointF FDownOffset;
	bool FPressed;
	float __fastcall PointToValue(float X, float Y);
	
public:
	__fastcall virtual TThumb(System::Classes::TComponent* AOwner)/* overload */;
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual System::Types::TRectF __fastcall GetDefaultTouchTargetExpansion();
	__property bool IsPressed = {read=FPressed, nodefault};
	
__published:
	__property Action;
	__property Align = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TStyledControl.Destroy */ inline __fastcall virtual ~TThumb() { }
	
};


enum class DECLSPEC_DENUM TMouseDownAction : unsigned char { Goto, None };

class PASCALIMPLEMENTATION TCustomTrack : public Fmx::Controls::Presentation::TPresentedControl
{
	typedef Fmx::Controls::Presentation::TPresentedControl inherited;
	
private:
	static const System::Int8 FirstInterval = System::Int8(0xa);
	
	static const System::Word SecondInterval = System::Word(0x1f4);
	
	static const System::Int8 OtherInterval = System::Int8(0x14);
	
	Fmx::Stdactns::TValueRange* FValueRange;
	Fmx::Stdactns::TBaseValueRange* FDefaultValueRange;
	TThumb* FThumb;
	TMouseDownAction FMouseDownAction;
	float FPushedValue;
	System::Math::TValueSign FPushedSign;
	System::Classes::TShiftState FPushedShift;
	Fmx::Types::TTimer* FPushedTimer;
	float FSmallChange;
	bool __fastcall GetIsTracking();
	void __fastcall SetMax(const float Value);
	void __fastcall SetMin(const float Value);
	void __fastcall SetValue(float Value);
	void __fastcall SetFrequency(const float Value);
	void __fastcall SetViewportSize(const float Value);
	float __fastcall GetFrequency();
	float __fastcall GetMax();
	float __fastcall GetMin();
	float __fastcall GetValue();
	float __fastcall GetViewportSize();
	Fmx::Stdactns::TCustomValueRange* __fastcall GetValueRange();
	void __fastcall SetValueRange(Fmx::Stdactns::TCustomValueRange* const AValue);
	void __fastcall SetValueRange_(Fmx::Stdactns::TValueRange* const Value);
	bool __fastcall DefStored();
	void __fastcall SetNewValue(const float LValue);
	void __fastcall UpdateHighlight();
	bool __fastcall FrequencyStored();
	bool __fastcall MaxStored();
	bool __fastcall MinStored();
	bool __fastcall ValueStored();
	bool __fastcall ViewportSizeStored();
	void __fastcall ObserversValueUpdate();
	double __fastcall GetIncrement();
	bool __fastcall DoSmallChange(int N, const double TargetValue);
	float __fastcall MousePosToValue(const System::Types::TPointF &MousePos);
	void __fastcall TimerProc(System::TObject* Sender);
	
protected:
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnTracking;
	bool FIgnoreViewportSize;
	Fmx::Controls::TOrientation FOrientation;
	bool FTracking;
	Fmx::Controls::TControl* FTrack;
	Fmx::Controls::TControl* FTrackHighlight;
	float FThumbSize;
	float FMinThumbSize;
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	virtual bool __fastcall CanObserve(const int ID);
	virtual void __fastcall SetOrientation(const Fmx::Controls::TOrientation Value);
	virtual System::Types::TRectF __fastcall GetThumbRect(float Value)/* overload */;
	System::Types::TRectF __fastcall GetThumbRect()/* overload */;
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall DoMouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y, float LValue);
	virtual void __fastcall KeyDown(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift);
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual Fmx::Types::TAdjustType __fastcall ChooseAdjustType(const System::Types::TSize &FixedSize);
	virtual System::Types::TRectF __fastcall GetDefaultTouchTargetExpansion();
	virtual void __fastcall DoThumbClick(System::TObject* Sender);
	virtual void __fastcall DoThumbDblClick(System::TObject* Sender);
	virtual int __fastcall GetThumbSize(bool &IgnoreViewportSize);
	virtual void __fastcall DoRealign();
	__property bool IsTracking = {read=GetIsTracking, nodefault};
	virtual Fmx::Actnlist::TActionLinkClass __fastcall GetActionLinkClass();
	virtual void __fastcall ActionChange(System::Classes::TBasicAction* Sender, bool CheckDefaults);
	virtual void __fastcall Loaded();
	virtual void __fastcall DoChanged();
	virtual void __fastcall DoTracking();
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	virtual Fmx::Stdactns::TValueRange* __fastcall CreateValueRangeTrack();
	__property TMouseDownAction MouseDownAction = {read=FMouseDownAction, write=FMouseDownAction, nodefault};
	__property Fmx::Stdactns::TBaseValueRange* DefaultValueRange = {read=FDefaultValueRange};
	virtual void __fastcall Resize();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TCustomTrack(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TCustomTrack();
	virtual void __fastcall AfterConstruction();
	__property Fmx::Stdactns::TValueRange* ValueRange = {read=FValueRange, write=SetValueRange_, stored=ValueStored};
	__property float Min = {read=GetMin, write=SetMin, stored=MinStored};
	__property float Max = {read=GetMax, write=SetMax, stored=MaxStored};
	__property float Frequency = {read=GetFrequency, write=SetFrequency, stored=FrequencyStored};
	__property float SmallChange = {read=FSmallChange, write=FSmallChange};
	__property float Value = {read=GetValue, write=SetValue, stored=ValueStored};
	__property float ViewportSize = {read=GetViewportSize, write=SetViewportSize, stored=ViewportSizeStored};
	__property Fmx::Controls::TOrientation Orientation = {read=FOrientation, write=SetOrientation, nodefault};
	__property bool Tracking = {read=FTracking, write=FTracking, default=1};
	__property TThumb* Thumb = {read=FThumb};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnTracking = {read=FOnTracking, write=FOnTracking};
private:
	void *__IValueRange;	// Fmx::Stdactns::IValueRange 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6DFA65EF-A8BF-4D58-9655-664B50C30312}
	operator Fmx::Stdactns::_di_IValueRange()
	{
		Fmx::Stdactns::_di_IValueRange intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Stdactns::IValueRange*(void) { return (Fmx::Stdactns::IValueRange*)&__IValueRange; }
	#endif
	
};


class PASCALIMPLEMENTATION TTrack : public TCustomTrack
{
	typedef TCustomTrack inherited;
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Frequency;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property Max;
	__property Min;
	__property Opacity;
	__property Orientation;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TouchTargetExpansion;
	__property Tracking = {default=1};
	__property Value;
	__property ViewportSize;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnChange;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TCustomTrack.Create */ inline __fastcall virtual TTrack(System::Classes::TComponent* AOwner)/* overload */ : TCustomTrack(AOwner) { }
	/* TCustomTrack.Destroy */ inline __fastcall virtual ~TTrack() { }
	
};


class PASCALIMPLEMENTATION TTrackBar : public TCustomTrack
{
	typedef TCustomTrack inherited;
	
public:
	__fastcall virtual TTrackBar(System::Classes::TComponent* AOwner)/* overload */;
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property ControlType = {default=0};
	__property DisableFocusEffect = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Frequency;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property Max;
	__property Min;
	__property Orientation;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TouchTargetExpansion;
	__property Tracking = {default=1};
	__property Value;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnChange;
	__property OnTracking;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TCustomTrack.Destroy */ inline __fastcall virtual ~TTrackBar() { }
	
};


class PASCALIMPLEMENTATION TBitmapTrackBar : public TTrackBar
{
	typedef TTrackBar inherited;
	
protected:
	Fmx::Graphics::TBitmap* FBitmap;
	Fmx::Objects::TShape* FBackground;
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual void __fastcall DoRealign();
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	void __fastcall UpdateBitmap();
	virtual void __fastcall FillBitmap();
	virtual void __fastcall SetOrientation(const Fmx::Controls::TOrientation Value);
	
public:
	__fastcall virtual TBitmapTrackBar(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TBitmapTrackBar();
};


class PASCALIMPLEMENTATION TSwitchModel : public Fmx::Controls::Model::TDataModel
{
	typedef Fmx::Controls::Model::TDataModel inherited;
	
private:
	bool FValue;
	System::Classes::TNotifyEvent FOnSwitch;
	void __fastcall SetValue(bool AValue);
	
protected:
	virtual void __fastcall DoChanged();
	
public:
	void __fastcall Change();
	__property bool Value = {read=FValue, write=SetValue, nodefault};
	__property System::Classes::TNotifyEvent OnSwitch = {read=FOnSwitch, write=FOnSwitch};
public:
	/* TDataModel.Create */ inline __fastcall virtual TSwitchModel(System::Classes::TComponent* const AOwner)/* overload */ : Fmx::Controls::Model::TDataModel(AOwner) { }
	/* TDataModel.Destroy */ inline __fastcall virtual ~TSwitchModel() { }
	
public:
	/* TMessageSender.Create */ inline __fastcall virtual TSwitchModel()/* overload */ : Fmx::Controls::Model::TDataModel() { }
	
};


class PASCALIMPLEMENTATION TCustomSwitch : public Fmx::Controls::Presentation::TPresentedControl
{
	typedef Fmx::Controls::Presentation::TPresentedControl inherited;
	
	
private:
	enum DECLSPEC_DENUM _TCustomSwitch__1 : unsigned char { SetChecked, CallClick };
	
	typedef System::Set<_TCustomSwitch__1, _TCustomSwitch__1::SetChecked, _TCustomSwitch__1::CallClick> TNeededToDo;
	
	
private:
	TNeededToDo FNeededToDo;
	HIDESBASE TSwitchModel* __fastcall GetModel()/* overload */;
	void __fastcall SetOnSwitch(const System::Classes::TNotifyEvent Value);
	System::Classes::TNotifyEvent __fastcall GetOnSwitch();
	void __fastcall SetIsChecked(const bool AValue);
	bool __fastcall GetIsChecked();
	bool __fastcall IsCheckedStored();
	
protected:
	virtual void __fastcall ActionChange(System::Classes::TBasicAction* Sender, bool CheckDefaults);
	virtual Fmx::Actnlist::TActionLinkClass __fastcall GetActionLinkClass();
	virtual bool __fastcall CanObserve(const int ID);
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall Click();
	virtual System::Types::TRectF __fastcall GetDefaultTouchTargetExpansion();
	virtual Fmx::Controls::Model::TDataModelClass __fastcall DefineModelClass();
	virtual void __fastcall DoSwitch();
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	
public:
	__fastcall virtual TCustomSwitch(System::Classes::TComponent* AOwner)/* overload */;
	__property TSwitchModel* Model = {read=GetModel};
	__property bool IsChecked = {read=GetIsChecked, write=SetIsChecked, stored=IsCheckedStored, nodefault};
	__property System::Classes::TNotifyEvent OnSwitch = {read=GetOnSwitch, write=SetOnSwitch};
public:
	/* TPresentedControl.Destroy */ inline __fastcall virtual ~TCustomSwitch() { }
	
private:
	void *__IIsChecked;	// Fmx::Actnlist::IIsChecked 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {DE946EB7-0A6F-4458-AEB0-C911122630D0}
	operator Fmx::Actnlist::_di_IIsChecked()
	{
		Fmx::Actnlist::_di_IIsChecked intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::IIsChecked*(void) { return (Fmx::Actnlist::IIsChecked*)&__IIsChecked; }
	#endif
	
};


class PASCALIMPLEMENTATION TSwitch : public TCustomSwitch
{
	typedef TCustomSwitch inherited;
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property ControlType = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property IsChecked;
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
	__property OnSwitch;
public:
	/* TCustomSwitch.Create */ inline __fastcall virtual TSwitch(System::Classes::TComponent* AOwner)/* overload */ : TCustomSwitch(AOwner) { }
	
public:
	/* TPresentedControl.Destroy */ inline __fastcall virtual ~TSwitch() { }
	
};


class PASCALIMPLEMENTATION TScrollBar : public Fmx::Controls::TStyledControl
{
	typedef Fmx::Controls::TStyledControl inherited;
	
private:
	Fmx::Stdactns::TValueRange* FValueRange;
	bool FTrackChanging;
	System::Classes::TNotifyEvent FOnChange;
	Fmx::Controls::TOrientation FOrientation;
	TCustomTrack* FTrack;
	TCustomButton* FMinButton;
	TCustomButton* FMaxButton;
	float FSmallChange;
	Fmx::Stdactns::TBaseValueRange* FDefaultValueRange;
	void __fastcall SetMax(const float Value);
	void __fastcall SetMin(const float Value);
	void __fastcall SetValue(const float Value);
	void __fastcall SetViewportSize(const float Value);
	float __fastcall GetMax();
	float __fastcall GetMin();
	float __fastcall GetValue();
	float __fastcall GetViewportSize();
	Fmx::Stdactns::TValueRange* __fastcall GetValueRange();
	void __fastcall SetValueRange(Fmx::Stdactns::TValueRange* const Value);
	void __fastcall SetOrientation(const Fmx::Controls::TOrientation Value);
	bool __fastcall DefStored();
	void __fastcall TrackChangedProc(System::TObject* Sender);
	void __fastcall FreeTrack();
	float __fastcall GetSmallChange();
	void __fastcall SetSmallChange(const float Value);
	bool __fastcall SmallChangeStored();
	double __fastcall GetIncrement();
	void __fastcall DoSmallChange(int N);
	bool __fastcall MaxStored();
	bool __fastcall MinStored();
	bool __fastcall ValueStored();
	bool __fastcall ViewportSizeStored();
	
protected:
	void __fastcall DoMinButtonClick(System::TObject* Sender);
	void __fastcall DoMaxButtonClick(System::TObject* Sender);
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual bool __fastcall CanObserve(const int ID);
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	virtual void __fastcall KeyDown(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift);
	virtual Fmx::Actnlist::TActionLinkClass __fastcall GetActionLinkClass();
	virtual void __fastcall DoActionClientChanged();
	virtual void __fastcall ActionChange(System::Classes::TBasicAction* Sender, bool CheckDefaults);
	__property TCustomTrack* Track = {read=FTrack};
	__property TCustomButton* MinButton = {read=FMinButton};
	__property TCustomButton* MaxButton = {read=FMaxButton};
	virtual void __fastcall DoChanged();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	virtual void __fastcall Loaded();
	__property Fmx::Stdactns::TBaseValueRange* DefaultValueRange = {read=FDefaultValueRange};
	
public:
	__fastcall virtual TScrollBar(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TScrollBar();
	virtual void __fastcall AfterConstruction();
	__property Fmx::Stdactns::TValueRange* ValueRange = {read=GetValueRange, write=SetValueRange};
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property CanFocus = {default=0};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property float Max = {read=GetMax, write=SetMax, stored=MaxStored};
	__property float Min = {read=GetMin, write=SetMin, stored=MinStored};
	__property float Value = {read=GetValue, write=SetValue, stored=ValueStored};
	__property float ViewportSize = {read=GetViewportSize, write=SetViewportSize, stored=ViewportSizeStored};
	__property float SmallChange = {read=GetSmallChange, write=SetSmallChange, stored=SmallChangeStored};
	__property Fmx::Controls::TOrientation Orientation = {read=FOrientation, write=SetOrientation, nodefault};
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
};


class PASCALIMPLEMENTATION TSmallScrollBar : public TScrollBar
{
	typedef TScrollBar inherited;
	
protected:
	virtual void __fastcall ApplyStyle();
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	
public:
	__fastcall virtual TSmallScrollBar(System::Classes::TComponent* AOwner)/* overload */;
public:
	/* TScrollBar.Destroy */ inline __fastcall virtual ~TSmallScrollBar() { }
	
};


enum class DECLSPEC_DENUM TAniIndicatorStyle : unsigned char { Linear, Circular };

class PASCALIMPLEMENTATION TAniIndicator : public Fmx::Controls::TStyledControl
{
	typedef Fmx::Controls::TStyledControl inherited;
	
	
private:
	class DELPHICLASS TRotationControl;
	class PASCALIMPLEMENTATION TRotationControl : public Fmx::Controls::TControl
	{
		typedef Fmx::Controls::TControl inherited;
		
	public:
		__property RotationAngle = {default=0};
	public:
		/* TControl.Create */ inline __fastcall virtual TRotationControl(System::Classes::TComponent* AOwner) : Fmx::Controls::TControl(AOwner) { }
		/* TControl.Destroy */ inline __fastcall virtual ~TRotationControl() { }
		
	};
	
	
	
private:
	Fmx::Controls::TControl* FLayout;
	Fmx::Ani::TAnimation* FAni;
	TAniIndicatorStyle FStyle;
	Fmx::Graphics::TBrush* FFill;
	void __fastcall SetStyle(const TAniIndicatorStyle Value);
	
protected:
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual void __fastcall SetEnabled(const bool Value);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall Paint();
	virtual bool __fastcall EnabledStored();
	
public:
	__fastcall virtual TAniIndicator(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TAniIndicator();
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {stored=EnabledStored};
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property StyleLookup = {default=0};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property TAniIndicatorStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
};


class PASCALIMPLEMENTATION TArcDial : public Fmx::Controls::Presentation::TPresentedControl
{
	typedef Fmx::Controls::Presentation::TPresentedControl inherited;
	
private:
	Fmx::Stdactns::TValueRange* FValueRange;
	bool FValueChanged;
	bool FPressing;
	System::Classes::TNotifyEvent FOnChange;
	float FSaveValue;
	bool FTracking;
	bool FShowValue;
	float FOldValue;
	Fmx::Stdactns::TBaseValueRange* FDefaultValueRange;
	void __fastcall SetValue(const float Value);
	void __fastcall SetShowValue(const bool Value);
	bool __fastcall DefStored();
	Fmx::Stdactns::TCustomValueRange* __fastcall GetValueRange();
	void __fastcall SetValueRange(Fmx::Stdactns::TCustomValueRange* const AValue);
	void __fastcall SetValueRange_(Fmx::Stdactns::TValueRange* const Value);
	float __fastcall GetValue();
	float __fastcall GetFrequency();
	void __fastcall SetFrequency(const float Value);
	bool __fastcall FrequencyStored();
	bool __fastcall ValueStored();
	
protected:
	Fmx::Controls::TControl* __fastcall Tick();
	Fmx::Objects::TText* __fastcall Text();
	virtual void __fastcall ApplyStyle();
	virtual bool __fastcall CanObserve(const int ID);
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	virtual void __fastcall Loaded();
	virtual Fmx::Actnlist::TActionLinkClass __fastcall GetActionLinkClass();
	virtual void __fastcall ActionChange(System::Classes::TBasicAction* Sender, bool CheckDefaults);
	void __fastcall BeforeChangeProc(System::TObject* Sender);
	void __fastcall ValueRangeChangeProc(System::TObject* Sender);
	virtual void __fastcall AfterChangedProc(System::TObject* Sender);
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	__property Fmx::Stdactns::TBaseValueRange* DefaultValueRange = {read=FDefaultValueRange};
	
public:
	__fastcall virtual TArcDial(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TArcDial();
	virtual void __fastcall AfterConstruction();
	__property Fmx::Stdactns::TValueRange* ValueRange = {read=FValueRange, write=SetValueRange_};
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property ControlType = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property bool ShowValue = {read=FShowValue, write=SetShowValue, default=0};
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TouchTargetExpansion;
	__property bool Tracking = {read=FTracking, write=FTracking, default=1};
	__property float Value = {read=GetValue, write=SetValue, stored=ValueStored};
	__property float Frequency = {read=GetFrequency, write=SetFrequency, stored=FrequencyStored};
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
private:
	void *__IValueRange;	// Fmx::Stdactns::IValueRange 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6DFA65EF-A8BF-4D58-9655-664B50C30312}
	operator Fmx::Stdactns::_di_IValueRange()
	{
		Fmx::Stdactns::_di_IValueRange intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Stdactns::IValueRange*(void) { return (Fmx::Stdactns::IValueRange*)&__IValueRange; }
	#endif
	
};


class PASCALIMPLEMENTATION TExpanderButton : public TCustomButton
{
	typedef TCustomButton inherited;
	
public:
	__fastcall virtual TExpanderButton(System::Classes::TComponent* AOwner)/* overload */;
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property AutoTranslate = {default=1};
	__property CanFocus = {default=0};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DisableFocusEffect = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Font;
	__property StyledSettings;
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property StaysPressed = {default=0};
	__property IsPressed = {default=0};
	__property Locked = {default=0};
	__property Padding;
	__property ModalResult = {default=0};
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RepeatClick = {default=0};
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
	__property TextAlign = {default=0};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property WordWrap = {default=0};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TCustomButton.Destroy */ inline __fastcall virtual ~TExpanderButton() { }
	
};


class PASCALIMPLEMENTATION TExpander : public Fmx::Controls::TTextControl
{
	typedef Fmx::Controls::TTextControl inherited;
	
public:
	static const System::Int8 cDefaultHeaderHeight = System::Int8(0x19);
	
	
private:
	bool FShowCheck;
	bool FIsChecked;
	System::Classes::TNotifyEvent FOnCheckChange;
	int FContentHeight;
	Fmx::Controls::TControl* FHeader;
	int FHeaderHeight;
	int FStyleHeaderHeight;
	System::Classes::TNotifyEvent FOnExpandedChanging;
	System::Classes::TNotifyEvent FOnExpandedChanged;
	bool FChangingState;
	void __fastcall HandleButtonClick(System::TObject* Sender);
	void __fastcall HandleCheckChange(System::TObject* Sender);
	void __fastcall SetIsChecked(const bool Value);
	void __fastcall SetIsExpanded(const bool Value);
	void __fastcall SetShowCheck(const bool Value);
	void __fastcall UpdateControlSize(const bool ChangingState);
	void __fastcall ExpandedChanging();
	void __fastcall ExpandedChanged();
	
protected:
	bool FIsExpanded;
	Fmx::Controls::TContent* FContent;
	TCustomButton* FButton;
	TCheckBox* FCheck;
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual void __fastcall DoRealign();
	virtual void __fastcall DoStyleChanged();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall ReadContentSize(System::Classes::TReader* Reader);
	void __fastcall WriteContentSize(System::Classes::TWriter* Writer);
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	void __fastcall UpdateContentSize();
	virtual void __fastcall DoResized();
	virtual bool __fastcall DoSetSize(Fmx::Types::TControlSize* const ASize, const bool NewPlatformDefault, float ANewWidth, float ANewHeight, float &ALastWidth, float &ALastHeight);
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	virtual void __fastcall DoExpandedChanging();
	virtual void __fastcall DoExpandedChanged();
	virtual void __fastcall DoCheckedChanged();
	virtual Fmx::Controls::TTextSettingsInfo::TCustomTextSettingsClass __fastcall GetTextSettingsClass();
	void __fastcall SetHeaderHeight(const int Value);
	int __fastcall GetHeaderHeight();
	int __fastcall EffectiveHeaderHeight();
	int __fastcall DefaultHeaderHeight();
	
public:
	__fastcall virtual TExpander(System::Classes::TComponent* AOwner)/* overload */;
	virtual Fmx::Types::_di_ITabList __fastcall GetTabList();
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property AutoTranslate = {default=1};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property StyledSettings;
	__property TextSettings;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property int HeaderHeight = {read=GetHeaderHeight, write=SetHeaderHeight, default=-1};
	__property bool IsChecked = {read=FIsChecked, write=SetIsChecked, default=1};
	__property bool IsExpanded = {read=FIsExpanded, write=SetIsExpanded, default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property bool ShowCheck = {read=FShowCheck, write=SetShowCheck, nodefault};
	__property Size;
	__property StyleLookup = {default=0};
	__property Text = {default=0};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property System::Classes::TNotifyEvent OnCheckChange = {read=FOnCheckChange, write=FOnCheckChange};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
	__property System::Classes::TNotifyEvent OnExpandedChanging = {read=FOnExpandedChanging, write=FOnExpandedChanging};
	__property System::Classes::TNotifyEvent OnExpandedChanged = {read=FOnExpandedChanged, write=FOnExpandedChanged};
public:
	/* TTextControl.Destroy */ inline __fastcall virtual ~TExpander() { }
	
};


typedef void __fastcall (__closure *TImageLoadedEvent)(System::TObject* Sender, const System::UnicodeString FileName);

class PASCALIMPLEMENTATION TImageControl : public Fmx::Controls::TStyledControl
{
	typedef Fmx::Controls::TStyledControl inherited;
	
private:
	Fmx::Objects::TImage* FImage;
	System::Classes::TNotifyEvent FOnChange;
	Fmx::Graphics::TBitmap* FBitmap;
	bool FEnableOpenDialog;
	TImageLoadedEvent FOnLoaded;
	void __fastcall SetBitmap(Fmx::Graphics::TBitmap* const Value);
	void __fastcall UpdateImage();
	
protected:
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	virtual bool __fastcall CanObserve(const int ID);
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual void __fastcall Click();
	virtual void __fastcall DragOver(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point, Fmx::Types::TDragOperation &Operation);
	virtual void __fastcall DragDrop(const Fmx::Types::TDragObject &Data, const System::Types::TPointF &Point);
	virtual void __fastcall DoBitmapChanged(System::TObject* Sender);
	virtual void __fastcall DoLoadFromFile(const System::UnicodeString FileName);
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	__property Fmx::Objects::TImage* Image = {read=FImage};
	
public:
	__fastcall virtual TImageControl(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TImageControl();
	void __fastcall LoadFromFile(const System::UnicodeString FileName);
	bool __fastcall ShowOpenDialog();
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property Fmx::Graphics::TBitmap* Bitmap = {read=FBitmap, write=SetBitmap};
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DisableFocusEffect = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property bool EnableOpenDialog = {read=FEnableOpenDialog, write=FEnableOpenDialog, default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TImageLoadedEvent OnLoaded = {read=FOnLoaded, write=FOnLoaded};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
};


class PASCALIMPLEMENTATION TPathLabel : public Fmx::Controls::TStyledControl
{
	typedef Fmx::Controls::TStyledControl inherited;
	
private:
	Fmx::Objects::TCustomPath* FPath;
	Fmx::Objects::TPathWrapMode __fastcall GetWrapMode();
	void __fastcall SetWrapMode(const Fmx::Objects::TPathWrapMode Value);
	Fmx::Graphics::TPathData* __fastcall GetPathData();
	void __fastcall SetPathData(Fmx::Graphics::TPathData* const Value);
	
protected:
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	
public:
	__fastcall virtual TPathLabel(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TPathLabel();
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property Fmx::Graphics::TPathData* Data = {read=GetPathData, write=SetPathData};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property Hint = {default=0};
	__property HitTest = {default=0};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property Fmx::Objects::TPathWrapMode WrapMode = {read=GetWrapMode, write=SetWrapMode, default=2};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word MM_VALUE_CHANGED = System::Word(0x1701);
}	/* namespace Stdctrls */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_STDCTRLS)
using namespace Fmx::Stdctrls;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_StdctrlsHPP
