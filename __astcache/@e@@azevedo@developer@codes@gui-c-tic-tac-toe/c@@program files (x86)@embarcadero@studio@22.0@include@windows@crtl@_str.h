/*  _str.h internal version of "C" string.h functions

    Definitions for string functions.

*/

/*
 *      C/C++ Run Time Library - Version 29.0
 *
 *      Copyright (c) 1987, 2023 by Embarcadero Technologies, Inc.
 *      All Rights Reserved.
 *
 */

/* $Revision: 37786 $ */

#ifndef __STRING_H
#define __STRING_H
#define _INC_STRING  /* MSC Guard name */

#include <_stddef.h>

#if !defined(__STDC__) && defined(__USELOCALES__)
#if !defined(__LOCALE_H)

#include <locale.h>

#endif
#endif  /* !__STDC__ && __USELOCALES__ */

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
#endif /* __cplusplus */

#define wcscmpi(s1,s2)      _wcsicmp(s1,s2)
#define _wcscmpi(s1,s2)     _wcsicmp(s1,s2)
#define wcsncmpi(s1,s2,n)   _wcsnicmp(s1,s2,n)
#define _wcsncmpi(s1,s2,n)  _wcsnicmp(s1,s2,n)

#if __STDC_WANT_LIB_EXT1__
_SIZE_T      _RTLENTRYF _EXPFUNC strnlen_s(const char *__s, _SIZE_T __maxlen);
_SIZE_T      _RTLENTRYF _EXPFUNC wcsnlen_s(const wchar_t *__s, _SIZE_T __maxlen);
errno_t      _RTLENTRY  _EXPFUNC strerror_s(char *__s, rsize_t __maxsize, errno_t __errnum);
errno_t      _RTLENTRY  _EXPFUNC _wcserror_s(wchar_t *__s, rsize_t __maxsize, errno_t __errnum);
size_t       _RTLENTRY  _EXPFUNC strerrorlen_s(errno_t errnum);
errno_t      _RTLENTRY  _EXPFUNC strncpy_s(char * _RESTRICT dest, rsize_t destmax,
					   const char * _RESTRICT src, rsize_t n);
errno_t      _RTLENTRY  _EXPFUNC wcsncpy_s(wchar_t * _RESTRICT dest, rsize_t destmax,
					   const wchar_t * _RESTRICT src, rsize_t n);
errno_t      _RTLENTRY  _EXPFUNC strcpy_s(char * _RESTRICT dest, rsize_t destmax,
					  const char * _RESTRICT src);
errno_t      _RTLENTRY  _EXPFUNC wcscpy_s(wchar_t * _RESTRICT dest, rsize_t destmax,
					  const wchar_t * _RESTRICT src);
errno_t      _RTLENTRY  _EXPFUNC strncat_s(char * _RESTRICT dest, rsize_t destmax,
					   const char * _RESTRICT src, rsize_t n);
errno_t      _RTLENTRY  _EXPFUNC wcsncat_s(wchar_t * _RESTRICT dest, rsize_t destmax,
					   const wchar_t * _RESTRICT src, rsize_t n);
errno_t      _RTLENTRY  _EXPFUNC strcat_s(char * _RESTRICT dest, rsize_t destmax,
					  const char * _RESTRICT src);
errno_t      _RTLENTRY  _EXPFUNC wcscat_s(wchar_t * _RESTRICT dest, rsize_t destmax,
					  const wchar_t * _RESTRICT src);
char    *    _RTLENTRYF _EXPFUNC strtok_s(char * _RESTRICT __s1, rsize_t * _RESTRICT __s1max,
					  const char * _RESTRICT __s2, char ** _RESTRICT __ptr);
wchar_t *    _RTLENTRYF _EXPFUNC wcstok_s(wchar_t * _RESTRICT __s1, rsize_t * _RESTRICT __s1max,
					  const wchar_t * _RESTRICT __s2, wchar_t ** _RESTRICT __ptr);
#endif

