// -----------------------------------------------------------------------------------
// SYSCLASS.H: Definitions of Delphi types
//
// $Rev: 98316 $
//
// Copyright(c) 1995-2011 Embarcadero Technologies, Inc.
// -----------------------------------------------------------------------------------
#if !defined(SYSCLASS_H)
#define SYSCLASS_H

#if !defined(SystemHPP)
#error Do not include this file directly.  Include 'System.hpp'.
#endif

#pragma option push -pc

#if !defined(SYSMAC_H)
#include <sysmac.h>
#endif

// VCL_IOSTREAM: This macro enables the i/ostream insertion/extraction operators of VCL
//               classes. The operators are otherwise hidden to cut down on the amount
//               of lines (i.e. symbols) that must be compiled. (The redefinition of
//               i/ostream as templates in the Standard Library made these headers
//               fairly significant).
//
// If <iostream> has already been included, then define the macro that prompts
// VCL insertion/extraction operators to be exposed.
// NOTE: We'll no longer emit 'using namespace std'. Code that relied on the
// 'using' statement will need to be updated.
#if !defined(NO_VCL_IOSTREAM)
#define VCL_IOSTREAM
#endif

#if defined(__STD_IOSTREAM__) || defined(_IOSTREAM_) || defined(_IOSTREAM_H_)
#define VCL_IOSTREAM
#elif defined(VCL_IOSTREAM) && !defined(__STD_IOSTREAM__) && !defined(_IOSTREAM_)
#include <iostream>
#endif

#if !defined(USTRING_H)
#include <ustring.h>
#endif

#if !defined(DSTRING_H)
#include <dstring.h>
#endif

#if !defined(WSTRING_H)
#include <wstring.h>
#endif

#if !defined(SYSTOBJ_H)
#include <systobj.h>
#endif

#if !defined(SYSTDATE_H)
#include <systdate.h>
#endif

#if !defined(SYSCURR_H)
#include <syscurr.h>
#endif

#if !defined(SYSCOMP_H)
#include <syscomp.h>
#endif

#if !defined(SYSSET_H)
#include <sysset.h>
#endif

#if !defined(SYSMAC_H)
#include <sysmac.h>
#endif

#if !defined(SYSTVAR_H)
#include <systvar.h>
#endif

#if !defined(SYSDYN_H)
#include <sysdyn.h>
#endif

#if !defined(SYSOPEN_H)
#include <sysopen.h>
#endif

#if !defined(SYSTOBJ_H)
#include <systobj.h>
#endif

#if !defined(SYSVARI_H)
#include <sysvari.h>
#endif

#if !defined(SYSITERATOR_H)
#include <sysiterator.h>
#endif

#pragma option push -w-inl -w-lvc

namespace System
{
#ifdef BCBVER1
  #define USEDATAMODULE(FileName, DataModuleName)  \
    class DELPHICLASS T##DataModuleName;       \
    extern T##DataModuleName *DataModuleName;
#else
  #define USEDATAMODULE(FileName, DataModuleName)  \
    class DELPHICLASS T##DataModuleName;       \
    extern PACKAGE T##DataModuleName *DataModuleName;
#endif

#ifdef BCBVER1
  #define USEDATAMODULENS(FileName, UnitName, DataModuleName)  \
    namespace UnitName {         \
    class DELPHICLASS T##DataModuleName;       \
    extern T##DataModuleName *DataModuleName;              \
   };               \
   using namespace UnitName
#else
  #define USEDATAMODULENS(FileName, UnitName, DataModuleName)  \
    namespace UnitName {         \
    class DELPHICLASS T##DataModuleName;       \
    extern PACKAGE T##DataModuleName *DataModuleName;              \
    };               \
    using namespace UnitName
#endif

#ifdef BCBVER1
  #define USEFORM(FileName, FormName) \
    class DELPHICLASS T##FormName;       \
    extern T##FormName *FormName;
#else
  #define USEFORM(FileName, FormName) \
    class DELPHICLASS T##FormName;       \
    extern PACKAGE T##FormName *FormName;
#endif

#define USEFORMRES(FileName, FormName, AncestorName) \
   extern PACKAGE DummyThatIsNeverReferenced

#ifdef BCBVER1
  #define USEFORMNS(FileName, UnitName, FormName) \
    namespace UnitName {         \
    class DELPHICLASS T##FormName;       \
    extern T##FormName *FormName;          \
    };               \
    using namespace UnitName
#else
  #define USEFORMNS(FileName, UnitName, FormName) \
    namespace UnitName {         \
    class DELPHICLASS T##FormName;       \
    extern PACKAGE T##FormName *FormName;          \
    };               \
    using namespace UnitName
#endif

#define USEUNIT(ModName) \
   extern PACKAGE int DummyThatIsNeverReferenced

#define USEOBJ(FileName) \
   extern PACKAGE int DummyThatIsNeverReferenced

#define USERC(FileName) \
   extern PACKAGE int DummyThatIsNeverReferenced

#define USEASM(FileName) \
   extern PACKAGE int DummyThatIsNeverReferenced

#define USEDEF(FileName) \
   extern PACKAGE int DummyThatIsNeverReferenced

#define USERES(FileName) \
   extern PACKAGE int DummyThatIsNeverReferenced

#define USETLB(FileName) \
   extern PACKAGE int DummyThatIsNeverReferenced

#define USELIB(FileName) \
   extern PACKAGE int DummyThatIsNeverReferenced

#define USEFILE(FileName) \
   extern PACKAGE int DummyThatIsNeverReferenced

#define USEPACKAGE(FileName) \
   extern PACKAGE int DummyThatIsNeverReferenced

#define USEIDL(FileName) \
   extern PACKAGE int DummyThatIsNeverReferenced

#define USE(FileName, ContainerId) \
   extern PACKAGE int DummyThatIsNeverReferenced

#define USEADDITIONALFILES(Exts) \
   extern PACKAGE int DummyThatIsNeverReferenced

