// ----------------------------------------------------------------------------
// SYSITERATOR.H: Iterator types for clang-based compilers
//
// $Rev: 95397 $
//
// Copyright(c) 1995-2015 Embarcadero Technologies, Inc.
// ----------------------------------------------------------------------------
#if !defined(SYSITERATOR_H)
#define SYSITERATOR_H

#if !defined(SystemHPP)
#error Do not include this file directly. Include 'System.hpp'.
#endif

#if !defined(__cplusplus)
#error sysiterator.h cannot be used in C mode - this header requires C++!
#endif

#if defined(__clang__) && !defined(NO_SYSDYN_ITERATOR)
#include <iterator>


#if defined(_PLAT_IOS) || defined(_PLAT_ANDROID)
#define SYSITERATOR_PTR __unsafe
#else
#define SYSITERATOR_PTR
#endif

namespace System {

/// Iterator for all classes that support GetEnumerator()
template <typename T>
class TEnumerableIterator {
private:
  SYSITERATOR_PTR T *enumerable;
  typedef decltype(enumerable->GetEnumerator()) EnumeratorType;
  EnumeratorType enumerator;
  typedef decltype(enumerator->Current) ValueType;

  bool endReached;
  ptrdiff_t offset;

public:
  // STL Compatibility typedefs
  typedef ValueType value_type;
  typedef ptrdiff_t difference_type;
  typedef ValueType *pointer;
  typedef ValueType &reference;
  typedef std::input_iterator_tag iterator_category;

private:
  void invalidate() {
    enumerable = nullptr;
    enumerator = nullptr;
    endReached = true;
    offset = 0;
  }

  bool isValid() const { return enumerable != nullptr; }

  // No public constructor, only copying and factory methods
  TEnumerableIterator(SYSITERATOR_PTR T *ptr, EnumeratorType _enumerator)
      : enumerable(ptr), offset(0), enumerator(_enumerator) {
    endReached = !enumerator->MoveNext();
  }

  TEnumerableIterator(SYSITERATOR_PTR T *ptr)
      : enumerable(ptr), offset(0), endReached(true), enumerator(nullptr) {}

public:
  static TEnumerableIterator<T> begin(SYSITERATOR_PTR T *ptr) {
    if (ptr) {
      return TEnumerableIterator<T>(ptr, ptr->GetEnumerator());
    } else {
      return TEnumerableIterator<T>(nullptr);
    }
  }

  static TEnumerableIterator<T> end(SYSITERATOR_PTR T *ptr) {
    return TEnumerableIterator<T>(ptr);
  }

  // --- Basic iterator impl
  ~TEnumerableIterator() = default;

  TEnumerableIterator(const TEnumerableIterator<T> &rhs) { *this = rhs; }

  TEnumerableIterator(TEnumerableIterator<T> &&rhs) { *this = rhs; }

  TEnumerableIterator<T> &operator=(const TEnumerableIterator<T> &rhs) {
    if (this != &rhs) {
      enumerable = rhs.enumerable;
      endReached = rhs.endReached;
      offset = rhs.offset;
      enumerator = nullptr;
      // Copying implies creating a new enumerator because they are
      // in a different state. Costly but inevitable
      if (enumerable) {
        if (!rhs.endReached) {
          enumerator = enumerable->GetEnumerator();
          endReached = !enumerator->MoveNext();
          // Restore the same enumerator state offset
          for (ptrdiff_t i = 0; i < offset && !endReached; i++) {
            endReached = !enumerator->MoveNext();
          }
        } else {
          offset = 0;
          enumerator = nullptr;
        }
      }
    }
    return *this;
  }

  TEnumerableIterator<T> &operator=(TEnumerableIterator<T> &&rhs) {
    if (this != &rhs) {
      enumerable = rhs.enumerable;
      enumerator = rhs.enumerator;
      endReached = rhs.endReached;
      offset = rhs.offset;
      rhs.invalidate();
    }
  }

