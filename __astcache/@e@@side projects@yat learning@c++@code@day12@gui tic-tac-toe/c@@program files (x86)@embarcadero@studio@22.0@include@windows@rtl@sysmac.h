// -----------------------------------------------------------------------------------
// SYSMAC.H: Generic macros and forward declarations of core Delphi types
//
// $Rev: 111713 $
//
// Copyright(c) 1995-2011 Embarcadero Technologies, Inc.
// -----------------------------------------------------------------------------------
#if !defined(SYSMAC_H)
#define SYSMAC_H

#if !defined(SystemHPP)
#error Do not include this file directly.  Include 'System.hpp'.
#endif
#if !defined(__cplusplus)
#error sysmac.h cannot be used in C mode - this header requires C++!
#endif


#if !defined(__RTL_BUILD__) && !defined(NO_LINK_VCLE) && !defined(NO_LINK_RTLE)
  #if defined(_WIN32) && !defined(_WIN64)
    #if defined(__clang__)
      #pragma comment(lib, "rtle.lib")
    #else
      #pragma comment(lib, "vcle.lib")
    #endif
  #endif
  #if defined(__APPLE__)
    #if defined(__x86_64__) && __x86_64__
      #pragma comment(lib, "rtle")
    #else
      #pragma comment(lib, "rtle.a")
    #endif
  #endif
  #if defined(_WIN64)
    #pragma link "rtle.a"
    #if defined(NO_STRICT)
      // Usage of NO_STRICT will result in unresolved symbols due to mangling mismatches
      // See http://docwiki.embarcadero.com/RADStudio/en/C%2B%2B_Applications_Use_STRICT_Type_Checking
      #error "NO_STRICT was defined. Usage of the Delphi runtime requires STRICT mangling"
      #error "Please see 'http://docwiki.embarcadero.com/RADStudio/en/C%2B%2B_Applications_Use_STRICT_Type_Checking'"
    #endif
  #endif
#endif

#if defined(__BORLANDC__) && (__BORLANDC__ < 0x500)
#error BCW 5.0 or greater required
#endif

// Starting with v2011 STRINGCHECKS are disabled.
// See http://blogs.embarcadero.com/abauer/2010/01/26/38908
#define _STRINGCHECKS_OFF


#if !defined(_WIN32)

  #if defined(__APPLE__)
    #if !defined(__clang__)
      // Header /usr/include/TargetConditionals.h expects a TARGET_CPU to be defined
      // (Should be defined by RTL headers ??)
      #define TARGET_CPU_X86 1
      #define TARGET_OS_MAC  1

      // To circumvent that header - as it causes us grief
      // (Should be handled by RTL headers ??)
      #define _OS_OSBYTEORDERMACHINE_H
      #define OS_INLINE inline

      // On Mac /usr/include\i386/_types.h will define wint_t before _stddef.h causing
      // errors when the latter assumes wint_t is in the std namespace
      // (Should be handled by RTL headers ??)
      #include <_stddef.h>
    #else
      #include "TargetConditionals.h"
    #endif

    #if   TARGET_OS_IPHONE
      #include <stdio.h>
    #elif TARGET_IPHONE_SIMULATOR
      #include <stdio.h>
    #endif

    // The Delphi RTL requires CoreFoundation and CoreServices
    #include <CoreFoundation/CoreFoundation.h>

    #if !defined(TARGET_OS_IPHONE) && !defined(TARGET_IPHONE_SIMULATOR)
      #pragma option push -w-8017  // Workaround redefinition of NSEC_PER_USEC and USEC_PER_SEC
      #include <CoreServices/CoreServices.h>
      #pragma option pop
      #include <Carbon/Carbon.h>
    #endif
  #endif
#endif

// Macros used by Designer
#if defined(_WIN32)
  #define _PLAT_MSWINDOWS
#elif TARGET_OS_IPHONE
  #define _PLAT_IOS
  #if defined(__aarch64__)
    #define _PLAT_IOS64
  #elif defined(__arm__)
    #define _PLAT_IOS32
  #endif
#elif TARGET_OS_MAC
  #define _PLAT_MACOS
  #if defined(__x86_64) || defined(__amd64__) || defined(__aarch64__)
    #define _PLAT_MACOS64
  #else
    #define _PLAT_MACOS32
  #endif
#elif defined(__ANDROID__)
  #define _PLAT_ANDROID
  #if defined(__x86_64) || defined(__amd64__) || defined(__aarch64__)
    #define _PLAT_ANDROID64
  #else
    #define _PLAT_ANDROID32
  #endif
#elif defined(__linux__) && defined(__x86_64__)
  #define _PLAT_LINUX64
#else
  #error "Unknown Platform!"
#endif

#include <stdint.h>

#if defined(__clang__)
  //#define NO_DI_DISAMBIGUATE_RELEASE //FIXME
#endif

#ifndef _Windows
  #include <signal.h> // For pthread_attr_t
  #include <fcntl.h>
  #include <string.h>
#endif


#if defined(_WIN32)
  // !! This is on now (Oops!)// NOTE: CLANG supports this as an ms-extension
  #pragma anon_struct on      // support anonymous structs (within unions)

  // Bring in Interface definitions - Supply what might be missing in LEAN_AND_MEAN mode
  //
  #if !defined(BEGIN_INTERFACE)       // If OBJBASE.H has not been seen yet!
  # define BEGIN_INTERFACE
  #endif
  #if !defined(END_INTERFACE)         // If OBJBASE.H has not been seen yet!
  # define END_INTERFACE
  #endif
  #if !defined(WINOLEAPI)             // If OBJBASE.H has not been seen yet!
  # define WINOLEAPI        EXTERN_C DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
  #endif
  #if !defined(HUGEP)                 // If OBJBASE.H has not been seen yet!
  # define HUGEP
  #endif
  #if !defined(DECLARE_INTERFACE_IID_)
  # define DECLARE_INTERFACE_IID_(iface, baseiface, iid)   interface DECLSPEC_UUID(iid) DECLSPEC_NOVTABLE iface : public baseiface
  #endif

  #include <windows.h>
  #include <delayimp.h>


  #if !defined(_BASETYPS_H_)
  #include <basetyps.h>
  #endif
#endif // _WIN32

#ifdef __linux__
  #define _GNU_SOURCE 1
  #include <pthread.h>
  #include <semaphore.h>
#endif

#define __safecall __stdcall
#define __interface struct
#define __dispinterface class

#if !defined(NO_MANAGED_INTERFACE_OPERATORS)
#define MANAGED_INTERFACE_OPERATORS
#endif

#if !defined(__UUID_SUPPORT__) && !defined(NO_UUID_SUPPORT_CHECK) && !defined(__clang__) // FIXME
  #error "System.hpp/sysmac.h and related headers need __declspec(uuid(..)) and __uuidof support"
#endif

#define INTERFACE_UUID(guid) __declspec(uuid(guid))  // For associating a GUID with a type


