// -----------------------------------------------------------------------------------
// SYSTOBJ.H: TObject, Interface Wrappers and helpers (TInterfacedObject, etc)
//
// $Rev: 111713 $
//
// Copyright(c) 1995-2011 Embarcadero Technologies, Inc.
// -----------------------------------------------------------------------------------
#if !defined(SYSTOBJ_H)
#define SYSTOBJ_H

#if !defined(SystemHPP)
#error Do not include this file directly.  Include 'System.hpp'.
#endif

#if !defined(SYSMAC_H)
#include <sysmac.h>
#endif
#if !defined(DSTRING_H)
#include <dstring.h>
#endif
#if !defined(WSTRING_H)
#include <wstring.h>
#endif

#if defined(__clang__) && !defined(NO_ALLOW_LAMBDA_CONVERSION)
#define ALLOW_LAMBDA_CONVERSION
#include <type_traits>
#include <functional>
#include <utility>
#endif

#pragma option push -w-inl -w-lvc

namespace System
{

// NOTE: Do not mess with TObject unless you really know what you're doing.
//       In particular, do not add, remove or change the order of virtual methods.
//
class _DELPHICLASS_TOBJECT TObject;
class _DELPHICLASS_TOBJECT TObject
{
#if defined(__clang__) && !defined(NO_TOBJECT_DELETE)
	TObject(const TObject&) = delete;
	TObject& operator=(const TObject&) = delete;
#endif
public:
	__fastcall TObject();
	void __fastcall Free();
	void __fastcall DisposeOf();
	__classmethod TObject* __fastcall InitInstance(void * Instance);
	void __fastcall CleanupInstance();
	TClass __fastcall ClassType();
	__classmethod UnicodeString __fastcall ClassName();
	__classmethod bool __fastcall ClassNameIs(const UnicodeString Name);
	__classmethod TClass __fastcall ClassParent();
	__classmethod void * __fastcall ClassInfo();
	__classmethod int __fastcall InstanceSize();
	__classmethod bool __fastcall InheritsFrom(TClass AClass);
	__classmethod void * __fastcall MethodAddress(const ShortString &Name)/* overload */;
	__classmethod void * __fastcall MethodAddress(const UnicodeString Name)/* overload */;
	__classmethod UnicodeString __fastcall MethodName(void * Address);
	__classmethod UnicodeString __fastcall QualifiedClassName();
	void * __fastcall FieldAddress(const ShortString &Name)/* overload */;
	void * __fastcall FieldAddress(const UnicodeString Name)/* overload */;

	/* NOTE: In Delphi GetInterface is an untyped out parameter.
	 * So it's mangled as a void* in System.obj which means that we
	 * have to use 'void*' here to properly link. However, the 'Obj' param
	 * is really a void**. So make sure to provide a double pointer when
	 * calling this function and cast it to (void*) to make the compiler happy!
	 * See the GetInterface<T>(DelphiInterface<T>&) for an example!
	 */
	bool __fastcall GetInterface(const GUID &IID, /* out */ void *Obj);

    /** Template function to ease querying for a
     *  smart-Interface-object from a TObject class
     */
#if !defined(_WIN64)
  #pragma option push -w-8118
#endif
	template <typename T>
	bool __fastcall GetInterface(DelphiInterface<T>& smartIntf)
	{
	  return GetInterface(__uuidof(T), reinterpret_cast<void*>(static_cast<T**>(&smartIntf)));
	}
#if !defined(_WIN64)
  #pragma option pop
#endif

