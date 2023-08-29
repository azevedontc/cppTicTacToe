// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Edit.pas' rev: 35.00 (Windows)

#ifndef Fmx_EditHPP
#define Fmx_EditHPP

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
#include <System.Rtti.hpp>
#include <FMX.Platform.hpp>
#include <FMX.Types.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Text.hpp>
#include <FMX.Graphics.hpp>
#include <FMX.Presentation.Messages.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Controls.Model.hpp>
#include <FMX.Clipboard.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Edit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomEditModel;
class DELPHICLASS TContentEdit;
class DELPHICLASS TCustomEdit;
__interface DELPHIINTERFACE IEditControl;
typedef System::DelphiInterface<IEditControl> _di_IEditControl;
class DELPHICLASS TEditButton;
class DELPHICLASS TClearEditButton;
class DELPHICLASS TPasswordEditButton;
class DELPHICLASS TSearchEditButton;
class DELPHICLASS TEllipsesEditButton;
class DELPHICLASS TDropDownEditButton;
class DELPHICLASS TSpinEditButton;
class DELPHICLASS TEdit;
class DELPHICLASS TClearingEdit;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TCustomEditModel : public Fmx::Controls::Model::TDataModel
{
	typedef Fmx::Controls::Model::TDataModel inherited;
	
	
public:
	struct DECLSPEC_DRECORD TGetCaretPositionInfo
	{
	public:
		System::Types::TPointF HitPoint;
		int CaretPosition;
	};
	
	
	
public:
	static const unsigned DefaultSelectionColor = unsigned(0x802a8adf);
	
	static const Fmx::Types::TTextAlign DefaultHorzAlign = (Fmx::Types::TTextAlign)(1);
	
	static const unsigned DefaultFontColor = unsigned(0xff000000);
	
	static const bool DefaultInputSupport = true;
	
