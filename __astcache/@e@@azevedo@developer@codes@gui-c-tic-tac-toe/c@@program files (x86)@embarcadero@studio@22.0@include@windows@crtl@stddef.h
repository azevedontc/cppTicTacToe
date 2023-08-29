/*  stddef.h

    Definitions for common types, and NULL

*/

/*
 *      C/C++ Run Time Library - Version 29.0
 *
 *      Copyright (c) 1987, 2023 by Embarcadero Technologies, Inc.
 *      All Rights Reserved.
 *
 */

/* $Revision: 36843 $ */

#ifndef __STDDEF_H
#define __STDDEF_H
#define _INC_STDDEF  /* MSC Guard name */

/*  All the work is done in _stddef.h, so that it may be included in the other
    standard C headers */

#include <_stddef.h>

#if defined(__cplusplus) && defined(__clang__)
#include <yvals.h>

extern "C++" {
  
_STD_BEGIN
	// TEMPLATE CLASS integral_constant
template<class _Ty,
	_Ty _Val>
	struct integral_constant
	{	// convenient template for integral constant types
	static _CONST_DATA _Ty value = _Val;

	typedef _Ty value_type;
	typedef integral_constant<_Ty, _Val> type;

	_CONST_FUN operator value_type() const _NOEXCEPT
		{	// return stored value
		return (value);
		}

	_CONST_FUN value_type operator()() const _NOEXCEPT
		{	// return stored value
		return (value);
		}
	};

typedef integral_constant<bool, true> true_type;
typedef integral_constant<bool, false> false_type;

	// TEMPLATE CLASS _Is_integral
template<class _Ty>
	struct _Is_integral
		: false_type
	{	// determine whether _Ty is integral
	};

template<>
	struct _Is_integral<bool>
		: true_type
	{	// determine whether _Ty is integral
	};

template<>
	struct _Is_integral<char>
		: true_type
	{	// determine whether _Ty is integral
	};

template<>
	struct _Is_integral<unsigned char>
		: true_type
	{	// determine whether _Ty is integral
	};

template<>
	struct _Is_integral<signed char>
		: true_type
	{	// determine whether _Ty is integral
	};

template<>
	struct _Is_integral<wchar_t>
		: true_type
	{	// determine whether _Ty is integral
	};

template<>
	struct _Is_integral<unsigned short>
		: true_type
	{	// determine whether _Ty is integral
	};

template<>
	struct _Is_integral<signed short>
		: true_type
	{	// determine whether _Ty is integral
	};

template<>
	struct _Is_integral<unsigned int>
		: true_type
	{	// determine whether _Ty is integral
	};

template<>
	struct _Is_integral<signed int>
		: true_type
	{	// determine whether _Ty is integral
	};

template<>
	struct _Is_integral<unsigned long>
		: true_type
	{	// determine whether _Ty is integral
	};

template<>
	struct _Is_integral<signed long>
		: true_type
	{	// determine whether _Ty is integral
	};

template<>
	struct _Is_integral<char16_t>
		: true_type
	{	// determine whether _Ty is integral
	};

template<>
	struct _Is_integral<char32_t>
		: true_type
	{	// determine whether _Ty is integral
	};

 #ifdef _LONGLONG
template<>
	struct _Is_integral<_LONGLONG>
		: true_type
	{	// determine whether _Ty is integral
	};

template<>
	struct _Is_integral<_ULONGLONG>
		: true_type
	{	// determine whether _Ty is integral
	};

#if defined(__CODEGEARC__) && defined(_M_X64)
template<>
	struct _Is_integral<__int128>
		: true_type
	{	// determine whether _Ty is integral
	};

template<>
	struct _Is_integral<unsigned __int128>
		: true_type
	{	// determine whether _Ty is integral
	};

#endif
 #endif /* _LONGLONG */

	// TEMPLATE CLASS remove_const
template<class _Ty>
	struct remove_const
	{	// remove top level const qualifier
	typedef _Ty type;
	};

template<class _Ty>
	struct remove_const<const _Ty>
	{	// remove top level const qualifier
	typedef _Ty type;
	};

template<class _Ty>
	struct remove_const<const _Ty[]>
	{	// remove top level const qualifier
	typedef _Ty type[];
	};

template<class _Ty, size_t _Nx>
	struct remove_const<const _Ty[_Nx]>
	{	// remove top level const qualifier
	typedef _Ty type[_Nx];
	};

	// TEMPLATE CLASS remove_volatile
template<class _Ty>
	struct remove_volatile
	{	// remove top level volatile qualifier
	typedef _Ty type;
	};

template<class _Ty>
	struct remove_volatile<volatile _Ty>
	{	// remove top level volatile qualifier
	typedef _Ty type;
	};

template<class _Ty>
	struct remove_volatile<volatile _Ty[]>
	{	// remove top level volatile qualifier
	typedef _Ty type[];
	};

template<class _Ty, size_t _Nx>
	struct remove_volatile<volatile _Ty[_Nx]>
	{	// remove top level volatile qualifier
	typedef _Ty type[_Nx];
	};

	// TEMPLATE CLASS remove_cv
template<class _Ty>
	struct remove_cv
	{	// remove top level const and volatile qualifiers
	typedef typename remove_const<typename remove_volatile<_Ty>::type>::type
		type;
	};

	// TEMPLATE CLASS is_integral
template<class _Ty>
	struct is_integral
		: _Is_integral<typename remove_cv<_Ty>::type>
	{	// determine whether _Ty is integral
	};

	// TEMPLATE CLASS enable_if
template<bool _Test,
	class _Ty = void>
	struct enable_if
	{	// type is undefined for assumed !_Test
	};

template<class _Ty>
	struct enable_if<true, _Ty>
	{	// type is _Ty for _Test
	typedef _Ty type;
	};

template<bool _Test,
	class _Ty = void>
	using enable_if_t = typename enable_if<_Test, _Ty>::type;

 #if _HAS_CPP17
using nullptr_t = decltype(nullptr);

	// CLASS byte

 #if _HAS_ENUM_CLASS
enum class byte : unsigned char {};
template<class _Itype,
	class = enable_if_t<is_integral<_Itype>::value,
		void> > inline
	_CONST_FUN byte operator<<(byte _Left, _Itype _Shift) _NOEXCEPT
	{	// shift left
	return (_STD byte((unsigned char)_Left << _Shift));
	}

template<class _Itype,
	class = enable_if_t<is_integral<_Itype>::value,
		void> > inline
	_CONST_FUN byte& operator<<=(byte& _Left, _Itype _Shift) _NOEXCEPT
	{	// shift left in place
	return (_Left = _Left << _Shift);
	}

template<class _Itype,
	class = enable_if_t<is_integral<_Itype>::value,
		void> > inline
	_CONST_FUN byte operator>>(byte _Left, _Itype _Shift) _NOEXCEPT
	{	// shift right
	return (_STD byte((unsigned char)_Left >> _Shift));
	}

template<class _Itype,
	class = enable_if_t<is_integral<_Itype>::value,
		void> > inline
	_CONST_FUN byte& operator>>=(byte& _Left, _Itype _Shift) _NOEXCEPT
	{	// shift right in place
	return (_Left = _Left >> _Shift);
	}

_CONST_FUN byte operator|(byte _Left, byte _Right) _NOEXCEPT
	{	// OR
	return (_STD byte((unsigned char)_Left | (unsigned char)_Right));
	}

_CONST_FUNX byte& operator|=(byte& _Left, byte _Right) _NOEXCEPT
	{	// OR in place
	return (_Left = _Left | _Right);
	}

_CONST_FUN byte operator&(byte _Left, byte _Right) _NOEXCEPT
	{	// AND
	return (_STD byte((unsigned char)_Left & (unsigned char)_Right));
	}

_CONST_FUNX byte& operator&=(byte& _Left, byte _Right) _NOEXCEPT
	{	// AND in place
	return (_Left = _Left & _Right);
	}

_CONST_FUN byte operator^(byte _Left, byte _Right) _NOEXCEPT
	{	// XOR
	return (_STD byte((unsigned char)_Left ^ (unsigned char)_Right));
	}

_CONST_FUNX byte& operator^=(byte& _Left, byte _Right) _NOEXCEPT
	{	// XOR in place
	return (_Left = _Left ^ _Right);
	}

_CONST_FUN byte operator~(byte _Left) _NOEXCEPT
	{	// NOT
	return (_STD byte(~(unsigned char)_Left));
	}

 #else /* _HAS_ENUM_CLASS */
typedef unsigned char byte;
 #endif /* _HAS_ENUM_CLASS */

template<class _Itype>
	_CONST_FUN _Itype to_integer(byte _Left) _NOEXCEPT
	{	// convert to integer
	return ((_Itype)_Left);
	}
 #endif /* _HAS_CPP17 */
_STD_END

} // extern C++
#endif


#endif /* __STDDEF_H */