_SIZE_T          _RTLENTRY  _EXPFUNC wcslen(const wchar_t *__s);
wchar_t *       _RTLENTRY  _EXPFUNC wcscpy(wchar_t *__dst, const wchar_t *__src);
wchar_t *       _RTLENTRY  _EXPFUNC wcscat(wchar_t *__dest, const wchar_t *__src);
int             _RTLENTRY  _EXPFUNC wcscmp(const wchar_t *__s1, const wchar_t *__s2);
int             _RTLENTRY  _EXPFUNC wcscoll(const wchar_t * __s1, const wchar_t * __s2);
_SIZE_T          _RTLENTRY  _EXPFUNC wcscspn(const wchar_t *__s1, const wchar_t *__s2);
wchar_t *       _RTLENTRY  _EXPFUNC _wcsdup(const wchar_t *__s);
int             _RTLENTRY  _EXPFUNC wcsncmp(const wchar_t *__s1, const wchar_t *__s2, _SIZE_T __maxlen);
wchar_t *       _RTLENTRY  _EXPFUNC wcsncpy(wchar_t *__dest, const wchar_t *__src, _SIZE_T __maxlen);
wchar_t *       _RTLENTRY  _EXPFUNC _wcsnset(wchar_t *__s, wchar_t __ch, _SIZE_T __n);
wchar_t *       _RTLENTRY  _EXPFUNC wcspbrk(const wchar_t *__s1, const wchar_t *__s2);
wchar_t *       _RTLENTRY  _EXPFUNC wcsrchr(const wchar_t *__s, wchar_t __c);
wchar_t *       _RTLENTRY  _EXPFUNC _wcsrev(wchar_t *__s);
wchar_t *       _RTLENTRY  _EXPFUNC _wcsset(wchar_t*__s, wchar_t __ch);
_SIZE_T          _RTLENTRY  _EXPFUNC wcsspn(const wchar_t *__s1, const wchar_t *__s2);
wchar_t *       _RTLENTRY  _EXPFUNC wcsstr(const wchar_t *__s1, const wchar_t *__s2);
wchar_t *       _RTLENTRY  _EXPFUNC wcstok(wchar_t *__s1, const wchar_t *__s2);
wchar_t *       _RTLENTRY  _EXPFUNC wcsncat(wchar_t *__dest, const wchar_t *__src, _SIZE_T __maxlen);
wchar_t *       _RTLENTRY  _EXPFUNC wcspcpy(wchar_t *__dest, const wchar_t *__src);
wchar_t *       _RTLENTRY  _EXPFUNC _wcspcpy(wchar_t *__dest, const wchar_t *__src);
int             _RTLENTRY  _EXPFUNC _wcsicmp(const wchar_t *__s1, const wchar_t *__s2);
int             _RTLENTRY  _EXPFUNC _wcsnicmp(const wchar_t *__s1, const wchar_t *__s2, _SIZE_T __maxlen);
wchar_t *       _RTLENTRYF _EXPFUNC _wcslwr(wchar_t *__s);
wchar_t *       _RTLENTRYF _EXPFUNC _wcsupr(wchar_t *__s);
wchar_t *       _RTLENTRYF _EXPFUNC _lwcslwr(wchar_t *__s);
wchar_t *       _RTLENTRYF _EXPFUNC _lwcsupr(wchar_t *__s);
wchar_t *       _RTLENTRY  _EXPFUNC __wcserror(const wchar_t *__s);
wchar_t *       _RTLENTRY  _EXPFUNC _wcserror(int __errnum);

#if !defined(_WIN64)
wchar_t * _RTLENTRY _EXPFUNC wcschr(const wchar_t *__s, wchar_t __c);
#endif

#if defined(_BUILDRTLDLL)
#undef _EXPFUNC
#define _EXPFUNC
#endif

