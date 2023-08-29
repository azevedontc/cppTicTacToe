// -----------------------------------------------------------------------------------
// SYSDYN.H: C++ Encapsulation of Delphi Dynamic Array type
//
// $Rev: 108287 $
//
// Copyright(c) 1995-2011 Embarcadero Technologies, Inc.
// -----------------------------------------------------------------------------------
#if !defined(SYSDYN_H)
#define SYSDYN_H

#if !defined(SystemHPP)
#error Do not include this file directly.  Include 'System.hpp'.
#endif

#if !defined(SYSMAC_H)
#include <sysmac.h>
#endif

#if !defined(SystemHPP)
#include <system.hpp>
#endif

#include <stdlib.h>  // malloc, free

#if defined(__clang__) && !defined(NO_SYSDYN_HAS_CXX11) && !defined(__BCC32_AUDITS__)
# define SYSDYN_HAS_CXX11
#endif

#if defined(SYSDYN_HAS_CXX11)
# include <initializer_list> // std::initializer_list
# include <functional>       // std::forward
#endif /* defined(SYSDYN_HAS_CXX11) */

#if !defined(NO_SYSDYN_ITERATOR)
#include <iterator>           // custom iterator support
#if defined(SYSDYN_HAS_CXX11)
#include <type_traits>        // std::conditional
#endif // SYSDYN_HAS_CXX11

#if defined(DEBUG) || defined(_DEBUG)
#include <cassert>
#endif
#endif // NO_SYSDYN_ITERATOR

namespace System
{
#if !defined(__clang__) || (defined(_WIN32) && !defined(_WIN64))
  // System::__linkproc__ __fastcall DynArrayRelease(void *)
  extern "C" void __fastcall _System__DynArrayRelease();
  // System::__linkproc__ __fastcall DynArrayAddRef(void *)
  extern "C" void __fastcall _System__DynArrayAddRef();
#else
  void            _DynArrayAddRef(void*);
  int             _DynArrayRelease(void*);
#endif

  // NOTE: Using here something like "typedef NativeInt DynArrInt;" will break
  //       user code for iOS or Android like:
  //         DynamicArray<int> myArray;
  //         myArray.set_length(10);
  //       There would be an implicit conversion from int to NativeInt, if
  //       NativeInt's constructor wasn't declared with explicit.
#ifdef _WIN64
  typedef __int64 DynArrInt;
#elif defined(__aarch64__) || defined(__amd64__) || defined(__x86_64__)
  typedef long    DynArrInt;
#else
  typedef int     DynArrInt;
#endif

  class DynArrayException
  {};

  /////////////////////////////////////////////////////////////////////////////
  // Exception thrown when 'out-of-range' of an DynamicArray
  /////////////////////////////////////////////////////////////////////////////
  class DynArrayOutOfRange : public DynArrayException
  {
  public:
    DynArrayOutOfRange(DynArrInt index, DynArrInt count) : m_Index(index),
                                                           m_Count(count)
    {}

    DynArrInt m_Index;
    DynArrInt m_Count;
  };

  /////////////////////////////////////////////////////////////////////////////
  // Exceptions thrown when 'accessing a Null' DynamicArray
  /////////////////////////////////////////////////////////////////////////////
  class DynArrayNullData : public DynArrayException
  {};


  template <class T> class RTL_DELPHIRETURN DynamicArray;

  /////////////////////////////////////////////////////////////////////////////
  // NOTE: The following two template functions are used to determine the number of
  //       dimensions in a dynamic array. This approach relies on the fact that the
  //       resolution mechanism will use the first version of 'GetDimensions' as long
  //       as we're dealing with a DynamicArray Of DynamicArray.
  /////////////////////////////////////////////////////////////////////////////
  template <class T> inline DynArrInt
  GetDimensions(const DynamicArray<T>& t) { return t.DimCount();}

  template <class T> inline DynArrInt
  GetDimensions(const T&) { return 0;}

  // Keep in sync with TDynArrayRec in System
  #pragma pack(push,1)
  struct TDynArrayRec
  {
  public:
#if defined(__clang__) && (__POINTER_WIDTH__ == 64)
    int _Padding;
#endif /* X64 */
    int RefCnt;
    DynArrInt Length;
  };
  #pragma pack(pop)
  typedef TDynArrayRec *PDynArrayRec;


