// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Memo.pas' rev: 35.00 (Windows)

#ifndef Fmx_MemoHPP
#define Fmx_MemoHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <System.Rtti.hpp>
#include <FMX.Memo.Types.hpp>
#include <FMX.Graphics.hpp>
#include <FMX.Controls.Model.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.ScrollBox.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Text.hpp>
#include <FMX.Presentation.Messages.hpp>
#include <FMX.BehaviorManager.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Memo
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomMemoModel;
class DELPHICLASS TCustomMemo;
class DELPHICLASS TMemo;
//-- type declarations -------------------------------------------------------
enum class DECLSPEC_DENUM TDataDetectorType : unsigned char { PhoneNumber, Link, Address, CalendarEvent };

typedef System::Set<TDataDetectorType, _DELPHI_SET_ENUMERATOR(TDataDetectorType::PhoneNumber), _DELPHI_SET_ENUMERATOR(TDataDetectorType::CalendarEvent)> TDataDetectorTypes;

class PASCALIMPLEMENTATION TCustomMemoModel : public Fmx::Scrollbox::TCustomScrollBoxModel
{
	typedef Fmx::Scrollbox::TCustomScrollBoxModel inherited;
	
	
public:
	struct DECLSPEC_DRECORD TLineInfo
	{
	public:
		int Index;
		System::UnicodeString Text;
		int ExtraIndex;
		static TCustomMemoModel::TLineInfo __fastcall Create(const int Index, const System::UnicodeString Text)/* overload */;
		static TCustomMemoModel::TLineInfo __fastcall Create(const int Index, const int ExtraIndex)/* overload */;
	};
	
	
	struct DECLSPEC_DRECORD TGetCaretPositionInfo
	{
	public:
		System::Types::TPointF HitPoint;
		bool RoundToWord;
		Fmx::Text::TCaretPosition CaretPosition;
	};
	
	
	
public:
	static const bool DefaultAutoSelect = false;
	
	static const System::Uitypes::TEditCharCase DefaultCharCase = (System::Uitypes::TEditCharCase)(0);
	
	static const bool DefaultHideSelectionOnExit = true;
	
	static const Fmx::Types::TVirtualKeyboardType DefaultKeyboardType = (Fmx::Types::TVirtualKeyboardType)(0);
	
	static const System::Int8 DefaultMaxLength = System::Int8(0x0);
	
	static const bool DefaultReadOnly = false;
	
