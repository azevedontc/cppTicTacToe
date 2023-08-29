/*  stdarg.h

    Definitions for accessing parameters in functions that accept
    a variable number of arguments.

*/

/*
 *      C/C++ Run Time Library - Version 29.0
 *
 *      Copyright (c) 1987, 2023 by Embarcadero Technologies, Inc.
 *      All Rights Reserved.
 *
 */

/* $Revision: 37786 $ */

#ifndef __STDARG_H
#define __STDARG_H
#define _INC_STDARG  /* MSC Guard name */

#ifdef __VARARGS_H
#error Cannot include both STDARG.H and VARARGS.H
#endif

#include <_stddef.h>

#ifdef __cplusplus
namespace std {
#endif /* __cplusplus */

#if defined(__clang__)

#ifndef _VA_LIST_T
typedef __builtin_va_list va_list;
#define _VA_LIST_T
#endif
#define va_start(ap, param) __builtin_va_start(ap, param)
#define va_end(ap)          __builtin_va_end(ap)
#define va_arg(ap, type)    __builtin_va_arg(ap, type)
#define va_copy(dest, src)  __builtin_va_copy(dest, src)
#else

typedef void _FAR *va_list;

#define __size(x) ((sizeof(x)+sizeof(int)-1) & ~(sizeof(int)-1))

#ifdef __cplusplus
#define va_start(ap, parmN) ((void)((ap) = (std::va_list)((char _FAR *)(&parmN)+__size(parmN))))
#else
#define va_start(ap, parmN) ((void)((ap) = (va_list)((char _FAR *)(&parmN)+__size(parmN))))
#endif

#define va_arg(ap, type) (*(type _FAR *)(((*(char _FAR *_FAR *)&(ap))+=__size(type))-(__size(type))))
#define va_end(ap)          ((void)0)

#if !defined(__STDC__)
#define _va_ptr             (...)
#endif

#endif  /* __clang__ */

#ifdef __cplusplus
} // std
#endif /* __cplusplus */

#endif  /* __STDARG_H */

#if defined(__cplusplus) && (defined(__clang__) || !defined(__XUSING_CNAME__)) && !defined(__STDARG_H_USING_LIST)
#define __STDARG_H_USING_LIST
     using std::va_list;
#endif /* __XUSING_CNAME__ */