  TEnumerableIterator<T> &operator++() {
    if (enumerator && !endReached) {
      endReached = !enumerator->MoveNext();
      offset++;
    }
    return *this;
  }

  ValueType operator*() const { return enumerator->Current; }

  // --- Input iterator impl.
  TEnumerableIterator<T> operator++(int) {
    TEnumerableIterator<T> ret = *this;
    if (enumerator && !endReached) {
      endReached = !enumerator->MoveNext();
      offset++;
    }
    return ret;
  }

  bool operator==(const TEnumerableIterator<T> &rhs) {
    if (enumerable != rhs.enumerable) return false;
    if (endReached && rhs.endReached) return true;
    if (endReached != rhs.endReached) return false;
    return offset == rhs.offset;
  }

  bool operator!=(const TEnumerableIterator<T> &rhs) {
    return !operator==(rhs);
  }

  friend void swap(TEnumerableIterator<T> &lhs, TEnumerableIterator<T> &rhs);
};

// Iterator for all classes that support integer subscripting via operator[]
// and an integral "Count" property
template <typename T>
class TRandomIterator {

private:
  typedef TRandomIterator<T> IterType;
  typedef T IterableType;
  SYSITERATOR_PTR IterableType *Iterable;
  typedef decltype(Iterable->operator[](0)) ValueType;
  typedef ValueType ElementType;
  
public:
  // STL Compatibility typedefs
  typedef ValueType value_type;
  typedef ptrdiff_t difference_type;
  typedef ValueType *pointer;
  typedef ValueType &reference;
  typedef std::random_access_iterator_tag iterator_category;

private:
  ptrdiff_t Offset;
#if defined(DEBUG) || defined(_DEBUG)
  size_t InitialSize;
#endif
public:
  TRandomIterator()
      : Iterable(nullptr), Offset(0) {
#if defined(DEBUG) || defined(_DEBUG)
    InitialSize = Iterable->Count;
#endif
  }

  TRandomIterator(SYSITERATOR_PTR IterableType *it, ptrdiff_t offset)
      : Iterable(it), Offset(offset) {
#if defined(DEBUG) || defined(_DEBUG)
    InitialSize = Iterable->Count;
#endif
  }

  TRandomIterator(const IterType &other) {
    *this = other;
  }

  TRandomIterator &operator=(const IterType &rhs) {
    if(this != &rhs) {
      Iterable = rhs.Iterable;
      Offset = rhs.Offset;
#if defined(DEBUG) || defined(_DEBUG)
      InitialSize = rhs.InitialSize;
#endif
    }
  }

#if defined(DEBUG) || defined(_DEBUG)
  void CheckInvalid() const {
    assert(InitialSize == Iterable->Count && "Iterator is invalid !");
  }
#define RANDOMACC_IT_CHECKINVALID() CheckInvalid()
#else
#define RANDOMACC_IT_CHECKINVALID() ((void)0)
#endif

  bool operator==(const IterType &rhs) const {
    RANDOMACC_IT_CHECKINVALID();
    return Iterable == rhs.Iterable && Offset == rhs.Offset;
  }

  bool operator!=(const IterType &rhs) const {
    RANDOMACC_IT_CHECKINVALID();
    return !operator==(rhs);
  }

  IterType &operator+=(const ptrdiff_t &offset) {
    RANDOMACC_IT_CHECKINVALID();
    Offset += offset;
    return (*this);
  }

  IterType &operator-=(const ptrdiff_t &offset) {
    RANDOMACC_IT_CHECKINVALID();
    Offset -= offset;
    return (*this);
  }

  IterType &operator++() {
    RANDOMACC_IT_CHECKINVALID();
    Offset++;
    return (*this);
  }

  IterType &operator--() {
    RANDOMACC_IT_CHECKINVALID();
    Offset--;
    return (*this);
  }

