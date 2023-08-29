// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Memo.Types.pas' rev: 35.00 (Windows)

#ifndef Fmx_Memo_TypesHPP
#define Fmx_Memo_TypesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <FMX.Text.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Memo
{
namespace Types
{
//-- forward type declarations -----------------------------------------------
struct TFragmentInserted;
struct TFragmentDeleted;
//-- type declarations -------------------------------------------------------
enum class DECLSPEC_DENUM TInsertOption : unsigned char { Selected, MoveCaret, CanUndo, UndoPairedWithPrev, Typed };

typedef System::Set<TInsertOption, _DELPHI_SET_ENUMERATOR(TInsertOption::Selected), _DELPHI_SET_ENUMERATOR(TInsertOption::Typed)> TInsertOptions;

enum class DECLSPEC_DENUM TDeleteOption : unsigned char { MoveCaret, CanUndo, Selected };

typedef System::Set<TDeleteOption, _DELPHI_SET_ENUMERATOR(TDeleteOption::MoveCaret), _DELPHI_SET_ENUMERATOR(TDeleteOption::Selected)> TDeleteOptions;

enum class DECLSPEC_DENUM TActionType : unsigned char { Delete, Insert };

enum class DECLSPEC_DENUM TSelectionPointType : unsigned char { Left, Right };

typedef Fmx::Text::TCaretPosition TCaretPosition;

struct DECLSPEC_DRECORD TFragmentInserted
{
public:
	int StartPos;
	int FragmentLength;
	bool PairedWithPrev;
	bool Typed;
	static TFragmentInserted __fastcall Create(const int StartPos, const int FragmentLength, const bool PairedWithPrev, const bool Typed);
};


struct DECLSPEC_DRECORD TFragmentDeleted
{
public:
	int StartPos;
	System::UnicodeString Fragment;
	bool Selected;
	bool CaretMoved;
	static TFragmentDeleted __fastcall Create(const int StartPos, const System::UnicodeString Fragment, const bool Selected, const bool CaretMoved);
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Types */
}	/* namespace Memo */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_MEMO_TYPES)
using namespace Fmx::Memo::Types;
#endif
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
#endif	// Fmx_Memo_TypesHPP