	static const unsigned DefaultSelectionColor = unsigned(0x802a8adf);
	
	
private:
	bool FAutoSelect;
	Fmx::Controls::TCaret* FCaret;
	bool FChanged;
	System::Uitypes::TEditCharCase FCharCase;
	bool FCheckSpelling;
	TDataDetectorTypes FDataDetectorTypes;
	bool FHideSelectionOnExit;
	Fmx::Types::TImeMode FImeMode;
	Fmx::Types::TVirtualKeyboardType FKeyboardType;
	System::Classes::TStrings* FLines;
	int FMaxLength;
	bool FReadOnly;
	Fmx::Graphics::TBrush* FSelectionFill;
	int FSelStart;
	int FSelLength;
	Fmx::Controls::TTextSettingsInfo* FTextSettingsInfo;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnChangeTracking;
	Fmx::Text::TValidateTextEvent FOnValidating;
	Fmx::Text::TValidateTextEvent FOnValidate;
	void __fastcall SetCaret(Fmx::Controls::TCaret* const Value);
	void __fastcall SetCheckSpelling(const bool Value);
	void __fastcall SetReadOnly(const bool Value);
	void __fastcall SetImeMode(const Fmx::Types::TImeMode Value);
	void __fastcall SetKeyboardType(const Fmx::Types::TVirtualKeyboardType Value);
	void __fastcall SetAutoSelect(const bool Value);
	void __fastcall SetCharCase(const System::Uitypes::TEditCharCase Value);
	void __fastcall SetHideSelectionOnExit(const bool Value);
	void __fastcall SetMaxLength(const int Value);
	void __fastcall SetLines(System::Classes::TStrings* const Value);
	void __fastcall SetSelectionFill(Fmx::Graphics::TBrush* const Value);
	void __fastcall SetSelLength(const int Value);
	void __fastcall SetSelStart(const int Value);
	void __fastcall SetTextSettingsInfo(Fmx::Controls::TTextSettingsInfo* const Value);
	void __fastcall SetDataDetectorTypes(const TDataDetectorTypes Value);
	Fmx::Text::TCaretPosition __cdecl GetCaretPosition();
	void __fastcall SetCaretPosition(const Fmx::Text::TCaretPosition &Value);
	bool __fastcall CanSetFocus();
	System::UnicodeString __fastcall GetLine(const int ALineIndex);
	System::UnicodeString __fastcall GetLineBreak();
	int __fastcall GetCount();
	
protected:
	virtual System::UnicodeString __fastcall DoValidating(const System::UnicodeString Value);
	virtual System::UnicodeString __fastcall DoValidate(const System::UnicodeString Value);
	virtual void __fastcall DoChangeTracking();
	virtual void __fastcall DoChange();
	virtual void __fastcall TextSettingsChanged();
	virtual Fmx::Controls::TTextSettingsInfo::TCustomTextSettingsClass __fastcall GetTextSettingsClass();
	
public:
	__fastcall virtual TCustomMemoModel(System::Classes::TComponent* const AOwner)/* overload */;
	__fastcall virtual ~TCustomMemoModel();
	bool __fastcall HasSelection();
	System::UnicodeString __fastcall SelectedText();
	void __fastcall Change();
	Fmx::Text::TCaretPosition __fastcall TextPosToPos(const int APos);
	int __fastcall PosToTextPos(const Fmx::Text::TCaretPosition &APostion);
	void __fastcall InsertAfter(const Fmx::Text::TCaretPosition &APosition, const System::UnicodeString AFragment, const Fmx::Memo::Types::TInsertOptions Options);
	void __fastcall DeleteFrom(const Fmx::Text::TCaretPosition &APosition, const int ALength, const Fmx::Memo::Types::TDeleteOptions Options);
	void __fastcall Replace(const Fmx::Text::TCaretPosition &APosition, const int ALength, const System::UnicodeString AFragment);
	void __fastcall SelectText(const Fmx::Text::TCaretPosition &AStartPosition, const int ALength);
	Fmx::Text::TCaretPosition __fastcall GetNextWordBegin(const Fmx::Text::TCaretPosition &APosition);
	Fmx::Text::TCaretPosition __fastcall GetPrevWordBegin(const Fmx::Text::TCaretPosition &APosition);
	Fmx::Text::TCaretPosition __fastcall GetPositionShift(const Fmx::Text::TCaretPosition &APosition, const int ADelta);
	void __fastcall MoveCaretHorizontal(const int ADelta);
	void __fastcall MoveCaretLeft();
	void __fastcall MoveCaretRight();
	Fmx::Text::TCaretPosition __fastcall GetCaretPositionByPoint(const System::Types::TPointF &AHitPoint, const bool ARoundToWord = false);
	__property bool AutoSelect = {read=FAutoSelect, write=SetAutoSelect, nodefault};
	__property Fmx::Controls::TCaret* Caret = {read=FCaret, write=SetCaret};
	__property System::Uitypes::TEditCharCase CharCase = {read=FCharCase, write=SetCharCase, nodefault};
	__property bool CheckSpelling = {read=FCheckSpelling, write=SetCheckSpelling, nodefault};
	__property TDataDetectorTypes DataDetectorTypes = {read=FDataDetectorTypes, write=SetDataDetectorTypes, nodefault};
	__property bool HideSelectionOnExit = {read=FHideSelectionOnExit, write=SetHideSelectionOnExit, default=1};
	__property bool ReadOnly = {read=FReadOnly, write=SetReadOnly, nodefault};
	__property Fmx::Types::TImeMode ImeMode = {read=FImeMode, write=SetImeMode, nodefault};
	__property Fmx::Types::TVirtualKeyboardType KeyboardType = {read=FKeyboardType, write=SetKeyboardType, nodefault};
	__property System::Classes::TStrings* Lines = {read=FLines, write=SetLines};
	__property int MaxLength = {read=FMaxLength, write=SetMaxLength, nodefault};
	__property Fmx::Graphics::TBrush* SelectionFill = {read=FSelectionFill, write=SetSelectionFill};
	__property Fmx::Text::TCaretPosition CaretPosition = {read=GetCaretPosition, write=SetCaretPosition};
	__property int SelStart = {read=FSelStart, write=SetSelStart, nodefault};
	__property int SelLength = {read=FSelLength, write=SetSelLength, nodefault};
	__property Fmx::Controls::TTextSettingsInfo* TextSettingsInfo = {read=FTextSettingsInfo, write=SetTextSettingsInfo};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnChangeTracking = {read=FOnChangeTracking, write=FOnChangeTracking};
	__property Fmx::Text::TValidateTextEvent OnValidating = {read=FOnValidating, write=FOnValidating};
	__property Fmx::Text::TValidateTextEvent OnValidate = {read=FOnValidate, write=FOnValidate};
public:
	/* TMessageSender.Create */ inline __fastcall virtual TCustomMemoModel()/* overload */ : Fmx::Scrollbox::TCustomScrollBoxModel() { }
	
private:
	void *__ITextLinesSource;	// Fmx::Text::ITextLinesSource 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {21E863AD-6411-4B68-A985-4D36D899DA97}
	operator Fmx::Text::_di_ITextLinesSource()
	{
		Fmx::Text::_di_ITextLinesSource intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Text::ITextLinesSource*(void) { return (Fmx::Text::ITextLinesSource*)&__ITextLinesSource; }
	#endif
	
};


class PASCALIMPLEMENTATION TCustomMemo : public Fmx::Scrollbox::TCustomPresentedScrollBox
{
	typedef Fmx::Scrollbox::TCustomPresentedScrollBox inherited;
	
private:
	bool FSaveReadOnly;
	void __fastcall ReadTextData(System::Classes::TReader* Reader);
	void __fastcall ReadHideSelectionData(System::Classes::TReader* Reader);
	HIDESBASE TCustomMemoModel* __fastcall GetModel()/* overload */;
	System::Classes::TStrings* __fastcall GetLines();
	void __fastcall SetLines(System::Classes::TStrings* const Value);
	bool __fastcall GetCheckSpelling();
	void __fastcall SetCheckSpelling(const bool Value);
	bool __fastcall GetAutoSelect();
	void __fastcall SetAutoSelect(const bool Value);
	Fmx::Controls::TCaret* __fastcall GetCaret();
	void __fastcall SetCaret(Fmx::Controls::TCaret* const Value);
	System::Uitypes::TEditCharCase __fastcall GetCharCase();
	void __fastcall SetCharCase(const System::Uitypes::TEditCharCase Value);
	bool __fastcall GetHideSelectionOnExit();
	void __fastcall SetHideSelectionOnExit(const bool Value);
	int __fastcall GetMaxLength();
	void __fastcall SetMaxLength(const int Value);
	Fmx::Types::TImeMode __fastcall GetImeMode();
	void __fastcall SetImeMode(const Fmx::Types::TImeMode Value);
	int __fastcall GetSelLength();
	void __fastcall SetSelLength(const int Value);
	int __fastcall GetSelStart();
	void __fastcall SetSelStart(const int Value);
	TDataDetectorTypes __fastcall GetDataDetectorTypes();
	void __fastcall SetDataDetectorTypes(const TDataDetectorTypes Value);
	System::UnicodeString __fastcall GetText();
	void __fastcall SetText(const System::UnicodeString Value);
	System::Classes::TNotifyEvent __fastcall GetOnChange();
	void __fastcall SetOnChange(const System::Classes::TNotifyEvent Value);
	System::Classes::TNotifyEvent __fastcall GetOnChangeTracking();
	void __fastcall SetOnChangeTracking(const System::Classes::TNotifyEvent Value);
	Fmx::Text::TValidateTextEvent __fastcall GetOnValidate();
	void __fastcall SetOnValidate(const Fmx::Text::TValidateTextEvent Value);
	Fmx::Text::TValidateTextEvent __fastcall GetOnValidating();
	void __fastcall SetOnValidating(const Fmx::Text::TValidateTextEvent Value);
	Fmx::Graphics::TTextSettings* __fastcall GetDefaultTextSettings();
	Fmx::Graphics::TTextSettings* __fastcall GetResultingTextSettings();
	Fmx::Graphics::TTextSettings* __fastcall GetTextSettings();
	void __fastcall SetTextSettings(Fmx::Graphics::TTextSettings* const Value);
	Fmx::Types::TStyledSettings __fastcall GetStyledSettings();
	void __fastcall SetStyledSettings(const Fmx::Types::TStyledSettings Value);
	bool __fastcall StyledSettingsStored();
	Fmx::Types::TVirtualKeyboardType __fastcall GetKeyboardType();
	void __fastcall SetKeyboardType(Fmx::Types::TVirtualKeyboardType Value);
	void __fastcall SetReturnKeyType(Fmx::Types::TReturnKeyType Value);
	Fmx::Types::TReturnKeyType __fastcall GetReturnKeyType();
	bool __fastcall IsPassword();
	HIDESBASE Fmx::Types::TCustomCaret* __fastcall GetObject();
	void __fastcall ShowCaret();
	void __fastcall HideCaret();
	Fmx::Text::TCaretPosition __cdecl GetCaretPosition();
	void __fastcall SetCaretPosition(const Fmx::Text::TCaretPosition &Value);
	System::UnicodeString __fastcall GetSelText();
	Fmx::Graphics::TFont* __fastcall GetFont();
	System::Uitypes::TAlphaColor __fastcall GetFontColor();
	Fmx::Graphics::TBrush* __fastcall GetSelectionFill();
	Fmx::Types::TTextAlign __fastcall GetTextAlign();
	bool __fastcall GetWordWrap();
	void __fastcall SetFont(Fmx::Graphics::TFont* const Value);
	void __fastcall SetFontColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetTextAlign(const Fmx::Types::TTextAlign Value);
	void __fastcall SetWordWrap(const bool Value);
	void __fastcall ObserverToggle(const System::Classes::_di_IObserver AObserver, const bool Value);
	bool __fastcall GetReadOnly();
	void __fastcall SetReadOnly(const bool Value);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual Fmx::Controls::Model::TDataModelClass __fastcall DefineModelClass();
	virtual System::UnicodeString __fastcall DefinePresentationName();
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	virtual void __fastcall DoBeginUpdate();
	virtual void __fastcall DoEndUpdate();
	virtual bool __fastcall GetCanFocus();
	virtual bool __fastcall CanObserve(const int ID);
	virtual void __fastcall ObserverAdded(const int ID, const System::Classes::_di_IObserver Observer);
	
public:
	__fastcall virtual TCustomMemo(System::Classes::TComponent* AOwner)/* overload */;
	void __fastcall ClearSelection _DEPRECATED_ATTRIBUTE1("Use DeleteSelection method instead") ();
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
	void __fastcall GoToLineEnd();
	void __fastcall GoToLineBegin();
	void __fastcall UnDo();
	Fmx::Text::TCaretPosition __fastcall TextPosToPos(const int APos);
	int __fastcall PosToTextPos(const Fmx::Text::TCaretPosition &APostion);
	void __fastcall InsertAfter(const Fmx::Text::TCaretPosition &APosition, const System::UnicodeString AFragment, const Fmx::Memo::Types::TInsertOptions Options);
	void __fastcall DeleteFrom(const Fmx::Text::TCaretPosition &APosition, const int ALength, const Fmx::Memo::Types::TDeleteOptions Options);
	__property TCustomMemoModel* Model = {read=GetModel};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property bool AutoSelect = {read=GetAutoSelect, write=SetAutoSelect, nodefault};
	__property Fmx::Controls::TCaret* Caret = {read=GetCaret, write=SetCaret};
	__property System::Uitypes::TEditCharCase CharCase = {read=GetCharCase, write=SetCharCase, nodefault};
	__property bool CheckSpelling = {read=GetCheckSpelling, write=SetCheckSpelling, nodefault};
	__property TDataDetectorTypes DataDetectorTypes = {read=GetDataDetectorTypes, write=SetDataDetectorTypes, nodefault};
	__property bool HideSelectionOnExit = {read=GetHideSelectionOnExit, write=SetHideSelectionOnExit, nodefault};
	__property Fmx::Types::TImeMode ImeMode = {read=GetImeMode, write=SetImeMode, nodefault};
	__property Fmx::Types::TVirtualKeyboardType KeyboardType = {read=GetKeyboardType, write=SetKeyboardType, nodefault};
	__property System::Classes::TStrings* Lines = {read=GetLines, write=SetLines};
	__property int MaxLength = {read=GetMaxLength, write=SetMaxLength, nodefault};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, nodefault};
	__property Fmx::Text::TCaretPosition CaretPosition = {read=GetCaretPosition, write=SetCaretPosition};
	__property Fmx::Graphics::TBrush* SelectionFill = {read=GetSelectionFill};
	__property Fmx::Graphics::TFont* Font = {read=GetFont, write=SetFont};
	__property System::Uitypes::TAlphaColor FontColor = {read=GetFontColor, write=SetFontColor, nodefault};
	__property Fmx::Types::TTextAlign TextAlign = {read=GetTextAlign, write=SetTextAlign, nodefault};
	__property bool WordWrap = {read=GetWordWrap, write=SetWordWrap, nodefault};
	__property int SelStart = {read=GetSelStart, write=SetSelStart, nodefault};
	__property int SelLength = {read=GetSelLength, write=SetSelLength, nodefault};
	__property System::UnicodeString SelText = {read=GetSelText};
	__property Fmx::Types::TStyledSettings StyledSettings = {read=GetStyledSettings, write=SetStyledSettings, stored=StyledSettingsStored, nodefault};
	__property Fmx::Graphics::TTextSettings* TextSettings = {read=GetTextSettings, write=SetTextSettings};
	__property System::Classes::TNotifyEvent OnChange = {read=GetOnChange, write=SetOnChange};
	__property System::Classes::TNotifyEvent OnChangeTracking = {read=GetOnChangeTracking, write=SetOnChangeTracking};
	__property Fmx::Text::TValidateTextEvent OnValidating = {read=GetOnValidating, write=SetOnValidating};
	__property Fmx::Text::TValidateTextEvent OnValidate = {read=GetOnValidate, write=SetOnValidate};
public:
	/* TPresentedControl.Destroy */ inline __fastcall virtual ~TCustomMemo() { }
	
private:
	void *__IReadOnly;	// Fmx::Types::IReadOnly 
	void *__ICaret;	// Fmx::Types::ICaret 
	void *__IVirtualKeyboardControl;	// Fmx::Types::IVirtualKeyboardControl 
	void *__ITextActions;	// Fmx::Text::ITextActions 
	void *__ITextSettings;	// Fmx::Graphics::ITextSettings 
	
public:
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


class PASCALIMPLEMENTATION TMemo : public TCustomMemo
{
	typedef TCustomMemo inherited;
	
__published:
	__property AutoHide = {default=2};
	__property AutoSelect = {default=0};
	__property Caret;
	__property CharCase = {default=0};
	__property CheckSpelling = {default=0};
	__property DataDetectorTypes;
	__property DisableMouseWheel = {default=0};
	__property HideSelectionOnExit = {default=1};
	__property ImeMode = {default=0};
	__property KeyboardType = {default=0};
	__property Lines;
	__property MaxLength = {default=0};
	__property ReadOnly = {default=0};
	__property ShowScrollBars = {default=1};
	__property ShowSizeGrip = {default=0};
	__property StyledSettings;
	__property TextSettings;
	__property OnChange;
	__property OnChangeTracking;
	__property OnValidating;
	__property OnValidate;
	__property Align = {default=0};
	__property Anchors;
	__property Bounces = {default=2};
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property ControlType = {default=0};
	__property Cursor = {default=-4};
	__property DisableFocusEffect = {default=0};
	__property DragMode = {default=0};
	__property Enabled;
	__property EnabledScroll = {default=1};
	__property EnableDragHighlight = {default=1};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Locked = {default=0};
	__property Margins;
	__property Opacity;
	__property Padding;
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
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
	__property OnEnter;
	__property OnExit;
	__property OnKeyUp;
	__property OnKeyDown;
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
	__property OnViewportPositionChange;
	__property OnPresentationNameChoosing;
public:
	/* TCustomMemo.Create */ inline __fastcall virtual TMemo(System::Classes::TComponent* AOwner)/* overload */ : TCustomMemo(AOwner) { }
	
public:
	/* TPresentedControl.Destroy */ inline __fastcall virtual ~TMemo() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word MM_MEMO_CARETCHANGED = System::Word(0x1710);
static const System::Word MM_MEMO_READONLY_CHANGED = System::Word(0x1711);
static const System::Word MM_MEMO_CHECKSPELLING_CHANGED = System::Word(0x1712);
static const System::Word MM_MEMO_IMEMODE_CHANGED = System::Word(0x1713);
static const System::Word MM_MEMO_KEYBOARDTYPE_CHANGED = System::Word(0x1714);
static const System::Word MM_MEMO_TEXT_SETTINGS_CHANGED = System::Word(0x1715);
static const System::Word MM_MEMO_AUTOSELECT_CHANGED = System::Word(0x1716);
static const System::Word MM_MEMO_CHARCASE_CHANGED = System::Word(0x1717);
static const System::Word MM_MEMO_HIDESELECTIONONEXIT_CHANGED = System::Word(0x1718);
static const System::Word MM_MEMO_MAXLENGTH_CHANGED = System::Word(0x1719);
static const System::Word MM_MEMO_LINES_CHANGED = System::Word(0x171a);
static const System::Word MM_MEMO_TEXT_CHANGING = System::Word(0x171b);
static const System::Word MM_MEMO_GET_CARET_POSITION = System::Word(0x171c);
static const System::Word MM_MEMO_SET_CARET_POSITION = System::Word(0x171d);
static const System::Word MM_MEMO_SELSTART_CHANGED = System::Word(0x171e);
static const System::Word MM_MEMO_SELLENGTH_CHANGED = System::Word(0x171f);
static const System::Word MM_MEMO_DATADETECTORTYPES_CHANGED = System::Word(0x1720);
static const System::Word MM_MEMO_LINES_INSERT_LINE = System::Word(0x1721);
static const System::Word MM_MEMO_LINES_PUT_LINE = System::Word(0x1722);
static const System::Word MM_MEMO_LINES_DELETE_LINE = System::Word(0x1723);
static const System::Word MM_MEMO_LINES_EXCHANGE_LINES = System::Word(0x1724);
static const System::Word MM_MEMO_LINES_CLEAR = System::Word(0x1725);
static const System::Word MM_MEMO_UPDATE_STATE_CHANGED = System::Word(0x1726);
static const System::Word MM_MEMO_CAN_SET_FOCUS = System::Word(0x172e);
static const System::Word MM_MEMO_GET_CARET_POSITION_BY_POINT = System::Word(0x172f);
static const System::Word MM_MEMO_USER = System::Word(0x1730);
static const System::Word PM_MEMO_GOTO_LINE_BEGIN = System::Word(0x100b);
static const System::Word PM_MEMO_GOTO_LINE_END = System::Word(0x100c);
static const System::Word PM_MEMO_GOTO_TEXT_BEGIN _DEPRECATED_ATTRIBUTE0  = System::Word(0x100d);
static const System::Word PM_MEMO_GOTO_TEXT_END _DEPRECATED_ATTRIBUTE0  = System::Word(0x100e);
static const System::Word PM_MEMO_UNDO_MANAGER_INSERT_TEXT = System::Word(0x100f);
static const System::Word PM_MEMO_UNDO_MANAGER_DELETE_TEXT = System::Word(0x1010);
static const System::Word PM_MEMO_UNDO_MANAGER_UNDO = System::Word(0x1011);
static const System::Word PM_MEMO_SELECT_TEXT = System::Word(0x1012);
static const System::Word PM_MEMO_USER = System::Word(0x1013);
}	/* namespace Memo */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_MEMO)
using namespace Fmx::Memo;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_MemoHPP
