/*  float.h

    Defines implementation specific macros for dealing with
    floating point.

*/

/*
 *      C/C++ Run Time Library - Version 29.0
 *
 *      Copyright (c) 1987, 2023 by Embarcadero Technologies, Inc.
 *      All Rights Reserved.
 *
 */

/* $Revision: 37786 $ */

#ifndef __FLOAT_H
#define __FLOAT_H

#include <_stddef.h>

#ifdef __cplusplus
namespace std {
#endif /* __cplusplus */


#if !defined(RC_INVOKED)

#if defined(__STDC__)
#pragma warn -nak
#endif

#endif  /* !RC_INVOKED */

#if defined(__CODEGEARC__) /* from Dinkware */

#ifdef _FEVAL
  #define FLT_EVAL_METHOD	_FEVAL

 #else /* _FEVAL */
  #define FLT_EVAL_METHOD	-1	/* indeterminable */
 #endif /* _FEVAL */

#if !defined(_DLONG)
#if defined(_WIN64)
  #define DECIMAL_DIG	17	/* 64-bit long double */
 #else
  #define DECIMAL_DIG	21	/* 80-bit long double */
 #endif /* _WIN64 */
#endif

#endif


#define FLT_RADIX           2
#define FLT_ROUNDS          1
#define FLT_GUARD           1
#define FLT_NORMALIZE       1

#define DBL_DIG             15
#define FLT_DIG             6
#if !defined(_WIN64)
#define LDBL_DIG            18
#else
#define LDBL_DIG            DBL_DIG
#endif

#define DBL_MANT_DIG        53
#define FLT_MANT_DIG        24
#if !defined(_WIN64)
#define LDBL_MANT_DIG       64
#else
#define LDBL_MANT_DIG       DBL_MANT_DIG
#endif

#define DBL_EPSILON         2.2204460492503131E-16
#define FLT_EPSILON         1.19209290E-07F
#if !defined(_WIN64)
#define LDBL_EPSILON        1.084202172485504434e-019L
#else
#define LDBL_EPSILON        DBL_EPSILON
#endif

/* smallest positive IEEE normal numbers */

#ifdef __cplusplus
#if defined(__clang__)
#define FLT_MIN             __FLT_MIN__
#define DBL_MIN             __DBL_MIN__
#define LDBL_MIN            __LDBL_MIN__
#define FLT_MAX             __FLT_MAX__
#define DBL_MAX             __DBL_MAX__
#define LDBL_MAX            __LDBL_MAX__
#else
#define FLT_MIN             1.17549435E-38F
#define DBL_MIN             2.2250738585072014E-308
#define LDBL_MIN            std::_tiny_ldble
#define FLT_MAX             std::_max_flt
#define DBL_MAX             std::_max_dble
#define LDBL_MAX            std::_max_ldble
#endif
#else /* __cplusplus */
#if defined(__clang__)
#define FLT_MIN             __FLT_MIN__
#define DBL_MIN             __DBL_MIN__
#define LDBL_MIN            __LDBL_MIN__
#define FLT_MAX             __FLT_MAX__
#define DBL_MAX             __DBL_MAX__
#define LDBL_MAX            __LDBL_MAX__
#else
#define FLT_MIN             1.17549435E-38F
#define DBL_MIN             2.2250738585072014E-308
#define LDBL_MIN            _tiny_ldble
#define FLT_MAX             _max_flt
#define DBL_MAX             _max_dble
#define LDBL_MAX            _max_ldble
#endif
#endif /* __cplusplus */

#define DBL_MAX_EXP         +1024
#define FLT_MAX_EXP         +128
#if !defined(_WIN64)
#define LDBL_MAX_EXP        +16384
#else
#define LDBL_MAX_EXP        DBL_MAX_EXP
#endif

#define DBL_MAX_10_EXP      +308
#define FLT_MAX_10_EXP      +38
#if !defined(_WIN64)
#define LDBL_MAX_10_EXP     +4932
#else
#define LDBL_MAX_10_EXP     DBL_MAX_10_EXP
#endif

#define DBL_MIN_10_EXP      -307
#define FLT_MIN_10_EXP      -37
#if !defined(_WIN64)
#define LDBL_MIN_10_EXP     -4931
#else
#define LDBL_MIN_10_EXP     DBL_MIN_10_EXP
#endif

#define DBL_MIN_EXP         -1021
#define FLT_MIN_EXP         -125
#if !defined(_WIN64)
#define LDBL_MIN_EXP        -16381
#else
#define LDBL_MIN_EXP        DBL_MIN_EXP
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern float        _RTLENTRY _EXPDATA _max_flt;
extern double       _RTLENTRY _EXPDATA _max_dble;
#if !defined(_WIN64)
extern long double  _RTLENTRY _EXPDATA _max_ldble;
extern long double  _RTLENTRY _EXPDATA _tiny_ldble;
#endif

unsigned int _RTLENTRY            _clear87(void);
unsigned int _RTLENTRY            _control87(unsigned int __newcw, unsigned int __mask);
void         _RTLENTRY            _fpreset(void);
unsigned int _RTLENTRY            _status87(void);

/* Microsoft C compatible IEEE functions */

double       _RTLENTRY _EXPFUNC  _chgsign(double __d);
double       _RTLENTRY _EXPFUNC  _copysign(double __da, double __db);
int          _RTLENTRY _EXPFUNC  _finite(double __d);
int          _RTLENTRY _EXPFUNC  _fpclass(double __d);
int          _RTLENTRY _EXPFUNC  _isinf(double __d);
int          _RTLENTRY _EXPFUNC  _isnan(double __d);
double       _RTLENTRY _EXPFUNC  _logb(double __d);
double       _RTLENTRY _EXPFUNC  _scalb(double __d, long __exp);
double       _RTLENTRY _EXPFUNC  _nextafter(double __da, double __db);

long double  _RTLENTRY _EXPFUNC  _chgsignl(long double __ld);
long double  _RTLENTRY _EXPFUNC  _copysignl(long double __lda, long double __ldb);
int          _RTLENTRY _EXPFUNC  _finitel(long double __ld);
int          _RTLENTRY _EXPFUNC  _fpclassl(long double __ld);
int          _RTLENTRY _EXPFUNC  _isnanl(long double __ld);
long double  _RTLENTRY _EXPFUNC  _logbl(long double __ld);
long double  _RTLENTRY _EXPFUNC  _scalbl(long double __ld, long __exp);
long double  _RTLENTRY _EXPFUNC  _nextafterl(long double __lda, long double __ldb);

#if !defined(_WIN64)
#define      _controlfp(__a, __b) _control87((__a), ((__b)& (~EM_DENORMAL)))
#define      _statusfp            _status87
#define      _clearfp             _clear87
#else
unsigned int _RTLENTRY _EXPFUNC _clearfp(void);
unsigned int _RTLENTRY _EXPFUNC _controlfp(unsigned int __new, unsigned int __mask);
unsigned int _RTLENTRY _EXPFUNC _statusfp(void);
#endif
  
/* Return values for _fpclass() and _fpclassl() */

#if !defined(_WIN64)
#define _FPCLASS_UNSUP  0x0000  /* Unsupported IEEE format      */
#endif
#define _FPCLASS_SNAN   0x0001  /* Signaling NaN                */
#define _FPCLASS_QNAN   0x0002  /* Quiet NaN                    */
#define _FPCLASS_NINF   0x0004  /* Negative Infinity            */
#define _FPCLASS_NN     0x0008  /* Negative Normal              */
#define _FPCLASS_ND     0x0010  /* Negative Denormal            */
#define _FPCLASS_NZ     0x0020  /* Negative Zero (-0.0)         */
#define _FPCLASS_PZ     0x0040  /* Positive Zero (+0.0)         */
#define _FPCLASS_PD     0x0080  /* Positive Denormal            */
#define _FPCLASS_PN     0x0100  /* Positive Normal              */
#define _FPCLASS_PINF   0x0200  /* Positive Infinity            */


#ifdef __cplusplus
} // "C"
#endif