// Windows types needed for analogous pascal constructs
#if !defined(_WIN32) || defined(SYSMAC_WINDOWS_TYPES)
  #if !defined(STDMETHODCALLTYPE)
    #define STDMETHODCALLTYPE __stdcall
  #endif

  struct _GUID
  {
    uint32_t Data1;
    uint16_t Data2;
    uint16_t Data3;
    uint8_t  Data4[8];

    bool operator ==(const _GUID& other) const
    {
      return memcmp(this, &other, sizeof(*this)) == 0;
    }
  };

  typedef _GUID GUID;
  typedef _GUID IID;
  typedef _GUID UUID;
#if defined(__APPLE__) && (defined(__arm__) || defined(__arm64__)) || defined(__ANDROID__) || defined(__linux__)
  // The Delphi RTL incorrectly relies on the fact that on Windows const of a
  // particular size and for certain calling convention are passed indirectly.
  // So const is used to describe the IID parameter of QueryInterface. On iOS,
  // this causes a problem as dcciosarm does not mangle the parameter as ref.
  // This leaves C++ with a problem:
  //  # Use IID& and have mangling mismatches with Delphi, or
  //  # Use plain IID to avoid mangling mismatches but have ABI incompatibility
  //    with Windows code.
  // As a way to ease the problem, we will define REFIID as a non-ref _GUID
  // to ease the transition. And ask the Delphi RTL team to use [ref] and not
  // rely on Windows-specific internal details of const.
  typedef const _GUID  REFIID;
#else
  typedef const _GUID& REFIID;
#endif

 #ifndef _HRESULT_DEFINED
  //TODO: HRESULT is a strong alias with NEXTGEN
  typedef uint32_t HRESULT;
  #define _HRESULT_DEFINED
 #endif

  // typedefs that come from windef.h on Windows but are used by IDE's Code Manager
  // So in order to support existing event signatures on OS/X, we'll define these
 #ifndef _BYTE_DEFINED
  #define _BYTE_DEFINED
  typedef unsigned char   BYTE;
 #endif
 #ifndef _WORD_DEFINED
  #define _WORD_DEFINED
  typedef unsigned short  WORD;
 #endif
 #ifndef _DWORD_DEFINED
  #define _DWORD_DEFINED
  #if defined(__LP64__)
  typedef unsigned        DWORD;
  #else
  typedef unsigned long   DWORD;
  #endif
 #endif
 #ifndef _ULONG_DEFINED
  #define _ULONG_DEFINED
  typedef unsigned int    ULONG;
 #endif
 #ifndef _LONG_DEFINED
  #define _LONG_DEFINED
  typedef int             LONG;
 #endif
 #ifndef _UINT_DEFINED
  #define _UINT_DEFINED
  typedef unsigned int    UINT;
 #endif
 #ifndef _BOOL_DEFINED
  #define _BOOL_DEFINED
  typedef int             BOOL;
 #endif

  struct POINT
  {
    int32_t x;
    int32_t y;
  };

  struct POINTF
  {
    float x;
    float y;
  };

  struct RECT
  {
    int32_t left;
    int32_t top;
    int32_t right;
    int32_t bottom;
  };

  struct tagSIZE
  {
    int32_t cx;
    int32_t cy;
  };

  struct tagVECTOR{
    union{
      struct{
        float x;
        float y;
        float w;
      };
      float v[3];
    };
  };

  struct tagMATRIX{
    union{
      struct{
        float m11, m12, m13;
        float m21, m22, m23;
        float m31, m32, m33;
      };
      tagVECTOR m[3];
    };
  };

  struct tagPOINT3D{
    float x;
    float y;
    float z;
  };

  struct tagVECTOR3D{
    union{
      struct{
        float x;
        float y;
        float z;
        float w;
      };
      float v[4];
    };
  };

  struct tagMATRIX3D{
    union{
      struct{
        float m11, m12, m13, m14;
        float m21, m22, m23, m24;
        float m31, m32, m33, m34;
        float m41, m42, m43, m44;
      };
      tagVECTOR3D m[4];
    };
  };

  // Intentionally left in the global namespace
  struct INTERFACE_UUID("00000000-0000-0000-C000-000000000046") IUnknown {
    virtual HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void ** ppvObject) = 0;
    virtual ULONG   STDMETHODCALLTYPE AddRef() = 0;
    virtual ULONG   STDMETHODCALLTYPE Release() = 0;
  };
  typedef IUnknown* LPUNKNOWN;
  #define __unknwn_h__ __FILE__

#endif // !_WIN32 || SYSMAC_WINDOWS_TYPES

#if defined(_WIN64)
  #define PACKAGE            __declspec(package)
  #define DELPHI_PACKAGE     __declspec(package)  // Implemented in Delphi Package
#elif defined(TARGET_OS_IPHONE) || defined(TARGET_IPHONE_SIMULATOR) || defined(__ANDROID__)
  #define PACKAGE
  #define DELPHI_PACKAGE     __declspec(package)  // Implemented in Delphi Package
#else
  #define PACKAGE            __declspec(package)
  #define DELPHI_PACKAGE     __declspec(package)  // Implemented in Delphi Package
#endif

#ifdef __linux__
  #undef PACKAGE
  #define PACKAGE
#endif

#if defined(TARGET_OS_IPHONE) || defined(TARGET_IPHONE_SIMULATOR) || defined(__ANDROID__) || defined(__linux__)
  #define DELPHIRETURN         __declspec(delphireturn)                  // Uses Delphi's return semantic
  #define PASCALIMPLEMENTATION __declspec(pascalimplementation)          // Implemented in Delphi - no code should be generated
  #define DELPHICLASS          __declspec(delphiclass)                   // Delphi-style class (derives from TObject)
  #define _DELPHICLASS_TOBJECT __declspec(delphiclass, pascalimplementation)
#else
  #define DELPHIRETURN         __declspec(delphireturn, package)         // Uses Delphi's return semantic; may reside in a package
  #define PASCALIMPLEMENTATION __declspec(pascalimplementation, package) // Implemented in Delphi - no code should be generated; may reside in a package
  #define DELPHICLASS          __declspec(delphiclass, package)          // Delphi-style class (derives from TObject); may reside in a package
  #define _DELPHICLASS_TOBJECT __declspec(delphiclass, pascalimplementation, package)
#endif

#define DELPHIINTERFACE

#define DYNAMIC              __declspec(dynamic)                       // For compatibility with Delphi's old virtual mechanism
// Delphi threadvar
#if defined(__clang__)
  #if defined(_WIN64) || __has_feature(tls)
    #define DELPHITHREAD     __declspec(thread)
  #else
    #define DELPHITHREAD
  #endif
#else
  #define DELPHITHREAD      __declspec(thread)
#endif

// Macros specifically for C++ emulation of Delphi language features
// Used for RTL functionality which should not be packaged.
//
#define RTL_DELPHIRETURN     __declspec(delphireturn)           // Uses Delphi's return semantic (not in package)
#define RTL_DELPHICLASS      __declspec(delphiclass)            // Implemented in Delphi

#define HIDESBASEDYNAMIC     __declspec(hidesbase, dynamic)     // For compatibility with Delphi
#define HIDESBASE            __declspec(hidesbase)              // For compatibility with Delphi

#if !defined(MESSAGE)
#define MESSAGE
#endif

