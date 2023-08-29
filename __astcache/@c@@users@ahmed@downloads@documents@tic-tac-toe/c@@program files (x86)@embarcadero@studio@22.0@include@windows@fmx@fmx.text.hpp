// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Text.pas' rev: 35.00 (Windows)

#ifndef Fmx_TextHPP
#define Fmx_TextHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.Classes.hpp>
#include <System.UITypes.hpp>
#include <System.Character.hpp>
#include <System.Math.hpp>
#include <FMX.Types.hpp>
#include <FMX.Graphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Text
{
//-- forward type declarations -----------------------------------------------
struct TCaretPosition;
class DELPHICLASS TTextService;
class DELPHICLASS TTextWordWrapping;
__interface DELPHIINTERFACE ITextInput;
typedef System::DelphiInterface<ITextInput> _di_ITextInput;
__interface DELPHIINTERFACE ITextLinesSource;
typedef System::DelphiInterface<ITextLinesSource> _di_ITextLinesSource;
__interface DELPHIINTERFACE ITextSpellCheck;
typedef System::DelphiInterface<ITextSpellCheck> _di_ITextSpellCheck;
__interface DELPHIINTERFACE ITextActions;
typedef System::DelphiInterface<ITextActions> _di_ITextActions;
__interface DELPHIINTERFACE ITextSpellCheckActions;
typedef System::DelphiInterface<ITextSpellCheckActions> _di_ITextSpellCheckActions;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TCaretPosition
{
public:
	int Line;
	int Pos;
	static TCaretPosition __fastcall Create(const int ALine, const int APos);
	static bool __fastcall _op_Equality(const TCaretPosition &A, const TCaretPosition &B);
	static bool __fastcall _op_Inequality(const TCaretPosition &A, const TCaretPosition &B);
	static bool __fastcall _op_LessThanOrEqual(const TCaretPosition &A, const TCaretPosition &B);
	static bool __fastcall _op_LessThan(const TCaretPosition &A, const TCaretPosition &B);
	static bool __fastcall _op_GreaterThanOrEqual(const TCaretPosition &A, const TCaretPosition &B);
	static bool __fastcall _op_GreaterThan(const TCaretPosition &A, const TCaretPosition &B);
	__fastcall operator System::Types::TPoint();
	static TCaretPosition __fastcall _op_Implicit(const System::Types::TPoint &APoint);
	static TCaretPosition __fastcall Zero();
	static TCaretPosition __fastcall Invalid();
	void __fastcall IncrementLine();
	void __fastcall DecrementLine();
	bool __fastcall IsZero();
	bool __fastcall IsInvalid();
	
	friend bool operator ==(const TCaretPosition &A, const TCaretPosition &B) { return TCaretPosition::_op_Equality(A, B); }
	friend bool operator !=(const TCaretPosition &A, const TCaretPosition &B) { return TCaretPosition::_op_Inequality(A, B); }
	friend bool operator <=(const TCaretPosition &A, const TCaretPosition &B) { return TCaretPosition::_op_LessThanOrEqual(A, B); }
	friend bool operator <(const TCaretPosition &A, const TCaretPosition &B) { return TCaretPosition::_op_LessThan(A, B); }
	friend bool operator >=(const TCaretPosition &A, const TCaretPosition &B) { return TCaretPosition::_op_GreaterThanOrEqual(A, B); }
	friend bool operator >(const TCaretPosition &A, const TCaretPosition &B) { return TCaretPosition::_op_GreaterThan(A, B); }
	TCaretPosition& operator =(const System::Types::TPoint &APoint) { *this = TCaretPosition::_op_Implicit(APoint); return *this; }
};


enum class DECLSPEC_DENUM TMarkedTextAttribute : unsigned int { Input, TargetConverted, Converted, TargetNotConverted, InputError };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTextService : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Fmx::Types::_di_IControl FOwner;
	bool FMultiLine;
	int FMaxLength;
	System::Uitypes::TEditCharCase FCharCase;
	System::UnicodeString FFilterChar;
	Fmx::Types::TImeMode FImeMode;
	TCaretPosition FMarkedTextPosition;
	void __fastcall SetMarkedTextPosition(const TCaretPosition &Value);
	
protected:
	System::Types::TPoint FCaretPosition;
	System::UnicodeString FText;
	virtual System::UnicodeString __fastcall GetText();
	virtual void __fastcall SetText(const System::UnicodeString Value);
	virtual System::Types::TPoint __fastcall GetCaretPosition();
	virtual void __fastcall SetCaretPosition(const System::Types::TPoint &Value);
	virtual void __fastcall SetMaxLength(const int Value);
	virtual void __fastcall SetCharCase(const System::Uitypes::TEditCharCase Value);
	virtual void __fastcall SetFilterChar(const System::UnicodeString Value);
	virtual void __fastcall ImeModeChanged();
	virtual void __fastcall TextChanged();
	virtual void __fastcall MarkedTextPositionChanged();
	virtual void __fastcall CaretPositionChanged();
#ifndef _WIN64
	virtual System::DynamicArray<TMarkedTextAttribute> __fastcall GetMarketTextAttributes();
#else /* _WIN64 */
	virtual System::TArray__1<TMarkedTextAttribute> __fastcall GetMarketTextAttributes();
#endif /* _WIN64 */
	
public:
	__fastcall virtual TTextService(const Fmx::Types::_di_IControl AOwner, const bool ASupportMultiLine);
	__fastcall virtual ~TTextService();
	virtual void __fastcall InternalSetMarkedText(const System::UnicodeString AMarkedText) = 0 ;
	virtual System::UnicodeString __fastcall InternalGetMarkedText() = 0 ;
	virtual System::UnicodeString __fastcall CombinedText();
	virtual System::Types::TPoint __fastcall TargetClausePosition() = 0 ;
	virtual bool __fastcall HasMarkedText() = 0 ;
	virtual void __fastcall EnterControl(Fmx::Types::TWindowHandle* const FormHandle) = 0 ;
	virtual void __fastcall ExitControl(Fmx::Types::TWindowHandle* const FormHandle) = 0 ;
	virtual void __fastcall DrawSingleLine(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &ARect, const int FirstVisibleChar, Fmx::Graphics::TFont* const Font, const float AOpacity, const Fmx::Graphics::TFillTextFlags Flags, const Fmx::Types::TTextAlign ATextAlign, const Fmx::Types::TTextAlign AVTextAlign = (Fmx::Types::TTextAlign)(0x0), const bool AWordWrap = false) = 0 /* overload */;
	virtual void __fastcall DrawSingleLine(Fmx::Graphics::TCanvas* const Canvas, const System::UnicodeString S, const System::Types::TRectF &ARect, Fmx::Graphics::TFont* const Font, const float AOpacity, const Fmx::Graphics::TFillTextFlags Flags, const Fmx::Types::TTextAlign ATextAlign, const Fmx::Types::TTextAlign AVTextAlign = (Fmx::Types::TTextAlign)(0x0), const bool AWordWrap = false) = 0 /* overload */;
	virtual void __fastcall RefreshImePosition();
	Fmx::Types::TImeMode __fastcall GetImeMode();
	void __fastcall SetImeMode(const Fmx::Types::TImeMode Value);
	virtual void __fastcall BeginSelection();
	virtual void __fastcall EndSelection();
	__property System::Types::TPoint CaretPosition = {read=GetCaretPosition, write=SetCaretPosition};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property Fmx::Types::TImeMode ImeMode = {read=GetImeMode, write=SetImeMode, default=0};
	__property int MaxLength = {read=FMaxLength, write=SetMaxLength, nodefault};
	__property bool Multiline = {read=FMultiLine, nodefault};
	__property System::Uitypes::TEditCharCase CharCase = {read=FCharCase, write=SetCharCase, nodefault};
	__property System::UnicodeString FilterChar = {read=FFilterChar, write=SetFilterChar};
	__property Fmx::Types::_di_IControl Owner = {read=FOwner};
	__property System::UnicodeString MarkedText = {read=InternalGetMarkedText};
	__property TCaretPosition MarkedTextPosition = {read=FMarkedTextPosition, write=SetMarkedTextPosition};
#ifndef _WIN64
	__property System::DynamicArray<TMarkedTextAttribute> MarketTextAttributes = {read=GetMarketTextAttributes};
#else /* _WIN64 */
	__property System::TArray__1<TMarkedTextAttribute> MarketTextAttributes = {read=GetMarketTextAttributes};
#endif /* _WIN64 */
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TTextServiceClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TTextServiceClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTextWordWrapping : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod void __fastcall GetLines(const System::UnicodeString AText, Fmx::Graphics::TCanvas* const ACanvas, const int AMaxWidth, System::Classes::TStringList* &ALinesFound, int &AResWidth);
	__classmethod int __fastcall ComputeLineCount(const System::UnicodeString AText, Fmx::Graphics::TCanvas* const ACanvas, const int AMaxWidth, int &AResWidth);
public:
	/* TObject.Create */ inline __fastcall TTextWordWrapping() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TTextWordWrapping() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{56D79E74-58D6-4C1E-B832-F133D669B952}") ITextInput  : public System::IInterface 
{
	virtual TTextService* __fastcall GetTextService() = 0 ;
	virtual System::Types::TPointF __fastcall GetTargetClausePointF() = 0 ;
	virtual void __fastcall StartIMEInput() = 0 ;
	virtual void __fastcall EndIMEInput() = 0 ;
	virtual void __fastcall IMEStateUpdated() = 0 ;
	virtual System::UnicodeString __fastcall GetSelection() = 0 ;
	virtual System::Types::TRectF __fastcall GetSelectionRect() = 0 ;
	virtual System::Types::TRect __fastcall GetSelectionBounds() = 0 ;
	virtual System::Types::TSizeF __fastcall GetSelectionPointSize() = 0 ;
	virtual bool __fastcall HasText() = 0 ;
};

__interface  INTERFACE_UUID("{21E863AD-6411-4B68-A985-4D36D899DA97}") ITextLinesSource  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetLine(const int ALineIndex) = 0 ;
	virtual System::UnicodeString __fastcall GetLineBreak() = 0 ;
	virtual int __fastcall GetCount() = 0 ;
	__property System::UnicodeString Lines[const int AIndex] = {read=GetLine};
	__property System::UnicodeString LineBreak = {read=GetLineBreak};
	__property int Count = {read=GetCount};
	virtual TCaretPosition __fastcall TextPosToPos(const int APos) = 0 ;
	virtual int __fastcall PosToTextPos(const TCaretPosition &APostion) = 0 ;
};