  /////////////////////////////////////////////////////////////////////////////
  // DynamicArray
  // ============
  // Template providing Delphi style Dynamic Array support in C++
  /////////////////////////////////////////////////////////////////////////////
  template<class T> class RTL_DELPHIRETURN DynamicArray
  {
  public:
    typedef       T           value_type;
    typedef       value_type& reference;
    typedef       value_type* pointer;
    typedef const value_type* const_pointer;
    typedef const value_type& const_reference;
    typedef       DynArrInt   size_type;

    DynamicArray();
#if defined(SYSDYN_HAS_CXX11)
    DynamicArray(std::initializer_list<T> il);
    template <class... Types>
    DynamicArray(const T &t, Types && ...values);
#else
    DynamicArray(const T &t0,  const T &t1);
    DynamicArray(const T &t0,  const T &t1,  const T &t2);
    DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3);
    DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                 const T &t4);
    DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                 const T &t4,  const T &t5);
    DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                 const T &t4,  const T &t5,  const T &t6);
    DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                 const T &t4,  const T &t5,  const T &t6,  const T &t7);
    DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                 const T &t4,  const T &t5,  const T &t6,  const T &t7,
                 const T &t8);
    DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                 const T &t4,  const T &t5,  const T &t6,  const T &t7,
                 const T &t8,  const T &t9);
    DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                 const T &t4,  const T &t5,  const T &t6,  const T &t7,
                 const T &t8,  const T &t9,  const T &t10);
    DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                 const T &t4,  const T &t5,  const T &t6,  const T &t7,
                 const T &t8,  const T &t9,  const T &t10, const T &t11);
    DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                 const T &t4,  const T &t5,  const T &t6,  const T &t7,
                 const T &t8,  const T &t9,  const T &t10, const T &t11,
                 const T &t12);
    DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                 const T &t4,  const T &t5,  const T &t6,  const T &t7,
                 const T &t8,  const T &t9,  const T &t10, const T &t11,
                 const T &t12, const T &t13);
    DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                 const T &t4,  const T &t5,  const T &t6,  const T &t7,
                 const T &t8,  const T &t9,  const T &t10, const T &t11,
                 const T &t12, const T &t13, const T &t14);
    DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                 const T &t4,  const T &t5,  const T &t6,  const T &t7,
                 const T &t8,  const T &t9,  const T &t10, const T &t11,
                 const T &t12, const T &t13, const T &t14, const T &t15);
    DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                 const T &t4,  const T &t5,  const T &t6,  const T &t7,
                 const T &t8,  const T &t9,  const T &t10, const T &t11,
                 const T &t12, const T &t13, const T &t14, const T &t15,
                 const T &t16);
    DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                 const T &t4,  const T &t5,  const T &t6,  const T &t7,
                 const T &t8,  const T &t9,  const T &t10, const T &t11,
                 const T &t12, const T &t13, const T &t14, const T &t15,
                 const T &t16, const T &t17);
    DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                 const T &t4,  const T &t5,  const T &t6,  const T &t7,
                 const T &t8,  const T &t9,  const T &t10, const T &t11,
                 const T &t12, const T &t13, const T &t14, const T &t15,
                 const T &t16, const T &t17, const T &t18);
#endif /* defined(SYSDYN_HAS_CXX11) */

    template <size_t SIZE>
    DynamicArray(T(&array)[SIZE]);
#if defined(__clang__)
    ~DynamicArray() noexcept(false);
#else
    ~DynamicArray();
#endif

    // Construct from another DynArray
    DynamicArray(const DynamicArray<T>& src);

    // Assign data from another DynArray
    DynamicArray& operator=(const DynamicArray<T>& src);

    // Subscript operator to access data
    T& operator[](DynArrInt index);
    const T& operator[](DynArrInt index) const;

    // Comparison (NOTE: only pointer is compared)
    bool operator == (const DynamicArray<T> &other) const;

    // Make copy of data (non-refcounted)
    DynamicArray<T> Copy() const;
    void            Copy(DynamicArray<T> &dst) const;
    DynamicArray<T> CopyRange(DynArrInt startIndex, DynArrInt count) const;
    void            CopyRange(DynamicArray<T> &dst, DynArrInt startIndex,
                                                    DynArrInt count) const;

    // High and low bounds of DynArray
    DynArrInt       get_high() const;
    DynArrInt       get_low() const { return 0; }

    // Set/get length of DynArray
    DynArrInt       get_length() const;
    void            set_length(DynArrInt l);

    int             get_refCount() const;

    // std::vector-like members
    T&              at(DynArrInt index)        { return (*this)[index]; }
    const T&        at(DynArrInt index) const  { return (*this)[index]; }
    T&              back()                     { return (*this)[get_high()]; }
    const T&        back()  const              { return (*this)[get_high()]; }
    T*              data()                     { return Data; }
    const T*        data()  const              { return Data; }
    bool            empty() const              { return !get_length(); }
    T&              front()                    { return *data(); }
    const T&        front() const              { return *data(); }
    DynArrInt       size() const               { return get_length(); }

    // Properties
    __property DynArrInt Length = {read=get_length, write=set_length};
    __property DynArrInt High   = {read=get_high};
    __property DynArrInt Low    = {read=get_low};

    __property int RefCount     = {read=get_refCount};

    // Returns number of dimensions of dynamic array
    // NOTE: Used with 'GetDimensions' template functions above.
    //       If T happens to be another DynamicArray, the compiler
    //       resolves the call to the first version of GetDimensions.
    //       Otherwise, it defaults to the second version.
    //
    static DynArrInt DimCount()
    {
      return 1 + GetDimensions(*((T*)(0)));
    }