#if !defined(__typeinfo)          // Use with TObject-derived classes
  #if !defined(BCC32_HAS_CLASSMETHODS)
    #define __typeinfo(type)  (PTypeInfo)TObject::ClassInfo(__classid(type))
  #else
    #define __typeinfo(type)  (PTypeInfo)type::ClassInfo()
  #endif
#endif
#if !defined(__arrayTypeinfo)     // Use with DynamicArray<T> types
#define __arrayTypeinfo(type)  __delphirtti(type)
#endif
#if !defined(__interfaceTypeinfo) // Use with interfaces that have DECLSPEC_RTTI
#define __interfaceTypeinfo(type)  __delphirtti(type)
#endif

// Noop Macro to tag open array parameters: used by IDE's Code Manager
#define _ARRAYOF

#if (__BORLANDC__ < 0x0560)
#define DECLSPEC_DRTTI
#else
#define DECLSPEC_DRTTI       __declspec(delphirtti)   // Emit interface RTTI (or when enabled on a __declspec(delphiclass)
                                                      // type, generate rich method RTTI for public & published method
#endif

#ifdef _WIN64
 #if defined(USEPACKAGES)
  #define DECLSPEC_DRECORD   __declspec(delphirecord, dllimport)
 #else
  #define DECLSPEC_DRECORD   __declspec(delphirecord)
 #endif
 #define DECLSPEC_DENUM      __declspec(delphienum)
#else
 #if defined(__arm__) || defined(__arm64__)
  #define DECLSPEC_DRECORD    __declspec(delphirecord) // VALIDATE
  #define DECLSPEC_DENUM
 #else
  #define DECLSPEC_DRECORD    __declspec(delphirecord, dllimport)
  #define DECLSPEC_DENUM
 #endif
#endif

#if defined(_DELPHI_AUTOREFCOUNT)
 #define DELPHI_AUTOREFCOUNT
#endif

// Delphi Mobile/NextGen uses 0-based strings. However, C++
// code may define _DELPHI_STRING_ONE_BASED when porting/using
// Desktop code in a Mobile project to keep 1-based indices
#if defined(_DELPHI_NEXTGEN)
  #if !defined(_DELPHI_STRING_ONE_BASED)
    #define _DELPHI_STRING_ZERO_BASED
  #endif
#else
  #if !defined(_DELPHI_STRING_ZERO_BASED)
    #define _DELPHI_STRING_ONE_BASED
  #endif
#endif

// CLANG vs. BCC attributes
#if !defined(__clang__)
#define _FINAL_ATTRIBUTE              [[final]]
#define _DEPRECATED_ATTRIBUTE0        [[deprecated]]
#define _DEPRECATED_ATTRIBUTE1(msg)   [[deprecated]]  // Ignore message as bcc's implementation is capped:(
#define _DEPRECATED_ATTRIBUTE2        [[deprecated]]
#define _DEPRECATED_ATTRIBUTE3(msg)   [[deprecated]]  // Ignore message as bcc's implementation is capped:(
#define _ANNOT_ATTR_NC
#define _ALWAYS_INLINE
#define _DRECORD_ALIGNAS(x)
#define _ALIGNAS(x)                   // Ignored. Use _ALIGN_ATTRIBUTE
#define _ALIGN_ATTRIBUTE(x)           // should use [[align(x)]] or __attribute__((__align__(x)))
#else
#define _FINAL_ATTRIBUTE
#define _DEPRECATED_ATTRIBUTE0        // Could use __attribute__((deprecated))
#define _DEPRECATED_ATTRIBUTE1(msg)   // Could use __attribute__((deprecated( msg )))
#define _DEPRECATED_ATTRIBUTE2        __attribute__((deprecated))
#define _DEPRECATED_ATTRIBUTE3(msg)   __attribute__((deprecated( msg )))
#define _ANNOT_ATTR_NC                __attribute__((annotate("nc")))
#define _ALWAYS_INLINE                __attribute__((__always_inline__))
#define _DRECORD_ALIGNAS(x)           alignas(x)
#define _ALIGNAS(x)                   alignas(x)
#define _ALIGN_ATTRIBUTE(x)           // Ignored. Use _ALIGNAS
#endif

#define BEGIN_MESSAGE_MAP   virtual void __fastcall Dispatch(void *Message) \
        {                                           \
          switch  (((PMessage)Message)->Msg)        \
          {

#define VCL_MESSAGE_HANDLER(msg,type,meth)          \
          case    msg:                              \
            meth(*((type *)Message));               \
            break;

// NOTE: ATL defines a MESSAGE_HANDLER macro which conflicts with VCL's macro. The
//       VCL macro has been renamed to VCL_MESSAGE_HANDLER. If you are not using ATL,
//       MESSAGE_HANDLER is defined as in previous versions of BCB.
//
#if !defined(USING_ATL) && !defined(USING_ATLVCL) && !defined(INC_ATL_HEADERS)
#define MESSAGE_HANDLER  VCL_MESSAGE_HANDLER
#endif // ATL_COMPAT

#define END_MESSAGE_MAP(base)           default:    \
                        base::Dispatch(Message);    \
                        break;                      \
          }                                         \
        }

#if defined(_WIN32) && !defined(__unknwn_h__)
#include <unknwn.h>
#endif

#if !defined(__clang__)
 #if sizeof(wchar_t) == 2
  #define WIDECHAR_IS_WCHAR
 #elif sizeof(wchar_t) == 4
  #define WIDECHAR_IS_CHAR16
 #else
  #error unsupported wchar_t
 #endif
#else
 #if defined(_WIN32)
  #define WIDECHAR_IS_WCHAR
 #elif defined(__APPLE__) || defined(__ANDROID__) || defined(__linux__)
  #define WIDECHAR_IS_CHAR16
 #else
  #error unsupported wchar_t
 #endif
#endif

namespace System
{
    class _DELPHICLASS_TOBJECT TObject;
    class DELPHICLASS TInterfacedObject;

    class   TMetaClass;
    typedef TMetaClass* TClass;

    template <typename ALIAS_T>
    class DelphiMetaClass
    {
    protected:
      typedef DelphiMetaClass<ALIAS_T> DelphiMetaType;
      DelphiMetaClass()
      {}
      DelphiMetaClass(System::TMetaClass* p) : data(p)
      {}
    public:
      operator System::TMetaClass* () {
        return this->data;
      }
      System::TMetaClass* operator->() {
        return this->data;
      }
    private:
      System::TMetaClass* data;
    };

// #if !defined(__clang__) || defined(_WIN32) // RS-111161 investigation
#if !defined(__clang__)
 #define _DECLARE_METACLASS(Base, Meta) typedef Base Meta;
#else
 #define _DECLARE_METACLASS(Base, Meta)                  \
  class Meta : public System::DelphiMetaClass<Meta> {    \
  public:                                                \
    Meta()                     : DelphiMetaType() {}     \
    Meta(System::TMetaClass* p): DelphiMetaType(p){}     \
  }
#endif

#if defined(DELPHI_AUTOREFCOUNT)
  #ifndef __clang__
    #define __weak
    #define __unsafe
    #define __strong
  #else
    #define __unsafe  __attribute__((borland_arc(borland_unsafe)))
  #endif
#else
  #define __weak
  #define __unsafe
  #define __strong
#endif

