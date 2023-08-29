﻿/* yvals.h internal header for conforming compilers on various systems */
#ifndef _YVALS
#define _YVALS

#if !defined(__CODEGEARC__)
#define _HAS_CPP17	1	// CHANGE 17 TO 14/11/03 as needed
#endif

#define _IN_CNT(x)	// disable old macros by default
#define _OUT_CNT(x)
#define _IN
#define _IN_Z
#define _IN_OPT_Z
#define _OUT

#ifndef _ALLOW_KEYWORD_MACROS
 #include <xkeycheck.h>
#endif /* _ALLOW_KEYWORD_MACROS */

 #if 1800 <= _MSC_VER && __EDG__
 #undef _MSC_VER
 #define _MSC_VER	1600	/* kludge for newer EDG */
 #endif /* 1800 <= _MSC_VER && __EDG__ */

 #if _IS_WRS	/* compiler test */
 #ifndef _YVALS_WRS
  #define _YVALS_WRS

#if (defined(__cplusplus) && defined(__GNUC__) && !defined(__CODEGEARC__))	/* use GCC's yvals.h */
  #include_next <yvals.h>
  #define _YVALS
 #endif /* defined(__cplusplus) etc. */

 #endif /* _YVALS_WRS */
 #endif /* _IS_WRS */

#if defined(__CODEGEARC__)
#include <_defs.h>

#if !defined(__clang__)
#error Please use headers from dinkumware directory
#endif
#endif

 #if defined(__clang__)
  #define _CLANG	1
  #define _CLANG_VERSION	(__clang_major__ * 100 + __clang_minor__)

 #else /* defined(__clang__) */
  #define _CLANG	0
  #define _CLANG_VERSION	0
 #endif /* defined(__clang__) */

 #define _GCC43	(_CLANG || 4 < __GNUC__ \
	|| 4 == __GNUC__ && 3 <= __GNUC_MINOR__)	/* 4.3 or newer */
 #define _GCC44	(_CLANG || 4 < __GNUC__ \
	|| 4 == __GNUC__ && 4 <= __GNUC_MINOR__)	/* 4.4 or newer */
 #define _GCC45	(_CLANG || 4 < __GNUC__ \
	|| 4 == __GNUC__ && 5 <= __GNUC_MINOR__)	/* 4.5 or newer */
 #define _GCC46	(_CLANG || 4 < __GNUC__ \
	|| 4 == __GNUC__ && 6 <= __GNUC_MINOR__)	/* 4.6 or newer */
 #define _GCC47	(_CLANG || 4 < __GNUC__ \
	|| 4 == __GNUC__ && 7 <= __GNUC_MINOR__)	/* 4.7 or newer */
 #define _GCC48	(_CLANG || 4 < __GNUC__ \
	|| 4 == __GNUC__ && 8 <= __GNUC_MINOR__)	/* 4.8 or newer */
 #define _GCC49	(_CLANG || 4 < __GNUC__ \
	|| 4 == __GNUC__ && 9 <= __GNUC_MINOR__)	/* 4.9 or newer */
 #define _GCC5	(4 < __GNUC__)	/* 5.x */

 #define _GCC0X	_GCC43	/* basic support for C++0X */

#ifndef _GHS

 #if defined(__ghs)
  #define _GHS	1
  #define _Atexit(x)	atexit(x)

 #else /* defined(__ghs) */
  #define _GHS	0
 #endif /* defined(__ghs) */

#endif /* _GHS */

 #if _GHS
 #define _NOINLINE	__noinline

 #else /* _GHS */
 #define _NOINLINE
 #endif /* _GHS */

#if defined(__CODEGEARC__) && defined(__clang__)  /* FIXME: push back better check */

#if defined(_CLANG)
#undef _CLANG
#endif
#define _CLANG 1

#if defined(_GCC0X)
#undef _GCC0X
#endif
#define _GCC0X 1

#endif

 #if __EDG__
#ifndef _DNK_RENAME
 #define _DNK_RENAME
#endif /* _DNK_RENAME */

 #define getenv_s	_Dnk_getenv_s

 #define iswalnum	_Dnk_iswalnum
 #define iswalpha	_Dnk_iswalpha
 #define iswcntrl	_Dnk_iswcntrl
 #define iswctype	_Dnk_iswctype
 #define iswdigit	_Dnk_iswdigit
 #define iswgraph	_Dnk_iswgraph
 #define iswlower	_Dnk_iswlower
 #define iswprint	_Dnk_iswprint
 #define iswpunct	_Dnk_iswpunct
 #define iswspace	_Dnk_iswspace
 #define iswupper	_Dnk_iswupper
 #define iswxdigit	_Dnk_iswxdigit

 #define localeconv	_Dnk_localeconv
 #define setlocale	_Dnk_setlocale

 #define strftime	_Dnk_strftime

 #define strtol		_Dnk_strtol

 #define tolower	_Dnk_tolower
 #define toupper	_Dnk_toupper
 #endif /* __EDG__ */

#define _CPPLIB_VER	803

/* You can predefine (on the compile command line, for example):

_ADDED_C_LIB=0 -- to omit declarations for C extensions
_ALT_NS=1 -- to use namespace _Dinkum_std for C++
_ALT_NS=2 -- to use namespace _Dinkum_std for C++ and C
_ALT_NS=3 -- to use namespace _Dinkum_std for C++ and _Dinkum_std_c for C
_C_AS_CPP -- to compile C library as C++
_C_IN_NS -- to define C names in std/_Dinkum_std instead of global namespace
_C99 -- to turn ON C99 library support
_ABRCPP -- to turn ON Abridged C++ dialect (implies _ECPP)
_ECPP -- to turn ON Embedded C++ dialect
_HAS_BACKWARD_COMPATIBILITY=1 -- to turn ON layout compatibility with old code
_HAS_DEBUG_COMPATIBILITY=1 -- to turn ON layout compatibility with debug code
_HAS_DELEGATING_CONSTRUCTORS=1 -- to turn ON use of delegating constructors
_HAS_EXPLICIT_OPERATORS=1 -- to turn ON explicit keyword applied to operators
_HAS_FIXED_POINT=1 -- to turn ON fixed-point extensions (if present)
_HAS_LITERALS=0 -- to disable literal declarations
_HAS_NEW_SFINAE=1 -- to PERMIT use of template<class = test>
_HAS_NOEXCEPT=1 -- to PERMIT use of noexcept
_HAS_NULLPTR_T=1 -- to PERMIT use of nullptr_t
_HAS_REF_QUALIFIER=1 -- to PERMIT ref qualifiers
_HAS_SCOPED_ENUM=1 -- to PERMIT scoped enums
_HAS_STRICT_CONFORMANCE=1 -- to disable nonconforming extensions
_HAS_TEMPLATE_ALIAS=1 -- to PERMIT template aliases
_HAS_TEMPLATE_TEMPLATE=1 -- to PERMIT template templates
_HAS_TRADITIONAL_IOSTREAMS=0 -- to omit old iostreams functions
_HAS_TRADITIONAL_ITERATORS=1 -- for vector/string pointer iterators
_HAS_TRADITIONAL_POS_TYPE=1 -- for streampos same as streamoff
_HAS_TRADITIONAL_STL=0 -- to turn OFF old STL functions
_HAS_TR1=0 -- to turn OFF TR1 extensions (if present)
_HAS_TR1_IMPORTS=0 -- to turn OFF importing tr1 names (if present) into tr1
_HAS_VARIADIC_TEMPLATES=0 -- to turn OFF variadic templates (if present)
_HAS_VARIABLE_TEMPLATES=1 -- to turn ON variable templates
_NO_EX -- to turn OFF use of try/throw
_NO_LOCALES=1 -- to turn OFF named locales
_NO_MT -- to turn OFF thread synchronization
_NO_NS -- to turn OFF use of namespace declarations
__STDC_WANT_LIB_EXT1__=0 -- to disable C library extension 1
_STL_DB (or _STLP_DEBUG) -- to turn ON iterator/range debugging
_USE_EXISTING_SYSTEM_NAMES=0 -- to disable mappings (_Open to open)
__NO_LONG_LONG -- to define _Longlong as long, not long long

You can change (in this header AND ALL ITS COPIES):

_COMPILER_TLS -- from 0 to 1 if _TLS_QUAL is not nil
_EXFAIL -- from 1 to any nonzero value for EXIT_FAILURE
_FILE_OP_LOCKS -- from 0 to 1 for file atomic locks
_GLOBAL_LOCALE -- from 0 to 1 for shared locales instead of per-thread
_IOSTREAM_OP_LOCKS -- from 0 to 1 for iostream atomic locks
_TLS_QUAL -- from nil to compiler TLS qualifier, such as __declspec(thread)

Include directories needed to compile with Dinkum C:

C -- include/c
C99 -- include/c (define _C99)
Embedded C++ -- include/c include/embedded (define _ECPP)
Abridged C++ -- include/c include/embedded include (define _ABRCPP)
Standard C++ -- include/c include
Standard C++ with export -- include/c include/export include
	(--export --template_dir=lib/export)

Include directories needed to compile with native C:

C -- none
C99 -- N/A
Embedded C++ -- include/embedded (define _ECPP)
Abridged C++ -- include/embedded include (define _ABRCPP)
Standard C++ -- include
Standard C++ with export -- include/export include
	(--export --template_dir=lib/export)
 */

 #ifndef __STDC_HOSTED__
  #define __STDC_HOSTED__	1
 #endif /* __STDC_HOSTED__ */

 #ifndef __STDC_IEC_559__
  #define __STDC_IEC_559__	1
 #endif /* __STDC_IEC_559__ */

 #ifndef __STDC_IEC_559_COMPLEX__
  #define __STDC_IEC_559_COMPLEX__	1
 #endif /* __STDC_IEC_559_COMPLEX__ */

 #ifndef __STDC_ISO_10646__
  #define __STDC_ISO_10646__	201103L	/* match glibc */
 #endif /* __STDC_ISO_10646__ */

 #ifndef __STDC_LIB_EXT1__
  #define __STDC_LIB_EXT1__	200509L
 #endif /* __STDC_LIB_EXT1__ */

 #ifndef __STDC_WANT_LIB_EXT1__
  #define __STDC_WANT_LIB_EXT1__	1
 #endif /* __STDC_WANT_LIB_EXT1__ */

 #ifndef __STDC_NO_ATOMICS__

  #if 0 < _MSC_VER
   #define __STDC_NO_ATOMICS__	1
  #endif /* 0 < _MSC_VER */

 #endif /* __STDC_NO_ATOMICS__ */

 #ifndef __STDC_NO_COMPLEX__