#if !defined(NO_SYSDYN_ITERATOR)
  #if defined(SYSDYN_HAS_CXX11)
    template<bool IS_CONST = false>
    class iteratorT : public std::iterator<std::random_access_iterator_tag, T> {
      typedef DynamicArray<T>::iteratorT<IS_CONST>                          IterType;
      typedef typename  std::conditional<IS_CONST, const T&, T&>::type      ValueRefType;
      typedef typename  std::conditional<IS_CONST, const T*, T*>::type      ValuePtrType;
      typedef typename  std::conditional<IS_CONST, const DynamicArray<T>*,
                                                   DynamicArray<T>*>::type  DynArrayPtrType;
  #else
    class iterator : public std::iterator<std::random_access_iterator_tag, T> {
      typedef iterator            IterType;
      typedef T&                  ValueRefType;
      typedef T*                  ValuePtrType;
      typedef DynamicArray<T>*    DynArrayPtrType;
  #endif

      DynArrayPtrType      Array;
      ptrdiff_t            Offset;
  #if defined(DEBUG) || defined(_DEBUG)
      size_t InitialSize;
      void CheckInvalid() const {
        assert(InitialSize == Array->Length && "Iterator is invalid !");
      }
      #define DYNAMIC_ARRAY_CHECK CheckInvalid()
  #else
      #define DYNAMIC_ARRAY_CHECK
  #endif
    public:
  #if defined(SYSDYN_HAS_CXX11)
      iteratorT() : Array(0), Offset(0) {
    #if defined(DEBUG) || defined(_DEBUG)
        InitialSize = 0;
    #endif
      }

      iteratorT(DynArrayPtrType array, ptrdiff_t offset) : Array(array), Offset(offset) {
    #if defined(DEBUG) || defined(_DEBUG)
        InitialSize = array->Length;
    #endif
      }
  #else
      iterator() : Array(0), Offset(0) {
    #if defined(DEBUG) || defined(_DEBUG)
        InitialSize = 0;
    #endif
      }

      iterator(DynArrayPtrType array, ptrdiff_t offset) : Array(array), Offset(offset) {
    #if defined(DEBUG) || defined(_DEBUG)
        InitialSize = array->Length;
    #endif
      }
  #endif

  #if defined(SYSDYN_HAS_CXX11)
      iteratorT(const IterType &other)          = default;
      iteratorT(IterType &&other)               = default;
      ~iteratorT()                              = default;
      IterType& operator=(const IterType &rhs)  = default;
      IterType& operator=(IterType &&rhs)       = default;
  #endif

      bool operator==(const IterType &rhs) const {
        DYNAMIC_ARRAY_CHECK;
        return Array == rhs.Array && Offset == rhs.Offset;
      }
      bool operator!=(const IterType &rhs) const {
        DYNAMIC_ARRAY_CHECK;
        return !operator==(rhs);
      }
      IterType& operator+=(const ptrdiff_t &offset) {
        DYNAMIC_ARRAY_CHECK;
        Offset += offset;
        return (*this);
      }
      IterType& operator-=(const ptrdiff_t &offset) {
        DYNAMIC_ARRAY_CHECK;
        Offset -= offset;
        return (*this);
      }
      IterType& operator++() {
        DYNAMIC_ARRAY_CHECK;
        Offset++;
        return (*this);
      }
      IterType& operator--() {
        DYNAMIC_ARRAY_CHECK;
        Offset--;
        return (*this);
      }
      IterType operator++(int p) {
        DYNAMIC_ARRAY_CHECK;
        (void)p;
        IterType tmp(*this);
        ++(*this);
        return tmp;
      }
      IterType operator--(int p) {
        DYNAMIC_ARRAY_CHECK;
        IterType tmp(*this);
        --(*this);
        return tmp;
      }
      IterType operator+(const ptrdiff_t &offset) const  {
        DYNAMIC_ARRAY_CHECK;
        IterType tmp(*this);
        tmp.Offset += offset;
        return tmp;
      }
      IterType operator-(const ptrdiff_t &offset) const {
        DYNAMIC_ARRAY_CHECK;
        IterType tmp(*this);
        tmp.Offset -= offset;
        return tmp;
      }
      ptrdiff_t operator-(const IterType &rhs) const {
        DYNAMIC_ARRAY_CHECK;
        return Offset - rhs.Offset;
      }
      ValueRefType operator*() {
        DYNAMIC_ARRAY_CHECK;
        return (*Array)[Offset];
      }
      ValuePtrType operator->() {
        DYNAMIC_ARRAY_CHECK;
        return &((*Array)[Offset]);
      }
      ValueRefType operator[](ptrdiff_t offset) {
        DYNAMIC_ARRAY_CHECK;
        return (*Array)[Offset + offset];
      }
      bool operator<(const IterType &rhs) const {
        DYNAMIC_ARRAY_CHECK;
        return Offset < rhs.Offset;
      }
      bool operator>=(const IterType &rhs) const {
        DYNAMIC_ARRAY_CHECK;
        return !operator<(rhs);
      }
      bool operator>(const IterType &rhs) const {
        DYNAMIC_ARRAY_CHECK;
        return Offset > rhs.Offset;
      }
      bool operator<=(const IterType &rhs) const {
        DYNAMIC_ARRAY_CHECK;
        return !operator>(rhs);
      }

  #if defined(SYSDYN_HAS_CXX11)
      friend void swap(IterType &lhs, IterType &rhs);
      friend IterType begin(DynArrayPtrType &array);
      friend IterType end(DynArrayPtrType &array);
  #endif
    };

  #undef DYNAMIC_ARRAY_CHECK


    // Iterators
  #if !defined(SYSDYN_HAS_CXX11)
    iterator begin() {
      return iterator(this, 0);
    }
    iterator end() {
      return iterator(this, this->Length);
    }

    typedef std::reverse_iterator<iterator> reverse_iterator;
    reverse_iterator rbegin() {
      return reverse_iterator(end());
    }
    reverse_iterator rend() {
      return reverse_iterator(begin());
    }
  #else
    typedef iteratorT<false> iterator;
    iterator begin() {
      return iterator(this, 0);
    }
    iterator end() {
      return iterator(this, this->Length);
    }

    typedef std::reverse_iterator<iterator> reverse_iterator;
    reverse_iterator rbegin() {
      return reverse_iterator(end());
    }
    reverse_iterator rend() {
      return reverse_iterator(begin());
    }

    typedef iteratorT<true> const_iterator;
    const_iterator begin() const {
      return const_iterator(this, 0);
    }
    const_iterator end() const {
      return const_iterator(this, this->Length);
    }
    const_iterator cbegin() const {
      return const_iterator(this, 0);
    }
    const_iterator cend() const {
      return const_iterator(this, this->Length);
    }

    typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
    const_reverse_iterator rbegin() const {
      return const_reverse_iterator(end());
    }
    const_reverse_iterator rend() const {
      return const_reverse_iterator(begin());
    }
    const_reverse_iterator crbegin() const {
      return const_reverse_iterator(end());
    }
    const_reverse_iterator crend() const {
      return const_reverse_iterator(begin());
    }
  #endif
#endif

  protected:
    void            IncRefCount();
    void            DecRefCount();
    static T*       AllocData(DynArrInt count);
    void            SetData(T* t);
    void            FreeData();

  private:
    T*              Data;
    TDynArrayRec& GetRec()
    { return reinterpret_cast<TDynArrayRec*>(Data)[-1]; }
    const TDynArrayRec& GetRec() const
    { return reinterpret_cast<const TDynArrayRec*>(Data)[-1]; }
#if defined(SYSDYN_HAS_CXX11)
    void PushBackElement(DynArrInt index, const T &t);
    template <class... Types>
    void PushBackElement(DynArrInt index, const T &t, Types && ...values);
#endif /* defined(SYSDYN_HAS_CXX11) */
  };

} // namespace System

