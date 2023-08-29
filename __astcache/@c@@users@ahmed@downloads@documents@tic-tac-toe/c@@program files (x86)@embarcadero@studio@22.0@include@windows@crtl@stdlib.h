/*  stdlib.h

    Definitions for common types, variables, and functions.

*/

/*
 *      C/C++ Run Time Library - Version 29.0
 *
 *      Copyright (c) 1987, 2023 by Embarcadero Technologies, Inc.
 *      All Rights Reserved.
 *
 */

/* $Revision: 37796 $ */

#ifndef __STDLIB_H
#define __STDLIB_H
#define _INC_STDLIB  /* MSC Guard name */

#include <_stddef.h>

#if !defined(RC_INVOKED)
#if defined(__STDC__)
#pragma warn -nak
#endif
#endif  /* !RC_INVOKED */

#ifdef __cplusplus
extern "C"{
#endif

#if !defined(__clang__)
/* Intrinsics must be prototyped outside of any namespace, so we list them here
   before entering namespace std.
 */
int            _RTLENTRY __abs__(int);
unsigned char  _RTLENTRY ___crotl__(unsigned char __value, int __count);
unsigned char  _RTLENTRY ___crotr__(unsigned char __value, int __count);
unsigned long  _RTLENTRY ___lrotl__(unsigned long __val, int __count);
unsigned long  _RTLENTRY ___lrotr__(unsigned long __val, int __count);
unsigned short _RTLENTRY ___rotl__ (unsigned short __value, int __count);
unsigned short _RTLENTRY ___rotr__ (unsigned short __value, int __count);
#endif

#ifdef __cplusplus
} // extern "C"
#endif