__interface  INTERFACE_UUID("{30AA8C32-5ADA-456C-AAC5-B9F0309AE3A8}") ITextSpellCheck  : public System::IInterface 
{
	virtual bool __fastcall IsSpellCheckEnabled() = 0 ;
	virtual bool __fastcall IsCurrentWordWrong() = 0 ;
#ifndef _WIN64
	virtual System::DynamicArray<System::UnicodeString> __fastcall GetListOfPrepositions() = 0 ;
#else /* _WIN64 */
	virtual System::TArray__1<System::UnicodeString> __fastcall GetListOfPrepositions() = 0 ;
#endif /* _WIN64 */
	virtual void __fastcall HighlightSpell() = 0 ;
	virtual void __fastcall HideHighlightSpell() = 0 ;
};

__interface  INTERFACE_UUID("{9DB49126-36DB-4193-AE96-C0BD27090DCD}") ITextActions  : public System::IInterface 
{
	virtual void __fastcall DeleteSelection() = 0 ;
	virtual void __fastcall CopyToClipboard() = 0 ;
	virtual void __fastcall CutToClipboard() = 0 ;
	virtual void __fastcall PasteFromClipboard() = 0 ;
	virtual void __fastcall SelectAll() = 0 ;
	virtual void __fastcall SelectWord() = 0 ;
	virtual void __fastcall ResetSelection() = 0 ;
	virtual void __fastcall GoToTextEnd() = 0 ;
	virtual void __fastcall GoToTextBegin() = 0 ;
	virtual void __fastcall Replace(const int AStartPos, const int ALength, const System::UnicodeString AStr) = 0 ;
};

