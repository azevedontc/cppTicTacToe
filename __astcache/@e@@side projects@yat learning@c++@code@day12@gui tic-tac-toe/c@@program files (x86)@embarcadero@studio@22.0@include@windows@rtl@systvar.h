// -----------------------------------------------------------------------------------
// SYSTVAR.H: C++ Encapsulations of Delphi's TVarRec/TVarData 
//
// $Rev: 111713 $
//
// Copyright(c) 1995-2011 Embarcadero Technologies, Inc.
// -----------------------------------------------------------------------------------
#if !defined(SYSTVAR_H)
#define SYSTVAR_H

#if !defined(SystemHPP)
#error Do not include this file directly.  Include 'System.hpp'.
#endif

#if !defined(SYSMAC_H)
#include <sysmac.h>
#endif

#if !defined(DSTRING_H)
#include <dstring.h>
#endif

#if !defined(WSTRING_H)
#include <wstring.h>
#endif

#if defined(_WIN32)
  #define VARIANT_NATIVE_SUPPORT
#endif

#if defined(VARIANT_NATIVE_SUPPORT)
typedef struct tagSAFEARRAY SAFEARRAY;
typedef struct tagVARIANT VARIANT;
#endif

// TVarData = VARIANT
struct TVarData
{
  union
  {
    uint16_t    VType;    // Delphi-compatible - Variant Type member
#if defined(VARIANT_NATIVE_SUPPORT)
    VARTYPE     vt;       // tagVARIANT compatible member
#else
    uint16_t    vt;       // Expose a generic 'vt' member
#endif
  };
  uint16_t Reserved1;
  uint16_t Reserved2;
  uint16_t Reserved3;
  union
  {
    // Delphi-compatible TVarData/Variant members
    System::Smallint      VSmallint;    //  iVal
    System::Integer       VInteger;     //  lVal
    System::Single        VSingle;      //  fltVal
    System::Double        VDouble;      //  dblVal
    System::CurrencyBase  VCurrency;    //  cyVal
    System::TDateTimeBase VDate;        //  date
    System::PWideChar     VOleStr;      //  bstrVal
#ifdef _WIN32
    IDispatch*            VDispatch;    //  pdispVal
#else
    System::IDispatch*    VDispatch;    //  pdispVal
#endif
    System::HResult       VError;       //  scode
    System::WordBool      VBoolean;     //  boolVal
    IUnknown*             VUnknown;     //  punkVal
    System::Byte          VByte;        //  bVal
    System::Int8          VShortint;    //  charVal
    System::Int8          VShortInt;    //  charVal
    System::Pointer       VString;      //  ??????
    System::PVarArray     VArray;       //  parray
    System::Pointer       VPointer;     //  byref
    __int64               VInt64;       //  llVal
    unsigned __int64      VUInt64;      //  ullVal
    System::Word          VWord;        //  uiVal
    System::LongWord      VLongWord;    //  ulVal
    System::TVarRecord    VRecord;      //  struct __tagBRECORD

#if defined(VARIANT_NATIVE_SUPPORT)
    // tagVARIANT compatible members (from OAIDL.H)
    // Allowing all types marked as [V] (may appear in a VARIANT to be initialized
    LONG          lVal;
    BYTE          bVal;
    SHORT         iVal;
    FLOAT         fltVal;
    DOUBLE        dblVal;
    VARIANT_BOOL  boolVal;
    SCODE         scode;
    CY            cyVal;
    DATE          date;
    BSTR          bstrVal;
    LONG64        llVal;
    ULONG64       ullVal;
    IUnknown     *punkVal;
    IDispatch    *pdispVal;
    SAFEARRAY    *parray;
    BYTE         *pbVal;
    SHORT        *piVal;
    LONG         *plVal;
    FLOAT        *pfltVal;
    DOUBLE       *pdblVal;
    VARIANT_BOOL *pboolVal;
    SCODE        *pscode;
    CY           *pcyVal;
    DATE         *pdate;
    BSTR         *pbstrVal;
    IUnknown    **ppunkVal;
    IDispatch   **ppdispVal;
    SAFEARRAY   **pparray;
    VARIANT      *pvarVal;
    PVOID         byref;
    CHAR          cVal;
    USHORT        uiVal;
    ULONG         ulVal;
    INT           intVal;
    UINT          uintVal;
    DECIMAL      *pdecVal;
    CHAR         *pcVal;
    USHORT       *puiVal;
    ULONG        *pulVal;
    INT          *pintVal;
    UINT         *puintVal;
    LONG64       *pllVal;
    ULONG64      *pullVal;
#endif
  };
};
typedef struct TVarData *PVarData;