	static const System::Uitypes::TEditCharCase DefaultCharCase = (System::Uitypes::TEditCharCase)(0);
	
	
private:
	bool FChanged;
	System::UnicodeString FText;
	int FSelStart;
	int FSelLength;
	bool FReadOnly;
	int FMaxLength;
	bool FPassword;
	Fmx::Types::TVirtualKeyboardType FKeyboardType;
	Fmx::Types::TReturnKeyType FReturnKeyType;
	Fmx::Types::TImeMode FImeMode;
	bool FKillFocusByReturn;
	bool FCheckSpelling;
	System::UnicodeString FTextPrompt;
	int FCaretPosition;
	Fmx::Types::TCustomCaret* FCaret;
	bool FTyping;
	System::UnicodeString FFilterChar;
	bool FInputSupport;
	Fmx::Controls::TTextSettingsInfo* FTextSettingsInfo;
	Fmx::Graphics::TBrush* FSelectionFill;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnChangeTracking;
	System::Classes::TNotifyEvent FOnTyping;
	Fmx::Text::TValidateTextEvent FOnValidating;
	Fmx::Text::TValidateTextEvent FOnValidate;
	bool FValidating;
	System::Uitypes::TEditCharCase FCharCase;
	void __fastcall SetSelStart(const int Value);
	void __fastcall SetSelLength(const int Value);
	void __fastcall SetMaxLength(const int Value);
	void __fastcall SetReadOnly(const bool Value);
	void __fastcall SetPassword(const bool Value);
	void __fastcall SetImeMode(const Fmx::Types::TImeMode Value);
	void __fastcall SetKeyboardType(const Fmx::Types::TVirtualKeyboardType Value);
	void __fastcall SetReturnKeyType(const Fmx::Types::TReturnKeyType Value);
	void __fastcall SetKillFocusByReturn(const bool Value);
	void __fastcall SetCheckSpelling(const bool Value);
	void __fastcall SetTextPrompt(const System::UnicodeString Value);
	void __fastcall SetCaretPosition(const int Value);
	void __fastcall SetCaret(Fmx::Types::TCustomCaret* const Value);
	void __fastcall SetTyping(const bool Value);
	void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetSelectionFill(Fmx::Graphics::TBrush* const Value);
	void __fastcall SetFilterChar(const System::UnicodeString Value);
	void __fastcall SetCharCase(const System::Uitypes::TEditCharCase Value);
	
protected:
	virtual System::UnicodeString __fastcall DoFiltering(const System::UnicodeString Value);
	virtual System::UnicodeString __fastcall DoTruncating(const System::UnicodeString Value);
	virtual System::UnicodeString __fastcall DoValidating(const System::UnicodeString Value);
	virtual System::UnicodeString __fastcall DoValidate(const System::UnicodeString Value);
	virtual void __fastcall DoChangeTracking();
	virtual void __fastcall DoChange();
	virtual void __fastcall ResultTextSettingsChanged();
	virtual Fmx::Controls::TTextSettingsInfo::TCustomTextSettingsClass __fastcall GetTextSettingsClass();
	__property bool Validating = {read=FValidating, nodefault};
	
public:
	__fastcall virtual TCustomEditModel()/* overload */;
	__fastcall virtual ~TCustomEditModel();
	bool __fastcall HasSelection();
	System::UnicodeString __fastcall SelectedText();
	void __fastcall Change();
	void __fastcall SetTextWithoutValidation(const System::UnicodeString Value);
	int __fastcall GetCaretPositionByPoint(const System::Types::TPointF &AHitPoint);
	__property int CaretPosition = {read=FCaretPosition, write=SetCaretPosition, nodefault};
	__property Fmx::Types::TCustomCaret* Caret = {read=FCaret, write=SetCaret};
	__property bool CheckSpelling = {read=FCheckSpelling, write=SetCheckSpelling, nodefault};
	__property System::UnicodeString FilterChar = {read=FFilterChar, write=SetFilterChar};
	__property bool ReadOnly = {read=FReadOnly, write=SetReadOnly, nodefault};
	__property Fmx::Types::TImeMode ImeMode = {read=FImeMode, write=SetImeMode, nodefault};
	__property bool InputSupport = {read=FInputSupport, write=FInputSupport, nodefault};
	__property Fmx::Types::TVirtualKeyboardType KeyboardType = {read=FKeyboardType, write=SetKeyboardType, nodefault};
	__property bool KillFocusByReturn = {read=FKillFocusByReturn, write=SetKillFocusByReturn, nodefault};
	__property int MaxLength = {read=FMaxLength, write=SetMaxLength, nodefault};
	__property bool Password = {read=FPassword, write=SetPassword, nodefault};
	__property Fmx::Types::TReturnKeyType ReturnKeyType = {read=FReturnKeyType, write=SetReturnKeyType, nodefault};
	__property Fmx::Graphics::TBrush* SelectionFill = {read=FSelectionFill, write=SetSelectionFill};
	__property int SelStart = {read=FSelStart, write=SetSelStart, nodefault};
	__property int SelLength = {read=FSelLength, write=SetSelLength, nodefault};
	__property System::UnicodeString Text = {read=FText, write=SetText};
	__property Fmx::Controls::TTextSettingsInfo* TextSettingsInfo = {read=FTextSettingsInfo};
	__property System::UnicodeString TextPrompt = {read=FTextPrompt, write=SetTextPrompt};
	__property bool Typing = {read=FTyping, write=SetTyping, nodefault};
	__property System::Uitypes::TEditCharCase CharCase = {read=FCharCase, write=SetCharCase, nodefault};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnChangeTracking = {read=FOnChangeTracking, write=FOnChangeTracking};
	__property System::Classes::TNotifyEvent OnTyping = {read=FOnTyping, write=FOnTyping};
	__property Fmx::Text::TValidateTextEvent OnValidating = {read=FOnValidating, write=FOnValidating};
	__property Fmx::Text::TValidateTextEvent OnValidate = {read=FOnValidate, write=FOnValidate};
public:
	/* TDataModel.Create */ inline __fastcall virtual TCustomEditModel(System::Classes::TComponent* const AOwner)/* overload */ : Fmx::Controls::Model::TDataModel(AOwner) { }
	
};


class PASCALIMPLEMENTATION TContentEdit : public Fmx::Controls::TContent
{
	typedef Fmx::Controls::TContent inherited;
	
private:
	TCustomEdit* __fastcall GetEdit();
	
protected:
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	
public:
	__fastcall virtual TContentEdit(System::Classes::TComponent* AOwner);
	__property TCustomEdit* Edit = {read=GetEdit};
public:
	/* TControl.Destroy */ inline __fastcall virtual ~TContentEdit() { }
	
};