//   #define __STDC_NO_COMPLEX__	1
 #endif /* __STDC_NO_COMPLEX__ */

 #ifndef __STDC_NO_THREADS__
//   #define __STDC_NO_THREADS__	1
 #endif /* __STDC_NO_THREADS__ */

		/* DETERMINE MACHINE TYPE */

 #if defined(i386) || defined(__i386) \
	|| defined(__i386__) || defined(_M_IX86)	/* Pentium */
  #define _D0		3	/* 0: big endian, 3: little endian floating-point */

  #if defined(__RTP__)
   #define _DLONG		1		/* 0: 64, 1: 80, 2: 128 long double bits */
   #define _LBIAS		0x3ffe	/* 80/128 long double bits */
   #define _LOFF		15		/* 64 long double bits */

  #elif defined(__CODEGEARC__)

   #pragma warn -inl
   #define _DLONG	1	/* 0: 64, 1: 80, 2: 128 long double bits */
   #define _LBIAS	0x3ffe	/* 80/128 long double bits */
   #define _LOFF	15	/* 64 long double bits */

  #elif defined(__MINGW32__) || defined(__CYGWIN__)
   #define _DLONG	1	/* 0: 64, 1: 80, 2: 128 long double bits */
   #define _LBIAS	0x3ffe	/* 80/128 long double bits */
   #define _LOFF	15	/* 64 long double bits */

  #elif defined(_M_IX86)
   #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
   #define _LBIAS	0x3fe	/* 64 long double bits */
   #define _LOFF	4	/* 64 long double bits */

  #else /* unknown compilation environment, guess 80-bit long double */
   #define _DLONG	1	/* 0: 64, 1: 80, 2: 128 long double bits */
   #define _LBIAS	0x3ffe	/* 80/128 long double bits */
   #define _LOFF	15	/* 80/128 long double bits */

   #if defined(__APPLE__)
    #define _MACH_PDT	long
    #define _MACH_SZT	unsigned long
   #endif /* defined(__APPLE__) */

  #endif /* defined(_M_IX86) */

  #define _FPP_TYPE	_FPP_X86	/* Pentium FPP */

 #elif defined(sparc) || defined(__sparc)	/* SPARC */

 #if _IS_WRS	/* compiler test */
  #define _D0		0	/* 0: big endian, 3: little endian floating-point */
  #define _LBIAS	0x3ffe	/* 80/128 long double bits */
  #define _FPP_TYPE	_FPP_SPARC	/* SPARC FPP */

  #if defined(_NO_WINDRIVER_MODIFICATIONS)
   #define _DLONG	2	/* 0: 64, 1: 80, 2: 128 long double bits */
   #define _LOFF	15	/* 80/128 long double bits */

  #else /* _NO_WINDRIVER_MODIFICATIONS */
   #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
   #define _LOFF	4	/* 80/128 long double bits */
  #endif /* _NO_WINDRIVER_MODIFICATIONS */

 #else /* _IS_WRS */
  #define _D0		0	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	2	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3ffe	/* 80/128 long double bits */
  #define _LOFF		15	/* 80/128 long double bits */
  #define _FPP_TYPE	_FPP_SPARC	/* SPARC FPP */

  #if defined(__arch64__)
   #define _MACH_PDT	long
   #define _MACH_SZT	unsigned long
  #endif /* defined(__arch64__) */

 #endif /* _IS_WRS */

 #elif defined(_MIPS) || defined(_MIPS_) \
	|| defined(__mips) || defined(_M_MRX000)		/* MIPS */

  #if defined(__LITTLE_ENDIAN__) || defined(__MIPSEL)
   #define _D0		3	/* 0: big endian, 3: little endian floating-point */

  #else /* __LITTLE_ENDIAN__ etc. */
   #define _D0		0
  #endif /* __LITTLE_ENDIAN__ etc. */

  #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3fe	/* 64 long double bits */
  #define _LOFF		4	/* 64 long double bits */
  #define _FPP_TYPE	_FPP_MIPS	/* MIPS FPP */

 #if _IS_WRS	/* compiler test */

  #if defined(_NO_WINDRIVER_MODIFICATIONS)
   #define _MACH_PDT	long
   #define _MACH_SZT	unsigned long
  #endif /* _NO_WINDRIVER_MODIFICATIONS */

 #endif /* _IS_WRS */

 #if !defined(_MACH_PDT)
  #define _MACH_PDT	long
  #define _MACH_SZT	unsigned long
 #endif /* defined(_MACH_PDT) */

 #elif defined(__s390__)	/* IBM S/390 */
  #define _D0		0	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3fe	/* 64 long double bits */
  #define _LOFF		4	/* 64 long double bits */
  #define _FPP_TYPE	_FPP_S390	/* S/390 FPP */

  #define _MACH_PDT	long
  #define _MACH_SZT	unsigned long

 #elif defined(__ppc__) || defined(_POWER) || defined(_M_PPC)	/* PowerPC */
  #define _D0		0	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3fe	/* 64 long double bits */
  #define _LOFF		4	/* 64 long double bits */
  #define _FPP_TYPE	_FPP_PPC	/* PowerPC FPP */

  #if defined(__APPLE__)
   #define _MACH_I32	int
   #define _MACH_PDT	int
   #define _MACH_SZT	unsigned long
  #endif /* defined(__APPLE__) */

 #elif defined(__hppa)	/* HP PA-RISC */
  #define _D0		0	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	2	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3ffe	/* 80/128 long double bits */
  #define _LOFF		15	/* 80/128 long double bits */
  #define _FPP_TYPE	_FPP_HPPA	/* Hewlett-Packard PA-RISC FPP */

 #elif defined(_M_ALPHA)	/* Alpha */
  #define _D0		3	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3fe	/* 64 long double bits */
  #define _LOFF		4	/* 64 long double bits */
  #define _FPP_TYPE	_FPP_ALPHA	/* Compaq Alpha */

 #elif defined(_ARM_) || defined(__arm)	/* ARM */

  #if defined(__BIG_ENDIAN__) || defined(__ARMEB__)
   #define _D0		0	/* 0: big endian, 3: little endian floating-point */

  #else /* __BIG_ENDIAN__ etc. */
   #define _D0		3	/* 0: big endian, 3: little endian floating-point */
  #endif /* __BIG_ENDIAN__ etc. */

  #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3fe	/* 64 long double bits */
  #define _LOFF		4	/* 64 long double bits */
  #define _FPP_TYPE	_FPP_ARM	/* ARM ARM FPP */

 #elif defined(_M68K)	/* Motorola 68K */
  #define _D0		0	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	1	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3ffe	/* 80/128 long double bits */
  #define _LOFF		15	/* 80/128 long double bits */
  #define _FPP_TYPE	_FPP_M68K	/* Motorola 68xxx FPP */

 #elif defined(_SH4_) || defined(__sh) || defined(__sh__)	/* SH4 */

  #if defined(__BIG_ENDIAN__) || defined(_SH4)
   #define _D0		0	/* 0: big endian, 3: little endian floating-point */

  #else /* __BIG_ENDIAN__ etc. */
   #define _D0		3	/* 0: big endian, 3: little endian floating-point */
  #endif /* __BIG_ENDIAN__ etc. */

  #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3fe	/* 64 long double bits */
  #define _LOFF		4	/* 64 long double bits */
  #define _FPP_TYPE	_FPP_SH4	/* Hitachi SH4 FPP */

 #elif defined(_M_IA64)	/* IA64 */
  #define _D0		3	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3fe	/* 64 long double bits */
  #define _LOFF		4	/* 64 long double bits */
  #define _FPP_TYPE	_FPP_IA64	/* Intel IA64 FPP */

