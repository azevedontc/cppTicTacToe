// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.StrUtils.pas' rev: 35.00 (Windows)

#ifndef System_StrutilsHPP
#define System_StrutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Strutils
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TStringSeachOption : unsigned char { soDown, soMatchCase, soWholeWord };

typedef System::Set<TStringSeachOption, TStringSeachOption::soDown, TStringSeachOption::soWholeWord> TStringSearchOptions;

typedef int TSoundexLength;

typedef System::Int8 TSoundexIntLength;

typedef bool __fastcall (*TCompareTextProc)(const System::UnicodeString AText, const System::UnicodeString AOther);

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Set<System::Byte, 0, 255> WordDelimiters;
extern DELPHI_PACKAGE TCompareTextProc ResemblesProc;
extern DELPHI_PACKAGE TCompareTextProc AnsiResemblesProc;
extern DELPHI_PACKAGE bool __fastcall ResemblesText(const System::UnicodeString AText, const System::UnicodeString AOther)/* overload */;
extern DELPHI_PACKAGE bool __fastcall AnsiResemblesText(const System::UnicodeString AText, const System::UnicodeString AOther)/* overload */;
extern DELPHI_PACKAGE bool __fastcall ContainsText(const System::UnicodeString AText, const System::UnicodeString ASubText)/* overload */;
extern DELPHI_PACKAGE bool __fastcall AnsiContainsText(const System::UnicodeString AText, const System::UnicodeString ASubText)/* overload */;
extern DELPHI_PACKAGE bool __fastcall StartsText(const System::UnicodeString ASubText, const System::UnicodeString AText)/* overload */;
extern DELPHI_PACKAGE bool __fastcall AnsiStartsText(const System::UnicodeString ASubText, const System::UnicodeString AText)/* overload */;
extern DELPHI_PACKAGE bool __fastcall EndsText(const System::UnicodeString ASubText, const System::UnicodeString AText)/* overload */;
extern DELPHI_PACKAGE bool __fastcall AnsiEndsText(const System::UnicodeString ASubText, const System::UnicodeString AText)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ReplaceStr(const System::UnicodeString AText, const System::UnicodeString AFromText, const System::UnicodeString AToText)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall AnsiReplaceStr(const System::UnicodeString AText, const System::UnicodeString AFromText, const System::UnicodeString AToText)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ReplaceText(const System::UnicodeString AText, const System::UnicodeString AFromText, const System::UnicodeString AToText)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall AnsiReplaceText(const System::UnicodeString AText, const System::UnicodeString AFromText, const System::UnicodeString AToText)/* overload */;
extern DELPHI_PACKAGE bool __fastcall MatchText(const System::UnicodeString AText, const System::UnicodeString *AValues, const int AValues_High)/* overload */;
extern DELPHI_PACKAGE bool __fastcall AnsiMatchText(const System::UnicodeString AText, const System::UnicodeString *AValues, const int AValues_High)/* overload */;
extern DELPHI_PACKAGE int __fastcall IndexText(const System::UnicodeString AText, const System::UnicodeString *AValues, const int AValues_High)/* overload */;
extern DELPHI_PACKAGE int __fastcall AnsiIndexText(const System::UnicodeString AText, const System::UnicodeString *AValues, const int AValues_High)/* overload */;
extern DELPHI_PACKAGE bool __fastcall ContainsStr(const System::UnicodeString AText, const System::UnicodeString ASubText)/* overload */;
extern DELPHI_PACKAGE bool __fastcall AnsiContainsStr(const System::UnicodeString AText, const System::UnicodeString ASubText)/* overload */;
extern DELPHI_PACKAGE bool __fastcall StartsStr(const System::UnicodeString ASubText, const System::UnicodeString AText)/* overload */;
extern DELPHI_PACKAGE bool __fastcall AnsiStartsStr(const System::UnicodeString ASubText, const System::UnicodeString AText)/* overload */;
extern DELPHI_PACKAGE bool __fastcall EndsStr(const System::UnicodeString ASubText, const System::UnicodeString AText)/* overload */;
extern DELPHI_PACKAGE bool __fastcall AnsiEndsStr(const System::UnicodeString ASubText, const System::UnicodeString AText)/* overload */;
extern DELPHI_PACKAGE bool __fastcall MatchStr(const System::UnicodeString AText, const System::UnicodeString *AValues, const int AValues_High)/* overload */;
extern DELPHI_PACKAGE bool __fastcall AnsiMatchStr(const System::UnicodeString AText, const System::UnicodeString *AValues, const int AValues_High)/* overload */;
extern DELPHI_PACKAGE int __fastcall IndexStr(const System::UnicodeString AText, const System::UnicodeString *AValues, const int AValues_High)/* overload */;
extern DELPHI_PACKAGE int __fastcall AnsiIndexStr(const System::UnicodeString AText, const System::UnicodeString *AValues, const int AValues_High)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall DupeString(const System::UnicodeString AText, int ACount)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ReverseString(const System::UnicodeString AText)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall AnsiReverseString(const System::UnicodeString AText)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StuffString(const System::UnicodeString AText, unsigned AStart, unsigned ALength, const System::UnicodeString ASubText)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall RandomFrom(const System::UnicodeString *AValues, const int AValues_High)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall IfThen(bool AValue, const System::UnicodeString ATrue, System::UnicodeString AFalse = System::UnicodeString())/* overload */;
#ifndef _WIN64
extern DELPHI_PACKAGE System::DynamicArray<System::UnicodeString> __fastcall SplitString(const System::UnicodeString S, const System::UnicodeString Delimiters);
#else /* _WIN64 */
extern DELPHI_PACKAGE System::TArray__1<System::UnicodeString> __fastcall SplitString(const System::UnicodeString S, const System::UnicodeString Delimiters);
#endif /* _WIN64 */
extern DELPHI_PACKAGE System::AnsiString __fastcall LeftStr _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const System::AnsiString AText, const int ACount)/* overload */;
extern DELPHI_PACKAGE System::AnsiString __fastcall RightStr _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const System::AnsiString AText, const int ACount)/* overload */;
extern DELPHI_PACKAGE System::AnsiString __fastcall MidStr _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const System::AnsiString AText, const int AStart, const int ACount)/* overload */;
extern DELPHI_PACKAGE System::AnsiString __fastcall LeftBStr _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const System::AnsiString AText, const int AByteCount);
extern DELPHI_PACKAGE System::AnsiString __fastcall RightBStr _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const System::AnsiString AText, const int AByteCount);
extern DELPHI_PACKAGE System::AnsiString __fastcall MidBStr _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const System::AnsiString AText, const int AByteStart, const int AByteCount);
extern DELPHI_PACKAGE System::UnicodeString __fastcall LeftStr(const System::UnicodeString AText, const int ACount)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall RightStr(const System::UnicodeString AText, const int ACount)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall MidStr(const System::UnicodeString AText, const int AStart, const int ACount)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall AnsiLeftStr(const System::UnicodeString AText, const int ACount)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall AnsiRightStr(const System::UnicodeString AText, const int ACount)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall AnsiMidStr(const System::UnicodeString AText, const int AStart, const int ACount)/* overload */;
extern DELPHI_PACKAGE char * __fastcall SearchBuf _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Buf, int BufLen, int SelStart, int SelLength, System::AnsiString SearchString, TStringSearchOptions Options = (TStringSearchOptions() << TStringSeachOption::soDown ))/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall SearchBuf(System::WideChar * Buf, int BufLen, int SelStart, int SelLength, System::UnicodeString SearchString, TStringSearchOptions Options = (TStringSearchOptions() << TStringSeachOption::soDown ))/* overload */;
extern DELPHI_PACKAGE int __fastcall PosEx(const System::UnicodeString SubStr, const System::UnicodeString S, int Offset = 0x1)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall Soundex(const System::UnicodeString AText, TSoundexLength ALength = (TSoundexLength)(0x4));
extern DELPHI_PACKAGE int __fastcall SoundexInt(const System::UnicodeString AText, TSoundexIntLength ALength = (TSoundexIntLength)(0x4));
extern DELPHI_PACKAGE System::UnicodeString __fastcall DecodeSoundexInt(int AValue);
extern DELPHI_PACKAGE System::Word __fastcall SoundexWord(const System::UnicodeString AText);
extern DELPHI_PACKAGE System::UnicodeString __fastcall DecodeSoundexWord(System::Word AValue);
extern DELPHI_PACKAGE bool __fastcall SoundexSimilar(const System::UnicodeString AText, const System::UnicodeString AOther, TSoundexLength ALength = (TSoundexLength)(0x4));
extern DELPHI_PACKAGE int __fastcall SoundexCompare(const System::UnicodeString AText, const System::UnicodeString AOther, TSoundexLength ALength = (TSoundexLength)(0x4));
extern DELPHI_PACKAGE bool __fastcall SoundexProc(const System::UnicodeString AText, const System::UnicodeString AOther);
}	/* namespace Strutils */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_STRUTILS)
using namespace System::Strutils;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_StrutilsHPP
