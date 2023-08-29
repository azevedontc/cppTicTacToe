// -----------------------------------------------------------------------------------
// USTRING.H - Support for delphi UnicodeString in C++
//                (UnicodeString)
// $Rev: 111713 $
//
// Copyright(c) 1995-2011 Embarcadero Technologies, Inc.
// -----------------------------------------------------------------------------------
#ifndef USTRING_H
#define USTRING_H

#pragma delphiheader begin

#include <sysmac.h>
#include <stdarg.h>
#include <System.Internal.StrHlpr.hpp>

#if __cplusplus >= 201703L
#include <string_view>
#endif

namespace System
{
  class                  TVarRec;
  class RTL_DELPHIRETURN Currency;
#if !defined(_DELPHI_NEXTGEN)
  class RTL_DELPHIRETURN WideString;
#endif

namespace Sysutils
{
  struct TFormatSettings;  
}

  /////////////////////////////////////////////////////////////////////////////
  // UnicodeString: String class compatible with Delphi's Native 'string' type
  /////////////////////////////////////////////////////////////////////////////
  class RTL_DELPHIRETURN UnicodeString
  {
    friend UnicodeString operator +(const char*, const UnicodeString& rhs);
    friend UnicodeString operator +(const wchar_t*, const UnicodeString& rhs);
    friend UnicodeString operator +(const char16_t*, const UnicodeString& rhs);
    friend UnicodeString operator +(const char32_t*, const UnicodeString& rhs);

  public:
    // the TStringFloatFormat enum is used by FloatToStrF
    enum TStringFloatFormat
    {sffGeneral, sffExponent, sffFixed, sffNumber, sffCurrency};
#if !defined(_DELPHI_NEXTGEN)
    static UnicodeString LoadStr(int ident);
 #if defined(_WIN32)
    static UnicodeString LoadStr(HINSTANCE hInstance, int ident);
 #endif
    static UnicodeString FmtLoadStr(int ident, const TVarRec *args,
                        int size);

 #if defined(_WIN32)
    UnicodeString&       LoadString(HINSTANCE hInstance, int ident);
 #endif
#endif

    // String of specified character
    static UnicodeString StringOfChar(WideChar ch, int count);

    // Delphi style 'Format'
    //
    static UnicodeString Format(const UnicodeString& format,
                                           const TVarRec *args, int size);

    // C style 'sprintf' (NOTE: Target buffer is the string)
    //
    UnicodeString& __cdecl         sprintf(const wchar_t* format, ...); // Returns *this
    int            __cdecl          printf(const wchar_t* format, ...); // Returns formatted length
    int            __cdecl         vprintf(const wchar_t* format, va_list); // Returns formatted length


    // Like above, but appends to the string rather than overwrite
    UnicodeString& __cdecl     cat_sprintf(const wchar_t* format, ...); // Returns *this
    int            __cdecl     cat_printf(const wchar_t* format, ...);  // Returns formatted length
    int            __cdecl     cat_vprintf(const wchar_t* format, va_list); // Returns formatted length

    static UnicodeString FormatFloat(const UnicodeString& format,
                                                const long double& value);
    static UnicodeString FloatToStrF(long double value,
                                                TStringFloatFormat format,
                                                int precision, int digits);
    static UnicodeString IntToHex(int value, int digits);
    static UnicodeString CurrToStr(Currency value);
    static UnicodeString CurrToStrF(Currency value,
                                               TStringFloatFormat format,
                                               int digits);

    // Constructors
    UnicodeString();
    UnicodeString(const char* src);
    UnicodeString(const UnicodeString& src);
    UnicodeString(const WideChar* src, int len);
    UnicodeString(const char* src, int len);
    UnicodeString(const WideChar* src);
#if defined(WIDECHAR_IS_WCHAR)
    UnicodeString(const char16_t* src, int numChar16 = -1);
#endif
    UnicodeString(const char32_t* src, int numChar32 = -1);

#if defined(WIDECHAR_IS_CHAR16)
    UnicodeString(const wchar_t* src, int numWChar = -1);
#endif

    UnicodeString(char src): Data(0) { sprintf(L"%c", src);}
#if defined(_DELPHI_STRING_ONE_BASED)
    UnicodeString(System::WideChar src): Data(0) { SetLength(1)[1] = src; }
#else    
    UnicodeString(System::WideChar src): Data(0) { SetLength(1)[0] = src; }
#endif    
    UnicodeString(short src): Data(0) { sprintf(L"%hd", src); }
    UnicodeString(unsigned short src): Data(0) { sprintf(L"%hu", src); }
    UnicodeString(int src): Data(0) { sprintf(L"%i", src); }
    UnicodeString(unsigned int src): Data(0) { sprintf(L"%u", src); }
    UnicodeString(long src): Data(0) { sprintf(L"%ld", src); }
    UnicodeString(unsigned long src): Data(0) { sprintf(L"%lu", src); }
    UnicodeString(__int64 src): Data(0) { sprintf(L"%lli", src); }
    UnicodeString(unsigned __int64 src): Data(0) { sprintf(L"%llu", src); }
    UnicodeString(double src);
#if !defined(_DELPHI_NEXTGEN)
    UnicodeString(const WideString &src);
#endif
#if __cplusplus >= 201703L
    template<typename CharT>
    UnicodeString(std::basic_string_view<CharT> src): UnicodeString(src.data(), src.size()) {}
#endif

