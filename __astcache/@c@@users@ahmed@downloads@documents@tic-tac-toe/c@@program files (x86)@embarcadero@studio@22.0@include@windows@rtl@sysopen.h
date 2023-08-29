// -----------------------------------------------------------------------------------
// SYSOPEN.H: C++ Encapsulation of Delphi Open Array types
//
// $Rev: 99324 $
//
// Copyright(c) 1995-2011 Embarcadero Technologies, Inc.
// -----------------------------------------------------------------------------------
#if !defined(SYSOPEN_H)
#define SYSOPEN_H

#if !defined(SystemHPP)
#error Do not include this file directly.  Include 'System.hpp'.
#endif

#pragma option push -w-inl -w-lvc

namespace System
{
    template<class T> class OpenArray
    {
    public:
      __fastcall OpenArray(T arg0)
      {
        Array = new T[Count = 1];
        Array[0] = arg0;
      }
      __fastcall OpenArray(T arg0, T arg1)
      {
        Array = new T[Count = 2];
        Array[0] = arg0;
        Array[1] = arg1;
      }
      __fastcall OpenArray(T arg0, T arg1, T arg2)
      {
        Array = new T[Count = 3];
        Array[0] = arg0;
        Array[1] = arg1;
        Array[2] = arg2;
      }
      __fastcall OpenArray(T arg0, T arg1, T arg2, T arg3)
      {
        Array = new T[Count = 4];
        Array[0] = arg0;
        Array[1] = arg1;
        Array[2] = arg2;
        Array[3] = arg3;
      }
      __fastcall OpenArray(T arg0, T arg1, T arg2, T arg3, T arg4)
      {
        Array = new T[Count = 5];
        Array[0] = arg0;
        Array[1] = arg1;
        Array[2] = arg2;
        Array[3] = arg3;
        Array[4] = arg4;
      }
      __fastcall OpenArray(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5)
      {
        Array = new T[Count = 6];
        Array[0] = arg0;
        Array[1] = arg1;
        Array[2] = arg2;
        Array[3] = arg3;
        Array[4] = arg4;
        Array[5] = arg5;
      }
      __fastcall OpenArray(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5, T arg6)
      {
        Array = new T[Count = 7];
        Array[0] = arg0;
        Array[1] = arg1;
        Array[2] = arg2;
        Array[3] = arg3;
        Array[4] = arg4;
        Array[5] = arg5;
        Array[6] = arg6;
      }
      __fastcall OpenArray(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5, T arg6,
                 T arg7)
      {
        Array = new T[Count = 8];
        Array[0] = arg0;
        Array[1] = arg1;
        Array[2] = arg2;
        Array[3] = arg3;
        Array[4] = arg4;
        Array[5] = arg5;
        Array[6] = arg6;
        Array[7] = arg7;
      }
      __fastcall OpenArray(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5, T arg6,
                 T arg7, T arg8)
      {
        Array = new T[Count = 9];
        Array[0] = arg0;
        Array[1] = arg1;
        Array[2] = arg2;
        Array[3] = arg3;
        Array[4] = arg4;
        Array[5] = arg5;
        Array[6] = arg6;
        Array[7] = arg7;
        Array[8] = arg8;
      }
      __fastcall OpenArray(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5, T arg6,
                 T arg7, T arg8, T arg9)
      {
        Array = new T[Count = 10];
        Array[0] = arg0;
        Array[1] = arg1;
        Array[2] = arg2;
        Array[3] = arg3;
        Array[4] = arg4;
        Array[5] = arg5;
        Array[6] = arg6;
        Array[7] = arg7;
        Array[8] = arg8;
        Array[9] = arg9;
      }
      __fastcall OpenArray(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5, T arg6,
                 T arg7, T arg8, T arg9, T arg10)
      {
        Array = new T[Count = 11];
        Array[0] = arg0;
        Array[1] = arg1;
        Array[2] = arg2;
        Array[3] = arg3;
        Array[4] = arg4;
        Array[5] = arg5;
        Array[6] = arg6;
        Array[7] = arg7;
        Array[8] = arg8;
        Array[9] = arg9;
        Array[10] = arg10;
      }
      __fastcall OpenArray(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5, T arg6,
                 T arg7, T arg8, T arg9, T arg10, T arg11)
      {
        Array = new T[Count = 12];
        Array[0] = arg0;
        Array[1] = arg1;
        Array[2] = arg2;
        Array[3] = arg3;
        Array[4] = arg4;
        Array[5] = arg5;
        Array[6] = arg6;
        Array[7] = arg7;
        Array[8] = arg8;
        Array[9] = arg9;
        Array[10] = arg10;
        Array[11] = arg11;
      }
      __fastcall OpenArray(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5, T arg6,
                 T arg7, T arg8, T arg9, T arg10, T arg11, T arg12)
      {
        Array = new T[Count = 13];
        Array[0] = arg0;
        Array[1] = arg1;
        Array[2] = arg2;
        Array[3] = arg3;
        Array[4] = arg4;
        Array[5] = arg5;
        Array[6] = arg6;
        Array[7] = arg7;
        Array[8] = arg8;
        Array[9] = arg9;
        Array[10] = arg10;
        Array[11] = arg11;
        Array[12] = arg12;
      }
      __fastcall OpenArray(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5, T arg6,
                 T arg7, T arg8, T arg9, T arg10, T arg11, T arg12,
                 T arg13)
      {
        Array = new T[Count = 14];
        Array[0] = arg0;
        Array[1] = arg1;
        Array[2] = arg2;
        Array[3] = arg3;
        Array[4] = arg4;
        Array[5] = arg5;
        Array[6] = arg6;
        Array[7] = arg7;
        Array[8] = arg8;
        Array[9] = arg9;
        Array[10] = arg10;
        Array[11] = arg11;
        Array[12] = arg12;
        Array[13] = arg13;
      }
      __fastcall OpenArray(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5, T arg6,
                 T arg7, T arg8, T arg9, T arg10, T arg11, T arg12,
                 T arg13, T arg14)
      {
        Array = new T[Count = 15];
        Array[0] = arg0;
        Array[1] = arg1;
        Array[2] = arg2;
        Array[3] = arg3;
        Array[4] = arg4;
        Array[5] = arg5;
        Array[6] = arg6;
        Array[7] = arg7;
        Array[8] = arg8;
        Array[9] = arg9;
        Array[10] = arg10;
        Array[11] = arg11;
        Array[12] = arg12;
        Array[13] = arg13;
        Array[14] = arg14;
      }
      __fastcall OpenArray(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5, T arg6,
                 T arg7, T arg8, T arg9, T arg10, T arg11, T arg12,
                 T arg13, T arg14, T arg15)
      {
        Array = new T[Count = 16];
        Array[0] = arg0;
        Array[1] = arg1;
        Array[2] = arg2;
        Array[3] = arg3;
        Array[4] = arg4;
        Array[5] = arg5;
        Array[6] = arg6;
        Array[7] = arg7;
        Array[8] = arg8;
        Array[9] = arg9;
        Array[10] = arg10;
        Array[11] = arg11;
        Array[12] = arg12;
        Array[13] = arg13;
        Array[14] = arg14;
        Array[15] = arg15;
      }
      __fastcall OpenArray(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5, T arg6,
                 T arg7, T arg8, T arg9, T arg10, T arg11, T arg12,
                 T arg13, T arg14, T arg15, T arg16)
      {
        Array = new T[Count = 17];
        Array[0] = arg0;
        Array[1] = arg1;
        Array[2] = arg2;
        Array[3] = arg3;
        Array[4] = arg4;
        Array[5] = arg5;
        Array[6] = arg6;
        Array[7] = arg7;
        Array[8] = arg8;
        Array[9] = arg9;
        Array[10] = arg10;
        Array[11] = arg11;
        Array[12] = arg12;
        Array[13] = arg13;
        Array[14] = arg14;
        Array[15] = arg15;
        Array[16] = arg16;
      }
      __fastcall OpenArray(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5, T arg6,
                 T arg7, T arg8, T arg9, T arg10, T arg11, T arg12,
                 T arg13, T arg14, T arg15, T arg16, T arg17)
      {
        Array = new T[Count = 18];
        Array[0] = arg0;
        Array[1] = arg1;
        Array[2] = arg2;
        Array[3] = arg3;
        Array[4] = arg4;
        Array[5] = arg5;
        Array[6] = arg6;
        Array[7] = arg7;
        Array[8] = arg8;
        Array[9] = arg9;
        Array[10] = arg10;
        Array[11] = arg11;
        Array[12] = arg12;
        Array[13] = arg13;
        Array[14] = arg14;
        Array[15] = arg15;
        Array[16] = arg16;
        Array[17] = arg17;
      }
      __fastcall OpenArray(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5, T arg6,
                 T arg7, T arg8, T arg9, T arg10, T arg11, T arg12,
                 T arg13, T arg14, T arg15, T arg16, T arg17, T arg18)
      {
        Array = new T[Count = 19];
        Array[0] = arg0;
        Array[1] = arg1;
        Array[2] = arg2;
        Array[3] = arg3;
        Array[4] = arg4;
        Array[5] = arg5;
        Array[6] = arg6;
        Array[7] = arg7;
        Array[8] = arg8;
        Array[9] = arg9;
        Array[10] = arg10;
        Array[11] = arg11;
        Array[12] = arg12;
        Array[13] = arg13;
        Array[14] = arg14;
        Array[15] = arg15;
        Array[16] = arg16;
        Array[17] = arg17;
        Array[18] = arg18;
      }
      __fastcall OpenArray(const OpenArray& src)
      {
        Array = new T[Count = src.Count];
        for (int i = 0; i < Count; i++)
          Array[i] = src.Array[i];
      }
      __fastcall ~OpenArray()
      {
        delete [] Array;
      }
      OpenArray& __fastcall operator =(const OpenArray& rhs);

      __fastcall operator T*()
      {
          return Array;
      }
      int __fastcall GetHigh()
      {
          return Count - 1;
      }

    private:
      T* Array;
      long Count;
    };

