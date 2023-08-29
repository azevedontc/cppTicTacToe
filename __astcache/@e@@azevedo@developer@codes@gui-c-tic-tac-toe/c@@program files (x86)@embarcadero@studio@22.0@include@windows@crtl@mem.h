/*  mem.h

    Memory manipulation functions

*/

/*
 *      C/C++ Run Time Library - Version 29.0
 *
 *      Copyright (c) 1987, 2023 by Embarcadero Technologies, Inc.
 *      All Rights Reserved.
 *
 */

/* $Revision: 37786 $ */

#if !defined(__MEM_H)
#define __MEM_H

#include <_stddef.h>

#if !defined(RC_INVOKED)

#if defined(__STDC__)
#pragma warn -nak
#endif

#endif  /* !RC_INVOKED */


#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
namespace std {
#endif

#if __STDC_WANT_LIB_EXT1__
errno_t _RTLENTRY  _EXPFUNC memcpy_s(void * _RESTRICT __dest, rsize_t __destmax,
				     const void * _RESTRICT __src, rsize_t __n);
errno_t _RTLENTRY  _EXPFUNC memmove_s(void * _RESTRICT __dest, rsize_t __destmax,
				      const void * _RESTRICT __src, rsize_t __n);
errno_t _RTLENTRY  _EXPFUNC memset_s(void * _RESTRICT __dest, rsize_t __destmax,
				     int __c, rsize_t __n);
errno_t _RTLENTRY  _EXPFUNC wmemcpy_s(wchar_t * _RESTRICT __dest, rsize_t __destmax,
				      const wchar_t * _RESTRICT __src, rsize_t __n);
errno_t _RTLENTRY  _EXPFUNC wmemmove_s(wchar_t * _RESTRICT __dest, rsize_t __destmax,
				       const wchar_t * _RESTRICT __src, rsize_t __n);
errno_t _RTLENTRY  _EXPFUNC wmemset_s(wchar_t * _RESTRICT __dest, rsize_t __destmax,
				     wchar_t __c, rsize_t __n);
#endif

void _FAR * _RTLENTRY  _EXPFUNC memccpy(void _FAR *__dest, const void _FAR *__src,
                                        int __c, _SIZE_T __n);
int         _RTLENTRY  _EXPFUNC memcmp(const void _FAR *__s1, const void _FAR *__s2,
                                       _SIZE_T __n);
void _FAR * _RTLENTRY  _EXPFUNC memcpy(void _FAR *__dest, const void _FAR *__src,
                                       _SIZE_T __n);
int         _RTLENTRY  _EXPFUNC memicmp(const void _FAR *__s1, const void _FAR *__s2,
                                        _SIZE_T __n);
void _FAR * _RTLENTRYF _EXPFUNC memmove(void _FAR *__dest, const void _FAR *__src,
                                        _SIZE_T __n);
void _FAR * _RTLENTRYF _EXPFUNC memset(void _FAR *__s, int __c, _SIZE_T __n);

wchar_t *   _RTLENTRY  _EXPFUNC wmemset(wchar_t *__s, int __c, _SIZE_T __n);
wchar_t *   _RTLENTRY  _EXPFUNC wmemcpy(wchar_t *__dest, const wchar_t *__src, _SIZE_T __n);
wchar_t *   _RTLENTRY  _EXPFUNC wmemmove(wchar_t *__dest, const wchar_t *__src, _SIZE_T __n);
wchar_t *   _RTLENTRY  _EXPFUNC wmemchr(const wchar_t *__s, wchar_t __c, _SIZE_T __n);
int         _RTLENTRY  _EXPFUNC wmemcmp(const wchar_t *__s1, const wchar_t *__s2, _SIZE_T __n);

/* Old names */
wchar_t *   _RTLENTRY  _EXPFUNC _wmemset(wchar_t *__s, int __c, _SIZE_T __n);
wchar_t *   _RTLENTRY  _EXPFUNC _wmemcpy(wchar_t *__dest, const wchar_t *__src, _SIZE_T __n);

#if defined(__cplusplus)
extern "C++"
{
          void    * _RTLENTRY _EXPFUNC memchr(void *__s, int __c, _SIZE_T __n);
    const void    * _RTLENTRY _EXPFUNC memchr(const void *__s, int __c, _SIZE_T __n);
          wchar_t * _RTLENTRY _EXPFUNC _wmemchr(wchar_t *__s, int __c, _SIZE_T __n);
    const wchar_t * _RTLENTRY _EXPFUNC _wmemchr(const wchar_t *__s, int __c, _SIZE_T __n);
}
#else
          void    * _RTLENTRY _EXPFUNC memchr(const void *__s, int __c, _SIZE_T __n);
          wchar_t * _RTLENTRY _EXPFUNC _wmemchr(const wchar_t *__s, int __c, _SIZE_T __n);
#endif /* __cplusplus */

#define movmem(src,dest,length) (void)memmove(dest,src,length)
#define setmem(dest,length,value) (void)memset(dest,value,length)

#if !defined(__STDC__) /* NON_ANSI  */
#define _fmemccpy memccpy
#define _fmemchr  memchr
#define _fmemcmp  memcmp
#define _fmemcpy  memcpy
#define _fmemicmp memicmp
#define _fmemmove memmove
#define _fmemset  memset
#define _fmovmem  movmem
#define _fsetmem  setmem
#endif /* __STDC__  */

#ifdef __cplusplus
} /* std */
} /* extern "C" */
#endif