char _FAR * _RTLENTRYF _EXPFUNC strcat(char _FAR *__dest, const char _FAR *__src);
int         _RTLENTRYF _EXPFUNC strcmp(const char _FAR *__s1, const char _FAR *__s2);
char _FAR * _RTLENTRYF _EXPFUNC strcpy(char _FAR *__dest, const char _FAR *__src);
_SIZE_T      _RTLENTRYF _EXPFUNC strlen(const char _FAR *__s);
char _FAR * _RTLENTRYF _EXPFUNC strncat(char _FAR *__dest, const char _FAR *__src,
                                        _SIZE_T __maxlen);
int         _RTLENTRYF _EXPFUNC strncmp(const char _FAR *__s1, const char _FAR *__s2,
                                        _SIZE_T __maxlen);
char _FAR * _RTLENTRYF _EXPFUNC strncpy(char _FAR *__dest, const char _FAR *__src,
                                        _SIZE_T __maxlen);
_SIZE_T      _RTLENTRY  _EXPFUNC strcspn(const char _FAR *__s1, const char _FAR *__s2);
char _FAR * _RTLENTRY  _EXPFUNC strerror(int __errnum);
_SIZE_T      _RTLENTRY  _EXPFUNC strspn(const char _FAR *__s1, const char _FAR *__s2);
char _FAR * _RTLENTRYF _EXPFUNC strtok(char _FAR *__s1, const char _FAR *__s2);
char _FAR * _RTLENTRY  _EXPFUNC _strerror(const char _FAR *__s);

#if !defined(__STDC__)
/* compatibility with obsolete functions from other compilers */
#define strcmpi(s1,s2)      _stricmp(s1,s2)
#define _strcmpi(s1,s2)     _stricmp(s1,s2)
#define strncmpi(s1,s2,n)   _strnicmp(s1,s2,n)
#define _strncmpi(s1,s2,n)  _strnicmp(s1,s2,n)

char _FAR * _RTLENTRYF _EXPFUNC   _lstrlwr(char _FAR *__s);
char _FAR * _RTLENTRYF _EXPFUNC   _lstrupr(char _FAR *__s);
char _FAR * _RTLENTRYF _EXPFUNC   stpcpy(char _FAR *__dest, const char _FAR *__src);
char _FAR * _RTLENTRY  _EXPFUNC   _stpcpy(char _FAR *__dest, const char _FAR *__src);
char _FAR * _RTLENTRY  _EXPFUNC   strdup(const char _FAR *__s);
char _FAR * _RTLENTRY  _EXPFUNC   _strdup(const char _FAR *__s);
int         _RTLENTRYF _EXPFUNC   stricmp(const char _FAR *__s1, const char _FAR *__s2);
int         _RTLENTRYF _EXPFUNC   _stricmp(const char _FAR *__s1, const char _FAR *__s2);
char _FAR * _RTLENTRYF _EXPFUNC   strlwr(char _FAR *__s);
char _FAR * _RTLENTRYF _EXPFUNC   _strlwr(char _FAR *__s);
int         _RTLENTRYF _EXPFUNC   strnicmp(const char _FAR *__s1, const char _FAR *__s2,
                                           _SIZE_T __maxlen);
int         _RTLENTRYF _EXPFUNC   _strnicmp(const char _FAR *__s1, const char _FAR *__s2,
					    _SIZE_T __maxlen);
char _FAR * _RTLENTRY  _EXPFUNC   strnset(char _FAR *__s, int __ch, _SIZE_T __n);
char _FAR * _RTLENTRY  _EXPFUNC   _strnset(char _FAR *__s, int __ch, _SIZE_T __n);
char _FAR * _RTLENTRY  _EXPFUNC   strrev(char _FAR *__s);
char _FAR * _RTLENTRY  _EXPFUNC   _strrev(char _FAR *__s);
char _FAR * _RTLENTRY  _EXPFUNC   strset(char _FAR *__s, int __ch);
char _FAR * _RTLENTRY  _EXPFUNC   _strset(char _FAR *__s, int __ch);
char _FAR * _RTLENTRYF _EXPFUNC   strupr(char _FAR *__s);
char _FAR * _RTLENTRYF _EXPFUNC   _strupr(char _FAR *__s);
#endif  /* !__STDC__ */