#if !defined(_PLAT_IOS)
// Operator used in placement syntax
//
inline void* operator new(size_t size, char *p)
{
  return p;
}
#endif

namespace System {
  template <class T>
  DynamicArray<T>::DynamicArray() : Data(0)
  {}

#if defined(SYSDYN_HAS_CXX11)
  template <class T>
  DynamicArray<T>::DynamicArray(std::initializer_list<T> il) : Data(0)
  {
    set_length(il.size());
    DynArrInt i = 0;
    for (auto &t: il)
      Data[i++] = t;
  }

  template <class T>
  template <class... Types>
  DynamicArray<T>::DynamicArray(const T &t, Types && ...values) : Data(0)
  {
    set_length(sizeof...(values)+1);
    PushBackElement(0, t, std::forward<Types>(values)...);
  }
#else
  template <class T>
  DynamicArray<T>::DynamicArray(const T &t0,  const T &t1) : Data(0)
  {
    set_length(2);
    Data[0] = t0;   Data[1] = t1;
  }

  template <class T>
  DynamicArray<T>::DynamicArray(const T &t0,  const T &t1,  const T &t2) : Data(0)
  {
    set_length(3);
    Data[0] = t0;   Data[1] = t1;   Data[2] = t2;
  }

  template <class T>
  DynamicArray<T>::DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3) : Data(0)
  {
    set_length(4);
    Data[0] = t0;   Data[1] = t1;   Data[2] = t2;   Data[3] = t3;
  }

  template <class T>
  DynamicArray<T>::DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                                const T &t4) : Data(0)
  {
    set_length(5);
    Data[0] = t0;   Data[1] = t1;   Data[2] = t2;   Data[3] = t3;
    Data[4] = t4;
  }

  template <class T>
  DynamicArray<T>::DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                                const T &t4,  const T &t5) : Data(0)
  {
    set_length(6);
    Data[0] = t0;   Data[1] = t1;   Data[2] = t2;   Data[3] = t3;
    Data[4] = t4;   Data[5] = t5;
  }

  template <class T>
  DynamicArray<T>::DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                                const T &t4,  const T &t5,  const T &t6) : Data(0)
  {
    set_length(7);
    Data[0] = t0;   Data[1] = t1;   Data[2] = t2;   Data[3] = t3;
    Data[4] = t4;   Data[5] = t5;   Data[6] = t6;
  }

  template <class T>
  DynamicArray<T>::DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                                const T &t4,  const T &t5,  const T &t6,  const T &t7) : Data(0)
  {
    set_length(8);
    Data[0] = t0;   Data[1] = t1;   Data[2] = t2;   Data[3] = t3;
    Data[4] = t4;   Data[5] = t5;   Data[6] = t6;   Data[7] = t7;
  }

  template <class T>
  DynamicArray<T>::DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                                const T &t4,  const T &t5,  const T &t6,  const T &t7,
                                const T &t8) : Data(0)
  {
    set_length(9);
    Data[0] = t0;   Data[1] = t1;   Data[2] = t2;   Data[3] = t3;
    Data[4] = t4;   Data[5] = t5;   Data[6] = t6;   Data[7] = t7;
    Data[8] = t8;
  }

  template <class T>
  DynamicArray<T>::DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                                const T &t4,  const T &t5,  const T &t6,  const T &t7,
                                const T &t8,  const T &t9) : Data(0)
  {
    set_length(10);
    Data[0] = t0;   Data[1] = t1;   Data[2] = t2;   Data[3] = t3;
    Data[4] = t4;   Data[5] = t5;   Data[6] = t6;   Data[7] = t7;
    Data[8] = t8;   Data[9] = t9;
  }

  template <class T>
  DynamicArray<T>::DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                                const T &t4,  const T &t5,  const T &t6,  const T &t7,
                                const T &t8,  const T &t9,  const T &t10) : Data(0)
  {
    set_length(11);
    Data[0] = t0;   Data[1] = t1;   Data[2] = t2;   Data[3] = t3;
    Data[4] = t4;   Data[5] = t5;   Data[6] = t6;   Data[7] = t7;
    Data[8] = t8;   Data[9] = t9;   Data[10] = t10;
  }

  template <class T>
  DynamicArray<T>::DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                                const T &t4,  const T &t5,  const T &t6,  const T &t7,
                                const T &t8,  const T &t9,  const T &t10, const T &t11) : Data(0)
  {
    set_length(12);
    Data[0] = t0;   Data[1] = t1;   Data[2] = t2;   Data[3] = t3;
    Data[4] = t4;   Data[5] = t5;   Data[6] = t6;   Data[7] = t7;
    Data[8] = t8;   Data[9] = t9;   Data[10] = t10; Data[11] = t11;
  }

  template <class T>
  DynamicArray<T>::DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                                const T &t4,  const T &t5,  const T &t6,  const T &t7,
                                const T &t8,  const T &t9,  const T &t10, const T &t11,
                                const T &t12) : Data(0)
  {
    set_length(13);
    Data[0] = t0;   Data[1] = t1;   Data[2] = t2;   Data[3] = t3;
    Data[4] = t4;   Data[5] = t5;   Data[6] = t6;   Data[7] = t7;
    Data[8] = t8;   Data[9] = t9;   Data[10] = t10; Data[11] = t11;
    Data[12] = t12;
  }

  template <class T>
  DynamicArray<T>::DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                                const T &t4,  const T &t5,  const T &t6,  const T &t7,
                                const T &t8,  const T &t9,  const T &t10, const T &t11,
                                const T &t12, const T &t13) : Data(0)
  {
    set_length(14);
    Data[0] = t0;   Data[1] = t1;   Data[2] = t2;   Data[3] = t3;
    Data[4] = t4;   Data[5] = t5;   Data[6] = t6;   Data[7] = t7;
    Data[8] = t8;   Data[9] = t9;   Data[10] = t10; Data[11] = t11;
    Data[12] = t12; Data[13] = t13;
  }

  template <class T>
  DynamicArray<T>::DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                                const T &t4,  const T &t5,  const T &t6,  const T &t7,
                                const T &t8,  const T &t9,  const T &t10, const T &t11,
                                const T &t12, const T &t13, const T &t14) : Data(0)
  {
    set_length(15);
    Data[0] = t0;   Data[1] = t1;   Data[2] = t2;   Data[3] = t3;
    Data[4] = t4;   Data[5] = t5;   Data[6] = t6;   Data[7] = t7;
    Data[8] = t8;   Data[9] = t9;   Data[10] = t10; Data[11] = t11;
    Data[12] = t12; Data[13] = t13; Data[14] = t14;
  }

  template <class T>
  DynamicArray<T>::DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                                const T &t4,  const T &t5,  const T &t6,  const T &t7,
                                const T &t8,  const T &t9,  const T &t10, const T &t11,
                                const T &t12, const T &t13, const T &t14, const T &t15) : Data(0)
  {
    set_length(16);
    Data[0] = t0;   Data[1] = t1;   Data[2] = t2;   Data[3] = t3;
    Data[4] = t4;   Data[5] = t5;   Data[6] = t6;   Data[7] = t7;
    Data[8] = t8;   Data[9] = t9;   Data[10] = t10; Data[11] = t11;
    Data[12] = t12; Data[13] = t13; Data[14] = t14; Data[15] = t15;
  }

  template <class T>
  DynamicArray<T>::DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                                const T &t4,  const T &t5,  const T &t6,  const T &t7,
                                const T &t8,  const T &t9,  const T &t10, const T &t11,
                                const T &t12, const T &t13, const T &t14, const T &t15,
                                const T &t16) : Data(0)
  {
    set_length(17);
    Data[0] = t0;   Data[1] = t1;   Data[2] = t2;   Data[3] = t3;
    Data[4] = t4;   Data[5] = t5;   Data[6] = t6;   Data[7] = t7;
    Data[8] = t8;   Data[9] = t9;   Data[10] = t10; Data[11] = t11;
    Data[12] = t12; Data[13] = t13; Data[14] = t14; Data[15] = t15;
    Data[16] = t16;
  }

  template <class T>
  DynamicArray<T>::DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                                const T &t4,  const T &t5,  const T &t6,  const T &t7,
                                const T &t8,  const T &t9,  const T &t10, const T &t11,
                                const T &t12, const T &t13, const T &t14, const T &t15,
                                const T &t16, const T &t17) : Data(0)
  {
    set_length(18);
    Data[0] = t0;   Data[1] = t1;   Data[2] = t2;   Data[3] = t3;
    Data[4] = t4;   Data[5] = t5;   Data[6] = t6;   Data[7] = t7;
    Data[8] = t8;   Data[9] = t9;   Data[10] = t10; Data[11] = t11;
    Data[12] = t12; Data[13] = t13; Data[14] = t14; Data[15] = t15;
    Data[16] = t16; Data[17] = t17;
  }

  template <class T>
  DynamicArray<T>::DynamicArray(const T &t0,  const T &t1,  const T &t2,  const T &t3,
                                const T &t4,  const T &t5,  const T &t6,  const T &t7,
                                const T &t8,  const T &t9,  const T &t10, const T &t11,
                                const T &t12, const T &t13, const T &t14, const T &t15,
                                const T &t16, const T &t17, const T &t18) : Data(0)
  {
    set_length(19);
    Data[0] = t0;   Data[1] = t1;   Data[2] = t2;   Data[3] = t3;
    Data[4] = t4;   Data[5] = t5;   Data[6] = t6;   Data[7] = t7;
    Data[8] = t8;   Data[9] = t9;   Data[10] = t10; Data[11] = t11;
    Data[12] = t12; Data[13] = t13; Data[14] = t14; Data[15] = t15;
    Data[16] = t16; Data[17] = t17; Data[18] = t18;
  }
