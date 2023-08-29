// -----------------------------------------------------------------------------------
// DSTRING.H - Support for delphi AnsiString in C++
//            (AnsiString and template<sz> SmallString)
//
// $Rev: 111713 $
//
// Copyright(c) 1995-2011 Embarcadero Technologies, Inc.
// -----------------------------------------------------------------------------------

#ifndef DSTRING_H
#define DSTRING_H

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
  // AnsiStringBase: Base type of operations common to all
  //                 specialization of AnsiStringT<CP>
  /////////////////////////////////////////////////////////////////////////////
  class RTL_DELPHIRETURN AnsiStringBase
  {
  public:
    // the TStringFloatFormat enum is used by FloatToStrF
    enum TStringFloatFormat
    {sffGeneral, sffExponent, sffFixed, sffNumber, sffCurrency};
#if !defined(_DELPHI_NEXTGEN)
    static AnsiStringBase LoadStr(int ident, int codePage);
  #if defined(_WIN32)
    static AnsiStringBase LoadStr(HINSTANCE hInstance, int ident, int codePage);
  #endif
    static AnsiStringBase FmtLoadStr(int ident, const TVarRec *args,
                        int size, int codePage);

  #if defined(_WIN32)
    AnsiStringBase&       LoadString(HINSTANCE hInstance, int ident, int codePage);
  #endif
#endif

    // String of specified character
    static AnsiStringBase StringOfChar(char ch, int count);

    // Delphi style 'Format'
    //
    static AnsiStringBase Format(const AnsiStringBase& format,
                                            const TVarRec *args, int size,
                                            int codePage);

    int         __cdecl         vprintf(int codePage, const char* format, va_list); // Returns formatted length
    int         __cdecl     cat_vprintf(int codePage, const char* format, va_list); // Returns formatted length

    static AnsiStringBase FormatFloat(const AnsiStringBase& format,
                                                 const long double& value,
                                                 int codePage);
    static AnsiStringBase FloatToStrF(long double value,
                                                 TStringFloatFormat format,
                                                 int precision, int digits,
                                                 int codePage);
    static AnsiStringBase IntToHex(int value, int digits, int codePage);
    static AnsiStringBase CurrToStr(const Currency& value, int codePage);
    static AnsiStringBase CurrToStrF(const Currency& value,
                                                TStringFloatFormat format,
                                                int digits, int codePage);
    // Constructors
  protected:
    AnsiStringBase(): Data(0) {}
    AnsiStringBase(const AnsiStringBase& src);
    AnsiStringBase(const char* src, int codePage);
    AnsiStringBase(const char* src, int byteLen, int codePage);
    AnsiStringBase(const wchar_t* src, int numwchar, int codePage);
    AnsiStringBase(const char16_t* src, int numChar16, int codePage);
    AnsiStringBase(const char32_t* src, int numChar32, int codePage);

    AnsiStringBase(double src, int codePage);
    AnsiStringBase(System::WideChar src, int codePage);
    AnsiStringBase(char32_t src, int codePage);
#if !defined(_DELPHI_NEXTGEN)
    AnsiStringBase(const WideString &src, int codePage);
#endif
    AnsiStringBase(const UnicodeString &src, int codePage);

    template <unsigned short CP>
    AnsiStringBase(AnsiStringT<CP>&& src);

    // Destructor
  public:
    ~AnsiStringBase();

  protected:
    // Assignments
    AnsiStringBase& operator =(const AnsiStringBase& rhs);

    // Flat helpers
    static void _AnsiCat(AnsiStringBase& dst, const AnsiStringBase& src);
    static void _AnsiCat(AnsiStringBase& dst, const AnsiStringBase& src1, const AnsiStringBase& src2);
    static void _AnsiFromPWChar(AnsiStringBase& dst, const WideChar* src, int len, int codePage);

    // Comparisons
    bool operator ==(const AnsiStringBase& rhs) const;
    bool operator !=(const AnsiStringBase& rhs) const;
    bool operator <(const AnsiStringBase& rhs) const;
    bool operator >(const AnsiStringBase& rhs) const;
    bool operator <=(const AnsiStringBase& rhs) const { return !operator>(rhs); }
    bool operator >=(const AnsiStringBase& rhs) const { return !operator<(rhs); }
    int  AnsiCompare(const AnsiStringBase& rhs) const;
    int  AnsiCompareIC(const AnsiStringBase& rhs) const; //ignorecase

  public:
    // --------------------------------------------------------------------
    // Accessing character at specified index
    // NOTE: To be compatible with Delphi, 'idx' is one-based
    // --------------------------------------------------------------------
    char operator [](const int idx) const
    {
#if defined(_DELPHI_STRING_ONE_BASED)
      ThrowIfOutOfRange(idx); // Should Range-checking be optional to avoid overhead ??
      return Data[idx-1];
#else
      ThrowIfOutOfRange(idx+1);
      return Data[idx];
#endif
    }

#if defined(ANSISTRING_USE_PROXY_FOR_SUBSCRIPT)

    // The use of a proxy class optimizes the case where Unique() must be called
    // when accessing the string via the subscript operator. However, the use of
    // of the proxy class has some drawbacks. First, it breaks code that apply
    // operators to the return value. For example, &MyString[i]. Second, it
    // fails in cases where a implicit conversion was relied upon. For example,
    //       callFuncThatTakesAnObjectWithACharCtr(MyString[i]);
    // In that case, two implicit conversions would be required...
    // The first issue can be remedied by enhancing the proxy class to support
    // all valid operators. The second issue can be lessened but not completely
    // eliminated. Hence, the use of the PROXY class is not the default!
    //
  private:
    class  TCharProxy;
    friend TCharProxy;
    class  TCharProxy
    {
      public:
        TCharProxy(AnsiStringBase& strRef, int index) : m_Ref(strRef), m_Index(index) {}
        TCharProxy& operator=(char c) { m_Ref.Unique(); m_Ref.Data[m_Index-1] = c; return *this; }
        operator char() const         { return m_Ref.Data[m_Index-1]; }

      protected:
        AnsiStringBase&     m_Ref;
        int                 m_Index;
    };

  public:
    TCharProxy operator [](const int idx)
    {
      ThrowIfOutOfRange(idx);   // Should Range-checking be optional to avoid overhead ??
      return TCharProxy(*this, idx);
    }

#else

    char& operator [](const int idx)
    {
  #if defined(_DELPHI_STRING_ONE_BASED)
      ThrowIfOutOfRange(idx);   // Should Range-checking be optional to avoid overhead ??
      Unique();                 // Ensure we're not ref-counted
      return Data[idx-1];
  #else
      ThrowIfOutOfRange(idx+1); // Should Range-checking be optional to avoid overhead ??
      Unique();                 // Ensure we're not ref-counted
      return Data[idx];
  #endif
    }

#endif

    // Concatenation
    AnsiStringBase operator +(const AnsiStringBase& rhs) const;

    // Query attributes of string
    int  Length()  const;
    bool IsEmpty() const { return Data == 0; }

    // Make string unique (refcnt == 1)
    AnsiStringBase&  Unique() {
      System::UniqueString(*PAnsiString(this));
      return *this;
    }

    // Modify string
    AnsiStringBase&  Insert1(const AnsiStringBase& str, int index);
    AnsiStringBase&  Insert0(const AnsiStringBase& str, int index);
    AnsiStringBase&  Insert(const AnsiStringBase& str, int index) _ALWAYS_INLINE {
#if defined(_DELPHI_STRING_ONE_BASED)
      return Insert1(str, index);
#else
      return Insert0(str, index);
#endif
    }

    AnsiStringBase&  Delete1(int index, int count);
    AnsiStringBase&  Delete0(int index, int count);
    AnsiStringBase&  Delete(int index, int count) _ALWAYS_INLINE {
#if defined(_DELPHI_STRING_ONE_BASED)
      return Delete1(index, count);
#else
      return Delete0(index, count);
#endif
    }

    AnsiStringBase&  SetLength(int newLength, int codePage);

    int              Pos1(const AnsiStringBase& subStr) const;
    int              Pos0(const AnsiStringBase& subStr) const;
    int              Pos(const AnsiStringBase& subStr) const _ALWAYS_INLINE {
#if defined(_DELPHI_STRING_ONE_BASED)
      return Pos1(subStr);
#else
      return Pos0(subStr);
#endif
    }

    AnsiStringBase   LowerCase(int codePage) const;
    AnsiStringBase   UpperCase(int codePage) const;
    AnsiStringBase   Trim(int codePage) const;
    AnsiStringBase   TrimLeft(int codePage) const;
    AnsiStringBase   TrimRight(int codePage) const;

    AnsiStringBase   SubString1(int index, int count) const;
    AnsiStringBase   SubString0(int index, int count) const;
    AnsiStringBase   SubString(int index, int count) const _ALWAYS_INLINE {
#if defined(_DELPHI_STRING_ONE_BASED)
      return SubString1(index, count);
#else
      return SubString0(index, count);
#endif
    }

    int          ToInt() const;
    int          ToIntDef(int defaultValue) const;
    double       ToDouble() const;

    bool         IsDelimiter1(const AnsiStringBase& delimiters, int index) const;
    bool         IsDelimiter0(const AnsiStringBase& delimiters, int index) const;
    bool         IsDelimiter(const AnsiStringBase& delimiters, int index) const _ALWAYS_INLINE {
#if defined(_DELPHI_STRING_ONE_BASED)
      return IsDelimiter1(delimiters, index);
#else
      return IsDelimiter0(delimiters, index);
#endif
    }

#if !defined(_DELPHI_NEXTGEN)
    bool         IsPathDelimiter1(int index) const;
    bool         IsPathDelimiter0(int index) const;
    bool         IsPathDelimiter(int index) const _ALWAYS_INLINE {
 #if defined(_DELPHI_STRING_ONE_BASED)
      return IsPathDelimiter1(index);
 #else
      return IsPathDelimiter0(index);
 #endif
    }

    int          LastDelimiter1(const AnsiStringBase& delimiters) const;
    int          LastDelimiter0(const AnsiStringBase& delimiters) const;
    int          LastDelimiter(const AnsiStringBase& delimiters) const _ALWAYS_INLINE {
 #if defined(_DELPHI_STRING_ONE_BASED)
      return LastDelimiter1(delimiters);
 #else
      return LastDelimiter0(delimiters);
 #endif
    }
#endif

    // Convert to Unicode
#if defined(_WIN32)
    int          WideCharBufSize(int codePage) const;
    wchar_t*     WideChar(wchar_t* dest, int destSize, int codePage) const;
#endif

    // MBCS support
#if !defined(_DELPHI_NEXTGEN)
    enum TStringMbcsByteType
    {mbSingleByte, mbLeadByte, mbTrailByte};

    TStringMbcsByteType ByteType1(int index) const;
    TStringMbcsByteType ByteType0(int index) const;
    TStringMbcsByteType ByteType(int index) const _ALWAYS_INLINE {
 #if defined(_DELPHI_STRING_ONE_BASED)
      return ByteType1(index);
 #else
      return ByteType0(index);
 #endif
    }

    bool         IsLeadByte1(int index) const;
    bool         IsLeadByte0(int index) const;
    bool         IsLeadByte(int index) const _ALWAYS_INLINE {
 #if defined(_DELPHI_STRING_ONE_BASED)
      return IsLeadByte1(index);
 #else
      return IsLeadByte0(index);
 #endif
    }

    bool         IsTrailByte1(int index) const;
    bool         IsTrailByte0(int index) const;
    bool         IsTrailByte(int index) const _ALWAYS_INLINE {
 #if defined(_DELPHI_STRING_ONE_BASED)
      return IsTrailByte1(index);
 #else
      return IsTrailByte0(index);
 #endif
    }
#endif

    int          AnsiPos1(const AnsiStringBase& subStr) const;
    int          AnsiPos0(const AnsiStringBase& subStr) const;
    int          AnsiPos(const AnsiStringBase& subStr) const _ALWAYS_INLINE {
#if defined(_DELPHI_STRING_ONE_BASED)
      return AnsiPos1(subStr);
#else
      return AnsiPos0(subStr);
#endif
    }

#if !defined(_DELPHI_NEXTGEN)
    char*        AnsiLastChar() const;
#endif

    DynamicArray<System::Byte> BytesOf() const;

    unsigned short ElementSize() const { return Data ? GetRec().elemSize : (unsigned short)1; }
    int            RefCount()    const { return Data ? GetRec().refCnt   : 0; }

    unsigned short CodePage()    const { return Data ? GetRec().codePage : (unsigned short)System::DefaultSystemCodePage; }

    AnsiStringBase& swap(AnsiStringBase& other);

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

  protected:
    char *Data;
  };


  /////////////////////////////////////////////////////////////////////////////
  // AnsiStringT<CP> - C++ implementation of Delphi's AnsiString(CP) type
  /////////////////////////////////////////////////////////////////////////////
  template <unsigned short CP>
  class RTL_DELPHIRETURN AnsiStringT : public AnsiStringBase
  {
  public:
#if !defined(_DELPHI_NEXTGEN)
    static AnsiStringT LoadStr(int ident) {
      return AnsiStringBase::LoadStr(ident, CP);
    }

#if defined(_WIN32)
    static AnsiStringT LoadStr(HINSTANCE hInstance, int ident) {
      return AnsiStringBase::LoadStr(hInstance, ident, CP);
    }
#endif

    static AnsiStringT FmtLoadStr(int ident, const TVarRec *args,
                                             int size) {
      return AnsiStringBase::FmtLoadStr(ident, args, size, CP);
    }

#if defined(_WIN32)
    AnsiStringT& LoadString(HINSTANCE hInstance, int ident) {
      AnsiStringBase::LoadString(hInstance, ident, CP);
      return *this;
    }
#endif
#endif

    // String of specified character
    static AnsiStringT StringOfChar(char ch, int count) {
      return AnsiStringBase::StringOfChar(ch, count);
    }

    // Delphi style 'Format'
    //
    static AnsiStringT Format(const AnsiStringT& format,
                                         const TVarRec *args, int size) {
      return AnsiStringBase::Format(format, args, size, CP);
    }

    // C style 'sprintf' (NOTE: Target buffer is the string)
    //
    AnsiStringT& __cdecl sprintf(const char* format, ...) {
      va_list paramList;
      va_start(paramList, format);
      AnsiStringBase::vprintf(CP, format, paramList);
      va_end(paramList);
      return *this;
    }

    int __cdecl  printf(const char* format, ...) {
      int rc;
      va_list paramList;
      va_start(paramList, format);
      rc = AnsiStringBase::vprintf(CP, format, paramList);
      va_end(paramList);
      return rc;
    }

    int __cdecl  vprintf(const char* format, va_list list) {
      return AnsiStringBase::vprintf(CP, format, list);
    }

    // Like above, but appends to the string rather than overwrite
    AnsiStringT& __cdecl cat_sprintf(const char* format, ...) {
      va_list paramList;
      va_start(paramList, format);
      AnsiStringBase::cat_vprintf(CP, format, paramList);
      va_end(paramList);
      return *this;
    }

    int __cdecl cat_printf(const char* format, ...) {
      int rc;
      va_list paramList;
      va_start(paramList, format);
      rc = AnsiStringBase::cat_vprintf(CP, format, paramList);
      va_end(paramList);
      return rc;
    }

    int __cdecl cat_vprintf(const char* format, va_list list) {
      return AnsiStringBase::cat_vprintf(CP, format, list);
    }

    static AnsiStringT FormatFloat(const AnsiStringT& format,
                                              const long double& value) {
      return AnsiStringBase::FormatFloat(format, value, CP);
    }

    static AnsiStringT FloatToStrF(long double value,
                                              TStringFloatFormat format,
                                              int precision, int digits) {
      return AnsiStringBase::FloatToStrF(value, format, precision, digits, CP);
    }

    static AnsiStringT IntToHex(int value, int digits) {
      return AnsiStringBase::IntToHex(value, digits, CP);
    }

    static AnsiStringT CurrToStr(const Currency& value) {
      return AnsiStringBase::CurrToStr(value, CP);
    }

    static AnsiStringT CurrToStrF(const Currency& value,
                                             TStringFloatFormat format,
                                             int digits) {
      return AnsiStringBase::CurrToStrF(value, format, digits, CP);
    }

    // Constructors
    AnsiStringT() : AnsiStringBase() {}
#if defined(ANSISTRING_CONSTRUCTOR_EXPLICIT)
    explicit
#endif
    AnsiStringT(const char* src) : AnsiStringBase(src, CP){}

    AnsiStringT(const AnsiStringT& src) : AnsiStringBase(*((AnsiStringBase*)(&src))){}
    AnsiStringT(AnsiStringBase&& src) {
      src.swap(*this);
    }


    // Construct one AnsiStringT<CP> from one with another codepage affinity
    template <unsigned short OTHER_CP>
    AnsiStringT<CP>(const AnsiStringT<OTHER_CP>& src) : AnsiStringBase() {
#if !defined(_STRINGCHECKS_OFF)
      // Short-circuit case of LStrAddRef to preserve
      // payload as it could be in Unicode format
      #pragma option push -w-8011
      if (this == &src) {
        if (Data && reinterpret_cast<const StrRec*>(Data)[-1].refCnt > 0) {
          reinterpret_cast<StrRec*>(Data)[-1].refCnt++;
        }
        return;
      }
      #pragma option pop
#endif

      //  CodePage FFFF is a general receiver requiring no conversion
      if ((OTHER_CP == CP) || (CP == 0xFFFF)) {
        Data = static_cast<char*>(const_cast<void*>(src.data()));
        if (Data &&  reinterpret_cast<const StrRec*>(Data)[-1].refCnt > 0) {
          reinterpret_cast<StrRec*>(Data)[-1].refCnt++;
        }
        return;
      }

      // Up & down convert for other other code pages
      if (src.data()) {
        UnicodeString ustr(src);
        *this = ustr;
      }
    }

    AnsiStringT(const char* src, int byteLen) : AnsiStringBase(src, byteLen, CP){}
    AnsiStringT(const wchar_t* src, int numwchar = -1): AnsiStringBase(src, numwchar, CP){}
    AnsiStringT(const char16_t* src, int numChar16 = -1) : AnsiStringBase(src, numChar16, CP){}
    AnsiStringT(const char32_t* src, int numChar32 = -1) : AnsiStringBase(src, numChar32, CP){}

    AnsiStringT(char src) { sprintf("%c", src);}
    AnsiStringT(System::WideChar src): AnsiStringBase(src, CP) {}
    AnsiStringT(char32_t src): AnsiStringBase(src, CP) {}
    AnsiStringT(short src) { sprintf("%hd", src); }
    AnsiStringT(unsigned short src) { sprintf("%hu", src); }
    AnsiStringT(int src) { sprintf("%i", src); }
    AnsiStringT(unsigned int src) { sprintf("%u", src); }
    AnsiStringT(long src) { sprintf("%ld", src); }
    AnsiStringT(unsigned long src) { sprintf("%lu", src); }
    AnsiStringT(__int64 src) { sprintf("%lli", src); }
    AnsiStringT(unsigned __int64 src) { sprintf("%llu", src); }

    AnsiStringT(double src): AnsiStringBase(src, CP){}
#if !defined(_DELPHI_NEXTGEN)
    AnsiStringT(const WideString &src): AnsiStringBase(src, CP){}
#endif
    AnsiStringT(const UnicodeString &src): AnsiStringBase(src, CP){}
#if __cplusplus >= 201703L
    template<typename CharT>
    AnsiStringT(std::basic_string_view<CharT> src): AnsiStringT(src.data(), src.size()) {}
#endif

    ~AnsiStringT() {
#ifdef __clang__
      if (_init_inst) {
        static AnsiStringT<CP> __force_inst1, __force_inst2=__force_inst1;
      }
#endif
    }

    // Assignments
    AnsiStringT& operator =(const AnsiStringT& rhs) {
      AnsiStringBase::operator =(rhs);
      return *this;
    }

    AnsiStringT& operator +=(const AnsiStringT& rhs) {
      _AnsiCat(*this, rhs);
      return *this;
    }
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
        && !std::is_convertible<const MaybeViewT &, const SmallString<0xFF> &>::value
      >::type* = nullptr
    >
    AnsiStringT& operator=(const MaybeViewT &src) {
      std::basic_string_view<typename MaybeViewT::value_type> view(src);
      AnsiStringT<CP> self(view);
      *this = self;
      return *this;
    }
#endif

    // Comparisons
    bool operator ==(const AnsiStringT& rhs) const {
      return AnsiStringBase::operator==(rhs);
    }
    bool operator !=(const AnsiStringT& rhs) const {
      return AnsiStringBase::operator !=(rhs);
    }
    bool operator <(const AnsiStringT& rhs) const {
      return AnsiStringBase::operator<(rhs);
    }
    bool operator >(const AnsiStringT& rhs) const {
      return AnsiStringBase::operator >(rhs);
    }
    bool operator <=(const AnsiStringT& rhs) const {
      return !operator>(rhs);
    }
    bool operator >=(const AnsiStringT& rhs) const {
      return !operator<(rhs);
    }
    int  AnsiCompare(const AnsiStringT& rhs) const {
      return AnsiStringBase::AnsiCompare(rhs);
    }
    int  AnsiCompareIC(const AnsiStringT& rhs) const {
      return AnsiStringBase::AnsiCompareIC(rhs);
    }

    // Concatenation
    AnsiStringT operator +(const AnsiStringT& rhs) const {
      AnsiStringT<CP> dst;
      _AnsiCat(dst, *this, rhs);
      return dst;
    }

    // C string operator
    char* c_str() const {
      if (!Data) {
        return const_cast<char*>("");
      }
      return Data;
    }

    // Read access to raw Data ptr.  Will be NULL for an empty string.
    const void* data() const   { return Data; }

    // Make string unique (refcnt == 1)
    AnsiStringT&  Unique() {
      System::UniqueString(*PAnsiString(this));
      return *this;
    }

    // Modify string
    AnsiStringT&  Insert(const AnsiStringT& str, int index) {
      AnsiStringBase::Insert(str, index);
      return *this;
    }

    AnsiStringT&  Delete(int index, int count) {
      AnsiStringBase::Delete(index, count);
      return *this;
    }

    AnsiStringT&  SetLength(int newLength) {
      AnsiStringBase::SetLength(newLength, CP);
      return *this;
    }

    int Pos(const AnsiStringT& subStr) const {
      return AnsiStringBase::Pos(subStr);
    }

    AnsiStringT LowerCase() const {
      return AnsiStringBase::LowerCase(CP);
    }

    AnsiStringT UpperCase() const {
      return AnsiStringBase::UpperCase(CP);
    }

    AnsiStringT Trim() const {
      return AnsiStringBase::Trim(CP);
    }

    AnsiStringT TrimLeft() const {
      return AnsiStringBase::TrimLeft(CP);
    }

    AnsiStringT TrimRight() const {
      return AnsiStringBase::TrimRight(CP);
    }

    AnsiStringT SubString(int index, int count) const {
      return AnsiStringBase::SubString(index, count);
    }

    bool IsDelimiter(const AnsiStringT& delimiters, int index) const {
      return AnsiStringBase::IsDelimiter(delimiters, index);
    }

#if !defined(_DELPHI_NEXTGEN)
    int  LastDelimiter(const AnsiStringT& delimiters) const {
      return AnsiStringBase::LastDelimiter(delimiters);
    }
#endif

#if defined(_WIN32)
    int  WideCharBufSize() const {
      return AnsiStringBase::WideCharBufSize(CP);
    }

    wchar_t* WideChar(wchar_t* dest, int destSize) const {
      return AnsiStringBase::WideChar(dest, destSize, CP);
    }
#endif

    int AnsiPos(const AnsiStringT& subStr) const {
      return AnsiStringBase::AnsiPos(subStr);
    }

    unsigned short ElementSize() const { return Data ? GetRec().elemSize : (unsigned short)1; }
    int            RefCount()    const { return Data ? GetRec().refCnt   : 0; }

    unsigned short CodePage() const {
      return Data ? GetRec().codePage :
                   (CP ? (unsigned short)CP : (unsigned short)System::DefaultSystemCodePage);
    }

    AnsiStringT& swap(AnsiStringT& other) {
      AnsiStringBase::swap(other);
      return *this;
    }

#if __cplusplus >= 201703L
    operator std::string_view() const
    {
      return std::string_view(this->Data, this->Length());
    }
#endif
  };

  template <unsigned short CP>
  AnsiStringBase::AnsiStringBase(AnsiStringT<CP>&& src) {
    this->swap(src);
  }

  template <unsigned short CP>
  AnsiStringT<CP> operator+(const char* p, const AnsiStringT<CP>& str) {
    AnsiStringT<CP> tmp(p);
    return tmp + str;
  }

