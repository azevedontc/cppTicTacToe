// -----------------------------------------------------------------------------------
// syscurr.h: Currency Wrapper
//
// $Rev: 111713 $
//
// Copyright(c) 1995-2011 Embarcadero Technologies, Inc.
// -----------------------------------------------------------------------------------
#if !defined(SYSCURR_H)
#define SYSCURR_H

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

#pragma option push -w-inl -w-lvc

namespace System
{
namespace Sysutils
{
  struct TFormatSettings;  
}

// Forward ref.
class RTL_DELPHIRETURN Currency;

#if defined(__linux__) && defined(__x86_64__)
  // Use _MulDivComp for Linux 64
  __int64 _MulDivComp(__int64 AValue, __int64 AMul, __int64 ADiv);
#elif defined(__arm__) || defined(__arm64__) || defined(__aarch64__)
  // See System.pas
  __int64 _MulDivInt64(__int64 AValue, __int64 AMul, __int64 ADiv);
#elif defined(_WIN32) || defined(__APPLE__)
  // Use __currMul for WIN32, WIN64 and OSX
  // (See classcre.asm, currency.cpp, classcreate.c)
  extern "C" void __fastcall __currMul(const System::Currency c1, System::Currency &c2);
#else
  #error "Need __currMul/_MulDivInt64 Helper"
#endif

  class RTL_DELPHIRETURN CurrencyBase
  {
  public:
    __int64 Val;  // struct { unsigned long Lo; long Hi; };
  };

  class RTL_DELPHIRETURN Currency : public CurrencyBase
  {
    friend Currency operator +(int lhs, const Currency& rhs);
    friend Currency operator -(int lhs, const Currency& rhs);
    friend Currency operator *(int lhs, const Currency& rhs);
    friend Currency operator /(int lhs, const Currency& rhs);
    friend Currency operator +(double lhs, const Currency& rhs);
    friend Currency operator -(double lhs, const Currency& rhs);
    friend Currency operator *(double lhs, const Currency& rhs);
    friend Currency operator /(double lhs, const Currency& rhs);
  public:
    Currency()                        {Val = 0;}
    Currency(int val)                 {Val = 10000*(__int64)val;}
    Currency(const CurrencyBase& src) {Val = src.Val;}
    Currency(const System::String& src);
    Currency(double val);

    Currency& operator =(double rhs);

    Currency& operator =(int rhs)
    {Val = 10000*(__int64)rhs; return *this;}
    Currency& operator =(const CurrencyBase& rhs)
    {Val=rhs.Val;return *this;}
    Currency& operator =(const Currency& rhs)
    {Val = rhs.Val; return *this;}

    Currency& operator +=(const Currency& rhs)
    {Val += rhs.Val; return *this;}
    Currency& operator -=(const Currency& rhs)
    {Val -= rhs.Val; return *this;}

    Currency& operator *=(const Currency& rhs)
  #if defined(__linux__) && defined(__x86_64__)
    { Val = _MulDivComp(Val, rhs.Val, 10000); return *this; }
  #elif defined(__arm__) || defined(__arm64__) || defined(__aarch64__)
    { Val = _MulDivInt64(Val, rhs.Val, 10000); return *this; }
  #elif defined(_WIN32) || defined(__APPLE__)
    { __currMul(rhs, *this); return *this; }
  #else
    #error "Need Currency *= implemented"
  #endif

    Currency& operator /=(const Currency& rhs)
    {Val *= 10000; Val /= rhs.Val; return *this;}
    Currency& operator %=(int rhs)
    {Val %= 10000 * (__int64)rhs; return *this;}

    Currency& operator ++() {Val += 10000; return *this;}
    Currency operator ++(int) {Currency tmp(*this); Val += 10000; return tmp;}
    Currency& operator --() {Val -= 10000; return *this;}
    Currency operator --(int) {Currency tmp(*this); Val -= 10000; return tmp;}

    Currency operator +(const Currency& rhs) const
    {Currency tmp(*this); return tmp += rhs;}
    Currency operator -(const Currency& rhs) const
    {Currency tmp(*this); return tmp -= rhs;}
    Currency operator *(const Currency& rhs) const
    {Currency tmp(*this); return tmp *= rhs;}
    Currency operator /(const Currency& rhs) const
    {Currency tmp(*this); return tmp /= rhs;}

    Currency operator +(int rhs) const
    {Currency tmp(*this); return tmp += Currency(rhs);}
    Currency operator -(int rhs) const
    {Currency tmp(*this); return tmp -= Currency(rhs);}
    Currency operator *(int rhs) const
    {Currency tmp(*this); return tmp *= Currency(rhs);}
    Currency operator /(int rhs) const
    {Currency tmp(*this); return tmp /= Currency(rhs);}
    Currency operator %(int rhs) const
    {return Currency(static_cast<int>(Val % (10000 * (__int64)rhs))) / 10000;}