#pragma option push -w-inl -w-lvc

namespace System
{

#if 0 // in System.npp
  #pragma pack(push, 1)
  typedef struct
  {
    unsigned char CallType;
    unsigned char ArgCount;
    unsigned char NamedArgCount;
    unsigned char ArgTypes[256];
  } TCallDesc, *PCallDesc;

  typedef struct
  {
    int DispID;
    unsigned char ResType;
    TCallDesc CallDesc;
  } TDispDesc, *PDispDesc;
  #pragma pack(pop)
#endif

  class   TVarRec;
  typedef TVarRec* PVarRec;

  class TVarRec
  {
  public:
    union
    {
      int          VInteger;
      bool         VBoolean;
      AnsiChar     VChar;
      long double* VExtended;
      PShortString VString;
      void*        VPointer;
      PAnsiChar    VPChar;
#if !defined(DELPHI_AUTOREFCOUNT)
      TObject*     VObject;
#else      
      void*        VObject;
#endif      
      TClass       VClass;
      WideChar     VWideChar;
      WideChar*    VPWideChar;
      void*        VAnsiString;
      Currency*    VCurrency;
      Variant*     VVariant;
      void*        VInterface;
      void*        VWideString;
      __int64*     VInt64;
      void*        VUnicodeString;
    };
    union
    {
      Byte VType;
    };

    //---- constructors ----
    __fastcall TVarRec(): VType(vtInteger), VInteger(0) {} //default int 0
    __fastcall TVarRec(int src): VType(vtInteger), VInteger(src) {}
    __fastcall TVarRec(unsigned src): VType(vtInteger), VInteger(src) {}
    __fastcall TVarRec(unsigned long src): VType(vtInteger), VInteger(src) {}
    __fastcall TVarRec(long src): VType(vtInteger), VInteger(src) {}
    __fastcall TVarRec(bool src): VType(vtBoolean), VBoolean(src) {}
    __fastcall TVarRec(char src): VType(vtChar), VChar(src) {}
#if defined(_WIN64) || defined(TARGET_OS_IPHONE) || defined(__ANDROID__)
    // WIN64, iOS, ANDROID => double == long double
    __fastcall TVarRec(const double& src): VType(vtExtended), VExtended(reinterpret_cast<Extended*>(const_cast<double*>(&src))) {}
#endif
    __fastcall TVarRec(const long double& src): VType(vtExtended), VExtended(const_cast<Extended*>(&src)) {}
    __fastcall TVarRec(const ShortString& src): VType(vtString), VString(const_cast<PShortString>(&src)) {}
    __fastcall TVarRec(const void* src): VType(vtPointer), VPointer(const_cast<Pointer>(src)) {}
#if !defined(_DELPHI_STRING_UNICODE)
    __fastcall TVarRec(const PChar src): VType(vtPChar), VPChar(src) {}
#endif
    __fastcall TVarRec(const char* src): VType(vtPChar), VPChar(reinterpret_cast<PAnsiChar>(const_cast<char*>(src))) {}
#if !defined(DELPHI_AUTOREFCOUNT)
    __fastcall TVarRec(const TObject& src): VType(vtObject), VObject(const_cast<TObject*>(&src)) {}
#endif    
    __fastcall TVarRec(const TClass src): VType(vtClass), VClass(src) {}
    __fastcall TVarRec(const WideChar* src): VType(vtPWideChar), VPWideChar(const_cast<PWideChar>(src)) {}
    __fastcall TVarRec(WideChar src): VType(vtWideChar), VWideChar(src) {}
#if !defined(_DELPHI_NEXTGEN)
    __fastcall TVarRec(const AnsiString& src): VType(vtAnsiString), VAnsiString(const_cast<void*>(src.data())) {}
    __fastcall TVarRec(const RawByteString& src): VType(vtAnsiString), VAnsiString(const_cast<void*>(src.data())) {}
#endif
    __fastcall TVarRec(const Currency& src): VType(vtCurrency), VCurrency(const_cast<PCurrency>(&src)) {}
    __fastcall TVarRec(const Variant& src): VType(vtVariant), VVariant(const_cast<PVariant>(&src)) {}
#if !defined(_DELPHI_NEXTGEN)
    __fastcall TVarRec(const WideString& src): VType(vtWideString), VWideString(const_cast<WideString&>(src).data()) {}
#endif
    __fastcall TVarRec(const UnicodeString& src): VType(vtUnicodeString), VUnicodeString(const_cast<void*>(src.data())) {}
    __fastcall TVarRec(const __int64& src): VType(vtInt64), VInt64(const_cast<PInt64>(&src)) {}
    __fastcall TVarRec(const unsigned __int64& src): VType(vtInt64), VInt64(reinterpret_cast<PInt64>(const_cast<PUInt64>(&src))) {}