#endif /* defined(SYSDYN_HAS_CXX11) */

  template <class T>
  template <size_t SIZE>
  DynamicArray<T>::DynamicArray(T(&array)[SIZE]) : Data(0)
  {
    set_length(SIZE);
    for (size_t i = 0; i < SIZE; i++)
      Data[i] = array[i];
  }

  template <class T>
  DynamicArray<T>::~DynamicArray()
  {
#ifdef __clang__
    if (_init_inst) {
      static DynamicArray<T> __force_inst1, __force_inst2 = __force_inst1;
    }
#endif
    DecRefCount();
    Data = 0;
  }

  template <class T>
  DynamicArray<T>::DynamicArray(const DynamicArray<T>& src) : Data(src.Data)
  {
    IncRefCount();
  }

  template <class T> DynamicArray<T>&
  DynamicArray<T>::operator =(const DynamicArray<T>& src)
  {
    if (&src != this)
    {
      DecRefCount();
      Data = src.Data;
      IncRefCount();
    }
    return *this;
  }

  template <class T> T&
  DynamicArray<T>::operator[](DynArrInt index)
  {
    if (index < 0 || index >= this->Length)
      throw DynArrayOutOfRange(index, this->Length);
    if (!Data)
      throw DynArrayNullData();

    return *(Data + index);
  }

  template <class T> const T&
  DynamicArray<T>::operator[](DynArrInt index) const
  {
    if (index < 0 || index >= this->Length)
      throw DynArrayOutOfRange(index, this->Length);
    if (!Data)
      throw DynArrayNullData();

    return *(Data + index);
  }

  template <class T> bool
  DynamicArray<T>::operator == (const DynamicArray<T> &other) const
  {
    return Data == other.Data;
  }

  template <class T> DynamicArray<T>
  DynamicArray<T>::Copy() const
  {
    DynamicArray<T> cpy;
    Copy(cpy);
    return cpy;
  }

  template <class T> void
  DynamicArray<T>::Copy(DynamicArray<T>& dst) const
  {
    // Update length of destination if necessary
    DynArrInt l = (*this).Length;
    if (dst.Length != l)
      dst.Length = l;

    // Copy data over
    for (DynArrInt i=0; i<l; i++)
      dst[i] = (*this)[i];
  }

  template <class T> DynamicArray<T>
  DynamicArray<T>::CopyRange(DynArrInt startIndex, DynArrInt count) const
  {
    DynamicArray<T> cpy;
    CopyRange(cpy, startIndex, count);
    return cpy;
  }

  template <class T> void
  DynamicArray<T>::CopyRange(DynamicArray<T>& dst, DynArrInt startIndex,
                                                   DynArrInt count) const
  {
    if (dst.Length != count)
      dst.Length = count;

    for (DynArrInt i=0; i<count; i++)
      dst[i] = (*this)[startIndex+i];
  }

  template <class T> DynArrInt
  DynamicArray<T>::get_high() const
  {
    return get_length()-1;
  }

  template <class T> DynArrInt
  DynamicArray<T>::get_length() const
  {
    return Data ? GetRec().Length : 0;
  }

  template <class T> void
  DynamicArray<T>::set_length(DynArrInt l)
  {
    // Allocate space for new length
    T* p = AllocData(l);

    // Copy data over if necessary
    if (p)
    {
      // Compute length of data to be copied
      DynArrInt copyLen = (*this).Length;
      if (l < copyLen)
        copyLen = l;

      // Copy data
      while (copyLen-- > 0)
        p[copyLen] = (*this)[copyLen];
    }

    // Assign new data...
    SetData(p);
  }

  template <class T> int
  DynamicArray<T>::get_refCount() const
  {
    return Data ? GetRec().RefCnt : 0;
  }

  template <class T> void
  DynamicArray<T>::IncRefCount()
  {
    if (Data)
    {
#if !defined(__clang__) || (defined(_WIN32) && !defined(_WIN64))
      typedef void (__fastcall *_DynArrayAddRef_Proc)(void*);
      (reinterpret_cast<_DynArrayAddRef_Proc>(_System__DynArrayAddRef))(Data);
#else
      _DynArrayAddRef(Data);
#endif
    }
  }

  template <class T> void
  DynamicArray<T>::DecRefCount()
  {
    if (Data)
    {
#if !defined(__clang__) || (defined(_WIN32) && !defined(_WIN64))
      typedef int (__fastcall *_DynArrayRelease_Proc)(void*);
      if ((reinterpret_cast<_DynArrayRelease_Proc>(_System__DynArrayRelease))(Data) == 0)
        FreeData();
#else
      if (_DynArrayRelease(Data) == 0)
        FreeData();
#endif
    }
  }

  template <class T> T*
  DynamicArray<T>::AllocData(DynArrInt count)
  {
    // NOTE: Length of zero results in a null data pointer
    if (count == 0)
      return 0;

    //  NOTE: Don't use new to be compatible with Pascal memory manager
    char *pc = (char*)System::GetMemory(NativeInt(sizeof(T)*count + sizeof(TDynArrayRec)));

    // Initialize refcount + length
    reinterpret_cast<TDynArrayRec*>(pc)->RefCnt = 1;
    reinterpret_cast<TDynArrayRec*>(pc)->Length = count;

    pc += sizeof(TDynArrayRec);
    T *pt = reinterpret_cast<T*>(pc);
    T *p  = reinterpret_cast<T*>(pc);

    // Invoke constructor for each member of array
    while (count-- > 0)
    {
      new  (pc) T;
      pc = reinterpret_cast<char*>(++p);
    }

    // Return pointer
    return pt;
  }

  template <class T> void
  DynamicArray<T>::SetData(T* t)
  {
    if (Data != t)
    {
      DecRefCount();
      Data = t;
    }
  }

  template <class T> void
  DynamicArray<T>::FreeData()
  {
    if (Data)
    {
      // Invoke destructor on each element
      T*  p = Data;
      DynArrInt l = (*this).Length;

      for (; l-- > 0; p++) {
        if (p)    /* Not necessary but shuts off compiler warning */
          p->~T();
      }

      char* pc = reinterpret_cast<char*>(Data);
      pc -= sizeof(TDynArrayRec);

      // Free chunk of memory
      // NOTE: Don't use delete []p_i to be compatible with Delphi's memory manager
      System::FreeMemory(pc);

      Data = 0;
    }
  }