    Currency operator +(double rhs) const
    {Currency tmp(*this); return tmp += Currency(rhs);}
    Currency operator -(double rhs) const
    {Currency tmp(*this); return tmp -= Currency(rhs);}
    Currency operator *(double rhs) const
    {Currency tmp(*this); return tmp *= Currency(rhs);}
    Currency operator /(double rhs) const
    {Currency tmp(*this); return tmp /= Currency(rhs);}

    Currency operator -() const
    {Currency tmp(*this); tmp.Val = -(tmp.Val); return tmp;}

    Currency operator !() const
    {Currency tmp(*this); tmp.Val = !(tmp.Val); return tmp;}

    // comparisons (Currency rhs)
    bool operator ==(const Currency& rhs) const
    {return Val == rhs.Val;}
    bool operator !=(const Currency& rhs) const
    {return Val != rhs.Val;}
    bool operator >(const Currency& rhs) const
    {return Val > rhs.Val;}
    bool operator <(const Currency& rhs) const
    {return Val < rhs.Val;}
    bool operator >=(const Currency& rhs) const
    {return Val >= rhs.Val;}
    bool operator <=(const Currency& rhs) const
    {return Val <= rhs.Val;}

    // comparisons (int rhs)
    bool operator ==(int rhs) const
    {return Val == 10000 * (__int64)rhs;}
    bool operator !=(int rhs) const
    {return Val != 10000 * (__int64)rhs;}
    bool operator >(int rhs) const
    {return Val > 10000 * (__int64)rhs;}
    bool operator <(int rhs) const
    {return Val < 10000 * (__int64)rhs;}
    bool operator >=(int rhs) const
    {return Val >= 10000 * (__int64)rhs;}
    bool operator <=(int rhs) const
    {return Val <= 10000 * (__int64)rhs;}

    // comparisons (double rhs)
    bool operator ==(double rhs) const
    {return *this == Currency(rhs);}
    bool operator !=(double rhs) const
    {return *this != Currency(rhs);}
    bool operator >(double rhs) const
    {return *this > Currency(rhs);}
    bool operator <(double rhs) const
    {return *this < Currency(rhs);}
    bool operator >=(double rhs) const
    {return *this >= Currency(rhs);}
    bool operator <=(double rhs) const
    {return *this <= Currency(rhs);}

    operator double() const {return ((double)Val) / 10000;}
    operator int() const    {return (int) (Val / 10000);}
    operator System::String() const;
  };

  // Currency friends
  //
  inline Currency operator +(int lhs, const Currency& rhs)
  {Currency tmp(lhs); return tmp += rhs;}
  inline Currency operator -(int lhs, const Currency& rhs)
  {Currency tmp(lhs); return tmp -= rhs;}
  inline Currency operator *(int lhs, const Currency& rhs)
  {Currency tmp(lhs); return tmp *= rhs;}
  inline Currency operator /(int lhs, const Currency& rhs)
  {Currency tmp(lhs); return tmp /= rhs;}
  inline Currency operator +(double lhs, const Currency& rhs)
  {Currency tmp(lhs); return tmp += rhs;}
  inline Currency operator -(double lhs, const Currency& rhs)
  {Currency tmp(lhs); return tmp -= rhs;}
  inline Currency operator *(double lhs, const Currency& rhs)
  {Currency tmp(lhs); return tmp *= rhs;}
  inline Currency operator /(double lhs, const Currency& rhs)
  {Currency tmp(lhs); return tmp /= rhs;}

  // NOTE: Insertion/Extraction operators of VCL classes are only visible
  //       if VCL_IOSTREAM is defined.
  //
  #if defined(VCL_IOSTREAM)
  std::ostream& operator << (std::ostream& os, const Currency& arg);
  std::istream& operator >> (std::istream& is, Currency& arg);
  #endif

  void to_string(UnicodeString &str, const Currency &src);
  void to_string(WideString &str, const Currency &src);
  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, const Currency &src)
  {
    UnicodeString tmp;
    to_string(tmp, src);
    str = tmp;
  }
  void to_string(UnicodeString &str, const Currency &src, const Sysutils::TFormatSettings &settings);
  void to_string(WideString &str, const Currency &src, const Sysutils::TFormatSettings &settings);
  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, const Currency &src, const Sysutils::TFormatSettings &settings)
  {
    UnicodeString tmp;
    to_string(tmp, src, settings);
    str = tmp;
  }

  bool from_string(const UnicodeString &str, Currency &value);
  bool from_string(const WideString &str, Currency &value);
  template <unsigned short CP>
  bool from_string(const AnsiStringT<CP> &str, Currency &value)
  {
    UnicodeString tmp = str;
    return from_string(tmp, value);
  }
  bool from_string(const UnicodeString &str, const Sysutils::TFormatSettings &settings, Currency &value);
  bool from_string(const WideString &str, const Sysutils::TFormatSettings &settings, Currency &value);
  template <unsigned short CP>
  bool from_string(const AnsiStringT<CP> &str, const Sysutils::TFormatSettings &settings, Currency &value)
  {
    UnicodeString tmp = str;
    return from_string(tmp, settings, value);
  }

}

#pragma option pop

#endif