    template <unsigned short codePage>
    UnicodeString(const AnsiStringT<codePage> &src): Data(0) {
#if !defined(_DELPHI_NEXTGEN)
      System::Internal::Strhlpr::UnicodeFromAnsi(*this, *PRawByteString(&src));
#else
      System::Internal::Strhlpr::UnicodeFromAnsi(*this, src.CodePage(), 
                                                 const_cast<void*>(src.data()), 
                                                 src.Length());
#endif
    }

    // Destructor
    ~UnicodeString();

    // Assignments
    UnicodeString& operator =(const UnicodeString& rhs);
    UnicodeString& operator +=(const UnicodeString& rhs);
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
        && !std::is_convertible<const MaybeViewT &, const WideString &>::value
      >::type* = nullptr
    >
    UnicodeString& operator=(const MaybeViewT &src) {
      std::basic_string_view<typename MaybeViewT::value_type> view(src);
      UnicodeString self(view);
      *this = self;
      return *this;
    }
#endif

    // Comparisons
    bool operator ==(const UnicodeString& rhs) const;
    bool operator !=(const UnicodeString& rhs) const;
    bool operator < (const UnicodeString& rhs) const;
    bool operator > (const UnicodeString& rhs) const;
    bool operator <=(const UnicodeString& rhs) const;
    bool operator >=(const UnicodeString& rhs) const;
    int  Compare(const UnicodeString& rhs) const;
    int  CompareIC(const UnicodeString& rhs) const; //ignorecase

    // --------------------------------------------------------------------
    // Accessing character at specified index
    // NOTE: To be compatible with Delphi, 'idx' is one-based
    // --------------------------------------------------------------------
    WideChar operator [](const int idx) const _ALWAYS_INLINE
    {
#if defined(_DELPHI_STRING_ONE_BASED)
      ThrowIfOutOfRange(idx);   // Should Range-checking be optional to avoid overhead ??
      return Data[idx-1];
#else
      ThrowIfOutOfRange(idx+1);   // Should Range-checking be optional to avoid overhead ??
      return Data[idx];
#endif
    }

    WideChar& operator [](const int idx) _ALWAYS_INLINE
    {
#if defined(_DELPHI_STRING_ONE_BASED)
      ThrowIfOutOfRange(idx);   // Should Range-checking be optional to avoid overhead ??
      Unique();                 // Ensure we're not ref-counted
      return Data[idx-1];
#else
      ThrowIfOutOfRange(idx+1);
      Unique();
      return Data[idx];
#endif
    }

    // Concatenation
    UnicodeString operator +(const UnicodeString& rhs) const;

#if defined(_WIN32)
    WideChar* c_str() const   { return (Data)? Data: const_cast<WideChar*>(L"");}
    WideChar* w_str() const   { return (Data)? Data: const_cast<WideChar*>(L"");}
#else
    WideChar* c_str() const   { return (Data)? Data: reinterpret_cast<WideChar*>(const_cast<char16_t*>(u""));}
    WideChar* w_str() const   { return (Data)? Data: reinterpret_cast<WideChar*>(const_cast<char16_t*>(u""));}
#endif

    // The previously available 'char* UnicodeString::t_str()' squeezed/corrupted the
    // underlying word size element into byte size ones.
    // NOTE: As of C++Builder 2011, the logic to convert the underlying data of strings has
    //       been removed and the t_str() method is now flagged as deprecated. Please,
    //       use UnicodeString::c_str() instead.
    // For more information see:
    //              http://blogs.embarcadero.com/abauer/2010/01/26/38908
    WideChar* t_str _DEPRECATED_ATTRIBUTE0 () const   { return (Data)? Data: const_cast<WideChar*>(_D(""));}

    // Read access to raw Data ptr.  Will be NULL for an empty string.
    const void* data() const   { return Data; }

    // Query attributes of string
    int  Length()  const;
    bool IsEmpty() const { return Data == 0; }

    // Make string unique (refcnt == 1)
    UnicodeString&  Unique();