	__classmethod PInterfaceEntry __fastcall GetInterfaceEntry(const GUID &IID);
	__classmethod PInterfaceTable __fastcall GetInterfaceTable();
	__classmethod UnicodeString __fastcall UnitName();
	__classmethod UnicodeString __fastcall UnitScope();
	virtual bool __fastcall Equals(TObject* Obj);
	virtual int __fastcall GetHashCode();
	virtual UnicodeString __fastcall ToString();
	virtual HRESULT __fastcall SafeCallException(TObject* ExceptObject, void * ExceptAddr);
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall BeforeDestruction();
	virtual void __fastcall Dispatch(void *Message);
	virtual void __fastcall DefaultHandler(void *Message);
	__classmethod virtual TObject* __fastcall NewInstance();
	virtual void __fastcall FreeInstance();
	__fastcall virtual ~TObject();
};

#ifdef _WIN64
#if defined(ASSERT_DELPHI_CPP_SIZES)
static_assert(!(sizeof(TObject) > 8), "Pascal/C++ size mismatch: C++(TObject) > [Pascal size: 8]");
static_assert(!(sizeof(TObject) < 8), "Pascal/C++ size mismatch: C++(TObject) < [Pascal size: 8]");
#endif /* TObject */
#endif /* _WIN64 */

class DELPHICLASS TCustomAttribute;
#ifndef _WIN64
// #pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomAttribute : public TObject
{
	typedef TObject inherited;
	
public:
	/* TObject.Create */ inline __fastcall TCustomAttribute() : TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomAttribute() { }

};


#if defined(DELPHI_AUTOREFCOUNT)
 #ifdef __clang__
  void _InstAddRef(void *obj);
  void _InstClear(void *&obj);
  void _InstCopy(void *&obj, void *src);

  void _InstWeakClear(void *&obj);
  void _InstWeakCopy(void *&obj, void *src);

  // DelphiWeakInterface<> ??
  void _IntfWeakClear(DelphiInterface<IInterface>&);
  void _IntfWeakCopy(DelphiInterface<IInterface>&, DelphiInterface<IInterface>);
 #else
  // TODO - Need thunks for NEXTGEN/WIN32
  // DelphiObject Prologue-self-assign cpy constructor
  _InstAddRef(TObject*);

  // DelphiObject destructor
  _InstClear(TObject *&);

  // DelphiObject constructor, copy ctr and assignment op
  _InstCopy(TObject*&, TObject*);

  _InstWeakClear(TObject *&);
  _InstWeakCopy(TObject *&, TObject *);

  _IntfWeakClear(DelphiInterface<IInterface>&);
  _IntfWeakCopy(DelphiInterface<IInterface>&, DelphiInterface<IInterface>);
 #endif
#endif

  // From syssupp.cpp
  void* InterLockedExchg(void** p1, void* p2);

  class TMetaClass
  {
  public:
    // With the introduction of __classmethod support,
    // TObject no longer exposes the naked class methods with
    // explicit first TMetaClass* parameters. Hence these
    // are now implemented via helpers in syssupp.cpp
    TObject*  __fastcall InitInstance(void* instance);
    String    __fastcall ClassName();
    String    __fastcall QualifiedClassName();
    bool      __fastcall ClassNameIs(const String string);
    TClass    __fastcall ClassParent();
    void*     __fastcall ClassInfo();
    long      __fastcall InstanceSize();
    bool      __fastcall InheritsFrom(TClass aClass);
    void*     __fastcall MethodAddress(const ShortString& Name);
    void*     __fastcall MethodAddress(const String Name);
    String    __fastcall MethodName(void* Address);
    PInterfaceEntry __fastcall GetInterfaceEntry(const TGUID& IID);
    PInterfaceTable __fastcall GetInterfaceTable();
    String    __fastcall UnitName();
    String    __fastcall UnitScope();
  };