__interface  INTERFACE_UUID("{82A33171-C825-4B7F-B0C4-A56DDD4FF85C}") ITextSpellCheckActions  : public System::IInterface 
{
	virtual void __fastcall Spell(const System::UnicodeString AWord) = 0 ;
};

enum class DECLSPEC_DENUM TNumValueType : unsigned int { Integer, Float };

typedef void __fastcall (__closure *TValidateTextEvent)(System::TObject* Sender, System::UnicodeString &Text);

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int __fastcall GetLexemeBegin(const System::UnicodeString AText, const int AIndex);
extern DELPHI_PACKAGE int __fastcall GetLexemeEnd(const System::UnicodeString AText, const int AIndex);
extern DELPHI_PACKAGE int __fastcall GetNextLexemeBegin(const System::UnicodeString AText, const int AIndex);
extern DELPHI_PACKAGE int __fastcall GetPrevLexemeBegin(const System::UnicodeString AText, const int AIndex);
extern DELPHI_PACKAGE bool __fastcall FindWordBound(const System::UnicodeString AText, const int AIndex, /* out */ int &ABeginPos, /* out */ int &AEndPos);
extern DELPHI_PACKAGE bool __fastcall TryTextToValue(System::UnicodeString AText, float &AValue, float DefaultValue)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryTextToValue(System::UnicodeString AText, double &AValue, double DefaultValue)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall FilterCharByValueType(const TNumValueType AValueType);
extern DELPHI_PACKAGE System::UnicodeString __fastcall TruncateText(const System::UnicodeString Text, const int MaxLength);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FilterText(const System::UnicodeString Input, const System::UnicodeString Filter);
}	/* namespace Text */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_TEXT)
using namespace Fmx::Text;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_TextHPP
