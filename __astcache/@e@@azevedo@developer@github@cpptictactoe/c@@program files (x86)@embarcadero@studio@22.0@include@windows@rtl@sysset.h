// -----------------------------------------------------------------------------------
// SYSSET.H: C++ Encapsulation of Delphi Set types
//
// $Rev: 94894 $
//
// Copyright(c) 1995-2011 Embarcadero Technologies, Inc.
// -----------------------------------------------------------------------------------
#if !defined(SYSSET_H)
#define SYSSET_H

#if !defined(SystemHPP)
#error Do not include this file directly.  Include 'System.hpp'.
#endif

#if !defined(SYSMAC_H)
#include <sysmac.h>
#endif
#include <string.h>

#pragma option push -w-inl -w-lvc

namespace System
{
  // SetBase<> & Set<> are used to emulate Delphi set types

  template<class T, unsigned char minEl, unsigned char maxEl>
  class RTL_DELPHIRETURN SetBase
  {
    #define _SETBASE_SIZE (((int)((unsigned char)(maxEl)/8))-((int)((unsigned char)(minEl)/8))+1)
  public:
#if defined(_PLAT_IOS64) || defined(_WIN64) || defined(_PLAT_LINUX64) || defined(_PLAT_MACOS64)
    unsigned char Data[(_SETBASE_SIZE > 8) ? _SETBASE_SIZE :
                       ((_SETBASE_SIZE > 4) ? 8 :
                        ((_SETBASE_SIZE == 3) ? 4 : _SETBASE_SIZE))];
#else
    unsigned char Data[((_SETBASE_SIZE == 3) ? 4 : _SETBASE_SIZE)];
#endif                        
    #undef _SETBASE_SIZE
  };

#if defined(__clang__)
  template<class T, T minEl, T maxEl>
  class RTL_DELPHIRETURN Set : public SetBase<T, static_cast<unsigned char>(minEl), 
                                                 static_cast<unsigned char>(maxEl)>
#elif !defined(SET_BOUNDS_UNSIGNED_CHAR)
  template<class T, T minEl, T maxEl>
  class RTL_DELPHIRETURN Set : public SetBase<T, (unsigned char)minEl, (unsigned char)maxEl>
#else
  template<class T, unsigned char minEl, unsigned char maxEl>
  class RTL_DELPHIRETURN Set : public SetBase<T, minEl, maxEl>
#endif
  {
    // Used to generate debug information. (Please, do not remove)
    //
    typedef T TSetTypeRTTI;
#if defined(__clang__) && !defined(SET_BOUNDS_UNSIGNED_CHAR)
    typedef SetBase<T, static_cast<unsigned char>(minEl),
                       static_cast<unsigned char>(maxEl)> SetBaseT;
#else
    typedef SetBase<T, (unsigned char)minEl, (unsigned char)maxEl> SetBaseT;
#endif

  public:
    __fastcall Set() {memset(SetBaseT::Data, 0, sizeof (SetBaseT::Data));}
#if !defined(__clang__)    
    __fastcall Set(const Set& src)
    {
  #pragma option push -w-inl
      for (int i = 0; i < sizeof (SetBaseT::Data); i++)
        SetBaseT::Data[i] = src.Data[i];
  #pragma option pop
    }
#endif    

    // Use cautiously
    explicit __fastcall Set(const int& src)
    {
  #pragma option push -w-inl
      union
      {
        int IntValue;
        unsigned char Cracker[sizeof(SetBaseT::Data)];
      } IntCracker;

      IntCracker.IntValue = src;

      for (int i = 0; i < sizeof (SetBaseT::Data); i++)
        SetBaseT::Data[i] = IntCracker.Cracker[i];
  #pragma option pop
    }

    int __fastcall ToInt(void) const
    {
  #pragma option push -w-inl
    int Result = 0;
    for (int i = sizeof(SetBaseT::Data)-1; i >= 0; i--)
    {
      Result <<= (sizeof(unsigned char) * 8);
      Result |= SetBaseT::Data[i];
    }
    return Result;
  #pragma option pop
    }

    Set& __fastcall operator =(const Set& rhs)
    {
  #pragma option push -w-inl
      if (this != &rhs)
      {
        for (int i = 0; i < sizeof (SetBaseT::Data); i++)
          SetBaseT::Data[i] = rhs.Data[i];
      }
      return *this;
  #pragma option pop
    }

    Set& __fastcall operator +=(const Set& rhs)     //Union
    {
  #pragma option push -w-inl
    for (int i = 0; i < sizeof (SetBaseT::Data); i++)
      SetBaseT::Data[i] |= rhs.Data[i];
    return *this;
  #pragma option pop
    }

    Set& __fastcall operator -=(const Set& rhs)     //Difference
    {
  #pragma option push -w-inl
      for (int i = 0; i < sizeof (SetBaseT::Data); i++)
        SetBaseT::Data[i] ^= (SetBaseT::Data[i] & rhs.Data[i]);
      return *this;
  #pragma option pop
    }

    Set& __fastcall operator *=(const Set& rhs)     //Intersection
    {
  #pragma option push -w-inl
      for (int i = 0; i < sizeof(SetBaseT::Data); i++)
        SetBaseT::Data[i] &= rhs.Data[i];
      return *this;
  #pragma option pop
    }

    Set __fastcall operator +(const Set& rhs) const //Union
    {
  #pragma option push -w-inl
      Set<T, minEl, maxEl> s;
      for (int i = 0; i < sizeof(SetBaseT::Data); i++)
        s.Data[i] = SetBaseT::Data[i] | rhs.Data[i];
      return s;
  #pragma option pop
    }
    Set __fastcall operator -(const Set& rhs) const //Difference
    {
  #pragma option push -w-inl
      Set<T, minEl, maxEl> s;
      for (int i = 0; i < sizeof(SetBaseT::Data); i++)
        s.Data[i] = SetBaseT::Data[i] ^ (SetBaseT::Data[i] & rhs.Data[i]);
      return s;
  #pragma option pop
    }
    Set __fastcall operator *(const Set& rhs) const //Intersection
    {
  #pragma option push -w-inl
      Set<T, minEl, maxEl> s;
      for (int i = 0; i < sizeof(SetBaseT::Data); i++)
        s.Data[i] = SetBaseT::Data[i] & rhs.Data[i];
      return s;
  #pragma option pop
    }

    Set& __fastcall operator <<(const T el) //Add element
    {
      if (static_cast<unsigned char>(el) >= static_cast<unsigned char>(minEl) && 
          static_cast<unsigned char>(el) <= static_cast<unsigned char>(maxEl))
        SetBaseT::Data[(static_cast<int>(el)/8) - (static_cast<int>(minEl)/8)] |=
        (unsigned char)((unsigned short)1 << (static_cast<int>(el) % 8));
      return *this;
    }
    Set& __fastcall operator >>(const T el) //Remove element
    {
      if (static_cast<unsigned char>(el) >= static_cast<unsigned char>(minEl) && 
          static_cast<unsigned char>(el) <= static_cast<unsigned char>(maxEl))
        SetBaseT::Data[(static_cast<int>(el)/8) - (static_cast<int>(minEl)/8)] &=
        (unsigned char)~((unsigned short)1 << (static_cast<int>(el) % 8));
      return *this;
    }

    bool __fastcall Contains(const T el) const
    {
      return (static_cast<unsigned char>(el) >= static_cast<unsigned char>(minEl) && 
              static_cast<unsigned char>(el) <= static_cast<unsigned char>(maxEl)) ?
      (SetBaseT::Data[(static_cast<int>(el)/8) - (static_cast<int>(minEl)/8)] &
      (unsigned char)((unsigned short)1 << (static_cast<int>(el) % 8))): false;
    }

    Set& __fastcall Clear()
    {
  #pragma option push -w-inl
      memset(SetBaseT::Data, 0, sizeof(SetBaseT::Data));
      return *this;
  #pragma option pop
    }

    bool __fastcall Empty() const
    {
  #pragma option push -w-inl
      for (int i = (sizeof(SetBaseT::Data) >> 1)-1; i >= 0; --i)
        if (((short *) SetBaseT::Data)[i] != 0)
          return false;
      if (sizeof(SetBaseT::Data) & 1)
        return (SetBaseT::Data[sizeof(SetBaseT::Data)-1] == 0);
      return true;
  #pragma option pop
    }

    bool __fastcall operator ==(const Set& rhs) const
    {
  #pragma option push -w-inl
      for (int i = 0; i < sizeof(SetBaseT::Data); i++)
      {
        if (SetBaseT::Data[i] != rhs.Data[i])
        {
          // Not so fast, if first or last byte, make sure that
          // the compare does not include unused bits (mask them)
          if (i == 0)
          {
            if (((0xFF >> (8-(static_cast<int>(minEl) % 8))) ^ SetBaseT::Data[i]) !=
            ((0xFF >> (8-(static_cast<int>(minEl) % 8))) ^ rhs.Data[i]))
              return false;
          }
          else if (sizeof(SetBaseT::Data) > 1 && i == sizeof(SetBaseT::Data) - 1)
          {
            if (((0xFF << (1+(static_cast<int>(maxEl) % 8))) ^ SetBaseT::Data[i]) !=
            ((0xFF << (1+(static_cast<int>(maxEl) % 8))) ^ rhs.Data[i]))
              return false;
          }
          else
            return false;
        }
      }
      return true;
  #pragma option pop
    }
    bool __fastcall operator !=(const Set& rhs) const
    {
      return !operator==(rhs);
    }
  };

#ifdef __clang__

  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wc++11-narrowing"
  