    // Modify string
    UnicodeString& Insert1(const UnicodeString& str, int index);
    UnicodeString& Insert0(const UnicodeString& str, int index);
    UnicodeString& Insert(const UnicodeString& str, int index) _ALWAYS_INLINE {
#if defined(_DELPHI_STRING_ONE_BASED)
      return Insert1(str, index);
#else
      return Insert0(str, index);
#endif
    }

    UnicodeString& Delete1(int index, int count);
    UnicodeString& Delete0(int index, int count);
    UnicodeString& Delete(int index, int count) _ALWAYS_INLINE {
#if defined(_DELPHI_STRING_ONE_BASED)
      return Delete1(index, count);
#else
      return Delete0(index, count);
#endif
    }

    UnicodeString&  SetLength(int newLength);

    int             Pos1(const UnicodeString& subStr) const;
    int             Pos0(const UnicodeString& subStr) const;
    int             Pos(const UnicodeString& subStr) const _ALWAYS_INLINE {
#if defined(_DELPHI_STRING_ONE_BASED)
      return Pos1(subStr);
#else
      return Pos0(subStr);
#endif
    }

    UnicodeString   LowerCase() const;
    UnicodeString   UpperCase() const;
    UnicodeString   Trim() const;
    UnicodeString   TrimLeft() const;
    UnicodeString   TrimRight() const;
    UnicodeString   SubString1(int index, int count) const;
    UnicodeString   SubString0(int index, int count) const;
    UnicodeString   SubString(int index, int count) const _ALWAYS_INLINE {
#if defined(_DELPHI_STRING_ONE_BASED)
      return SubString1(index, count);
#else
      return SubString0(index, count);
#endif
    }

    int          ToInt() const;
    int          ToIntDef(int defaultValue) const;
    double       ToDouble() const;

    bool         IsDelimiter1(const UnicodeString& delimiters, int index) const;
    bool         IsDelimiter0(const UnicodeString& delimiters, int index) const;
    bool         IsDelimiter(const UnicodeString& delimiters, int index) const _ALWAYS_INLINE {
#if defined(_DELPHI_STRING_ONE_BASED)
      return IsDelimiter1(delimiters, index);
#else
      return IsDelimiter0(delimiters, index);
#endif
    }

    bool         IsPathDelimiter1(int index) const;
    bool         IsPathDelimiter0(int index) const;
    bool         IsPathDelimiter(int index) const _ALWAYS_INLINE {
#if defined(_DELPHI_STRING_ONE_BASED)
      return IsPathDelimiter1(index);
#else
      return IsPathDelimiter0(index);
#endif
    }

    int          LastDelimiter1(const UnicodeString& delimiters) const;
    int          LastDelimiter0(const UnicodeString& delimiters) const;
    int          LastDelimiter(const UnicodeString& delimiters) const _ALWAYS_INLINE {
#if defined(_DELPHI_STRING_ONE_BASED)
      return LastDelimiter1(delimiters);
#else
      return LastDelimiter0(delimiters);
#endif
    }

    const WideChar*    FirstChar() const;
    const WideChar*    LastChar() const;
    WideChar*          FirstChar();
    WideChar*          LastChar();

    typedef WideChar * iterator;
    typedef const WideChar * const_iterator;

    // UnicodeString iterators
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

    enum TStringLeadCharType
    {ctNotLeadChar, ctbLeadSurrogate, ctTrailSurrogate};

    TStringLeadCharType ByteType1(int index) const;
    TStringLeadCharType ByteType0(int index) const;
    TStringLeadCharType ByteType(int index) const _ALWAYS_INLINE {
#if defined(_DELPHI_STRING_ONE_BASED)
      return ByteType1(index);
#else
      return ByteType0(index);
#endif
    }

    bool         IsLeadSurrogate1(int index) const;
    bool         IsLeadSurrogate0(int index) const;
    bool         IsLeadSurrogate(int index) const _ALWAYS_INLINE {
#if defined(_DELPHI_STRING_ONE_BASED)
      return IsLeadSurrogate1(index);
#else
      return IsLeadSurrogate0(index);
#endif
    }

    bool         IsTrailSurrogate1(int index) const;
    bool         IsTrailSurrogate0(int index) const;
    bool         IsTrailSurrogate(int index) const _ALWAYS_INLINE {
#if defined(_DELPHI_STRING_ONE_BASED)
      return IsTrailSurrogate1(index);
#else
      return IsTrailSurrogate0(index);
#endif
    }

    // NOTE: Uses default TEncoding. For other encodings, use TEncoding->ByteOf(uStr)
    DynamicArray<System::Byte> BytesOf() const;

    unsigned short ElementSize() const { return Data ? GetRec().elemSize : (unsigned short)2; }
    int            RefCount()    const { return Data ? GetRec().refCnt   : 0; }

    unsigned short CodePage()    const { return Data ? GetRec().codePage : (unsigned short)System::DefaultUnicodeCodePage; }