  typedef TResStringRec ResourceString;

  // always get statically from vcleXX.lib
  extern System::String __fastcall LoadResourceString(ResourceString const * const rsrc);

  // always get statically from vcleXX.lib
  extern void __fastcall CheckSafecallResult(HRESULT hr);

  // always get statically from vcleXX.lib
  extern void * __fastcall FindDynaInst(void * vmt, int ID);

} // namespace System

// 'System' is the one namespace that must opened up currently

// Define VCL_IOSTREAM operators
//
#if defined(VCL_IOSTREAM)

namespace System
{
  template <typename ISTRM, typename CH, typename STR> void
  read_to_delim(ISTRM& strm, CH delim, STR& str)
  {
    const static CH fmt[] = {'%', 's', '\0'};
    CH array[4096];
    bool first = true;
    while (1) {

      // Read as many characters as we can, up to the delimiter:
      strm.get(array, sizeof(array)/sizeof(array[0]), delim);
      if (first) {
        str.printf(fmt, array);
        first = !first;
      } else {
        str.cat_printf(fmt, array);
      }

      // What stopped us?  An EOF?
      if (!strm.good())
        break;      // EOF encountered (or worse!)

      // Nope.  Was it the delimiter?
      CH ch;
      strm.get(ch);
      if (ch==delim)
        break;  // Yup. We're done.  Don't put it back on the stream.
      else
        strm.putback(ch); // Nope, Put it back and keep going.
    }
  }

  inline std::istream& operator >> (std::istream& is, System::AnsiString& arg)
  {
    read_to_delim(is, char(0), arg);
    return is;
  }

  inline std::ostream& operator << (std::ostream& os, const System::AnsiString& arg)
  {
    return os << arg.c_str();
  }

  inline std::wistream& operator >> (std::wistream& is, System::UnicodeString& arg)
  {
    read_to_delim(is, wchar_t(0), arg);
    return is;
  }

  inline std::wostream& operator << (std::wostream& os, const System::UnicodeString& arg)
  {
    return os << arg.c_str();
  }

  template <unsigned char sz>
  inline std::ostream& operator << (std::ostream& os, const System::SmallString<sz>& arg)
  {
    os << System::AnsiString(arg).c_str();
    return os;
  }

  template <unsigned char sz>
  inline std::istream& operator >> (std::istream& is, System::SmallString<sz>& arg)
  {
    System::AnsiString s;
    is >> s;
    arg = s;
    return is;
  }

  // Currency IOStream operators
  //
  inline std::ostream& operator << (std::ostream& os, const System::Currency& arg)
  {
    os << System::AnsiString(arg.operator System::String());
    return os;
  }

  inline std::istream& operator >> (std::istream& is, System::Currency& arg)
  {
    System::AnsiString str;
    is >> str;
    arg = System::Currency(str);
    return is;
  }


  // TDateTime IOStream operators
  //
  inline std::ostream& operator << (std::ostream& os, const TDateTime& arg)
  {
    os << AnsiString(arg.operator System::String());
    return os;
  }

  inline std::istream& operator >> (std::istream& is, TDateTime& arg)
  {
    AnsiString str;
    is >> str;
    arg = TDateTime(str);
    return is;
  }