    class RTL_DELPHIRETURN AnsiStringBase;
    template <unsigned short CP> class RTL_DELPHIRETURN AnsiStringT;
    typedef  AnsiStringT<0> AnsiString;

  #if defined(_DELPHI_NEXTGEN) || !(defined(_PLAT_MSWINDOWS) || defined(_PLAT_MACOS32))
    // -----------------------------------------------------------------
    // Hack to match Delphi's mangling (see dstring.h for more details)
    // -----------------------------------------------------------------
    class   RawByteString; // Should really be AnsiStringT<65535>
    class   UTF8String;    // Should really be AnsiStringT<65001>
    typedef RawByteString* PRawByteString;
    typedef UTF8String*    PUTF8String;
  #endif

    class RTL_DELPHIRETURN WideString;
    class RTL_DELPHIRETURN UnicodeString;

    template <unsigned char sz> class SmallStringBase;
    template <unsigned char sz> class SmallString;

    class RTL_DELPHIRETURN CurrencyBase;
    class RTL_DELPHIRETURN Currency;

    class RTL_DELPHIRETURN OleVariant;
    class RTL_DELPHIRETURN Variant;

    struct PACKAGE TLibModule;
    struct PACKAGE TModuleUnloadRec;

    struct PACKAGE THeapStatus;
    struct PACKAGE TMemoryManager;
    struct PACKAGE TMemoryManagerEx;

    struct PACKAGE TVariantManager;
    /* class PACKAGE TDynArrayTypeInfo; */

    template<class T> class RTL_DELPHIRETURN DynamicArray;

    class RTL_DELPHIRETURN TDateTimeBase;
    class RTL_DELPHIRETURN TDateTime;

    struct        CompBase;
    struct        Comp;

    struct PACKAGE TLibModule;
    typedef TLibModule *PLibModule;

    struct PACKAGE TResStringRec;
    typedef TResStringRec *PResStringRec;

#if !defined(__clang__)
  //#define SET_BOUNDS_UNSIGNED_CHAR
#endif

#if defined(SET_BOUNDS_UNSIGNED_CHAR)
  #define _DELPHI_SET_CHAR(x)           x
  #define _DELPHI_SET_ENUMERATOR(x)     static_cast<unsigned char>(x)
#else
  #define _DELPHI_SET_CHAR(x)           char(x)
  #define _DELPHI_SET_ENUMERATOR(x)     x
#endif

    template<class T, unsigned char minEl, unsigned char maxEl> class RTL_DELPHIRETURN SetBase;
#if defined(__clang__) || !defined(SET_BOUNDS_UNSIGNED_CHAR)
    template<class T, T minEl, T maxEl> class RTL_DELPHIRETURN Set;
#else
    template<class T, unsigned char minEl, unsigned char maxEl> class RTL_DELPHIRETURN Set;
#endif

    // Helper template used for when Delphi functions
    //  - return static arrays
    //  - expect static array parameters
    // The HPP generator uses StaticArray<type, size> in these cases
    // since C++ decays array parameters (hence would break on overload)
    // and cannot have a return type of type array.
    template <typename T, int SIZE> struct StaticArray
    {
      T Data[SIZE];
      int Size() const { return SIZE; };

      const T& operator[](int index) const { return Data[index]; }
      T& operator[](int index) { return Data[index]; }

      operator const T*() const { return Data; }
      operator T*() { return Data; }

      // std::array-like members
      typedef       T            value_type;
      typedef       value_type&  reference;
      typedef       value_type*  pointer;
      typedef const value_type*  const_pointer;
      typedef       int          size_type;

      T*            data()  { return &Data[0]; }
      const T*      data() const { return &Data[0]; }

      size_type     size() const { return SIZE; }

    };

    // The following typedefs are aliases to use the Delphi naming convention
    // such as Boolean, Integer, UInt64, Cardinal, etc

    // NOTE: OSX' "/usr/include/MacTypes.h" declares Boolean as 'unsigned char' :(
#ifndef NO_SYSTEM_BOOLEAN
    typedef bool                 Boolean;          //
#endif
    typedef int                  Integer;          // -2147483648..2147483647
#if defined(WIDECHAR_IS_WCHAR)
    typedef wchar_t              WideChar;         // Unicode character
#else
    typedef char16_t             WideChar;
#endif

#if 1
    // Shortint is a source of confusion for C++ where Short implies, well, short!!
    typedef signed char          Shortint _DEPRECATED_ATTRIBUTE0;         // -128..127
    typedef signed char          ShortInt _DEPRECATED_ATTRIBUTE0;         // -128..127
    //typedef Shortint*            PShortint;        //
#endif
    typedef signed char          Int8;             // -128..127
    typedef short                Smallint;         // -32768..32767
    typedef unsigned char        Byte;             // 0..255
    typedef unsigned short       Word;             // 0..65535
    typedef unsigned long        DWord;            // 0..4294967295
#if defined(_PLAT_IOS64) || defined(_PLAT_LINUX64)
    typedef unsigned long        LongWord;         // 0..18446744073709551615
#elif defined(_PLAT_IOS32)
    typedef unsigned /*long*/    LongWord;         // 0..4294967295
#else
    typedef unsigned             LongWord;         // 0..4294967295
#endif
    typedef long long            Int64;            // -9,223,372,036,854,775,807..9,223,372,036,854,775,807
    typedef unsigned long long   UInt64;           // 0..18,446,744,073,709,551,615
    typedef void*                Pointer;          //
    typedef Pointer*             PPointer;         //
    typedef char                 AnsiChar;         //
#if defined(_PLAT_IOS64) || defined(_PLAT_LINUX64)
    typedef long                 Longint;          // -9223372036854775808..9223372036854775807
#elif defined(_PLAT_IOS32)
    // Delphi mangles 'Longint' as an 'Integer' in 32-bit :(
    typedef int /*long*/         Longint;          // -2147483648..2147483647
#else
    typedef int                  Longint;          // -2147483648..2147483647
#endif
    typedef unsigned int         Cardinal;         // 0..4294967295
    typedef long double          Extended;         // 10 byte real
    typedef float                Single;           // 4 byte real
    typedef Single*              PSingle;          //
    typedef double               Double;           // 8 byte real
    typedef char* const          Openstring;       // D16 string/D32 shortstring formalparm
    typedef void*                file;             //
    // Match System's TTextRec 730 bytes (754 bytes for x64)
    // NOTE: It's opaque to C++. Declared solely for layout purposes
  #if defined(_PLAT_IOS64) || defined(_WIN64) || defined(_PLAT_LINUX64)
    // Size:754
    typedef char TextFile[754] __attribute__((__align__(8)));
  #else
    // Size:730
    #ifdef __clang__
    typedef char TextFile[730] __attribute__((__align__(4)));
    #else
    #pragma pack(push,1)
    typedef struct {
      char  __internal[730];
    } TextFile;
    #pragma pack(pop)
    #endif
  #endif
    typedef char*                PAnsiChar;        //
    typedef WideChar*            PWideChar;        //
    // Uppercase 'C' 'Char' maps to Delphi's native 'char'
    // type for backward compatibility. To avoid confusion
    // of 'char' and 'Char', it's best to use _DCHAR
#if defined(_DELPHI_STRING_UNICODE)
    typedef WideChar             Char;
    typedef PWideChar            PChar;            //
    typedef WideChar             _DCHAR;
  #if defined(WIDECHAR_IS_WCHAR)
    #define _D(__s)              L ## __s
  #else
    #define _D(__s)              u ## __s
  #endif
#else
    typedef char                 Char;             // 0..255
    typedef PAnsiChar            PChar;            //
    typedef char                 _DCHAR;
    #define _D(__s)              __s
#endif

