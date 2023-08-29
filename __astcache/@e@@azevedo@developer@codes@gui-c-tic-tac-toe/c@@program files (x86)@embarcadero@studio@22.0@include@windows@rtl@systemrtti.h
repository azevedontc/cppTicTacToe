// -----------------------------------------------------------------------------------
// SystemRtti.h C++ Declarations of types from the System.Rtti unit
//
// $Rev: 111527 $
//
// Copyright(c) 2012 Embarcadero Technologies, Inc.
// -----------------------------------------------------------------------------------
#ifndef SystemRtti_H
#define SystemRtti_H

#if !defined(System_RttiHPP)
#error Do not include this file directly.  Include 'System.Rtti.hpp'.
#endif

namespace System {
 namespace Internal {
  namespace Varhlpr {
   extern PACKAGE System::Typinfo::PTypeInfo __fastcall GetTypeInfoHelper(unsigned I);
  }
 }
}

namespace System
{
namespace Rtti
{
  enum class TypeInfoIndex : unsigned int {
                   tiiBoolean = 1,
                   tiiByte,
                   tiiShortInt,
                   tiiWord,
                   tiiSmallInt,
                   tiiLongInt,
                   tiiLongWord,
                   tiiInt64,
                   tiiUInt64,
                   tiiFloat,
                   tiiDouble,
                   tiiExtended,
                   tiiAnsiChar,
                   tiiWideChar,
                   tiiCurrency,
                   tiiTDateTime,
                   tiiAnsiString,
                   tiiUnicodeString,
                   tiiWideString,
                   tiiNativeInt,
                   tiiNativeUInt,
                   tiiTSize,
                   tiiTSmallPoint,
                   tiiTPoint,
                   tiiTRect,
                   tiiTPointF,
                   tiiTSizeF,
                   tiiTRectF,
                   tiiTAlphaColor,
                   tiiTNotifyEvent,
                   tiiIInterface,
                   tiiIInvokable,
                   tiiVariant,
                   tiiOleVariant,
                   tiiLast
                };

  template <typename T>
  struct _TValueDataHlpr
  {
    typedef void* RetType;
    static RetType get(const T& Value)
    { return const_cast<T*>(&Value); }
  };

  template <typename T>
  struct _TValueRTTIHlpr
  {
    static System::Typinfo::PTypeInfo get()
    { return __delphirtti(T); }
  };

  template <TypeInfoIndex E>
  struct _TRTTIGetter
  {
    static System::Typinfo::PTypeInfo get()
    { return System::Internal::Varhlpr::GetTypeInfoHelper(static_cast<unsigned>(E)); }
  };

  template <>
  struct _TValueRTTIHlpr<System::Types::TSize>
  {
    static System::Typinfo::PTypeInfo get()
    { return _TRTTIGetter<TypeInfoIndex::tiiTSize>::get(); }
  };

  template <>
  struct _TValueRTTIHlpr<System::Types::TSmallPoint>
  {
    static System::Typinfo::PTypeInfo get()
    { return _TRTTIGetter<TypeInfoIndex::tiiTSmallPoint>::get(); }
  };

  template <>
  struct _TValueRTTIHlpr<System::Types::TPoint>
  {
    static System::Typinfo::PTypeInfo get()
    { return _TRTTIGetter<TypeInfoIndex::tiiTPoint>::get(); }
  };

  template <>
  struct _TValueRTTIHlpr<System::Types::TRect>
  {
    static System::Typinfo::PTypeInfo get()
    { return _TRTTIGetter<TypeInfoIndex::tiiTRect>::get(); }
  };

  template <>
  struct _TValueRTTIHlpr<System::Types::TPointF>
  {
    static System::Typinfo::PTypeInfo get()
    { return _TRTTIGetter<TypeInfoIndex::tiiTPointF>::get(); }
  };

  template <>
  struct _TValueRTTIHlpr<System::Types::TSizeF>
  {
    static System::Typinfo::PTypeInfo get()
    { return _TRTTIGetter<TypeInfoIndex::tiiTSizeF>::get(); }
  };

  template <>
  struct _TValueRTTIHlpr<System::Types::TRectF>
  {
    static System::Typinfo::PTypeInfo get()
    { return _TRTTIGetter<TypeInfoIndex::tiiTRectF>::get(); }
  };


  // Make sure to include System.Classes.hpp *before* System.Rtti.hpp
  // when using TNotifyEvent in a TValue to get the correct TypeInfo
#if defined(System_ClassesHPP)
//  template <>
//  struct _TValueRTTIHlpr<System::Classes::TNotifyEvent>
//  {
//    static System::Typinfo::PTypeInfo get()
//    { return _TRTTIGetter<TypeInfoIndex::tiiTNotifyEvent>::get(); }
//  };
#endif

  template <typename T,
            typename _DATA = _TValueDataHlpr<T>,
            typename _RTTI = _TValueRTTIHlpr<T> >
  struct _TValueHelper
  {
    static TValue From(const T Value)
    {
      TValue result = TValue::Empty;
      TValue::Make(_DATA::get(Value), _RTTI::get(), result);
      return result;
    }
  };

  template <typename T>
  TValue __fastcall TValue::From(const T Value)
  {
    // Force error if TValue::From<T> is missing pointer on objects
    // Use TValue::From<TObject*>(pObj) for delphi-style classes
    typedef int _dummyType[__is_base_of(System::TObject, T) ? -1 : 1];
    TValue result = TValue::Empty;
    TValue::Make(_TValueDataHlpr<T>::get(Value), _TValueRTTIHlpr<T>::get(), result);
    return result;
  }

  template <typename T>
  bool __fastcall TValue::TryAsType(/* out */ T &AResult, const bool EmptyAsAnyType)
  {
    TValue val;
    bool result = TryCast(_TValueRTTIHlpr<T>::get(), val, EmptyAsAnyType);
    if (result)
      if (!val.FTypeInfo)
        memset(&AResult, 0, sizeof(T));
      else
        val.ExtractRawData(&AResult);
    return result;
  }

  template<typename T>
  bool __fastcall TValue::IsType(const bool EmptyAsAnyType)/* overload */
  {
    return IsType(_TValueRTTIHlpr<T>::get(), EmptyAsAnyType);
  }

  template <typename T>
  T __fastcall TValue::AsType(const bool EmptyAsAnyType)
  {
    T result;
    if (!TryAsType<T>(result, EmptyAsAnyType))
      throw Sysutils::EInvalidCast(System_Sysconst_SInvalidCast);
    return result;
  }

  template <typename T>
  TValue __fastcall TValue::Cast(const bool EmptyAsAnyType)/* overload */
  {
    TValue result;
    if (!TryCast(_TValueRTTIHlpr<T>::get(), result, EmptyAsAnyType))
      throw Sysutils::EInvalidCast(System_Sysconst_SInvalidCast);
    return result;
  }

  template <typename T>
  void __fastcall TValue::Make(const T Value, TValue &Result)/* overload */
  {
    TValue::Make(_TValueDataHlpr<T>::get(Value), _TValueRTTIHlpr<T>::get(), Result);
  }

  template<>
  inline TValue __fastcall TValue::From<String>(const String str) _ALWAYS_INLINE
  {
    return TValue::_op_Implicit(str);
  }

} /* namespace Rtti */
} /* namespace System */

#endif // SystemRtti_H