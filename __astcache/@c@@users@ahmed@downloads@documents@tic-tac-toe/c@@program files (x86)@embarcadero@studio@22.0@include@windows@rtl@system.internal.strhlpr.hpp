// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Internal.StrHlpr.pas' rev: 35.00 (Windows)

#ifndef System_Internal_StrhlprHPP
#define System_Internal_StrhlprHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Internal
{
namespace Strhlpr
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall UnicodeFromAnsi(System::UnicodeString &dst, System::RawByteString &src);
extern DELPHI_PACKAGE void __fastcall UnicodeFromPChar(System::UnicodeString &dst, char * src, bool IsUTF8 = false);
extern DELPHI_PACKAGE void __fastcall UnicodeFromUTF8(System::UnicodeString &dst, const char * src);
extern DELPHI_PACKAGE void __fastcall UnicodeFromPWideChar(System::UnicodeString &dst, System::WideChar * src);
extern DELPHI_PACKAGE void __fastcall UnicodeAppend(System::UnicodeString &dst, System::UnicodeString &src);
extern DELPHI_PACKAGE System::UnicodeString __fastcall UnicodeCat(System::UnicodeString &x, System::UnicodeString &y);
extern DELPHI_PACKAGE void __fastcall UnicodeDelete(System::UnicodeString &dst, int index, int count);
extern DELPHI_PACKAGE void __fastcall UnicodeSetLength(System::UnicodeString &dst, int len);
extern DELPHI_PACKAGE int __fastcall UnicodePos(System::UnicodeString &src, System::UnicodeString &sub);
extern DELPHI_PACKAGE System::UnicodeString __fastcall UnicodeCopy(System::UnicodeString &src, int index, int count);
extern DELPHI_PACKAGE void __fastcall UnicodeInsert(System::UnicodeString &dst, System::UnicodeString &src, int index);
extern DELPHI_PACKAGE void __fastcall UnicodeAssign(System::UnicodeString &dst, System::UnicodeString &src);
extern DELPHI_PACKAGE void __fastcall UnicodeFree(System::UnicodeString &s);
extern DELPHI_PACKAGE bool __fastcall UnicodeEqual(System::UnicodeString &x, System::UnicodeString &y);
extern DELPHI_PACKAGE bool __fastcall UnicodeLess(System::UnicodeString &x, System::UnicodeString &y);
extern DELPHI_PACKAGE bool __fastcall UnicodeGreater(System::UnicodeString &x, System::UnicodeString &y);
extern DELPHI_PACKAGE void __fastcall AnsiAppend(System::RawByteString &dst, System::RawByteString &src);
extern DELPHI_PACKAGE System::RawByteString __fastcall AnsiCat(System::RawByteString &x, System::RawByteString &y);
extern DELPHI_PACKAGE void __fastcall AnsiDelete(System::RawByteString &dst, int index, int count);
extern DELPHI_PACKAGE void __fastcall AnsiSetLength(System::RawByteString &dst, int len);
extern DELPHI_PACKAGE int __fastcall AnsiPos(System::RawByteString &src, System::RawByteString &sub);
extern DELPHI_PACKAGE System::RawByteString __fastcall AnsiCopy(System::RawByteString &src, int index, int count);
extern DELPHI_PACKAGE void __fastcall AnsiInsert(System::RawByteString &dst, System::RawByteString &src, int index);
extern DELPHI_PACKAGE bool __fastcall AnsiEqual(System::RawByteString &x, System::RawByteString &y);
extern DELPHI_PACKAGE bool __fastcall AnsiGreater(System::RawByteString &x, System::RawByteString &y);
extern DELPHI_PACKAGE bool __fastcall AnsiLess(System::RawByteString &x, System::RawByteString &y);
extern DELPHI_PACKAGE void __fastcall AnsiAssign(System::RawByteString &dst, System::RawByteString &src);
extern DELPHI_PACKAGE void __fastcall AnsiFree(System::RawByteString &s);
extern DELPHI_PACKAGE void __fastcall WideAssign(System::WideString &dst, System::WideString &src);
extern DELPHI_PACKAGE void __fastcall WideFree(System::WideString &s);
extern DELPHI_PACKAGE void __fastcall WideFromAnsi(System::WideString &dst, System::RawByteString &src);
extern DELPHI_PACKAGE void __fastcall WideFromUnicode(System::WideString &dst, System::UnicodeString &src);
extern DELPHI_PACKAGE void __fastcall WideFromPChar(System::WideString &dst, char * src, bool IsUTF8 = false);
extern DELPHI_PACKAGE bool __fastcall WideEqual(System::WideString &x, System::WideString &y);
extern DELPHI_PACKAGE bool __fastcall WideLess(System::WideString &x, System::WideString &y);
extern DELPHI_PACKAGE bool __fastcall WideGreater(System::WideString &x, System::WideString &y);
extern DELPHI_PACKAGE System::WideString __fastcall WideCat(System::WideString &x, System::WideString &y);
extern DELPHI_PACKAGE int __fastcall WideLength(System::WideString &src);
extern DELPHI_PACKAGE int __fastcall WidePos(System::WideString &src, System::WideString &sub);
extern DELPHI_PACKAGE void __fastcall WideSetLength(System::WideString &dst, int len);
extern DELPHI_PACKAGE void __fastcall WideDelete(System::WideString &dst, int index, int count);
extern DELPHI_PACKAGE void __fastcall WideInsert(System::WideString &dst, System::WideString &src, int index);
extern DELPHI_PACKAGE System::WideString __fastcall WideCopy(System::WideString &src, int index, int count);
extern DELPHI_PACKAGE void __fastcall WideAppend(System::WideString &dst, System::WideString &src);
extern DELPHI_PACKAGE void __fastcall WideFromUTF8(System::WideString &dst, const char * src);
extern DELPHI_PACKAGE void __fastcall UnicodeFromWide(System::UnicodeString &dst, System::WideString &src);
}	/* namespace Strhlpr */
}	/* namespace Internal */
}	/* namespace System */
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_Internal_StrhlprHPP