#if defined(VCL_IOSTREAM)
  // see <sysclass.h>
  std::ostream& operator << (std::ostream& os, const AnsiString& arg);
  std::istream& operator >> (std::istream& is, AnsiString& arg);
#endif

#if !defined(__CODEGUARD__)

  // Codeguard is not very happy about our "reverse indexing" of the
  // Data pointer.  We'll address this by violating the ODR:  when
  // Codeguard compile checks are enabled, these methods will not be
  // inlined.  When building dstring.cpp, __DSTRING_INLINE will be
  // defined to generate out-of-line implementations of these methods.

  #if !defined(__DSTRING_INLINE)
  #define __DSTRING_INLINE inline
  #endif

  __DSTRING_INLINE const AnsiStringBase::StrRec &AnsiStringBase::GetRec() const
  {
    return reinterpret_cast<const StrRec *>(Data)[-1];
  }

  __DSTRING_INLINE AnsiStringBase::StrRec& AnsiStringBase::GetRec()
  {
    return reinterpret_cast<StrRec *>(Data)[-1];
  }

  __DSTRING_INLINE int AnsiStringBase::Length() const
  {
    return (Data)? GetRec().length : 0;
  }

#undef __DSTRING_INLINE
#endif // !defined(__CODEGUARD__)

  /////////////////////////////////////////////////////////////////////////////
  // SmallStringBase
  /////////////////////////////////////////////////////////////////////////////
  template <unsigned char sz> class SmallStringBase
  {
  protected:
    unsigned char Len;
    char Data[sz];
  };


  /////////////////////////////////////////////////////////////////////////////
  // SmallString
  /////////////////////////////////////////////////////////////////////////////
  template <unsigned char sz> class SmallString : SmallStringBase<sz>
  {

  public:
    SmallString() { this->Len = 0; }
    SmallString(const SmallString& src);
    SmallString(const char* src);

    SmallString(const AnsiString& src)
    {
      long len = src.Length();
      this->Len = (unsigned char)((len > sz) ? sz : len);
      strncpy(this->Data, src.c_str(), this->Len);
    }

#if __cplusplus >= 201703L
    SmallString(std::string_view src)
    {
      auto len = src.size();
      this->Len = (unsigned char)((len > sz) ? sz : len);
      std::copy_n(src.data(), this->Len, this->Data);
    }
#endif

    char& operator [](const unsigned char idx)
    { return this->Data[idx-1]; }

    char operator [](const unsigned char idx) const
    { return this->Data[idx-1]; }

    SmallString& operator =(const SmallString& rhs);

    operator AnsiString() const;

#if __cplusplus >= 201703L
    operator std::string_view() const
    {
      return std::string_view(this->Data, this->Len);
    }
#endif
  };

  template<unsigned char sz>
  SmallString<sz>::SmallString(const char* src)
  {
    long len = strlen(src);
    this->Len = (unsigned char)((len > sz)? sz: len);
    strncpy(this->Data, src, this->Len);
  }

  template<unsigned char sz>
  SmallString<sz>::SmallString(const SmallString& src)
  {
    this->Len = src.Len;
    for (int i = 0; i < this->Len; i++)
      this->Data[i] = src.Data[i];
  }

  template<unsigned char sz> SmallString<sz>&
  SmallString<sz>::operator =(const SmallString& rhs)
  {
    if (this != &rhs)
    {
      this->Len = rhs.Len;
      for (int i = 0; i < this->Len; i++)
        this->Data[i] = rhs.Data[i];
    }
    return *this;
  }

  template<unsigned char sz>
  inline SmallString<sz>::operator AnsiString() const
  {
    return AnsiString(this->Data, this->Len);
  }

