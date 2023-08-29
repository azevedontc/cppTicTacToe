#if !defined(__clang__)

/*  math.h

    Definitions for the math floating point package.

*/

/*
 *      C/C++ Run Time Library - Version 29.0
 *
 *      Copyright (c) 1987, 2023 by Embarcadero Technologies, Inc.
 *      All Rights Reserved.
 *
 */

/* $Revision: 37787 $ */

#ifndef  __MATH_H
#define  __MATH_H

#if defined(__cplusplus)
#if defined(__clang__) && !defined(__clang_analyzer__) && defined(__USING_CNAME__)
#include <xtgmath.h>
#endif
#endif /* defined(__cplusplus) */

#include <_stddef.h>

#if !defined(NAN)
extern float _RTLENTRY _EXPDATA __ieee_32_p_nanq;
#define NAN __ieee_32_p_nanq
#endif

#if !defined(INFINITY)
extern float _RTLENTRY _EXPDATA __ieee_32_p_inf;
#define INFINITY __ieee_32_p_inf
#endif

#if !defined(RC_INVOKED)

#if defined(__STDC__)
#pragma warn -nak
#endif

#pragma pack(push, 1)

#endif  /* !RC_INVOKED */


#if !defined(__STDC__) /* NON-ANSI */

#ifdef __cplusplus
  extern "C" {
#endif

#if !defined(__clang__)
/* Intrinsic functions listed before any namespace */

double      _RTLENTRY __sin__ (double __x);
double      _RTLENTRY __cos__ (double __x);
long double _RTLENTRY __cosl__(long double __x);
long double _RTLENTRY __sinl__(long double __x);
int         _RTLENTRY __abs__ (int);
#endif

/* matherr and struct _exception must not be availible in __STDC__ nor
   can they be in namespace std since user's won't be able to override them
   there.
*/

#ifndef __STDC__
/* In "C" mode, (but not in standard C mode) we can allow the old name of
   'exception' for this structure.
 */
#ifndef __cplusplus
#define _exception exception
#endif
#endif /* __STDC__ */



struct  _exception
{
    int type;
    char   _FAR *name;
    double  arg1, arg2, retval;
};

struct  _exceptionl
{
    int type;
    char   _FAR *name;
    long double  arg1, arg2, retval;
};

typedef enum
{
    DOMAIN = 1,    /* argument domain error -- log (-1)        */
    SING,          /* argument singularity  -- pow (0,-2))     */
    OVERFLOW,      /* overflow range error  -- exp (1000)      */
    UNDERFLOW,     /* underflow range error -- exp (-1000)     */
    TLOSS,         /* total loss of significance -- sin(10e70) */
    PLOSS,         /* partial loss of signif. -- not used      */
    STACKFAULT     /* floating point unit stack overflow       */
}   _mexcep;

int         _RTLENTRY          _matherr(struct _exception  *__e);
int         _RTLENTRY          _matherrl(struct _exceptionl *__e);

#ifdef __cplusplus
}  // extern "C"
#endif

#ifdef __cplusplus
    /* use class complex instead of _cabs in C++ (now in STL 2.0) */
#else
struct complex      /* as used by "_cabs" function */
{
    double  x, y;
};

struct _complexl    /* as used by "_cabsl" function */
{
    long double  x, y;
};

#define cabs(z)     (hypot  ((z).x, (z).y))
#define cabsl(z)    (hypotl ((z).x, (z).y))
#endif /* __cplusplus */
#endif /* NON-ANSI */

#ifdef __cplusplus
  namespace std {
#endif


/* Constants rounded for 21 decimals. */
#define M_E         2.71828182845904523536
#define M_LOG2E     1.44269504088896340736
#define M_LOG10E    0.434294481903251827651
#define M_LN2       0.693147180559945309417
#define M_LN10      2.30258509299404568402
#define M_PI        3.14159265358979323846
#define M_PI_2      1.57079632679489661923
#define M_PI_4      0.785398163397448309616
#define M_1_PI      0.318309886183790671538
#define M_2_PI      0.636619772367581343076
#define M_1_SQRTPI  0.564189583547756286948
#define M_2_SQRTPI  1.12837916709551257390
#define M_SQRT2     1.41421356237309504880
#define M_SQRT_2    0.707106781186547524401

#define EDOM    33      /* Math argument */
#define ERANGE  34      /* Result too large */

/* Dinkumware */
#define MATH_ERRNO			1
#define MATH_ERREXCEPT		2
#define math_errhandling	(MATH_ERRNO | MATH_ERREXCEPT)	/* do both */

		/* CODES FOR is* FUNCTIONS */
#define _FP_LT	1
#define _FP_EQ	2
#define _FP_GT	4

		/* CODES FOR ilogb FUNCTIONS */

 #if _ILONG
  #define _FP_ILOGB0	(-0x7fffffff - _C2)
  #define _FP_ILOGBNAN	0x7fffffff

 #else /* _ILONG */
  #define _FP_ILOGB0	(-0x7fff - _C2)
  #define _FP_ILOGBNAN	0x7fff
 #endif /* _ILONG */


#ifdef __cplusplus
extern "C" {
#endif

extern double _RTLENTRY _EXPDATA _huge_dble;
extern long double _RTLENTRY _EXPDATA _huge_ldble;

#if defined(__cplusplus) && defined(__XUSING_CNAME__)
#define HUGE_VAL    std::_huge_dble
#define _LHUGE_VAL   std::_huge_ldble
#else
#define HUGE_VAL    _huge_dble
#define _LHUGE_VAL   _huge_ldble
#endif

float       _RTLENTRY _EXPFUNC atan2f(float, float);
float       _RTLENTRY _EXPFUNC ceilf(float);
float       _RTLENTRY _EXPFUNC cosf(float);
float       _RTLENTRY _EXPFUNC expf(float);
float       _RTLENTRY _EXPFUNC floorf(float);
float       _RTLENTRY _EXPFUNC ldexpf(float, int);
float       _RTLENTRY _EXPFUNC logf(float);
float       _RTLENTRY _EXPFUNC powf(float, float);
float       _RTLENTRY _EXPFUNC sinf(float);
float       _RTLENTRY _EXPFUNC sqrtf(float);
float       _RTLENTRY _EXPFUNC tanf(float);

#if defined(__clang__)
float       _EXPFUNC acosf(float);
float       _EXPFUNC asinf(float);
float       _EXPFUNC atanf(float);
float       _EXPFUNC coshf(float);
float       _EXPFUNC fabsf(float);
float       _EXPFUNC fmodf(float, float);
float       _EXPFUNC frexpf(float, int *);
float       _EXPFUNC hypotf(float, float);
float       _EXPFUNC log10f(float);
float       _EXPFUNC modff(float, float *);
float       _EXPFUNC sinhf(float);
float       _EXPFUNC tanhf(float);

float       _EXPFUNC nanf(const char*);
double      _EXPFUNC nan(const char*);
long double _EXPFUNC nanl(const char*);

float       _EXPFUNC roundf(float);
double      _EXPFUNC round(double);
long double _EXPFUNC roundl(long double);

float       _EXPFUNC fmaf(float, float, float);
double      _EXPFUNC fma(double, double, double);
long double _EXPFUNC fmal(long double, long double, long double);

double      _EXPFUNC hypot3(double, double, double);
float       _EXPFUNC hypot3f(float, float, float);
long double _EXPFUNC hypot3l(long double, long double, long double);

double      _EXPFUNC remquo(double, double, int *);
float       _EXPFUNC remquof(float, float, int *);
long double _EXPFUNC remquol(long double, long double, int *);

float       _EXPFUNC acoshf(float);
float       _EXPFUNC asinhf(float);
float       _EXPFUNC atanhf(float);
double      _EXPFUNC acosh(double);
double      _EXPFUNC asinh(double);
double      _EXPFUNC atanh(double);
long double _EXPFUNC acoshl(long double);
long double _EXPFUNC asinhl(long double);
long double _EXPFUNC atanhl(long double);

float       _RTLENTRY _EXPFUNC exp2f(float __x);
double      _RTLENTRY _EXPFUNC exp2(double __x);
long double _RTLENTRY _EXPFUNC exp2l(long double __x);

float       _RTLENTRY _EXPFUNC expm1f  (float __x);
double      _RTLENTRY _EXPFUNC expm1   (double __x);
long double _RTLENTRY _EXPFUNC expm1l  (long double __x);

float       _RTLENTRY _EXPFUNC log2f(float);
double      _RTLENTRY _EXPFUNC log2(double);
long double _RTLENTRY _EXPFUNC log2l(long double);

float       _RTLENTRY _EXPFUNC log1pf(float);
double      _RTLENTRY _EXPFUNC log1p(double);
long double _RTLENTRY _EXPFUNC log1pl(long double);

float       _RTLENTRY _EXPFUNC copysignf(float, float);
double      _RTLENTRY _EXPFUNC copysign(double, double);
long double _RTLENTRY _EXPFUNC copysignl(long double, long double);


#endif  /* __clang__ */

double      _RTLENTRY _EXPFUNC acos    (double __x);
double      _RTLENTRY _EXPFUNC asin    (double __x);
double      _RTLENTRY _EXPFUNC atan    (double __x);
double      _RTLENTRY _EXPFUNC atan2   (double __y, double __x);
double      _RTLENTRY _EXPFUNC ceil    (double __x);
double      _RTLENTRY _EXPFUNC cos     (double __x);
double      _RTLENTRY _EXPFUNC cosh    (double __x);
double      _RTLENTRY _EXPFUNC exp     (double __x);
double      _RTLENTRY _EXPFUNC fabs    (double __x);
double      _RTLENTRY _EXPFUNC floor   (double __x);
double      _RTLENTRY _EXPFUNC fmod    (double __x, double __y);
double      _RTLENTRY _EXPFUNC frexp   (double __x, int * __exponent);
double      _RTLENTRY _EXPFUNC hypot   (double __x, double __y);
double      _RTLENTRY _EXPFUNC ldexp   (double __x, int __exponent);
double      _RTLENTRY _EXPFUNC log     (double __x);
double      _RTLENTRY _EXPFUNC log10   (double __x);
double      _RTLENTRY _EXPFUNC modf    (double __x, double * __ipart);
double      _RTLENTRY _EXPFUNC pow     (double __x, double __y);
double      _RTLENTRY _EXPFUNC sin     (double __x);
double      _RTLENTRY _EXPFUNC sinh    (double __x);
double      _RTLENTRY _EXPFUNC sqrt    (double __x);
double      _RTLENTRY _EXPFUNC tan     (double __x);
double      _RTLENTRY _EXPFUNC tanh    (double __x);

long double _RTLENTRY _EXPFUNC acosl  (long double __x);
long double _RTLENTRY _EXPFUNC asinl  (long double __x);
long double _RTLENTRY _EXPFUNC atan2l (long double __x, long double __y);
long double _RTLENTRY _EXPFUNC atanl  (long double __x);
long double _RTLENTRY _EXPFUNC ceill  (long double __x);
long double _RTLENTRY _EXPFUNC coshl  (long double __x);
long double _RTLENTRY _EXPFUNC cosl   (long double __x);
long double _RTLENTRY _EXPFUNC expl   (long double __x);
long double _RTLENTRY _EXPFUNC fabsl  (long double __x);
long double _RTLENTRY _EXPFUNC floorl (long double __x);
long double _RTLENTRY _EXPFUNC fmodl  (long double __x, long double __y);
long double _RTLENTRY _EXPFUNC frexpl (long double __x, int * __exponent);
long double _RTLENTRY _EXPFUNC hypotl (long double __x, long double __y);
long double _RTLENTRY _EXPFUNC ldexpl (long double __x, int __exponent);
long double _RTLENTRY _EXPFUNC log10l (long double __x);
long double _RTLENTRY _EXPFUNC logl   (long double __x);
long double _RTLENTRY _EXPFUNC modfl  (long double __x, long double * __ipart);
long double _RTLENTRY _EXPFUNC powl   (long double __x, long double __y);
long double _RTLENTRY _EXPFUNC sinhl  (long double __x);
long double _RTLENTRY _EXPFUNC sinl   (long double __x);
long double _RTLENTRY _EXPFUNC sqrtl  (long double __x);
long double _RTLENTRY _EXPFUNC tanhl  (long double __x);
long double _RTLENTRY _EXPFUNC tanl   (long double __x);

double      _RTLENTRY _EXPFUNC atof    (const char * __s);

#if !defined(__STDC__) /* NON_ANSI */

#if !defined(__clang__)
#if !defined(__ABS_DEFINED)
#define __ABS_DEFINED
#ifdef __cplusplus
inline int _RTLENTRY  abs(int __x) { return __abs__(__x); }
#else
int         _RTLENTRY _EXPFUNC abs(int __x);
#  define abs(x)   __abs__(x)
#endif /* __cplusplus */
#endif /* __ABS_DEFINED */
#else /* __clang__ */
int         _RTLENTRY _EXPFUNC abs(int __x);
#endif /* __clang__ */

long        _RTLENTRY _EXPFUNC labs    (long __x);
double      _RTLENTRY _EXPFUNC pow10   (int __p);

long double _RTLENTRY _EXPFUNC _atold  (const char * __s);


double      _RTLENTRY _EXPFUNC poly    (double __x, int __degree, double __coeffs []);
long double _RTLENTRY _EXPFUNC polyl   (long double __x, int __degree, long double __coeffs []);
long double _RTLENTRY _EXPFUNC pow10l  (int __p);

#if defined (_INTEGRAL_MAX_BITS) && (_INTEGRAL_MAX_BITS >= 64)
__int64     _RTLENTRY _EXPFUNC   _atoi64(const char * __s);
char *      _RTLENTRY   _EXPFUNC _i64toa(__int64 __value, char *__strP, int __radix);
char *      _RTLENTRY   _EXPFUNC _ui64toa(unsigned __int64 __value, char *__strP, int __radix);
__int64     _RTLENTRY _EXPFUNC   _wtoi64(const wchar_t * __s);
wchar_t *   _RTLENTRY   _EXPFUNC _i64tow(__int64 __value, wchar_t *__strP, int __radix);
wchar_t *   _RTLENTRY   _EXPFUNC _ui64tow(unsigned __int64 __value, wchar_t *__strP, int __radix);
#endif
double      _RTLENTRY _EXPFUNC   _wtof(const wchar_t * __s);
int         _RTLENTRY _EXPFUNC   _wtoi(const wchar_t * __s);
long        _RTLENTRY _EXPFUNC   _wtol(const wchar_t * __s);
long double _RTLENTRY _EXPFUNC   _wtold(const wchar_t * __s);

#endif  /* !__STDC__ */

#if defined(X__CODEGEARC__) && defined(__clang__)

#ifndef _Tg_promote
#define _Tg_promote(From, To) \
	static To __attribute__((__overloadable__)) __tg_promote(From)

_Tg_promote(int, double);
_Tg_promote(unsigned int, double);
_Tg_promote(long, double);
_Tg_promote(unsigned long, double);
_Tg_promote(long long, double);
_Tg_promote(unsigned long long, double);
_Tg_promote(float, float);
_Tg_promote(double, double);
_Tg_promote(long double, long double);

_Tg_promote(float _Complex, float _Complex);
_Tg_promote(double _Complex, double _Complex);
_Tg_promote(long double _Complex, long double _Complex);

static void __tg_promote(...)
	__attribute__((__overloadable__, __unavailable__));

#define _Tg_overload	__attribute__((__overloadable__, __always_inline__))

#define _Prom1(x)	(__typeof__(__tg_promote(x)))
#define _Prom2(x, y)	(__typeof__(__tg_promote(x) + __tg_promote(y)))
#define _Prom3(x, y, z)	(__typeof__(__tg_promote(x) + __tg_promote(y) \
	+ __tg_promote(z)))
 #endif /* _Tg_promote */