#if defined(__cplusplus)
extern "C++"
{
          char _FAR * _RTLENTRYF _EXPFUNC   strchr(char _FAR * __s, int __c);
    const char _FAR * _RTLENTRYF _EXPFUNC   strchr(const char _FAR * __s, int __c);
          char _FAR * _RTLENTRYF _EXPFUNC   strrchr(char _FAR *__s, int __c);
    const char _FAR * _RTLENTRYF _EXPFUNC   strrchr(const char _FAR *__s, int __c);
          char _FAR * _RTLENTRYF _EXPFUNC   strpbrk(char _FAR *__s1, const char _FAR *__s2);
    const char _FAR * _RTLENTRYF _EXPFUNC   strpbrk(const char _FAR *__s1, const char _FAR *__s2);
          char _FAR * _RTLENTRY  _EXPFUNC   strstr(char _FAR *__s1, const char _FAR *__s2);
    const char _FAR * _RTLENTRY  _EXPFUNC   strstr(const char _FAR *__s1, const char _FAR *__s2);
#if defined(_WIN64)
          wchar_t * _RTLENTRY _EXPFUNC wcschr(wchar_t *__s, wchar_t __c);
    const wchar_t * _RTLENTRY _EXPFUNC wcschr(const wchar_t *__s, wchar_t __c);
#endif
}
#else
          char _FAR * _RTLENTRYF _EXPFUNC   strchr(const char _FAR * __s, int __c);
          char _FAR * _RTLENTRYF _EXPFUNC   strrchr(const char _FAR *__s, int __c);
          char _FAR * _RTLENTRYF _EXPFUNC   strpbrk(const char _FAR *__s1, const char _FAR *__s2);
          char _FAR * _RTLENTRY  _EXPFUNC   strstr(const char _FAR *__s1, const char _FAR *__s2);
#if defined(_WIN64)
          wchar_t * _RTLENTRY _EXPFUNC wcschr(const wchar_t *__s, wchar_t __c);
#endif
#endif

#if defined(_BUILDRTLDLL)
#undef _EXPFUNC
#define _EXPFUNC __export
#endif

#if !defined(__clang__)

/* Intrinsic functions */

/* Intrinsics must be prototyped outside of any namespace */
#ifdef __cplusplus
} /* std */
#endif /* __cplusplus */

char _FAR * _RTLENTRY           __stpcpy__(char _FAR *__dest, const char _FAR *__src);
char _FAR * _RTLENTRYF          __strcat__(char _FAR *__dest, const char _FAR *__src);
char _FAR * _RTLENTRY           __strchr__(const char _FAR *__s, int __c);
int         _RTLENTRYF          __strcmp__(const char _FAR *__s1, const char _FAR *__s2);
char _FAR * _RTLENTRYF          __strcpy__(char _FAR *__dest, const char _FAR *__src);
int         _RTLENTRYF _EXPFUNC _rtl_strcmp(const char _FAR *__s1, const char _FAR *__s2);
char _FAR * _RTLENTRYF _EXPFUNC _rtl_strcpy(char _FAR *__dest, const char _FAR *__src);
_SIZE_T     _RTLENTRYF          __strlen__(const char _FAR *__s);
char _FAR * _RTLENTRY           __strncat__(char _FAR *__dest, const char _FAR *__src,
                                              _SIZE_T __maxlen);
int         _RTLENTRY           __strncmp__(const char _FAR *__s1, const char _FAR *__s2,
                                              _SIZE_T __maxlen);
char _FAR * _RTLENTRYF          __strncpy__(char _FAR *__dest, const char _FAR *__src,
                                              _SIZE_T __maxlen);
char _FAR * _RTLENTRY           __strnset__(char _FAR *__s, int __ch, _SIZE_T __n);
char _FAR * _RTLENTRYF          __strrchr__(const char _FAR *__s, int __c);
char _FAR * _RTLENTRY           __strset__(char _FAR *__s, int __ch);

