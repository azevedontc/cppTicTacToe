// -----------------------------------------------------------------------------------
// SYSVARI.H: C++ Encapsulation of Delphi Variant & Olevariant types
// This file is conditionalized upon three macros that are initialized based
// upon the target operating system:
//
// VARIANT_TVARIANT_SUPPORT - enable support for TVariant<T> wrapper in
// <utilcls.h>
//
// VARIANT_AUTOMATION_SUPPORT - enable support for OLE Automation
// wrappers using Variant objects
//
// VARIANT_NATIVE_SUPPORT - native VARIANT type is supported.
//
// Do not define these macros yourself, they will be defined by this
// header if, and only if, the relevant support is available.  To
// disable any of these items (and therefore suppress the definition of
// the corresponding macro), define a _NONE variant:
//
// VARIANT_TVARIANT_SUPPORT_NONE
// VARIANT_AUTOMATION_SUPPORT_NONE
// VARIANT_NATIVE_SUPPORT_NONE
//
//
// $Rev: 111713 $
//
// Copyright(c) 1995-2011 Embarcadero Technologies, Inc.
// -----------------------------------------------------------------------------------
#if !defined(SYSVARI_H)
#define SYSVARI_H

#if !defined(SystemHPP)
#error Do not include this file directly.  Include 'System.hpp'.
#endif

#if !defined(SYSMAC_H)
#include <sysmac.h>
#endif

#if defined(_WIN32)
  #if !defined(VARIANT_TVARIANT_SUPPORT_NONE)
    #define VARIANT_TVARIANT_SUPPORT
  #endif
  #if !defined(VARIANT_AUTOMATION_SUPPORT_NONE) && !defined(_DELPHI_NEXTGEN)
    #define VARIANT_AUTOMATION_SUPPORT
  #endif
  #if !defined(VARIANT_NATIVE_SUPPORT_NONE)
    #define VARIANT_NATIVE_SUPPORT
  #endif

  // The following bring in basic windows types + IUnknown
  #include <wtypes.h>
  #include <unknwn.h>
  #include <oaidl.h>
#endif

#if defined(__linux__)
  #if defined(VARIANT_TVARIANT_SUPPORT)
    #error VARIANT_TVARIANT_SUPPORT not supported
  #endif
  #if defined(VARIANT_AUTOMATION_SUPPORT)
    #error VARIANT_TAUTOMATION_SUPPORT not supported
  #endif
  #if defined(VARIANT_NATIVE_SUPPORT)
    #error VARIANT_NATIVE_SUPPORT not supported
  #endif
#endif


#if defined(VARIANT_AUTOMATION_SUPPORT)
  #if !defined(DISPATCH_METHOD)
    #define DISPATCH_METHOD         0x1
  #endif
  #if !defined(DISPATCH_PROPERTYGET)
    #define DISPATCH_PROPERTYGET    0x2
  #endif
  #if !defined(DISPATCH_PROPERTYPUT)
    #define DISPATCH_PROPERTYPUT    0x4
  #endif
  #if !defined(DISPATCH_PROPERTYPUTREF)
    #define DISPATCH_PROPERTYPUTREF 0x8
  #endif

  typedef union     tagCY   CURRENCY;
  typedef struct    tagSAFEARRAY  SAFEARRAY;
  typedef struct    tagVARIANT  VARIANT;
  struct    tagSTATSTG;
#endif // VARIANT_AUTOMATION_SUPPORT

#if defined(VARIANT_AUTOMATION_SUPPORT)
  // The following are Automation related structures required by either Variant
  // or some other VCL Header. We forward ref. the tagStruct and #define the
  // typedef name to the tagStruct.
  //
  interface IDispatch;
  class     TAutoArgsBase;
  template <int COUNT>
  class     TAutoArgs;
#endif

#ifdef VARIANT_TVARIANT_SUPPORT
  template  <class T, bool CLEANUP> class TVariantT;
  typedef   TVariantT<VARIANT, true>      TVariant;
#endif


#if !defined(SYSTVAR_H)
  #include <systvar.h>
#endif

// BCC does not support using
#if !defined(__clang__)
  #define __USING
  #define __EXPLICIT
#else
  #define __USING using
  #define __EXPLICIT //explicit
#endif

#pragma option push -w-inl -w-lvc -w-8106

namespace System
{

#if defined(VARIANT_AUTOMATION_SUPPORT)
  // NOTE: Defined in OLEAUTO - Keep in sync.
  //
  static const short int MaxDispArgs = 0x20; // (BCB-42024)
#endif


// Variant Type Descriptors (from System unit)
//
//  varEmpty      <=> VT_EMPTY
//  varNull       <=> VT_NULL
//  varSmallint   <=> VT_I2
//  varInteger    <=> VT_I3
//  varSingle     <=> VT_R4
//  varDouble     <=> VT_R8
//  varCurrency   <=> VT_CY
//  varDate       <=> VT_DATE
//  varOleStr     <=> VT_BSTR
//  varDispatch   <=> VT_DISPATCH
//  varError      <=> VT_ERROR
//  varBoolean    <=> VT_BOOL
//  varVariant    <=> VT_VARIANT
//  varUnknown    <=> VT_UNKNOWN
//  varByte       <=> VT_UI1
//  varString     <=> ??_??
//  varTypeMask   <=> VT_TYPEMASK
//  varArray      <=> VT_ARRAY
//  varByRef      <=> VT_BYREF
//  varStrArg     <=> VT_CLSID

#if defined(VARIANT_NATIVE_SUPPORT)
  #define VARIANT_ERROR_SUPPORT
#elif defined(VARIANT_AUTOMATION_SUPPORT)
  #define VARIANT_ERROR_SUPPORT
  typedef uint32_t SCODE;
#endif

#if defined(VARIANT_ERROR_SUPPORT)
  // Encapsulates error code to be stored in Variant
  //
  class VariantError
  {
  public:
    VariantError(SCODE err = DISP_E_PARAMNOTFOUND) : m_scode(err)
    {}
    operator SCODE () const
    {
       return m_scode;
    }
    VariantError& operator = (SCODE err)
    {
      m_scode = err;
      return *this;
    }

  protected:
    SCODE m_scode;
  };
#endif

#if defined(VARIANT_AUTOMATION_SUPPORT)
  class AutoCmd;
#endif

  class RTL_DELPHIRETURN Variant: public TVarData
  {
#if defined(VARIANT_AUTOMATION_SUPPORT)
  private:
    friend class AutoCmd;
  public:
    static Variant CreateObject(const String& ProgID);
    static Variant GetActiveObject(const String& ProgID);
#endif

  public:
    // Default Ctr
    Variant();

    // Copy Ctr
    Variant(const Variant& src);
    Variant(const TVarData& src);

    // Ctr - From basic C++ types
    Variant(const bool src);
    Variant(const char src);
    Variant(const signed char src);
    Variant(const unsigned char src);

    Variant(const short src);
    Variant(const unsigned short src);

    Variant(const int src);
    Variant(const unsigned int src);

    Variant(const long src);
    Variant(const unsigned long src);

    Variant(const float src);
    Variant(const double src);
    Variant(const long double src);
    Variant(const __int64 src);
    Variant(const unsigned __int64 src);

    // Ctr - From OLE structures
#if defined(VARIANT_NATIVE_SUPPORT)
    Variant(const CURRENCY& src);
    Variant(const DECIMAL& src);
    Variant(const SAFEARRAY& src);
    Variant(const VARIANT& src);
    Variant(SAFEARRAY* src);
    Variant(VARIANT*   src);
#endif
#if defined(VARIANT_TVARIANT_SUPPORT)
    Variant(const TVariant& src);
#endif

    // Ctr - From utility classes
    Variant(const AnsiString& src);
    Variant(const Currency& src);
    Variant(const TDateTime& src);
#if defined(VARIANT_ERROR_SUPPORT)
    Variant(const VariantError& src);
#endif
#if !defined(_DELPHI_NEXTGEN)
    Variant(const WideString& src);
#endif
    Variant(const UnicodeString& src);

    // Asciiz pointer
    Variant(const char* src);            // Treated as pointer Asciiz string

#if defined(VARIANT_NATIVE_SUPPORT)
    /////////////////////////////////////////////////////////////////////////////////////////
    // Unlike Delphi/VCL where a BSTR and WideString are identical and always managed, in C++
    // there's WideString (managed) and BSTR (unmanaged). And worse, wchar_t* is sometimes a
    // BSTR  and sometimes not.
    // Whether 'Variant' should make a copy of the 'wchar_t*' has been debated since
    // the early days of C++Builder. I personally think that it should but that's not
    // the way it was implemented and at this point it's dangerous to change this behaviour as
    // we have code that relies on that behaviour - Invariably users do too.
    //
    // Instead, we're adding a parameter whereby one can specify whether
    // the wchar_t* should be copied. If 'makeCopy' is true, the constructor
    // will make a copy of 'src'.
    //
    // So, if you want to create a Variant with a constant string, use 'true' as in:
    //
    //    Variant v(L"Hello", true);
    //
    // NOTE: Do *NOT* use constructs like following as the constructor will be
    //       invoked with the default value of 'makeCopy' - i.e. 'false' - :
    //    Variant v = L"Hello";
    //
    // You may instead use:
    //    Variant v = WideString(L"Hello", true);
    /////////////////////////////////////////////////////////////////////////////////////////
#if !defined(VARIANT_COPIES_BSTR)
    Variant(wchar_t* src, bool makeCopy = false);
#else
    Variant(wchar_t* src, bool makeCopy = true);
#endif
#else
    Variant(const WideChar* src);
#endif  // VARIANT_NATIVE_SUPPORT

    Variant(IUnknown* src);
    Variant(IDispatch* src);