#if !defined(__STDC__)

/* 387 Status Word format   */

#define SW_INVALID      0x0001  /* Invalid operation            */
#define SW_DENORMAL     0x0002  /* Denormalized operand         */
#define SW_ZERODIVIDE   0x0004  /* Zero divide                  */
#define SW_OVERFLOW     0x0008  /* Overflow                     */
#define SW_UNDERFLOW    0x0010  /* Underflow                    */
#define SW_INEXACT      0x0020  /* Precision (Inexact result)   */
#define SW_STACKFAULT   0x0040  /* Stack fault                  */

/* 387 Control Word format */

#define MCW_EM              0x003f  /* interrupt Exception Masks*/
#define     EM_INVALID      0x0001  /*   invalid                */
#define     EM_DENORMAL     0x0002  /*   denormal               */
#define     EM_ZERODIVIDE   0x0004  /*   zero divide            */
#define     EM_OVERFLOW     0x0008  /*   overflow               */
#define     EM_UNDERFLOW    0x0010  /*   underflow              */
#define     EM_INEXACT      0x0020  /*   inexact (precision)    */

#define MCW_IC              0x1000  /* Infinity Control */
#define     IC_AFFINE       0x1000  /*   affine         */
#define     IC_PROJECTIVE   0x0000  /*   projective     */

