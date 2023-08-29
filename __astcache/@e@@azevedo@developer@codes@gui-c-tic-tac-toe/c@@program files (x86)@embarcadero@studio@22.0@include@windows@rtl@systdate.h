// -----------------------------------------------------------------------------------
// SYSTDATE.H: C++ Encapsulation of Delphi's TDateTime
//
// $Rev: 111713 $
//
// Copyright(c) 1995-2011 Embarcadero Technologies, Inc.
// -----------------------------------------------------------------------------------
#if !defined(SYSTDATE_H)
#define SYSTDATE_H

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

  class RTL_DELPHIRETURN TDateTimeBase
  {
  public:
    double Val;
  };

  class RTL_DELPHIRETURN TDateTime : public TDateTimeBase
  {
  public:
    // Used by TDateTime(const System::String& src)
    enum TDateTimeFlag {Date, Time, DateTime};

    static TDateTime CurrentDate();
    static TDateTime CurrentTime();
    static TDateTime CurrentDateTime();
    static TDateTime FileDateToDateTime(int fileDate);

    TDateTime()                                  {Val = 0;}
    TDateTime(const TDateTimeBase& src)          {Val = src.Val;}
    TDateTime(const double src)                  {Val = src;}
    TDateTime(const int src)                     {Val = src;}
    TDateTime(const System::String& src, TDateTimeFlag flag = DateTime);
    TDateTime(unsigned short year, unsigned short month, unsigned short day);
    TDateTime(unsigned short hour, unsigned short min,
                         unsigned short sec, unsigned short msec);
    TDateTime(unsigned short year, unsigned short month, unsigned short day, 
                         unsigned short hour, unsigned short min,
                         unsigned short sec, unsigned short msec);

    TDateTime& operator =(const TDateTimeBase& rhs)
    {Val = rhs.Val;return *this;}
    TDateTime& operator =(const TDateTime& rhs)
    {Val = rhs.Val;  return *this;}
    TDateTime& operator =(const double rhs)
    {Val = rhs; return *this;}
    TDateTime& operator =(const int rhs)
    {Val = rhs; return *this;}

    TDateTime& operator +=(const TDateTimeBase& rhs)
    {Val+=rhs.Val;return *this;}
    TDateTime& operator +=(const TDateTime& rhs)
    {Val += rhs.Val; return *this;}
    TDateTime& operator +=(const double rhs)
    {Val += rhs; return *this;}
    TDateTime& operator +=(const int rhs)
    {Val += rhs; return *this;}

    TDateTime& operator -=(const TDateTimeBase& rhs)
    {Val-=rhs.Val;return *this;}
    TDateTime& operator -=(const TDateTime& rhs)
    {Val -= rhs.Val; return *this;}
    TDateTime& operator -=(const double rhs)
    {Val -= rhs; return *this;}
    TDateTime& operator -=(const int rhs)
    {Val -= rhs; return *this;}

    TDateTime& operator ++() {Val++; return *this;}
    TDateTime operator ++(int) {TDateTime tmp(*this); Val++; return tmp;}
    TDateTime& operator --() {Val--; return *this;}
    TDateTime operator --(int) {TDateTime tmp(*this); Val--; return tmp;}

    TDateTime operator +(const TDateTimeBase& rhs) const
    {return Val+rhs.Val;}
    TDateTime operator +(const TDateTime& rhs) const
    {return Val+rhs.Val;}
    TDateTime operator +(const double rhs) const {return Val+rhs;}
    TDateTime operator +(const int rhs) const {return Val+rhs;}

    TDateTime operator -(const TDateTimeBase& rhs) const
    {return Val-rhs.Val;}
    TDateTime operator -(const TDateTime& rhs) const
    {return Val-rhs.Val;}
    TDateTime operator -(const double rhs) const {return Val-rhs;}
    TDateTime operator -(const int rhs) const {return Val-rhs;}

    // comparisons
    bool operator ==(const TDateTime& rhs) const
    {return Val == rhs.Val;}
    bool operator !=(const TDateTime& rhs) const
    {return Val != rhs.Val;}
    bool operator >(const TDateTime& rhs) const
    {return Val > rhs.Val;}
    bool operator <(const TDateTime& rhs) const
    {return Val < rhs.Val;}
    bool operator >=(const TDateTime& rhs) const
    {return Val >= rhs.Val;}
    bool operator <=(const TDateTime& rhs) const
    {return Val <= rhs.Val;}

#if defined(TDATETIME_IMPLICIT_CONV_OP)
    // The classic compiler did not properly implement the standard in allowing
    // 2 user-defined conversions from TDateTime to AnsiString. This resulted
    // in reports like http://vmsfjira.embarcadero.com:8665/browse/RS-84894
    // that claim that clang's at fault for now allow the same - :(
    //
    // This operator is to placate such reports and allow clang to handle
    // constructs like:
    //
    //      AnsiString s = System::SysUtils::Now();
    //
    // Use at your own risk: This operator may result in ambiguity errors!
    _DEPRECATED_ATTRIBUTE1("use toAnsiString")
    operator System::AnsiString() const
    {return System::AnsiString(operator System::String());}
#endif
    System::AnsiString toAnsiString() const
    {return System::AnsiString(operator System::String());}

    operator System::String() const;//<Date||Time||DateTime>String(smart)
    System::String FormatString(const System::String& format) const;
    System::String DateString() const;
    System::String TimeString() const;
    System::String DateTimeString() const;
    operator double() const {return Val;}
    operator int() const    {return (int)Val;}

    int DayOfWeek() const;
    int FileDate() const;
    void DecodeDate(unsigned short* year, unsigned short*
           month, unsigned short* day) const;
    void DecodeTime(unsigned short* hour, unsigned short*
           min, unsigned short* sec, unsigned short* msec) const;
  };