    template<class T>
    OpenArray<T>& __fastcall
    OpenArray<T>::operator =(const OpenArray& rhs)
    {
      if (this != &rhs)
      {
        delete[] Array;
        Array = new T[Count = rhs.Count];
        for (int i = 0; i < Count; i++)
          Array[i] = rhs.Array[i];
      }
      return *this;
    }

  // Used with OPENARRAY macro (immediately following this template declaration)
#pragma option push -w-par
   template <unsigned COUNT> struct OpenArrayCountHlpr
   {
       char c[COUNT];
   };

   template <typename T> class OpenArrayCounter
   {
   public:
     static OpenArrayCountHlpr<1> Count(T arg0);
     static OpenArrayCountHlpr<2> Count(T arg0,T arg1);
     static OpenArrayCountHlpr<3> Count(T arg0,T arg1,T arg2);
     static OpenArrayCountHlpr<4> Count(T arg0,T arg1,T arg2,T arg3);
     static OpenArrayCountHlpr<5> Count(T arg0,T arg1,T arg2,T arg3,T arg4);
     static OpenArrayCountHlpr<6> Count(T arg0,T arg1,T arg2,T arg3,T arg4, T arg5);
     static OpenArrayCountHlpr<7> Count(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5,
                   T arg6);
     static OpenArrayCountHlpr<8> Count(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5,
                   T arg6, T arg7);
     static OpenArrayCountHlpr<9> Count(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5,
                   T arg6, T arg7, T arg8);
     static OpenArrayCountHlpr<10> Count(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5,
                   T arg6, T arg7, T arg8, T arg9);
     static OpenArrayCountHlpr<11> Count(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5,
                   T arg6, T arg7, T arg8, T arg9, T arg10);
     static OpenArrayCountHlpr<12> Count(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5,
                   T arg6, T arg7, T arg8, T arg9, T arg10, T arg11);
     static OpenArrayCountHlpr<13> Count(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5,
                   T arg6, T arg7, T arg8, T arg9, T arg10, T arg11, T arg12);
     static OpenArrayCountHlpr<14> Count(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5,
                   T arg6, T arg7, T arg8, T arg9, T arg10, T arg11, T arg12, T arg13);
     static OpenArrayCountHlpr<15> Count(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5,
                   T arg6, T arg7, T arg8, T arg9, T arg10, T arg11, T arg12, T arg13,
                   T arg14);
     static OpenArrayCountHlpr<16> Count(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5,
                   T arg6, T arg7, T arg8, T arg9, T arg10, T arg11, T arg12, T arg13,
                   T arg14, T arg15);
     static OpenArrayCountHlpr<17> Count(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5,
                   T arg6, T arg7, T arg8, T arg9, T arg10, T arg11, T arg12, T arg13,
                   T arg14, T arg15, T arg16);
     static OpenArrayCountHlpr<18> Count(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5,
                   T arg6, T arg7, T arg8, T arg9, T arg10, T arg11, T arg12, T arg13,
                   T arg14, T arg15, T arg16, T arg17);
     static OpenArrayCountHlpr<19> Count(T arg0, T arg1, T arg2, T arg3, T arg4, T arg5,
                   T arg6, T arg7, T arg8, T arg9, T arg10, T arg11, T arg12, T arg13,
                   T arg14, T arg15, T arg16, T arg17, T arg18);
   };

#pragma option pop

  // OPENARRAY: construct an OpenArray<type> on the fly
  #define OPENARRAY(type, values) \
    System::OpenArray< type>values, sizeof(System::OpenArrayCounter< type>::Count values)-1

  // ARRAYOFCONST: construct an OpenArray<TVarRec> on the fly
  #define ARRAYOFCONST(values) \
   System::OpenArray<System::TVarRec>values, sizeof(System::OpenArrayCounter<System::TVarRec>::Count values)-1

#if !defined(ARRAYSIZE)
  // NOTE: Latest WINNT.H defines an ARRAYSIZE macro that is a little more
  //       slick in that it uses a template to ensure that the
  //       parameter to ARRAYSIZE is indeed an array - not a pointer.
  #define ARRAYSIZE(a) (sizeof(a)/sizeof(a[0]))
#endif

  // EXISTINGARRAY: pass an existing array where an open array is expected
  #define EXISTINGARRAY(a) (a), ((sizeof(a)/sizeof(a[0]))-1)

  // SLICE: pass part of an existing array where an open array is expected
  #define SLICE(a, n) (a), (n - 1)
}

#pragma option pop

#endif