#elif (defined(__x86_64) || defined(__x86_64__)) && !defined(__CODEGEARC__) /* 64-Bit GCC */

  #if !defined(__x86_64)
   #define __x86_64	1
  #endif /* defined(__x86_64) */

  #if !defined(_M_X64)
   #define _M_X64	1
  #endif /* defined(_M_X64) */

  #define _D0		3	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	1	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3ffe	/* 80/128 long double bits */
  #define _LOFF		15	/* 80/128 long double bits */

 #if _CLANG
 #define _FPP_TYPE	_FPP_X86	/* Pentium FPP under Darwin */

  #define _MACH_I32	int
  #define _MACH_PDT	long
  #define _MACH_SZT	unsigned long
  #define _LLONG	1	/* 64-bit longs */

 #elif __EDG__
  #define _FPP_TYPE      _FPP_X86        /* Pentium FPP under Darwin */

  #define _MACH_I32     int
  #define _MACH_PDT     __EDG_PTRDIFF_TYPE__
  #define _MACH_SZT     __EDG_SIZE_TYPE__
  #define _LLONG        1       /* 64-bit longs */

 #else /* _CLANG */
  #define _FPP_TYPE	_FPP_WIN	/* Pentium FPP under Windows */

  #define _MACH_PDT	long long
  #define _MACH_SZT	unsigned long long
  #define _SIZE_T_LONG_LONG	1
 #endif /* _CLANG */

 #elif defined(_M_X64) /* 64-Bit x86 VC++ */
  #define _D0		3	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3fe	/* 64 long double bits */
  #define _LOFF		4	/* 64 long double bits */
  #define _FPP_TYPE	_FPP_WIN	/* Pentium FPP under Windows */

  #define _MACH_PDT	long long
  #define _MACH_SZT	unsigned long long
  #define _SIZE_T_LONG_LONG	1

 #else /* unknown compilation environment, guess big-endian */
  #define _D0		0	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3fe	/* 64 long double bits */
  #define _LOFF		4	/* 64 long double bits */
 #endif /* system detector */

		/* DETERMINE _Ptrdifft AND _Sizet FROM MACHINE TYPE */

 #if defined(_MACH_I32)
typedef _MACH_I32 _Int32t;
typedef unsigned _MACH_I32 _Uint32t;

 #else /* defined(_MACH_I32) */
typedef long _Int32t;
typedef unsigned long _Uint32t;
 #endif /* defined(_MACH_I32) */

 #if defined(_MACH_PDT)
typedef _MACH_PDT _Ptrdifft;

 #else /* defined(_MACH_PDT) */
typedef int _Ptrdifft;
 #endif /* defined(_MACH_PDT) */

 #if defined(_MACH_SZT)
typedef _MACH_SZT _Sizet;

 #else /* defined(_MACH_SZT) */
typedef unsigned int _Sizet;
 #endif /* defined(_MACH_SZT) */

 #if !defined(_LLONG)
  #define _LLONG	0	/* 32-bit longs */
 #endif /* !defined(_LLONG) */

 #if !defined(_RSIZE_MAX)
  #define _RSIZE_MAX	((_Sizet)(-1) >> 1)	/* or sizeof largest object */
 #endif /* !defined(_RSIZE_MAX) */

 #if defined(__linux) || defined(__linux__)
  #define _LINUX_C_LIB	1	/* Linux-specific conventions */
 #endif /* defined(__linux) etc. */

 #if defined(_M_IX86) || defined(_M_MRX000) || defined(_M_PPC) \
	|| defined(_M_ALPHA) || defined(_M_IA64) || defined(_WIN32_WCE) \
	|| defined(_WIN64)
  #define _WIN32_C_LIB	1	/* use Windows32 conventions */

 #else /* defined(_M_*) */
  #define _HAS_POSIX_C_LIB	1	/* use common Unix/Linux conventions */
 #endif /* defined(_M_*) */

 #if defined(_HAS_C99)

 #elif defined(_C99) || _CLANG
  #define _HAS_C99	1

 #else /* !defined(_HAS_C99) */
  #define _HAS_C99	0
 #endif /* !defined(_HAS_C99) */

 #if !defined(_ECPP) && defined(_ABRCPP)
  #define _ECPP
 #endif /* !defined(_ECPP) && defined(_ABRCPP) */

 #if !defined(_IS_WRS)
  #define _IS_WRS	0
 #endif /* !defined(_IS_WRS) */

 #if _IS_WRS	/* compiler test */

 #if defined(_NO_WINDRIVER_MODIFICATIONS)

  #if _HAS_C99 && __EDG__ && !defined(__cplusplus)
   #define _HAS_C99_IMAGINARY_TYPE	1

  #else /* _HAS_C99 etc. */
   #define _HAS_C99_IMAGINARY_TYPE	0
  #endif /* _HAS_C99 etc. */

 #if !defined(_IS_EMBEDDED) && defined(_ECPP)
  #define _IS_EMBEDDED	1	/* 1 for Embedded C++ */
 #endif /* _IS_EMBEDDED etc. */

 #else /* _NO_WINDRIVER_MODIFICATIONS */
  #define _HAS_C99_IMAGINARY_TYPE	0
  #define _IS_EMBEDDED	__CONFIGURE_EMBEDDED
 #endif /* _NO_WINDRIVER_MODIFICATIONS */

 #else /* _IS_WRS */

 #if _HAS_C99 && __EDG__ && !defined(__APPLE__) && !defined(__cplusplus)
  #define _HAS_C99_IMAGINARY_TYPE	1

 #else /* _HAS_C99 etc. */
  #define _HAS_C99_IMAGINARY_TYPE	0
 #endif /* _HAS_C99 etc. */

 #if !defined(_IS_EMBEDDED) && defined(_ECPP)
  #define _IS_EMBEDDED	1	/* 1 for Embedded C++ */
 #endif /* _IS_EMBEDDED etc. */

 #endif /* _IS_WRS */

 #if __EDG__	/* compiler test */
 #pragma diag_suppress 2659
 #endif /* __EDG__ */

// FIXME __CODEGEARC__
#if defined(__CODEGEARC__) && defined(__STDC_VERSION__)
#undef __STDC_VERSION__
#define __STDC_VERSION__ 199409L
#endif

 #ifndef __STDC_VERSION__

  #if _HAS_C99
   #define __STDC_VERSION__	199901L

  #else /* _HAS_C99 */
   #define __STDC_VERSION__	199409L
  #endif /* _HAS_C99 */

 #endif /* __STDC_VERSION__ */

		/* COMPATIBILITY CONTROL */
 #ifndef _HAS_BACKWARD_COMPATIBILITY
  #define _HAS_BACKWARD_COMPATIBILITY	0
  #define _HAS_BACKWARD_COMPATIBILITY_ATOMIC	0
 #endif /* _HAS_BACKWARD_COMPATIBILITY */

 #define _INT_OR_SIZE_T	size_t
 #define _WAS_REF	&

 #ifndef _HAS_DEBUG_COMPATIBILITY
  #define _HAS_DEBUG_COMPATIBILITY	1
 #endif /* _HAS_DEBUG_COMPATIBILITY */

		/* EXCEPTION CONTROL */
 #ifndef _HAS_EXCEPTIONS
  #ifndef _NO_EX	/* don't simplify */
   #define _HAS_EXCEPTIONS	1	/* 1 for try/throw logic */

  #else	/* _NO_EX */
   #define _HAS_EXCEPTIONS	0
  #endif /* _NO_EX */

 #endif /* _HAS_EXCEPTIONS */

		/* NAMING PROPERTIES */