    // Ref-counted Dispatch interface object
    Variant(const System::DelphiInterface<IDispatch>& src);

    //By ref constructors
    Variant(signed char* src);
    Variant(unsigned char* src);

    Variant(short* src);
    Variant(unsigned short* src);

    Variant(int* src);
    Variant(unsigned int* src);

    Variant(long* src);
    Variant(unsigned long* src);

    Variant(float* src);
    Variant(double* src);

    Variant(__int64* src);
    Variant(unsigned __int64* src);

#if defined(VARIANT_NATIVE_SUPPORT)
    Variant(CURRENCY* src);
    Variant(DECIMAL* src);
    Variant(SAFEARRAY** src);
#endif

#if defined(WIDECHAR_IS_WCHAR)
    Variant(wchar_t** src);              // VT_BSTR|VT_BYREF
#endif

    // Ref Vcl classes
    Variant(Currency* src);
    Variant(TDateTime* src);
#if defined(VARIANT_NATIVE_SUPPORT)
    Variant(Variant* src);
#endif

    // Constructor for array of variants of type varType
    Variant(const int* bounds, const int boundsSize, Word varType);

    // Constructor for one dimensional array of type Variant
    Variant(const Variant* values, const int valuesSize);

    ~Variant();

    // NOTE: Not thread-safe/atomic but non-throwing
    void swap(Variant& rhs);

    // Assignments
    Variant& operator =(const Variant& rhs);

    Variant& operator =(const bool src);

    Variant& operator =(const char src);
    Variant& operator =(const signed char src);
    Variant& operator =(const unsigned char src);

    Variant& operator =(const short src);
    Variant& operator =(const unsigned short src);

    Variant& operator =(const int src);
    Variant& operator =(const unsigned int src);

    Variant& operator =(const long src);
    Variant& operator =(const unsigned long src);

    Variant& operator =(const float src);
    Variant& operator =(const double src);
    Variant& operator =(const __int64 src);
    Variant& operator =(const unsigned __int64 src);

#if defined(VARIANT_NATIVE_SUPPORT)
    Variant& operator =(const CURRENCY& src);
    Variant& operator =(const DECIMAL& src);
    Variant& operator =(const SAFEARRAY& src);
    Variant& operator =(const VARIANT& rhs);
    Variant& operator =(SAFEARRAY* src);
    Variant& operator =(VARIANT* rhs);
#endif
#if defined(VARIANT_TVARIANT_SUPPORT)
    Variant& operator =(const TVariant& rhs);
    Variant& operator =(TVariant* rhs);
#endif

    Variant& operator =(const AnsiString& src);
    Variant& operator =(const Currency& src);
    Variant& operator =(const TDateTime& src);
#if defined(VARIANT_ERROR_SUPPORT)
    Variant& operator =(const VariantError& src);
#endif
#if !defined(_DELPHI_NEXTGEN)
    Variant& operator =(const WideString& src);
#endif
    Variant& operator =(const UnicodeString& src);
    Variant& operator =(const System::DelphiInterface<IDispatch>& src);


#if defined(WIDECHAR_IS_WCHAR)
    Variant& Assign(wchar_t* src, bool makeCopy);
    Variant& operator =(wchar_t* src) {
#if !defined(VARIANT_COPIES_BSTR)
      return Assign(src, false);
#else
      return Assign(src, true);
#endif
    }
#endif
    Variant& operator =(IUnknown* src);
    Variant& operator =(IDispatch* src);

    // By ref Assignment
    Variant& operator =(const char* src);          // Treated as pointer Asciiz string
    Variant& operator =(signed char* src);
    Variant& operator =(unsigned char* src);

    Variant& operator =(short* src);
    Variant& operator =(unsigned short* src);

    Variant& operator =(int* src);
    Variant& operator =(unsigned int* src);

    Variant& operator =(long* src);
    Variant& operator =(unsigned long* src);

    Variant& operator =(float* src);
    Variant& operator =(double* src);
    Variant& operator =(__int64* src);
    Variant& operator =(unsigned __int64* src);

#if defined(VARIANT_NATIVE_SUPPORT)
    Variant& operator =(CURRENCY* src);
    Variant& operator =(SAFEARRAY** src);
    Variant& operator =(DECIMAL* src);
#endif

#if defined(WIDECHAR_IS_WCHAR)
    Variant& operator =(wchar_t** src);            // VT_BSTR|VT_BYREF
#endif
    Variant& operator =(IUnknown** src);
    Variant& operator =(IInterface**src);
    Variant& operator =(IDispatch** src);

    Variant& operator =(Currency* src);
    Variant& operator =(TDateTime* src);
    Variant& operator =(Variant* src);

    // Exotic operators
    Variant& operator +=(const Variant& rhs);
    Variant& operator -=(const Variant& rhs);
    Variant& operator *=(const Variant& rhs);
    Variant& operator /=(const Variant& rhs);
    Variant& operator %=(const Variant& rhs);
    Variant& operator &=(const Variant& rhs);
    Variant& operator |=(const Variant& rhs);
    Variant& operator ^=(const Variant& rhs);
    Variant& operator <<=(const Variant& rhs);
    Variant& operator >>=(const Variant& rhs);

    // comparisons (Variant on right)
    bool operator ==(const Variant& rhs) const;
    bool operator !=(const Variant& rhs) const;
    bool operator < (const Variant& rhs) const;
    bool operator > (const Variant& rhs) const;
    bool operator <=(const Variant& rhs) const;
    bool operator >=(const Variant& rhs) const;

    // Comparison (const char* on rhs)
    bool operator ==(const char* rhs) const {
      return operator==(Variant(rhs));
    }
    bool operator !=(const char* rhs) const {
      return operator !=(Variant(rhs));
    }
    bool operator < (const char* rhs) const {
      return operator <(Variant(rhs));
    }
    bool operator > (const char* rhs) const {
      return operator > (Variant(rhs));
    }
    bool operator <=(const char* rhs) const {
      return operator <= (Variant(rhs));
    }
    bool operator >=(const char* rhs) const {
      return operator >= (Variant(rhs));
    }

    // comparisons (int)
    bool operator ==(int rhs) const
    {return operator ==(Variant(rhs));}
    bool operator !=(int rhs) const
    {return operator !=(Variant(rhs));}
    bool operator < (int rhs) const
    {return operator < (Variant(rhs));}
    bool operator > (int rhs) const
    {return operator > (Variant(rhs));}
    bool operator <=(int rhs) const
    {return operator <=(Variant(rhs));}
    bool operator >=(int rhs) const
    {return operator >=(Variant(rhs));}

#if !defined(_DELPHI_NEXTGEN)
    // comparisons (string on right)
    bool operator ==(const AnsiString& rhs) const
    { return (this->operator AnsiString()) == rhs;  }
#endif

    // comparisons (double)
    bool operator ==(double rhs) const
    {return operator ==(Variant(rhs));}
    bool operator !=(double rhs) const
    {return operator !=(Variant(rhs));}
    bool operator < (double rhs) const
    {return operator <(Variant(rhs));}
    bool operator > (double rhs) const
    {return operator >(Variant(rhs));}
    bool operator <=(double rhs) const
    {return operator <=(Variant(rhs));}
    bool operator >=(double rhs) const
    {return operator >=(Variant(rhs));}

    // comparisons (TDateTime)
    bool operator ==(TDateTime rhs) const
    {return operator ==(Variant(rhs));}
    bool operator !=(TDateTime rhs) const
    {return operator !=(Variant(rhs));}
    bool operator < (TDateTime rhs) const
    {return operator <(Variant(rhs));}
    bool operator > (TDateTime rhs) const
    {return operator >(Variant(rhs));}
    bool operator <=(TDateTime rhs) const
    {return operator <=(Variant(rhs));}
    bool operator >=(TDateTime rhs) const
    {return operator >=(Variant(rhs));}

    // binary operators (Variant)
    Variant operator +(const Variant& rhs) const;
    Variant operator -(const Variant& rhs) const;
    Variant operator *(const Variant& rhs) const;
    Variant operator /(const Variant& rhs) const;
    Variant operator %(const Variant& rhs) const;
    Variant operator &(const Variant& rhs) const;
    Variant operator |(const Variant& rhs) const;
    Variant operator ^(const Variant& rhs) const;
    Variant operator <<(const Variant& rhs) const;
    Variant operator >>(const Variant& rhs) const;

    // binary operators (AnsiString)
    Variant operator -(const AnsiString& rhs) const
    {return operator -(Variant(rhs));}
    Variant operator *(const AnsiString& rhs) const
    {return operator *(Variant(rhs));}
    Variant operator /(const AnsiString& rhs) const
    {return operator /(Variant(rhs));}
    Variant operator %(const AnsiString& rhs) const
    {return operator %(Variant(rhs));}
    Variant operator &(const AnsiString& rhs) const
    {return operator &(Variant(rhs));}
    Variant operator |(const AnsiString& rhs) const
    {return operator |(Variant(rhs));}
    Variant operator ^(const AnsiString& rhs) const
    {return operator ^(Variant(rhs));}
    Variant operator <<(const AnsiString& rhs) const
    {return operator <<(Variant(rhs));}
    Variant operator >>(const AnsiString& rhs) const
    {return operator >>(Variant(rhs));}

    // binary operators (int on right)
    Variant operator +(int rhs) const
    {return operator +(Variant(rhs));}
    Variant operator -(int rhs) const
    {return operator -(Variant(rhs));}
    Variant operator *(int rhs) const
    {return operator *(Variant(rhs));}
    Variant operator /(int rhs) const
    {return operator /(Variant(rhs));}
    Variant operator %(int rhs) const
    {return operator %(Variant(rhs));}
    Variant operator &(int rhs) const
    {return operator &(Variant(rhs));}
    Variant operator |(int rhs) const
    {return operator |(Variant(rhs));}
    Variant operator ^(int rhs) const
    {return operator ^(Variant(rhs));}
    Variant operator <<(int rhs) const
    {return operator <<(Variant(rhs));}
    Variant operator >>(int rhs) const
    {return operator >>(Variant(rhs));}