  /* DelphiInterface
    This template class is to be used for allowing Delphi-owned interfaces to be returned
    from Pascal function to C++ functions.  Since Delphi automatically provides reference
    counting for these references (removing a huge burden from the programmer), the
    class implemented strives to maintain this feature for the C++ programmer.

    The following invariants must hold:
          sizeof(DelphiInterface<T>) == 4
          template DelphiInterface<T> must be marked DELPHIRETURN
          BCC32 for BCB 3.0 or later must be used to compile this template
          reference counting must be provided by the ctor, copy ctor, operator= and dtor.
          the template type T must be derived from a class which has an AddRef and Release.

    The following general rules apply:
          - the T* and T** operators do not perform reference counting; it is the
            responsibility of the programmer to ensure that reference handling is
            correctly performed when these two conversion operators are used.
          - taking the address of the interface stored in a DelphiInterface<T> does NOT:
            - release the previous interface
            - increment the reference count of the current interface
                  - it is the responsibility of the programmer to ensure that
                  reference counting is handled properly when the T** operator is used.
          - if no interface is stored in a DelphiInterface<T>, the T* operator will return 0.
  */
  template <class T> class RTL_DELPHIRETURN DelphiInterface
  {
    T       *intf;

#ifdef ALLOW_LAMBDA_CONVERSION
    template <typename TClass>
    class IsCallable {
      template <typename TArg>
      static long test(...);

      template <typename TArg>
      static char test(decltype(&TArg::operator()));

    public:
      static const bool value = sizeof(char) == sizeof(decltype(test<typename std::remove_reference<TClass>::type>(0)));
    };
    void initFromInterface(T* ptr) {
      if (ptr)
        ptr->AddRef();
      intf = ptr;
    }
#endif  // #ifdef ALLOW_LAMBDA_CONVERSION

  public:
    __fastcall DelphiInterface<T>() : intf(0)
    {}

    // Allows a DelphiInterface<> to be created from another DelphiInterface<>.
    // With __uuidof(), we know the IID of our interface
    template <class ANOTHERINTF>
    __fastcall DelphiInterface<T>(const DelphiInterface<ANOTHERINTF> &rhs) : intf(0)
    {
      if (rhs) {
        rhs->QueryInterface(__uuidof(T), (void **)(&intf));
      }
    }

    __fastcall DelphiInterface<T>(const DelphiInterface<T> &rhs)
    {
      if (rhs.intf != 0)
        rhs.intf->AddRef();
      intf = rhs.intf;
    }

    __fastcall DelphiInterface<T>(T* rhs)
    {
      if (rhs != 0)
        rhs->AddRef();
      intf = rhs;
    }

#ifdef ALLOW_LAMBDA_CONVERSION
    template <typename TArg>
    __fastcall DelphiInterface(TArg&& arg,
                               typename std::enable_if<IsCallable<TArg>::value>::type* = 0);
#endif  // #ifdef ALLOW_LAMBDA_CONVERSION

    __fastcall ~DelphiInterface<T>()
    {
      if (intf != 0)
      {
#if !defined(NO_DI_DISAMBIGUATE_RELEASE)
        // Disambiguate cases where intf has a Release(...) member
        static_cast<IUnknown*>(intf)->Release();
#else
          intf->Release();
#endif
        intf = 0;
      }
#ifdef __clang__
      if (_init_inst) {
        static DelphiInterface<T> __force_inst1, __force_inst2=__force_inst1;
      }
#endif
    }

    // Allows a DelphiInterface<> to be assigned to another DelphiInterface<>.
    // With __uuidof(), we know the IID of our interface
    template <class ANOTHERINTF>
    DelphiInterface<T>& __fastcall operator =(const DelphiInterface<ANOTHERINTF> &rhs)
    {
      Release();
      if (rhs) {
        rhs->QueryInterface(__uuidof(T), (void**)(&intf));
      }
      return *this;
    }

    DelphiInterface<T>& __fastcall operator =(const DelphiInterface<T>& rhs)
    {
      if (rhs.intf != 0)
        rhs.intf->AddRef();

      if (intf != 0)
#if !defined(NO_DI_DISAMBIGUATE_RELEASE)
        // Disambiguate cases where intf has a Release(...) member
        static_cast<IUnknown*>(intf)->Release();
#else
        intf->Release();
#endif

      intf = rhs.intf;
      return *this;
    }

    DelphiInterface<T>& __fastcall operator =(T *rhs)
    {
      if (rhs != 0)
        rhs->AddRef();

      if (intf != 0)
        intf->Release();

      intf = rhs;
      return *this;
    }

    T* __fastcall operator->() const
    {
      return intf;
    }

    bool operator ! () const
    {
      return (intf == 0);
    };

    __fastcall operator T*() const
    {
      return intf;
    }

    T& __fastcall operator *()
    {
      return *intf;
    }

    int Release()
    {
      int cnt = 0;
      if (intf)
      {
        cnt = intf->Release();
        intf = 0;
      }
      return cnt;
    }

    T** __fastcall operator &()
    {
      return &intf;
    }
  };