#if !defined(__clang__)

/* Intrinsic functions, defined outside of the namespace.  Note:  These need to be defined _after_ the
   std:: versions above.  This is not a perfect solution, because it doesn't allow for std::memset, etc
   to be used with full qualification in the source.
*/

void _FAR * _RTLENTRY  __memchr__(const void _FAR * __s, int __c, _SIZE_T __n);
int         _RTLENTRY  __memcmp__(const void _FAR * __s1, const void _FAR * __s2, _SIZE_T __n);
void _FAR * _RTLENTRY  __memcpy__(void _FAR * __dest, const void _FAR * __src, _SIZE_T __n);
void _FAR * _RTLENTRYF __memset__(void _FAR * __s, int __c, _SIZE_T __n);

/*
    RTL helper function for when intrinsic memset bails out.  Also used in C++ inline version
    to prevent recursion.
*/
#ifdef __cplusplus
extern "C" {
#endif
void _FAR * _RTLENTRYF _EXPFUNC _rtl_memset_(void _FAR * __s, int __c, _SIZE_T __n);
#ifdef __cplusplus
}
#endif

/*
    The way we do intrinsics is a little funny.  The compiler automagically
    defines a macro that maps memcpy to __memcpy__.  That's ok unless someone
    tries std::memcpy.  Same applies to other intrinsics.  So we 'deal' with it
    by providing inline versions of std::memcpy that delegate to the real
    intrinsic ::__memcpy__.
*/
#ifdef __cplusplus
namespace std {

#ifdef memchr
#undef memchr
inline void _FAR * _RTLENTRY memchr(const void _FAR * __s, int __c, _SIZE_T __n)
{
    return __memchr__(__s, __c, __n);
}
#endif

#ifdef memcmp
#undef memcmp
inline int _RTLENTRY memcmp(const void _FAR * __s1, const void _FAR * __s2, _SIZE_T __n)
{
    return __memcmp__(__s2, __s2, __n);
}
#endif

#ifdef memcpy
#undef memcpy
inline void _FAR * _RTLENTRY memcpy(void _FAR * __dest, const void _FAR * __src, _SIZE_T __n)
{
    return __memcpy__(__dest, __src, __n);
}
#endif

#ifdef memset
#undef memset
inline void _FAR * _RTLENTRYF memset(void _FAR * __s, int __c, _SIZE_T __n)
{
    return __memset__(__s, __c, __n);
}
#endif

} /* namespace std */
#endif /* __cplusplus */

#endif /* __clang__ */

#if !defined(RC_INVOKED)

#if defined(__STDC__)
#pragma warn .nak
#endif

#endif  /* !RC_INVOKED */


#endif  /* __MEM_H */

#if defined(__cplusplus) && !defined(__XUSING_CNAME__) && !defined(__MEM_H_USING_LIST)
#define __MEM_H_USING_LIST
    using std::_wmemchr;
    using std::_wmemcpy;
    using std::_wmemset;
    using std::wmemmove;
    using std::wmemchr;
    using std::wmemcmp;
    using std::wmemcpy;
    using std::wmemset;
    using std::memccpy;
    using std::memicmp;
    using std::memmove;
    using std::memchr;
    using std::memcmp;
    using std::memcpy;
    using std::memset;

#if __STDC_WANT_LIB_EXT1__
    using std::memcpy_s;
    using std::memmove_s;
    using std::memset_s;
    using std::wmemcpy_s;
    using std::wmemmove_s;
    using std::wmemset_s;
#endif

#endif /* __XUSING_CNAME__ */