#if defined(SYSDYN_HAS_CXX11)
  template <class T> void
  DynamicArray<T>::PushBackElement(DynArrInt index, const T &t)
  {
    Data[index] = t;
  }

  template <class T> template <class... Types> void
  DynamicArray<T>::PushBackElement(DynArrInt index, const T &t, Types && ...values)
  {
    Data[index] = t;
    PushBackElement(index + 1, std::forward<Types>(values)...);
  }
#endif /* defined(SYSDYN_HAS_CXX11) */

  // Provide definitions for the Dynamic arrays defined
  // in Delphi's TYPES.PAS as well as generic array names
  // NOTE: The generic must preceed the names from TYPES.PAS
  //       as C++ RTTI picks the first one
#if defined(GENERIC_ARRAY_NAMES)
  typedef DynamicArray<int>             ArrayOfint;
  typedef DynamicArray<AnsiString>      ArrayOfstring;
  typedef DynamicArray<WideString>      ArrayOfwidestring;
  typedef DynamicArray<Byte>            ArrayOfbyte;
  typedef DynamicArray<short>           ArrayOfshort;
  typedef DynamicArray<long>            ArrayOflong;
  typedef DynamicArray<bool>            ArrayOfboolean;
  typedef DynamicArray<double>          ArrayOfdouble;