    // Specialize for TSysCharSet and friends to handle
    // range discrepancy of Delphi AnsiChar/tkChar and C++ char
    template<> inline
    Set<char, 0, 255>& __fastcall Set<char, 0, 255>::operator <<(const char ch)
    {
      const unsigned char minEl = 0;
      const unsigned char maxEl = 255;
      unsigned char el = static_cast<unsigned char>(ch);
      if (el >= minEl && el <= maxEl)
        SetBaseT::Data[(static_cast<int>(el)/8) - (static_cast<int>(minEl)/8)] |=
        (unsigned char)((unsigned short)1 << (static_cast<int>(el) % 8));
      return *this;
    }
    template<> inline
    Set<char, 0, 255>& __fastcall Set<char, 0, 255>::operator >>(const char ch)
    {
      const unsigned char minEl = 0;
      const unsigned char maxEl = 255;
      unsigned char el = static_cast<unsigned char>(ch);
      if (el >= minEl && el <= maxEl)
        SetBaseT::Data[(static_cast<int>(el)/8) - (static_cast<int>(minEl)/8)] &=
        (unsigned char)~((unsigned short)1 << (static_cast<int>(el) % 8));
      return *this;
    }
    template <> inline
    bool __fastcall Set<char, 0, 255>::Contains(const char ch) const
    {
      const unsigned char minEl = 0;
      const unsigned char maxEl = 255;
      unsigned char el = static_cast<unsigned char>(ch);
      return (el >= minEl && el <= maxEl)?
      (SetBaseT::Data[(static_cast<int>(el)/8) - (static_cast<int>(minEl)/8)] &
      (unsigned char)((unsigned short)1 << (static_cast<int>(el) % 8))): false;
    }
    