  // --------------------------------------------------------------------------
  // Object <-> Interface cast helpers
  // --------------------------------------------------------------------------
  struct __declspec(uuid("{CEDF24DE-80A4-447D-8C75-EB871DC121FD}")) __IObjCastGUIDHolder;

  template <typename DESTINTF>
  DelphiInterface<DESTINTF> _interfaceCast(IInterface* src)
  {
    DelphiInterface<DESTINTF> result;
    if (src)
      src->QueryInterface(__uuidof(DESTINTF), (void**)&result);
    return result;
  }

  template <typename DESTOBJ>
  DESTOBJ* _interfaceToObjectCast(IInterface* src)
  {
    if (src)
    {
      TObject *obj = 0;
      src->QueryInterface(__uuidof(__IObjCastGUIDHolder), reinterpret_cast<void**>(&obj));
      return dynamic_cast<DESTOBJ*>(obj);
    }
    return 0;
  }

  template <typename DESTTYPE, bool isObject>
  struct _InterfaceCastHlpr
  {
    typedef DelphiInterface<DESTTYPE> RetType;
    static RetType cast(IInterface* src)
    { return _interfaceCast<DESTTYPE>(src); }
  };

  template <typename DESTTYPE>
  struct _InterfaceCastHlpr<DESTTYPE, true>
  {
    typedef DESTTYPE* RetType;
    static RetType cast (IInterface* src)
    { return _interfaceToObjectCast<DESTTYPE>(src); }
  };

#pragma option push -w-8109
  template <typename DESTTYPE, typename SRCINTF>
  typename _InterfaceCastHlpr<DESTTYPE, __is_base_of(TObject, DESTTYPE)>::RetType
  interface_cast(const DelphiInterface<SRCINTF>& src)
  {
    return _InterfaceCastHlpr<DESTTYPE, __is_base_of(TObject, DESTTYPE)>::cast(src);
  }
#pragma option pop

  template <typename DESTINTF>
  DelphiInterface<DESTINTF> interface_cast(TObject* obj)
  {
    DelphiInterface<DESTINTF> result;
    if (obj) {
      obj->GetInterface(__uuidof(DESTINTF), (void*)&result);
    }
    return result;
  }


class DELPHICLASS TInterfacedObject;
class PASCALIMPLEMENTATION TInterfacedObject : public TObject
{
	typedef TObject inherited;
	
private:
	static const int objDestroyingFlag = int(-2147483648);
	
	int __fastcall GetRefCount();
	
protected:
	int FRefCount;
	static void __fastcall __MarkDestroying(const void *Obj);
public:
	HRESULT __stdcall QueryInterface(REFIID IID, /* out */ void *Obj);
	int __stdcall _AddRef();
	int __stdcall _Release();
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall BeforeDestruction();
	__classmethod virtual TObject* __fastcall NewInstance();
	__property int RefCount = {read=GetRefCount, nodefault};
public:
	/* TObject.Create */ inline __fastcall TInterfacedObject() : TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TInterfacedObject() { }
	
private:
	void *__IInterface;	// IInterface 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator _di_IInterface()
	{
		_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IInterface*(void) { return (IInterface*)&__IInterface; }
	#endif
	
};

#ifndef _WIN64
#if !defined(__CPP__) && !defined(__clang__)
#if sizeof(TInterfacedObject) < 12
#pragma message "Pascal/C++ size mismatch: (C++) sizeof(TInterfacedObject) < (Pascal) [size: 12, align: 4] (WARNING)"
#pragma sizeof(TInterfacedObject)
#endif

#if sizeof(TInterfacedObject) > 12
#pragma message "Pascal/C++ size mismatch: (C++) sizeof(TInterfacedObject) > (Pascal) [size: 12, align: 4] (WARNING)"
#pragma sizeof(TInterfacedObject)
#endif

#if alignof(TInterfacedObject) < 4
#pragma message "Pascal/C++ alignment mismatch: (C++) alignof(TInterfacedObject) < (Pascal) [size: 12, align: 4] (WARNING)"
#endif

#if alignof(TInterfacedObject) > 4
#pragma message "Pascal/C++ alignment mismatch: (C++) alignof(TInterfacedObject) > (Pascal) [size: 12, align: 4] (WARNING)"
#endif
#endif
#else /* _WIN64 */
#if defined(ASSERT_DELPHI_CPP_SIZES)
static_assert(!(sizeof(TInterfacedObject) > 24), "Pascal/C++ size mismatch: C++(TInterfacedObject) > [Pascal size: 24]");
static_assert(!(sizeof(TInterfacedObject) < 24), "Pascal/C++ size mismatch: C++(TInterfacedObject) < [Pascal size: 24]");
#endif /* TInterfacedObject */
#endif /* _WIN64 */


#if !defined(INTFOBJECT_IMPL_IUNKNOWN)
#define INTFOBJECT_IMPL_IUNKNOWN(BASE) \
  ULONG   __stdcall AddRef() { return BASE::_AddRef();}  \
  ULONG   __stdcall Release(){ return BASE::_Release();} \
  HRESULT __stdcall QueryInterface(REFIID iid, void** p){ return BASE::QueryInterface(iid, p);}
#endif