/* #define _STD_LINKAGE	define C names as extern "C++" */
/* #define _STD_USING	define C names in one of three namespaces */
#if defined(_Windows) && defined(__CODEGEARC__)
#define _STD_USING
#endif

 #ifndef _HAS_NAMESPACE
  #ifndef _NO_NS	/* don't simplify */
   #define _HAS_NAMESPACE	1	/* 1 for C++ names in std */

  #else	/* _NO_NS */
   #define _HAS_NAMESPACE	0
  #endif /* _NO_NS */

 #endif /* _HAS_NAMESPACE */

 #if !defined(_STD_USING) && defined(__cplusplus) \
	&& (defined(_C_IN_NS) || 1 < _ALT_NS)
  #define _STD_USING	/* *.h headers export C names to global */

 #elif defined(_STD_USING) && !defined(__cplusplus)
  #undef _STD_USING	/* define only for C++ */
 #endif /* !defined(_STD_USING) */

 #if !defined(_HAS_STRICT_LINKAGE) \
	&& (__SUNPRO_CC \
		|| __EDG__ && !defined(__APPLE__) && !defined(_WIN32_C_LIB))
  #define _HAS_STRICT_LINKAGE	1	/* extern "C" in function type */
 #endif /* !defined(_HAS_STRICT_LINKAGE) */

		/* THREAD AND LOCALE CONTROL */
#define _GLOBAL_LOCALE	0	/* 0 for per-thread locales, 1 for shared */
#define _FILE_OP_LOCKS	0	/* 0 for no FILE locks, 1 for atomic */
#define _IOSTREAM_OP_LOCKS	0	/* 0 for no iostream locks, 1 for atomic */

		/* THREAD-LOCAL STORAGE */
#define _COMPILER_TLS	0	/* 1 if compiler supports TLS directly */
#define _TLS_QUAL	/* TLS qualifier, such as __declspec(thread), if any */

 #if !defined(_ADDED_C_LIB)
  #define _ADDED_C_LIB	1	/* include declarations for C extensions */
 #endif /* !defined(_ADDED_C_LIB) */

// DETERMINE C++ LANGUAGE LEVEL

#if (defined(__CODEGEARC__) && defined(__clang__))

#if defined(__cplusplus)
  #if __clang_major__ >= 4
    #if __cplusplus == 201703L
      #define _HAS_CPP17	1
    #elif __cplusplus == 201402L
      #define _HAS_CPP14	1
    #else
      #define _HAS_CPP11	1
    #endif
  #else
    #define _HAS_CPP14	        1
  #endif
#else
  #define _HAS_CPP11	        1
#endif

#if 0
#undef _HAS_CPP11
#undef _HAS_CPP14
#undef _HAS_CPP17
#define _HAS_CPP14	1
#endif

#endif

 #if !defined(_HAS_CPP17) && !defined(_HAS_CPP14) \
	&& !defined(_HAS_CPP11) && !defined(_HAS_CPP03)
  #define _HAS_CPP17	1	/* nothing defined, choose C++17 */
  #define _HAS_CPP14	1
  #define _HAS_CPP11	1
  #define _HAS_CPP03	1

 #elif defined(_HAS_CPP17) && _HAS_CPP17 != 0
  #undef _HAS_CPP14	/* C++17 enabled, enable rest */
  #define _HAS_CPP14	1
  #undef _HAS_CPP11
  #define _HAS_CPP11	1
  #undef _HAS_CPP03
  #define _HAS_CPP03	1

 #elif defined(_HAS_CPP14) && _HAS_CPP14 != 0
  #undef _HAS_CPP17	/* C++14 enabled, disable C++17, enable rest */
  #define _HAS_CPP17	0
  #undef _HAS_CPP11
  #define _HAS_CPP11	1
  #undef _HAS_CPP03
  #define _HAS_CPP03	1

 #elif defined(_HAS_CPP11) && _HAS_CPP11 != 0
  #undef _HAS_CPP17	/* C++11 enabled, disable C++17/14, enable rest */
  #define _HAS_CPP17	0
  #undef _HAS_CPP14
  #define _HAS_CPP14	0
  #undef _HAS_CPP03
  #define _HAS_CPP03	1

 #else	/* enable only C++03 */
  #undef _HAS_CPP17
  #define _HAS_CPP17	0
  #undef _HAS_CPP14
  #define _HAS_CPP14	0
  #undef _HAS_CPP11
  #define _HAS_CPP11	0
  #undef _HAS_CPP03
  #define _HAS_CPP03	1
 #endif /* !defined(_HAS_CPP17) etc. */

// DETERMINE _HAS_TR1

 #if defined(_HAS_TR1)

 #elif !defined(_HAS_CPP11)
  #define _HAS_TR1	0

 #elif !_IS_EMBEDDED && (1310 <= _MSC_VER || __EDG__ || 3 <= __GNUC__  || (defined(__CODEGEARC__) && defined(__clang__)))
  #define _HAS_TR1	1	/* enable TR1 */

 #else /* _HAS_TR1 */
  #define _HAS_TR1	0	/* disable TR1 */
 #endif /* _HAS_TR1 */

 #if !defined(_HAS_TR1_DECLARATIONS)
  #define _HAS_TR1_DECLARATIONS	1	/* enable special math functions */
 #endif /* !defined(_HAS_TR1_DECLARATIONS */

 #if !defined(_HAS_TR1_IMPORTS)
  #define _HAS_TR1_IMPORTS	_HAS_TR1
 #endif /* !defined(_HAS_TR1_IMPORTS) */

// DETERMINE _MULTI_THREAD
 #ifndef _MULTI_THREAD

  #ifdef __CYGWIN__
   #define _MULTI_THREAD	0	/* Cygwin has dummy thread library */

  #else /* __CYGWIN__ */

   #if defined(_NO_MT) || defined(_DEBUG) && 1310 == _MSC_VER
    #define _MULTI_THREAD	0	/* 0 for no thread locks */

   #else /* defined(_NO_MT) || defined(_DEBUG) */
#if defined(__CODEGEARC__) && !defined(__MT__)
    #define _MULTI_THREAD	0
    #define _NO_MT		1
#else
    #define _MULTI_THREAD	1
#endif
   #endif /* defined(_NO_MT) || defined(_DEBUG) */

  #endif /* __CYGWIN__ */
 #endif /* _MULTI_THREAD */

 #if !defined(_HAS_FIXED_POINT)
  #define _HAS_FIXED_POINT	0	/* disable fixed-point extensions */
 #endif /* !defined(_HAS_FIXED_POINT) */

 #if !defined(_HAS_DELEGATING_CONSTRUCTORS)

  #if 1800 <= _MSC_VER && !__EDG__ || _CLANG
   #define _HAS_DELEGATING_CONSTRUCTORS	1	/* enable explicit operators */

  #else /* 1800 <= _MSC_VER */
   #define _HAS_DELEGATING_CONSTRUCTORS	0	/* disable explicit operators */
  #endif /* 1800 <= _MSC_VER */

 #endif /* !defined(_HAS_DELEGATING_CONSTRUCTORS) */

 #if !defined(_HAS_NEW_SFINAE)

  #if _HAS_CPP11 && (1800 <= _MSC_VER || __EDG__ || _GCC46)
   #define _HAS_NEW_SFINAE	1	/* enable template<class = test> */

  #else /* 1800 <= _MSC_VER, etc. */
   #define _HAS_NEW_SFINAE	0	/* disable template<class = test> */
  #endif /* 1800 <= _MSC_VER, etc. */

 #endif /* !defined(_HAS_NEW_SFINAE) */

 #if defined(_HAS_EXPLICIT_OPERATORS)

 #elif __EDG__ || _CLANG
  #define _HAS_EXPLICIT_OPERATORS	1	/* enable explicit operators */

 #else /* __EDG__, etc. */
  #define _HAS_EXPLICIT_OPERATORS	0	/* disable explicit operators */
 #endif /* !defined(_HAS_EXPLICIT_OPERATORS) */

 #if defined(_HAS_LITERALS)

 #elif _GCC5
  #define _HAS_LITERALS	0	/* disallow operator "" declarations */

 #elif _CLANG
#if defined(__CODEGEARC__)
#if __has_feature(cxx_user_literals) && __clang_major__ > 3 /* Error in complex for 3.3 */ 
  #define _HAS_LITERALS	1	/* enable with __has_feature(cxx_user_literals) */
#else
  #define _HAS_LITERALS	0
#endif
#else
  #define _HAS_LITERALS	0	/* enable with __has_feature(cxx_user_literals) */