#if defined(__llvm__) && !defined(_WIN32)
  #ifndef _DECLARE_TDATETIME_TYPE_ALIAS
  #define _DECLARE_TDATETIME_TYPE_ALIAS(Base, Alias, Flag)         \
    class Alias : public Base {                                    \
    public:                                                        \
      Alias() : Base() {}                                          \
      Alias(const Base&  o) : Base(o) {}                           \
      Alias(const double src) : Base(src) {}                       \
      Alias(const int src) : Base(src) {}                          \
      Alias(const System::String& src,                             \
            TDateTimeFlag flag = Flag) : Base(src, flag) {}        \
      Alias(unsigned short year, unsigned short month,             \
            unsigned short day) : Base(year, month, day) {}        \
      Alias(unsigned short hour,                                   \
            unsigned short min, unsigned short sec,                \
            unsigned short msec) : Base(hour, min, sec, msec) {}   \
      Alias(unsigned short year, unsigned short month,             \
            unsigned short day, unsigned short hour,               \
            unsigned short min, unsigned short sec,                \
            unsigned short msec) : Base(year, month, day, hour,    \
                                        min, sec, msec) {}         \
    };
  #endif

  _DECLARE_TDATETIME_TYPE_ALIAS(TDateTime, TDate, Date)
  _DECLARE_TDATETIME_TYPE_ALIAS(TDateTime, TTime, Time)

#endif

  // NOTE: Insertion/Extraction operators of VCL classes are only visible
  //       if VCL_IOSTREAM is defined.
  //
  #if defined(VCL_IOSTREAM)
  std::ostream& operator <<(std::ostream& os, const TDateTime& arg);
  std::istream& operator >>(std::istream& is, TDateTime& arg);
  #endif

  void to_string(UnicodeString &str, const TDateTime &src);
  void to_string(WideString &str, const TDateTime &src);
  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, const TDateTime &src)
  {
    UnicodeString tmp;
    to_string(tmp, src);
    str = tmp;
  }
  void to_string(UnicodeString &str, const TDateTime &src, const Sysutils::TFormatSettings &settings);
  void to_string(WideString &str, const TDateTime &src, const Sysutils::TFormatSettings &settings);
  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, const TDateTime &src, const Sysutils::TFormatSettings &settings)
  {
    UnicodeString tmp;
    to_string(tmp, src, settings);
    str = tmp;
  }

  bool from_string(const UnicodeString &str, TDateTime &value);
  bool from_string(const WideString &str, TDateTime &value);
  template <unsigned short CP>
  bool from_string(const AnsiStringT<CP> &str, TDateTime &value)
  {
    UnicodeString tmp = str;
    return from_string(tmp, value);
  }
  bool from_string(const UnicodeString &str, const Sysutils::TFormatSettings &settings, TDateTime &value);
  bool from_string(const WideString &str, const Sysutils::TFormatSettings &settings, TDateTime &value);
  template <unsigned short CP>
  bool from_string(const AnsiStringT<CP> &str, const Sysutils::TFormatSettings &settings, TDateTime &value)
  {
    UnicodeString tmp = str;
    return from_string(tmp, settings, value);
  }

}

#pragma option pop

#endif