#define MCW_RC          0x0c00  /* Rounding Control     */
#define     RC_CHOP     0x0c00  /*   chop               */
#define     RC_UP       0x0800  /*   up                 */
#define     RC_DOWN     0x0400  /*   down               */
#define     RC_NEAR     0x0000  /*   near               */

#define MCW_PC          0x0300  /* Precision Control    */
#define     PC_24       0x0000  /*    24 bits           */
#define     PC_53       0x0200  /*    53 bits           */
#define     PC_64       0x0300  /*    64 bits           */

#ifdef __cplusplus
} // std
#endif /* __cplusplus */

/* 387 Initial Control Word */
/* use affine infinity, mask underflow and precision exceptions */

#define CW_DEFAULT  _default87
extern unsigned int _RTLENTRY _EXPDATA _default87;

#ifdef __cplusplus
namespace std {
#endif /* __cplusplus */

/*
    SIGFPE signal error types (for integer & float exceptions).
*/
#define FPE_INTOVFLOW       126 /* 80x86 Interrupt on overflow  */
#define FPE_INTDIV0         127 /* 80x86 Integer divide by zero */

#define FPE_INVALID         129 /* 80x87 invalid operation      */
#define FPE_ZERODIVIDE      131 /* 80x87 divide by zero         */
#define FPE_OVERFLOW        132 /* 80x87 arithmetic overflow    */
#define FPE_UNDERFLOW       133 /* 80x87 arithmetic underflow   */
#define FPE_INEXACT         134 /* 80x87 precision loss         */
#define FPE_STACKFAULT      135 /* 80x87 stack overflow         */
#define FPE_EXPLICITGEN     140 /* When SIGFPE is raise()'d     */

/*
            SIGSEGV signal error types.
*/
#define SEGV_BOUND          10  /* A BOUND violation (SIGSEGV)  */
#define SEGV_EXPLICITGEN    11  /* When SIGSEGV is raise()'d    */
#define SEGV_ACCESS         12  /* Access violation */
#define SEGV_STACK          13  /* Unable to grow stack */

/*
            SIGILL signal error types.
*/
#define ILL_EXECUTION       20  /* Illegal operation exception  */
#define ILL_EXPLICITGEN     21  /* When SIGILL is raise()'d     */
#define ILL_PRIVILEGED      22  /* Privileged instruction */
#define ILL_BREAKPOINT      23  /* Breakpoint exception */
#define ILL_SINGLE_STEP     24  /* Singlestep exception */

#endif  /* !__STDC__ */


#if !defined(RC_INVOKED)

#if defined(__STDC__)
#pragma warn .nak
#endif

#endif  /* !RC_INVOKED */

#ifdef __cplusplus
} // std
#endif /* __cplusplus */

#endif  /* __FLOAT_H */

#if defined(__cplusplus) && !defined(__XUSING_CNAME__) && !defined(__FLOAT_H_USING_LIST)
#define __FLOAT_H_USING_LIST
     using std::_chgsign;
     using std::_chgsignl;
     using std::_clear87;
     using std::_control87;
     using std::_copysign;
     using std::_copysignl;
     using std::_finite;
     using std::_finitel;
     using std::_fpclass;
     using std::_fpclassl;
     using std::_fpreset;
     using std::_isnan;
     using std::_isnanl;
     using std::_logb;
     using std::_logbl;
     using std::_max_dble;
     using std::_max_flt;
#if !defined(_WIN64)
     using std::_max_ldble;
     using std::_tiny_ldble;
#else
     using std::_clearfp;
     using std::_controlfp;
     using std::_statusfp;
#endif
     using std::_nextafter;
     using std::_nextafterl;
     using std::_scalb;
     using std::_scalbl;
     using std::_status87;
#endif /* __XUSING_CNAME__ */