#endif

 #else /* not _GCC5 or _CLANG */
  #define _HAS_LITERALS	1	/* allow operator "" declarations */
 #endif /* defined(_HAS_LITERALS) */

 #if !defined(_HAS_ITERATOR_DEBUGGING) \
	&& (defined(_STL_DB) || defined(_STLP_DEBUG))
  #define _HAS_ITERATOR_DEBUGGING	1	/* enable range checks, etc. */
 #endif /* define _HAS_ITERATOR_DEBUGGING */

 #if !defined(_HAS_NOEXCEPT)

  #if _HAS_EXCEPTIONS && _HAS_CPP11 && (404 <= __EDG_VERSION__ || _GCC48)
   #define _HAS_NOEXCEPT	1

  #else /* _HAS_EXCEPTIONS, etc. */
   #define _HAS_NOEXCEPT	0
  #endif /* _HAS_EXCEPTIONS, etc. */

 #endif /* !defined(_HAS_NOEXCEPT) */

 #if _HAS_NOEXCEPT == 0 || !defined(__cplusplus) \
	|| _GCC48 && !_GCC5 && !_CLANG
  #define _NOEXCEPT
  #define _NOEXCEPT_OP(x)	noexcept(true)

 #else /* _HAS_NOEXCEPT == 0, etc. */
  #define _NOEXCEPT			noexcept
  #define _NOEXCEPT_OP(x)	noexcept(x)
 #endif /* _HAS_NOEXCEPT == 0, etc. */

 #if defined(_HAS_NULLPTR_T)

 #elif 409 <= __EDG_VERSION__ || _CLANG || _GCC5
  #define _HAS_NULLPTR_T	1

 #else /* 409 < __EDG_VERSION__, etc. */
  #define _HAS_NULLPTR_T	0
 #endif /* !defined(_HAS_NULLPTR_T) */

 #if !defined(_HAS_STRICT_CONFORMANCE)
  #define _HAS_STRICT_CONFORMANCE	0	/* enable nonconforming extensions */
 #endif /* !defined(_HAS_STRICT_CONFORMANCE) */

 #if defined(_HAS_TRADITIONAL_IOSTREAMS)

 #elif !_HAS_STRICT_CONFORMANCE
  #define _HAS_TRADITIONAL_IOSTREAMS	1	/* enable old iostreams stuff */

 #else /* !_HAS_STRICT_CONFORMANCE */
  #define _HAS_TRADITIONAL_IOSTREAMS	0
 #endif /* !defined(_HAS_TRADITIONAL_IOSTREAMS) */

 #if !defined(_HAS_TRADITIONAL_ITERATORS)
  #define _HAS_TRADITIONAL_ITERATORS	0	/* don't use pointer iterators */
 #endif /* !defined(_HAS_TRADITIONAL_ITERATORS) */

 #if !defined(_HAS_TRADITIONAL_POS_TYPE)
  #define _HAS_TRADITIONAL_POS_TYPE	0	/* make streampos same as streamoff */
 #endif /* !defined(_HAS_TRADITIONAL_POS_TYPE) */

 #if defined(_HAS_TRADITIONAL_STL)

 #elif !_HAS_STRICT_CONFORMANCE
  #define _HAS_TRADITIONAL_STL	1	/* enable older STL extensions */

 #else /* !_HAS_STRICT_CONFORMANCE */
  #define _HAS_TRADITIONAL_STL	0
 #endif /* !defined(_HAS_TRADITIONAL_STL) */

 #if defined(_HAS_CONSTEXPR)

 #elif _HAS_CPP03 && (405 <= __EDG_VERSION__ || _GCC49)
  #define _HAS_CONSTEXPR	1	/* enable constexpr */

 #else /* !defined(_HAS_CONSTEXPR) */
  #define _HAS_CONSTEXPR	0	/* disable constexpr */
 #endif /* !defined(_HAS_CONSTEXPR) */

// FIXME: disable for clang33
#if (defined(__CODEGEARC__) && defined(__clang__))
  #if __clang_major__ >= 4
    #undef  _HAS_CONSTEXPR
    #define _HAS_CONSTEXPR	1	/* enable constexpr */
  #else
    #undef  _HAS_CONSTEXPR
    #define _HAS_CONSTEXPR	0	/* disable constexpr */
  #endif
#endif

 #if _HAS_CONSTEXPR
  #define _CONST_DATA	constexpr
  #define _CONST_FUN	constexpr

 #else /* _HAS_CONSTEXPR */
  #define _CONST_DATA	const
  #define _CONST_FUN
 #endif /* _HAS_CONSTEXPR */

 #define _CONST_FUN0	_CONST_FUN
 #define _CONST_FUN1	const
 #define _CONST_FUN2	const

 #if _HAS_CPP17
  #define _CONST_FUN_17	constexpr

 #else /* _HAS_CPP17 */
  #define _CONST_FUN_17
 #endif /* _HAS_CPP17 */

 #if __EDG__
  #define _CONST_FUNX

 #else /* __EDG__ */
  #define _CONST_FUNX	_CONST_FUN
 #endif /* __EDG__ */

 #if defined(_HAS_DECLTYPE)

 #elif _HAS_CPP11 && (1600 <= _MSC_VER || _GCC44 || 403 <= __EDG_VERSION__)
  #define _HAS_DECLTYPE	1	/* enable decltype */

 #else /* _HAS_DECLTYPE */
  #define _HAS_DECLTYPE	0	/* disable decltype */
 #endif /* _HAS_DECLTYPE */

 #if defined(_HAS_FUNCTION_DELETE)

 #elif _HAS_CPP11 && (_GCC45 || 403 <= __EDG_VERSION__)
  #define _HAS_FUNCTION_DELETE	1	/* enable =delete/default */

 #else /* _HAS_FUNCTION_DELETE */
  #define _HAS_FUNCTION_DELETE	0	/* disable =delete/default */
 #endif /* _HAS_FUNCTION_DELETE */

 #if _HAS_FUNCTION_DELETE
#define _IS_DELETED	= delete

 #else /* _HAS_FUNCTION_DELETE */
