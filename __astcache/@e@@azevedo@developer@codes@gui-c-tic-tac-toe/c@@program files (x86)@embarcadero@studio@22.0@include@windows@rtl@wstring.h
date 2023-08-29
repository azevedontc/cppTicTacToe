// -----------------------------------------------------------------------------------
//    WSTRING.H - Support for delphi WideString in C++
//                (WideString)
// $Rev: 111713 $
//
// Copyright(c) 1995-2011 Embarcadero Technologies, Inc.
// -----------------------------------------------------------------------------------
#ifndef WSTRING_H
#define WSTRING_H

#pragma delphiheader begin

#include <sysmac.h>
#include <dstring.h>
#include <System.Internal.StrHlpr.hpp>

#if __cplusplus >= 201703L
#include <string_view>
#endif

// WideString is a BSTR on Windows
#if defined(_WIN32) && !defined(WIDESTRING_NO_BSTR) && !defined(_DELPHI_NEXTGEN)
#define WIDESTRING_IS_BSTR
#endif

//NOTE: sysmac.h defines WIDECHAR_IS_WCHAR when "System::WideChar" == "wchar_t"

namespace System
{
namespace Sysutils
{
  struct TFormatSettings;  
}

#if !defined(_DELPHI_NEXTGEN)

  class RTL_DELPHIRETURN WideString
  {
  public:
    // the TStringFloatFormat enum is used by FloatToStrF
    enum TStringFloatFormat
    {sffGeneral, sffExponent, sffFixed, sffNumber, sffCurrency};

    // String of specified character
    static WideString StringOfChar(WideChar ch, int count);

    // Delphi style 'Format'
    //
    static WideString Format(const WideString& format,
                      const TVarRec *args, int size);

    // C style 'sprintf' (NOTE: Target buffer is the string)
    //
#if defined(_WIN32)
    WideString& __cdecl         sprintf(const wchar_t* format, ...); // Returns *this
    int         __cdecl          printf(const wchar_t* format, ...); // Returns formatted length
    int         __cdecl         vprintf(const wchar_t* format, va_list); // Returns formatted length

    // Like above, but appends to the string rather than overwrite
    WideString& __cdecl     cat_sprintf(const wchar_t* format, ...); // Returns *this
    int         __cdecl     cat_printf(const wchar_t* format, ...);  // Returns formatted length
    int         __cdecl     cat_vprintf(const wchar_t* format, va_list); // Returns formatted length
#endif

    static WideString FormatFloat(const WideString& format,
                                             const long double& value);
    static WideString FloatToStrF(long double value,
                                             TStringFloatFormat format,
                                             int precision, int digits);
    static WideString IntToHex(int value, int digits);
    static WideString CurrToStr(Currency value);
    static WideString CurrToStrF(Currency value,
                                            TStringFloatFormat format,
                                            int digits);

    // Constructors
    WideString(): Data(0) {}
    WideString(const char* src);
    WideString(const WideString& src);
    WideString(const WideChar* src, int len);
    WideString(const char* src, int len);
    WideString(const WideChar* src);
#if !defined(WIDECHAR_IS_CHAR16)
    WideString(const char16_t* src, int numChar16 = -1);
#endif
    WideString(const char32_t* src, int numChar32 = -1);

#if !defined(WIDECHAR_IS_WCHAR)
    WideString(const wchar_t* src);
    WideString(const wchar_t* src, int len);
    explicit WideString(const wchar_t  src);
#endif

    explicit WideString(const WideChar src);
    explicit WideString(char src);
    explicit WideString(short src);
    explicit WideString(unsigned short);
    explicit WideString(int src);
    explicit WideString(unsigned int);
    explicit WideString(long);
    explicit WideString(unsigned long);
    explicit WideString(__int64);
    explicit WideString(unsigned __int64);
    explicit WideString(float src);
    explicit WideString(double src);
    explicit WideString(long double src);
    WideString(const UnicodeString& src);
#if __cplusplus >= 201703L
    template<typename CharT>
    WideString(std::basic_string_view<CharT> src): WideString(src.data(), src.size()) {}
#endif


    template <unsigned short codePage>
    WideString(const AnsiStringT<codePage> &src): Data(0) {
      System::Internal::Strhlpr::WideFromAnsi(*this, *PRawByteString(&src));
    }

    // Destructor
    ~WideString();