#if defined(VCL_IOSTREAM)
  // see sysclass.h
  template<unsigned char sz>
  std::ostream& operator <<(std::ostream& os, const SmallString<sz>& arg);

  template<unsigned char sz>
  std::istream& operator >>(std::istream& is, SmallString<sz>& arg);
#endif

#if defined(__clang__) && (defined(_DELPHI_NEXTGEN) || !(defined(_PLAT_MSWINDOWS) || defined(_PLAT_MACOS32)))

  // --------------------------------------------------------------------------------------
  // There's currently very limited AnsiString<CP> support in C++ on POSIX Platforms
  // because of the way Delphi mangles:
  //   - AnsString is mangled as AnsiStringT<0>
  //   - But 'UTF8String' and 'RawByteString' are mangled as distinct types
  //
  // Hence C++ must define distinct classes for these two types instead of defining them
  // as typedef of AnsiString<CP>, as we do on Windows
  // --------------------------------------------------------------------------------------
  class RawByteString : public AnsiStringT<65535>
  {
  public:
    using _BaseAnsiStringType  = AnsiStringT<65535>;
    RawByteString();
    RawByteString(const char* src, int byteLen = -1);
    RawByteString(const wchar_t* src, int numwchar = -1);
    RawByteString(const char16_t* src, int numChar16 = -1);
    RawByteString(const char32_t* src, int numChar32 = -1);

    RawByteString(char src);
    RawByteString(System::WideChar src);
    RawByteString(char32_t src);
    RawByteString(short src);
    RawByteString(unsigned short src);
    RawByteString(int src);
    RawByteString(unsigned int src);
    RawByteString(long src);
    RawByteString(unsigned long src);
    RawByteString(__int64 src);
    RawByteString(unsigned __int64 src);

    RawByteString(double src);

    RawByteString(const RawByteString&);
    RawByteString(const UnicodeString&);
    RawByteString(const WideString&);
    RawByteString(const UTF8String&);
    RawByteString(const AnsiString&);

    template <unsigned short OTHER_CP>
    RawByteString(const AnsiStringT<OTHER_CP>& src): AnsiStringT<65535>(src)
    {}

    RawByteString& operator=(const RawByteString&);
  };

  class UTF8String : public AnsiStringT<65001>
  {
  public:
    using _BaseAnsiStringType  = AnsiStringT<65001>;
    UTF8String();
    UTF8String(const char* src, int byteLen = -1);
    UTF8String(const wchar_t* src, int numwchar = -1);
    UTF8String(const char16_t* src, int numChar16 = -1);
    UTF8String(const char32_t* src, int numChar32 = -1);

    UTF8String(char src);
    UTF8String(System::WideChar src);
    UTF8String(char32_t src);
    UTF8String(short src);
    UTF8String(unsigned short src);
    UTF8String(int src);
    UTF8String(unsigned int src);
    UTF8String(long src);
    UTF8String(unsigned long src);
    UTF8String(__int64 src);
    UTF8String(unsigned __int64 src);

    UTF8String(double src);

    UTF8String(const UTF8String&);
    UTF8String(const UnicodeString&);
    UTF8String(const WideString&);
    UTF8String(const RawByteString&);
    UTF8String(const AnsiString&);

    template <unsigned short OTHER_CP>
    UTF8String(const AnsiStringT<OTHER_CP>& src) : AnsiStringT<65001>(src)
    {}

    UTF8String& operator=(const UTF8String&);
  };

  int  AnsiRefCount(const AnsiStringBase&);
  Word AnsiCodePage(const AnsiStringBase&);

  template <unsigned short CP>
  int StringRefCount(const AnsiStringT<CP> &str) {
    return AnsiRefCount(str);
  }

  template <unsigned short CP>
  int StringCodePage(const AnsiStringT<CP> &str) {
    return AnsiCodePage(str);
  }