#define _IS_DELETED
 #endif /* _HAS_FUNCTION_DELETE */

 #if defined(_HAS_INITIALIZER_LISTS)

 #elif _HAS_CPP11
  #define _HAS_INITIALIZER_LISTS	1	/* enable initializer_list */

 #else /* _HAS_INITIALIZER_LISTS */
  #define _HAS_INITIALIZER_LISTS	0	/* disable initializer_list */
 #endif /* _HAS_INITIALIZER_LISTS */

 #if defined(_HAS_REF_QUALIFIER)

 #elif (409 <= __EDG_VERSION__) || _GCC48
  #define _HAS_REF_QUALIFIER	1	/* enable reference qualifiers */

 #else /* (409 <= __EDG_VERSION__) || _GCC48 */
  #define _HAS_REF_QUALIFIER	0	/* disable reference qualifiers */
 #endif /* _HAS_REF_QUALIFIER */

 #if defined(_HAS_RVALUE_REFERENCES)

 #elif _HAS_CPP11 && (1600 <= _MSC_VER || 400 <= __EDG_VERSION__ || _GCC0X)
  #define _HAS_RVALUE_REFERENCES	1	/* enable rvalue references */

 #else /* _HAS_RVALUE_REFERENCES */
  #define _HAS_RVALUE_REFERENCES	0	/* disable rvalue references */
 #endif /* _HAS_RVALUE_REFERENCES */

 #if defined(_HAS_NEW_RVALUE_REFERENCES)

 #elif _HAS_RVALUE_REFERENCES \
	&& (1600 <= _MSC_VER || 400 <= __EDG_VERSION__ || _GCC45)
  #define _HAS_NEW_RVALUE_REFERENCES	1	/* enable new style rvalues */

 #else /* 400 <= __EDG_VERSION__ */
  #define _HAS_NEW_RVALUE_REFERENCES	0	/* disable new style rvalues */
 #endif /* defined(_HAS_NEW_RVALUE_REFERENCES) */

 #if _HAS_RVALUE_REFERENCES
  #define _REFREF	&&
  #define _LVALREF	&&
  #define _VALREF	&&

 #else /* _HAS_RVALUE_REFERENCES */
  #define _REFREF	const&
  #define _LVALREF	&
  #define _VALREF
 #endif /* _HAS_RVALUE_REFERENCES */

 #if defined(_HAS_SCOPED_ENUM)

 #elif _HAS_CPP11 && (_GCC44 || 403 <= __EDG_VERSION__)
  #define _HAS_SCOPED_ENUM	1	/* enable scoped enums */

 #else /* _HAS_SCOPED_ENUM */
  #define _HAS_SCOPED_ENUM	0	/* disable scoped enums */
 #endif /* _HAS_SCOPED_ENUM */

 #if defined(_HAS_STATIC_ASSERT)

 #elif _HAS_CPP11 && (1600 <= _MSC_VER || _GCC0X || 403 <= __EDG_VERSION__ || defined(__CODEGEARC__))
  #define _HAS_STATIC_ASSERT	1	/* enable static_assert */

 #else /* _HAS_STATIC_ASSERT */
  #define _HAS_STATIC_ASSERT	0	/* disable static_assert */
 #endif /* _HAS_STATIC_ASSERT */

 #if _HAS_STATIC_ASSERT
  #define _STATIC_ASSERT2(test, mesg)	\
	static_assert(test, mesg)

 #else /* _HAS_STATIC_ASSERT */
  #define _STATIC_ASSERT2(test, mesg)	typedef int _Dummy_static_assert
 #endif /* _HAS_STATIC_ASSERT */

 #if defined(_HAS_TEMPLATE_ALIAS)

 #elif _HAS_CPP03 \
	&& (1800 <= _MSC_VER || 402 <= __EDG_VERSION__ || _GCC48 || _CLANG)
  #define _HAS_TEMPLATE_ALIAS	1	/* enable template aliases */
  #define _OTHER

 #else /* _HAS_TEMPLATE_ALIAS */
  #define _HAS_TEMPLATE_ALIAS	0	/* disable template aliases */
  #define _OTHER	:: other	/* [sic] */
 #endif /* _HAS_TEMPLATE_ALIAS */

 #if defined(_HAS_TEMPLATE_TEMPLATE)

 #elif _HAS_CPP11 && _GCC44
  #define _HAS_TEMPLATE_TEMPLATE	1	/* enable template templates */

 #else /* _HAS_TEMPLATE_TEMPLATE */
  #define _HAS_TEMPLATE_TEMPLATE	0	/* disable template templates */
 #endif /* _HAS_TEMPLATE_TEMPLATE */

 #if defined(_HAS_VARIABLE_TEMPLATES)

 #elif _HAS_CPP17 && (_GCC5 || _CLANG || __EDG__)
  #define _HAS_VARIABLE_TEMPLATES	1	/* enable value templates */

 #else /* _HAS_VARIABLE_TEMPLATES */
  #define _HAS_VARIABLE_TEMPLATES	0	/* disable value templates */
 #endif /* _HAS_VARIABLE_TEMPLATES */

 #if defined(_HAS_VARIADIC_TEMPLATES)

 #elif _HAS_CPP11 && (1800 <= _MSC_VER || _GCC0X || 403 <= __EDG_VERSION__)
  #define _HAS_VARIADIC_TEMPLATES	1	/* enable variadics */

 #else /* _HAS_VARIADIC_TEMPLATES */
  #define _HAS_VARIADIC_TEMPLATES	0	/* disable variadics */
 #endif /* _HAS_VARIADIC_TEMPLATES */

 #if _HAS_EXPLICIT_OPERATORS
  #define _EXP_OP	explicit

 #else /* _HAS_EXPLICIT_OPERATORS */
  #define _EXP_OP
 #endif /* _HAS_EXPLICIT_OPERATORS */

 #if !defined(_USE_EXISTING_SYSTEM_NAMES)
  #define _USE_EXISTING_SYSTEM_NAMES	1	/* _Open => open, etc. */
 #endif /* !defined(_USE_EXISTING_SYSTEM_NAMES) */

 #if __STDC_WANT_SAFER_LIB__
  #define __STDC_SAFER_LIB__	200510L
 #endif /* __STDC_WANT_SAFER_LIB__ */

 #define _CDECL
 #define _CCDECL
 #define _CRTDECL
 #define _CTHIS
 #define _PCDECL
 #define _THIS

#if defined(__CODEGEARC__)
   #if !defined(_CRTIMP2)
     #if defined(_BUILDRTLDLL)
       #define _CRTIMP2 __declspec(dllexport)
       #define _CRTIMP2_NR __declspec(dllexport,noreturn)
       #define _DLL 1
     #else
       #if defined(_RTLDLL)
	 #define _CRTIMP2 __declspec(dllimport)
	 #define _CRTIMP2_NR __declspec(dllimport,noreturn)
	 #define _DLL 1
       #else
	 #define _CRTIMP2
	 #define _CRTIMP2_NR __declspec(noreturn)
       #endif
     #endif
     #define _MRTIMP2	_CRTIMP2
     #define _CRTIMP2P  _CRTIMP2
     #define _CRTIMP    _CRTIMP2
  #endif

  #define _MRTIMP2NP
  #define _MRTIMP2_NCEE
  #define _MRTIMP2_NCEEPURE
  #define _MRTIMP2_NPURE_NCEEPURE
  #define _PGLOBAL
  #define __PURE_APPDOMAIN_GLOBAL

  #define _IN_CNT(x)      // disable old macros by default
  #define _OUT_CNT(x)
  #define _IN
  #define _IN_Z
  #define _IN_OPT_Z
  #define _OUT

#else
 #undef _CRTIMP	/* collides with mingw library */
 #undef _CRTIMP2
 #undef _MRTIMP2

 #define _CRTIMP
 #define _CRTIMPX
 #define _CRTIMP2
 #define _CRTIMP2P

 #define _CRTIMP2_NR
 #define _CRTIMP2X

 #define _MRTIMP2
 #define _MRTIMP2NP
 #define _MRTIMP2_NCEE
 #define _MRTIMP2_NCEEPURE
 #define _MRTIMP2_NPURE_NCEEPURE
 #define _PGLOBAL
 #define __PURE_APPDOMAIN_GLOBAL
#endif

		/* NAMESPACE CONTROL */

 #if defined(__cplusplus)
namespace std {}
 #if defined(_C_AS_CPP)
  #define _NO_CPP_INLINES	/* just for compiling C library as C++ */
 #endif /* _C_AS_CPP */

 #if 0 < _ALT_NS

  #if defined(_C_AS_CPP)	/* define library in _Dinkum_std */
   #define _STD_BEGIN	namespace _Dinkum_std {_C_LIB_DECL
   #define _STD_END		_END_C_LIB_DECL }

  #else /* _C_AS_CPP */
   #define _STD_BEGIN	namespace _Dinkum_std {
   #define _STD_END		}
  #endif /* _C_AS_CPP */

  #if _ALT_NS == 1	/* define C library in global namespace */
    #define _C_STD_BEGIN
    #define _C_STD_END
    #define _CSTD		::
    #define _STD			::_Dinkum_std::

  #elif _ALT_NS == 2	/* define both C and C++ in namespace _Dinkum_std */
    #define _C_STD_BEGIN	namespace _Dinkum_std {
    #define _C_STD_END	}
    #define _CSTD		::_Dinkum_std::
    #define _STD			::_Dinkum_std::

  #else	/* define C in namespace _Dinkum_std_c and C++ in _Dinkum_std */
    #define _C_STD_BEGIN	namespace _Dinkum_std_c {
    #define _C_STD_END	}
    #define _CSTD		::_Dinkum_std_c::
    #define _STD			::_Dinkum_std::
  #endif /* _ALT_NS */
namespace _Dinkum_std {}
namespace _Dinkum_std_c {}
namespace std {
	using namespace _Dinkum_std;
	using namespace _Dinkum_std_c;
	}
using namespace _Dinkum_std_c;

 #elif defined(_STD_USING)

  #if defined(_C_AS_CPP)	/* define library in std */
   #define _STD_BEGIN	namespace std {_C_LIB_DECL
   #define _STD_END		_END_C_LIB_DECL }

  #else /* _C_AS_CPP */
   #define _STD_BEGIN	namespace std {
   #define _STD_END		}
  #endif /* _C_AS_CPP */

   #define _C_STD_BEGIN	namespace std {
   #define _C_STD_END	}
   #define _CSTD		::std::
   #define _STD			::std::

 #else /* _ALT_NS == 0 && !defined(_STD_USING) */

  #if defined(_C_AS_CPP)	/* define C++ library in std, C in global */
   #define _STD_BEGIN	_C_LIB_DECL
   #define _STD_END		_END_C_LIB_DECL

  #else /* _C_AS_CPP */
   #define _STD_BEGIN	namespace std {
   #define _STD_END		}
  #endif /* _C_AS_CPP */

   #define _C_STD_BEGIN
   #define _C_STD_END
   #define _CSTD		::
   #define _STD			::std::
 #endif /* _ALT_NS etc. */

  #define _X_STD_BEGIN	namespace std {
  #define _X_STD_END	}
  #define _XSTD			::std::

  #if defined(_STD_USING) && _ALT_NS < 3
   #undef _GLOBAL_USING		/* C names in std namespace */

  #elif !defined(_MSC_VER) || 1300 <= _MSC_VER || _GHS
   #define _GLOBAL_USING	1	/* c* headers import C names to std */
  #endif /* defined(_STD_USING) */

  #if defined(_STD_LINKAGE)
   #define _C_LIB_DECL		extern "C++" {	/* C has extern "C++" linkage */
  #else /* defined(_STD_LINKAGE) */
   #define _C_LIB_DECL		extern "C" {	/* C has extern "C" linkage */
  #endif /* defined(_STD_LINKAGE) */
  #define _END_C_LIB_DECL	}
  #define _EXTERN_C			extern "C" {
  #define _END_EXTERN_C		}

 #ifndef _NO_LOCALES
  #define _NO_LOCALES	0	/* define as 1 to disable named locales */
 #endif /* _NO_LOCALES */

 #else /* __cplusplus */
  #define _STD_BEGIN
  #define _STD_END
  #define _STD

  #define _X_STD_BEGIN
  #define _X_STD_END
  #define _XSTD

  #define _C_STD_BEGIN
  #define _C_STD_END
  #define _CSTD

  #define _C_LIB_DECL
  #define _END_C_LIB_DECL
  #define _EXTERN_C
  #define _END_EXTERN_C
 #endif /* __cplusplus */

 #define _Restrict

 #if defined(__GNUC__) && defined(__cplusplus)
  #define restrict
 #endif /* defined(__GNUC__) && defined(__cplusplus) */

 #ifdef __cplusplus