    // Assignments
    //
    WideString& operator =(const WideString& rhs);
#ifdef WIDESTRING_IS_BSTR
    WideString& operator =(BSTR rhs);
#else
    WideString& operator =(const char16_t* rhs);
#endif
#if __cplusplus >= 201703L
    template <typename MaybeViewT,
      typename std::enable_if<
        (std::is_convertible<const MaybeViewT &, std::basic_string_view<char>>::value ||
         std::is_convertible<const MaybeViewT &, std::basic_string_view<wchar_t>>::value ||
         std::is_convertible<const MaybeViewT &, std::basic_string_view<char16_t>>::value ||
         std::is_convertible<const MaybeViewT &, std::basic_string_view<char32_t>>::value)
        && !std::is_convertible<const MaybeViewT &, const char *>::value
        && !std::is_convertible<const MaybeViewT &, const wchar_t *>::value
        && !std::is_convertible<const MaybeViewT &, const char16_t *>::value
        && !std::is_convertible<const MaybeViewT &, const char32_t *>::value
        && !std::is_convertible<const MaybeViewT &, const UnicodeString &>::value
      >::type* = nullptr
    >
    WideString& operator=(const MaybeViewT &src) {
      std::basic_string_view<typename MaybeViewT::value_type> view(src);
      WideString self(view);
      *this = self;
      return *this;
    }
#endif
    WideString& operator +=(const WideString& rhs);

    // Comparisons
    //
    bool operator ==(const WideString& rhs) const;
    bool operator !=(const WideString& rhs) const;
    bool operator < (const WideString& rhs) const;
    bool operator > (const WideString& rhs) const;
    bool operator <=(const WideString& rhs) const;
    bool operator >=(const WideString& rhs) const;

#ifdef WIDESTRING_IS_BSTR
    bool operator ==(const BSTR w) const;
    bool operator !=(const BSTR w) const;
    bool operator < (const BSTR w) const;
    bool operator > (const BSTR w) const;
    bool operator <=(const BSTR w) const;
    bool operator >=(const BSTR w) const;
#else
    bool operator ==(const char16_t* w) const;
    bool operator !=(const char16_t* w) const;
    bool operator < (const char16_t* w) const;
    bool operator > (const char16_t* w) const;
    bool operator <=(const char16_t* w) const;
    bool operator >=(const char16_t* w) const;
#endif

    bool operator ==(const char* s) const
    { return operator ==(WideString(s)); }
    bool operator !=(const char* s) const
    { return operator !=(WideString(s)); }
    bool operator < (const char* s) const
    { return operator < (WideString(s)); }
    bool operator > (const char* s) const
    { return operator > (WideString(s)); }
    bool operator <=(const char* s) const
    { return operator <= (WideString(s)); }
    bool operator >=(const char* s) const
    { return operator >= (WideString(s)); }

    // --------------------------------------------------------------------
    // Accessing character at specified index
    // NOTE: To be compatible with Delphi, 'idx' is one-based
    // --------------------------------------------------------------------
    WideChar & operator [](const int idx) { return Data[idx-1]; }
    const WideChar& operator [](const int idx) const { return Data[idx-1]; }

    // Concatenation
    //
    WideString operator +(const WideString& rhs) const;

    // C string operator
    WideChar* c_bstr() const            { return Data; }

    // Read access to raw Data ptr.
    WideChar* data()                    { return Data; }

    // Query attributes of string
    int  Length() const;
    bool IsEmpty() const { return Data == 0; }

    // Modify string
    void Insert(const WideString& str, int index);
    void Delete(int index, int count);
    void SetLength(int newLength);

    int          Pos(const WideString& subStr) const;
    WideString   LowerCase() const;
    WideString   UpperCase() const;
    WideString   Trim() const;
    WideString   TrimLeft() const;
    WideString   TrimRight() const;
    WideString   SubString(int index, int count) const;

    int          ToInt() const;
    int          ToIntDef(int defaultValue) const;
    double       ToDouble() const;

    bool         IsDelimiter(const WideString& delimiters, int index) const;
    bool         IsPathDelimiter(int index) const;
    int          LastDelimiter(const WideString& delimiters) const;
    const WideChar*    FirstChar() const;
    const WideChar*    LastChar() const;
    WideChar*          FirstChar();
    WideChar*          LastChar();

    // WideString iterators
    typedef WideChar * iterator;
    typedef const WideChar * const_iterator;

    iterator begin() { return FirstChar(); }
    iterator end() {
      WideChar* chr = LastChar();
      return chr ? chr + 1 : 0;
    }
    const_iterator cbegin() const { return FirstChar(); }
    const_iterator cend() const {
      const WideChar* chr = LastChar();
      return chr ? chr + 1 : 0;
    }
    const_iterator begin() const { return cbegin(); }
    const_iterator end() const { return cend(); }

#ifdef WIDESTRING_IS_BSTR
    // The implicit operator BSTR() has been the source of many issues
    // mainly involving the compiler resorting to incorrect pointer
    // conversion/comparisons. For backward compatibility you can - AYOR -
    // enable the operator by defining NO_WIDESTRING_BSTR_OPERATOR_EXPLICIT
# if !defined(NO_WIDESTRING_BSTR_OPERATOR_EXPLICIT)
#   define WIDESTRING_BSTR_OPERATOR_EXPLICIT explicit
# else
#   define WIDESTRING_BSTR_OPERATOR_EXPLICIT
# endif
    WIDESTRING_BSTR_OPERATOR_EXPLICIT
    operator BSTR() const  { return Data; }
#endif