    // Forward ref. for QI of IInterface
    template <class T> class RTL_DELPHIRETURN DelphiInterface;

#if (defined(_DELPHI_NEXTGEN) && !defined(_WIN32)) || !(defined(_PLAT_MSWINDOWS) || defined(_PLAT_MACOS32))
    static constexpr System::Int8 S_OK = System::Int8(0x0);
    static constexpr System::Int8 S_FALSE = System::Int8(0x1);
#endif

    // NOTE: IInterface is really IUnknown - with the same UUID - resolves the mangling issues
    // we've been having in COM stuff
    __interface INTERFACE_UUID("00000000-0000-0000-C000-000000000046") IInterface : public IUnknown
    {
    public:
      /** Template function to ease querying for a smart-Interface-object */
      template <typename T>
      bool /*__stdcall*/ Supports(DelphiInterface<T>& smartIntf)
      {
        return QueryInterface(__uuidof(T), reinterpret_cast<void**>(static_cast<T**>(&smartIntf))) == S_OK;
      }
    };

    // Base type from which SOAP remotable interfaces derive.
    // It triggers the compiler to generate RTTI for the
    // methods and their parameters. This information is then
    // used to expose the interface as SOAP ports/operations.
    //
    // NOTE: IInvokable is really IInterface/IUnknown - with the same UUID - with __declspec(delphirtti)
    __interface INTERFACE_UUID("00000000-0000-0000-C000-000000000046") DECLSPEC_DRTTI IInvokable : public IInterface
    {};