_STD_BEGIN
typedef bool _Bool;
_STD_END
 #endif /* __cplusplus */

 #ifndef _HAS_OPENCL
  #define _HAS_OPENCL	0
 #endif /* _HAS_OPENCL */

#define _FINVERT(x)	(FLIT(1.0) / (x))
#define _FDIV(x, y)	((x) / (y))

 #if defined(__OXILI_CLRUNTIME)	/* compiler test */
 typedef char *va_list;	/* Oxili does not allow variable arguments */

#define _PASTE(a, b)	__cl__internal__##a##b
#define _STATIC_CONST	static const \
	__attribute__((address_space(2)))
#define _EXTERN_CONST	/* extern */ const \
	__attribute__((address_space(2)))
#define _EXTERN_CONST_DECL	extern const \
	__attribute__((address_space(2)))
#define _EXTERN_CONST_DEF	/* extern */ const \
	__attribute__((address_space(2)))

void *__attribute__((overloadable)) __qcom_memcpy_DW(void *dest,
	const __attribute__((address_space(2))) void *src, int num);
void *__attribute__((overloadable)) __qcom_memcpy_DW(void *dest,
	const void *src, int num);

 #else /* defined(__OXILI_CLRUNTIME) */
#include <stdarg.h>

#define _PASTE(a, b)	a##b
#define _STATIC_CONST	static const

  #if !defined(_EXTERN_CONST)
#define _EXTERN_CONST	/* extern */ const
#define _EXTERN_CONST_DECL	extern const

   #if defined(__cplusplus)
#define _EXTERN_CONST_DEF	extern const

   #else /* defined(__cplusplus) */
#define _EXTERN_CONST_DEF	const
   #endif /* defined(__cplusplus) */

  #endif /* defined(_EXTERN_CONST) */
 #endif /* defined(__OXILI_CLRUNTIME) */

		/* VC++ COMPILER PARAMETERS */
#define _THROW_N(x, y)	_THROW_NCEE(x, y)

 #if defined(_WIN32_C_LIB)
  #ifndef _VA_LIST_DEFINED

   #if defined(__BORLANDC__)

   #elif defined(_M_ALPHA)
typedef struct
	{	/* define va_list for Alpha */
	char *a0;
	int offset;
	} va_list;

   #else /* defined(_M_ALPHA) */
typedef char *va_list;
   #endif /* defined(_M_ALPHA) */

   #define _VA_LIST_DEFINED
  #endif /* _VA_LIST_DEFINED */

 #endif /* defined(_WIN32_C_LIB) */

 #ifdef __NO_LONG_LONG

 #elif defined(_MSC_VER) && !_GHS
  #define _LONGLONG	__int64
  #define _ULONGLONG	unsigned __int64
  #define _LLONG_MAX	0x7fffffffffffffff
  #define _ULLONG_MAX	0xffffffffffffffff

 #else /* defined(__NO_LONG_LONG) && !defined (_MSC_VER) */
  #define _LONGLONG	long long
  #define _ULONGLONG	unsigned long long
  #define _LLONG_MAX	0x7fffffffffffffffLL
  #define _ULLONG_MAX	0xffffffffffffffffULL
 #endif /* __NO_LONG_LONG */

		/* MAKE MINGW LOOK LIKE WIN32 HEREAFTER */

 #if defined(__MINGW32__) || defined(__CYGWIN__)
  #define _WIN32_C_LIB	1
 #endif /* defined(__MINGW32__) etc. */

 #if _WIN32_C_LIB && !defined(__BORLANDC__)
  #undef _HAS_POSIX_C_LIB

  #if !defined(_SIZE_T) && !defined(_SIZET) \
	&& !defined(_BSD_SIZE_T_DEFINED_) \
	&& !defined(_SIZE_T_DEFINED)
   #define _SIZE_T
   #define _SIZET
   #define _BSD_SIZE_T_DEFINED_
   #define _STD_USING_SIZE_T
   #define _SIZE_T_DEFINED

typedef _Sizet size_t;

   #ifdef __cplusplus
namespace _Dinkum_std {
	using ::size_t;
	}
namespace _Dinkum_std_c {
	using ::size_t;
	}
   #endif /* __cplusplus */

  #endif /* !defined(_SIZE_T) etc. */

  #if !defined(_WCHAR_T_DEFINED)
   #define _WCHAR_T_DEFINED
   #define _WCHAR_T_
   #undef __need_wchar_t

   #ifndef __cplusplus
typedef unsigned short wchar_t;
   #endif /* __cplusplus */

  #endif /* !defined(_WCHAR_T) etc. */
 #endif /* _WIN32_C_LIB */

		/* FLOATING-POINT PROPERTIES */
#define _DBIAS	0x3fe	/* IEEE format double and float */
#define _DOFF	4
#define _FBIAS	0x7e
#define _FOFF	7

		/* INTEGER PROPERTIES */
#define _BITS_BYTE	8
#define _C2			1	/* 0 if not 2's complement */
#define _MBMAX		8	/* MB_LEN_MAX */
#define _ILONG		1	/* 0 if 16-bit int */

 #if defined(__s390__) || defined(__CHAR_UNSIGNED__) \
	|| defined(_CHAR_UNSIGNED)
  #define _CSIGN	0	/* 0 if char is not signed */

 #else /* defined(__s390__) etc. */
  #define _CSIGN	1
 #endif /* defined(__s390__) etc. */

#define _MAX_EXP_DIG	8	/* for parsing numerics */
#define _MAX_INT_DIG	32
#define _MAX_SIG_DIG	48

 #if defined(_LONGLONG)
typedef _LONGLONG _Longlong;
typedef _ULONGLONG _ULonglong;

 #else /* defined(_LONGLONG) */
typedef long _Longlong;
typedef unsigned long _ULonglong;
 #define _LLONG_MAX		0x7fffffffL
 #define _ULLONG_MAX	0xffffffffUL
 #endif /* defined(_LONGLONG) */

 #ifdef __cplusplus
_STD_BEGIN
namespace tr1 {	// TR1 ADDITIONS
using ::_Longlong;
using ::_ULonglong;
}	// namespace tr1
_STD_END
 #endif /* __cplusplus */

		/* wchar_t AND wint_t PROPERTIES */

 #if defined(_WCHAR_T) || defined(_WCHAR_T_DEFINED) \
	|| defined (_MSL_WCHAR_T_TYPE)
  #define _WCHART
 #endif /* defined(_WCHAR_T) || defined(_WCHAR_T_DEFINED) */

 #ifdef __cplusplus
  #define _WCHART

 #if 1600 <= _MSC_VER || _GCC5
typedef unsigned short _Wchart;
typedef unsigned short _Wintt;

 #else /* 1600 <= _MSC_VER */

 #if !__MINGW32__
typedef wchar_t wint_t;
 #endif /* !__MINGW32__ */

typedef wchar_t _Wchart;
typedef wint_t _Wintt;
 #endif /* 1600 <= _MSC_VER */

 #endif /* __cplusplus */

		/* wctype_t PROPERTIES */

 #if 1900 <= _MSC_VER
 #define _WCTYPE_T_DEFINED
 #define _WCTYPET
typedef unsigned short wctype_t;
 #endif /* 1900 <= _MSC_VER */

 #if defined(_MSL_WCHAR_T_TYPE)
  #define _WCMIN	0
  #define _WCMAX	0xffff

  #ifndef __cplusplus
typedef wchar_t _Wchart;
typedef wint_t _Wintt;
  #endif /* __cplusplus */

  #define mbstate_t	_DNK_mbstate_t
  #define _Mbstatet	_DNK__Mbstatet
  #define wctype_t	_DNK_wctype_t
  #define wint_t	_DNK_wint_t
  #define _MSC_VER	1

 #elif defined(_WIN32_C_LIB)
  #define _WCMIN	0
  #define _WCMAX	0xffff

  #ifndef __cplusplus
