/*  stdint.h

    Integer types - c99 7.18
*/

/*
 *      C/C++ Run Time Library - Version 29.0
 *
 *      Copyright (c) 2002, 2023 by Embarcadero Technologies, Inc.
 *      All Rights Reserved.
 *
 */


#ifndef __STDINT_H
#define __STDINT_H

#ifdef __cplusplus
namespace std {
#endif

/* 7.18.1.1 Exact-width integer types */

typedef __int8 int8_t;
typedef __int16 int16_t;
typedef __int32 int32_t;
typedef __int64 int64_t;

typedef unsigned __int8 uint8_t;
typedef unsigned __int16 uint16_t;
typedef unsigned __int32 uint32_t;
typedef unsigned __int64 uint64_t;



/* 7.18.1.2 Minimum-width integer types */

typedef __int8 int_least8_t;
typedef __int16 int_least16_t;
typedef __int32 int_least32_t;
typedef __int64 int_least64_t;

typedef unsigned __int8 uint_least8_t;
typedef unsigned __int16 uint_least16_t;
typedef unsigned __int32 uint_least32_t;
typedef unsigned __int64 uint_least64_t;



/* 7.18.1.3 Fastest minimum-width integer types */

typedef __int8 int_fast8_t;
typedef __int16 int_fast16_t;
typedef __int32 int_fast32_t;
typedef __int64 int_fast64_t;

typedef unsigned __int8 uint_fast8_t;
typedef unsigned __int16 uint_fast16_t;
typedef unsigned __int32 uint_fast32_t;
typedef unsigned __int64 uint_fast64_t;



/* 7.18.1.4 Integer types capable of holding object pointers */

#if defined(_WIN64)
typedef int64_t intptr_t;
typedef uint64_t uintptr_t;
#else
typedef int32_t intptr_t;
typedef uint32_t uintptr_t;
#endif


/* 7.18.1.5 Greatest-width integer types */

typedef int64_t intmax_t;
typedef uint64_t uintmax_t;

#ifdef __cplusplus
} /* namespace std */
#endif /* __cplusplus */

#if !defined(__INT_SIZE_MIN_MAX_DEFINED)
#define __INT_SIZE_MIN_MAX_DEFINED

/* 7.18.2.1 Limits of exact-width integer types */

#define INT8_MIN (-128)
#define INT16_MIN (-32768)
#define INT32_MIN (-2147483647L - 1)
#define INT64_MIN (-9223372036854775807LL - 1)

#define INT8_MAX (127)
#define INT16_MAX (32767)
#define INT32_MAX (2147483647L)
#define INT64_MAX (9223372036854775807LL)

#define UINT8_MAX (255)
#define UINT16_MAX (65535)
#define UINT32_MAX (4294967295UL)
#define UINT64_MAX (18446744073709551615ULL)

#endif

/* 7.18.2.2 Limits of minimum-width integer types */

#define INT_LEAST8_MIN (-128)
#define INT_LEAST16_MIN (-32768)
#define INT_LEAST32_MIN (-2147483647L - 1)
#define INT_LEAST64_MIN (-9223372036854775807LL - 1)

#define INT_LEAST8_MAX (127)
#define INT_LEAST16_MAX (32767)
#define INT_LEAST32_MAX (2147483647L)
#define INT_LEAST64_MAX (9223372036854775807LL)

#define UINT_LEAST8_MAX (255)
#define UINT_LEAST16_MAX (65535)
#define UINT_LEAST32_MAX (4294967295UL)
#define UINT_LEAST64_MAX (18446744073709551615ULL)



/* 7.18.2.3 Limits of fastest minimum-width integer types */

#define INT_FAST8_MIN (-128)
#define INT_FAST16_MIN (-32768)
#define INT_FAST32_MIN (-2147483647L - 1)
#define INT_FAST64_MIN (-9223372036854775807LL - 1)

#define INT_FAST8_MAX (127)
#define INT_FAST16_MAX (32767)
#define INT_FAST32_MAX (2147483647L)
#define INT_FAST64_MAX (9223372036854775807LL)