    // binary operators (double on right)
    Variant operator +(double rhs) const
    {return operator +(Variant(rhs));}
    Variant operator -(double rhs) const
    {return operator -(Variant(rhs));}
    Variant operator *(double rhs) const
    {return operator *(Variant(rhs));}
    Variant operator /(double rhs) const
    {return operator /(Variant(rhs));}
    Variant operator %(double rhs) const
    {return operator %(Variant(rhs));}
    Variant operator &(double rhs) const
    {return operator &(Variant(rhs));}
    Variant operator |(double rhs) const
    {return operator |(Variant(rhs));}
    Variant operator ^(double rhs) const
    {return operator ^(Variant(rhs));}
    Variant operator <<(double rhs) const
    {return operator <<(Variant(rhs));}
    Variant operator >>(double rhs) const
    {return operator >>(Variant(rhs));}

    // unary operators
    Variant operator -() const;
    Variant operator !() const;

    // Conversion operators
    template <typename T>
    T As() const {
      return this->operator T();
    }

    template <typename T>
    T* AsRef() {
      return this->operator T*();
    }

    operator bool()            const;

    operator char()            const;
    operator signed char()     const;
    operator unsigned char()   const;

    operator short()           const;
    operator unsigned short()  const;

    operator int()             const;
    operator unsigned int()    const;

    operator long()            const;
    operator unsigned long()   const;

    operator float()           const;
    operator double()          const;
    operator __int64()         const;
    operator unsigned __int64()const;

#if !defined(_DELPHI_NEXTGEN)
    operator AnsiString()      const;
#endif
    operator Currency()        const;
    operator TDateTime()       const;
#if !defined(_DELPHI_NEXTGEN)
    operator WideString()      const;
#endif
    operator UnicodeString()   const;

#if defined(VARIANT_NATIVE_SUPPORT)
    operator CURRENCY()        const;
    operator DECIMAL()         const;
    operator VARIANT();
#endif
#ifdef VARIANT_TVARIANT_SUPPORT
    operator TVariant();
#endif

#if defined(WIDECHAR_IS_WCHAR)
    operator wchar_t*()        const;
#endif

    __EXPLICIT operator IDispatch*();
    __EXPLICIT operator IUnknown*();
    __EXPLICIT operator IInterface*();

    // by ref conversion operators
    /*operator char*();*/  // Dangerous - easily used as string instead of VT_I1|VT_BYREF
    __EXPLICIT operator signed char*();
    __EXPLICIT operator unsigned char*();


    __EXPLICIT operator short*();
    __EXPLICIT operator unsigned short*();

    __EXPLICIT operator int*();
    __EXPLICIT operator unsigned int*();

    __EXPLICIT operator long*();
    __EXPLICIT operator unsigned long*();

    __EXPLICIT operator float*();
    __EXPLICIT operator double*();

    __EXPLICIT operator __int64*();
    __EXPLICIT operator unsigned __int64*();

    /*operator CURRENCY*()       const;*/
    /*operator SAFEARRAY**()     const;*/
#if defined(VARIANT_NATIVE_SUPPORT)
    __EXPLICIT operator VARIANT*();
    __EXPLICIT operator LPSAFEARRAY();
#endif
#if defined(VARIANT_TVARIANT_SUPPORT)
    __EXPLICIT operator TVariant*();
#endif

    __EXPLICIT operator Currency*();
    __EXPLICIT operator TDateTime*();
#if defined(WIDECHAR_IS_WCHAR)
    __EXPLICIT operator wchar_t**();
#endif

    // HRESULT methods
    //
    void    SetError(const HResult err);
    HResult GetError() const;

    // Manipulate/Set vt_xxx Type
    //
    void      Clear();
    Variant&  ChangeType(int VarType);
    Variant   AsType(int VarType) const;
    Variant   Sanitized() const;

    // Query vt_xxx Type
    //
    int   Type()     const;
    bool  IsNull()   const;
    bool  IsEmpty()  const;

    // Get Base Variant (when vt==VT_VARIANT)
    //
    Variant* GetBaseVariant();

    // Array support
    //
    bool    IsArray() const;
    Variant GetElement(const int i1) const;
    Variant GetElement(const int i1, const int i2) const;
    Variant GetElement(const int i1, const int i2, const int i3) const;
    Variant GetElement(const int i1, const int i2, const int i3, const int i4) const;
    Variant GetElement(const int i1, const int i2, const int i3, const int i4, const int i5) const;
    void    PutElement(const Variant& data, const int i1);
    void    PutElement(const Variant& data, const int i1, const int i2);
    void    PutElement(const Variant& data, const int i1, const int i2,const int i3);
    void    PutElement(const Variant& data, const int i1, const int i2,const int i3, const int i4);
    void    PutElement(const Variant& data, const int i1, const int i2,const int i3, const int i4, const int i5);

    int     ArrayDimCount() const;
    int     ArrayLowBound(const int dim = 1) const;
    int     ArrayHighBound(const int dim = 1) const;
    void    ArrayRedim(int highBound);
    Pointer ArrayLock();
    void    ArrayUnlock();

#if defined(VARIANT_AUTOMATION_SUPPORT)
    // Automation Goodies
    //
    Variant Exec(AutoCmd& cmd, Integer lcid = LOCALE_SYSTEM_DEFAULT) const;

    // Helper routines used by template member functions
    //
    void    OleProcedure  (const String& name, TAutoArgsBase* args = 0);
    Variant OleFunction   (const String& name, TAutoArgsBase* args = 0);
    Variant OlePropertyGet(const String& name, TAutoArgsBase* args = 0);
    void    OlePropertySet(const String& name, TAutoArgsBase* args);


    template <class P1>
    void OleProcedure(const String& name, P1 p1);

    template <class P1, class P2>
    void OleProcedure(const String& name, P1 p1, P2 p2);

    template <class P1, class P2, class P3>
    void OleProcedure(const String& name, P1 p1, P2 p2, P3 p3);

    template <class P1, class P2, class P3, class P4>
    void OleProcedure(const String& name, P1 p1, P2 p2, P3 p3, P4 p4);