  template <typename INTF1, typename INTF2=IUnknown, typename INTF3=IInterface>
  class TCppInterfacedObject: public TInterfacedObject,
                              public INTF1, public INTF2, public INTF3
  {
  protected:
     typedef TCppInterfacedObject<INTF1, INTF2, INTF3> _COM_CLASS;
  public:
     INTFOBJECT_IMPL_IUNKNOWN(TInterfacedObject);
  };

class DELPHICLASS TAggregatedObject;
class PASCALIMPLEMENTATION TAggregatedObject : public TObject
{
	typedef TObject inherited;

private:
	// Delphi's current implementation is a [unsafe] interface
	// We keep C++ as a void* as C++ does not have an [unsafe] version of DelphiInterface
	void *FController;
	_di_IInterface __fastcall GetController();

protected:
	HRESULT __stdcall QueryInterface(REFIID IID, /* out */ void *Obj);
	int __stdcall _AddRef();
	int __stdcall _Release();
	
public:
	__fastcall TAggregatedObject(const _di_IInterface Controller);
	__property _di_IInterface Controller = {read=GetController};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAggregatedObject() { }
	
};

#ifndef _WIN64
 #if !defined(__CPP__) && !defined(__clang__) && !defined(_DELPHI_NEXTGEN)
  #if sizeof(TAggregatedObject) < 8
  #pragma message "Pascal/C++ size mismatch: (C++) sizeof(TAggregatedObject) < (Pascal) [size: 8, align: 4] (WARNING)"
  #pragma sizeof(TAggregatedObject)
  #endif

  #if sizeof(TAggregatedObject) > 8
  #pragma message "Pascal/C++ size mismatch: (C++) sizeof(TAggregatedObject) > (Pascal) [size: 8, align: 4] (WARNING)"
  #pragma sizeof(TAggregatedObject)
  #endif
 #endif
#else /* _WIN64 */
 #if defined(ASSERT_DELPHI_CPP_SIZES)
  static_assert(!(sizeof(TAggregatedObject) > 16), "Pascal/C++ size mismatch: C++(TAggregatedObject) > [Pascal size: 16]");
  static_assert(!(sizeof(TAggregatedObject) < 16), "Pascal/C++ size mismatch: C++(TAggregatedObject) < [Pascal size: 16]");
 #endif /* TAggregatedObject */
#endif /* _WIN64 */


  template <typename INTF1, typename INTF2=IUnknown, typename INTF3=IInterface>
  class TCppAggregatedObject: public TAggregatedObject,
                              public INTF1, public INTF2, public INTF3
  {
  protected:
    typedef TCppAggregatedObject<INTF1, INTF2, INTF3> _COM_CLASS;
  public:
    __fastcall TCppAggregatedObject(const _di_IInterface Controller) : TAggregatedObject(Controller)
    {}
     INTFOBJECT_IMPL_IUNKNOWN(TAggregatedObject);
  };

#ifdef ALLOW_LAMBDA_CONVERSION