class PASCALIMPLEMENTATION TCustomEdit : public Fmx::Controls::Presentation::TPresentedControl
{
	typedef Fmx::Controls::Presentation::TPresentedControl inherited;
	
private:
	TContentEdit* FButtonsContent;
	bool FSavedReadOnly;
	int FSavedMaxLength;
	Fmx::Types::TTextAlign FSavedTextAlign;
	int __fastcall GetOriginCaretPosition();
	System::UnicodeString __fastcall GetSelText();
	void __fastcall SetSelLength(const int Value);
	int __fastcall GetSelLength();
	void __fastcall SetSelStart(const int Value);
	int __fastcall GetSelStart();
	void __fastcall SetCaretPosition(const int Value);
	int __fastcall GetCaretPosition();
	void __fastcall SetCaret(Fmx::Types::TCustomCaret* const Value);
	Fmx::Types::TCustomCaret* __fastcall GetCaret();
	void __fastcall SetPromptText(const System::UnicodeString Prompt);
	System::UnicodeString __fastcall GetPromptText();
	void __fastcall SetOnChange(const System::Classes::TNotifyEvent Value);
	System::Classes::TNotifyEvent __fastcall GetOnChange();
	void __fastcall SetOnChangeTracking(const System::Classes::TNotifyEvent Value);
	System::Classes::TNotifyEvent __fastcall GetOnChangeTracking();
	void __fastcall SetMaxLength(const int Value);
	int __fastcall GetMaxLength();
	void __fastcall SetPassword(const bool Value);
	bool __fastcall GetPassword();
	void __fastcall SetOnTyping(const System::Classes::TNotifyEvent Value);
	System::Classes::TNotifyEvent __fastcall GetOnTyping();
	void __fastcall SetKillFocusByReturn(const bool Value);
	bool __fastcall GetKillFocusByReturn();
	void __fastcall SetCheckSpelling(const bool Value);
	bool __fastcall GetCheckSpelling();
	Fmx::Graphics::TBrush* __fastcall GetSelectionFill();
	System::Uitypes::TEditCharCase __fastcall GetCharCase();
	void __fastcall SetCharCase(const System::Uitypes::TEditCharCase Value);
	Fmx::Graphics::TTextSettings* __fastcall GetDefaultTextSettings();
	Fmx::Graphics::TTextSettings* __fastcall GetTextSettings();
	Fmx::Graphics::TTextSettings* __fastcall GetResultingTextSettings();
	Fmx::Types::TStyledSettings __fastcall GetStyledSettings();
	void __fastcall SetTextAlign(const Fmx::Types::TTextAlign Value);
	Fmx::Types::TTextAlign __fastcall GetTextAlign();
	void __fastcall SetVertTextAlign(const Fmx::Types::TTextAlign Value);
	Fmx::Types::TTextAlign __fastcall GetVertTextAlign();
	void __fastcall SetFont(Fmx::Graphics::TFont* const Value);
	Fmx::Graphics::TFont* __fastcall GetFont();
	void __fastcall SetFontColor(const System::Uitypes::TAlphaColor Value);
	System::Uitypes::TAlphaColor __fastcall GetFontColor();
	bool __fastcall GetTyping();
	void __fastcall SetTyping(const bool Value);
	System::UnicodeString __fastcall GetFilterChar();
	void __fastcall SetFilterChar(const System::UnicodeString Value);
	bool __fastcall GetInputSupport();
	HIDESBASE TCustomEditModel* __fastcall GetModel()/* overload */;
	System::Types::TRectF __fastcall GetTextContentRect();
	Fmx::Text::TValidateTextEvent __fastcall GetOnValidate();
	Fmx::Text::TValidateTextEvent __fastcall GetOnValidating();
	void __fastcall SetOnValidate(const Fmx::Text::TValidateTextEvent Value);
	void __fastcall SetOnValidating(const Fmx::Text::TValidateTextEvent Value);
	void __fastcall ReadReadOnly(System::Classes::TReader* Reader);
	void __fastcall SetReadOnly(const bool Value);
	bool __fastcall GetReadOnly();
	void __fastcall ShowCaret();
	void __fastcall HideCaret();
	
protected:
	Fmx::Platform::_di_IFMXClipboardService FClipboardSvc;
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	virtual void __fastcall Loaded();
	virtual System::UnicodeString __fastcall GetText();
	virtual void __fastcall SetText(const System::UnicodeString Value);
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual Fmx::Types::TImeMode __fastcall GetImeMode();
	virtual void __fastcall SetImeMode(const Fmx::Types::TImeMode Value);
	virtual void __fastcall SetInputSupport(const bool Value);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	virtual void __fastcall Resize();
	virtual void __fastcall RealignButtonsContainer();
	virtual bool __fastcall CanObserve(const int ID);
	virtual void __fastcall ObserverAdded(const int ID, const System::Classes::_di_IObserver Observer);
	void __fastcall ObserverToggle(const System::Classes::_di_IObserver AObserver, const bool Value);
	virtual void __fastcall SetTextSettings(Fmx::Graphics::TTextSettings* const Value);
	virtual void __fastcall SetStyledSettings(const Fmx::Types::TStyledSettings Value);
	virtual bool __fastcall StyledSettingsStored();
	void __fastcall SetKeyboardType(Fmx::Types::TVirtualKeyboardType Value);
	Fmx::Types::TVirtualKeyboardType __fastcall GetKeyboardType();
	void __fastcall SetReturnKeyType(Fmx::Types::TReturnKeyType Value);
	Fmx::Types::TReturnKeyType __fastcall GetReturnKeyType();
	__property bool InputSupport = {read=GetInputSupport, write=SetInputSupport, nodefault};
	int __fastcall GetItemsCount();
	Fmx::Types::TFmxObject* __fastcall GetItem(const int AIndex);
	virtual void __fastcall ButtonsChanged();
	virtual Fmx::Controls::Model::TDataModelClass __fastcall DefineModelClass();
	virtual System::UnicodeString __fastcall DefinePresentationName();
	
public:
	__property ControlType = {default=0};
	__property TCustomEditModel* Model = {read=GetModel};
	__fastcall virtual TCustomEdit(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TCustomEdit();
	void __fastcall DeleteSelection();
	void __fastcall CopyToClipboard();
	void __fastcall CutToClipboard();
	void __fastcall PasteFromClipboard();
	void __fastcall SelectAll();
	void __fastcall SelectWord();
	void __fastcall ResetSelection();
	void __fastcall GoToTextEnd();
	void __fastcall GoToTextBegin();
	void __fastcall Replace(const int AStartPos, const int ALength, const System::UnicodeString AStr);
	bool __fastcall HasSelection();
	__property TContentEdit* ButtonsContent = {read=FButtonsContent};
	__property Fmx::Types::TCustomCaret* Caret = {read=GetCaret, write=SetCaret};
	__property int CaretPosition = {read=GetCaretPosition, write=SetCaretPosition, nodefault};
	__property System::Types::TRectF TextContentRect = {read=GetTextContentRect};
	__property bool CheckSpelling = {read=GetCheckSpelling, write=SetCheckSpelling, default=0};
	__property Fmx::Graphics::TTextSettings* DefaultTextSettings = {read=GetDefaultTextSettings};
	__property Fmx::Graphics::TFont* Font = {read=GetFont, write=SetFont};
	__property System::Uitypes::TAlphaColor FontColor = {read=GetFontColor, write=SetFontColor, default=-16777216};
	__property System::UnicodeString FilterChar = {read=GetFilterChar, write=SetFilterChar};
	__property Fmx::Types::TImeMode ImeMode = {read=GetImeMode, write=SetImeMode, default=0};
	__property Fmx::Types::TVirtualKeyboardType KeyboardType = {read=GetKeyboardType, write=SetKeyboardType, default=0};
	__property bool KillFocusByReturn = {read=GetKillFocusByReturn, write=SetKillFocusByReturn, default=0};
	__property int MaxLength = {read=GetMaxLength, write=SetMaxLength, default=0};
	__property bool Password = {read=GetPassword, write=SetPassword, default=0};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property Fmx::Types::TReturnKeyType ReturnKeyType = {read=GetReturnKeyType, write=SetReturnKeyType, default=0};
	__property Fmx::Graphics::TTextSettings* ResultingTextSettings = {read=GetResultingTextSettings};
	__property Fmx::Graphics::TBrush* SelectionFill = {read=GetSelectionFill};
	__property int SelStart = {read=GetSelStart, write=SetSelStart, nodefault};
	__property int SelLength = {read=GetSelLength, write=SetSelLength, nodefault};
	__property System::UnicodeString SelText = {read=GetSelText};
	__property Fmx::Types::TStyledSettings StyledSettings = {read=GetStyledSettings, write=SetStyledSettings, stored=StyledSettingsStored, nodefault};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property Fmx::Types::TTextAlign TextAlign = {read=GetTextAlign, write=SetTextAlign, default=1};
	__property Fmx::Graphics::TTextSettings* TextSettings = {read=GetTextSettings, write=SetTextSettings};
	__property System::UnicodeString TextPrompt = {read=GetPromptText, write=SetPromptText};
	__property bool Typing = {read=GetTyping, write=SetTyping, default=0};
	__property Fmx::Types::TTextAlign VertTextAlign = {read=GetVertTextAlign, write=SetVertTextAlign, default=0};
	__property System::Uitypes::TEditCharCase CharCase = {read=GetCharCase, write=SetCharCase, nodefault};
	__property System::Classes::TNotifyEvent OnChange = {read=GetOnChange, write=SetOnChange};
	__property System::Classes::TNotifyEvent OnChangeTracking = {read=GetOnChangeTracking, write=SetOnChangeTracking};
	__property System::Classes::TNotifyEvent OnTyping = {read=GetOnTyping, write=SetOnTyping};
	__property Fmx::Text::TValidateTextEvent OnValidating = {read=GetOnValidating, write=SetOnValidating};
	__property Fmx::Text::TValidateTextEvent OnValidate = {read=GetOnValidate, write=SetOnValidate};
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
private:
	void *__ICaret;	// Fmx::Types::ICaret 
	void *__IReadOnly;	// Fmx::Types::IReadOnly 
	void *__ITextSettings;	// Fmx::Graphics::ITextSettings 
	void *__IItemsContainer;	// Fmx::Types::IItemsContainer 
	void *__IVirtualKeyboardControl;	// Fmx::Types::IVirtualKeyboardControl 
	void *__ITextActions;	// Fmx::Text::ITextActions 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F4EFFFB8-E83C-421D-B123-C370FB7BCCC7}
	operator Fmx::Types::_di_ICaret()
	{
		Fmx::Types::_di_ICaret intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::ICaret*(void) { return (Fmx::Types::ICaret*)&__ICaret; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {495B8B0C-D7C8-4835-AA5F-580939D21444}
	operator Fmx::Types::_di_IReadOnly()
	{
		Fmx::Types::_di_IReadOnly intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IReadOnly*(void) { return (Fmx::Types::IReadOnly*)&__IReadOnly; }
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
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {100B2F87-5DCB-4699-B751-B4439588E82A}
	operator Fmx::Types::_di_IItemsContainer()
	{
		Fmx::Types::_di_IItemsContainer intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IItemsContainer*(void) { return (Fmx::Types::IItemsContainer*)&__IItemsContainer; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {41127080-97FC-4C30-A880-AB6CD351A6C4}
	operator Fmx::Types::_di_IVirtualKeyboardControl()
	{
		Fmx::Types::_di_IVirtualKeyboardControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IVirtualKeyboardControl*(void) { return (Fmx::Types::IVirtualKeyboardControl*)&__IVirtualKeyboardControl; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9DB49126-36DB-4193-AE96-C0BD27090DCD}
	operator Fmx::Text::_di_ITextActions()
	{
		Fmx::Text::_di_ITextActions intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Text::ITextActions*(void) { return (Fmx::Text::ITextActions*)&__ITextActions; }
	#endif
	
};


__interface  INTERFACE_UUID("{4C7EE0A7-06EC-4515-B843-B608FB984468}") IEditControl  : public System::IInterface 
{
	virtual System::Types::TRectF __fastcall BoundsRect() = 0 ;
	virtual Fmx::Controls::TControl* __fastcall GetControl() = 0 ;
};

class PASCALIMPLEMENTATION TEditButton : public Fmx::Stdctrls::TCustomButton
{
	typedef Fmx::Stdctrls::TCustomButton inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	virtual void __fastcall SetName(const System::Classes::TComponentName NewName);
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	Fmx::Controls::TControl* __fastcall GetControl();
	
public:
	__fastcall virtual TEditButton(System::Classes::TComponent* AOwner)/* overload */;
	TCustomEdit* __fastcall GetEdit();
	
__published:
	__property Action;
	__property Anchors;
	__property AutoTranslate = {default=1};
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DisableFocusEffect = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property TextSettings;
	__property Font;
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
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
	__property StaysPressed = {default=0};
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
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
	/* TCustomButton.Destroy */ inline __fastcall virtual ~TEditButton() { }
	
private:
	void *__IEditControl;	// IEditControl 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4C7EE0A7-06EC-4515-B843-B608FB984468}
	operator _di_IEditControl()
	{
		_di_IEditControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IEditControl*(void) { return (IEditControl*)&__IEditControl; }
	#endif
	
};


class PASCALIMPLEMENTATION TClearEditButton : public TEditButton
{
	typedef TEditButton inherited;
	
protected:
	virtual void __fastcall Click();
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	
public:
	__fastcall virtual TClearEditButton(System::Classes::TComponent* AOwner)/* overload */;
public:
	/* TCustomButton.Destroy */ inline __fastcall virtual ~TClearEditButton() { }
	
};


class PASCALIMPLEMENTATION TPasswordEditButton : public TEditButton
{
	typedef TEditButton inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	
public:
	__fastcall virtual TPasswordEditButton(System::Classes::TComponent* AOwner)/* overload */;
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
public:
	/* TCustomButton.Destroy */ inline __fastcall virtual ~TPasswordEditButton() { }
	
};


class PASCALIMPLEMENTATION TSearchEditButton : public TEditButton
{
	typedef TEditButton inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	
public:
	__fastcall virtual TSearchEditButton(System::Classes::TComponent* AOwner)/* overload */;
public:
	/* TCustomButton.Destroy */ inline __fastcall virtual ~TSearchEditButton() { }
	
};


class PASCALIMPLEMENTATION TEllipsesEditButton : public TEditButton
{
	typedef TEditButton inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	
public:
	__fastcall virtual TEllipsesEditButton(System::Classes::TComponent* AOwner)/* overload */;
public:
	/* TCustomButton.Destroy */ inline __fastcall virtual ~TEllipsesEditButton() { }
	
};


class PASCALIMPLEMENTATION TDropDownEditButton : public TEditButton
{
	typedef TEditButton inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	
public:
	__fastcall virtual TDropDownEditButton(System::Classes::TComponent* AOwner)/* overload */;
public:
	/* TCustomButton.Destroy */ inline __fastcall virtual ~TDropDownEditButton() { }
	
};


class PASCALIMPLEMENTATION TSpinEditButton : public Fmx::Controls::TStyledControl
{
	typedef Fmx::Controls::TStyledControl inherited;
	
private:
	bool FRepeatClick;
	Fmx::Stdctrls::TCustomButton* FUpButton;
	Fmx::Stdctrls::TCustomButton* FDownButton;
	System::Classes::TNotifyEvent FOnUpClick;
	System::Classes::TNotifyEvent FOnDownClick;
	void __fastcall SetRepeatClick(const bool Value);
	
protected:
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	void __fastcall DoUpButtonClick(System::TObject* Sender);
	void __fastcall DoDownButtonClick(System::TObject* Sender);
	Fmx::Controls::TControl* __fastcall GetControl();
	
public:
	__fastcall virtual TSpinEditButton(System::Classes::TComponent* AOwner)/* overload */;
	
__published:
	__property Anchors;
	__property AutoTranslate = {default=1};
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DisableFocusEffect = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Locked = {default=0};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property bool RepeatClick = {read=FRepeatClick, write=SetRepeatClick, default=0};
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
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
	__property System::Classes::TNotifyEvent OnDownClick = {read=FOnDownClick, write=FOnDownClick};
	__property System::Classes::TNotifyEvent OnUpClick = {read=FOnUpClick, write=FOnUpClick};
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
	/* TStyledControl.Destroy */ inline __fastcall virtual ~TSpinEditButton() { }
	
private:
	void *__IEditControl;	// IEditControl 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4C7EE0A7-06EC-4515-B843-B608FB984468}
	operator _di_IEditControl()
	{
		_di_IEditControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IEditControl*(void) { return (IEditControl*)&__IEditControl; }
	#endif
	
};


class PASCALIMPLEMENTATION TEdit : public TCustomEdit
{
	typedef TCustomEdit inherited;
	
public:
	__property Action;
	
__published:
	__property ControlType = {default=0};
	__property OnPresentationNameChoosing;
	__property Cursor = {default=-4};
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property DisableFocusEffect = {default=0};
	__property KeyboardType = {default=0};
	__property ReturnKeyType = {default=0};
	__property Password = {default=0};
	__property ReadOnly = {default=0};
	__property MaxLength = {default=0};
	__property FilterChar = {default=0};
	__property Text = {default=0};
	__property TextSettings;
	__property ImeMode = {default=0};
	__property Position;
	__property Width;
	__property Height;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Locked = {default=0};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property TextPrompt = {default=0};
	__property StyleLookup = {default=0};
	__property StyledSettings;
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Caret;
	__property KillFocusByReturn = {default=0};
	__property CheckSpelling = {default=0};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property CharCase = {default=0};
	__property OnChange;
	__property OnChangeTracking;
	__property OnTyping;
	__property OnApplyStyleLookup;
	__property OnValidating;
	__property OnValidate;
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
	/* TCustomEdit.Create */ inline __fastcall virtual TEdit(System::Classes::TComponent* AOwner)/* overload */ : TCustomEdit(AOwner) { }
	/* TCustomEdit.Destroy */ inline __fastcall virtual ~TEdit() { }
	
};


class PASCALIMPLEMENTATION TClearingEdit _DEPRECATED_ATTRIBUTE1("Use TEdit with TClearEditButton")  : public TEdit
{
	typedef TEdit inherited;
	
protected:
	virtual System::UnicodeString __fastcall DefinePresentationName _DEPRECATED_ATTRIBUTE0 ();
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName _DEPRECATED_ATTRIBUTE0 ();
	
public:
	__fastcall virtual TClearingEdit _DEPRECATED_ATTRIBUTE0 (System::Classes::TComponent* AOwner)/* overload */;
public:
	/* TCustomEdit.Destroy */ inline __fastcall virtual ~TClearingEdit() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word MM_EDIT_SELSTART_CHANGED = System::Word(0x1701);
static const System::Word MM_EDIT_SELLENGTH_CHANGED = System::Word(0x1702);
static const System::Word MM_EDIT_READONLY_CHANGED = System::Word(0x1703);
static const System::Word MM_EDIT_MAXLENGTH_CHANGED = System::Word(0x1704);
static const System::Word MM_EDIT_ISPASSWORD_CHANGED = System::Word(0x1705);
static const System::Word MM_EDIT_IMEMODE_CHANGED = System::Word(0x1706);
static const System::Word MM_EDIT_KEYBOARDTYPE_CHANGED = System::Word(0x1707);
static const System::Word MM_EDIT_RETURNKEYTYPE_CHANGED = System::Word(0x1708);
static const System::Word MM_EDIT_KILLFOCUSBYRETURN_CHANGED = System::Word(0x1709);
static const System::Word MM_EDIT_CHECKSPELLING_CHANGED = System::Word(0x170a);
static const System::Word MM_EDIT_PROMPTTEXT_CHANGED = System::Word(0x170b);
static const System::Word MM_EDIT_CARETPOSITION_CHANGED = System::Word(0x170f);
static const System::Word MM_EDIT_CARETCHANGED = System::Word(0x1710);
static const System::Word MM_EDIT_TYPING_CHANGED = System::Word(0x1711);
static const System::Word MM_EDIT_TEXT_SETTINGS_CHANGED = System::Word(0x1712);
static const System::Word MM_EDIT_TEXT_CHANGED = System::Word(0x1713);
static const System::Word MM_EDIT_EDITBUTTONS_CHANGED = System::Word(0x1715);
static const System::Word MM_EDIT_TEXT_CHANGING = System::Word(0x1716);
static const System::Word MM_EDIT_CHARCASE_CHANGED = System::Word(0x1717);
static const System::Word MM_EDIT_FILTERCHAR_CHANGED = System::Word(0x1718);
static const System::Word MM_EDIT_GET_CARET_POSITION_BY_POINT = System::Word(0x1719);
static const System::Word MM_EDIT_USER = System::Word(0x171a);
static const System::Word PM_EDIT_REALIGN_BUTTONS_CONTAINER = System::Word(0x1001);
static const System::Word PM_EDIT_GET_TEXT_CONTENT_RECT = System::Word(0x1002);
static const System::Word PM_EDIT_USER = System::Word(0x1003);
}	/* namespace Edit */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_EDIT)
using namespace Fmx::Edit;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_EditHPP