#ifdef __cplusplus
namespace std {
#endif /* __cplusplus */

#if !defined(RC_INVOKED)

#pragma pack(push, 1)

#endif  /* !RC_INVOKED */

#ifndef _DIV_T
#define _DIV_T
typedef struct {
        int     quot;
        int     rem;
} div_t;
#endif

#ifndef _LDIV_T
#define _LDIV_T
typedef struct {
        long    quot;
        long    rem;
} ldiv_t;
#endif

#ifndef _LLDIV_T_
#define _LLDIV_T_
typedef struct {
        long long quot;
        long long rem;
} lldiv_t;
#endif

#define __max(__a,__b)    (((__a) > (__b)) ? (__a) : (__b))
#define __min(__a,__b)    (((__a) < (__b)) ? (__a) : (__b))

/* If using cnames and c++, we need to scope to std.
   bts 117437
 */

#if defined(__cplusplus) && defined(__XUSING_CNAME__)
#define MB_CUR_MAX std::__mb_cur_max
#else
#define MB_CUR_MAX __mb_cur_max
#endif

/* Maximum value returned by "rand" function
*/
#define RAND_MAX  0x7FFF

/* Maximum value returned by "_lrand" function (also used by random() macro)
*/
#define LRAND_MAX 0x7FFFFFFF

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

typedef void (_USERENTRY * atexit_t)(void);

/*
  These 2 constants are defined in MS's stdlib.h.
*/

#define DOS_MODE    0  /* DOS 16-bit */
#define OS2_MODE    1  /* OS/2 16-bit */


#ifdef __cplusplus
extern "C" {
#endif

#if __STDC_WANT_LIB_EXT1__
typedef void (_RTLENTRY *constraint_handler_t)(const char * _RESTRICT __msg,
					       void * _RESTRICT __ptr,
					       errno_t __error);

constraint_handler_t _RTLENTRY _EXPFUNC set_constraint_handler_s(constraint_handler_t __handler);
void _RTLENTRY _EXPFUNC abort_handler_s(const char * _RESTRICT __msg,
					void * _RESTRICT __ptr,
					errno_t __error);
void _RTLENTRY _EXPFUNC ignore_handler_s(const char * _RESTRICT __msg,
					 void * _RESTRICT __ptr,
					 errno_t __error);

errno_t _RTLENTRY _EXPFUNC getenv_s(size_t * _RESTRICT len, char * _RESTRICT value,
				    rsize_t maxsize, const char * _RESTRICT name);
errno_t _RTLENTRY _EXPFUNC wgetenv_s(size_t * _RESTRICT len, wchar_t * _RESTRICT value,
				     rsize_t maxsize, const wchar_t * _RESTRICT name);

#endif

void _RTLENTRY _EXPFUNC _NO_RETURN_DECL abort(void);

#if !defined(__clang__)
#if !defined(__ABS_DEFINED)
#define __ABS_DEFINED
#ifdef __cplusplus
inline int _RTLENTRY abs(int __x)
{
    return __abs__(__x);
}
#else
int         _RTLENTRY _EXPFUNC abs(int __x);
#  define abs(__x)   __abs__(__x)
#endif
#endif /* __ABS_DEFINED */
#else /* __clang__ */
int         _RTLENTRY _EXPFUNC abs(int __x);
#endif

int           _RTLENTRY atexit(void (_USERENTRY * __func)(void));
int           _RTLENTRY at_quick_exit(void (_USERENTRY * __func)(void));
double        _RTLENTRY _EXPFUNC atof(const char * __s);
int           _RTLENTRY _EXPFUNC atoi(const char * __s);
long          _RTLENTRY _EXPFUNC atol(const char * __s);
long long     _RTLENTRY _EXPFUNC atoll(const char * __s);
void *        _RTLENTRY _EXPFUNC calloc(_SIZE_T __nitems, _SIZE_T __size);
div_t         _RTLENTRY _EXPFUNC div(int __numer, int __denom);
void          _RTLENTRY _NO_RETURN_DECL exit(int __status);
void          _RTLENTRY _EXPFUNC free(void * __block);
char *        _RTLENTRY _EXPFUNC getenv(const char * __name);
long          _RTLENTRY _EXPFUNC labs(long __x);
long long     _RTLENTRY _EXPFUNC llabs(long long __x);
ldiv_t        _RTLENTRY _EXPFUNC ldiv(long __numer, long __denom);
lldiv_t       _RTLENTRY _EXPFUNC lldiv(long long __numer, long long __denom);
void *        _RTLENTRY _EXPFUNC malloc(_SIZE_T __size);
int           _RTLENTRY _EXPFUNC mblen(const char * __s, _SIZE_T __n);
_SIZE_T       _RTLENTRY _EXPFUNC mbstowcs(wchar_t *__pwcs, const char * __s,
                                     _SIZE_T __n);
_SIZE_T       _RTLENTRY _EXPFUNC _mbstrlen(const char *__s);
int           _RTLENTRY _EXPFUNC mbtowc(wchar_t *__pwc, const char * __s, _SIZE_T __n);
int           _RTLENTRY _EXPFUNC mbtowc_cp(wchar_t *__pwc, const char * __s, _SIZE_T __n, const unsigned _codepage);
void          _RTLENTRY _NO_RETURN_DECL quick_exit(int __status);
int           _RTLENTRY _EXPFUNC rand(void);
#if !defined(__STDC__) && defined(_WIN64)
void          _RTLENTRY _EXPFUNC randomize(void);
#endif
void *        _RTLENTRY _EXPFUNC realloc(void * __block, _SIZE_T __size);
void          _RTLENTRY _EXPFUNC srand(unsigned __seed);
#if defined(__clang__)
float         _RTLENTRY _EXPFUNC strtof(const char * __s, char * *__endptr);
#endif
double        _RTLENTRY _EXPFUNC strtod(const char * __s, char * *__endptr);
long          _RTLENTRY _EXPFUNC strtol(const char * __s, char * *__endptr, int __radix);
long long     _RTLENTRY _EXPFUNC strtoll(const char * __s, char * *__endptr, int __radix);
#if !defined(_WIN64)
long double   _RTLENTRY          _strtold(const char * __s, char * *__endptr);
#endif
long double   _RTLENTRY _EXPFUNC strtold(const char * __s, char * *__endptr);
unsigned long _RTLENTRY _EXPFUNC strtoul(const char * __s, char * *__endptr, int __radix);
unsigned long long _RTLENTRY _EXPFUNC strtoull(const char * __s, char * *__endptr, int __radix);
int           _RTLENTRY _EXPFUNC system(const char * __command);

_SIZE_T       _RTLENTRY _EXPFUNC wcstombs(char * __s, const wchar_t *__pwcs,_SIZE_T __n);
int           _RTLENTRY _EXPFUNC wctomb(char * __s, wchar_t __wc);
int           _RTLENTRY _EXPFUNC wctomb_cp(char * __s, wchar_t __wc, const unsigned _codepage);
double        _RTLENTRY _EXPFUNC _wtof(const wchar_t * __s);
int           _RTLENTRY _EXPFUNC _wtoi(const wchar_t * __s);
long          _RTLENTRY _EXPFUNC _wtol(const wchar_t * __s);
long long     _RTLENTRY _EXPFUNC _wtoll(const wchar_t * __s);
long double   _RTLENTRY _EXPFUNC _wtold(const wchar_t * __s);
#if defined(__clang__)
float         _RTLENTRY _EXPFUNC wcstof(const wchar_t * __s, wchar_t * *__endptr);
#endif
double        _RTLENTRY _EXPFUNC wcstod(const wchar_t * __s, wchar_t * *__endptr);
long double   _RTLENTRY _EXPFUNC wcstold(const wchar_t * __s, wchar_t * *__endptr);
long          _RTLENTRY _EXPFUNC wcstol(const wchar_t * __s, wchar_t * *__endptr, int __radix);
long long     _RTLENTRY _EXPFUNC wcstoll(const wchar_t * __s, wchar_t * *__endptr, int __radix);
#if !defined(_WIN64)
long double   _RTLENTRY          _wcstold(const wchar_t * __s, wchar_t * *__endptr);
#endif
unsigned long _RTLENTRY _EXPFUNC wcstoul(const wchar_t * __s, wchar_t * *__endptr, int __radix);
unsigned long long _RTLENTRY _EXPFUNC wcstoull(const wchar_t * __s, wchar_t * *__endptr, int __radix);
int           _RTLENTRY _EXPFUNC _wsystem(const wchar_t * __command);
wchar_t *     _RTLENTRY _EXPFUNC _itow(int __value, wchar_t *__string, int __radix);
wchar_t *     _RTLENTRY _EXPFUNC _ltow(long __value, wchar_t *__string, int __radix);
wchar_t *     _RTLENTRY _EXPFUNC _ultow(unsigned long __value, wchar_t *__string, int __radix);

#if !defined(__STDC__)
#if defined (_INTEGRAL_MAX_BITS) && (_INTEGRAL_MAX_BITS >= 64)
__int64       _RTLENTRY _EXPFUNC _atoi64(const char * __s);
char *        _RTLENTRY _EXPFUNC _i64toa(__int64 __value, char *__strP, int __radix);
char *        _RTLENTRY _EXPFUNC _ui64toa(unsigned __int64 __value, char *__strP, int __radix);
__int64       _RTLENTRY _EXPFUNC _wtoi64(const wchar_t * __s);
wchar_t *     _RTLENTRY _EXPFUNC _i64tow(__int64 __value, wchar_t *__strP, int __radix);
wchar_t *     _RTLENTRY _EXPFUNC _ui64tow(unsigned __int64 __value, wchar_t *__strP, int __radix);
#endif
char *        _RTLENTRY _EXPFUNC ltoa(long __value, char * __string, int __radix);
char *        _RTLENTRY _EXPFUNC ecvt(double __value, int __ndig, int * __dec, int * __sign);
char *        _RTLENTRY _EXPFUNC fcvt(double __value, int __ndig, int * __dec, int * __sign);
char *        _RTLENTRY _EXPFUNC gcvt(double __value, int __ndec, char * __buf);

#endif /* __STDC__ */

/* Variables */
extern int _RTLENTRY _EXPDATA __mb_cur_max;

#if !defined(__STDC__)

/* Values for _osmode */

#define _WIN_MODE    2  /* Windows 16- or 32-bit */
#define _OS2_20_MODE 3  /* OS/2 32-bit */
#define _DOSX32_MODE 4  /* DOS 32-bit */

#define environ  _environ

/* MSC compatible routines: */

void _RTLENTRY _EXPFUNC _seterrormode(int __mode);

#endif /* __STDC__ */

extern char **       _RTLENTRY _EXPDATA _environ;
extern wchar_t **    _RTLENTRY _EXPDATA _wenviron;
extern int           _RTLENTRY _EXPDATA _fileinfo;
extern int           _RTLENTRY          _fmode;
extern unsigned char _RTLENTRY _EXPDATA _osmajor;
extern unsigned char _RTLENTRY _EXPDATA _osminor;
extern unsigned char _RTLENTRY _EXPDATA _osmode;
extern unsigned int  _RTLENTRY _EXPDATA _osversion;
extern int           _RTLENTRY _EXPDATA _cmdline_escapes;

extern char *        _RTLENTRY _EXPDATA _sys_errlist[];
extern int           _RTLENTRY _EXPDATA _sys_nerr;

#if !defined(__STDC__)
#define sys_nerr     _sys_nerr
#define sys_errlist  _sys_errlist
#endif

#ifdef __cplusplus
}
#endif

#if !defined(__STDC__) && !defined(__CODEGUARD__)
#ifdef __cplusplus
#if !defined(_BUILDRTLDLL)
inline int _RTLENTRY atoi(const char *__s)
{
    return (int)atol(__s);
}
#endif
#else
#  define atoi(__s)((int) atol(__s))
#endif /* __cplusplus */
#endif /* !__STDC__ && !__CODEGUARD__ && !_BUILDRTLDLL */

/* Constants for MSC pathname functions */

#define _MAX_PATH       260
#define _MAX_DRIVE      3
#define _MAX_DIR        256
#define _MAX_FNAME      256
#define _MAX_EXT        256

#ifdef __cplusplus
extern "C" {
#endif

long double   _RTLENTRY _EXPFUNC _atold(const char * __s);

unsigned char _RTLENTRY _EXPFUNC _crotl(unsigned char __value, int __count);
unsigned char _RTLENTRY _EXPFUNC _crotr(unsigned char __value, int __count);

char *        _RTLENTRY _EXPFUNC _ecvt(double __value, int __ndig, int * __dec,
                                     int * __sign);
void          _RTLENTRY _NO_RETURN_DECL _exit(int __status);
void          _RTLENTRY _NO_RETURN_DECL _Exit(int __status);
char *        _RTLENTRY _EXPFUNC _fcvt(double __value, int __ndig, int * __dec,
                                     int * __sign);
char *        _RTLENTRY _EXPFUNC _fullpath(char * __buf, const char * __path,
                                     _SIZE_T __maxlen);
char *        _RTLENTRY _EXPFUNC _gcvt(double __value, int __ndec,
                                     char * __buf);
char *        _RTLENTRY _EXPFUNC _itoa(int __value, char * __string,
                                     int __radix);
char *        _RTLENTRY _EXPFUNC itoa(int __value, char * __string,
                                     int __radix);
long          _RTLENTRY _EXPFUNC _lrand(void);
unsigned long _RTLENTRY _EXPFUNC _lrotl(unsigned long __val, int __count);
unsigned long _RTLENTRY _EXPFUNC _lrotr(unsigned long __val, int __count);

char *        _RTLENTRY _EXPFUNC _ltoa(long __value, char * __string,
                                     int __radix);
void          _RTLENTRY _EXPFUNC _makepath(char * __path,
                                     const char * __drive,
                                     const char * __dir,
                                     const char * __name,
                                     const char * __ext );
int           _RTLENTRY _EXPFUNC putenv(const char * __name);
int           _RTLENTRY _EXPFUNC _putenv(const char * __name);
int           _RTLENTRY _EXPFUNC _putenv_s(const char * __name, const char *__value);


#if !defined(__clang__) || (__clang_major__ <= 3) && (__clang_minor__ <= 3)
unsigned short _RTLENTRY _EXPFUNC _rotl(unsigned short __value, int __count);
unsigned short _RTLENTRY _EXPFUNC _rotr(unsigned short __value, int __count);
#endif

void          _RTLENTRY _EXPFUNC _searchenv(const char * __file,
                                     const char * __varname,
                                     char *__pathname);
void          _RTLENTRY _EXPFUNC _searchstr(const char * __file,
                                     const char * __ipath,
                                     char *__pathname);
void          _RTLENTRY _EXPFUNC _splitpath(const char * __path,
                                     char * __drive,
                                     char * __dir,
                                     char * __name,
                                     char * __ext );

#if !defined(__STDC__)
void          _RTLENTRY _EXPFUNC swab(const char * __from, char * __to, ssize_t __nbytes);
void          _RTLENTRY _EXPFUNC _swab(const char * __from, char * __to, ssize_t __nbytes);
#endif

char *        _RTLENTRY _EXPFUNC ultoa(unsigned long __value, char * __string,
				       int __radix);
char *        _RTLENTRY _EXPFUNC _ultoa(unsigned long __value, char * __string,
					int __radix);
void          _RTLENTRY _EXPFUNC perror(const char * __s);

void          _RTLENTRY _EXPFUNC _wperror(const wchar_t * __s);
wchar_t *     _RTLENTRY _EXPFUNC _wfullpath(wchar_t * __buf,const wchar_t * __path,
                                     _SIZE_T __maxlen);
void          _RTLENTRY _EXPFUNC _wmakepath(wchar_t * __path,
                                     const wchar_t * __drive,
                                     const wchar_t * __dir,
                                     const wchar_t * __name,
                                     const wchar_t * __ext );
void          _RTLENTRY _EXPFUNC _wsplitpath(const wchar_t * __path,
                                     wchar_t * __drive,
                                     wchar_t * __dir,
                                     wchar_t * __name,
                                     wchar_t * __ext );

void          _RTLENTRY _EXPFUNC _wsearchenv(const wchar_t * __file,
                                     const wchar_t * __varname,
                                     wchar_t *__pathname);
void          _RTLENTRY _EXPFUNC _wsearchstr(const wchar_t * __file,
                                     const wchar_t * __ipath,
                                     wchar_t *__pathname);
wchar_t *     _RTLENTRY _EXPFUNC  _wgetenv(const wchar_t * __name);
int           _RTLENTRY _EXPFUNC  _wputenv(const wchar_t * __name);
int           _RTLENTRY _EXPFUNC  _wputenv_s(const wchar_t * __name, const wchar_t *__value);

#ifdef __cplusplus
}
#endif

#if !defined(__STDC__)

#if defined(__cplusplus)
inline int  _RTLENTRY random(int __num) { return __num ? (int)(_lrand()%(__num)) : 0; }
#else /* __cplusplus */
#define random(__num) (__num ? (int)(_lrand()%(__num)) : 0)
#endif  /* __cplusplus  */

#endif /* __STDC__ */

#if !defined(_WIN64)
#if defined(__cplusplus)
extern "C" {
#endif
long _RTLENTRY _EXPFUNC time(long *);
#if defined(__cplusplus)
}
#endif
#endif /* _WIN64 */

#if !defined(__STDC__)

#if defined(__cplusplus)

#if !defined(_WIN64)
/* Need prototype of time() for C++ randomize() */
inline void _RTLENTRY randomize(void)
{
    srand((unsigned) time(NULL));
}
#endif /* _WIN64 */

#else /* __cplusplus */

#if !defined(_WIN64)
#define randomize() srand((unsigned)time(NULL))
#endif
 
#ifndef max
#define max(__a,__b)    (((__a) > (__b)) ? (__a) : (__b))
#endif
#ifndef min
#define min(__a,__b)    (((__a) < (__b)) ? (__a) : (__b))
#endif

#endif /* __cplusplus */

#endif /* __STDC__ */

/* argv & argc definitions */

#ifdef __cplusplus
extern "C"{
#endif
#if !defined(__ARGV_DEFINED)
#define __ARGV_DEFINED
    extern int           _RTLENTRY _EXPDATA _argc;
    extern char **       _RTLENTRY _EXPDATA _argv;
#   define __argc        _argc  /* MSC Version */
#   define __argv        _argv  /* MSC Version */
#endif /* __ARGV_DEFINED */
    extern wchar_t **    _RTLENTRY _EXPDATA _wargv;
#ifdef __cplusplus
} /* __cplusplus */
#endif


#if !defined(RC_INVOKED)

/* restore default packing */
#pragma pack(pop)

#if defined(__STDC__)
#pragma warn .nak
#endif

#endif  /* !RC_INVOKED */

#ifdef __cplusplus
} // std
#endif /* __cplusplus */

