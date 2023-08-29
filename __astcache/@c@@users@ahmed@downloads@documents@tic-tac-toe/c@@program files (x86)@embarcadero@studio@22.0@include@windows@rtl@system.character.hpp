// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Character.pas' rev: 35.00 (Windows)

#ifndef System_CharacterHPP
#define System_CharacterHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Character
{
//-- forward type declarations -----------------------------------------------
struct TCharacter;
struct TCharHelper /* Helper for WideChar 'System::WideChar' */;
//-- type declarations -------------------------------------------------------
enum class DECLSPEC_DENUM TUnicodeCategory : unsigned char { ucControl, ucFormat, ucUnassigned, ucPrivateUse, ucSurrogate, ucLowercaseLetter, ucModifierLetter, ucOtherLetter, ucTitlecaseLetter, ucUppercaseLetter, ucCombiningMark, ucEnclosingMark, ucNonSpacingMark, ucDecimalNumber, ucLetterNumber, ucOtherNumber, ucConnectPunctuation, ucDashPunctuation, ucClosePunctuation, ucFinalPunctuation, ucInitialPunctuation, ucOtherPunctuation, ucOpenPunctuation, ucCurrencySymbol, ucModifierSymbol, ucMathSymbol, ucOtherSymbol, ucLineSeparator, ucParagraphSeparator, ucSpaceSeparator };

enum class DECLSPEC_DENUM TUnicodeBreak : unsigned char { ubMandatory, ubCarriageReturn, ubLineFeed, ubCombiningMark, ubSurrogate, ubZeroWidthSpace, ubInseparable, ubNonBreakingGlue, ubContingent, ubSpace, ubAfter, ubBefore, ubBeforeAndAfter, ubHyphen, ubNonStarter, ubOpenPunctuation, ubClosePunctuation, ubQuotation, ubExclamation, ubIdeographic, ubNumeric, ubInfixSeparator, ubSymbol, ubAlphabetic, ubPrefix, ubPostfix, ubComplexContext, ubAmbiguous, ubUnknown, ubNextLine, ubWordJoiner, ubHangulLJamo, ubHangulVJamo, ubHangulTJamo, ubHangulLvSyllable, ubHangulLvtSyllable };

struct DECLSPEC_DRECORD TCharacter
{
public:
	static const System::WideChar MaxHighSurrogate = (System::WideChar)(0xdbff);
	
	static const System::WideChar MaxLowSurrogate = (System::WideChar)(0xdfff);
	
	static const System::WideChar MaxSurrogate = (System::WideChar)(0xdfff);
	
	static const System::WideChar MinHighSurrogate = (System::WideChar)(0xd800);
	
	static const System::WideChar MinLowSurrogate = (System::WideChar)(0xdc00);
	
	static const System::WideChar MinSurrogate = (System::WideChar)(0xd800);
	
	static int __fastcall MaxCodePoint();
	static System::UnicodeString __fastcall UnicodeDataVersion();
	static System::UnicodeString __fastcall ConvertFromUtf32(unsigned C);
	static unsigned __fastcall ConvertToUtf32(const System::UnicodeString S, int Index)/* overload */;
	static unsigned __fastcall ConvertToUtf32(const System::UnicodeString S, int Index, /* out */ int &CharLength)/* overload */;
	static unsigned __fastcall ConvertToUtf32(const System::WideChar HighSurrogate, const System::WideChar LowSurrogate)/* overload */;
	static double __fastcall GetNumericValue(System::WideChar C)/* overload */;
	static double __fastcall GetNumericValue(unsigned C)/* overload */;
	static double __fastcall GetNumericValue(const System::UnicodeString S, int Index)/* overload */;
	static TUnicodeCategory __fastcall GetUnicodeCategory(System::WideChar C)/* overload */;
	static TUnicodeCategory __fastcall GetUnicodeCategory(unsigned C)/* overload */;
	static TUnicodeCategory __fastcall GetUnicodeCategory(const System::UnicodeString S, int Index)/* overload */;
	static bool __fastcall IsControl(System::WideChar C)/* overload */;
	static bool __fastcall IsControl(unsigned C)/* overload */;
	static bool __fastcall IsControl(const System::UnicodeString S, int Index)/* overload */;
	static bool __fastcall IsDefined(System::WideChar C)/* overload */;
	static bool __fastcall IsDefined(unsigned C)/* overload */;
	static bool __fastcall IsDefined(const System::UnicodeString S, int Index)/* overload */;
	static bool __fastcall IsDigit(System::WideChar C)/* overload */;
	static bool __fastcall IsDigit(unsigned C)/* overload */;
	static bool __fastcall IsDigit(const System::UnicodeString S, int Index)/* overload */;
	static bool __fastcall IsHighSurrogate(System::WideChar C)/* overload */;
	static bool __fastcall IsHighSurrogate(unsigned C)/* overload */;
	static bool __fastcall IsHighSurrogate(const System::UnicodeString S, int Index)/* overload */;
	static bool __fastcall IsLetter(System::WideChar C)/* overload */;
	static bool __fastcall IsLetter(unsigned C)/* overload */;
	static bool __fastcall IsLetter(const System::UnicodeString S, int Index)/* overload */;
	static bool __fastcall IsLetterOrDigit(System::WideChar C)/* overload */;
	static bool __fastcall IsLetterOrDigit(unsigned C)/* overload */;
	static bool __fastcall IsLetterOrDigit(const System::UnicodeString S, int Index)/* overload */;
	static bool __fastcall IsLower(System::WideChar C)/* overload */;
	static bool __fastcall IsLower(unsigned C)/* overload */;
	static bool __fastcall IsLower(const System::UnicodeString S, int Index)/* overload */;
	static bool __fastcall IsLowSurrogate(System::WideChar C)/* overload */;
	static bool __fastcall IsLowSurrogate(unsigned C)/* overload */;
	static bool __fastcall IsLowSurrogate(const System::UnicodeString S, int Index)/* overload */;
	static bool __fastcall IsNumber(System::WideChar C)/* overload */;
	static bool __fastcall IsNumber(unsigned C)/* overload */;
	static bool __fastcall IsNumber(const System::UnicodeString S, int Index)/* overload */;
	static bool __fastcall IsPunctuation(System::WideChar C)/* overload */;
	static bool __fastcall IsPunctuation(unsigned C)/* overload */;
	static bool __fastcall IsPunctuation(const System::UnicodeString S, int Index)/* overload */;
	static bool __fastcall IsSeparator(System::WideChar C)/* overload */;
	static bool __fastcall IsSeparator(unsigned C)/* overload */;
	static bool __fastcall IsSeparator(const System::UnicodeString S, int Index)/* overload */;
	static bool __fastcall IsSurrogate(System::WideChar Surrogate)/* overload */;
	static bool __fastcall IsSurrogate(unsigned Surrogate)/* overload */;
	static bool __fastcall IsSurrogate(const System::UnicodeString S, int Index)/* overload */;
	static bool __fastcall IsSurrogatePair(const System::WideChar HighSurrogate, const System::WideChar LowSurrogate)/* overload */;
	static bool __fastcall IsSurrogatePair(const System::UnicodeString S, int Index)/* overload */;
	static bool __fastcall IsSymbol(System::WideChar C)/* overload */;
	static bool __fastcall IsSymbol(unsigned C)/* overload */;
	static bool __fastcall IsSymbol(const System::UnicodeString S, int Index)/* overload */;
	static bool __fastcall IsUpper(System::WideChar C)/* overload */;
	static bool __fastcall IsUpper(unsigned C)/* overload */;
	static bool __fastcall IsUpper(const System::UnicodeString S, int Index)/* overload */;
	static bool __fastcall IsWhiteSpace(System::WideChar C)/* overload */;
	static bool __fastcall IsWhiteSpace(unsigned C)/* overload */;
	static bool __fastcall IsWhiteSpace(const System::UnicodeString S, int Index)/* overload */;
	static System::WideChar __fastcall ToLower(System::WideChar C)/* overload */;
	static unsigned __fastcall ToLower(unsigned C)/* overload */;
	static System::UnicodeString __fastcall ToLower(const System::UnicodeString S)/* overload */;
	static System::WideChar __fastcall ToUpper(System::WideChar C)/* overload */;
	static unsigned __fastcall ToUpper(unsigned C)/* overload */;
	static System::UnicodeString __fastcall ToUpper(const System::UnicodeString S)/* overload */;
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::UnicodeString __fastcall ConvertFromUtf32(unsigned C);
extern DELPHI_PACKAGE unsigned __fastcall ConvertToUtf32(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall ConvertToUtf32(const System::UnicodeString S, int Index, /* out */ int &CharLength)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall ConvertToUtf32(const System::WideChar HighSurrogate, const System::WideChar LowSurrogate)/* overload */;
extern DELPHI_PACKAGE double __fastcall GetNumericValue(System::WideChar C)/* overload */;
extern DELPHI_PACKAGE double __fastcall GetNumericValue(unsigned C)/* overload */;
extern DELPHI_PACKAGE double __fastcall GetNumericValue(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE TUnicodeCategory __fastcall GetUnicodeCategory(System::WideChar C)/* overload */;
extern DELPHI_PACKAGE TUnicodeCategory __fastcall GetUnicodeCategory(unsigned C)/* overload */;
extern DELPHI_PACKAGE TUnicodeCategory __fastcall GetUnicodeCategory(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsControl(System::WideChar C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsControl(unsigned C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsControl(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsDefined(System::WideChar C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsDefined(unsigned C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsDefined(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsDigit(System::WideChar C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsDigit(unsigned C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsDigit(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsHighSurrogate(System::WideChar C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsHighSurrogate(unsigned C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsHighSurrogate(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsLetter(System::WideChar C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsLetter(unsigned C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsLetter(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsLetterOrDigit(System::WideChar C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsLetterOrDigit(unsigned C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsLetterOrDigit(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsLower(System::WideChar C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsLower(unsigned C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsLower(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsLowSurrogate(System::WideChar C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsLowSurrogate(unsigned C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsLowSurrogate(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsNumber(System::WideChar C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsNumber(unsigned C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsNumber(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsPunctuation(System::WideChar C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsPunctuation(unsigned C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsPunctuation(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsSeparator(System::WideChar C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsSeparator(unsigned C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsSeparator(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsSurrogate(System::WideChar Surrogate)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsSurrogate(unsigned Surrogate)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsSurrogate(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsSurrogatePair(const System::WideChar HighSurrogate, const System::WideChar LowSurrogate)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsSurrogatePair(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsSymbol(System::WideChar C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsSymbol(unsigned C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsSymbol(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsUpper(System::WideChar C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsUpper(unsigned C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsUpper(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsWhiteSpace(System::WideChar C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsWhiteSpace(unsigned C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsWhiteSpace(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE System::WideChar __fastcall ToLower(System::WideChar C)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall ToLower(unsigned C)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ToLower(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::WideChar __fastcall ToUpper(System::WideChar C)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall ToUpper(unsigned C)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ToUpper(const System::UnicodeString S)/* overload */;
}	/* namespace Character */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_CHARACTER)
using namespace System::Character;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_CharacterHPP