  #pragma clang diagnostic pop    
  
#endif
}

// NOTE: Insertion/Extraction operators of VCL classes are only visible
//       if VCL_IOSTREAM is defined.
//
#if defined(VCL_IOSTREAM)
#if !defined(SET_BOUNDS_UNSIGNED_CHAR)
template <class T, T minEl, T maxEl>
std::ostream& operator <<(std::ostream& os, const System::Set<T, minEl, maxEl> & arg)
{
  for (int i = static_cast<int>(minEl); i <= static_cast<int>(maxEl); i++) {
    if (arg.Contains(static_cast<T>(i)))
      os << '1';
    else
      os << '0';
  }
  return os;
}

template <class T, T minEl, T maxEl>
std::istream& operator >> (std::istream& is, System::Set<T, minEl, maxEl> & arg)
{
  unsigned char el;

  arg.Clear();
  for (int i = static_cast<int>(minEl); i <= static_cast<int>(maxEl); i++)
  {
    is >> el;
    if (!is)
      break;

    if (el == '1')
      arg << static_cast<T>(i);
  }
  return is;
}
#else
template <class T, unsigned char minEl, unsigned char maxEl>
std::ostream& operator <<(std::ostream& os, const System::Set<T, minEl, maxEl> & arg)
{
  for (int i = minEl; i <= maxEl; i++) {
    if (arg.Contains(static_cast<T>(i)))
      os << '1';
    else
      os << '0';
  }
  return os;
}

template <class T, unsigned char minEl, unsigned char maxEl>
std::istream& operator >> (std::istream& is, System::Set<T, minEl, maxEl> & arg)
{
  unsigned char el;

  arg.Clear();
  for (int i = minEl; i <= maxEl; i++)
  {
    is >> el;
    if (!is)
      break;

    if (el == '1')
      arg << static_cast<T>(i);
  }
  return is;
}
#endif
#endif  // VCL_IOSTREAM

#pragma option pop

#endif