/* Now that the intrinsics are finished, turn the namespace back on */
#ifdef __cplusplus
namespace std {
#endif /* __cplusplus */

/*
    The way we do intrinsics is a little funny.  The compiler automagically
    defines a macro that maps strcpy to __strcpy__.  That's ok unless someone
    tries std::strcpy.  Same applies to other intrinsics.  So we 'deal' with it
    by providing inline versions of std::strcpy that live in std:: and which
    delegate to the real intrinsic ::__strcpy__.
*/
#ifdef __cplusplus

#ifdef strcat
#undef strcat
inline char _FAR * _RTLENTRYF strcat(char _FAR *__dest, const char _FAR *__src)
{
    return __strcat__(__dest, __src);
}
#endif

#ifdef strcmp
#undef strcmp
inline int _RTLENTRYF strcmp(const char _FAR *__s1, const char _FAR *__s2)
{
    return __strcmp__(__s1, __s2);
}
#endif

#ifdef strcpy
#undef strcpy
inline char _FAR * _RTLENTRYF strcpy(char _FAR *__dest, const char _FAR *__src)
{
    return __strcpy__(__dest, __src);
}
#endif

#ifdef strlen
#undef strlen
inline _SIZE_T _RTLENTRYF strlen(const char _FAR *__s)
{
    return __strlen__(__s);
}
#endif

#ifdef strncat
#undef strncat
inline char _FAR * _RTLENTRY strncat(char _FAR *__dest, const char _FAR *__src,_SIZE_T __maxlen)
{
    return __strncat__(__dest, __src, __maxlen);
}
#endif

#ifdef strncmp
#undef strncmp
inline int _RTLENTRY strncmp(const char _FAR *__s1, const char _FAR *__s2,_SIZE_T __maxlen)
{
    return __strncmp__(__s2, __s2, __maxlen);
}
#endif

#ifdef strncpy
#undef strncpy
inline char _FAR * _RTLENTRY strncpy(char _FAR *__dest, const char _FAR *__src,_SIZE_T __maxlen)
{
    return __strncpy__(__dest, __src, __maxlen);
}
#endif

#ifdef strchr
#undef strchr
inline char _FAR * _RTLENTRY strchr(const char _FAR *__s, int __c)
{
    return __strchr__(__s, __c);
}
#endif

#ifdef strrchr
#undef strrchr
inline char _FAR * _RTLENTRYF strrchr(const char _FAR *__s, int __c)
{
    return __strrchr__(__s, __c);
}
#endif

#ifdef strset
#undef strset
inline char _FAR * _RTLENTRY strset(char _FAR *__s, int __ch)
{
    return __strset__(__s, __ch);
}
#endif

#ifdef strnset
#undef strnset
inline char _FAR * _RTLENTRY strnset(char _FAR *__s, int __ch, _SIZE_T __n)
{
    return __strnset__(__s, __ch, __n);
}
#endif

#endif /* __cplusplus */

#endif /* __clang__ */

int    _RTLENTRY  _EXPFUNC _lstrcoll(const char * __s1, const char * __s2);
int    _RTLENTRY  _EXPFUNC _lstricoll(const char * __s1, const char * __s2);
int    _RTLENTRY  _EXPFUNC _lstrncoll(const char * __s1, const char * __s2, const int __len);
int    _RTLENTRY  _EXPFUNC _lstrnicoll(const char * __s1, const char * __s2, int __len);
_SIZE_T _RTLENTRY  _EXPFUNC _lstrxfrm(char * __s1, const char * __s2,_SIZE_T __n );
int    _RTLENTRY  _EXPFUNC _stricoll(const char * __s1, const char * __s2);
int    _RTLENTRY  _EXPFUNC _strncoll(const char * __s1, const char * __s2, _SIZE_T __n);
int    _RTLENTRY  _EXPFUNC _strnicoll(const char * __s1, const char * __s2, int __len);

#if defined(_BUILDRTLDLL)
#undef _EXPFUNC
#define _EXPFUNC
#endif
int    _RTLENTRY  _EXPFUNC strcoll(const char * __s1, const char * __s2);
_SIZE_T _RTLENTRY  _EXPFUNC strxfrm(char * __s1, const char * __s2,_SIZE_T __n );
#if defined(_BUILDRTLDLL)
#undef _EXPFUNC
#define _EXPFUNC __export
#endif

int    _RTLENTRY  _EXPFUNC _lwcscoll(const wchar_t * __s1, const wchar_t * __s2);
int    _RTLENTRY  _EXPFUNC _lwcsicoll(const wchar_t * __s1, const wchar_t * __s2);
int    _RTLENTRY  _EXPFUNC _lwcsncoll(const wchar_t * __s1, const wchar_t * __s2, const int __len);
int    _RTLENTRY  _EXPFUNC _lwcsnicoll(const wchar_t * __s1, const wchar_t * __s2, int __len);
_SIZE_T _RTLENTRY  _EXPFUNC _lwcsxfrm(wchar_t * __s1, const wchar_t * __s2,_SIZE_T __n );
int    _RTLENTRY  _EXPFUNC wcscoll(const wchar_t * __s1, const wchar_t * __s2);
int    _RTLENTRY  _EXPFUNC _wcsicoll(const wchar_t * __s1, const wchar_t * __s2);
int    _RTLENTRY  _EXPFUNC _wcsncoll(const wchar_t * __s1, const wchar_t * __s2, _SIZE_T __n);
int    _RTLENTRY  _EXPFUNC _wcsnicoll(const wchar_t * __s1, const wchar_t * __s2, int __len);
_SIZE_T _RTLENTRY  _EXPFUNC wcsxfrm(wchar_t * __s1, const wchar_t * __s2, _SIZE_T __n );


#if !defined(__STDC__) /* NON_ANSI  */
#define _fstrcat   strcat
#define _fstrchr   strchr
#define _fstrcmp   strcmp
#define _fstrcpy   strcpy
#define _fstrcspn  strcspn
#define _fstrdup   strdup
#define _fstricmp  stricmp
#define _fstrlen   strlen
#define _fstrlwr   strlwr
#define _fstrncat  strncat
#define _fstrncmp  strncmp
#define _fstrncpy  strncpy
#define _fstrnicmp strnicmp
#define _fstrnset  strnset
#define _fstrpbrk  strpbrk
#define _fstrrchr  strrchr
#define _fstrrev   strrev
#define _fstrset   strset
#define _fstrspn   strspn
#define _fstrstr   strstr
#define _fstrtok   strtok
#define _fstrupr   strupr
#endif /* __STDC__  */

#if defined(__USELOCALES__)
#if defined(__cplusplus)
#if !defined(__STDC__)
inline char _FAR * _RTLENTRYF strupr(char _FAR *__s)
    { return _lstrupr(__s); }
inline char _FAR * _RTLENTRYF _strupr(char _FAR *__s)
    { return _lstrupr(__s); }
inline char _FAR * _RTLENTRYF strlwr(char _FAR *__s)
    { return _lstrlwr(__s); }
inline char _FAR * _RTLENTRYF _strlwr(char _FAR *__s)
    { return _lstrlwr(__s); }
inline int    _RTLENTRY stricoll(const char * __s1, const char * __s2)
    { return _lstricoll(__s1, __s2); }
inline int    _RTLENTRY strncoll(const char * __s1, const char * __s2, const int __len)
    { return _lstrncoll( __s1, __s2, __len); }
inline int    _RTLENTRY strnicoll(const char * __s1, const char * __s2, int __len)
    { return _lstrnicoll(__s1, __s2, __len); }
#endif
inline int    _RTLENTRY strcoll(const char * __s1, const char * __s2)
    { return _lstrcoll(__s1, __s2); }
inline _SIZE_T _RTLENTRY strxfrm(char * __s1, const char * __s2, _SIZE_T __n )
    { return _lstrxfrm(__s1, __s2, __n); }
#else
#define  strupr     _lstrupr
#define  _strupr    _lstrupr
#define  strlwr     _lstrlwr
#define  _strlwr    _lstrlwr
#define  strcoll    _lstrcoll
#define  stricoll   _lstricoll
#define  strncoll   _lstrncoll
#define  strnicoll  _lstrnicoll
#define  strxfrm    _lstrxfrm
#endif
#endif  /* __USELOCALES__ */

#if !defined(RC_INVOKED)

#if defined(__STDC__)
#pragma warn .nak
#endif

#endif  /* !RC_INVOKED */

#ifdef __cplusplus
} /* std */
#endif /* __cplusplus */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif  /* __STRING_H */