#define UINT_FAST8_MAX (255)
#define UINT_FAST16_MAX (65535)
#define UINT_FAST32_MAX (4294967295UL)
#define UINT_FAST64_MAX (18446744073709551615ULL)



/* 7.18.2.4 Limits of integer types capable of holding object pointers */

#if defined(_WIN64)
#define INTPTR_MIN (-9223372036854775807LL - 1)
#define INTPTR_MAX (9223372036854775807LL)
#define UINTPTR_MAX (18446744073709551615ULL)
#else
#define INTPTR_MIN (-2147483647L - 1)
#define INTPTR_MAX (2147483647L)
#define UINTPTR_MAX (4294967295UL)
#endif


/* 7.18.2.5 Limits of greatest-width integer types */

#define INTMAX_MIN (-9223372036854775807LL - 1)
#define INTMAX_MAX (9223372036854775807LL)
#define UINTMAX_MAX (18446744073709551615ULL)



/* 7.18.3 Limits of other integer types */
#if defined(__clang__)
#define PTRDIFF_MIN (-__PTRDIFF_MAX__-1)
#define PTRDIFF_MAX __PTRDIFF_MAX__
#else
#if defined(_WIN64)
#define PTRDIFF_MIN (-9223372036854775807LL - 1)
#define PTRDIFF_MAX (9223372036854775807LL)
#else
#define PTRDIFF_MIN (-2147483647L - 1)
#define PTRDIFF_MAX (2147483647L)
#endif
#endif

#define SIG_ATOMIC_MIN INT32_MIN
#define SIG_ATOMIC_MAX INT32_MAX

#if defined(__clang__)
#define SIZE_MAX __SIZE_MAX__
#else
#define SIZE_MAX UINT32_MAX
#endif

#if __STDC_WANT_LIB_EXT1__
#define RSIZE_MAX (SIZE_MAX >> 1)
#endif

#ifndef WCHAR_MIN
#define WCHAR_MIN 0
#endif /* WCHAR_MIN */

#ifndef WCHAR_MAX
#define WCHAR_MAX UINT16_MAX
#endif /* WCHAR_MAX */

#define WINT_MIN 0
#define WINT_MAX UINT16_MAX


/* 7.18.4.1 Macros for minimum-width integer constants */

#define INT8_C(x) ((int8_t) x)
#define INT16_C(x) ((int16_t) x)
#define INT32_C(x) ((int32_t) x)
#define INT64_C(x) ((int64_t) x)

#define UINT8_C(x) ((uint8_t) x)
#define UINT16_C(x) ((uint16_t) x)
#define UINT32_C(x) ((uint32_t) x)
#define UINT64_C(x) ((uint64_t) x)



/* 7.18.4.2 Macros for greatest-width integer constants */

#define INTMAX_C(x) ((intmax_t) x)
#define UINTMAX_C(x) ((uintmax_t) x)

#endif /* __STDINT_H */

#if defined(__cplusplus) && !defined(__XUSING_CNAME__) && !defined(__STDINT_H_USING_LIST)
#define __STDINT_H_USING_LIST

using std::int8_t;
using std::int16_t;
using std::int32_t;
using std::int64_t;
using std::uint8_t;
using std::uint16_t;
using std::uint32_t;
using std::uint64_t;

using std::int_least8_t;
using std::int_least16_t;
using std::int_least32_t;
using std::int_least64_t;
using std::uint_least8_t;
using std::uint_least16_t;
using std::uint_least32_t;
using std::uint_least64_t;

using std::int_fast8_t;
using std::int_fast16_t;
using std::int_fast32_t;
using std::int_fast64_t;
using std::uint_fast8_t;
using std::uint_fast16_t;
using std::uint_fast32_t;
using std::uint_fast64_t;

using std::intptr_t;
using std::uintptr_t;

using std::intmax_t;
using std::uintmax_t;

#endif /* __XUSING_CNAME__ */