    //---- assignments ----
    TVarRec& __fastcall operator =(int src)
    {
      VType = vtInteger;
      VInteger = src;
      return *this;
    }

    TVarRec& __fastcall operator =(unsigned src)
    {
      VType = vtInteger;
      VInteger = src;
      return *this;
    }

    TVarRec& __fastcall operator =(long src)
    {
      VType = vtInteger;
      VInteger = src;
      return *this;
    }

    TVarRec& __fastcall operator =(unsigned long src)
    {
      VType = vtInteger;
      VInteger = src;
      return *this;
    }

    TVarRec& __fastcall operator =(const __int64& src)
    {
      VType = vtInt64;
      VInt64 = const_cast<PInt64>(&src);
      return *this;
    }

    TVarRec& __fastcall operator =(const unsigned __int64& src)
    {
      VType = vtInt64;
      VInt64 = reinterpret_cast<PInt64>(const_cast<PUInt64>(&src));
      return *this;
    }

    TVarRec& __fastcall operator =(bool src)
    {
      VType = vtBoolean;
      VBoolean = src;
      return *this;
    }

    TVarRec& __fastcall operator =(char src)
    {
      VType = vtChar;
      VChar = src;
      return *this;
    }

    TVarRec& __fastcall operator =(const long double& src)
    {
      VType = vtExtended;
      VExtended = const_cast<PExtended>(&src);
      return *this;
    }

    TVarRec& __fastcall operator =(const ShortString& src)
    {
      VType = vtString;
      VString = const_cast<PShortString>(&src);
      return *this;
    }

    TVarRec& __fastcall operator =(const void* src)
    {
      VType = vtPointer;
      VPointer = const_cast<Pointer>(src);
      return *this;
    }

#if !defined(_DELPHI_STRING_UNICODE)
    TVarRec& __fastcall operator =(const PChar src)
    {
      VType = vtPChar;
      VPChar = src;
      return *this;
    }
#endif

    TVarRec& __fastcall operator =(const char* src)
    {
      VType = vtPChar;
      VPChar = static_cast<PAnsiChar>(const_cast<char*>(src));
      return *this;
    }

#if !defined(DELPHI_AUTOREFCOUNT)
    TVarRec& __fastcall operator =(const TObject& src)
    {
      VType = vtObject;
      VObject = const_cast<TObject*>(&src);
      return *this;
    }
#endif

    TVarRec& __fastcall operator =(const TClass& src)
    {
      VType = vtClass;
      VClass = src;
      return *this;
    }

    TVarRec& __fastcall operator =(WideChar src)
    {
      VType = vtWideChar;
      VWideChar = src;
      return *this;
    }
    
    TVarRec& __fastcall operator =(const WideChar* src)
    {
      VType = vtPWideChar;
      VPWideChar = const_cast<PWideChar>(src);
      return *this;
    }

#if !defined(_DELPHI_NEXTGEN)
    TVarRec& __fastcall operator =(const AnsiString& src)
    {
      VType = vtAnsiString;
      VAnsiString = const_cast<void*>(src.data());
      return *this;
    }

    TVarRec& __fastcall operator =(const WideString& src)
    {
      VType = vtWideString;
      VWideString = const_cast<WideString&>(src).data();
      return *this;
    }
#endif

    TVarRec& __fastcall operator =(const UnicodeString& src)
    {
      VType = vtUnicodeString;
      VUnicodeString = const_cast<void*>(src.data());
      return *this;
    }

    TVarRec& __fastcall operator =(const Currency& src)
    {
      VType = vtCurrency;
      VCurrency = const_cast<PCurrency>(&src);
      return *this;
    }

    TVarRec& __fastcall operator =(const Variant& src)
    {
      VType = vtVariant;
      VVariant = const_cast<PVariant>(&src);
      return *this;
    }
  };

#undef TVarRec_VLong
#undef TVarRec_vtLong
}

#pragma option  pop

#endif