#include <mem.h>  /* All mem... functions have now been moved to MEM.H */

#if defined(__cplusplus) && !defined(__XUSING_CNAME__) && !defined(__STRING_H_USING_LIST)
#define __STRING_H_USING_LIST
#if !defined(__STDC__)
    using std::_lstrlwr;
    using std::_lstrupr;
    using std::_stpcpy;
    using std::strdup;
    using std::_strdup;
    using std::stricmp;
    using std::_stricmp;
    using std::strlwr;
    using std::_strlwr;
    using std::strnicmp;
    using std::_strnicmp;
    using std::strrev;
    using std::_strrev;
    using std::strupr;
    using std::_strupr;
#endif
    using std::_lstrcoll;
    using std::_lstricoll;
    using std::_lstrncoll;
    using std::_lstrnicoll;
    using std::_lstrxfrm;
    using std::_lwcscoll;
    using std::_lwcsicoll;
    using std::_lwcslwr;
    using std::_lwcsncoll;
    using std::_lwcsnicoll;
    using std::_lwcsupr;
    using std::_lwcsxfrm;
    using std::_stricoll;
    using std::_strncoll;
    using std::_strnicoll;
    using std::_wcsdup;
    using std::_wcsicmp;
    using std::_wcsicoll;
    using std::_wcslwr;
    using std::_wcsncoll;
    using std::_wcsnicmp;
    using std::_wcsnicoll;
    using std::_wcsnset;
    using std::_wcspcpy;
    using std::_wcsrev;
    using std::_wcsset;
    using std::_wcsupr;

