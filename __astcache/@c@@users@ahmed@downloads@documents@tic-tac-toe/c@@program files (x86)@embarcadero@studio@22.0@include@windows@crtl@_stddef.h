/*  _stddef.h

    multi-includable Definitions for common types, and NULL

*/

/*
 *      C/C++ Run Time Library - Version 29.0
 *
 *      Copyright (c) 1987, 2023 by Embarcadero Technologies, Inc.
 *      All Rights Reserved.
 *
 */

/* $Revision: 37786 $ */

#ifndef ___STDDEF_H
#define ___STDDEF_H

#if !defined(___DEFS_H)
#include <_defs.h>
#endif

#ifndef NULL
#include <_null.h>
#endif

#define __STDC_LIB_EXT1__ 200509L
#if !defined(__STDC_WANT_LIB_EXT1__)
#define __STDC_WANT_LIB_EXT1__ 1
#endif

/* Full locale support is on by default now.  To get the previous behavior,
   define __SIMPLE_LOCALES__
*/
#if !defined(__SIMPLE_LOCALES__) && !defined(__USELOCALES__)
#define __USELOCALES__
#endif

#if !defined(_SSIZE_T_DEFINED) && !defined(__STDC__)
#define _SSIZE_T_DEFINED
#if defined(_WIN64)
typedef __int64 ssize_t;
#else
typedef int ssize_t;
#endif
#endif

#ifdef __cplusplus
namespace std {
#endif /* __cplusplus */

/* Define __STD to expand to std:: or nothing depending on being in C++. */
#ifdef __cplusplus
#  define __STD std::
#else
#  define __STD
#endif

#if defined(__cplusplus) && defined(__clang__)
#ifndef _MAX_ALIGN_T_DEFINED
typedef union {
	double __d;
	long double __ld;
	} max_align_t;	// most aligned type
#define _MAX_ALIGN_T_DEFINED
#endif
#endif
 
/*
   Define the size_t type in the std namespace if in C++ or globally if in C.
   If we're in C++, make the _SIZE_T macro expand to std::size_t
*/

#if !defined(_SIZE_T) && !defined(_SIZE_T_DEFINED)
#  define _SIZE_T_DEFINED
#if defined(_WIN64)
   typedef unsigned __int64 size_t;
#else
   typedef unsigned int size_t;
#endif
#  if defined(__cplusplus)
#    define _SIZE_T std::size_t
#  else
#    define _SIZE_T size_t
#  endif
#endif

#if __STDC_WANT_LIB_EXT1__
#define _RESTRICT
#endif

#if !defined(_RSIZE_T_DEFINED) && __STDC_WANT_LIB_EXT1__
#define _RSIZE_T_DEFINED
typedef size_t rsize_t;
#endif

#if !defined(_ERRNO_T_DEFINED) && __STDC_WANT_LIB_EXT1__
#define _ERRNO_T_DEFINED
typedef int errno_t;
#endif

#if !defined(RC_INVOKED)

#if defined(__STDC__)
#pragma warn -nak
#endif

#endif  /* !RC_INVOKED */

#ifndef _PTRDIFF_T
#define _PTRDIFF_T
#if defined(_WIN64)
typedef __int64 ptrdiff_t;
#else
typedef int     ptrdiff_t;
#endif
#endif

#if defined(__clang__)
#define offsetof(__s_name, __m_name)  __builtin_offsetof(__s_name, __m_name)
#else
#define offsetof(__s_name, __m_name)  (_SIZE_T)&(((__s_name _FAR *)0)->__m_name)
#endif

#ifndef __cplusplus
#if !defined(_WCHAR_T) && !defined(_WCHAR_T_DEFINED)
#define _WCHAR_T
#define _WCHAR_T_DEFINED  /* For WINDOWS.H */
typedef unsigned short wchar_t;
#endif
#endif

/*
   Define the wint_t type in the std namespace if in C++ or globally if in C.
   If we're in C++, make the _WINT_T macro expand to std::wint_t
*/

#if !defined(_WINT_T)
typedef wchar_t wint_t;
#  ifdef __cplusplus
#    define _WINT_T std::wint_t
#  else
#    define _WINT_T wint_t
#  endif
#endif

#ifndef _WCTYPE_T_DEFINED
typedef wchar_t wctype_t;
#define _WCTYPE_T_DEFINED
#endif

#ifndef _MAX_ALIGN_T_DEFINED
typedef double max_align_t;
#define _MAX_ALIGN_T_DEFINED
#endif

#if defined(__cplusplus) && (__cplusplus >= 201103L)
typedef decltype(nullptr) nullptr_t;
#endif

#ifdef __cplusplus
extern "C" {
#endif
extern unsigned long _RTLENTRY _EXPFUNC __threadid(void);
#define _threadid (__threadid())

#ifdef  __cplusplus
}
#endif

#if !defined(RC_INVOKED)

#if defined(__STDC__)
#pragma warn .nak
#endif

#endif  /* !RC_INVOKED */

#ifdef __cplusplus
} // std
#endif /* __cplusplus */

#endif  /* __STDDEF_H */

#if defined(__cplusplus) && !defined(__XUSING_CNAME__) && !defined(___STDDEF_H_USING_LIST)
#define ___STDDEF_H_USING_LIST
     using std::ptrdiff_t;
     using std::__threadid;
     using std::size_t;
     using std::wint_t;
     using std::wctype_t;
     using std::max_align_t;

#if __STDC_WANT_LIB_EXT1__
     using std::errno_t;
     using std::rsize_t;
#endif

#endif /* __XUSING_CNAME__ */