    // postfix ++ --
#define _ALIAST_FRIEND_OPERATORS1(Base, Alias)                                 \
    friend Alias operator++(Alias &p, int)                                     \
    {                                                                          \
      Alias result(p.data);                                                    \
      p.data++;                                                                \
      return result;                                                           \
    }                                                                          \
    friend Alias operator--(Alias &p, int)                                     \
    {                                                                          \
      Alias result(p.data);                                                    \
      p.data--;                                                                \
      return result;                                                           \
    }
    // unary (prefix) ++ -- ~ !
#define _ALIAST_FRIEND_OPERATORS2(Base, Alias)                                 \
    friend Alias operator++(Alias &p)                                          \
    {                                                                          \
      p.data++;                                                                \
      return p;                                                                \
    }                                                                          \
    friend Alias operator--(Alias &p)                                          \
    {                                                                          \
      p.data--;                                                                \
      return p;                                                                \
    }                                                                          \
    friend Alias operator~(const Alias &p)                                     \
    {                                                                          \
      return Alias(~p.data);                                                   \
    }                                                                          \
    friend Alias operator!(const Alias &p)                                     \
    {                                                                          \
      return Alias(!p.data);                                                   \
    }
    // &
#define _ALIAST_FRIEND_OPERATORS3(Base, Alias)                                 \
    friend const Base* operator&(const Alias &p)                               \
    {                                                                          \
      return &p.data;                                                          \
    }                                                                          \
    friend Base* operator&(Alias &p)                                           \
    {                                                                          \
      return &p.data;                                                          \
    }
    // multiplicative * / %
#define _ALIAST_FRIEND_OPERATORS4(Base, Alias)                                 \
    friend Alias operator*(const Alias &p, const Alias &p2)                    \
    {                                                                          \
      return Alias(p.data * p2.data);                                          \
    }                                                                          \
    friend Alias operator*(const Alias &p, const Base& v)                      \
    {                                                                          \
      return Alias(p.data * v);                                                \
    }                                                                          \
    friend Alias operator*(const Base& v, const Alias &p)                      \
    {                                                                          \
      return Alias(v * p.data);                                                \
    }                                                                          \
    friend Alias operator/(const Alias &p, const Alias &p2)                    \
    {                                                                          \
      return Alias(p.data / p2.data);                                          \
    }                                                                          \
    friend Alias operator/(const Alias &p, const Base& v)                      \
    {                                                                          \
      return Alias(p.data / v);                                                \
    }                                                                          \
    friend Alias operator/(const Base& v, const Alias &p)                      \
    {                                                                          \
      return Alias(v / p.data);                                                \
    }                                                                          \
    friend Alias operator%(const Alias &p, const Alias &p2)                    \
    {                                                                          \
      return Alias(p.data % p2.data);                                          \
    }                                                                          \
    friend Alias operator%(const Alias &p, const Base& v)                      \
    {                                                                          \
      return Alias(p.data % v);                                                \
    }                                                                          \
    friend Alias operator%(const Base& v, const Alias &p)                      \
    {                                                                          \
      return Alias(v % p.data);                                                \
    }
    // additive + -
#define _ALIAST_FRIEND_OPERATORS5(Base, Alias)                                 \
    friend Alias operator+(const Alias &p, const Alias &p2)                    \
    {                                                                          \
      return Alias(p.data + p2.data);                                          \
    }                                                                          \
    friend Alias operator+(const Alias &p, const Base& v)                      \
    {                                                                          \
      return Alias(p.data + v);                                                \
    }                                                                          \
    friend Alias operator+(const Base& v, const Alias &p)                      \
    {                                                                          \
      return Alias(v + p.data);                                                \
    }                                                                          \
    friend Alias operator-(const Alias &p, const Alias &p2)                    \
    {                                                                          \
      return Alias(p.data - p2.data);                                          \
    }                                                                          \
    friend Alias operator-(const Alias &p, const Base& v)                      \
    {                                                                          \
      return Alias(p.data - v);                                                \
    }                                                                          \
    friend Alias operator-(const Base& v, const Alias &p)                      \
    {                                                                          \
      return Alias(v - p.data);                                                \
    }
    // shift << >>
#define _ALIAST_FRIEND_OPERATORS6(Base, Alias)                                 \
    friend Alias operator>>(const Alias &p, const Alias &p2)                   \
    {                                                                          \
      return Alias(p.data >> p2.data);                                         \
    }                                                                          \
    friend Alias operator>>(const Alias &p, const Base& v)                     \
    {                                                                          \
      return Alias(p.data >> v);                                               \
    }                                                                          \
    friend Alias operator>>(const Base& v, const Alias &p)                     \
    {                                                                          \
      return Alias(v >> p.data);                                               \
    }                                                                          \
    friend Alias operator<<(const Alias &p, const Alias &p2)                   \
    {                                                                          \
      return Alias(p.data << p2.data);                                         \
    }                                                                          \
    friend Alias operator<<(const Alias &p, const Base& v)                     \
    {                                                                          \
      return Alias(p.data << v);                                               \
    }                                                                          \
    friend Alias operator<<(const Base& v, const Alias &p)                     \
    {                                                                          \
      return Alias(v << p.data);                                               \
    }
    // relational < > <= >=
#define _ALIAST_FRIEND_OPERATORS7(Base, Alias)                                 \
    friend bool operator<(const Alias &p, const Alias &p2)                     \
    {                                                                          \
      return (p.data < p2.data);                                               \
    }                                                                          \
    friend bool operator<(const Alias &p, const Base& v)                       \
    {                                                                          \
      return (p.data < v);                                                     \
    }                                                                          \
    friend bool operator<(const Base& v, const Alias &p)                       \
    {                                                                          \
      return (v < p.data);                                                     \
    }                                                                          \
    friend bool operator>(const Alias &p, const Alias &p2)                     \
    {                                                                          \
      return (p.data > p2.data);                                               \
    }                                                                          \
    friend bool operator>(const Alias &p, const Base& v)                       \
    {                                                                          \
      return (p.data > v);                                                     \
    }                                                                          \
    friend bool operator>(const Base& v, const Alias &p)                       \
    {                                                                          \
      return (v > p.data);                                                     \
    }                                                                          \
    friend bool operator<=(const Alias &p, const Alias &p2)                    \
    {                                                                          \
      return (p.data <= p2.data);                                              \
    }                                                                          \
    friend bool operator<=(const Alias &p, const Base& v)                      \
    {                                                                          \
      return (p.data <= v);                                                    \
    }                                                                          \
    friend bool operator<=(const Base& v, const Alias &p)                      \
    {                                                                          \
      return (v <= p.data);                                                    \
    }                                                                          \
    friend bool operator>=(const Alias &p, const Alias &p2)                    \
    {                                                                          \
      return (p.data >= p2.data);                                              \
    }                                                                          \
    friend bool operator>=(const Alias &p, const Base& v)                      \
    {                                                                          \
      return (p.data >= v);                                                    \
    }                                                                          \
    friend bool operator>=(const Base& v, const Alias &p)                      \
    {                                                                          \
      return (v >= p.data);                                                    \
    }
    // equality == !=
#define _ALIAST_FRIEND_OPERATORS8(Base, Alias)                                 \
    friend bool operator==(const Alias &p, const Alias &p2)                    \
    {                                                                          \
      return (p.data == p2.data);                                              \
    }                                                                          \
    friend bool operator==(const Alias &p, const Base& v)                      \
    {                                                                          \
      return (p.data == v);                                                    \
    }                                                                          \
    friend bool operator==(const Base& v, const Alias &p)                      \
    {                                                                          \
      return (v == p.data);                                                    \
    }                                                                          \
    friend bool operator!=(const Alias &p, const Alias &p2)                    \
    {                                                                          \
      return (p.data != p2.data);                                              \
    }                                                                          \
    friend bool operator!=(const Alias &p, const Base& v)                      \
    {                                                                          \
      return (p.data != v);                                                    \
    }                                                                          \
    friend bool operator!=(const Base& v, const Alias &p)                      \
    {                                                                          \
      return (v != p.data);                                                    \
    }
    // bitwise AND &
#define _ALIAST_FRIEND_OPERATORS9(Base, Alias)                                 \
    friend Alias operator&(const Alias &p, const Alias &p2)                    \
    {                                                                          \
      return Alias(p.data & p2.data);                                          \
    }                                                                          \
    friend Alias operator&(const Alias &p, const Base& v)                      \
    {                                                                          \
      return Alias(p.data & v);                                                \
    }                                                                          \
    friend Alias operator&(const Base& v, const Alias &p)                      \
    {                                                                          \
      return Alias(v & p.data);                                                \
    }                                                                          \
    // bitwise XOR ^
#define _ALIAST_FRIEND_OPERATORS10(Base, Alias)                                \
    friend Alias operator^(const Alias &p, const Alias &p2)                    \
    {                                                                          \
      return Alias(p.data ^ p2.data);                                          \
    }                                                                          \
    friend Alias operator^(const Alias &p, const Base& v)                      \
    {                                                                          \
      return Alias(p.data ^ v);                                                \
    }                                                                          \
    friend Alias operator^(const Base& v, const Alias &p)                      \
    {                                                                          \
      return Alias(v ^ p.data);                                                \
    }                                                                          \
    // bitwise OR |
#define _ALIAST_FRIEND_OPERATORS11(Base, Alias)                                \
    friend Alias operator|(const Alias &p, const Alias &p2)                    \
    {                                                                          \
      return Alias(p.data | p2.data);                                          \
    }                                                                          \
    friend Alias operator|(const Alias &p, const Base& v)                      \
    {                                                                          \
      return Alias(p.data | v);                                                \
    }                                                                          \
    friend Alias operator|(const Base& v, const Alias &p)                      \
    {                                                                          \
      return Alias(v | p.data);                                                \
    }
    // assignment *= /= %= += -= >>= <<= &= ^= |=
#define _ALIAST_FRIEND_OPERATORS12(Base, Alias)                                \
    friend const Alias& operator*=(Alias &p, const Alias &p2)                  \
    {                                                                          \
      p.data *= p2.data;                                                       \
      return p;                                                                \
    }                                                                          \
    friend const Alias& operator*=(Alias &p, const Base& v)                    \
    {                                                                          \
      p.data *= v;                                                             \
      return p;                                                                \
    }                                                                          \
    friend const Alias& operator/=(Alias &p, const Alias &p2)                  \
    {                                                                          \
      p.data /= p2.data;                                                       \
      return p;                                                                \
    }                                                                          \
    friend const Alias& operator/=(Alias &p, const Base& v)                    \
    {                                                                          \
      p.data /= v;                                                             \
      return p;                                                                \
    }                                                                          \
    friend const Alias& operator%=(Alias &p, const Alias &p2)                  \
    {                                                                          \
      p.data %= p2.data;                                                       \
      return p;                                                                \
    }                                                                          \
    friend const Alias& operator%=(Alias &p, const Base& v)                    \
    {                                                                          \
      p.data %= v;                                                             \
      return p;                                                                \
    }                                                                          \
    friend const Alias& operator+=(Alias &p, const Alias &p2)                  \
    {                                                                          \
      p.data += p2.data;                                                       \
      return p;                                                                \
    }                                                                          \
    friend const Alias& operator+=(Alias &p, const Base& v)                    \
    {                                                                          \
      p.data += v;                                                             \
      return p;                                                                \
    }                                                                          \
    friend const Alias& operator-=(Alias &p, const Alias &p2)                  \
    {                                                                          \
      p.data -= p2.data;                                                       \
      return p;                                                                \
    }                                                                          \
    friend const Alias& operator-=(Alias &p, const Base& v)                    \
    {                                                                          \
      p.data -= v;                                                             \
      return p;                                                                \
    }                                                                          \
    friend const Alias& operator>>=(Alias &p, const Alias &p2)                 \
    {                                                                          \
      p.data >>= p2.data;                                                      \
      return p;                                                                \
    }                                                                          \
    friend const Alias& operator>>=(Alias &p, const Base& v)                   \
    {                                                                          \
      p.data >>= v;                                                            \
      return p;                                                                \
    }                                                                          \
    friend const Alias& operator<<=(Alias &p, const Alias &p2)                 \
    {                                                                          \
      p.data <<= p2.data;                                                      \
      return p;                                                                \
    }                                                                          \
    friend const Alias& operator<<=(Alias &p, const Base& v)                   \
    {                                                                          \
      p.data <<= v;                                                            \
      return p;                                                                \
    }                                                                          \
    friend const Alias& operator&=(Alias &p, const Alias &p2)                  \
    {                                                                          \
      p.data &= p2.data;                                                       \
      return p;                                                                \
    }                                                                          \
    friend const Alias& operator&=(Alias &p, const Base& v)                    \
    {                                                                          \
      p.data &= v;                                                             \
      return p;                                                                \
    }                                                                          \
    friend const Alias& operator^=(Alias &p, const Alias &p2)                  \
    {                                                                          \
      p.data ^= p2.data;                                                       \
      return p;                                                                \
    }                                                                          \
    friend const Alias& operator^=(Alias &p, const Base& v)                    \
    {                                                                          \
      p.data ^= v;                                                             \
      return p;                                                                \
    }                                                                          \
    friend const Alias& operator|=(Alias &p, const Alias &p2)                  \
    {                                                                          \
      p.data |= p2.data;                                                       \
      return p;                                                                \
    }                                                                          \
    friend const Alias& operator|=(Alias &p, const Base& v)                    \
    {                                                                          \
      p.data |= v;                                                             \
      return p;                                                                \
    }                                                                          \