#endif

  typedef DynamicArray<Integer>         TIntegerDynArray;
  typedef DynamicArray<Cardinal>        TCardinalDynArray;
  typedef DynamicArray<Word>            TWordDynArray;
  typedef DynamicArray<Smallint>        TSmallIntDynArray;
  typedef DynamicArray<Byte>            TByteDynArray;
  typedef DynamicArray<Int8>            TInt8DynArray;
  typedef DynamicArray<Int8>            TShortIntDynArray _DEPRECATED_ATTRIBUTE0;
  typedef DynamicArray<__int64>         TInt64DynArray;
  typedef DynamicArray<unsigned __int64> TUInt64DynArray;
  // NOTE: The following is not quite correct given that
  //       LongWord is defined as 'unsigned long' in SYSMAC.H
  // However, 'DynamicArray<unsigned>' is what the Pascal
  // compiler is emitting in .HPPs for TLongWordDynArray
  // Please update this if the .HPPs change.
  typedef DynamicArray<unsigned>        TLongWordDynArray;
  typedef DynamicArray<Single>          TSingleDynArray;
  typedef DynamicArray<Double>          TDoubleDynArray;
  typedef DynamicArray<Boolean>         TBooleanDynArray;
  typedef DynamicArray<String>          TStringDynArray;
  typedef DynamicArray<WideString>      TWideStringDynArray;

  // Low overhead (include-wise) RAII wrapper for newed objects.
  // NOTE: This is mainly used by WebServices code generation currently
  template <typename T>
  class sPointer {
    T* ptr;
  public:
    sPointer()     : ptr(0) {}
    sPointer(T* p) : ptr(p) {}
   ~sPointer()              { delete ptr; }
    T* operator& ()         { return ptr; }
    T* operator->()         { return ptr; }
  private:
    sPointer(const sPointer<T>&);
    const sPointer<T>& operator=(const sPointer<T>&);
  };
} // namespace System

#if defined(SYSDYN_HAS_CXX11)
# undef SYSDYN_HAS_CXX11
#endif /* defined(SYSDYN_HAS_CXX11) */


#endif