#endif

}

// The following is provided for backward compatibility.
// Otherwise, the new IntToStr(__int64) causes ambiguity for old code
// that used other integral types.
//
namespace System
{
  namespace Sysutils
  {
    extern PACKAGE System::String __fastcall IntToStr(int Value)/* overload */;
    extern PACKAGE System::String __fastcall IntToStr(__int64 Value)/* overload */;
    extern PACKAGE System::String __fastcall UIntToStr(unsigned int Value)/* overload */;
    extern PACKAGE System::String __fastcall UIntToStr(unsigned __int64 Value)/* overload */;
    extern PACKAGE System::UnicodeString __fastcall FloatToStr(System::Extended Value)/* overload */;
    extern PACKAGE System::UnicodeString __fastcall FloatToStr(System::Extended Value, const TFormatSettings &AFormatSettings)/* overload */;
  }
}

#pragma option push -w-inl

#if !defined(_DELPHI_STRING_UNICODE)
inline AnsiString __fastcall IntToStr(bool value)
{
  return Sysutils::IntToStr(int(value));
}
inline AnsiString __fastcall IntToStr(unsigned int value)
{
  return Sysutils::IntToStr(int(value));
}
inline AnsiString __fastcall IntToStr(long value)
{
  return Sysutils::IntToStr(int(value));
}
inline AnsiString __fastcall IntToStr(unsigned long value)
{
  return Sysutils::IntToStr(int(value));
}
#endif