#endif  /* __STDLIB_H */

#include <search.h>  /* Factored out all the search functions to search.h */
#include <errno.h>

/* Add overloaded functions from 26.5 here */
#if defined(__cplusplus) && (defined(__USING_CNAME__) || defined(_CSTDLIB_))
#if !defined(__STDLIB_OVERLOADS__)
#define __STDLIB_OVERLOADS__
namespace std {
inline long abs(long __x) { return labs(__x); }
inline ldiv_t div(long __x, long __y) { return ldiv(__x,__y); }

#if !defined(__LLABSDIV)
#define __LLABSDIV
inline long long abs(long long __x) { return llabs(__x); }
inline lldiv_t div(long long __x, long long __y) { return lldiv(__x,__y); }
#endif
}
#endif
#endif

#if defined(__cplusplus) && !defined(__XUSING_CNAME__) && !defined(__STDLIB_H_USING_LIST)
#define __STDLIB_H_USING_LIST
     using std::_argc;
     using std::_argv;
     using std::_wargv;
     using std::__mb_cur_max;

     using std::_ecvt;
     using std::_atold;
     using std::_cmdline_escapes;
     using std::_environ;
     using std::_exit;
     using std::_Exit;
     using std::_fileinfo;
     using std::_fmode;
     using std::_fullpath;
     using std::_fcvt;
     using std::_gcvt;
     using std::_ultow;
     using std::_itow;
     using std::_lrand;
     using std::_ltoa;
     using std::_ltow;