    // Access internal data (Be careful when using!!)
    //
#ifdef WIDESTRING_IS_BSTR
    // these are definitely going away:  we can either act like a BSTR
    // or a Pascal WideString.  the former is what we need.
    // --xmsb (2002-01-24 23:06)
    BSTR* operator& ()
    {
      return &Data;
    }

    // Attach/Detach from BSTR, Empty Object
    //
    void Attach(BSTR src);
    BSTR Detach();
    void Empty();

    // Retrieve copy of data
    //
    static wchar_t* Copy(wchar_t* src);

    wchar_t* Copy() const
    {
      return Copy(Data);
    }

#endif // WIDESTRING_IS_BSTR

    wchar_t* Copy(wchar_t *, int len) const;

    WideString&    swap(WideString& other);

#if __cplusplus >= 201703L
    operator std::basic_string_view<WideChar>() const { return std::basic_string_view<WideChar>(FirstChar(), Length()); }
#endif

  private:
    // Initialize from a zero-terminated wide string
    void InitStr(const WideChar*, int);
    WideChar* Data;
  };

  inline bool operator ==(const char* str, const WideString& rhs) {
    return rhs.operator==(WideString(str));
  }

  inline bool operator !=(const char* str, const WideString& rhs) {
    return rhs.operator!=(WideString(str));
  }

  inline bool operator < (const char* str, const WideString& rhs) {
    return rhs.operator>(WideString(str));
  }

  inline bool operator > (const char* str, const WideString& rhs) {
    return rhs.operator<(WideString(str));
  }

  inline bool operator <=(const char* str, const WideString& rhs) {
    return rhs.operator>=(WideString(str));
  }

  inline bool operator >=(const char* str, const WideString& rhs) {
    return rhs.operator<=(WideString(str));
  }


#ifdef WIDESTRING_IS_BSTR
  bool operator ==(const BSTR w, const WideString& rhs);
  bool operator !=(const BSTR w, const WideString& rhs);
  bool operator < (const BSTR w, const WideString& rhs);
  bool operator > (const BSTR w, const WideString& rhs);
  bool operator <=(const BSTR w, const WideString& rhs);
  bool operator >=(const BSTR w, const WideString& rhs);
#else
  bool operator ==(const char16_t* w, const WideString& rhs);
  bool operator !=(const char16_t* w, const WideString& rhs);
  bool operator < (const char16_t* w, const WideString& rhs);
  bool operator > (const char16_t* w, const WideString& rhs);
  bool operator <=(const char16_t* w, const WideString& rhs);
  bool operator >=(const char16_t* w, const WideString& rhs);
#endif

  void to_string(WideString &str, bool src);
  
  void to_string(WideString &str, char ch);

  void to_string(WideString &str, signed char ch);

  void to_string(WideString &str, unsigned char ch);

  void to_string(WideString &str, short src);

  void to_string(WideString &str, unsigned short src);

  void to_string(WideString &str, int src);

  void to_string(WideString &str, unsigned int src);

  void to_string(WideString &str, long src);

  void to_string(WideString &str, unsigned long src);

  void to_string(WideString &str, wchar_t src);

  void to_string(WideString &str, long long src);

  void to_string(WideString &str, unsigned long long src);

  void to_string(WideString &str, float src);
  void to_string(WideString &str, float src, const Sysutils::TFormatSettings &settings);

  void to_string(WideString &str, double src);
  void to_string(WideString &str, double src, const Sysutils::TFormatSettings &settings);

  void to_string(WideString &str, long double src);
  void to_string(WideString &str, long double src, const Sysutils::TFormatSettings &settings);

  bool from_string(const WideString &str, bool &value);

  bool from_string(const WideString &str, Extended &value);
  bool from_string(const WideString &str, const Sysutils::TFormatSettings &settings, Extended &value);

  bool from_string(const WideString &str, int &value);

  bool from_string(const WideString &str, long long &value);

  bool from_string(const WideString &str, unsigned int &value);

  bool from_string(const WideString &str, unsigned long long &value);

#else
  // In NEXTGEN mode there's no WideString but System.hpp still leaks the type
  // So we provide a dummy/unusable version here to compiler System.hpp
  class RTL_DELPHIRETURN WideString
  {
    WideString();
   ~WideString();
    WideString(const WideString& src);
    WideString& operator=(const WideString& rhs);
    WideChar* Data;
  };
#endif

}

#pragma delphiheader end.

#endif