    template <class P1, class P2, class P3, class P4, class P5>
    void OleProcedure(const String& name, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23, class P24>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23, P24 p24);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23, class P24, class P25>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23, P24 p24, P25 p25);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23, class P24, class P25,
              class P26>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
      P26 p26);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23, class P24, class P25,
              class P26, class P27>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
      P26 p26, P27 p27);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23, class P24, class P25,
              class P26, class P27, class P28>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
      P26 p26, P27 p27, P28 p28);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23, class P24, class P25,
              class P26, class P27, class P28, class P29>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
      P26 p26, P27 p27, P28 p28, P29 p29);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23, class P24, class P25,
              class P26, class P27, class P28, class P29, class P30>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
      P26 p26, P27 p27, P28 p28, P29 p29, P30 p30);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23, class P24, class P25,
              class P26, class P27, class P28, class P29, class P30,
              class P31>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
      P26 p26, P27 p27, P28 p28, P29 p29, P30 p30,
      P31 p31);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23, class P24, class P25,
              class P26, class P27, class P28, class P29, class P30,
              class P31, class P32>
    void OleProcedure(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
      P26 p26, P27 p27, P28 p28, P29 p29, P30 p30,
      P31 p31, P32 p32);

    template <class P1>
    Variant OleFunction(const String& name, P1 p1);

    template <class P1, class P2>
    Variant OleFunction(const String& name, P1 p1, P2 p2);

    template <class P1, class P2, class P3>
    Variant OleFunction(const String& name, P1 p1, P2 p2, P3 p3);

    template <class P1, class P2, class P3, class P4>
    Variant OleFunction(const String& name, P1 p1, P2 p2, P3 p3, P4 p4);

    template <class P1, class P2, class P3, class P4, class P5>
    Variant OleFunction(const String& name, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23, class P24>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23, P24 p24);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23, class P24, class P25>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23, P24 p24, P25 p25);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23, class P24, class P25,
              class P26>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
      P26 p26);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23, class P24, class P25,
              class P26, class P27>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
      P26 p26, P27 p27);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23, class P24, class P25,
              class P26, class P27, class P28>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
      P26 p26, P27 p27, P28 p28);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23, class P24, class P25,
              class P26, class P27, class P28, class P29>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
      P26 p26, P27 p27, P28 p28, P29 p29);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23, class P24, class P25,
              class P26, class P27, class P28, class P29, class P30>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
      P26 p26, P27 p27, P28 p28, P29 p29, P30 p30);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23, class P24, class P25,
              class P26, class P27, class P28, class P29, class P30,
              class P31>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
      P26 p26, P27 p27, P28 p28, P29 p29, P30 p30,
      P31 p31);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10,
              class P11, class P12, class P13, class P14, class P15,
              class P16, class P17, class P18, class P19, class P20,
              class P21, class P22, class P23, class P24, class P25,
              class P26, class P27, class P28, class P29, class P30,
              class P31, class P32>
    Variant OleFunction(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
      P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
      P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
      P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
      P26 p26, P27 p27, P28 p28, P29 p29, P30 p30,
      P31 p31, P32 p32);

    template <class P1>
    Variant OlePropertyGet(const String& name, P1 p1);

    template <class P1, class P2>
    Variant OlePropertyGet(const String& name, P1 p1, P2 p2);

    template <class P1, class P2, class P3>
    Variant OlePropertyGet(const String& name, P1 p1, P2 p2, P3 p3);

    template <class P1, class P2, class P3, class P4>
    Variant OlePropertyGet(const String& name, P1 p1, P2 p2, P3 p3, P4 p4);

    template <class P1, class P2, class P3, class P4, class P5>
    Variant OlePropertyGet(const String& name, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6>
    Variant OlePropertyGet(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7>
    Variant OlePropertyGet(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8>
    Variant OlePropertyGet(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9>
    Variant OlePropertyGet(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10>
    Variant OlePropertyGet(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10);

    template <class P1>
    void OlePropertySet(const String& name, P1 p1);

    template <class P1, class P2>
    void OlePropertySet(const String& name, P1 p1, P2 p2);

    template <class P1, class P2, class P3>
    void OlePropertySet(const String& name, P1 p1, P2 p2, P3 p3);

    template <class P1, class P2, class P3, class P4>
    void OlePropertySet(const String& name, P1 p1, P2 p2, P3 p3, P4 p4);

    template <class P1, class P2, class P3, class P4, class P5>
    void OlePropertySet(const String& name, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6>
    void OlePropertySet(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7>
    void OlePropertySet(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8>
    void OlePropertySet(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9>
    void OlePropertySet(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9);

    template <class P1, class P2, class P3, class P4, class P5,
              class P6, class P7, class P8, class P9, class P10>
    void OlePropertySet(const String& name,
      P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
      P6 p6, P7 p7, P8 p8, P9 p9, P10 p10);

#endif // VARIANT_AUTOMATION_SUPPORT

    // Ref. to Variant which can be used for non-specified optional parameters or 'Empty' parameters
    static Variant& NoParam();
    static Variant& Empty();

  private:
    void SetType(uint16_t vt, bool);
    void SetRefType(uint16_t vt, void *, bool);
    void CastError(uint16_t vt);

    // NOTE: AutoCmd::GetParm & GetNamedParm uses operator [] (AutoCmd is a friend)
    // operator[] can only be used for arrays of type Variant
    Variant& operator [](const int idx);
  }
  #if defined(_PLAT_IOS32) // Delphi aligns Variant to '8' on iOS32
  __attribute__((aligned (8)))
  #endif
  ;

/*
#if defined(VARIANT_AUTOMATION_SUPPORT)
  } // namespace System

  // The following are Automation related structures required by either Variant
  // or some other VCL Header. We forward ref. the tagStruct and #define the
  // typedef name to the tagStruct.
  // By default we'll use System::Variant for disp wrappers. If
  // '_TLB_USE_TVARIANT_FOR_DISP' is defined, we'll default to TVariant
  //
  #if defined(_TLB_USE_TVARIANT_FOR_DISP)
    #include <utilcls.h>
  #endif
  #include <autoargs.h>
  namespace System {
#endif
*/

#if defined(VCL_IOSTREAM)
  //} // namespace System

  std::ostream& operator << (std::ostream& os, const Variant& arg);
  std::istream& operator >> (std::istream& is, Variant& arg);

  //namespace System {
#endif

  class RTL_DELPHIRETURN OleVariant: protected Variant
  {
#if defined(__clang__)
    // This allows OleVariant to implicit cast to Variant in Automation helpers
    friend class Variant;
#endif
  public:
    OleVariant()                     : Variant()     {}
    OleVariant(const OleVariant& src): Variant(src)  {}
    OleVariant(const Variant& src)   : Variant()     {
      // To handle Variants that contain non-standard AnsiStrings
      //
      *this = src;
    }

    //By value constructors
    OleVariant(const char src)           : Variant(src)  {}
    OleVariant(const unsigned char src)  : Variant(src)  {}
    OleVariant(const short src)          : Variant(src)  {}
    OleVariant(const unsigned short src) : Variant(src)  {}
    OleVariant(const int src)            : Variant(src)  {}
    OleVariant(const unsigned int src)   : Variant(src)  {}
    OleVariant(const float src)          : Variant(src)  {}
    OleVariant(const double src)         : Variant(src)  {}
    OleVariant(const __int64 src)        : Variant(src)  {}
    OleVariant(const unsigned __int64 src): Variant(src){}
    OleVariant(const Currency src)       : Variant(src)  {}
    OleVariant(const TDateTime src)      : Variant(src)  {}
#if !defined(_DELPHI_NEXTGEN)
    OleVariant(const WideString& src)    : Variant(src)  {}
    OleVariant(const UnicodeString& src) : Variant(WideString(src)) {}
#else
    OleVariant(const UnicodeString& src) : Variant(src) {}
#endif
    OleVariant(const bool src)           : Variant(src)  {}
#if defined(WIDESTRING_IS_BSTR)
    OleVariant(const AnsiString& src)    : Variant(WideString(src).Detach()) {}
#else
    OleVariant(const AnsiString& src)    : Variant(src)  {}
#endif
#if defined(VARIANT_NATIVE_SUPPORT)
    OleVariant(const CURRENCY& src)      : Variant(src) {}
    OleVariant(const VARIANT& src)       : Variant(src) {}
#endif

    // By ref constructors
#if defined(VARIANT_NATIVE_SUPPORT)
    OleVariant(wchar_t* const src, bool isBSTR = true) : Variant(src, isBSTR)  {}
#endif
    OleVariant(IDispatch* const src) : Variant(src)  {}
    OleVariant(IUnknown* const src)  : Variant(src)  {}
#ifdef _Windows
    OleVariant(VARIANT* src)         : Variant(src)  {}
    OleVariant(CURRENCY* src)        : Variant(src)  {}
#endif
#ifdef VARIANT_TVARIANT_SUPPORT
    OleVariant(const TVariant& src)  : Variant(src)  {}
#endif

#if !defined(_DELPHI_NEXTGEN)
    OleVariant(const char* src)      : Variant(WideString(src)) {}
#else
    OleVariant(const char* src)      : Variant(UnicodeString(src)) {}
#endif
    OleVariant(signed char* src)     : Variant(src)  {}
    OleVariant(unsigned char* src)   : Variant(src)  {}

    OleVariant(short* src)           : Variant(src)  {}
    OleVariant(unsigned short* src)  : Variant(src)  {}

    OleVariant(int* src)             : Variant(src)  {}
    OleVariant(unsigned int* src)    : Variant(src)  {}

    OleVariant(long* src)            : Variant(src)  {}
    OleVariant(unsigned long* src)   : Variant(src)  {}

    OleVariant(float* src)           : Variant(src)  {}
    OleVariant(double* src)          : Variant(src)  {}
    OleVariant(__int64* src)         : Variant(src)  {}
    OleVariant(unsigned __int64* src): Variant(src)  {}

    OleVariant(Currency* src)        : Variant(src)  {}
    OleVariant(TDateTime* src)       : Variant(src)  {}
#if defined(WIDECHAR_IS_WCHAR)
    OleVariant(wchar_t** src)        : Variant(src)  {}
#endif

    // constructor for array of variants of type varType
    OleVariant(const int* bounds, const int boundsSize, Word varType) : Variant(bounds, boundsSize, varType) {}

    // constructor for one dimensional array of type OleVariant
    OleVariant(const OleVariant* values, const int valuesSize) : Variant(values, valuesSize) {}

    ~OleVariant() {}


    // Assignment operators
    //
    OleVariant& operator =(const OleVariant& rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }
    OleVariant& operator =(const Variant& rhs)
    {
      PVariant(this)->operator=(rhs.Sanitized());
      return *this;
    }
#if defined(VARIANT_NATIVE_SUPPORT)
    OleVariant& operator =(VARIANT& rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }
#endif

    OleVariant& operator =(const AnsiString& rhs)
    {
#if defined(WIDESTRING_IS_BSTR)
      PVariant(this)->operator=(WideString(rhs).Detach());
#else
      PVariant(this)->operator=(rhs);
#endif
      return *this;
    }

    OleVariant& operator =(const char* rhs)
    {
#if defined(WIDESTRING_IS_BSTR)
      PVariant(this)->operator=(WideString(rhs).Detach());
#else
      PVariant(this)->operator=(rhs);
#endif
      return *this;
    }

#if !defined(_DELPHI_NEXTGEN)
    OleVariant& operator=(const WideString& rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }
#endif

    OleVariant& operator=(const UnicodeString& rhs)
    {
#if !defined(_DELPHI_NEXTGEN)
      PVariant(this)->operator=(WideString(rhs));
#else
      PVariant(this)->operator=(rhs);
#endif
      return *this;
    }

    OleVariant& operator =(const bool rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(const char rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(const signed char rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(const unsigned char rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(const short rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(const unsigned short rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(const int rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(const unsigned int rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(const long rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(const unsigned long rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(const float rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(const double rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(const __int64 rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(const unsigned __int64 rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

#if defined(VARIANT_NATIVE_SUPPORT)
    OleVariant& operator =(const CURRENCY& rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }
#endif

    OleVariant& operator =(const TDateTime& rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(const Currency& rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(double* rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(__int64* rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(unsigned __int64* rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(TDateTime* rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(Currency* rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator =(IDispatch* rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

    OleVariant& operator=(IUnknown* rhs)
    {
      PVariant(this)->operator=(rhs);
      return *this;
    }

#if defined(VARIANT_NATIVE_SUPPORT)
    OleVariant& operator =(CURRENCY* src)
    {
      PVariant(this)->operator=(src);
      return *this;
    }

    OleVariant& operator =(SAFEARRAY** src)
    {
      PVariant(this)->operator=(src);
      return *this;
    }

    OleVariant& operator =(VARIANT* src)
    {
      PVariant(this)->operator=(src);
      return *this;
    }
#endif


  public:
    __USING TVarData::VType;
    __USING TVarData::Reserved1;
    __USING TVarData::Reserved2;
    __USING TVarData::Reserved3;
    __USING TVarData::VSmallint;
    __USING TVarData::VInteger;
    __USING TVarData::VSingle;
    __USING TVarData::VDouble;
    __USING TVarData::VCurrency;
    __USING TVarData::VDate;
    __USING TVarData::VOleStr;
    __USING TVarData::VDispatch;
    __USING TVarData::VError;
    __USING TVarData::VBoolean;
    __USING TVarData::VUnknown;
    __USING TVarData::VByte;

    /*  (Hide this - OleVariant cannot hold MBCS string)
    TVarData::VString;
    */
    __USING TVarData::VArray;
    __USING TVarData::VPointer;

#if defined(VARIANT_NATIVE_SUPPORT)
    __USING TVarData::lVal;
    __USING TVarData::bVal;
    __USING TVarData::iVal;
    __USING TVarData::fltVal;
    __USING TVarData::dblVal;
    __USING TVarData::boolVal;
    __USING TVarData::scode;
    __USING TVarData::cyVal;
    __USING TVarData::date;
    __USING TVarData::bstrVal;
    __USING TVarData::llVal;
    __USING TVarData::punkVal;
    __USING TVarData::pdispVal;
    __USING TVarData::parray;
    __USING TVarData::pbVal;
    __USING TVarData::piVal;
    __USING TVarData::plVal;
    __USING TVarData::pfltVal;
    __USING TVarData::pdblVal;
    __USING TVarData::pboolVal;
    __USING TVarData::pscode;
    __USING TVarData::pcyVal;
    __USING TVarData::pdate;
    __USING TVarData::pbstrVal;
    __USING TVarData::ppunkVal;
    __USING TVarData::ppdispVal;
    __USING TVarData::pparray;
    __USING TVarData::pvarVal;
    __USING TVarData::byref;
    __USING TVarData::cVal;
    __USING TVarData::uiVal;
    __USING TVarData::ulVal;
    __USING TVarData::intVal;
    __USING TVarData::uintVal;
    __USING TVarData::pdecVal;
    __USING TVarData::pcVal;
    __USING TVarData::puiVal;
    __USING TVarData::pulVal;
    __USING TVarData::pintVal;
    __USING TVarData::puintVal;
    __USING TVarData::pllVal;
#endif

    __USING Variant::operator += ;
    __USING Variant::operator -= ;
    __USING Variant::operator *= ;
    __USING Variant::operator /= ;
    __USING Variant::operator %= ;
    __USING Variant::operator &= ;
    __USING Variant::operator |= ;
    __USING Variant::operator ^= ;
    __USING Variant::operator <<=;
    __USING Variant::operator >>=;

    // Comparisons
    bool operator ==(const OleVariant& rhs) const {
      return PVariant(this)->operator==(*(PVariant(&rhs)));
    }
    bool operator !=(const OleVariant& rhs) const {
      return ! this->operator==(rhs);
    }
    bool operator >(const OleVariant& rhs) const {
      return PVariant(this)->operator>(*(PVariant(&rhs)));
    }
    bool operator <(const OleVariant& rhs) const {
      return PVariant(this)->operator<(*(PVariant(&rhs)));
    }
    bool operator >=(const OleVariant& rhs) const {
      return PVariant(this)->operator>=(*(PVariant(&rhs)));
    }
    bool operator <=(const OleVariant& rhs) const {
      return PVariant(this)->operator<=(*(PVariant(&rhs)));
    }

    // unary operators
    __USING Variant::operator -;
    __USING Variant::operator !;

    // conversion operators
    __USING Variant::operator char;
    __USING Variant::operator signed char;
    __USING Variant::operator unsigned char;
    __USING Variant::operator short;
    __USING Variant::operator unsigned short;
    __USING Variant::operator int;
    __USING Variant::operator unsigned int;
    __USING Variant::operator long;
    __USING Variant::operator unsigned long;
    __USING Variant::operator float;
    __USING Variant::operator double;
    __USING Variant::operator __int64;
    __USING Variant::operator unsigned __int64;
    __USING Variant::operator Currency;
    __USING Variant::operator TDateTime;
    __USING Variant::operator bool;
#if !defined(_DELPHI_NEXTGEN)
    __USING Variant::operator AnsiString;
    __USING Variant::operator WideString;
#endif
    __USING Variant::operator UnicodeString;
    __USING Variant::operator IDispatch*;
    __USING Variant::operator IUnknown*;
    __USING Variant::operator IInterface*;
#ifdef _Windows
    __USING Variant::operator VARIANT;
    __USING Variant::operator CURRENCY;
    __USING Variant::operator DECIMAL;
#endif
#ifdef VARIANT_TVARIANT_SUPPORT
    __USING Variant::operator TVariant;
#endif

    // by ref conversion operators
    __USING Variant::operator signed char*;
    __USING Variant::operator short*;
    __USING Variant::operator int*;
    __USING Variant::operator unsigned int*;
    __USING Variant::operator long*;
    __USING Variant::operator float*;
    __USING Variant::operator double*;
    __USING Variant::operator __int64*;
    __USING Variant::operator unsigned __int64*;
    __USING Variant::operator Currency*;
    __USING Variant::operator TDateTime*;
    __USING Variant::operator unsigned short*;
    __USING Variant::operator Byte*;
#if defined(WIDECHAR_IS_WCHAR)
    __USING Variant::operator wchar_t**;
    __USING Variant::operator wchar_t*;
#endif
#ifdef _Windows
    __USING Variant::operator VARIANT*;
    __USING Variant::operator LPSAFEARRAY;
#endif
#ifdef VARIANT_TVARIANT_SUPPORT
    __USING Variant::operator TVariant*;
#endif

    // HRESULT methods
    __USING Variant::SetError;
    __USING Variant::GetError;

    __USING Variant::Clear;
    __USING Variant::ChangeType;
    __USING Variant::AsType;

    __USING Variant::Type;
    __USING Variant::IsNull;
    __USING Variant::IsEmpty;

    // variant array stuff
    __USING Variant::IsArray;
    __USING Variant::GetElement;
    __USING Variant::PutElement;
    __USING Variant::ArrayDimCount;
    __USING Variant::ArrayLowBound;
    __USING Variant::ArrayHighBound;
    __USING Variant::ArrayRedim;
    __USING Variant::ArrayLock;
    __USING Variant::ArrayUnlock;

#if defined(VARIANT_AUTOMATION_SUPPORT)
    // Automation Goodies
    __USING Variant::Exec;

    // Alternate Syntax for Automation
    __USING Variant::OleProcedure;
    __USING Variant::OleFunction;
    __USING Variant::OlePropertyGet;
    __USING Variant::OlePropertySet;
#endif

    // Comparison (const char* on rhs)
#if !defined(_DELPHI_NEXTGEN)
    bool operator ==(const char* rhs) const {
      return operator==(WideString(rhs));
    }
    bool operator !=(const char* rhs) const {
      return operator !=(WideString(rhs));
    }
    bool operator < (const char* rhs) const {
      return operator <(WideString(rhs));
    }
    bool operator > (const char* rhs) const {
      return operator > (WideString(rhs));
    }
    bool operator <=(const char* rhs) const {
      return operator <= (WideString(rhs));
    }
    bool operator >=(const char* rhs) const {
      return operator >= (WideString(rhs));
    }
#endif

  private:
    // binary operators (AnsiString on right)
    OleVariant operator * (const AnsiString& rhs) const;
    OleVariant operator / (const AnsiString& rhs) const;
    OleVariant operator % (const AnsiString& rhs) const;
    OleVariant operator & (const AnsiString& rhs) const;
    OleVariant operator | (const AnsiString& rhs) const;
    OleVariant operator ^ (const AnsiString& rhs) const;
    OleVariant operator <<(const AnsiString& rhs) const;
    OleVariant operator >>(const AnsiString& rhs) const;
  };
  #define __OLEVARIANT_DEFINED
} // namespace System

#if defined(VARIANT_AUTOMATION_SUPPORT)
  #include <autoargs.h>
#endif

namespace System {
#if defined(VARIANT_AUTOMATION_SUPPORT)
  
  template <class P1>
  void Variant::OleProcedure(const String& name, P1 p1)
  {
    TAutoArgs<1> args;
    args[1] = p1;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2>
  void Variant::OleProcedure(const String& name, P1 p1, P2 p2)
  {
    TAutoArgs<2> args;
    args[1] = p1;  args[2] = p2;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3>
  void Variant::OleProcedure(const String& name, P1 p1, P2 p2, P3 p3)
  {
    TAutoArgs<3> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4>
  void Variant::OleProcedure(const String& name, P1 p1, P2 p2, P3 p3, P4 p4)
  {
    TAutoArgs<4> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5>
  void Variant::OleProcedure(const String& name, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
  {
    TAutoArgs<5> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6)
  {
    TAutoArgs<6> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7)
  {
    TAutoArgs<7> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8)
  {
    TAutoArgs<8> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9)
  {
    TAutoArgs<9> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10)
  {
    TAutoArgs<10> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11)
  {
    TAutoArgs<11> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12)
  {
    TAutoArgs<12> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13)
  {
    TAutoArgs<13> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14)
  {
    TAutoArgs<14> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15)
  {
    TAutoArgs<15> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16)
  {
    TAutoArgs<16> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17)
  {
    TAutoArgs<17> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18)
  {
    TAutoArgs<18> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19)
  {
    TAutoArgs<19> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20)
  {
    TAutoArgs<20> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21)
  {
    TAutoArgs<21> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22)
  {
    TAutoArgs<22> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23)
  {
    TAutoArgs<23> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23, class P24>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23, P24 p24)
  {
    TAutoArgs<24> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;  args[24] = p24;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23, class P24, class P25>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23, P24 p24, P25 p25)
  {
    TAutoArgs<25> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;  args[24] = p24;
    args[25] = p25;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23, class P24, class P25,
            class P26>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
    P26 p26)
  {
    TAutoArgs<26> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;  args[24] = p24;
    args[25] = p25;  args[26] = p26;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23, class P24, class P25,
            class P26, class P27>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
    P26 p26, P27 p27)
  {
    TAutoArgs<27> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;  args[24] = p24;
    args[25] = p25;  args[26] = p26;  args[27] = p27;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23, class P24, class P25,
            class P26, class P27, class P28>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
    P26 p26, P27 p27, P28 p28)
  {
    TAutoArgs<28> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;  args[24] = p24;
    args[25] = p25;  args[26] = p26;  args[27] = p27;
    args[28] = p28;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23, class P24, class P25,
            class P26, class P27, class P28, class P29>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
    P26 p26, P27 p27, P28 p28, P29 p29)
  {
    TAutoArgs<29> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;  args[24] = p24;
    args[25] = p25;  args[26] = p26;  args[27] = p27;
    args[28] = p28;  args[29] = p29;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23, class P24, class P25,
            class P26, class P27, class P28, class P29, class P30>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
    P26 p26, P27 p27, P28 p28, P29 p29, P30 p30)
  {
    TAutoArgs<30> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;  args[24] = p24;
    args[25] = p25;  args[26] = p26;  args[27] = p27;
    args[28] = p28;  args[29] = p29;  args[30] = p30;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23, class P24, class P25,
            class P26, class P27, class P28, class P29, class P30,
            class P31>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
    P26 p26, P27 p27, P28 p28, P29 p29, P30 p30,
    P31 p31)
  {
    TAutoArgs<31> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;  args[24] = p24;
    args[25] = p25;  args[26] = p26;  args[27] = p27;
    args[28] = p28;  args[29] = p29;  args[30] = p30;
    args[31] = p31;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23, class P24, class P25,
            class P26, class P27, class P28, class P29, class P30,
            class P31, class P32>
  void Variant::OleProcedure(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
    P26 p26, P27 p27, P28 p28, P29 p29, P30 p30,
    P31 p31, P32 p32)
  {
    TAutoArgs<32> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;  args[24] = p24;
    args[25] = p25;  args[26] = p26;  args[27] = p27;
    args[28] = p28;  args[29] = p29;  args[30] = p30;
    args[31] = p31;  args[32] = p32;
    OleProcedure(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1>
  Variant Variant::OleFunction(const String& name, P1 p1)
  {
    TAutoArgs<1> args;
    args[1] = p1;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2>
  Variant Variant::OleFunction(const String& name, P1 p1, P2 p2)
  {
    TAutoArgs<2> args;
    args[1] = p1;  args[2] = p2;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3>
  Variant Variant::OleFunction(const String& name, P1 p1, P2 p2, P3 p3)
  {
    TAutoArgs<3> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4>
  Variant Variant::OleFunction(const String& name, P1 p1, P2 p2, P3 p3, P4 p4)
  {
    TAutoArgs<4> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5>
  Variant Variant::OleFunction(const String& name, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
  {
    TAutoArgs<5> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6)
  {
    TAutoArgs<6> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7)
  {
    TAutoArgs<7> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8)
  {
    TAutoArgs<8> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9)
  {
    TAutoArgs<9> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10)
  {
    TAutoArgs<10> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11)
  {
    TAutoArgs<11> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12)
  {
    TAutoArgs<12> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13)
  {
    TAutoArgs<13> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14)
  {
    TAutoArgs<14> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15)
  {
    TAutoArgs<15> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16)
  {
    TAutoArgs<16> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17)
  {
    TAutoArgs<17> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18)
  {
    TAutoArgs<18> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19)
  {
    TAutoArgs<19> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20)
  {
    TAutoArgs<20> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21)
  {
    TAutoArgs<21> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22)
  {
    TAutoArgs<22> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23)
  {
    TAutoArgs<23> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23, class P24>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23, P24 p24)
  {
    TAutoArgs<24> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;  args[24] = p24;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23, class P24, class P25>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23, P24 p24, P25 p25)
  {
    TAutoArgs<25> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;  args[24] = p24;
    args[25] = p25;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23, class P24, class P25,
            class P26>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
    P26 p26)
  {
    TAutoArgs<26> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;  args[24] = p24;
    args[25] = p25;  args[26] = p26;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23, class P24, class P25,
            class P26, class P27>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
    P26 p26, P27 p27)
  {
    TAutoArgs<27> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;  args[24] = p24;
    args[25] = p25;  args[26] = p26;  args[27] = p27;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23, class P24, class P25,
            class P26, class P27, class P28>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
    P26 p26, P27 p27, P28 p28)
  {
    TAutoArgs<28> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;  args[24] = p24;
    args[25] = p25;  args[26] = p26;  args[27] = p27;
    args[28] = p28;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23, class P24, class P25,
            class P26, class P27, class P28, class P29>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
    P26 p26, P27 p27, P28 p28, P29 p29)
  {
    TAutoArgs<29> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;  args[24] = p24;
    args[25] = p25;  args[26] = p26;  args[27] = p27;
    args[28] = p28;  args[29] = p29;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23, class P24, class P25,
            class P26, class P27, class P28, class P29, class P30>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
    P26 p26, P27 p27, P28 p28, P29 p29, P30 p30)
  {
    TAutoArgs<30> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;  args[24] = p24;
    args[25] = p25;  args[26] = p26;  args[27] = p27;
    args[28] = p28;  args[29] = p29;  args[30] = p30;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23, class P24, class P25,
            class P26, class P27, class P28, class P29, class P30,
            class P31>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
    P26 p26, P27 p27, P28 p28, P29 p29, P30 p30,
    P31 p31)
  {
    TAutoArgs<31> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;  args[24] = p24;
    args[25] = p25;  args[26] = p26;  args[27] = p27;
    args[28] = p28;  args[29] = p29;  args[30] = p30;
    args[31] = p31;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10,
            class P11, class P12, class P13, class P14, class P15,
            class P16, class P17, class P18, class P19, class P20,
            class P21, class P22, class P23, class P24, class P25,
            class P26, class P27, class P28, class P29, class P30,
            class P31, class P32>
  Variant Variant::OleFunction(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10,
    P11 p11, P12 p12, P13 p13, P14 p14, P15 p15,
    P16 p16, P17 p17, P18 p18, P19 p19, P20 p20,
    P21 p21, P22 p22, P23 p23, P24 p24, P25 p25,
    P26 p26, P27 p27, P28 p28, P29 p29, P30 p30,
    P31 p31, P32 p32)
  {
    TAutoArgs<32> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;  args[11] = p11;  args[12] = p12;
    args[13] = p13;  args[14] = p14;  args[15] = p15;
    args[16] = p16;  args[17] = p17;  args[18] = p18;
    args[19] = p19;  args[20] = p20;  args[21] = p21;
    args[22] = p22;  args[23] = p23;  args[24] = p24;
    args[25] = p25;  args[26] = p26;  args[27] = p27;
    args[28] = p28;  args[29] = p29;  args[30] = p30;
    args[31] = p31;  args[32] = p32;
    return OleFunction(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1>
  Variant Variant::OlePropertyGet(const String& name, P1 p1)
  {
    TAutoArgs<1> args;
    args[1] = p1;
    return OlePropertyGet(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2>
  Variant Variant::OlePropertyGet(const String& name, P1 p1, P2 p2)
  {
    TAutoArgs<2> args;
    args[1] = p1;  args[2] = p2;
    return OlePropertyGet(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3>
  Variant Variant::OlePropertyGet(const String& name, P1 p1, P2 p2, P3 p3)
  {
    TAutoArgs<3> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    return OlePropertyGet(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4>
  Variant Variant::OlePropertyGet(const String& name, P1 p1, P2 p2, P3 p3, P4 p4)
  {
    TAutoArgs<4> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;
    return OlePropertyGet(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5>
  Variant Variant::OlePropertyGet(const String& name, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
  {
    TAutoArgs<5> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;
    return OlePropertyGet(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6>
  Variant Variant::OlePropertyGet(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6)
  {
    TAutoArgs<6> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    return OlePropertyGet(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7>
  Variant Variant::OlePropertyGet(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7)
  {
    TAutoArgs<7> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;
    return OlePropertyGet(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8>
  Variant Variant::OlePropertyGet(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8)
  {
    TAutoArgs<8> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;
    return OlePropertyGet(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9>
  Variant Variant::OlePropertyGet(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9)
  {
    TAutoArgs<9> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    return OlePropertyGet(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10>
  Variant Variant::OlePropertyGet(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10)
  {
    TAutoArgs<10> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;
    return OlePropertyGet(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1>
  void Variant::OlePropertySet(const String& name, P1 p1)
  {
    TAutoArgs<1> args;
    args[1] = p1;
    OlePropertySet(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2>
  void Variant::OlePropertySet(const String& name, P1 p1, P2 p2)
  {
    TAutoArgs<2> args;
    args[1] = p1;  args[2] = p2;
    OlePropertySet(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3>
  void Variant::OlePropertySet(const String& name, P1 p1, P2 p2, P3 p3)
  {
    TAutoArgs<3> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    OlePropertySet(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4>
  void Variant::OlePropertySet(const String& name, P1 p1, P2 p2, P3 p3, P4 p4)
  {
    TAutoArgs<4> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;
    OlePropertySet(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5>
  void Variant::OlePropertySet(const String& name, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
  {
    TAutoArgs<5> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;
    OlePropertySet(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6>
  void Variant::OlePropertySet(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6)
  {
    TAutoArgs<6> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    OlePropertySet(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7>
  void Variant::OlePropertySet(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7)
  {
    TAutoArgs<7> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;
    OlePropertySet(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8>
  void Variant::OlePropertySet(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8)
  {
    TAutoArgs<8> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;
    OlePropertySet(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9>
  void Variant::OlePropertySet(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9)
  {
    TAutoArgs<9> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    OlePropertySet(name, static_cast<TAutoArgsBase*>(&args));
  }

  template <class P1, class P2, class P3, class P4, class P5,
            class P6, class P7, class P8, class P9, class P10>
  void Variant::OlePropertySet(const String& name,
    P1 p1, P2 p2, P3 p3, P4 p4, P5 p5,
    P6 p6, P7 p7, P8 p8, P9 p9, P10 p10)
  {
    TAutoArgs<10> args;
    args[1] = p1;  args[2] = p2;  args[3] = p3;
    args[4] = p4;  args[5] = p5;  args[6] = p6;
    args[7] = p7;  args[8] = p8;  args[9] = p9;
    args[10] = p10;
    OlePropertySet(name, static_cast<TAutoArgsBase*>(&args));
  }
#endif // VARIANT_AUTOMATION_SUPPORT




// Variant global scope comparisons (int on left)
  inline bool operator ==(int lhs, const Variant& rhs)
  {return Variant(lhs).operator ==(rhs);}
  inline bool operator !=(int lhs, const Variant& rhs)
  {return Variant(lhs).operator !=(rhs);}
  inline bool operator < (int lhs, const Variant& rhs)
  {return Variant(lhs).operator < (rhs);}
  inline bool operator > (int lhs, const Variant& rhs)
  {return Variant(lhs).operator > (rhs);}
  inline bool operator <=(int lhs, const Variant& rhs)
  {return Variant(lhs).operator <=(rhs);}
  inline bool operator >=(int lhs, const Variant& rhs)
  {return Variant(lhs).operator >=(rhs);}

// Variant global scope comparisons (double on left)
  inline bool operator ==(double lhs, const Variant& rhs)
  {return Variant(lhs).operator ==(rhs);}
  inline bool operator !=(double lhs, const Variant& rhs)
  {return Variant(lhs).operator !=(rhs);}
  inline bool operator < (double lhs, const Variant& rhs)
  {return Variant(lhs).operator < (rhs);}
  inline bool operator > (double lhs, const Variant& rhs)
  {return Variant(lhs).operator > (rhs);}
  inline bool operator <=(double lhs, const Variant& rhs)
  {return Variant(lhs).operator <=(rhs);}
  inline bool operator >=(double lhs, const Variant& rhs)
  {return Variant(lhs).operator >=(rhs);}

// Variant global scope comparisons (TDateTime on left)
// NOTE: Several operators were added to allow common constructs to compile
//       with the stricter compiler. Unfortunately, these very same operators
//       also introduce ambiguities in other constructs. So, the tightening
//       of the compiler will invariably break some code and these operators
//       attempt to lessen the breakages but introduce some of their own :(
#if !defined(NO_VARIANT_TDATETIME_COMP_OP)
#define VARIANT_TDATETIME_COMP_OP
#endif
#if defined(VARIANT_TDATETIME_COMP_OP)
  inline bool operator ==(const TDateTime& lhs, const Variant& rhs)
  {return Variant(lhs).operator ==(rhs);}
  inline bool operator !=(const TDateTime& lhs, const Variant& rhs)
  {return Variant(lhs).operator !=(rhs);}
  inline bool operator < (const TDateTime& lhs, const Variant& rhs)
  {return Variant(lhs).operator < (rhs);}
  inline bool operator > (const TDateTime& lhs, const Variant& rhs)
  {return Variant(lhs).operator > (rhs);}
  inline bool operator <=(const TDateTime& lhs, const Variant& rhs)
  {return Variant(lhs).operator <=(rhs);}
  inline bool operator >=(const TDateTime& lhs, const Variant& rhs)
  {return Variant(lhs).operator >=(rhs);}
#endif

// Variant global scope comparisons (AnsiString on left)
#if defined(VARIANT_ANSISTRING_COMP_OP)
  inline bool operator ==(const AnsiString& lhs, const Variant& rhs)
  {return Variant(lhs).operator ==(rhs);}
  inline bool operator !=(const AnsiString& lhs, const Variant& rhs)
  {return Variant(lhs).operator !=(rhs);}
  inline bool operator < (const AnsiString& lhs, const Variant& rhs)
  {return Variant(lhs).operator < (rhs);}
  inline bool operator > (const AnsiString& lhs, const Variant& rhs)
  {return Variant(lhs).operator > (rhs);}
  inline bool operator <=(const AnsiString& lhs, const Variant& rhs)
  {return Variant(lhs).operator <=(rhs);}
  inline bool operator >=(const AnsiString& lhs, const Variant& rhs)
  {return Variant(lhs).operator >=(rhs);}
#endif

#if defined(VARIANT_CONST_CHARP_COMP_OP)
// Variant global scope comparisons (const char* on left)
  inline bool operator ==(const char* lhs, const Variant& rhs)
  {return Variant(lhs).operator ==(rhs);}
  inline bool operator !=(const char* lhs, const Variant& rhs)
  {return Variant(lhs).operator !=(rhs);}
  inline bool operator < (const char* lhs, const Variant& rhs)
  {return Variant(lhs).operator < (rhs);}
  inline bool operator > (const char* lhs, const Variant& rhs)
  {return Variant(lhs).operator > (rhs);}
  inline bool operator <=(const char* lhs, const Variant& rhs)
  {return Variant(lhs).operator <=(rhs);}
  inline bool operator >=(const char* lhs, const Variant& rhs)
  {return Variant(lhs).operator >=(rhs);}
#endif

// Variant binary global scope operators (AnsiString on left)
  inline Variant operator - (const AnsiString& lhs, const Variant& rhs)
  {return Variant(lhs).operator -(rhs);}
  inline Variant operator * (const AnsiString& lhs, const Variant& rhs)
  {return Variant(lhs).operator *(rhs);}
  inline Variant operator / (const AnsiString& lhs, const Variant& rhs)
  {return Variant(lhs).operator /(rhs);}
  inline Variant operator % (const AnsiString& lhs, const Variant& rhs)
  {return Variant(lhs).operator %(rhs);}
  inline Variant operator & (const AnsiString& lhs, const Variant& rhs)
  {return Variant(lhs).operator &(rhs);}
  inline Variant operator | (const AnsiString& lhs, const Variant& rhs)
  {return Variant(lhs).operator |(rhs);}
  inline Variant operator ^ (const AnsiString& lhs, const Variant& rhs)
  {return Variant(lhs).operator ^(rhs);}
  inline Variant operator <<(const AnsiString& lhs, const Variant& rhs)
  {return Variant(lhs).operator <<(rhs);}
  inline Variant operator >>(const AnsiString& lhs, const Variant& rhs)
  {return Variant(lhs).operator >>(rhs);}

// Variant binary global scope operators (int on left)
  inline Variant operator +(int lhs, const Variant& rhs)
  {return Variant(lhs).operator +(rhs);}
  inline Variant operator -(int lhs, const Variant& rhs)
  {return Variant(lhs).operator -(rhs);}
  inline Variant operator *(int lhs, const Variant& rhs)
  {return Variant(lhs).operator *(rhs);}
  inline Variant operator /(int lhs, const Variant& rhs)
  {return Variant(lhs).operator /(rhs);}
  inline Variant operator %(int lhs, const Variant& rhs)
  {return Variant(lhs).operator %(rhs);}
  inline Variant operator &(int lhs, const Variant& rhs)
  {return Variant(lhs).operator &(rhs);}
  inline Variant operator |(int lhs, const Variant& rhs)
  {return Variant(lhs).operator |(rhs);}
  inline Variant operator ^(int lhs, const Variant& rhs)
  {return Variant(lhs).operator ^(rhs);}
  inline Variant operator <<(int lhs, const Variant& rhs)
  {return Variant(lhs).operator <<(rhs);}
  inline Variant operator >>(int lhs, const Variant& rhs)
  {return Variant(lhs).operator >>(rhs);}

// Variant binary global scope operators (double on left)
  inline Variant operator +(double lhs, const Variant& rhs)
  {return Variant(lhs).operator +(rhs);}
  inline Variant operator -(double lhs, const Variant& rhs)
  {return Variant(lhs).operator -(rhs);}
  inline Variant operator *(double lhs, const Variant& rhs)
  {return Variant(lhs).operator *(rhs);}
  inline Variant operator /(double lhs, const Variant& rhs)
  {return Variant(lhs).operator /(rhs);}
  inline Variant operator %(double lhs, const Variant& rhs)
  {return Variant(lhs).operator %(rhs);}
  inline Variant operator &(double lhs, const Variant& rhs)
  {return Variant(lhs).operator &(rhs);}
  inline Variant operator |(double lhs, const Variant& rhs)
  {return Variant(lhs).operator |(rhs);}
  inline Variant operator ^(double lhs, const Variant& rhs)
  {return Variant(lhs).operator ^(rhs);}
  inline Variant operator <<(double lhs, const Variant& rhs)
  {return Variant(lhs).operator <<(rhs);}
  inline Variant operator >>(double lhs, const Variant& rhs)
  {return Variant(lhs).operator >>(rhs);}

#if defined(VARIANT_AUTOMATION_SUPPORT)
  class NamedParm;
  class AutoCmd
  {
  public:
    AutoCmd(const String& name);
    AutoCmd(const AutoCmd& src);
   ~AutoCmd();

    // Set(update) name of command
    AutoCmd& SetName(const String& name);

    // Named arg
    AutoCmd& operator <<(const NamedParm& np);

    // By value args
    AutoCmd& operator <<(const Variant& arg);
    AutoCmd& operator <<(const short arg);
    AutoCmd& operator <<(const int arg);
    AutoCmd& operator <<(const float arg);
    AutoCmd& operator <<(const double arg);
    AutoCmd& operator <<(const Currency arg);
    AutoCmd& operator <<(const TDateTime arg);
    AutoCmd& operator <<(const bool arg);
    AutoCmd& operator <<(const WordBool arg);
    AutoCmd& operator <<(const Byte arg);
    AutoCmd& operator <<(const AnsiString& arg);

    // Treat 'const char*' as an ASCIIz string
    /*AutoCmd& operator <<(const char* arg) {return operator <<(WideString(arg));}*/

    AutoCmd& operator <<(wchar_t* arg);
    AutoCmd& operator <<(IDispatch* arg);
    AutoCmd& operator <<(IUnknown* arg);

    //By ref args
    AutoCmd& operator <<(Variant* arg);
    AutoCmd& operator <<(short* arg);
    AutoCmd& operator <<(int* arg);
    AutoCmd& operator <<(float* arg);
    AutoCmd& operator <<(double* arg);
    AutoCmd& operator <<(Currency* arg);
    AutoCmd& operator <<(TDateTime* arg);
    AutoCmd& operator <<(WordBool* arg);
    AutoCmd& operator <<(Byte* arg);
    AutoCmd& operator <<(wchar_t** arg);

    AutoCmd& operator <<(AnsiString* arg);

    AutoCmd&          Clear();                 // ClearName() + ClearArgs()
    AutoCmd&          ClearName();             // SetName("")
    AutoCmd&          ClearArgs();             // Clear Parms and NamedParms

    // Overriden in Procedure, Function, PropertyGet and PropertySet classes
    //
    virtual Byte      GetCallType()   const = 0;
    virtual bool      RequestResult() const = 0;

    int               GetArgType(const Byte idx) const;
    int               GetNamedArgType(const Byte idx) const;
    AnsiString        GetName() const { return Name;}
    Byte              GetArgCount() const;
    Byte              GetNamedArgCount() const;
    Variant&          GetParm(const Byte idx);
    Variant&          GetNamedParm(const Byte idx);
    AnsiString        GetNamedParmName(const Byte idx) const;

  protected:
    void              AddElement();
    AnsiString        Name;                             // name of command
    Variant           Parms;                            // positional arguments
    Variant           ParmTypes;                        // types of positional arguments
    Variant           NamedParms;                       // named arguments
    Variant           NamedParmTypes;                   // types of named arguments
    Variant           NamedParmNames;                   // names of named arguments
  };

  class NamedParm
  {
  public:
    //By value ctors
    NamedParm(const AnsiString& name, const Variant& arg):    Name(name), Type(varVariant), Parm(arg) {}
    NamedParm(const AnsiString& name, const short arg):       Name(name), Type(varSmallint), Parm(arg) {}
    NamedParm(const AnsiString& name, const int arg):         Name(name), Type(varInteger), Parm(arg) {}
    NamedParm(const AnsiString& name, const float arg):       Name(name), Type(varSingle), Parm(arg) {}
    NamedParm(const AnsiString& name, const double arg):      Name(name), Type(varDouble), Parm(arg) {}
    NamedParm(const AnsiString& name, const Currency arg):    Name(name), Type(varCurrency), Parm(arg) {}
    NamedParm(const AnsiString& name, const TDateTime arg):   Name(name), Type(varDate), Parm(arg) {}
    NamedParm(const AnsiString& name, const bool arg):        Name(name), Type(varBoolean), Parm(arg) {}
    NamedParm(const AnsiString& name, const WordBool arg):    Name(name), Type(varBoolean), Parm(arg) {}
    NamedParm(const AnsiString& name, const Byte arg):        Name(name), Type(varByte), Parm(arg) {}
#ifdef WIDESTRING_IS_BSTR
    NamedParm(const AnsiString& name, const AnsiString& arg): Name(name), Type(varOleStr), Parm(WideString(arg).Detach()) {}
    NamedParm(const AnsiString& name, const char* arg):       Name(name), Type(varOleStr), Parm(WideString(arg).Detach()) {}
#endif
    NamedParm(const AnsiString& name, wchar_t* /*BSTR*/ arg): Name(name), Type(varOleStr), Parm(arg) {}
    NamedParm(const AnsiString& name, IDispatch* const arg):  Name(name), Type(varDispatch), Parm(arg) {}
    NamedParm(const AnsiString& name, IUnknown* const arg):   Name(name), Type(varUnknown), Parm(arg) {}

    //By ref ctors
    NamedParm(const AnsiString& name, Variant* arg):   Name(name), Type(varVariant | varByRef), Parm(arg) {}
    NamedParm(const AnsiString& name, short* arg):     Name(name), Type(varSmallint | varByRef), Parm(arg) {}
    NamedParm(const AnsiString& name, int* arg):       Name(name), Type(varInteger | varByRef), Parm(arg) {}
    NamedParm(const AnsiString& name, float* arg):     Name(name), Type(varSingle | varByRef), Parm(arg) {}
    NamedParm(const AnsiString& name, double* arg):    Name(name), Type(varDouble | varByRef), Parm(arg) {}
    NamedParm(const AnsiString& name, Currency* arg):  Name(name), Type(varCurrency | varByRef), Parm(arg) {}
    NamedParm(const AnsiString& name, TDateTime* arg): Name(name), Type(varDate | varByRef), Parm(arg) {}
    NamedParm(const AnsiString& name, WordBool* arg):  Name(name), Type(varBoolean | varByRef), Parm(arg) {}
    NamedParm(const AnsiString& name, Byte* arg):      Name(name), Type(varByte | varByRef), Parm(arg) {}
    NamedParm(const AnsiString& name, wchar_t** arg):  Name(name), Type(varOleStr | varByRef), Parm(arg) {}
#ifdef WIDESTRING_IS_BSTR
    NamedParm(const AnsiString& name, AnsiString* arg):Name(name), Type(varOleStr), Parm(WideString(*arg).Detach()) {}
#endif
    Variant           GetParm() const     { return Parm;}
    int               GetType() const     { return Type;}
    AnsiString        GetParmName() const { return Name;}
  protected:
    void              AddElement();
    AnsiString        Name;
    Variant           Parm;
    int               Type;
  };


  class Procedure : public AutoCmd
  {
  public:
    Procedure(const String& name): AutoCmd(name) {}
    Procedure(const AutoCmd& src): AutoCmd(src)  {}
    Byte      GetCallType()   const { return DISPATCH_METHOD;}
    bool      RequestResult() const { return false;          }
  };

  class Function : public AutoCmd
  {
  public:
    Function(const String& name): AutoCmd(name) {}
    Function(const AutoCmd& src): AutoCmd(src)  {}
    Byte      GetCallType()   const { return DISPATCH_METHOD;}
    bool      RequestResult() const { return true;           }
  };

  class PropertySet : public AutoCmd
  {
  public:
    PropertySet(const String& name): AutoCmd(name) {}
    PropertySet(const AutoCmd& src): AutoCmd(src)  {}
    Byte      GetCallType()   const { return DISPATCH_PROPERTYPUT; }
    bool      RequestResult() const { return false;                }
  };

  class PropertyGet : public AutoCmd
  {
  public:
    PropertyGet(const String& name): AutoCmd(name) {}
    PropertyGet(const AutoCmd& src): AutoCmd(src)  {}
    Byte      GetCallType()   const { return DISPATCH_PROPERTYGET;}
    bool      RequestResult() const { return true;                }
  };

#endif // VARIANT_AUTOMATION_SUPPORT

  // Variant-related helpers (Used to be in "System" - now in "Variants")
  extern void  VarClear(Variant& v);
  extern void  VarCast(Variant &dest, const Variant& source, int type);
  extern void  VarArrayRedim(Variant& a, int high);

  void to_string(UnicodeString &str, const Variant &src);
  void to_string(WideString &str, const Variant &src);
  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, const Variant &src)
  {
    UnicodeString tmp;
    to_string(tmp, src);
    str = tmp;
  }

} // namespace System

#pragma option pop


// VARIANT, Variant, TVariant and OleVariant - so many deviations - Ensure they're in alignment!
//
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(__CPP__) && !defined(__clang__)
#if sizeof(Variant) != sizeof(TVarData)
  #error sizeof(Variant) != sizeof(TVarData)
#endif
#if sizeof(OleVariant) != sizeof(Variant)
  #error ERROR: sizeof(OleVariant) != sizeof(Variant)
#endif
#if defined(VARIANT_NATIVE_SUPPORT)
  #if sizeof(OleVariant) != sizeof(VARIANT)
    #error ERROR: sizeof(OleVariant) != sizeof(VARIANT)
  #endif
  #if sizeof(Variant) != sizeof(VARIANT)
    #error ERROR: sizeof(Variant) != sizeof(VARIANT)
  #endif
#endif
#endif
#if defined(__clang__)
  #if defined(_WIN32)
    static_assert((sizeof(VARIANT) == sizeof(TVarData)), "sizeof(TVarData) != sizeof(VARIANT)");
    static_assert((sizeof(VARIANT) == sizeof(System::Variant)), "sizeof(Variant) != sizeof(VARIANT)");
    static_assert((sizeof(VARIANT) == sizeof(System::OleVariant)), "sizeof(OleVariant) != sizeof(VARIANT)");
  #else
    static_assert((sizeof(TVarData) == sizeof(System::Variant)), "sizeof(TVarData) != sizeof(Variant)");
    static_assert((sizeof(TVarData) == sizeof(System::OleVariant)), "sizeof(TVarData) != sizeof(OleVariant)");
  #endif
#endif


#endif // SYSVARI_H