#if !defined(__STDC__) && defined (_INTEGRAL_MAX_BITS) && (_INTEGRAL_MAX_BITS >= 64)
     using std::_atoi64;
     using std::_i64toa;
     using std::_i64tow;
     using std::_ui64toa;
     using std::_ui64tow;
     using std::_wtoi64;
#endif

     using std::_makepath;
     using std::_osmajor;
     using std::_osminor;
     using std::_osmode;
     using std::_osversion;
     using std::_searchenv;
     using std::_searchstr;
     using std::_splitpath;
#if !defined(_WIN64)
     using std::_strtold;
     using std::_wcstold;
#endif
     using std::_wenviron;
     using std::_wfullpath;
     using std::_wgetenv;
     using std::_wmakepath;
     using std::_wperror;
     using std::_wputenv;
     using std::_wputenv_s;
     using std::_wsearchenv;
     using std::_wsearchstr;
     using std::_wsplitpath;
     using std::_wsystem;
     using std::_wtof;
     using std::_wtoi;
     using std::_wtol;
     using std::_wtoll;
     using std::_wtold;
     using std::abort;
     using std::atexit;
     using std::atexit_t;
     using std::at_quick_exit;
     using std::atof;
     using std::atoi;
     using std::atol;
     using std::atoll;
     using std::calloc;
     using std::div;
     using std::div_t;
     using std::exit;
     using std::free;
     using std::getenv;
     using std::_itoa;
     using std::itoa;
     using std::labs;
     using std::llabs;
     using std::ldiv;
     using std::ldiv_t;
     using std::malloc;