  IterType operator++(int p) {
    RANDOMACC_IT_CHECKINVALID();
    IterType tmp(*this);
    Offset++;
    return tmp;
  }

  IterType operator--(int p) {
    RANDOMACC_IT_CHECKINVALID();
    IterType tmp(*this);
    Offset--;
    return tmp;
  }

  IterType operator+(const ptrdiff_t &offset) const {
    RANDOMACC_IT_CHECKINVALID();
    IterType tmp(*this);
    tmp.Offset += offset;
    return tmp;
  }

  IterType operator-(const ptrdiff_t &offset) const {
    RANDOMACC_IT_CHECKINVALID();
    IterType tmp(*this);
    tmp.Offset -= offset;
    return tmp;
  }

  ptrdiff_t operator-(const IterType &last) const {
    RANDOMACC_IT_CHECKINVALID();
    return Offset - last.Offset;
  }

  ElementType operator*() {
    RANDOMACC_IT_CHECKINVALID();
    return Iterable->operator[](Offset);
  }

  ElementType operator[](ptrdiff_t offset) {
    RANDOMACC_IT_CHECKINVALID();
    return Iterable->operator[](Offset + offset);
  }

  bool operator<(const IterType &rhs) const { return Offset < rhs.Offset; }

  bool operator>(const IterType &rhs) const { return Offset > rhs.Offset; }

  bool operator>=(const IterType &rhs) const { return !operator<(rhs); }

  bool operator<=(const IterType &rhs) const { return !operator>(rhs); }

  static IterType begin(SYSITERATOR_PTR T *iterable) {
    return TRandomIterator<T>(iterable, 0);
  }