#define _Tg_R(fn) \
static int _Tg_overload _Tg_##fn(float _Left) \
	{return (_F##fn(_Left));} \
static int _Tg_overload _Tg_##fn(double _Left) \
	{return (_##fn(_Left));} \
static int _Tg_overload _Tg_##fn(long double _Left) \
	{return (_L##fn(_Left));}
#define _Tg_R2i(fn, rty) \
static rty _Tg_overload _Tg_##fn(float _Left, float _Right) \
	{return (_F##fn(_Left, _Right));} \
static rty _Tg_overload _Tg_##fn(double _Left, double _Right) \
	{return (_##fn(_Left, _Right));} \
static rty _Tg_overload \
		_Tg_##fn(long double _Left, long double _Right) \
	{return (_L##fn(_Left, _Right));}
_Tg_R2i(Fpcomp, int)
#undef _FPCOMP
#define _FPCOMP(x, y)	_Tg_Fpcomp(_Prom2(x, y)(x), _Prom2(x, y)(y))

_Tg_R(Dclass)
#undef fpclassify
#define fpclassify(x)	_Tg_Dclass(_Prom1(x)(x))

_Tg_R(Dsign)
#undef signbit
#define signbit(x)	_Tg_Dsign(_Prom1(x)(x))

#endif

/* Add overloaded functions from 26.5 here */
#if defined(__cplusplus)

extern "C++" {

#if defined(_WIN64)
inline float abs (float __x) { return fabsf(__x); }
inline float acos (float __x) { return acosf(__x); }
inline float acosh (float __x) { return acoshf(__x); }
inline float asin (float __x) { return asinf(__x); }
inline float asinh (float __x) { return asinhf(__x); }
inline float atan (float __x) { return atanf(__x); }
inline float atan2(float __x, float __y) { return atan2f(__x, __y); }
inline float atanh (float __x) { return atanhf(__x); }
inline float ceil (float __x) { return ceilf(__x); }
inline float cos (float __x) { return cosf(__x); }
inline float cosh (float __x) { return coshf(__x); }
inline float exp (float __x) { return expf(__x); }
inline float fabs (float __x) { return fabsf(__x); }
inline float floor(float __x) { return floorf(__x); }
inline float fmod (float __x, float __y) { return fmodf(__x, __y); }
inline float frexp(float __x, int *__y) { return frexpf(__x,__y); }
inline float hypot(float __x, float __y) { return hypotf(__x,__y); }
inline float ldexp(float __x, int __y) { return ldexpf(__x,__y); }
inline float log (float __x) { return logf(__x); }
inline float log10(float __x) { return log10f(__x); }
inline float modf (float __x, float *__y) { return modff(__x, __y); }
inline float pow (float __x, float __y) { return powf(__x,__y); }
inline float sin (float __x) { return sinf(__x); }
inline float sinh (float __x) { return sinhf(__x); }
inline float sqrt (float __x) { return sqrtf(__x); }
inline float tan (float __x) { return tanf(__x); }
inline float tanh (float __x) { return tanhf(__x); }

inline double abs(double __x) { return fabs(__x); }

inline long double abs (long double __x) { return fabsl(__x); }
inline long double acos (long double __x) { return acosl(__x); }
inline long double acosh (long double __x) { return acoshl(__x); }
inline long double asin (long double __x) { return asinl(__x); }
inline long double asinh (long double __x) { return asinhl(__x); }
inline long double atan (long double __x) { return atanl(__x); }
inline long double atan2(long double __x, long double __y) { return atan2l(__x,__y); }
inline long double atanh (long double __x) { return atanhl(__x); }
inline long double ceil (long double __x) { return ceill(__x); }
inline long double cos (long double __x) { return cosl(__x); }
inline long double cosh (long double __x) { return coshl(__x); }
inline long double exp (long double __x) { return expl(__x); }
inline long double fabs (long double __x) { return fabsl(__x); }
inline long double floor(long double __x) { return floorl(__x); }
inline long double fmod (long double __x, long double __y) { return fmodl(__x,__y); }
inline long double frexp(long double __x, int *__y) { return frexpl(__x,__y); }
inline long double hypot(long double __x, long double __y) { return hypotl(__x,__y); }
inline long double ldexp(long double __x, int __y) { return ldexpl(__x,__y); }
inline long double log (long double __x) { return logl(__x); }
inline long double log10(long double __x) { return log10l(__x); }
inline long double modf (long double __x, long double *__y) { return modfl(__x,__y); }
inline long double pow (long double __x, long double __y) { return powl(__x,__y); }
inline long double sin (long double __x) { return sinl(__x); }
inline long double sinh (long double __x) { return sinhl(__x); }
inline long double sqrt (long double __x) { return sqrtl(__x); }
inline long double tan (long double __x) { return tanl(__x); }
inline long double tanh (long double __x) { return tanhl(__x); }
#else
inline float abs (float __x) { return (float)fabs((double)__x); }
inline float acos (float __x) { return (float)acos((double)__x); }
inline float asin (float __x) { return (float)asin((double)__x); }
inline float atan (float __x) { return (float)atan((double)__x); }
inline float atan2(float __x, float __y) { return (float)atan2((double)__x,(double)__y); }
inline float ceil (float __x) { return (float)ceil((double)__x); }
inline float cos (float __x) { return (float)cos((double)__x); }
inline float cosh (float __x) { return (float)cosh((double)__x); }
inline float exp (float __x) { return (float)exp((double)__x); }
inline float fabs (float __x) { return (float)fabs((double)__x); }
inline float floor(float __x) { return (float)floor((double)__x); }
inline float fmod (float __x, float __y) { return (float)fmod((double) __x,(double) __y); }
inline float frexp(float __x, int *__y) { return (float)frexp((double)__x,__y); }
inline float hypot(float __x, float __y) { return (float)hypot((double) __x,(double) __y); }
inline float ldexp(float __x, int __y) { return (float)ldexp((double)__x,__y); }
inline float log (float __x) { return (float)log((double)__x); }
inline float log10(float __x) { return (float)log10((double)__x); }
inline float pow (float __x, float __y) { return (float)pow((double)__x,(double)__y); }
inline float pow (float __x, int __y) { return (float)pow((double)__x,(double)__y); }
inline float sin (float __x) { return (float)sin((double)__x); }
inline float sinh (float __x) { return (float)sinh((double)__x); }
inline float sqrt (float __x) { return (float)sqrt((double)__x); }
inline float tan (float __x) { return (float)tan((double)__x); }
inline float tanh (float __x) { return (float)tanh((double)__x); }

inline float modf (float __x, float *__y) 
{ 
  double __d;
  float __f = (float)modf((double)__x, &__d); 
  *__y = (float) __d;
  return __f;
}

inline double abs(double __x) { return fabs(__x); }
inline double pow(double __x, int __y) { return pow(__x,(double)__y); }

inline long double abs (long double __x) { return fabsl(__x); }
inline long double acos (long double __x) { return acosl(__x); }
inline long double asin (long double __x) { return asinl(__x); }
inline long double atan (long double __x) { return atanl(__x); }
inline long double atan2(long double __x, long double __y) { return atan2l(__x,__y); }
inline long double ceil (long double __x) { return ceill(__x); }
inline long double cos (long double __x) { return cosl(__x); }
inline long double cosh (long double __x) { return coshl(__x); }
inline long double exp (long double __x) { return expl(__x); }
inline long double fabs (long double __x) { return fabsl(__x); }
inline long double floor(long double __x) { return floorl(__x); }
inline long double fmod (long double __x, long double __y) { return fmodl(__x,__y); }
inline long double hypot(long double __x, long double __y) { return hypotl(__x,__y); }
inline long double frexp(long double __x, int *__y) { return frexpl(__x,__y); }
inline long double ldexp(long double __x, int __y) { return ldexpl(__x,__y); }
inline long double log (long double __x) { return logl(__x); }
inline long double log10(long double __x) { return log10l(__x); }
inline long double modf (long double __x, long double *__y) { return modfl(__x,__y); }
inline long double pow (long double __x, long double __y) { return powl(__x,__y); }
inline long double pow (long double __x, int __y) { return powl(__x,(double)__y); }
inline long double sin (long double __x) { return sinl(__x); }
inline long double sinh (long double __x) { return sinhl(__x); }
inline long double sqrt (long double __x) { return sqrtl(__x); }
inline long double tan (long double __x) { return tanl(__x); }
inline long double tanh (long double __x) { return tanhl(__x); }
#endif /* _WIN64 */

}

#endif /* __cplusplus */

#ifdef __cplusplus
} // extern "C"
} // std
#endif /* __cplusplus */

#if !defined(RC_INVOKED)

/* restore default packing */
#pragma pack(pop)

#if defined(__STDC__)
#pragma warn .nak
#endif

#endif  /* !RC_INVOKED */
#endif  /* __MATH_H */

#if defined(__cplusplus) && !defined(__XUSING_CNAME__) && !defined(__MATH_H_USING_LIST)
#define __MATH_H_USING_LIST
    using std::_huge_dble;
    using std::_huge_ldble;
    using std::acos;
    using std::asin;
    using std::atan;
    using std::atan2;
    using std::ceil;
    using std::cosh;
    using std::exp;
    using std::fabs;
    using std::floor;
    using std::fmod;
    using std::frexp;
    using std::hypot;
    using std::ldexp;
    using std::log;
    using std::log10;
    using std::modf;
    using std::pow;
    using std::sinh;
    using std::sqrt;
    using std::tan;
    using std::tanh;
    using std::acosl;
    using std::asinl;
    using std::atan2l;
    using std::atanl;
    using std::ceill;
    using std::coshl;
    using std::expl;
    using std::fabsl;
    using std::floorl;
    using std::fmodl;
    using std::frexpl;
    using std::hypotl;
    using std::ldexpl;
    using std::log10l;
    using std::logl;
    using std::modfl;
    using std::powl;
    using std::sinhl;
    using std::sqrtl;
    using std::tanhl;
    using std::tanl;
    using std::atof;

    using std::atan2f;
    using std::ceilf;
    using std::cosf;
    using std::expf;
    using std::floorf;
    using std::ldexpf;
    using std::logf;
    using std::powf;
    using std::sinf;
    using std::sqrtf;
    using std::tanf;

#if defined(_WIN64)
    using std::acosf;
    using std::asinf;
    using std::atanf;
    using std::coshf;
    using std::fabsf;
    using std::fmodf;
    using std::frexpf;
    using std::hypotf;
    using std::log10f;
    using std::modff;
    using std::sinhf;
    using std::tanhf;

    using std::nan;
    using std::nanf;
    using std::nanl;
    using std::round;
    using std::roundf;
    using std::roundl;
    using std::acoshf;
    using std::asinhf;
    using std::atanhf;
    using std::acosh;
    using std::asinh;
    using std::atanh;
    using std::acoshl;
    using std::asinhl;
    using std::atanhl;

#endif

/*
   Handle intrinsics specially.  If intrinsics are on, the compiler creates
   a macro of the normal function mapping to the __ intrinsic version, ie:
     #define strcpy __strcpy__
   Thus, we can test the normal name as a macro to see if it's defined, and
   only preform a using statement if it's not an intrinsic
*/

#   ifndef sin
      using std::sin;
#   endif // ifndef sin
#   ifndef cos
      using std::cos;
#   endif // ifndef cos
#   ifndef sinl
      using std::sinl;
#   endif // ifndef sinl
#   ifndef cosl
      using std::cosl;
#   endif // ifndef cosl

# if !defined(__STDC__) /* NON_ANSI */
#   ifndef abs
      using std::abs;
#   endif // ifndef abs

    using std::labs;
    using std::pow10;
    using std::_atold;
    using std::poly;
    using std::polyl;
    using std::pow10l;

# if defined (_INTEGRAL_MAX_BITS) && (_INTEGRAL_MAX_BITS >= 64)
    using std::_atoi64;
    using std::_i64toa;
    using std::_ui64toa;
    using std::_wtoi64;
    using std::_i64tow;
    using std::_ui64tow;
    using std::_wtof;
    using std::_wtoi;
    using std::_wtol;
    using std::_wtold;
# endif // _INTEGRAL_MAX_BITS
# endif // !__STDC__
#endif /* __XUSING_CNAME__ */

#if defined(_FM_USE_FASTMATH) && !defined(__FASTMATH_H)
#   include <fastmath.h>
#endif /* _FM_USE_FASTMATH */


#else /* !defined(__clang__) */

/* math.h standard header */
#ifndef _MATH
#define _MATH
#include <ymath.h>

 #if defined(__cplusplus)
#include <xtgmath.h>
 #endif /* defined(__cplusplus) */

#if defined(__CODEGEARC__)
#ifdef __cplusplus
  extern "C" {
#endif

struct  _exception
{
    int type;
    char   _FAR *name;
    double  arg1, arg2, retval;
};

struct  _exceptionl
{
    int type;
    char   _FAR *name;
    long double  arg1, arg2, retval;
};

typedef enum
{
    DOMAIN = 1,    /* argument domain error -- log (-1)        */
    SING,          /* argument singularity  -- pow (0,-2))     */
    OVERFLOW,      /* overflow range error  -- exp (1000)      */
    UNDERFLOW,     /* underflow range error -- exp (-1000)     */
    TLOSS,         /* total loss of significance -- sin(10e70) */
    PLOSS,         /* partial loss of signif. -- not used      */
    STACKFAULT     /* floating point unit stack overflow       */
}   _mexcep;

int         _RTLENTRY          _matherr(struct _exception  *__e);
int         _RTLENTRY          _matherrl(struct _exceptionl *__e);

#ifdef __cplusplus
}  // extern "C"
#endif

/* Non standard defines */
/* Constants rounded for 21 decimals. */
#define M_E         2.71828182845904523536
#define M_LOG2E     1.44269504088896340736
#define M_LOG10E    0.434294481903251827651
#define M_LN2       0.693147180559945309417
#define M_LN10      2.30258509299404568402
#define M_PI        3.14159265358979323846
#define M_PI_2      1.57079632679489661923
#define M_PI_4      0.785398163397448309616
#define M_1_PI      0.318309886183790671538
#define M_2_PI      0.636619772367581343076
#define M_1_SQRTPI  0.564189583547756286948
#define M_2_SQRTPI  1.12837916709551257390
#define M_SQRT2     1.41421356237309504880
#define M_SQRT_2    0.707106781186547524401
#endif

#ifndef _HAS_SPECIAL_MATH
 #define _HAS_SPECIAL_MATH	1	/* on by default for C++ */
#endif /* _HAS_SPECIAL_MATH */

_C_STD_BEGIN
		/* CODES FOR is* FUNCTIONS */
#define _FP_LT	1
#define _FP_EQ	2
#define _FP_GT	4

		/* CODES FOR ilogb FUNCTIONS */

 #if _ILONG
  #define _FP_ILOGB0	(-0x7fffffff - _C2)
  #define _FP_ILOGBNAN	0x7fffffff

 #else /* _ILONG */
  #define _FP_ILOGB0	(-0x7fff - _C2)
  #define _FP_ILOGBNAN	0x7fff
 #endif /* _ILONG */

 #if _HAS_C99
		/* TYPES */

 #if _FEVAL == 1
typedef double float_t;
typedef double double_t;

 #elif _FEVAL == 2
typedef long double float_t;
typedef long double double_t;

 #else /* _FEVAL */
typedef float float_t;
typedef double double_t;
 #endif /* _FEVAL */

		/* MACROS */

 #if 245 < __EDG_VERSION__ && !defined(__cplusplus)
  #define HUGE_VAL	((double)__INFINITY__)
  #define HUGE_VALF	__INFINITY__
  #define HUGE_VALL	((long double)__INFINITY__)
  #define INFINITY	__INFINITY__
  #define NAN		__NAN__

 #elif defined(__EDG__) || 0 < _MSC_VER || _GCC48
  #define HUGE_VAL	_CSTD _Inf._Double
  #define HUGE_VALF	_CSTD _FInf._Float
  #define HUGE_VALL	_CSTD _LInf._Long_double
  #define INFINITY	_CSTD _FInf._Float
  #define NAN		_CSTD _FNan._Float

 #else /* !defined(__EDG__) */
  #ifndef _HUGE_ENUF
   #define _HUGE_ENUF	1e+300	/* _HUGE_ENUF*_HUGE_ENUF must overflow */
  #endif /* _HUGE_ENUF */

  #define HUGE_VAL	((double)INFINITY)
  #define HUGE_VALF	((float)INFINITY)
  #define HUGE_VALL	((long double)INFINITY)
  #define INFINITY	((float)(_HUGE_ENUF * _HUGE_ENUF))
  #define NAN		((float)(INFINITY * 0.0F))
 #endif /* 245 < __EDG_VERSION__ */

#define FP_INFINITE		_INFCODE
#define FP_NAN			_NANCODE
#define FP_NORMAL		_FINITE
#define FP_SUBNORMAL	_DENORM
#define FP_ZERO			0

 #define FP_ILOGB0		_FP_ILOGB0
 #define FP_ILOGBNAN	_FP_ILOGBNAN

#define MATH_ERRNO			1
#define MATH_ERREXCEPT		2
#define math_errhandling	(MATH_ERRNO | MATH_ERREXCEPT)	/* do both */

_C_LIB_DECL
#if defined(__CODEGEARC__)
_CRTIMP2 int _FFpcomp(float, float);
_CRTIMP2 int _Fpcomp(double, double);
_CRTIMP2 int _LFpcomp(long double, long double);

_CRTIMP2 int _FDclass(float);
_CRTIMP2 int _Dclass(double);
_CRTIMP2 int _LDclass(long double);

_CRTIMP2 int _FDsign(float);
_CRTIMP2 int _Dsign(double);
_CRTIMP2 int _LDsign(long double);
#else
int _FFpcomp(float, float);
int _Fpcomp(double, double);
int _LFpcomp(long double, long double);

int _FDclass(float);
int _Dclass(double);
int _LDclass(long double);

int _FDsign(float);
int _Dsign(double);
int _LDsign(long double);
#endif
_END_C_LIB_DECL

 #if defined(__cplusplus)
		// TEMPLATE FUNCTION _FPCOMP
inline int _FPCOMP(float _Left, float _Right)
	{	// compare _Left and _Right
	return (_FFpcomp(_Left, _Right));
	}

inline int _FPCOMP(double _Left, double _Right)
	{	// compare _Left and _Right
	return (_Fpcomp(_Left, _Right));
	}

inline int _FPCOMP(long double _Left, long double _Right)
	{	// compare _Left and _Right
	return (_LFpcomp(_Left, _Right));
	}

template<class _Ty1,
	class _Ty2> inline
	int _FPCOMP(_Ty1 _Left, _Ty2 _Right)
	{	// compare two floating-point arguments
	typedef typename _STD _Common_float_type<_Ty1, _Ty2>::type type;
	return (_FPCOMP((type)_Left, (type)_Right));
	}

		// TEMPLATE FUNCTION fpclassify
inline int fpclassify(float _Left)
	{	// classify argument
	return (_FDtest(&_Left));
	}

inline int fpclassify(double _Left)
	{	// classify argument
	return (_Dtest(&_Left));
	}

inline int fpclassify(long double _Left)
	{	// classify argument
	return (_LDtest(&_Left));
	}

template<class _Ty> inline
	int fpclassify(_Ty _Left)
	{	// classify floating-point argument
	typedef typename _STD _Promote_to_float<_Ty>::type type;
	return (_CSTD fpclassify((type)_Left));
	}

		// TEMPLATE FUNCTION signbit
inline bool signbit(float _Left)
	{	// test sign bit
	return (_FDsign(_Left) != 0);
	}

inline bool signbit(double _Left)
	{	// test sign bit
	return (_Dsign(_Left) != 0);
	}

inline bool signbit(long double _Left)
	{	// test sign bit
	return (_LDsign(_Left) != 0);
	}

template<class _Ty> inline
	bool signbit(_Ty _Left)
	{	// test floating-point sign bit
	typedef typename _STD _Promote_to_float<_Ty>::type type;
	return (_CSTD signbit((type)_Left));
	}

		// CLASSIFICATION TEMPLATES
template<class _Ty> inline
	bool isfinite(_Ty _Left)
	{	// test for finite
	return (fpclassify(_Left) <= 0);
	}

template<class _Ty> inline
	bool isinf(_Ty _Left)
	{	// test for infinite
	return (fpclassify(_Left) == FP_INFINITE);
	}

template<class _Ty> inline
	bool isnan(_Ty _Left)
	{	// test for NaN
	return (fpclassify(_Left) == FP_NAN);
	}

template<class _Ty> inline
	bool isnormal(_Ty _Left)
	{	// test for normal
	return (fpclassify(_Left) == FP_NORMAL);
	}

		// COMPARISON TEMPLATES
template<class _Ty1, class _Ty2> inline
	bool isgreater(_Ty1 _Left, _Ty2 _Right)
	{	// test for _Left > _Right
	return ((_FPCOMP(_Left, _Right) & _FP_GT) != 0);
	}

template<class _Ty1, class _Ty2> inline
	bool isgreaterequal(_Ty1 _Left, _Ty2 _Right)
	{	// test for _Left >= _Right
	return ((_FPCOMP(_Left, _Right) & (_FP_EQ | _FP_GT)) != 0);
	}

template<class _Ty1, class _Ty2> inline
	bool isless(_Ty1 _Left, _Ty2 _Right)
	{	// test for _Left < _Right
	return ((_FPCOMP(_Left, _Right) & _FP_LT) != 0);
	}

template<class _Ty1, class _Ty2> inline
	bool islessequal(_Ty1 _Left, _Ty2 _Right)
	{	// test for _Left <= _Right
	return ((_FPCOMP(_Left, _Right) & (_FP_LT | _FP_EQ)) != 0);
	}

template<class _Ty1, class _Ty2> inline
	bool islessgreater(_Ty1 _Left, _Ty2 _Right)
	{	// test for _Left != _Right
	return ((_FPCOMP(_Left, _Right) & (_FP_LT | _FP_GT)) != 0);
	}

template<class _Ty1, class _Ty2> inline
	bool isunordered(_Ty1 _Left, _Ty2 _Right)
	{	// test for _Left unorderd w.r.t. _Right
	return (_FPCOMP(_Left, _Right) == 0);
	}

 #else /* defined(__cplusplus) */

 #if _CLANG	/* compiler test */
 #ifndef _Tg_promote
#define _Tg_promote(From, To) \
	static To __attribute__((__overloadable__)) __tg_promote(From)

_Tg_promote(int, double);
_Tg_promote(unsigned int, double);
_Tg_promote(long, double);
_Tg_promote(unsigned long, double);
_Tg_promote(long long, double);
_Tg_promote(unsigned long long, double);
_Tg_promote(float, float);
_Tg_promote(double, double);
_Tg_promote(long double, long double);

_Tg_promote(float _Complex, float _Complex);
_Tg_promote(double _Complex, double _Complex);
_Tg_promote(long double _Complex, long double _Complex);

static void __tg_promote(...)
	__attribute__((__overloadable__, __unavailable__));

#define _Tg_overload	__attribute__((__overloadable__, __always_inline__))

#define _Prom1(x)	(__typeof__(__tg_promote(x)))
#define _Prom2(x, y)	(__typeof__(__tg_promote(x) + __tg_promote(y)))
#define _Prom3(x, y, z)	(__typeof__(__tg_promote(x) + __tg_promote(y) \
	+ __tg_promote(z)))
 #endif /* _Tg_promote */

#define _Tg_R(fn) \
static int _Tg_overload _Tg_##fn(float _Left) \
	{return (_F##fn(_Left));} \
static int _Tg_overload _Tg_##fn(double _Left) \
	{return (_##fn(_Left));} \
static int _Tg_overload _Tg_##fn(long double _Left) \
	{return (_L##fn(_Left));}
#define _Tg_R2i(fn, rty) \
static rty _Tg_overload _Tg_##fn(float _Left, float _Right) \
	{return (_F##fn(_Left, _Right));} \
static rty _Tg_overload _Tg_##fn(double _Left, double _Right) \
	{return (_##fn(_Left, _Right));} \
static rty _Tg_overload \
		_Tg_##fn(long double _Left, long double _Right) \
	{return (_L##fn(_Left, _Right));}
_Tg_R2i(Fpcomp, int)
#undef _FPCOMP
#define _FPCOMP(x, y)	_Tg_Fpcomp(_Prom2(x, y)(x), _Prom2(x, y)(y))

_Tg_R(Dclass)
#undef fpclassify
#define fpclassify(x)	_Tg_Dclass(_Prom1(x)(x))

_Tg_R(Dsign)
#undef signbit
#define signbit(x)	_Tg_Dsign(_Prom1(x)(x))

 #else /* _CLANG */

  #if __EDG__
   #define _CARGR(x, fd, ff, fl) \
	__generic(x,,, fd, ff, fl,,,)(x)
   #define _CARG2R(x, y, fd, ff, fl) \
	__generic(x, y,, fd, ff, fl,,,)(x, y)

 #elif _GCC48
  #define _FLT_OR_DBL(x) \
	_Generic((x) + 1ULL, default: x, unsigned long long: (double)(x))
  #define _CARGR(x, fd, ff, fl) \
	_Generic((x), default: fd, float: ff, long double: fl)(x)
  #define _CARG2R(x, y, fd, ff, fl) \
	_Generic(_FLT_OR_DBL(x) + _FLT_OR_DBL(y), \
		default: fd, float: ff, long double: fl)(x, y)

  #elif _GCC44
 #ifndef _GCCARGX
/* real or complex, one argument, three functions */
  #define _GCCARGX(x, args, fund, funf, funl) \
__builtin_choose_expr( \
	__builtin_types_compatible_p(__typeof__(__real__ x), long double), \
	funl args, \
	__builtin_choose_expr( \
		__builtin_types_compatible_p(__typeof__(__real__ x), double) \
			|| __builtin_classify_type(__real__ x) == 1, \
		fund args, \
		funf args \
		) \
	)

/* real, three arguments, three functions */
  #define _GCCARG3R(x, y, z, args, fund, funf, funl) \
__builtin_choose_expr( \
	__builtin_types_compatible_p(__typeof__(x), long double) \
		|| __builtin_types_compatible_p(__typeof__(y), long double) \
		|| __builtin_types_compatible_p(__typeof__(z), long double), \
	funl args, \
	__builtin_choose_expr( \
		__builtin_types_compatible_p(__typeof__(x), double) \
			|| __builtin_classify_type(x) == 1 \
			||	__builtin_types_compatible_p(__typeof__(y), double) \
			|| __builtin_classify_type(y) == 1 \
			||	__builtin_types_compatible_p(__typeof__(z), double) \
			|| __builtin_classify_type(z) == 1, \
		fund args, \
		funf args \
		) \
	)
 #endif /* _GCCARGX */

  #define _CARGR(x, fd, ff, fl) \
	_GCCARGX(x, (x), fd, ff, fl)
  #define _CARG2R(x, y, fd, ff, fl) \
	_GCCARG3R(x, y, y, (x, y), fd, ff, fl)

  #elif 2 <= __GNUC__
   #define _FLT_TYPE(expression)	_FLT_OR_DBL(__typeof__ (expression))

  #define _FLT_OR_DBL(mytype)	__typeof__ (*(0 \
	? (__typeof__ (0 ? (mytype *)0 \
		: (void *)!((mytype)0.5 && (mytype)0.5 - 1)))0 \
	: (__typeof__ (0 ? (double *)0 \
		: (void *)((mytype)0.5 && (mytype)0.5 - 1)))0))

   #define _CARGR(x, fd, ff, fl) \
	(__extension__({ \
	int _Ans; \
	if (sizeof (_FLT_TYPE(x)) == sizeof (double)) \
		_Ans = fd(x); \
	else if (sizeof (_FLT_TYPE(x)) == sizeof (float)) \
	_Ans = ff(x); \
	else \
		_Ans = fl(x); \
	_Ans; \
	}))

   #define _CARG2R(x, y, fd, ff, fl) \
	(__extension__({ \
	int _Ans; \
	if (sizeof (_FLT_TYPE((x) + (y))) == sizeof (double)) \
		_Ans = fd(x, y); \
	else if (sizeof (_FLT_TYPE((x) + (y))) == sizeof (float)) \
		_Ans = ff(x, y); \
	else \
		_Ans = fl(x, y); \
	_Ans; \
	}))

  #else /* compiler type */
   #define _ARG(x)	(sizeof ((x) + (float)0) == sizeof (float) ? 'f' \
	: sizeof ((x) + (double)0) == sizeof (double) ? 'd' \
	: 'l')
   #define _CARGR(x, fd, ff, fl)	\
	(_ARG(x) == 'f' ? ff((float)(x)) \
	: _ARG(x) == 'd' ? fd((double)(x)) \
	: fl((long double)(x)))
   #define _CARG2R(x, y, fd, ff, fl)	\
	(_ARG((x) + (y)) == 'f' ? ff((float)(x), (float)(y)) \
	: _ARG((x) + (y)) == 'd' ? fd((double)(x), (double)(y)) \
	: fl((long double)(x), (long double)(y)))
  #endif /* compiler type */

  #define _FPCOMP(x, y) \
	_CARG2R(x, y, _Fpcomp, _FFpcomp, _LFpcomp)
  #define fpclassify(x) \
	_CARGR(x, _Dclass, _FDclass, _LDclass)
  #define signbit(x) \
	_CARGR(x, _Dsign, _FDsign, _LDsign)
 #endif /* _CLANG */

  #define isfinite(x)	(fpclassify(x) <= 0)
  #define isinf(x)		(fpclassify(x) == FP_INFINITE)
  #define isnan(x)		(fpclassify(x) == FP_NAN)
  #define isnormal(x)	(fpclassify(x) == FP_NORMAL)

  #define isgreater(x, y)	\
	((_FPCOMP(x, y) & _FP_GT) != 0)
  #define isgreaterequal(x, y)	\
	((_FPCOMP(x, y) & (_FP_EQ | _FP_GT)) != 0)
  #define isless(x, y)	\
	((_FPCOMP(x, y) & _FP_LT) != 0)
  #define islessequal(x, y)	\
	((_FPCOMP(x, y) & (_FP_LT | _FP_EQ)) != 0)
  #define islessgreater(x, y)	\
	((_FPCOMP(x, y) & (_FP_LT | _FP_GT)) != 0)
  #define isunordered(x, y)	\
	(_FPCOMP(x, y) == 0)
 #endif /* defined(__cplusplus) */

 #else /* _HAS_C99 */
		/* MACROS */
 #define HUGE_VAL	_CSTD _Hugeval._Double
 #endif /* _HAS_C99 */

_C_LIB_DECL
		/* double declarations */
_CRTIMP2 double acos(double);
_CRTIMP2 double asin(double);
_CRTIMP2 double atan(double);
_CRTIMP2 double atan2(double, double);
_CRTIMP2 double ceil(double);
_CRTIMP2 double exp(double);
_CRTIMP2 double fabs(double);
_CRTIMP2 double floor(double);
_CRTIMP2 double fmod(double, double);
_CRTIMP2 double frexp(double, int *);
_CRTIMP2 double ldexp(double, int);
_CRTIMP2 double modf(double, double *);
_CRTIMP2 double pow(double, double);
_CRTIMP2 double sqrt(double);
_CRTIMP2 double tan(double);
_CRTIMP2 double tanh(double);

#if defined(__CODEGEARC__)
_CRTIMP2 double pow10(int);
#endif

 #if _HAS_C99
_CRTIMP2 double acosh(double);
_CRTIMP2 double asinh(double);
_CRTIMP2 double atanh(double);
_CRTIMP2 double cbrt(double);
_CRTIMP2 double copysign(double, double);
_CRTIMP2 double erf(double);
_CRTIMP2 double erfc(double);
_CRTIMP2 double exp2(double);
_CRTIMP2 double expm1(double);
_CRTIMP2 double fdim(double, double);
_CRTIMP2 double fma(double, double, double);
_CRTIMP2 double fmax(double, double);
_CRTIMP2 double fmin(double, double);
_CRTIMP2 double hypot(double, double);
_CRTIMP2 double hypot3(double, double, double);
_CRTIMP2 int ilogb(double);
_CRTIMP2 double lgamma(double);
_CRTIMP2 long long llrint(double);
_CRTIMP2 long long llround(double);
_CRTIMP2 double log1p(double);
_CRTIMP2 double logb(double);
_CRTIMP2 long lrint(double);
_CRTIMP2 long lround(double);
_CRTIMP2 double nan(const char *);
_CRTIMP2 double nearbyint(double);
_CRTIMP2 double nextafter(double, double);
_CRTIMP2 double nexttoward(double, long double);
_CRTIMP2 double remainder(double, double);
_CRTIMP2 double remquo(double, double, int *);
_CRTIMP2 double rint(double);
_CRTIMP2 double round(double);
_CRTIMP2 double scalbn(double, int);
_CRTIMP2 double scalbln(double, long);
_CRTIMP2 double tgamma(double);
_CRTIMP2 double trunc(double);
 #endif /* _HAS_C99 */

 #if _HAS_SPECIAL_MATH
_CRTIMP2 double assoc_laguerre(unsigned, unsigned, double);
_CRTIMP2 double assoc_legendre(unsigned, unsigned, double);
_CRTIMP2 double beta(double, double);
_CRTIMP2 double comp_ellint_1(double);
_CRTIMP2 double comp_ellint_2(double);
_CRTIMP2 double comp_ellint_3(double, double);
_CRTIMP2 double cyl_bessel_i(double, double);
_CRTIMP2 double cyl_bessel_j(double, double);
_CRTIMP2 double cyl_bessel_k(double, double);
_CRTIMP2 double cyl_neumann(double, double);
_CRTIMP2 double ellint_1(double, double);
_CRTIMP2 double ellint_2(double, double);
_CRTIMP2 double ellint_3(double, double, double);
_CRTIMP2 double expint(double);
_CRTIMP2 double hermite(unsigned, double);
_CRTIMP2 double laguerre(unsigned, double);
_CRTIMP2 double legendre(unsigned, double);
_CRTIMP2 double riemann_zeta(double);
_CRTIMP2 double sph_bessel(unsigned, double);
_CRTIMP2 double sph_legendre(unsigned, unsigned, double);
_CRTIMP2 double sph_neumann(unsigned, double);

// #if _HAS_ADDED_FUNCTIONS
_CRTIMP2 double besseli0(double);
_CRTIMP2 double besseli1(double);
_CRTIMP2 double besselj0(double);
_CRTIMP2 double besselj1(double);
_CRTIMP2 double besselk0(double);
_CRTIMP2 double besselk1(double);
_CRTIMP2 double bessely0(double);
_CRTIMP2 double bessely1(double);

_CRTIMP2 double j0(double);
_CRTIMP2 double j1(double);
_CRTIMP2 double jn(double);
_CRTIMP2 double y0(double);
_CRTIMP2 double y1(double);
_CRTIMP2 double yn(double);
// #endif /* _HAS_ADDED_FUNCTIONS */

 #endif /* _HAS_SPECIAL_MATH */

		/* float declarations */
_CRTIMP2 float acosf(float);
_CRTIMP2 float asinf(float);
_CRTIMP2 float atanf(float);
_CRTIMP2 float atan2f(float, float);
_CRTIMP2 float ceilf(float);
_CRTIMP2 float expf(float);
_CRTIMP2 float fabsf(float);
_CRTIMP2 float floorf(float);
_CRTIMP2 float fmodf(float, float);
_CRTIMP2 float frexpf(float, int *);
_CRTIMP2 float ldexpf(float, int);
_CRTIMP2 float modff(float, float *);
_CRTIMP2 float powf(float, float);
_CRTIMP2 float sqrtf(float);
_CRTIMP2 float tanf(float);
_CRTIMP2 float tanhf(float);

 #if _HAS_C99
_CRTIMP2 float acoshf(float);
_CRTIMP2 float asinhf(float);
_CRTIMP2 float atanhf(float);
_CRTIMP2 float cbrtf(float);
_CRTIMP2 float copysignf(float, float);
_CRTIMP2 float erff(float);
_CRTIMP2 float erfcf(float);
_CRTIMP2 float expm1f(float);
_CRTIMP2 float exp2f(float);
_CRTIMP2 float fdimf(float, float);
_CRTIMP2 float fmaf(float, float, float);
_CRTIMP2 float fmaxf(float, float);
_CRTIMP2 float fminf(float, float);
_CRTIMP2 float hypotf(float, float);
_CRTIMP2 float hypot3f(float, float, float);
_CRTIMP2 int ilogbf(float);
_CRTIMP2 float lgammaf(float);
_CRTIMP2 long long llrintf(float);
_CRTIMP2 long long llroundf(float);
_CRTIMP2 float log1pf(float);
_CRTIMP2 float logbf(float);
_CRTIMP2 long lrintf(float);
_CRTIMP2 long lroundf(float);
_CRTIMP2 float nanf(const char *);
_CRTIMP2 float nearbyintf(float);
_CRTIMP2 float nextafterf(float, float);
_CRTIMP2 float nexttowardf(float, long double);
_CRTIMP2 float remainderf(float, float);
_CRTIMP2 float remquof(float, float, int *);
_CRTIMP2 float rintf(float);
_CRTIMP2 float roundf(float);
_CRTIMP2 float scalbnf(float, int);
_CRTIMP2 float scalblnf(float, long);
_CRTIMP2 float tgammaf(float);
_CRTIMP2 float truncf(float);
 #endif /* _HAS_C99 */

 #if _HAS_SPECIAL_MATH
_CRTIMP2 float assoc_laguerref(unsigned, unsigned, float);
_CRTIMP2 float assoc_legendref(unsigned, unsigned, float);
_CRTIMP2 float betaf(float, float);
_CRTIMP2 float comp_ellint_1f(float);
_CRTIMP2 float comp_ellint_2f(float);
_CRTIMP2 float comp_ellint_3f(float, float);
_CRTIMP2 float cyl_bessel_if(float, float);
_CRTIMP2 float cyl_bessel_jf(float, float);
_CRTIMP2 float cyl_bessel_kf(float, float);
_CRTIMP2 float cyl_neumannf(float, float);
_CRTIMP2 float ellint_1f(float, float);
_CRTIMP2 float ellint_2f(float, float);
_CRTIMP2 float ellint_3f(float, float, float);
_CRTIMP2 float expintf(float);
_CRTIMP2 float hermitef(unsigned, float);
_CRTIMP2 float laguerref(unsigned, float);
_CRTIMP2 float legendref(unsigned, float);
_CRTIMP2 float riemann_zetaf(float);
_CRTIMP2 float sph_besself(unsigned, float);
_CRTIMP2 float sph_legendref(unsigned, unsigned, float);
_CRTIMP2 float sph_neumannf(unsigned, float);

// #if _HAS_ADDED_FUNCTIONS
_CRTIMP2 float besseli0f(float);
_CRTIMP2 float besseli1f(float);
_CRTIMP2 float besselj0f(float);
_CRTIMP2 float besselj1f(float);
_CRTIMP2 float besselk0f(float);
_CRTIMP2 float besselk1f(float);
_CRTIMP2 float bessely0f(float);
_CRTIMP2 float bessely1f(float);

_CRTIMP2 float j0f(float);
_CRTIMP2 float j1f(float);
_CRTIMP2 float jnf(float);
_CRTIMP2 float y0f(float);
_CRTIMP2 float y1f(float);
_CRTIMP2 float ynf(float);
// #endif /* _HAS_ADDED_FUNCTIONS */

 #endif /* _HAS_SPECIAL_MATH */

		/* long double declarations */
_CRTIMP2 long double acosl(long double);
_CRTIMP2 long double asinl(long double);
_CRTIMP2 long double atanl(long double);
_CRTIMP2 long double atan2l(long double, long double);
_CRTIMP2 long double ceill(long double);
_CRTIMP2 long double expl(long double);
_CRTIMP2 long double fabsl(long double);
_CRTIMP2 long double floorl(long double);
_CRTIMP2 long double fmodl(long double, long double);
_CRTIMP2 long double frexpl(long double, int *);
_CRTIMP2 long double ldexpl(long double, int);
_CRTIMP2 long double modfl(long double, long double *);
_CRTIMP2 long double powl(long double, long double);
_CRTIMP2 long double sqrtl(long double);
_CRTIMP2 long double tanl(long double);
_CRTIMP2 long double tanhl(long double);

#if defined(__CODEGEARC__)
_CRTIMP2 long double pow10l(int);
#endif

 #if _HAS_C99
_CRTIMP2 long double acoshl(long double);
_CRTIMP2 long double asinhl(long double);
_CRTIMP2 long double atanhl(long double);
_CRTIMP2 long double cbrtl(long double);
_CRTIMP2 long double copysignl(long double, long double);
_CRTIMP2 long double erfl(long double);
_CRTIMP2 long double erfcl(long double);
_CRTIMP2 long double exp2l(long double);
_CRTIMP2 long double expm1l(long double);
_CRTIMP2 long double fdiml(long double, long double);
_CRTIMP2 long double fmal(long double, long double, long double);
_CRTIMP2 long double fmaxl(long double, long double);
_CRTIMP2 long double fminl(long double, long double);
_CRTIMP2 long double hypotl(long double, long double);
_CRTIMP2 long double hypot3l(long double, long double, long double);
_CRTIMP2 int ilogbl(long double);
_CRTIMP2 long double lgammal(long double);
_CRTIMP2 long long llrintl(long double);
_CRTIMP2 long long llroundl(long double);
_CRTIMP2 long double log1pl(long double);
_CRTIMP2 long double logbl(long double);
_CRTIMP2 long lrintl(long double);
_CRTIMP2 long lroundl(long double);
_CRTIMP2 long double nanl(const char *);
_CRTIMP2 long double nearbyintl(long double);
_CRTIMP2 long double nextafterl(long double, long double);
_CRTIMP2 long double nexttowardl(long double, long double);
_CRTIMP2 long double remainderl(long double, long double);
_CRTIMP2 long double remquol(long double, long double, int *);
_CRTIMP2 long double rintl(long double);
_CRTIMP2 long double roundl(long double);
_CRTIMP2 long double scalbnl(long double, int);
_CRTIMP2 long double scalblnl(long double, long);
_CRTIMP2 long double tgammal(long double);
_CRTIMP2 long double truncl(long double);
 #endif /* _HAS_C99 */

 #if _HAS_SPECIAL_MATH
_CRTIMP2 long double assoc_laguerrel(unsigned, unsigned, long double);
_CRTIMP2 long double assoc_legendrel(unsigned, unsigned, long double);
_CRTIMP2 long double betal(long double, long double);
_CRTIMP2 long double comp_ellint_1l(long double);
_CRTIMP2 long double comp_ellint_2l(long double);
_CRTIMP2 long double comp_ellint_3l(long double, long double);
_CRTIMP2 long double cyl_bessel_il(long double, long double);
_CRTIMP2 long double cyl_bessel_jl(long double, long double);
_CRTIMP2 long double cyl_bessel_kl(long double, long double);
_CRTIMP2 long double cyl_neumannl(long double, long double);
_CRTIMP2 long double ellint_1l(long double, long double);
_CRTIMP2 long double ellint_2l(long double, long double);
_CRTIMP2 long double ellint_3l(long double, long double, long double);
_CRTIMP2 long double expintl(long double);
_CRTIMP2 long double hermitel(unsigned, long double);
_CRTIMP2 long double laguerrel(unsigned, long double);
_CRTIMP2 long double legendrel(unsigned, long double);
_CRTIMP2 long double riemann_zetal(long double);
_CRTIMP2 long double sph_bessell(unsigned, long double);
_CRTIMP2 long double sph_legendrel(unsigned, unsigned, long double);
_CRTIMP2 long double sph_neumannl(unsigned, long double);

// #if _HAS_ADDED_FUNCTIONS
_CRTIMP2 long double besseli0l(long double);
_CRTIMP2 long double besseli1l(long double);
_CRTIMP2 long double besselj0l(long double);
_CRTIMP2 long double besselj1l(long double);
_CRTIMP2 long double besselk0l(long double);
_CRTIMP2 long double besselk1l(long double);
_CRTIMP2 long double bessely0l(long double);
_CRTIMP2 long double bessely1l(long double);

_CRTIMP2 long double j0l(long double);
_CRTIMP2 long double j1l(long double);
_CRTIMP2 long double jnl(long double);
_CRTIMP2 long double y0l(long double);
_CRTIMP2 long double y1l(long double);
_CRTIMP2 long double ynl(long double);
// #endif /* _HAS_ADDED_FUNCTIONS */

 #endif /* _HAS_SPECIAL_MATH */

 #if defined(__cplusplus)
inline double cos(double _Left)
	{	// return cosine
	return (_Sinx(_Left, 1, 0));
	}

inline double cosh(double _Left)
	{	// return hyperbolic cosine
	return (_Cosh(_Left, 1.0));
	}

inline double log(double _Left)
	{	// return natural logarithm
	return (_Log(_Left, 0));
	}

inline double log10(double _Left)
	{	// return base-10 logarithm
	return (_Log(_Left, 1));
	}

inline double sin(double _Left)
	{	// return sine
	return (_Sinx(_Left, 0, 0));
	}

inline double sinh(double _Left)
	{	// return hyperbolic sine
	return (_Sinh(_Left, 1.0));
	}

 #if _HAS_C99
inline double log2(double _Left)
	{	// return base-2 logarithm
	return (_Log(_Left, -1));
	}
 #endif /* _HAS_C99 */

 #endif /* defined(__cplusplus) */
_END_C_LIB_DECL

 #if defined(__cplusplus) && !defined(_NO_CPP_INLINES)
		// double INLINES, FOR C++
inline double abs(double _Left)	// OVERLOADS
	{	// return absolute value
	return (fabs(_Left));
	}

		// float INLINES, FOR C++
_C_LIB_DECL

inline float cosf(float _Left)
	{	// return cosine
	return (_FSinx(_Left, 1, 0));
	}

inline float coshf(float _Left)
	{	// return hyperbolic cosine
	return (_FCosh(_Left, 1.0F));
	}

inline float logf(float _Left)
	{	// return natural logarithm
	return (_FLog(_Left, 0));
	}

inline float log10f(float _Left)
	{	// return base-10 logarithm
	return (_FLog(_Left, 1));
	}

inline float sinf(float _Left)
	{	// return sine
	return (_FSinx(_Left, 0, 0));
	}

inline float sinhf(float _Left)
	{	// return hyperbolic sine
	return (_FSinh(_Left, 1.0F));
	}

 #if _HAS_C99
inline float log2f(float _Left)
	{	// return base-2 logarithm
	return (_FLog(_Left, -1));
	}
 #endif /* _HAS_C99 */

_END_C_LIB_DECL

inline float abs(float _Left)	// OVERLOADS
	{	// return absolute value
	return (fabsf(_Left));
	}

inline float acos(float _Left)
	{	// return arccosine
	return (acosf(_Left));
	}

inline float asin(float _Left)
	{	// return arcsine
	return (asinf(_Left));
	}

inline float atan(float _Left)
	{	// return arctangent
	return (atanf(_Left));
	}

inline float atan2(float _Left, float _Right)
	{	// return arctangent
	return (atan2f(_Left, _Right));
	}

inline float ceil(float _Left)
	{	// return ceiling
	return (ceilf(_Left));
	}

inline float cos(float _Left)
	{	// return cosine
	return (_FSinx(_Left, 1, 0));
	}

inline float cosh(float _Left)
	{	// return hyperbolic cosine
	return (_FCosh(_Left, 1.0F));
	}

inline float exp(float _Left)
	{	// return exponential
	return (expf(_Left));
	}

inline float fabs(float _Left)
	{	// return absolute value
	return (fabsf(_Left));
	}

inline float floor(float _Left)
	{	// return floor
	return (floorf(_Left));
	}

inline float fmod(float _Left, float _Right)
	{	// return modulus
	return (fmodf(_Left, _Right));
	}

inline float frexp(float _Left, int *_Right)
	{	// unpack exponent
	return (frexpf(_Left, _Right));
	}

inline float ldexp(float _Left, int _Right)
	{	// pack exponent
	return (ldexpf(_Left, _Right));
	}

inline float log(float _Left)
	{	// return natural logarithm
	return (_FLog(_Left, 0));
	}

inline float log10(float _Left)
	{	// return base-10 logarithm
	return (_FLog(_Left, 1));
	}

inline float modf(float _Left, float *_Right)
	{	// unpack fraction
	return (modff(_Left, _Right));
	}

inline float pow(float _Left, float _Right)
	{	// raise to power
	return (powf(_Left, _Right));
	}

inline float sin(float _Left)
	{	// return sine
	return (_FSinx(_Left, 0, 0));
	}

inline float sinh(float _Left)
	{	// return hyperbolic sine
	return (_FSinh(_Left, 1.0F));
	}

inline float sqrt(float _Left)
	{	// return square root
	return (sqrtf(_Left));
	}

inline float tan(float _Left)
	{	// return tangent
	return (tanf(_Left));
	}

inline float tanh(float _Left)
	{	// return hyperbolic tangent
	return (tanhf(_Left));
	}

 #if _HAS_C99
inline float acosh(float _Left)
	{	// return hyperbolic arccosine
	return (acoshf(_Left));
	}

inline float asinh(float _Left)
	{	// return hyperbolic arcsine
	return (asinhf(_Left));
	}

inline float atanh(float _Left)
	{	// return hyperbolic arctangent
	return (atanhf(_Left));
	}

inline float cbrt(float _Left)
	{	// return cube root
	return (cbrtf(_Left));
	}

inline float copysign(float _Left, float _Right)
	{	// return copysign
	return (copysignf(_Left, _Right));
	}

inline float erf(float _Left)
	{	// return erf
	return (erff(_Left));
	}

inline float erfc(float _Left)
	{	// return erfc
	return (erfcf(_Left));
	}

inline float exp2(float _Left)
	{	// return exp2
	return (exp2f(_Left));
	}

inline float expm1(float _Left)
	{	// return expml
	return (expm1f(_Left));
	}

inline float fdim(float _Left, float _Right)
	{	// return fdim
	return (fdimf(_Left, _Right));
	}

inline float fma(float _Left, float _Right, float _Addend)
	{	// return fma
	return (fmaf(_Left, _Right, _Addend));
	}

inline float fmax(float _Left, float _Right)
	{	// return fmax
	return (fmaxf(_Left, _Right));
	}

inline float fmin(float _Left, float _Right)
	{	// return fmin
	return (fminf(_Left, _Right));
	}

inline float hypot(float _Left, float _Right)
	{	// return hypot
	return (hypotf(_Left, _Right));
	}

inline float hypot3(float _Left, float _Mid, float _Right)
	{	// return hypot3
	return (hypot3f(_Left, _Mid, _Right));
	}

inline int ilogb(float _Left)
	{	// return ilogb
	return (ilogbf(_Left));
	}

inline float lgamma(float _Left)
	{	// return lgamma
	return (lgammaf(_Left));
	}

inline long long llrint(float _Left)
	{	// return llrint
	return (llrintf(_Left));
	}

inline long long llround(float _Left)
	{	// return llround
	return (llroundf(_Left));
	}

inline float log1p(float _Left)
	{	// return loglp
	return (log1pf(_Left));
	}

inline float log2(float _Left)
	{	// return log2
	return (_FLog(_Left, -1));
	}

inline float logb(float _Left)
	{	// return logb
	return (logbf(_Left));
	}

inline long lrint(float _Left)
	{	// return lrint
	return (lrintf(_Left));
	}

inline long lround(float _Left)
	{	// return lround
	return (lroundf(_Left));
	}

inline float nearbyint(float _Left)
	{	// return nearbyint
	return (nearbyintf(_Left));
	}

inline float nextafter(float _Left, float _Right)
	{	// return nextafter
	return (nextafterf(_Left, _Right));
	}

inline float nexttoward(float _Left, long double _Right)
	{	// return nexttoward
	return (nexttowardf(_Left, _Right));
	}

inline float remainder(float _Left, float _Right)
	{	// return remainder
	return (remainderf(_Left, _Right));
	}

inline float remquo(float _Left, float _Right, int *_Pval)
	{	// return remquo
	return (remquof(_Left, _Right, _Pval));
	}

inline float rint(float _Left)
	{	// return rint
	return (rintf(_Left));
	}

inline float round(float _Left)
	{	// return round
	return (roundf(_Left));
	}

inline float scalbn(float _Left, int _Right)
	{	// return scalbn
	return (scalbnf(_Left, _Right));
	}

inline float scalbln(float _Left, long _Right)
	{	// return scalbln
	return (scalblnf(_Left, _Right));
	}

inline float tgamma(float _Left)
	{	// return tgamma
	return (tgammaf(_Left));
	}

inline float trunc(float _Left)
	{	// return trunc
	return (truncf(_Left));
	}
 #endif /* _HAS_C99 */

 #if _HAS_SPECIAL_MATH
inline float assoc_laguerre(unsigned _Nv, unsigned _Mv,
	float _Xv)
	{	// return assoc_laguerre
	return (assoc_laguerref(_Nv, _Mv, _Xv));
	}

inline float assoc_legendre(unsigned _Nv, unsigned _Mv,
	float _Xv)
	{	// return assoc_legendre
	return (assoc_legendref(_Nv, _Mv, _Xv));
	}

inline float beta(float _Xv, float _Yv)
	{	// return beta
	return (betaf(_Xv, _Yv));
	}

inline float comp_ellint_1(float _Kv)
	{	// return comp_ellint_1
	return (comp_ellint_1f(_Kv));
	}

inline float comp_ellint_2(float _Kv)
	{	// return comp_ellint_2
	return (comp_ellint_2f(_Kv));
	}

inline float comp_ellint_3(float _Kv, float _Nu)
	{	// return comp_ellint_3
	return (comp_ellint_3f(_Kv, _Nu));
	}

inline float cyl_bessel_i(float _Nu, float _Xv)
	{	// return cyl_bessel_i
	return (cyl_bessel_if(_Nu, _Xv));
	}

inline float cyl_bessel_j(float _Nu, float _Xv)
	{	// return cyl_bessel_j
	return (cyl_bessel_jf(_Nu, _Xv));
	}

inline float cyl_bessel_k(float _Nu, float _Xv)
	{	// return cyl_bessel_k
	return (cyl_bessel_kf(_Nu, _Xv));
	}

inline float cyl_neumann(float _Nu, float _Xv)
	{	// return cyl_neumann
	return (cyl_neumannf(_Nu, _Xv));
	}

inline float ellint_1(float _Kv, float _Phi)
	{	// return ellint_1
	return (ellint_1f(_Kv, _Phi));
	}

inline float ellint_2(float _Kv, float _Phi)
	{	// return ellint_2
	return (ellint_2f(_Kv, _Phi));
	}

inline float ellint_3(float _Kv, float _Nu, float _Phi)
	{	// return ellint_3
	return (ellint_3f(_Kv, _Nu, _Phi));
	}

inline float expint(float _Xv)
	{	// return expint
	return (expintf(_Xv));
	}

inline float hermite(unsigned _Nv, float _Xv)
	{	// return hermite
	return (hermitef(_Nv, _Xv));
	}

inline float laguerre(unsigned _Nv, float _Xv)
	{	// return laguerre
	return (laguerref(_Nv, _Xv));
	}

inline float legendre(unsigned _Lv, float _Xv)
	{	// return legendre
	return (legendref(_Lv, _Xv));
	}

inline float riemann_zeta(float _Xv)
	{	// return riemann_zeta
	return (riemann_zetaf(_Xv));
	}

inline float sph_bessel(unsigned _Nv, float _Xv)
	{	// return sph_bessel
	return (sph_besself(_Nv, _Xv));
	}

inline float sph_legendre(unsigned _Lv, unsigned _Mv, float _Xv)
	{	// return sph_legendre
	return (sph_legendref(_Lv, _Mv, _Xv));
	}

inline float sph_neumann(unsigned _Nv, float _Xv)
	{	// return sph_neumann
	return (sph_neumannf(_Nv, _Xv));
	}

// #if _HAS_ADDED_FUNCTIONS
inline float besseli0(float _Xv)
	{	// return besseli0
	return (besseli0f(_Xv));
	}

inline float besseli1(float _Xv)
	{	// return besseli1
	return (besseli1f(_Xv));
	}

inline float besselj0(float _Xv)
	{	// return besselj0
	return (besselj0f(_Xv));
	}

inline float besselj1(float _Xv)
	{	// return besselj1
	return (besselj1f(_Xv));
	}

inline float besselk0(float _Xv)
	{	// return besselk0
	return (besselk0f(_Xv));
	}

inline float besselk1(float _Xv)
	{	// return besselk1
	return (besselk1f(_Xv));
	}

inline float bessely0(float _Xv)
	{	// return bessely0
	return (bessely0f(_Xv));
	}

inline float bessely1(float _Xv)
	{	// return bessely1
	return (bessely1f(_Xv));
	}
// #endif /* _HAS_ADDED_FUNCTIONS */

 #endif /* _HAS_SPECIAL_MATH */

		// long double INLINES, FOR C++
_C_LIB_DECL

inline long double cosl(long double _Left)
	{	// return cosine
	return (_LSinx(_Left, 1, 0));
	}

inline long double coshl(long double _Left)
	{	// return hyperbolic cosine
	return (_LCosh(_Left, 1.0L));
	}

inline long double logl(long double _Left)
	{	// return natural logarithm
	return (_LLog(_Left, 0));
	}

inline long double log10l(long double _Left)
	{	// return base-10 logarithm
	return (_LLog(_Left, 1));
	}

inline long double sinl(long double _Left)
	{	// return sine
	return (_LSinx(_Left, 0, 0));
	}

inline long double sinhl(long double _Left)
	{	// return hyperbolic sine
	return (_LSinh(_Left, 1.0L));
	}

 #if _HAS_C99
inline long double log2l(long double _Left)
	{	// return base-2 logarithm
	return (_LLog(_Left, -1));
	}
 #endif /* _HAS_C99 */

_END_C_LIB_DECL

inline long double abs(long double _Left)	// OVERLOADS
	{	// return absolute value
	return (fabsl(_Left));
	}

inline long double acos(long double _Left)
	{	// return arccosine
	return (acosl(_Left));
	}

inline long double asin(long double _Left)
	{	// return arcsine
	return (asinl(_Left));
	}

inline long double atan(long double _Left)
	{	// return arctangent
	return (atanl(_Left));
	}

inline long double atan2(long double _Left, long double _Right)
	{	// return arctangent
	return (atan2l(_Left, _Right));
	}

inline long double ceil(long double _Left)
	{	// return ceiling
	return (ceill(_Left));
	}

inline long double cos(long double _Left)
	{	// return cosine
	return (_LSinx(_Left, 1, 0));
	}

inline long double cosh(long double _Left)
	{	// return hyperbolic cosine
	return (_LCosh(_Left, 1.0L));
	}

inline long double exp(long double _Left)
	{	// return exponential
	return (expl(_Left));
	}

inline long double fabs(long double _Left)
	{	// return absolute value
	return (fabsl(_Left));
	}

inline long double floor(long double _Left)
	{	// return floor
	return (floorl(_Left));
	}

inline long double fmod(long double _Left, long double _Right)
	{	// return modulus
	return (fmodl(_Left, _Right));
	}

inline long double frexp(long double _Left, int *_Right)
	{	// unpack exponent
	return (frexpl(_Left, _Right));
	}

inline long double ldexp(long double _Left, int _Right)
	{	// pack exponent
	return (ldexpl(_Left, _Right));
	}

inline long double log(long double _Left)
	{	// return natural logarithm
	return (_LLog(_Left, 0));
	}

inline long double log10(long double _Left)
	{	// return base-10 logarithm
	return (_LLog(_Left, 1));
	}

inline long double modf(long double _Left, long double *_Right)
	{	// unpack fraction
	return (modfl(_Left, _Right));
	}

inline long double pow(long double _Left, long double _Right)
	{	// raise to power
	return (powl(_Left, _Right));
	}

inline long double sin(long double _Left)
	{	// return sine
	return (_LSinx(_Left, 0, 0));
	}

inline long double sinh(long double _Left)
	{	// return hyperbolic sine
	return (_LSinh(_Left, 1.0L));
	}

inline long double sqrt(long double _Left)
	{	// return square root
	return (sqrtl(_Left));
	}

inline long double tan(long double _Left)
	{	// return tangent
	return (tanl(_Left));
	}

inline long double tanh(long double _Left)
	{	// return hyperbolic tangent
	return (tanhl(_Left));
	}

 #if _HAS_C99
inline long double acosh(long double _Left)
	{	// return acosh
	return (acoshl(_Left));
	}

inline long double asinh(long double _Left)
	{	// return asinh
	return (asinhl(_Left));
	}

inline long double atanh(long double _Left)
	{	// return atanh
	return (atanhl(_Left));
	}

inline long double cbrt(long double _Left)
	{	// return cbrt
	return (cbrtl(_Left));
	}

inline long double copysign(long double _Left, long double _Right)
	{	// return copysign
	return (copysignl(_Left, _Right));
	}

inline long double erf(long double _Left)
	{	// return erf
	return (erfl(_Left));
	}

inline long double erfc(long double _Left)
	{	// return erfc
	return (erfcl(_Left));
	}

inline long double exp2(long double _Left)
	{	// return exp2
	return (exp2l(_Left));
	}

inline long double expm1(long double _Left)
	{	// return expml
	return (expm1l(_Left));
	}

inline long double fdim(long double _Left, long double _Right)
	{	// return fdim
	return (fdiml(_Left, _Right));
	}

inline long double fma(long double _Left, long double _Right,
	long double _Addend)
	{	// return fma
	return (fmal(_Left, _Right, _Addend));
	}

inline long double fmax(long double _Left, long double _Right)
	{	// return fmax
	return (fmaxl(_Left, _Right));
	}

inline long double fmin(long double _Left, long double _Right)
	{	// return fmin
	return (fminl(_Left, _Right));
	}

inline long double hypot(long double _Left, long double _Right)
	{	// return hypot
	return (hypotl(_Left, _Right));
	}

inline long double hypot3(long double _Left, long double _Mid,
	long double _Right)
	{	// return hypot3
	return (hypot3l(_Left, _Mid, _Right));
	}

inline int ilogb(long double _Left)
	{	// return ilogb
	return (ilogbl(_Left));
	}

inline long double lgamma(long double _Left)
	{	// return lgamma
	return (lgammal(_Left));
	}

inline long long llrint(long double _Left)
	{	// return llrint
	return (llrintl(_Left));
	}

inline long long llround(long double _Left)
	{	// return llround
	return (llroundl(_Left));
	}

inline long double log1p(long double _Left)
	{	// return loglp
	return (log1pl(_Left));
	}

inline long double log2(long double _Left)
	{	// return log2
	return (_LLog(_Left, -1));
	}

inline long double logb(long double _Left)
	{	// return logb
	return (logbl(_Left));
	}

inline long lrint(long double _Left)
	{	// return lrint
	return (lrintl(_Left));
	}

inline long lround(long double _Left)
	{	// return lround
	return (lroundl(_Left));
	}

inline long double nearbyint(long double _Left)
	{	// return nearbyint
	return (nearbyintl(_Left));
	}

inline long double nextafter(long double _Left, long double _Right)
	{	// return nextafter
	return (nextafterl(_Left, _Right));
	}

inline long double nexttoward(long double _Left, long double _Right)
	{	// return nexttoward
	return (nexttowardl(_Left, _Right));
	}

inline long double remainder(long double _Left, long double _Right)
	{	// return remainder
	return (remainderl(_Left, _Right));
	}

inline long double remquo(long double _Left, long double _Right,
	int *_Pval)
	{	// return remquo
	return (remquol(_Left, _Right, _Pval));
	}

inline long double rint(long double _Left)
	{	// return rint
	return (rintl(_Left));
	}

inline long double round(long double _Left)
	{	// return round
	return (roundl(_Left));
	}

inline long double scalbn(long double _Left, int _Right)
	{	// return scalbn
	return (scalbnl(_Left, _Right));
	}

inline long double scalbln(long double _Left, long _Right)
	{	// return scalbln
	return (scalblnl(_Left, _Right));
	}

inline long double tgamma(long double _Left)
	{	// return tgamma
	return (tgammal(_Left));
	}

inline long double trunc(long double _Left)
	{	// return trunc
	return (truncl(_Left));
	}
 #endif /* _HAS_C99 */

 #if _HAS_SPECIAL_MATH
inline long double assoc_laguerre(unsigned _Nv, unsigned _Mv,
	long double _Xv)
	{	// return assoc_laguerre
	return (assoc_laguerrel(_Nv, _Mv, _Xv));
	}

inline long double assoc_legendre(unsigned _Nv, unsigned _Mv,
	long double _Xv)
	{	// return assoc_legendre
	return (assoc_legendrel(_Nv, _Mv, _Xv));
	}

inline long double beta(long double _Xv, long double _Yv)
	{	// return beta
	return (betal(_Xv, _Yv));
	}

inline long double comp_ellint_1(long double _Kv)
	{	// return comp_ellint_1
	return (comp_ellint_1l(_Kv));
	}

inline long double comp_ellint_2(long double _Kv)
	{	// return comp_ellint_2
	return (comp_ellint_2l(_Kv));
	}

inline long double comp_ellint_3(long double _Kv, long double _Nu)
	{	// return comp_ellint_3
	return (comp_ellint_3l(_Kv, _Nu));
	}

inline long double cyl_bessel_i(long double _Nu, long double _Xv)
	{	// return cyl_bessel_i
	return (cyl_bessel_il(_Nu, _Xv));
	}

inline long double cyl_bessel_j(long double _Nu, long double _Xv)
	{	// return cyl_bessel_j
	return (cyl_bessel_jl(_Nu, _Xv));
	}

inline long double cyl_bessel_k(long double _Nu, long double _Xv)
	{	// return cyl_bessel_k
	return (cyl_bessel_kl(_Nu, _Xv));
	}

inline long double cyl_neumann(long double _Nu, long double _Xv)
	{	// return cyl_neumann
	return (cyl_neumannl(_Nu, _Xv));
	}

inline long double ellint_1(long double _Kv, long double _Phi)
	{	// return ellint_1
	return (ellint_1l(_Kv, _Phi));
	}

inline long double ellint_2(long double _Kv, long double _Phi)
	{	// return ellint_2
	return (ellint_2l(_Kv, _Phi));
	}

inline long double ellint_3(long double _Kv, long double _Nu,
	long double _Phi)
	{	// return ellint_3
	return (ellint_3l(_Kv, _Nu, _Phi));
	}

inline long double expint(long double _Xv)
	{	// return expint
	return (expintl(_Xv));
	}

inline long double hermite(unsigned _Nv, long double _Xv)
	{	// return hermite
	return (hermitel(_Nv, _Xv));
	}

inline long double laguerre(unsigned _Nv, long double _Xv)
	{	// return laguerre
	return (laguerrel(_Nv, _Xv));
	}

inline long double legendre(unsigned _Lv, long double _Xv)
	{	// return legendre
	return (legendrel(_Lv, _Xv));
	}

inline long double riemann_zeta(long double _Xv)
	{	// return riemann_zeta
	return (riemann_zetal(_Xv));
	}

inline long double sph_bessel(unsigned _Nv, long double _Xv)
	{	// return sph_bessel
	return (sph_bessell(_Nv, _Xv));
	}

inline long double sph_legendre(unsigned _Lv, unsigned _Mv,
	long double _Xv)
	{	// return sph_legendre
	return (sph_legendrel(_Lv, _Mv, _Xv));
	}

inline long double sph_neumann(unsigned _Nv, long double _Xv)
	{	// return sph_neumann
	return (sph_neumannl(_Nv, _Xv));
	}

// #if _HAS_ADDED_FUNCTIONS
inline long double besseli0(long double _Xv)
	{	// return besseli0
	return (besseli0l(_Xv));
	}

inline long double besseli1(long double _Xv)
	{	// return besseli1
	return (besseli1l(_Xv));
	}

inline long double besselj0(long double _Xv)
	{	// return besselj0
	return (besselj0l(_Xv));
	}

inline long double besselj1(long double _Xv)
	{	// return besselj1
	return (besselj1l(_Xv));
	}

inline long double besselk0(long double _Xv)
	{	// return besselk0
	return (besselk0l(_Xv));
	}

inline long double besselk1(long double _Xv)
	{	// return besselk1
	return (besselk1l(_Xv));
	}

inline long double bessely0(long double _Xv)
	{	// return bessely0
	return (bessely0l(_Xv));
	}

inline long double bessely1(long double _Xv)
	{	// return bessely1
	return (bessely1l(_Xv));
	}
// #endif /* _HAS_ADDED_FUNCTIONS */

 #endif /* _HAS_SPECIAL_MATH */

 #else /* defined(__cplusplus) && !defined(_NO_CPP_INLINES) */
_C_LIB_DECL
		/* double MACRO OVERRIDES, FOR C */
double cos(double);
double cosh(double);
double log(double);
double log10(double);
double sin(double);
double sinh(double);

 #define cos(x)		_Sinx(x, 1, 0)
 #define cosh(x)	_Cosh(x, 1.0)
 #define log(x)		_Log(x, 0)
 #define log10(x)	_Log(x, 1)
 #define sin(x)		_Sinx(x, 0, 0)
 #define sinh(x)	_Sinh(x, 1.0)

 #if _HAS_C99
double log2(double);

 #define log2(x)	_Log(x, -1)
 #endif /* _HAS_C99 */

		/* float MACRO OVERRIDES, FOR C */
float cosf(float);
float coshf(float);
float logf(float);
float log10f(float);
float sinf(float);
float sinhf(float);

 #define cosf(x)	_FSinx(x, 1, 0)
 #define coshf(x)	_FCosh(x, 1.0F)
 #define logf(x)	_FLog(x, 0)
 #define log10f(x)	_FLog(x, 1)
 #define sinf(x)	_FSinx(x, 0, 0)
 #define sinhf(x)	_FSinh(x, 1.0F)

 #if _HAS_C99
float log2f(float);

 #define log2f(x)	_FLog(x, -1)
 #endif /* _HAS_C99 */

		/* long double MACRO OVERRIDES, FOR C */
long double cosl(long double);
long double coshl(long double);
long double logl(long double);
long double log10l(long double);
long double sinl(long double);
long double sinhl(long double);

 #define cosl(x)	_LSinx(x, 1, 0)
 #define coshl(x)	_LCosh(x, 1.0L)
 #define logl(x)	_LLog(x, 0)
 #define log10l(x)	_LLog(x, 1)
 #define sinl(x)	_LSinx(x, 0, 0)
 #define sinhl(x)	_LSinh(x, 1.0L)

 #if _HAS_C99
long double log2l(long double);

 #define log2l(x)	_LLog(x, -1)
 #endif /* _HAS_C99 */

_END_C_LIB_DECL
 #endif /* defined(__cplusplus) && !defined(_NO_CPP_INLINES) */
_C_STD_END

#endif /* _MATH */

 #if defined(_STD_USING)

  #if !defined(_NO_CPP_INLINES)
using _CSTD abs;
  #endif /* !defined(_NO_CPP_INLINES) */

using _CSTD acos; using _CSTD asin;
using _CSTD atan; using _CSTD atan2; using _CSTD ceil;
using _CSTD cos; using _CSTD cosh; using _CSTD exp;
using _CSTD fabs; using _CSTD floor; using _CSTD fmod;
using _CSTD frexp; using _CSTD ldexp; using _CSTD log;
using _CSTD log10; using _CSTD modf; using _CSTD pow;
using _CSTD sin; using _CSTD sinh; using _CSTD sqrt;
using _CSTD tan; using _CSTD tanh;

#if defined(__CODEGEARC__)
using _CSTD pow10;
using _CSTD pow10l;
#endif

using _CSTD acosf; using _CSTD asinf;
using _CSTD atanf; using _CSTD atan2f; using _CSTD ceilf;
using _CSTD cosf; using _CSTD coshf; using _CSTD expf;
using _CSTD fabsf; using _CSTD floorf; using _CSTD fmodf;
using _CSTD frexpf; using _CSTD ldexpf; using _CSTD logf;
using _CSTD log10f; using _CSTD modff; using _CSTD powf;
using _CSTD sinf; using _CSTD sinhf; using _CSTD sqrtf;
using _CSTD tanf; using _CSTD tanhf;

using _CSTD acosl; using _CSTD asinl;
using _CSTD atanl; using _CSTD atan2l; using _CSTD ceill;
using _CSTD cosl; using _CSTD coshl; using _CSTD expl;
using _CSTD fabsl; using _CSTD floorl; using _CSTD fmodl;
using _CSTD frexpl; using _CSTD ldexpl; using _CSTD logl;
using _CSTD log10l; using _CSTD modfl; using _CSTD powl;
using _CSTD sinl; using _CSTD sinhl; using _CSTD sqrtl;
using _CSTD tanl; using _CSTD tanhl;

 #if _HAS_C99
using _CSTD float_t; using _CSTD double_t;

using _CSTD acosh; using _CSTD asinh; using _CSTD atanh;
using _CSTD cbrt; using _CSTD erf; using _CSTD erfc;
using _CSTD expm1; using _CSTD exp2; using _CSTD hypot;
using _CSTD hypot3; using _CSTD ilogb; using _CSTD lgamma;
using _CSTD log1p; using _CSTD log2; using _CSTD logb;
using _CSTD llrint; using _CSTD lrint; using _CSTD nearbyint;
using _CSTD rint; using _CSTD llround; using _CSTD lround;
using _CSTD fdim; using _CSTD fma; using _CSTD fmax; using _CSTD fmin;
using _CSTD round; using _CSTD trunc;
using _CSTD remainder; using _CSTD remquo;
using _CSTD copysign; using _CSTD nan; using _CSTD nextafter;
using _CSTD scalbn; using _CSTD scalbln;
using _CSTD nexttoward; using _CSTD tgamma;

using _CSTD acoshf; using _CSTD asinhf; using _CSTD atanhf;
using _CSTD cbrtf; using _CSTD erff; using _CSTD erfcf;
using _CSTD expm1f; using _CSTD exp2f; using _CSTD hypotf;
using _CSTD hypot3f; using _CSTD ilogbf; using _CSTD lgammaf;
using _CSTD log1pf; using _CSTD log2f; using _CSTD logbf;
using _CSTD llrintf; using _CSTD lrintf; using _CSTD nearbyintf;
using _CSTD rintf; using _CSTD llroundf; using _CSTD lroundf;
using _CSTD fdimf; using _CSTD fmaf; using _CSTD fmaxf; using _CSTD fminf;
using _CSTD roundf; using _CSTD truncf;
using _CSTD remainderf; using _CSTD remquof;
using _CSTD copysignf; using _CSTD nanf;
using _CSTD nextafterf; using _CSTD scalbnf; using _CSTD scalblnf;
using _CSTD nexttowardf; using _CSTD tgammaf;

using _CSTD acoshl; using _CSTD asinhl; using _CSTD atanhl;
using _CSTD cbrtl; using _CSTD erfl; using _CSTD erfcl;
using _CSTD expm1l; using _CSTD exp2l; using _CSTD hypotl;
using _CSTD hypot3l; using _CSTD ilogbl; using _CSTD lgammal;
using _CSTD log1pl; using _CSTD log2l; using _CSTD logbl;
using _CSTD llrintl; using _CSTD lrintl; using _CSTD nearbyintl;
using _CSTD rintl; using _CSTD llroundl; using _CSTD lroundl;
using _CSTD fdiml; using _CSTD fmal; using _CSTD fmaxl; using _CSTD fminl;
using _CSTD roundl; using _CSTD truncl;
using _CSTD remainderl; using _CSTD remquol;
using _CSTD copysignl; using _CSTD nanl;
using _CSTD nextafterl; using _CSTD scalbnl; using _CSTD scalblnl;
using _CSTD nexttowardl; using _CSTD tgammal;

using _CSTD fpclassify; using _CSTD signbit;
using _CSTD isfinite; using _CSTD isinf;
using _CSTD isnan; using _CSTD isnormal;
using _CSTD isgreater; using _CSTD isgreaterequal;
using _CSTD isless; using _CSTD islessequal;
using _CSTD islessgreater; using _CSTD isunordered;
 #endif /* _HAS_C99 */

 #if _HAS_SPECIAL_MATH
using _CSTD assoc_laguerre; using _CSTD assoc_legendre; using _CSTD beta;
using _CSTD comp_ellint_1; using _CSTD comp_ellint_2;
using _CSTD comp_ellint_3; using _CSTD cyl_bessel_i;
using _CSTD cyl_bessel_j; using _CSTD cyl_bessel_k;
using _CSTD cyl_neumann; using _CSTD ellint_1; using _CSTD ellint_2;
using _CSTD ellint_3; using _CSTD expint; using _CSTD hermite;
using _CSTD laguerre; using _CSTD legendre; using _CSTD riemann_zeta;
using _CSTD sph_bessel; using _CSTD sph_legendre; using _CSTD sph_neumann;

using _CSTD assoc_laguerref; using _CSTD assoc_legendref; using _CSTD betaf;
using _CSTD comp_ellint_1f; using _CSTD comp_ellint_2f;
using _CSTD comp_ellint_3f; using _CSTD cyl_bessel_if;
using _CSTD cyl_bessel_jf; using _CSTD cyl_bessel_kf;
using _CSTD cyl_neumannf; using _CSTD ellint_1f; using _CSTD ellint_2f;
using _CSTD ellint_3f; using _CSTD expintf; using _CSTD hermitef;
using _CSTD laguerref; using _CSTD legendref; using _CSTD riemann_zetaf;
using _CSTD sph_besself; using _CSTD sph_legendref; using _CSTD sph_neumannf;

using _CSTD assoc_laguerrel; using _CSTD assoc_legendrel; using _CSTD betal;
using _CSTD comp_ellint_1l; using _CSTD comp_ellint_2l;
using _CSTD comp_ellint_3l; using _CSTD cyl_bessel_il;
using _CSTD cyl_bessel_jl; using _CSTD cyl_bessel_kl;
using _CSTD cyl_neumannl; using _CSTD ellint_1l; using _CSTD ellint_2l;
using _CSTD ellint_3l; using _CSTD expintl; using _CSTD hermitel;
using _CSTD laguerrel; using _CSTD legendrel; using _CSTD riemann_zetal;
using _CSTD sph_bessell; using _CSTD sph_legendrel; using _CSTD sph_neumannl;

// #if _HAS_ADDED_FUNCTIONS
using _CSTD besseli0; using _CSTD besseli1;
using _CSTD besselj0; using _CSTD besselj1;
using _CSTD besselk0; using _CSTD besselk1;
using _CSTD bessely0; using _CSTD bessely1;
using _CSTD j0; using _CSTD j1; using _CSTD jn;
using _CSTD y0; using _CSTD y1; using _CSTD yn;

using _CSTD besseli0f; using _CSTD besseli1f;
using _CSTD besselj0f; using _CSTD besselj1f;
using _CSTD besselk0f; using _CSTD besselk1f;
using _CSTD bessely0f; using _CSTD bessely1f;
using _CSTD j0f; using _CSTD j1f; using _CSTD jnf;
using _CSTD y0f; using _CSTD y1f; using _CSTD ynf;

using _CSTD besseli0l; using _CSTD besseli1l;
using _CSTD besselj0l; using _CSTD besselj1l;
using _CSTD besselk0l; using _CSTD besselk1l;
using _CSTD bessely0l; using _CSTD bessely1l;
using _CSTD j0l; using _CSTD j1l; using _CSTD jnl;
using _CSTD y0l; using _CSTD y1l; using _CSTD ynl;
// #endif /* _HAS_ADDED_FUNCTIONS */

 #endif /* _HAS_SPECIAL_MATH */

 #endif /* defined(_STD_USING) */

/*
 * Copyright (c) by P.J. Plauger. All rights reserved.
 * Consult your license regarding permissions and restrictions.
 * V8.05/17:1422 */

#endif /* !defined(__clang__) */