#if !defined(__STDC__)
     using std::ecvt;
     using std::fcvt;
     using std::gcvt;
     using std::ltoa;
     using std::random;
     using std::randomize;
#endif

     using std::mblen;
     using std::mbstowcs;
     using std::mbtowc;
     using std::_mbstrlen;
     using std::perror;
     using std::putenv;
     using std::_putenv;
     using std::_putenv_s;
     using std::quick_exit;
     using std::rand;
     using std::realloc;
     using std::srand;
     using std::strtod;
     using std::strtold;
#if defined(__clang__)
     using std::strtof;
#endif
     using std::strtol;
     using std::strtoll;
     using std::strtoul;
     using std::strtoull;

#if !defined(__STDC__)
     using std::swab;
     using std::_swab;
#endif

     using std::system;
#if !defined(_WIN64)
     using std::time;
#endif
     using std::ultoa;
     using std::_ultoa;
     using std::wcstod;
#if defined(__clang__)
     using std::wcstof;
#endif
     using std::wcstold;
     using std::wcstol;
     using std::wcstoll;
     using std::wcstoul;
     using std::wcstoull;
     using std::wctomb;
     using std::wcstombs;

#if __STDC_WANT_LIB_EXT1__
     using std::constraint_handler_t;
     using std::set_constraint_handler_s;
     using std::abort_handler_s;
     using std::ignore_handler_s;
     using std::getenv_s;
     using std::wgetenv_s;
#endif

/*
   Handle intrinsics specially.  If intrinsics are on, the compiler creates
   a macro of the normal function mapping to the __ intrinsic version, ie:
     #define strcpy __strcpy__
   Thus, we can test the normal name as a macro to see if it's defined, and
   only perform a using statement if it's not an intrinsic
*/

#if !defined(__STDC__)
     using std::abs;
#endif

#    ifndef _crotl
       using std::_crotl;
#    endif // ifndef _crotl
#    ifndef _lrotl
       using std::_lrotl;
#    endif // ifndef _lrotl
#    ifndef _lrotr
       using std::_lrotr;
#    endif // ifndef _lrotr
#    ifndef _crotr
       using std::_crotr;
#    endif // ifndef _crotr

#if !defined(__clang__) || (__clang_major__ <= 3) && (__clang_minor__ <= 3)
#    ifndef _rotl
       using std::_rotl;
#    endif // ifndef _rotl
#    ifndef _rotr
       using std::_rotr;
#    endif // ifndef _rotr
#endif /* clang33 */

#endif /* __XUSING_CNAME__ */
