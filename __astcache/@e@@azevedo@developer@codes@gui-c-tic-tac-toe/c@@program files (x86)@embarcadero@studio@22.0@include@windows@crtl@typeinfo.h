/*  typeinfo.h

    Definitions for RTTI
*/

/*
 *      C/C++ Run Time Library - Version 29.0
 *
 *      Copyright (c) 1993, 2023 by Embarcadero Technologies, Inc.
 *      All Rights Reserved.
 *
 */

/* $Revision: 35404 $ */

#if !defined(__cplusplus)
#error Must use C++ for typeinfo.h
#endif

#ifndef __TYPEINFO_H
#define __TYPEINFO_H

#include <_stddef.h>

#include <exception>
#include <cstring>

#if !defined(RC_INVOKED)

#if defined(__STDC__)
#pragma warn -nak
#endif

#pragma option  -Vt-                    // make sure vtable pointer is 'low'
#pragma option  -RT

#endif  /* !RC_INVOKED */

typedef struct
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[ 8 ];
} _BORGUID;

#if defined(_BUILDRTLDLL) || defined(_RTLDLL)
#   define _TIDIST   _EXPCLASS
#else
#     define _TIDIST
#endif

class                   tpid;

namespace std {

class   _TIDIST  __rtti type_info
{

public:
#if !defined(__clang__)
        tpid          * tpp;
#endif

private:
#if defined(__clang__)
    const char *__type_name;
#endif
                __cdecl type_info(const type_info &);
    type_info & __cdecl operator=(const type_info &);

public:
    virtual     __cdecl ~type_info();

    bool        __cdecl operator==(const type_info  &) const;
    bool        __cdecl operator!=(const type_info  &) const;

    bool        __cdecl before(const type_info  &) const;

    const char *__cdecl name() const;

#if defined(__clang__)
    size_t hash_code() const
    {   // hash name() to size_t value by pseudorandomizing transform
        const char *_Keyval = name();
        size_t _Val = 2166136261U;
        size_t _First = 0;
        size_t _Last = std::strlen(_Keyval);
        size_t _Stride = 1 + _Last / 10;

        for(; _First < _Last; _First += _Stride)
            _Val = 16777619U * _Val ^ (size_t)_Keyval[_First];
        return (_Val);
    }
 #endif /* __clang__ */

#if !defined(__clang__)
/*  Extra Borland specific member functions and types.  This is for
    dynamic GUID translation and casting.
*/
    void *      __cdecl _internal_rtti_cast(void *srcObj, const type_info *srcType) const;

    template    <class  _SrcType>
    void *      __cdecl _rtti_cast(_SrcType *_src) const
    {
        // do the typeid() inline so the compiler will flag an error
        // if the _SrcType doesn't support rtti.
        return _internal_rtti_cast(_src, (const type_info*)& typeid(_SrcType));
    }
    const _BORGUID *__cdecl _guid() const;

    struct _base_info
    {
            type_info *_type;
            void *_cookie;
    };

    struct _vbase_info : public _base_info
    {
            bool _indirect();
    };

    type_info const *_first_base(_base_info &) const;
    type_info const *_next_base(_base_info &) const;
    type_info const *_first_vbase(_vbase_info &) const;
    type_info const *_next_vbase(_vbase_info &_vb) const
    {
            return _next_base(_vb);
    }

protected:
                __cdecl type_info(tpid *_tpp) { tpp = _tpp; }
#endif
};

#if defined(__clang__)
class _CRTIMP2 bad_cast : public std::exception
{
  public:
    bad_cast();
    ~bad_cast();
    const char *what() const;
};

class _CRTIMP2 bad_typeid : public std::exception
{
  public:
    bad_typeid();
    ~bad_typeid();
    const char *what() const;
};

#else
class   bad_cast : public std::exception {};
class   bad_typeid : public std::exception {};
#endif
} // std

#if !defined(__STDC__)
// The following are for backwards compatibility.
typedef std::type_info   typeinfo;
typedef std::type_info   Type_info;
typedef std::bad_cast    Bad_cast;
typedef std::bad_typeid  Bad_typeid;

#pragma obsolete typeinfo
#pragma obsolete Type_info
#pragma obsolete Bad_cast
#pragma obsolete Bad_typeid
#endif

#if !defined(RC_INVOKED)

#pragma option  -RT.
#pragma option  -Vt.

#if defined(__STDC__)
#pragma warn .nak
#endif

#endif  /* !RC_INVOKED */

#endif