namespace System {
  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, bool src)
  {
    UnicodeString tmp;
    to_string(tmp, src);
    str = tmp;
  }

  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, char ch)
  {
    str = AnsiStringT<CP>::StringOfChar(ch);
  }

  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, signed char ch)
  {
    str = System::Sysutils::IntToStr(static_cast<signed int>(ch));
  }

  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, unsigned char ch)
  {
    str = System::Sysutils::UIntToStr(static_cast<unsigned int>(ch));
  }

  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, short src)
  {
    str = System::Sysutils::IntToStr(static_cast<signed int>(src));
  }

  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, unsigned short src)
  {
    str = System::Sysutils::UIntToStr(static_cast<unsigned int>(src));
  }

  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, int src)
  {
    str = System::Sysutils::IntToStr(src);
  }

  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, unsigned int src)
  {
    str = System::Sysutils::UIntToStr(src);
  }

  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, long src)
  {
    str = System::Sysutils::IntToStr(static_cast<__int64>(src));
  }

  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, unsigned long src)
  {
    str = System::Sysutils::UIntToStr(static_cast<unsigned __int64>(src));
  }

  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, long long src)
  {
    str = System::Sysutils::IntToStr(static_cast<__int64>(src));
  }

  // NOTE: No wchar_t variant, AnsiString::StringOfChar is char only

  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, unsigned long long src)
  {
    str = System::Sysutils::UIntToStr(static_cast<unsigned __int64>(src));
  }

  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, float src)
  {
    str = System::Sysutils::FloatToStr(src);
  }
  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, float src, const Sysutils::TFormatSettings &settings)
  {
    str = System::Sysutils::FloatToStr(src, settings);
  }

  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, double src)
  {
    str = System::Sysutils::FloatToStr(src);
  }
  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, double src, const Sysutils::TFormatSettings &settings)
  {
    str = System::Sysutils::FloatToStr(src, settings);
  }

  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, long double src)
  {
    str = System::Sysutils::FloatToStr(src);
  }
  template <unsigned short CP>
  void to_string(AnsiStringT<CP> &str, long double src, const Sysutils::TFormatSettings &settings)
  {
    str = System::Sysutils::FloatToStr(src, settings);
  }

  template <unsigned short CP>
  bool from_string(const AnsiStringT<CP> &str, bool &value)
  {
    // Creating an intermediate, allocating UnicodeString is sub-optimal!
    System::UnicodeString tmp = str;
    return from_string(tmp, value);
  }

  template <unsigned short CP>
  bool from_string(const AnsiStringT<CP> &str, Extended &value)
  {
    // Creating an intermediate, allocating UnicodeString is sub-optimal!
    System::UnicodeString tmp = str;
    return from_string(tmp, value);
  }
  template <unsigned short CP>
  bool from_string(const AnsiStringT<CP> &str, const Sysutils::TFormatSettings &settings, Extended &value)
  {
    // Creating an intermediate, allocating UnicodeString is sub-optimal!
    System::UnicodeString tmp = str;
    return from_string(tmp, settings, value);
  }

  template <unsigned short CP>
  bool from_string(const AnsiStringT<CP> &str, int &value)
  {
    // Creating an intermediate, allocating UnicodeString is sub-optimal!
    System::UnicodeString tmp = str;
    return from_string(tmp, value);
  }

  template <unsigned short CP>
  bool from_string(const AnsiStringT<CP> &str, long long &value)
  {
    // Creating an intermediate, allocating UnicodeString is sub-optimal!
    System::UnicodeString tmp = str;
    return from_string(tmp, value);
  }

  template <unsigned short CP>
  bool from_string(const AnsiStringT<CP> &str, unsigned int &value)
  {
    // Creating an intermediate, allocating UnicodeString is sub-optimal!
    System::UnicodeString tmp = str;
    return from_string(tmp, value);
  }

  template <unsigned short CP>
  bool from_string(const AnsiStringT<CP> &str, unsigned long long &value)
  {
    // Creating an intermediate, allocating UnicodeString is sub-optimal!
    System::UnicodeString tmp = str;
    return from_string(tmp, value);
  }
}

#pragma option pop

#pragma delphiheader end.

#endif  // DSTRING_H