    UnicodeString& swap(UnicodeString& other);

#if __cplusplus >= 201703L
    operator std::basic_string_view<WideChar>() const { return std::basic_string_view<WideChar>(FirstChar(), Length()); }
#endif

  protected:
    void  __cdecl ThrowIfOutOfRange(int idx) const;

    // Keep in sync with StrRec in System
    #pragma pack(push,1)
    struct StrRec {
    #ifdef _WIN64
      int _Padding;
    #endif /* _WIN64 */
      unsigned short codePage;
      unsigned short elemSize;
      int refCnt;
      int length;
    };
    #pragma pack(pop)

    const StrRec& GetRec() const;
    StrRec&       GetRec();

  private:
    WideChar *Data;
  };

#if defined(_DELPHI_NEXTGEN)
  inline bool operator ==(const char* str, const UnicodeString& rhs) {
    return rhs.operator==(UnicodeString(str));
  }

  inline bool operator !=(const char* str, const UnicodeString& rhs) {
    return rhs.operator!=(UnicodeString(str));
  }

  inline bool operator < (const char* str, const UnicodeString& rhs) {
    return rhs.operator>(UnicodeString(str));
  }

  inline bool operator > (const char* str, const UnicodeString& rhs) {
    return rhs.operator<(UnicodeString(str));
  }

  inline bool operator <=(const char* str, const UnicodeString& rhs) {
    return rhs.operator>=(UnicodeString(str));
  }

  inline bool operator >=(const char* str, const UnicodeString& rhs) {
    return rhs.operator<=(UnicodeString(str));
  }
#endif

  UnicodeString operator +(const char*, const UnicodeString&);
  UnicodeString operator +(const wchar_t*, const UnicodeString&);
  UnicodeString operator +(const char16_t*, const UnicodeString&);
  UnicodeString operator +(const char32_t*, const UnicodeString&);

#if defined(VCL_IOSTREAM)
  // see <sysclass.h>
  std::wostream& operator << (std::wostream& os, const UnicodeString& arg);
  std::wistream& operator >> (std::wistream& is, UnicodeString& arg);
#endif

#if !defined(__CODEGUARD__)

  // Codeguard is not very happy about our "reverse indexing" of the
  // Data pointer.  We'll address this by violating the ODR:  when
  // Codeguard compile checks are enabled, these methods will not be
  // inlined.  When building ustring.cpp, __USTRING_INLINE will be
  // defined to generate out-of-line implementations of these methods.

  #if !defined(__USTRING_INLINE)
  #define __USTRING_INLINE inline
  #endif

  __USTRING_INLINE const UnicodeString::StrRec &UnicodeString::GetRec() const
  {
    return reinterpret_cast<const StrRec *>(Data)[-1];
  }

  __USTRING_INLINE UnicodeString::StrRec &UnicodeString::GetRec()
  {
    return reinterpret_cast<StrRec *>(Data)[-1];
  }

  __USTRING_INLINE int UnicodeString::Length() const
  {
    return (Data)? GetRec().length : 0;
  }

#undef __USTRING_INLINE
#endif // !defined(__CODEGUARD__)

  void to_string(UnicodeString &str, bool src);
  
  void to_string(UnicodeString &str, char ch);

  void to_string(UnicodeString &str, signed char ch);

  void to_string(UnicodeString &str, unsigned char ch);

  void to_string(UnicodeString &str, short src);

  void to_string(UnicodeString &str, unsigned short src);

  void to_string(UnicodeString &str, int src);

  void to_string(UnicodeString &str, unsigned int src);

  void to_string(UnicodeString &str, long src);

  void to_string(UnicodeString &str, unsigned long src);

  void to_string(UnicodeString &str, wchar_t src);

  void to_string(UnicodeString &str, long long src);

  void to_string(UnicodeString &str, unsigned long long src);

  void to_string(UnicodeString &str, float src);
  void to_string(UnicodeString &str, float src, const Sysutils::TFormatSettings &settings);

  void to_string(UnicodeString &str, double src);
  void to_string(UnicodeString &str, double src, const Sysutils::TFormatSettings &settings);

  void to_string(UnicodeString &str, long double src);
  void to_string(UnicodeString &str, long double src, const Sysutils::TFormatSettings &settings);

  bool from_string(const UnicodeString &str, bool &value);

  bool from_string(const UnicodeString &str, Extended &value);
  bool from_string(const UnicodeString &str, const Sysutils::TFormatSettings &settings, Extended &value);

  bool from_string(const UnicodeString &str, int &value);

  bool from_string(const UnicodeString &str, long long &value);

  bool from_string(const UnicodeString &str, unsigned int &value);

  bool from_string(const UnicodeString &str, unsigned long long &value);

} // namespace System

#pragma delphiheader end.

#endif  // USTRING_H
