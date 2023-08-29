/*  _defs.h

    Common definitions for pointer size and calling conventions.

    Calling conventions:
    _RTLENTRY       Specifies the calling convention used by the RTL

    _USERENTRY      Specifies the calling convention the RTL expects user
                    compiled functions to use (for callbacks)

    Export (and size for DOS) information:
    _EXPCLASS       Exports class if building DLL version of library
                    For DOS16 also provides size information

    _EXPDATA        Exports data if building DLL version of library

    _EXPFUNC        Exports function if building DLL version of library
                    For DOS16 also provides size information

    Obsolete versions:
    _Cdecl          Use _RTLENTRY
    _CLASSTYPE      Use _EXPCLASS
    _FARFUNC        Use _EXPFUNC
    _FARCALL        Use _EXPFUNC and declare function explicity
    _FAR            Promotes data pointers to far in DLLs (DOS16 only)
*/

/*
 *      C/C++ Run Time Library - Version 29.0
 *
 *      Copyright (c) 1991, 2023 by Embarcadero Technologies, Inc.
 *      All Rights Reserved.
 *
 */


/* $Revision: 38104 $ */

#ifndef ___DEFS_H
#define ___DEFS_H

#if defined(_WIN32) && !defined(_WIN64)
#if !defined(__WIN32__)
#define __WIN32__ 1
#endif
#endif

/* FIXME: Temporary workaround for issue with statics and #pragma startup in clang */
#if defined(_WIN64)
#define _STATIC
#else
#define _STATIC static
#endif

#if defined(_WIN64)
#define _RTLENTRY
#define _USERENTRY
#else
#define _RTLENTRY  __cdecl
#define _USERENTRY __cdecl
#endif

#if defined(__clang__)
#define _INLINE    inline
#else
#define _INLINE    __inline
#endif

#if defined(__PAS__)
#    define _RTLENTRYF  __pascal
#    define _USERENTRYF __pascal
#else
#    define _RTLENTRYF  _RTLENTRY
#    define _USERENTRYF _USERENTRY
#endif

#define _FAR
#if defined(_BUILDRTLDLL)
#if defined(__clang__)
#    define _EXPCLASS  __declspec(dllexport)
#    define _EXPDATA   __declspec(dllexport)
#    define _EXPFUNC   __declspec(dllexport)
#else
#    define _EXPCLASS  __export
#    define _EXPDATA   __export
#    define _EXPFUNC   __export
#endif
#elif defined(_RTLDLL)
#if defined(__clang__)
#    define _EXPCLASS  __declspec(dllimport)
#    define _EXPDATA   __declspec(dllimport)
#    define _EXPFUNC
#else
#    define _EXPCLASS  __import
#    define _EXPDATA   __import
#    define _EXPFUNC
#endif
#else
#    define _EXPCLASS
#    define _EXPDATA
#    define _EXPFUNC
#endif

#if !defined(_NO_RETURN_DECL)
  #define _NO_RETURN_DECL	__declspec(noreturn)
#endif

#if 0  /* No longer used */
#define _Cdecl      _RTLENTRY
#define _CLASSTYPE  _EXPCLASS
#define _FARFUNC    _EXPFUNC
#define _FARCALL    _EXPFUNC
#if !defined(__CODEGEARC__)
#define _CType      _RTLENTRYF
#endif
#endif

#endif  /* ___DEFS_H */