#if !defined(__STDC__)
    using std::strnset;
    using std::_strnset;
    using std::stpcpy;
    using std::strset;
    using std::_strset;
    using std::_strerror;
    using std::_wcserror;
    using std::__wcserror;
#endif /* __STDC__ */

    using std::strcat;
    using std::strchr;
    using std::strcmp;
    using std::strcpy;
    using std::strlen;
    using std::strncat;
    using std::strncmp;
    using std::strncpy;
    using std::strrchr;

    using std::strcspn;
    using std::strerror;
    using std::strpbrk;
    using std::strspn;
    using std::strstr;
    using std::strtok;
    using std::strxfrm;
    using std::strcoll;

    using std::wcscat;
    using std::wcschr;
    using std::wcscmp;
    using std::wcscoll;
    using std::wcscpy;
    using std::wcscspn;
    using std::wcslen;
    using std::wcsncat;
    using std::wcsncmp;
    using std::wcsncpy;
    using std::wcspbrk;
    using std::wcspcpy;
    using std::wcsrchr;
    using std::wcsspn;
    using std::wcsstr;
    using std::wcstok;
    using std::wcsxfrm;

#if __STDC_WANT_LIB_EXT1__
    using std::_wcserror_s;
    using std::strcat_s;
    using std::strcpy_s;
    using std::strerror_s;
    using std::strerrorlen_s;
    using std::strncat_s;
    using std::strncpy_s;
    using std::strnlen_s;
    using std::strtok_s;
    using std::wcscat_s;
    using std::wcscpy_s;
    using std::wcsncat_s;
    using std::wcsncpy_s;
    using std::wcsnlen_s;
    using std::wcstok_s;
#endif

#endif /* __XUSING_CNAME__ */