    // Earlier versions of Delphi mapped built-in types such as NativeInt/NativeUInt
    // ByteBool/WordBool/LongBool to C++ built-in types. But that prevented Delphi
    // code from overloading on, say, NativeInt and Integer (they both had to mangle
    // to 'int'). Newer versions of Delphi mangle these types as strong aliases.
    // To be compatible with the change, C++ will also create strong aliases.
    // This, though, comes at a cost: to avoid ambiguity, conversions must be explicit.
    // For example:
    //      NativeInt ni = 100;                  // Error
    //      NativeInt ni = NativeInt(100);       // OK
    //      System::GetMemory(0x100);            // Error
    //      System::GetMemory(NativeInt(0x100)); // OK
    template <typename BASE_T, typename ALIAS_T>
    class AliasT
    {
    protected:
      typedef AliasT<BASE_T, ALIAS_T> AliasType;
      AliasT() : data(BASE_T())
      {}
#ifdef __clang__
      constexpr
#endif
#ifndef _ALIAST_EXPLICIT_CONSTRUCTOR
      explicit
#endif
      AliasT(const BASE_T &p) : data(p)
      {}
    public:
      const BASE_T& get() const
      {
        return data;
      }
      BASE_T& get()
      {
        return data;
      }
      _ALIAST_FRIEND_OPERATORS1(BASE_T, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS2(BASE_T, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS3(BASE_T, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS4(BASE_T, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS5(BASE_T, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS6(BASE_T, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS7(BASE_T, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS8(BASE_T, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS9(BASE_T, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS10(BASE_T, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS11(BASE_T, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS12(BASE_T, ALIAS_T)
  #if !defined(NO_ALIAST_CONVERSION_OPERATOR)
      /* explicit */ operator BASE_T() const {
        return data;
      }
  #endif
  #if !defined(NO_ALIAST_ASSIGNMENT_OPERATOR)
      AliasT& operator=(const BASE_T& rhs) {
        data = rhs;
        return *this;
      }
  #endif
    private:
      BASE_T data;
    };

#if defined(__arm__)
  // On ARM 32 bits platform (Android and iOS), long long and unsigned long long
  // wrappers should be declared as RTL_DELPHIRETURN
  // long long
    template <typename ALIAS_T>
    class RTL_DELPHIRETURN AliasT<long long, ALIAS_T>
    {
      typedef long long BaseType;
    protected:
      typedef AliasT<BaseType, ALIAS_T> AliasType;
      AliasT() : data(BaseType())
      {}
#ifdef __clang__
      constexpr
#endif
#ifndef _ALIAST_EXPLICIT_CONSTRUCTOR
      explicit
#endif
      AliasT(const BaseType &p) : data(p)
      {}
    public:
      const BaseType& get() const
      {
        return data;
      }
      BaseType& get()
      {
        return data;
      }
      _ALIAST_FRIEND_OPERATORS1(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS2(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS3(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS4(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS5(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS6(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS7(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS8(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS9(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS10(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS11(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS12(BaseType, ALIAS_T)
  #if !defined(NO_ALIAST_CONVERSION_OPERATOR)
      /* explicit */ operator BaseType() const {
        return data;
      }
  #endif
  #if !defined(NO_ALIAST_ASSIGNMENT_OPERATOR)
      AliasT& operator=(const BaseType& rhs) {
        data = rhs;
        return *this;
      }
  #endif
    private:
      BaseType data;
    };

  // unsigned long long
    template <typename ALIAS_T>
    class RTL_DELPHIRETURN AliasT<unsigned long long, ALIAS_T>
    {
      typedef unsigned long long BaseType;
    protected:
      typedef AliasT<BaseType, ALIAS_T> AliasType;
      AliasT() : data(BaseType())
      {}
#ifdef __clang__
      constexpr
#endif
#ifndef _ALIAST_EXPLICIT_CONSTRUCTOR
      explicit
#endif
      AliasT(const BaseType &p) : data(p)
      {}
    public:
      const BaseType& get() const
      {
        return data;
      }
      BaseType& get()
      {
        return data;
      }
      _ALIAST_FRIEND_OPERATORS1(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS2(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS3(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS4(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS5(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS6(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS7(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS8(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS9(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS10(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS11(BaseType, ALIAS_T)
      _ALIAST_FRIEND_OPERATORS12(BaseType, ALIAS_T)
  #if !defined(NO_ALIAST_CONVERSION_OPERATOR)
      /* explicit */ operator BaseType() const {
        return data;
      }
  #endif
  #if !defined(NO_ALIAST_ASSIGNMENT_OPERATOR)
      AliasT& operator=(const BaseType& rhs) {
        data = rhs;
        return *this;
      }
  #endif
    private:
      BaseType data;
    };
#endif
}

#define _DECLARE_ARITH_TYPE_ALIAS(Base, Alias)        \
  class Alias : public System::AliasT<Base, Alias> {  \
  public:                                             \
    Alias() : AliasType()                             \
    {}                                                \
    constexpr Alias(Base i) : AliasType(i)            \
    {}                                                \
    Alias& operator=(const Base &rhs) {               \
      AliasType::get() = rhs;                         \
      return *this;                                   \
    }                                                 \
  };

#if !defined(_WIN32) && !defined(_DELPHI_WEAK_NATIVEINT)
  // When mangled as strong aliases, Native[U]Int is[are] not in the System namespace :(
 #if defined(__amd64__) || defined(__aarch64__)
  _DECLARE_ARITH_TYPE_ALIAS(long, NativeInt);
  _DECLARE_ARITH_TYPE_ALIAS(unsigned long, NativeUInt);
 #else
  _DECLARE_ARITH_TYPE_ALIAS(int, NativeInt);
  _DECLARE_ARITH_TYPE_ALIAS(unsigned, NativeUInt);
 #endif
#else
  //
#endif

#define _DECLARE_STRING_TYPE_ALIAS(Base, Alias) \
  class Alias : public Base {                   \
  public:                                       \
    Alias()                     : Base() {}     \
    Alias(const Base&  src)     : Base(src) {}  \
    Alias(const Alias& src)     : Base(src) {}  \
    Alias(const char* src)      : Base(src) {}  \
    Alias(const char* src, int len)             : Base(src, len) {} \
    Alias(const System::WideChar* src, int len) : Base(src, len) {} \
    Alias(const System::WideChar* src)          : Base(src) {}      \
    Alias(const char32_t* src, int numChar32 = -1) : Base(src, numChar32) {} \
    Alias(const wchar_t* src, int len = -1) : Base(src, len) {}              \
    Alias(char src)             : Base(src) {} \
    Alias(wchar_t src)          : Base(src) {} \
    Alias(short src)            : Base(src) {} \
    Alias(unsigned short src)   : Base(src) {} \
    Alias(int src)              : Base(src) {} \
    Alias(unsigned int src)     : Base(src) {} \
    Alias(long src)             : Base(src) {} \
    Alias(unsigned long src)    : Base(src) {} \
    Alias(__int64 src)          : Base(src) {} \
    Alias(unsigned __int64 src) : Base(src) {} \
    Alias(double src)           : Base(src) {} \
    ~Alias() {}                                \
  };

#if defined(_WIN32) && !defined(_DELPHI_WEAK_NATIVEINT)
 #if defined(_WIN64)
  typedef __int64              NativeInt;          //
  typedef unsigned __int64     NativeUInt;         //
 #elif (_WIN32)
  typedef int                  NativeInt;          //
  typedef unsigned int         NativeUInt;         //
 #endif
#endif

namespace System
{
  typedef unsigned char        ByteBool;           //
  typedef unsigned short       WordBool;           //
  typedef int                  LongBool;           //

#if defined(_WIN32) && defined(_DELPHI_WEAK_NATIVEINT)
 #if defined(_WIN64)
  typedef __int64              NativeInt;          //
  typedef unsigned __int64     NativeUInt;         //
 #elif (_WIN32)
  typedef int                  NativeInt;          //
  typedef unsigned int         NativeUInt;         //
 #endif
#elif defined(_DELPHI_WEAK_NATIVEINT)
 #if defined(__amd64__) || defined(__aarch64__)
  typedef __int64              NativeInt;          //
  typedef unsigned __int64     NativeUInt;         //
 #else
  typedef int                  NativeInt;          //
  typedef unsigned int         NativeUInt;         //
 #endif
#endif

#if defined(_DELPHI_STRING_UNICODE)
    typedef UnicodeString        String;           //
#endif
#if !defined(_DELPHI_NEXTGEN)
    typedef SmallStringBase<255> ShortStringBase;  //
    typedef SmallString<255>     ShortString;      //
    typedef ShortString*         PShortString;     //
    typedef AnsiString*          PAnsiString;      //
#else
    typedef SmallStringBase<255> ShortStringBase;  //
    typedef SmallString<255>     ShortString;      //
    typedef ShortString*         PShortString;     //
    typedef AnsiString*          PAnsiString;      //
#endif
    typedef UnicodeString*       PUnicodeString;   //
#if defined(_DELPHI_STRING_UNICODE)
    typedef PUnicodeString       PString;          //
#else
    typedef PAnsiString          PString;          //
#endif
    typedef WideString*          PWideString;      //
    typedef Extended*            PExtended;        //
    typedef Currency*            PCurrency;        //
    typedef Variant*             PVariant;         //
    typedef OleVariant*          POleVariant;      //
    typedef _GUID                TGUID;            //
    typedef TGUID*               PGUID;            //
    typedef HRESULT              HResult;          //

    typedef Byte*                PByte;            //
    typedef Integer*             PInteger;         //
    typedef __int64*             PInt64;           //
    typedef LongWord*            PLongWord;        //
    typedef Smallint*            PSmallInt;        //
    typedef Boolean*             PBoolean;         //
    typedef PChar*               PPChar;           //
    typedef Double*              PDouble;          //
    typedef Cardinal             UCS4Char;         //
    typedef UCS4Char*            PUCS4Char;        //
    typedef DynamicArray<UCS4Char> UCS4String;     //

    typedef System::DelphiInterface<System::IInterface> _di_IInterface;

#ifdef __clang__
    extern const bool _init_inst;
#endif

#if defined(__ANDROID__)
    // System::_PPAnsiChar leaks via the PMarshaledAString alias
    typedef char**               _PPAnsiChar;
#endif

} // namespace System


#if defined(__ANDROID__)
 #define _INIT_UNIT(unitName)   \
  void initialization();        \
  void* __rstr_ ## unitName     \
        __attribute__((weak))   \
        __attribute__((used)) = reinterpret_cast<void*>(&initialization);
#else
 #define _INIT_UNIT(unitName)   \
  void initialization();        \
  void* __init_unit             \
        __attribute__((weak))   \
        __attribute__((used)) = reinterpret_cast<void*>(&initialization);
#endif

#if defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
    using System::TClass;
    using System::TMetaClass;
  #if defined(_DELPHI_WEAK_NATIVEINT)
    using System::NativeInt;
    using System::NativeUInt;
  #endif
#endif

// Forward declaration to allow declaration of _di_IDispatch;
#if defined(_WIN32)
__interface IDispatch;
typedef System::DelphiInterface<IDispatch> _di_IDispatch;
#endif
typedef System::DelphiInterface<IUnknown> _di_IUnknown;


// Forward ref. to satisfy prototypes in System.hpp
class TVarData;
typedef TVarData* PVarData;

// RS-76008: Custom std::move for Android ARC platform
#if defined(__clang__)
#if __has_feature(borland_arc) && !defined(NO_TOBJECT_MOVE) && defined(__ANDROID__)
#include <type_traits>
namespace std {
  template <typename T>
  using isTObj = typename enable_if<is_base_of<System::TObject, T>::value, T>::type;

  template <typename T>
  inline isTObj<T>*& move(T*& t) {
    return t;
  }

  template <typename T>
  inline const isTObj<T>*& move(const T*& t) {
    return t;
  }
}
#endif
#endif

// Custom std::make_shared for Delphi classes. This relies on make_shared in the
// Dinkumware STL to be guarded with an enable_if that excludes TObject or derived.
// That is why this is also Windows-only
#if __cplusplus >= 201103L && defined(_WIN32) && !defined(NO_TOBJECT_MAKE_SHARED)
#include <memory>
namespace std {
  template <typename T, class... Args>
  typename enable_if<is_base_of<System::TObject, T>::value, shared_ptr<T>>::type
  make_shared(Args&&... args)
  {
    // Regular make_shared uses placement new to allocate instance and internals (refcount)
    // in one memory block. Since placement new is not supported for Delphi-style classes,
    // forward to the shared_ptr constructor that's guaranteed to use separate allocations.
    return shared_ptr<T>(new T(std::forward<Args>(args)...));
  }
}
#endif

#endif