  static IterType end(SYSITERATOR_PTR T *iterable) {
    return TRandomIterator<T>(iterable, iterable->Count);
  }
};

// Helper SFINAE classes
template <class T>
struct isDictionary {
  struct yes {
    char a[1];
  };
  struct no {
    char a[2];
  };
  template <typename C>
  static yes test(decltype(&C::ContainsKey));
  template <typename C>
  static no test(...);
  enum { value = (sizeof(test<T>(0)) == sizeof(yes)) };
};

template <class T>
struct isSubscriptable {
  struct yes {
    char a[1];
  };
  struct no {
    char a[2];
  };
  template <typename C>
  static yes test(decltype(&C::operator[]));
  template <typename C>
  static no test(...);
  enum { value = (sizeof(test<T>(0)) == sizeof(yes)) };
};

template <class T>
struct isEnumerable {
  struct yes {
    char a[1];
  };
  struct no {
    char a[2];
  };
  template <typename C>
  static yes test(decltype(&C::GetEnumerator));
  template <typename C>
  static no test(...);
  enum { value = (sizeof(test<T>(0)) == sizeof(yes)) };
};

// Using SFINAE and trailing return type we can choose the appropiate
// non-member overload
// a) All subscriptable types will use RandomIterator. Except TDictionary
// b) All Enumerable but not Suscriptable types will use EnumerableIterator
template <typename T>
using isRandom = typename std::enable_if<isSubscriptable<T>::value &&
                                             !isDictionary<T>::value,
                                         TRandomIterator<T>>::type;

template <typename T>
using isReallyEnumerable =
    typename std::enable_if<isDictionary<T>::value ||
                                (isEnumerable<T>::value &&
                                 !isSubscriptable<T>::value),
                            TEnumerableIterator<T>>::type;

template <typename T>
auto begin(SYSITERATOR_PTR T *ptr) -> isRandom<T> {
  return TRandomIterator<T>::begin(ptr);
}

template <typename T>
auto end(SYSITERATOR_PTR T *ptr) -> isRandom<T> {
  return TRandomIterator<T>::end(ptr);
}

template <typename T>
auto begin(SYSITERATOR_PTR T *ptr) -> isReallyEnumerable<T> {
  return TEnumerableIterator<T>::begin(ptr);
}

template <typename T>
auto end(SYSITERATOR_PTR T *ptr) -> isReallyEnumerable<T> {
  return TEnumerableIterator<T>::end(ptr);
}

// Other functions
template <typename T>
void swap(TEnumerableIterator<T> &lhs, TEnumerableIterator<T> &rhs) {
  std::swap(lhs.enumerable, rhs.enumerable);
  std::swap(lhs.enumerator, rhs.enumerator);
  std::swap(lhs.endReached, rhs.endReached);
  std::swap(lhs.offset, rhs.offset);
}

template <typename T>
void swap(TRandomIterator<T> &lhs, TRandomIterator<T> &rhs) {
  std::swap(lhs.Iterable, rhs.Iterable);
  std::swap(lhs.Offset, rhs.Offset);
#if defined(DEBUG) || defined(_DEBUG)
  std::swap(lhs.InitialSize, rhs.InitialSize);
#endif
}

// Special back_insertion_iterator wrapper
template <typename T, typename V>
class TBackInsertIterator
    : public std::iterator<std::output_iterator_tag, void, void, void, void> {
protected:
  SYSITERATOR_PTR T *container;
public:
  typedef T container_type;
  explicit TBackInsertIterator(SYSITERATOR_PTR T *x) : container(x) {}
  TBackInsertIterator<T, V> &operator=(const V &value) {
    container->Add(value);
    return *this;
  }
  TBackInsertIterator<T, V> &operator=(V &&value) {
    container->Add(std::move(value));
    return *this;
  }
  TBackInsertIterator(const TBackInsertIterator<T, V> &other) {
    if (this != &other) {
      container = other.container;
    }
  }
  TBackInsertIterator<T, V> &operator*() { return *this; }
  TBackInsertIterator<T, V> &operator++() { return *this; }
  TBackInsertIterator<T, V> operator++(int) { return *this; }
};

// Special insertion iterator wrapper
template <typename T, typename V>
class TInsertIterator
    : public std::iterator<std::output_iterator_tag, void, void, void, void> {
protected:
  SYSITERATOR_PTR T *container;
  size_t place;

public:
  typedef T container_type;
  explicit TInsertIterator(SYSITERATOR_PTR T *x, size_t p)
      : container(x), place(p) {}
  TInsertIterator<T, V> &operator=(const V &value) {
    container->Insert(place, value);
    return *this;
  }
  TInsertIterator<T, V> &operator=(V &&value) {
    container->Insert(place, std::move(value));
    return *this;
  }
  TInsertIterator(const TInsertIterator<T, V> &other) {
    if (this != &other) {
      container = other.container;
      place = other.place;
    }
  }
  TInsertIterator<T, V> &operator*() { return *this; }
  TInsertIterator<T, V> &operator++() { return *this; }
  TInsertIterator<T, V> operator++(int) { return *this; }
};

// Insertion iterator helper functions
template <typename T>
auto back_inserter(SYSITERATOR_PTR T *container)
    -> TBackInsertIterator<T, decltype(container->GetEnumerator()->Current)> {
  return TBackInsertIterator<T, decltype(container->GetEnumerator()->Current)>(
      container);
}

template <typename T>
auto front_inserter(SYSITERATOR_PTR T *container)
  -> TInsertIterator<T, decltype(container->GetEnumerator()->Current)> {
  return TInsertIterator<T, decltype(container->GetEnumerator()->Current)>(
    container, 0);
}

template <typename T>
auto make_inserter(SYSITERATOR_PTR T *container, size_t place)
  -> TInsertIterator<T, decltype(container->GetEnumerator()->Current)> {
  return TInsertIterator<T, decltype(container->GetEnumerator()->Current)>(
      container, place);
}
}  // namespace System

#undef  SYSITERATOR_PTR
#endif  // _defined(__clang__)
#endif  // SYSITERATOR_H