typedef unsigned short _Wchart;
typedef unsigned short _Wintt;
  #endif /* __cplusplus */

 #elif defined(__WCHAR_TYPE__)
  #define _WCMIN	(-_WCMAX - _C2)
  #define _WCMAX	0x7fffffff	/* assume signed 32-bit wchar_t */

  #ifndef __cplusplus
typedef __WCHAR_TYPE__ _Wchart;
typedef __WCHAR_TYPE__ _Wintt;
  #endif /* __cplusplus */

 #else /* default wchar_t/wint_t */
  #define _WCMIN	(-_WCMAX - _C2)
  #define _WCMAX	0x7fffffff

  #ifndef __cplusplus
typedef long _Wchart;
typedef long _Wintt;
  #endif /* __cplusplus */

 #endif /* compiler/library type */

		/* POINTER PROPERTIES */
#define _NULL		0	/* 0L if pointer same as long */

		/* signal PROPERTIES */

 #if defined(_WIN32_C_LIB)
#define _SIGABRT	22
#define _SIGMAX		32

 #else /* defined(_WIN32_C_LIB) */
#define _SIGABRT	6
#define _SIGMAX		44
 #endif /* defined(_WIN32_C_LIB) */

		/* stdarg PROPERTIES */
typedef va_list _Va_list;

 #if _HAS_C99

 #if __EDG__ && !defined(__x86_64)
  #undef va_copy
 #endif /* __EDG__ */

 #ifndef va_copy
_EXTERN_C
_CRTIMP2 void _Vacopy(va_list *, va_list);
_END_EXTERN_C
  #define va_copy(apd, aps)	_Vacopy(&(apd), aps)
 #endif /* va_copy */

 #endif /* _HAS_C99 */

_C_STD_BEGIN
		/* stdlib PROPERTIES */
#define _EXFAIL	1	/* EXIT_FAILURE */

 #ifndef _Atexit
_EXTERN_C
_CRTIMP2 void _Atexit(void (*)(void));
_END_EXTERN_C
 #endif /* _Atexit */

		/* stdio PROPERTIES */
#define _FNAMAX	260
#define _FOPMAX	20
#define _TNAMAX	16

 #define _FN_WIDE	0
 #define _FD_TYPE	signed char
 #define _FD_NO(str) ((str)->_Handle)
 #define _FD_VALID(fd)	(0 <= (fd))	/* fd is signed integer */
 #define _FD_INVALID	(-1)
 #define _SYSCH(x)	x
typedef char _Sysch_t;

		/* STORAGE ALIGNMENT PROPERTIES */

 #if defined(_LP64) || defined(__x86_64)	/* compiler test */
  #define _MEMBND	4U /* 16-byte boundaries (2^^4) */

 #else /* defined(_LP64) etc. */
  #define _MEMBND	3U /* eight-byte boundaries (2^^3) */
 #endif /* defined(_LP64) etc. */

		/* time PROPERTIES */
#define _CPS	1000000

#define _TBIAS	((70 * 365LU + 17) * 86400)
_C_STD_END

		/* MULTITHREAD PROPERTIES */

 #if _MULTI_THREAD
 #define _BEGIN_LOCK(kind)	{_STD _Lockit _Lock(kind);
 #define _END_LOCK()		}

_EXTERN_C
_CRTIMP2 void _Locksyslock(int);
_CRTIMP2 void _Unlocksyslock(int);
_END_EXTERN_C

 #else /* _MULTI_THREAD */
 #define _BEGIN_LOCK(kind)	{
 #define _END_LOCK()		}

  #define _Locksyslock(x)	(void)0
  #define _Unlocksyslock(x)	(void)0
 #endif /* _MULTI_THREAD */

		/* LOCK MACROS */
 #define _LOCK_LOCALE		0
 #define _LOCK_MALLOC		1
 #define _LOCK_STREAM		2
 #define _LOCK_DEBUG		3
 #define _LOCK_CALL_ONCE	4
 #define _LOCK_CALL_ONCEEX	5
 #define _LOCK_AT_THREAD_EXIT	6
 #define _MAX_LOCK			8	/* one more than highest lock number */

 #if _IOSTREAM_OP_LOCKS
  #define _MAYBE_LOCK

 #else /* _IOSTREAM_OP_LOCKS */
  #define _MAYBE_LOCK	\
	if (_Locktype == _LOCK_MALLOC || _Locktype == _LOCK_DEBUG \
		|| _Locktype == _LOCK_CALL_ONCEEX)
 #endif /* _IOSTREAM_OP_LOCKS */

 #ifdef __cplusplus
_STD_BEGIN
enum _Uninitialized
	{	// tag for suppressing initialization
	_Noinit
	};

extern "C++" {	// in case of _C_AS_CPP
		// CLASS _Lockit
class _CRTIMP2 _Lockit
	{	// lock while object in existence -- MUST NEST
public:
  #if !_MULTI_THREAD
	_Lockit()
		{	// do nothing
		}

	explicit _Lockit(int)
		{	// do nothing
		}

	~_Lockit() _NOEXCEPT
		{	// do nothing
		}

  #else /* !_MULTI_THREAD */
	_Lockit()
		: _Locktype(_LOCK_MALLOC)
		{	// set default lock
		_MAYBE_LOCK
			_Locksyslock(_Locktype);
		}

	explicit _Lockit(int _Kind)
		: _Locktype(_Kind)
		{	// set the lock
		_MAYBE_LOCK
			_Locksyslock(_Locktype);
		}

	~_Lockit() _NOEXCEPT
		{	// clear the lock
		_MAYBE_LOCK
			_Unlocksyslock(_Locktype);
		}
  #endif /* _MULTI_THREAD */

//private:
	_Lockit(const _Lockit&);			// not defined
	_Lockit& operator=(const _Lockit&);	// not defined

private:
	int _Locktype;
	};

  #if !_MULTI_THREAD || !_IOSTREAM_OP_LOCKS
class _Mutex
	{	// lock under program control
public:
	_Mutex(_Uninitialized)
		{	// do nothing
		}

	_Mutex()
		{	// do nothing
		}

	void _Lock()
		{	// do nothing
		}

	void _Unlock()
		{	// do nothing
		}
	};

  #else /* !_MULTI_THREAD || !_IOSTREAM_OP_LOCKS */
class _CRTIMP2 _Mutex
	{	// lock under program control
public:
	_Mutex(_Uninitialized)
		{	// do nothing
		}

	_Mutex();
	~_Mutex() _NOEXCEPT;
	void _Lock();
	void _Unlock();

private:
	_Mutex(const _Mutex&);				// not defined
	_Mutex& operator=(const _Mutex&);	// not defined
	void *_Mtx;
	};
  #endif /* !_MULTI_THREAD || !_IOSTREAM_OP_LOCKS */
}	// extern "C++"
_STD_END
 #endif /* __cplusplus */

  #define _NO_RET(fun)	void fun

 #if 0 < __GNUC__ || defined(__CODEGEARC__)
  #define _NO_RETURN(fun)	void fun __attribute__((__noreturn__))
  #define _NO_RETURN_NOEXCEPT(fun)	void fun _NOEXCEPT \
	__attribute__((__noreturn__))

 #else /* 0 < __GNUC__ */
  #define _NO_RETURN(fun)	void fun
  #define _NO_RETURN_NOEXCEPT(fun)	void fun _NOEXCEPT
 #endif /* 0 < __GNUC__ */

  #define _NO_RETURN_MEMBER(fun)	void fun

#define _STRINGIZEX(x)	#x
#define _STRINGIZE(x)	_STRINGIZEX(x)

 #if _HAS_CPP11
  #define _POINTER_TO(x)	_STD pointer_traits<pointer>::pointer_to(x)

 #else /* _HAS_CPP11 */
  #define _POINTER_TO(x)	&(x)
 #endif /* _HAS_CPP11 */

 #if _HAS_INLINE_VARIABLES
#define _INLINE_VAR	inline

 #else /* _HAS_INLINE_VARIABLES */
#define _INLINE_VAR
 #endif /* _HAS_INLINE_VARIABLES */

#define _HAS_ENUM_CLASS	!__EDG__

 #ifndef _HAS_DEDUCTION_GUIDES
#if defined(__CODEGEARC__)
#define _HAS_DEDUCTION_GUIDES 1
#else
#define _HAS_DEDUCTION_GUIDES	(8 <= __GNUC__)
#endif
 #endif /* _HAS_DEDUCTION_GUIDES */

#endif /* _YVALS */

/*
 * Copyright (c) by P.J. Plauger. All rights reserved.
 * Consult your license regarding permissions and restrictions.
V8.03a/17:1422 */