  // Variant IOStream operators
  //
  inline std::ostream& operator << (std::ostream& os, const Variant& arg)
  {
    switch (arg.VType)
    {
    case varEmpty:
      os << arg.VType;
      break;
    case varNull:
      os << arg.VType;
      break;
    case varSmallint:
      os << arg.VType << ',' << arg.VSmallint;
      break;
    case varInteger:
      os << arg.VType << ',' << arg.VInteger;
      break;
    case varSingle:
      os << arg.VType << ',' << arg.VSingle;
      break;
    case varDouble:
      os << arg.VType << ',' << arg.VDouble;
      break;
    case varCurrency:
      os << arg.VType << ',' << arg.VCurrency;
      break;
    case varDate:
      os << arg.VType << ',' << arg.VDate;
      break;
    case varError:
      os << arg.VType << ',' << arg.VError;
      break;
    case varBoolean:
      os << arg.VType << ',' << arg.VBoolean;
      break;
#if !defined(_DELPHI_NEXTGEN) && defined(_PLAT_MSWINDOWS)
    case varOleStr:
      os << arg.VType << ',' << AnsiString(arg.VOleStr);
      break;
#endif
    case varByte:
      os << arg.VType << ',' << arg.VByte;
      break;
#if !defined(_DELPHI_NEXTGEN)
    case varString:
      os << arg.VType << ',' << arg.operator AnsiString();
      break;
#endif
      // TODO: varUString support ?
    default:
      os << arg.VType << ',' << arg.VPointer;
    }
    return os;
  }

  inline std::istream& operator >>(std::istream& is, Variant& arg)
  {
    is >> arg.VType;
    char ch;
    switch (arg.VType)
    {
      case varEmpty:
        break;
      case varNull:
        break;
      case varSmallint:
        is >> ch >> arg.VSmallint;
        break;
      case varInteger:
        is >> ch >> arg.VInteger;
        break;
      case varSingle:
        is >> ch >> arg.VSingle;
        break;
      case varDouble:
        is >> ch >> arg.VDouble;
        break;
      case varCurrency:
        is >> ch >> *(reinterpret_cast<Currency*>(&arg.VCurrency));
        break;
      case varDate:
        is >> ch >> *(reinterpret_cast<TDateTime*>(&arg.VDate));
        break;
      case varError:
        is >> ch >> arg.VError;
        break;
      case varBoolean: {
        is >> ch >> arg.VBoolean;
        break;
        }
#if !defined(_DELPHI_NEXTGEN) && defined(_PLAT_MSWINDOWS)
      case varOleStr: {
          AnsiString str;
          is >> ch >> str;
          arg = WideString(str);
          break;
        }
#endif
      case varByte:
        is >> ch >>  arg.VByte;
        break;
#if !defined(_DELPHI_NEXTGEN)
      case varString: {
        AnsiString str;
        is >> ch >> str;
        arg = str;
        break;
      }
#endif
      // TODO: varUString support ?
      default:
        is >> ch >> arg.VPointer;
    }
    return is;
  }
}       // namespace System
#endif  // VCL_IOSTREAM


#pragma option pop
#pragma option pop


// Undo the MACROs which mapped the Automation related types to their tagStruct.
//
#if defined(CURRENCY)
#undef CURRENCY
#endif
#if defined(SAFEARRAY)
#undef SAFEARRAY
#endif
#if defined(VARIANT)
#undef  VARIANT
#endif

// Define ARC-specialized versions of addressof() if using libc++
// since __has_feature(objc-arc-*) could be disabled
#if defined(__clang__)
#if __has_feature(borland_arc) && defined(_LIBCPP_VERSION) && defined(_DELPHI_AUTOREFCOUNT) && \
    !defined(_LIBCPP_HAS_OBJC_ARC)
_LIBCPP_BEGIN_NAMESPACE_STD

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY __strong _Tp* addressof(
    __strong _Tp& __x) _NOEXCEPT {
  return &__x;
}

#if defined(DELPHI_WEAKINSTREF) || defined(DELPHI_WEAKINTFREF)
template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY __weak _Tp* addressof(
    __weak _Tp& __x) _NOEXCEPT {
  return &__x;
}
#endif

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY __autoreleasing _Tp* addressof(
    __autoreleasing _Tp& __x) _NOEXCEPT {
  return &__x;
}

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY __unsafe_unretained _Tp* addressof(
    __unsafe_unretained _Tp& __x) _NOEXCEPT {
  return &__x;
}

_LIBCPP_END_NAMESPACE_STD
#define _LIBCPP_PREDEFINED_OBJC_ARC_ADDRESSOF
#endif  //  __has_feature(borland_arc) && defined(_LIBCPP_VERSION) ...
#endif  //  defined(__clang__)

#endif