  template <typename T, typename TArg, typename TFunctor>
  struct InvokeWrapper {};

  template <typename T, typename TArg, typename TFunctor, typename TResult, typename... Args>
  struct InvokeWrapper<T, TArg, TResult(TFunctor::*)(Args...) const> : public TCppInterfacedObject<T> {
    InvokeWrapper(const TArg& f, std::true_type) : f(f) {}
    InvokeWrapper(TArg&& f, std::false_type) : f(std::move(f)) {}

    virtual TResult __fastcall Invoke(Args... _args) override {
      return f(std::forward<Args>(_args)...);
    }

    TArg f;
  };

  template <class T>
  template <typename TArg>
  inline DelphiInterface<T>::DelphiInterface(TArg&& arg,
	  typename std::enable_if<IsCallable<TArg>::value>::type*) : intf(nullptr) {
    typedef typename std::remove_reference<decltype(arg)>::type TNonRef;
    *this = new InvokeWrapper<T, TNonRef, decltype(&TNonRef::operator())>(
    std::forward<TArg>(arg), std::is_lvalue_reference<TArg>());
  }

#endif  // #ifdef ALLOW_LAMBDA_CONVERSION

class DELPHICLASS TContainedObject;
#ifndef _WIN64
// #pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TContainedObject : public TAggregatedObject
{
	typedef TAggregatedObject inherited;
	
protected:
	HIDESBASE virtual HRESULT __stdcall QueryInterface(REFIID IID, /* out */ void *Obj);
public:
	/* TAggregatedObject.Create */ inline __fastcall TContainedObject(const _di_IInterface Controller) : TAggregatedObject(Controller) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TContainedObject() { }
	
private:
	void *__IInterface;	// IInterface 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator _di_IInterface()
	{
		_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IInterface*(void) { return (IInterface*)&__IInterface; }
	#endif
	
};

#ifndef _WIN64
 #if !defined(__CPP__) && !defined(__clang__) && !defined(_DELPHI_NEXTGEN)
  #if sizeof(TContainedObject) < 12
  #pragma message "Pascal/C++ size mismatch: (C++) sizeof(TContainedObject) < (Pascal) [size: 12, align: 4] (WARNING)"
  #pragma sizeof(TContainedObject)
  #endif

  #if sizeof(TContainedObject) > 12
  #pragma message "Pascal/C++ size mismatch: (C++) sizeof(TContainedObject) > (Pascal) [size: 12, align: 4] (WARNING)"
  #pragma sizeof(TContainedObject)
  #endif
 #endif
#else /* _WIN64 */
 #if defined(ASSERT_DELPHI_CPP_SIZES)
  static_assert(!(sizeof(TContainedObject) > 24), "Pascal/C++ size mismatch: C++(TContainedObject) > [Pascal size: 24]");
  static_assert(!(sizeof(TContainedObject) < 24), "Pascal/C++ size mismatch: C++(TContainedObject) < [Pascal size: 24]");
 #endif /* TContainedObject */
#endif /* _WIN64 */

#ifndef _WIN64
// #pragma pack(pop)
#endif /* not _WIN64 */

class DELPHICLASS TNoRefCountObject;
class PASCALIMPLEMENTATION TNoRefCountObject : public TObject
{
	typedef TObject inherited;
	
public:
	HRESULT __stdcall QueryInterface(REFIID IID, /* out */ void *Obj);
	int __stdcall _AddRef();
	int __stdcall _Release();
public:
	/* TObject.Create */ inline __fastcall TNoRefCountObject() : TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TNoRefCountObject() { }
	
private:
	void *__IInterface;	// IInterface 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator _di_IInterface()
	{
		_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IInterface*() { return (IInterface*)&__IInterface; }
	#endif

};

#ifndef _WIN64
#if !defined(__CPP__) && !defined(__clang__)
#if sizeof(TNoRefCountObject) < 8
#pragma message "Pascal/C++ size mismatch: (C++) sizeof(TNoRefCountObject) < (Pascal) [size: 8, align: 4] (WARNING)"
#pragma sizeof(TNoRefCountObject)
#endif

#if sizeof(TNoRefCountObject) > 8
#pragma message "Pascal/C++ size mismatch: (C++) sizeof(TNoRefCountObject) > (Pascal) [size: 8, align: 4] (WARNING)"
#pragma sizeof(TNoRefCountObject)
#endif

#if alignof(TNoRefCountObject) < 4
#pragma message "Pascal/C++ alignment mismatch: (C++) alignof(TNoRefCountObject) < (Pascal) [size: 8, align: 4] (WARNING)"
#endif

#if alignof(TNoRefCountObject) > 4
#pragma message "Pascal/C++ alignment mismatch: (C++) alignof(TNoRefCountObject) > (Pascal) [size: 8, align: 4] (WARNING)"
#endif
#endif
#else /* _WIN64 */
#if defined(ASSERT_DELPHI_CPP_SIZES)
static_assert(!(sizeof(TNoRefCountObject) > 16), "Pascal/C++ size mismatch: C++(TNoRefCountObject) > [Pascal size: 16]");
static_assert(!(sizeof(TNoRefCountObject) < 16), "Pascal/C++ size mismatch: C++(TNoRefCountObject) < [Pascal size: 16]");
#endif /* TNoRefCountObject */
#endif /* _WIN64 */

  template <typename INTF1, typename INTF2=IUnknown, typename INTF3=IInterface>
  class TCppNoRefCountObject: public TNoRefCountObject,
                              public INTF1, public INTF2, public INTF3
  {
  public:
     INTFOBJECT_IMPL_IUNKNOWN(TNoRefCountObject);
  };


#ifndef _WIN64
 #if !defined(__CPP__) && !defined(__clang__) && !defined(_DELPHI_NEXTGEN)
  #if sizeof(TCustomAttribute) < 4
  #pragma message "Pascal/C++ size mismatch: (C++) sizeof(TCustomAttribute) < (Pascal) [size: 4, align: 4] (WARNING)"
  #pragma sizeof(TCustomAttribute)
  #endif

  #if sizeof(TCustomAttribute) > 4
  #pragma message "Pascal/C++ size mismatch: (C++) sizeof(TCustomAttribute) > (Pascal) [size: 4, align: 4] (WARNING)"
  #pragma sizeof(TCustomAttribute)
  #endif
 #endif
#else /* _WIN64 */
 #if defined(ASSERT_DELPHI_CPP_SIZES)
  static_assert(!(sizeof(TCustomAttribute) > 8), "Pascal/C++ size mismatch: C++(TCustomAttribute) > [Pascal size: 8]");
  static_assert(!(sizeof(TCustomAttribute) < 8), "Pascal/C++ size mismatch: C++(TCustomAttribute) < [Pascal size: 8]");
 #endif /* TCustomAttribute */
#endif /* _WIN64 */

#ifndef _WIN64
// #pragma pack(pop)
#endif /* not _WIN64 */

}  // namespace System

// Type definition of interfaces wrapped by a smart object
// For interfaces declared at global namespace
#if !defined(DECLARE_DINTERFACE_TYPE)
#define DECLARE_DINTERFACE_TYPE(iface) \
        typedef System::DelphiInterface< ::iface >  _di_ ## iface;
#endif

// For interfaces declared in a namespace namespace
#define DECLARE_DINTERFACE_TYPE_NS(iface,ns) \
    namespace ns                             \
    {                                        \
      __interface iface;                     \
      typedef System::DelphiInterface< ::iface >  _di_ ## iface;\
    }

#if defined(_WIN32)
// Here declare _di_xxxx types for interfaces declared in the System unit
// and for rare cases where a declaration here will allow a header not to include
// another (as for Classes.hpp not having to include ActiveX.hpp for _di_IStream)
DECLARE_DINTERFACE_TYPE(IUnknown)
DECLARE_DINTERFACE_TYPE(IDispatch)
#endif

// This allows Classes.hpp to not require ActiveX.hpp
#if defined(_WIN32)
  __interface __declspec(uuid("{0000000C-0000-0000-C000-000000000046}")) IStream;
  typedef System::DelphiInterface<IStream> _di_IStream;
#endif

#pragma option pop

#endif
