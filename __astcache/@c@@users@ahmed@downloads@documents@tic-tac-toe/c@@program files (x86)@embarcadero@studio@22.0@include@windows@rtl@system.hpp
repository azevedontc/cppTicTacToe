// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.pas' rev: 35.00 (Windows)

#ifndef SystemHPP
#define SystemHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#define BCC32_HAS_CLASSMETHODS  // Flag we'll use __classmethod
#define ANSISTRING_AS_TEMPLATE  // Flag AnsiStringT<CP> support
#define _DELPHI_STRING_UNICODE  // System::String -> UTF16
#define _DELPHI_WEAKINTFREF     // Delphi Interface can be [weak]
#define _DELPHI_MANAGED_RECORD  // Delphi supports 'managed' records
#include <sysmac.h>

//-- user supplied -----------------------------------------------------------
#define RTLVersionC 3500
#define RTLVersion111C
#define RTLVersion112C
#define RTLVersion113C
namespace System
{
  // Shortint is a source of confusion in C++
  // typedef Shortint ShortInt;
  typedef Smallint SmallInt;
  typedef Longint LongInt;
}
namespace System
{
  typedef UCS4Char* TUCS4CharArray;
}
namespace System
{
  typedef int* IntegerArray;
}
namespace System
{
  typedef __int64* Int64Array;
}
namespace System
{
  typedef void *PointerArray;
}
namespace System
{
  typedef PChar TPCharArray;
}
namespace System
{
  typedef int *PLongInt;
  typedef PLongInt PLongint;
}
namespace System
{
    typedef System::TDateTime TDate;
    typedef System::TDateTime TTime;
}
namespace System
{
    typedef struct PackageUnitEntry UnitEntryTable;
}
namespace System
{
    extern DELPHI_PACKAGE HINSTANCE MainInstance;
}
namespace System
{
  typedef void * (__fastcall * TSystemThreadFuncProc)(void *, void * );
  typedef void (__fastcall * TSystemThreadEndProc)(int);
}
#if !defined(CP_ACP)
static const System::Word CP_ACP = System::Word(0);
#endif
#if !defined(CP_UTF7)
static const System::Word CP_UTF7 = System::Word(65000);
#endif
#if !defined(CP_UTF8)
static const System::Word CP_UTF8 = System::Word(65001);
#endif

namespace System
{
//-- forward type declarations -----------------------------------------------
struct TInterfaceEntry;
struct TInterfaceTable;
struct TMethod;
struct TDispatchMessage;
struct TMonitor;
__interface DELPHIINTERFACE IEnumerator;
typedef System::DelphiInterface<IEnumerator> _di_IEnumerator;
__interface DELPHIINTERFACE IEnumerable;
typedef System::DelphiInterface<IEnumerable> _di_IEnumerable;
template<typename T> __interface DELPHIINTERFACE IEnumerator__1;
#ifdef __clang__
template<typename T> using _di_IEnumerator__1 = System::DelphiInterface<IEnumerator__1<T>>;
#endif
template<typename T> __interface DELPHIINTERFACE IEnumerable__1;
#ifdef __clang__
template<typename T> using _di_IEnumerable__1 = System::DelphiInterface<IEnumerable__1<T>>;
#endif
__interface DELPHIINTERFACE IComparable;
typedef System::DelphiInterface<IComparable> _di_IComparable;
template<typename T> __interface DELPHIINTERFACE IComparable__1;
#ifdef __clang__
template<typename T> using _di_IComparable__1 = System::DelphiInterface<IComparable__1<T>>;
#endif
template<typename T> __interface DELPHIINTERFACE IEquatable__1;
#ifdef __clang__
template<typename T> using _di_IEquatable__1 = System::DelphiInterface<IEquatable__1<T>>;
#endif
struct TVarArrayBound;
struct TVarArray;
struct TVarRecord;
struct TLargestVarData;
struct TCallDesc;
struct TDispDesc;
struct TVariantManager;
struct TMemoryManager;
struct TMemoryManagerEx;
struct THeapStatus;
struct TSmallBlockTypeState;
struct TMemoryManagerState;
struct TMonitorSupport;
struct TPtrWrapper;
struct PackageUnitEntry;
struct TPackageTypeInfo;
struct PackageInfoTable;
struct TCVModInfo;
struct TCPUIDRec;
struct TFileRec;
struct TTextRec;
struct TLibModule;
struct TModuleUnloadRec;
struct TResStringRec;
struct TSingleRec;
struct TDoubleRec;
struct TExtended80Rec;
#ifndef _WIN64
struct TInitContext;
#endif /* not _WIN64 */
struct TExceptionRecord;
//-- type declarations -------------------------------------------------------
typedef int *PFixedInt;

typedef unsigned *PFixedUInt;

typedef short Int16;

typedef int Int32;

typedef NativeInt IntPtr;

typedef Byte UInt8;

typedef Word UInt16;

typedef unsigned UInt32;

typedef NativeUInt UIntPtr;

typedef float Float32;

typedef double Float64;

typedef char UTF8Char;

typedef char * PUTF8Char;

enum DECLSPEC_DENUM System__1 : unsigned char { vcPrivate, vcProtected, vcPublic, vcPublished };

typedef Set<System__1, System__1::vcPrivate, System__1::vcPublished> TVisibilityClasses;

#ifdef __clang__
template<typename T> using TArray__1 = System::DynamicArray<T>;
#endif

typedef TInterfaceEntry *PInterfaceEntry;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TInterfaceEntry
{
public:
	GUID IID;
	void *VTable;
	int IOffset;
#ifdef _WIN64
	unsigned _Filler;
#endif /* _WIN64 */
	NativeUInt ImplGetter;
};
#pragma pack(pop)


typedef TInterfaceTable *PInterfaceTable;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TInterfaceTable
{
public:
	int EntryCount;
#ifdef _WIN64
	unsigned _Filler;
#endif /* _WIN64 */
	System::StaticArray<TInterfaceEntry, 10000> Entries;
};
#pragma pack(pop)


typedef TMethod *PMethod;

struct DECLSPEC_DRECORD TMethod
{
public:
	void *Code;
	void *Data;
	static bool __fastcall _op_Equality(const TMethod &Left, const TMethod &Right);
	static bool __fastcall _op_Inequality(const TMethod &Left, const TMethod &Right);
	static bool __fastcall _op_GreaterThan(const TMethod &Left, const TMethod &Right);
	static bool __fastcall _op_GreaterThanOrEqual(const TMethod &Left, const TMethod &Right);
	static bool __fastcall _op_LessThan(const TMethod &Left, const TMethod &Right);
	static bool __fastcall _op_LessThanOrEqual(const TMethod &Left, const TMethod &Right);
	
	friend bool operator ==(const TMethod &Left, const TMethod &Right) { return TMethod::_op_Equality(Left, Right); }
	friend bool operator !=(const TMethod &Left, const TMethod &Right) { return TMethod::_op_Inequality(Left, Right); }
	friend bool operator >(const TMethod &Left, const TMethod &Right) { return TMethod::_op_GreaterThan(Left, Right); }
	friend bool operator >=(const TMethod &Left, const TMethod &Right) { return TMethod::_op_GreaterThanOrEqual(Left, Right); }
	friend bool operator <(const TMethod &Left, const TMethod &Right) { return TMethod::_op_LessThan(Left, Right); }
	friend bool operator <=(const TMethod &Left, const TMethod &Right) { return TMethod::_op_LessThanOrEqual(Left, Right); }
};


struct DECLSPEC_DRECORD TDispatchMessage
{
public:
	Word MsgID;
};


#ifndef _WIN64
typedef System::TMetaClass* TCustomAttributeClass;
#else /* _WIN64 */
_DECLARE_METACLASS(TMetaClass, TCustomAttributeClass);
#endif /* _WIN64 */

typedef unsigned TThreadID;

typedef TMonitor *PMonitor;

typedef PMonitor *PPMonitor;

struct DECLSPEC_DRECORD TMonitor
{
	
private:
	struct TWaitingThread;
	typedef TWaitingThread *PWaitingThread;
	
	struct DECLSPEC_DRECORD TWaitingThread
	{
	public:
		TMonitor::TWaitingThread *Next;
		unsigned Thread;
		void *WaitEvent;
	};
	
	
	struct DECLSPEC_DRECORD TSpinWait
	{
	private:
		static const System::Int8 YieldThreshold = System::Int8(0xa);
		
		static const System::Int8 Sleep1Threshold = System::Int8(0x14);
		
		static const System::Int8 Sleep0Threshold = System::Int8(0x5);
		
		int FCount;
		
	public:
		void __fastcall Reset();
		void __fastcall SpinCycle();
	};
	
	
	struct DECLSPEC_DRECORD TSpinLock
	{
	private:
		int FLock;
		
	public:
		void __fastcall Enter();
		void __fastcall Exit();
	};
	
	
	
private:
	int FLockCount;
	int FRecursionCount;
	unsigned FOwningThread;
	void *FLockEvent;
	int FSpinCount;
	TWaitingThread *FWaitQueue;
	TSpinLock FQueueLock;
	static int CacheLineSize;
	static int FDefaultSpinCount;
	static void __fastcall Spin(int Iterations);
	static int __fastcall GetCacheLineSize();
	void __fastcall QueueWaiter(TWaitingThread &WaitingThread);
	void __fastcall RemoveWaiter(TWaitingThread &WaitingThread);
	PWaitingThread __fastcall DequeueWaiter();
	void * __fastcall GetEvent();
	unsigned __fastcall CheckOwningThread();
	static void __fastcall CheckMonitorSupport();
	
private:
	static PMonitor __fastcall Create();
	static void __fastcall Destroy(TObject* const AObject)/* overload */;
	void __fastcall Destroy()/* overload */;
	
private:
	static PPMonitor __fastcall GetFieldAddress(TObject* const AObject);
	static PMonitor __fastcall GetMonitor(TObject* const AObject);
	static void __fastcall SetDefaultSpinCount(int AValue);
	bool __fastcall TryEnter()/* overload */;
	bool __fastcall Wait(PMonitor ALock, unsigned Timeout)/* overload */;
	void __fastcall Pulse()/* overload */;
	void __fastcall PulseAll()/* overload */;
	
private:
	bool __fastcall Enter(unsigned Timeout)/* overload */;
	void __fastcall Exit()/* overload */;
	
public:
	static void __fastcall SetSpinCount(TObject* const AObject, int ASpinCount);
	static void __fastcall Enter(TObject* const AObject)/* overload */;
	static bool __fastcall Enter(TObject* const AObject, unsigned Timeout)/* overload */;
	static void __fastcall Exit(TObject* const AObject)/* overload */;
	static bool __fastcall TryEnter(TObject* const AObject)/* overload */;
	static bool __fastcall Wait(TObject* const AObject, unsigned Timeout)/* overload */;
	static bool __fastcall Wait(TObject* const AObject, TObject* const ALock, unsigned Timeout)/* overload */;
	static void __fastcall Pulse(TObject* const AObject)/* overload */;
	static void __fastcall PulseAll(TObject* const AObject)/* overload */;
	/* static */ __property int DefaultSpinCount = {read=FDefaultSpinCount, write=SetDefaultSpinCount};
};


__interface IEnumerator  : public IInterface 
{
	virtual TObject* __fastcall GetCurrent() = 0 ;
	virtual bool __fastcall MoveNext() = 0 ;
	virtual void __fastcall Reset() = 0 ;
	__property TObject* Current = {read=GetCurrent};
};

__interface IEnumerable  : public IInterface 
{
	virtual _di_IEnumerator __fastcall GetEnumerator() = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface IEnumerator__1  : public IEnumerator 
{
	virtual T __fastcall GetCurrentT(void) = 0;
	__property T Current = {read=GetCurrentT};
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface IEnumerable__1  : public IEnumerable 
{
	virtual System::DelphiInterface<IEnumerator__1<T> > __fastcall GetEnumeratorT(void) = 0;
};

__interface IComparable  : public IInterface 
{
	virtual int __fastcall CompareTo(TObject* Obj) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface IComparable__1  : public IComparable 
{
	HIDESBASE virtual int __fastcall CompareTo(T Value) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface IEquatable__1  : public IInterface 
{
	virtual bool __fastcall Equals(T Value) = 0 ;
};

#ifndef _WIN64
typedef System::TMetaClass* TInterfacedClass;
#else /* _WIN64 */
_DECLARE_METACLASS(TMetaClass, TInterfacedClass);
#endif /* _WIN64 */

typedef WideChar UCS2Char;

typedef WideChar * PUCS2Char;

typedef TUCS4CharArray *PUCS4CharArray;

typedef System::AnsiStringT<65001> UTF8String;

typedef System::AnsiStringT<65535> RawByteString;

typedef UTF8String *PUTF8String;

typedef RawByteString *PRawByteString;

typedef IntegerArray *PIntegerArray;

typedef Int64Array *PInt64Array;

typedef PointerArray *PPointerArray;

typedef System::DynamicArray<NativeInt> TBoundArray;

typedef TPCharArray *PPCharArray;

typedef unsigned *PCardinal;

typedef Word *PWord;

typedef unsigned *PUint32;

typedef unsigned __int64 *PUInt64;

typedef double *PDate;

typedef unsigned *PError;

typedef WordBool *PWordBool;

typedef _di_IInterface *PUnknown;

typedef PUnknown *PPUnknown;

typedef WideChar * *PPWideChar;

typedef char * *PPAnsiChar;

typedef Comp *PComp;

typedef NativeInt *PNativeInt;

typedef NativeUInt *PNativeUInt;

typedef TDateTime *PDateTime;

typedef TVarArrayBound *PVarArrayBound;

struct DECLSPEC_DRECORD TVarArrayBound
{
public:
	int ElementCount;
	int LowBound;
};


typedef System::StaticArray<TVarArrayBound, 1> TVarArrayBoundArray;

typedef TVarArrayBoundArray *PVarArrayBoundArray;

typedef System::StaticArray<int, 1> TVarArrayCoorArray;

typedef TVarArrayCoorArray *PVarArrayCoorArray;

typedef TVarArray *PVarArray;

struct DECLSPEC_DRECORD TVarArray
{
public:
	Word DimCount;
	Word Flags;
	int ElementSize;
	int LockCount;
	void *Data;
	TVarArrayBoundArray Bounds;
};


typedef TVarRecord *PVarRecord;

struct DECLSPEC_DRECORD TVarRecord
{
public:
	void *PRecord;
	void *RecInfo;
};


struct DECLSPEC_DRECORD TLargestVarData
{
public:
	void *_Reserved1;
	void *_Reserved2;
};


typedef Word TVarType;

enum DECLSPEC_DENUM TTypeKind : unsigned char { tkUnknown, tkInteger, tkChar, tkEnumeration, tkFloat, tkString, tkSet, tkClass, tkMethod, tkWChar, tkLString, tkWString, tkVariant, tkArray, tkRecord, tkInterface, tkInt64, tkDynArray, tkUString, tkClassRef, tkPointer, tkProcedure, tkMRecord };

typedef int TVarOp;

typedef TCallDesc *PCallDesc;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCallDesc
{
public:
	Byte CallType;
	Byte ArgCount;
	Byte NamedArgCount;
	System::StaticArray<Byte, 256> ArgTypes;
};
#pragma pack(pop)


typedef TDispDesc *PDispDesc;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TDispDesc
{
public:
	int DispID;
	Byte ResType;
	TCallDesc CallDesc;
};
#pragma pack(pop)


typedef TVariantManager *PVariantManager;

struct DECLSPEC_DRECORD TVariantManager _DEPRECATED_ATTRIBUTE0 
{
public:
	void __fastcall (*VarClear)(Variant &V);
	void __fastcall (*VarCopy)(Variant &Dest, const Variant &Source);
	void __fastcall (*VarCopyNoInd)(void);
	void __fastcall (*VarCast)(Variant &Dest, const Variant &Source, int VarType);
	void __fastcall (*VarCastOle)(Variant &Dest, const Variant &Source, int VarType);
	int __fastcall (*VarToInt)(const Variant &V);
	__int64 __fastcall (*VarToInt64)(const Variant &V);
	bool __fastcall (*VarToBool)(const Variant &V);
	Extended __fastcall (*VarToReal)(const Variant &V);
	Currency __fastcall (*VarToCurr)(const Variant &V);
	void __fastcall (*VarToPStr)(void *S, const Variant &V);
	void __fastcall (*VarToLStr)(UnicodeString &S, const Variant &V);
	void __fastcall (*VarToWStr)(WideString &S, const Variant &V);
	void __fastcall (*VarToIntf)(_di_IInterface &Unknown, const Variant &V);
	void __fastcall (*VarToDisp)(_di_IDispatch &Dispatch, const Variant &V);
	void __fastcall (*VarToDynArray)(void * &DynArray, const Variant &V, void * TypeInfo);
	void __fastcall (*VarFromInt)(Variant &V, const int Value, const Int8 Range);
	void __fastcall (*VarFromInt64)(Variant &V, const __int64 Value);
	void __fastcall (*VarFromBool)(Variant &V, const bool Value);
	void __fastcall (*VarFromReal)(void);
	void __fastcall (*VarFromTDateTime)(void);
	void __fastcall (*VarFromCurr)(void);
	void __fastcall (*VarFromPStr)(Variant &V, const ShortString &Value);
	void __fastcall (*VarFromLStr)(Variant &V, const UnicodeString Value);
	void __fastcall (*VarFromWStr)(Variant &V, const WideString Value);
	void __fastcall (*VarFromIntf)(Variant &V, const _di_IInterface Value);
	void __fastcall (*VarFromDisp)(Variant &V, const _di_IDispatch Value);
	void __fastcall (*VarFromDynArray)(Variant &V, const void * DynArray, void * TypeInfo);
	void __fastcall (*OleVarFromPStr)(OleVariant &V, const ShortString &Value);
	void __fastcall (*OleVarFromLStr)(OleVariant &V, const UnicodeString Value);
	void __fastcall (*OleVarFromVar)(OleVariant &V, const Variant &Value);
	void __fastcall (*OleVarFromInt)(OleVariant &V, const int Value, const Int8 Range);
	void __fastcall (*OleVarFromInt64)(OleVariant &V, const __int64 Value);
	void __fastcall (*VarOp)(Variant &Left, const Variant &Right, int OpCode);
	void __fastcall (*VarCmp)(const TVarData &Left, const TVarData &Right, const int OpCode);
	void __fastcall (*VarNeg)(Variant &V);
	void __fastcall (*VarNot)(Variant &V);
	void __cdecl (*DispInvoke)(PVarData Dest, const TVarData &Source, PCallDesc CallDesc, void * Params);
	void __fastcall (*VarAddRef)(Variant &V);
	void __fastcall (*VarArrayRedim)(Variant &A, int HighBound);
	Variant __cdecl (*VarArrayGet)(Variant &A, int IndexCount, int Indices);
	void __cdecl (*VarArrayPut)(Variant &A, const Variant &Value, int IndexCount, int Indices);
	void * __fastcall (*WriteVariant)(TextFile &T, const Variant &V, int Width);
	void * __fastcall (*Write0Variant)(TextFile &T, const Variant &V);
};


#ifdef _WIN64
typedef void * TVarArgList;

#endif /* _WIN64 */
typedef TMemoryManager *PMemoryManager;

struct DECLSPEC_DRECORD TMemoryManager _DEPRECATED_ATTRIBUTE1("Use TMemoryManagerEx") 
{
public:
	void * __fastcall (*GetMem)(NativeInt Size);
	int __fastcall (*FreeMem)(void * P);
	void * __fastcall (*ReallocMem)(void * P, NativeInt Size);
};


typedef TMemoryManagerEx *PMemoryManagerEx;

struct DECLSPEC_DRECORD TMemoryManagerEx
{
public:
	void * __fastcall (*GetMem)(NativeInt Size);
	int __fastcall (*FreeMem)(void * P);
	void * __fastcall (*ReallocMem)(void * P, NativeInt Size);
	void * __fastcall (*AllocMem)(NativeInt Size);
	bool __fastcall (*RegisterExpectedMemoryLeak)(void * P);
	bool __fastcall (*UnregisterExpectedMemoryLeak)(void * P);
};


struct DECLSPEC_DRECORD THeapStatus _DEPRECATED_ATTRIBUTE0 
{
public:
	NativeUInt TotalAddrSpace;
	NativeUInt TotalUncommitted;
	NativeUInt TotalCommitted;
	NativeUInt TotalAllocated;
	NativeUInt TotalFree;
	NativeUInt FreeSmall;
	NativeUInt FreeBig;
	NativeUInt Unused;
	NativeUInt Overhead;
	unsigned HeapErrorCode;
};


#pragma pack(push,1)
struct DECLSPEC_DRECORD TSmallBlockTypeState
{
public:
	unsigned InternalBlockSize;
	unsigned UseableBlockSize;
	NativeUInt AllocatedBlockCount;
	NativeUInt ReservedAddressSpace;
};
#pragma pack(pop)


#ifndef _WIN64
typedef System::StaticArray<TSmallBlockTypeState, 55> TSmallBlockTypeStates;
#else /* _WIN64 */
typedef System::StaticArray<TSmallBlockTypeState, 46> TSmallBlockTypeStates;
#endif /* _WIN64 */

#pragma pack(push,1)
struct DECLSPEC_DRECORD TMemoryManagerState
{
public:
	TSmallBlockTypeStates SmallBlockTypeStates;
	unsigned AllocatedMediumBlockCount;
	NativeUInt TotalAllocatedMediumBlockSize;
	NativeUInt ReservedMediumBlockAddressSpace;
	unsigned AllocatedLargeBlockCount;
	NativeUInt TotalAllocatedLargeBlockSize;
	NativeUInt ReservedLargeBlockAddressSpace;
};
#pragma pack(pop)


typedef TMonitorSupport *PMonitorSupport;

struct DECLSPEC_DRECORD TMonitorSupport
{
public:
	void * __fastcall (*NewSyncObject)(void);
	void __fastcall (*FreeSyncObject)(void * SyncObject);
	void * __fastcall (*NewWaitObject)(void);
	void __fastcall (*FreeWaitObject)(void * WaitObject);
	unsigned __fastcall (*WaitOrSignalObject)(void * SignalObject, void * WaitObject, unsigned Timeout);
};


struct DECLSPEC_DRECORD TPtrWrapper
{
private:
	Byte *Value;
	static TPtrWrapper __fastcall GetNilValue();
	
public:
	__fastcall TPtrWrapper(NativeInt AValue)/* overload */;
	__fastcall TPtrWrapper(void * AValue)/* overload */;
	void * __fastcall ToPointer();
	NativeInt __fastcall ToInteger();
	/* static */ __property TPtrWrapper NilValue = {read=GetNilValue};
#ifndef _WIN64
	static bool __fastcall _op_Equality(TPtrWrapper Left, TPtrWrapper Right);
	static bool __fastcall _op_Inequality(TPtrWrapper Left, TPtrWrapper Right);
#else /* _WIN64 */
	static bool __fastcall _op_Equality(const TPtrWrapper &Left, const TPtrWrapper &Right);
	static bool __fastcall _op_Inequality(const TPtrWrapper &Left, const TPtrWrapper &Right);
#endif /* _WIN64 */
	TPtrWrapper() {}
	
#ifndef _WIN64
	friend bool operator ==(TPtrWrapper Left, TPtrWrapper Right) { return TPtrWrapper::_op_Equality(Left, Right); }
	friend bool operator !=(TPtrWrapper Left, TPtrWrapper Right) { return TPtrWrapper::_op_Inequality(Left, Right); }
#else /* _WIN64 */
	friend bool operator ==(const TPtrWrapper &Left, const TPtrWrapper &Right) { return TPtrWrapper::_op_Equality(Left, Right); }
	friend bool operator !=(const TPtrWrapper &Left, const TPtrWrapper &Right) { return TPtrWrapper::_op_Inequality(Left, Right); }
#endif /* _WIN64 */
};


enum DECLSPEC_DENUM TChunkStatus : unsigned char { csUnallocated, csAllocated, csReserved, csSysAllocated, csSysReserved };

typedef System::StaticArray<TChunkStatus, 65536> TMemoryMap;

enum DECLSPEC_DENUM TMinimumBlockAlignment : unsigned char { mba8Byte, mba16Byte };

#pragma pack(push,1)
struct DECLSPEC_DRECORD PackageUnitEntry
{
public:
	void *Init;
	void *FInit;
};
#pragma pack(pop)


typedef UnitEntryTable *PUnitEntryTable;

#ifndef _WIN64
typedef System::StaticArray<void *, 536870911> TTypeTable;
#else /* _WIN64 */
typedef System::StaticArray<void *, 268435455> TTypeTable;
#endif /* _WIN64 */

typedef TTypeTable *PTypeTable;

typedef TPackageTypeInfo *PPackageTypeInfo;

struct DECLSPEC_DRECORD TPackageTypeInfo
{
public:
	int TypeCount;
	TTypeTable *TypeTable;
	int UnitCount;
	ShortString *UnitNames;
};


struct DECLSPEC_DRECORD PackageInfoTable
{
public:
	int UnitCount;
	UnitEntryTable *UnitInfo;
	TPackageTypeInfo TypeInfo;
};


typedef PackageInfoTable *PackageInfo;

typedef PackageInfo __fastcall (*GetPackageInfoTable)(void);

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCVModInfo
{
public:
	char *ModName;
	char *LibName;
	void *UserData;
};
#pragma pack(pop)


typedef TCVModInfo *PCVModInfo;

typedef void __fastcall (*TAssertErrorProc)(const UnicodeString Message, const UnicodeString Filename, int LineNumber, void * ErrorAddr);

typedef void __fastcall (*TSafeCallErrorProc)(HRESULT ErrorCode, void * ErrorAddr);

typedef void __stdcall (*TRaiseExceptionProc)(unsigned ExceptionCode, unsigned ExceptionFlags, unsigned NumberOfArguments, void * Args);

struct DECLSPEC_DRECORD TCPUIDRec
{
public:
	unsigned EAX;
	unsigned EBX;
	unsigned ECX;
	unsigned EDX;
};


enum DECLSPEC_DENUM TTextLineBreakStyle : unsigned char { tlbsLF, tlbsCRLF };

typedef NativeUInt TResourceHandle;

typedef int __fastcall (*TThreadFunc)(void * Parameter);

#pragma pack(push,1)
struct DECLSPEC_DRECORD TFileRec
{
public:
	NativeInt Handle;
	Word Mode;
	Word Flags;
	
public:
	union
	{
		struct 
		{
			unsigned BufSize;
			unsigned BufPos;
			unsigned BufEnd;
			char *BufPtr;
			void *OpenFunc;
			void *InOutFunc;
			void *FlushFunc;
			void *CloseFunc;
			System::StaticArray<Byte, 32> UserData;
			System::StaticArray<WideChar, 260> Name;
		};
		struct 
		{
			unsigned RecSize;
		};
		
	};
};
#pragma pack(pop)


typedef System::StaticArray<char, 128> TTextBuf;

typedef TTextBuf *PTextBuf;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TTextRec
{
public:
	NativeInt Handle;
	Word Mode;
	Word Flags;
	unsigned BufSize;
	unsigned BufPos;
	unsigned BufEnd;
	char *BufPtr;
	void *OpenFunc;
	void *InOutFunc;
	void *FlushFunc;
	void *CloseFunc;
	System::StaticArray<Byte, 32> UserData;
	System::StaticArray<WideChar, 260> Name;
	TTextBuf Buffer;
	Word CodePage;
	Int8 MBCSLength;
	Byte MBCSBufPos;
	
public:
	union
	{
		struct 
		{
			System::StaticArray<WideChar, 3> UTF16Buffer;
		};
		struct 
		{
			System::StaticArray<char, 6> MBCSBuffer;
		};
		
	};
};
#pragma pack(pop)


typedef int __fastcall (*TTextIOFunc)(TTextRec &F);

typedef int __fastcall (*TFileIOFunc)(TFileRec &F);

typedef unsigned __fastcall (*TRandom32Proc)(void);

typedef void __fastcall (*TRandomizeProc)(unsigned __int64 NewSeed);

typedef TLibModule *PLibModule;

struct DECLSPEC_DRECORD TLibModule
{
public:
	TLibModule *Next;
	NativeUInt Instance;
	NativeUInt CodeInstance;
	NativeUInt DataInstance;
	NativeUInt ResInstance;
	TPackageTypeInfo *TypeInfo;
	NativeInt Reserved;
};


typedef bool __fastcall (*TEnumModuleFunc)(NativeInt HInstance, void * Data);

typedef bool __fastcall (*TEnumModuleFuncLW)(NativeUInt HInstance, void * Data);

typedef void __fastcall (*TModuleUnloadProc)(NativeInt HInstance);

typedef void __fastcall (*TModuleUnloadProcLW)(NativeUInt HInstance);

typedef TModuleUnloadRec *PModuleUnloadRec;

struct DECLSPEC_DRECORD TModuleUnloadRec
{
public:
	TModuleUnloadRec *Next;
	TModuleUnloadProcLW Proc;
};


typedef TResStringRec *PResStringRec;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TResStringRec
{
public:
	NativeUInt *Module;
	NativeUInt Identifier;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TFloatSpecial : unsigned char { fsZero, fsNZero, fsDenormal, fsNDenormal, fsPositive, fsNegative, fsInf, fsNInf, fsNaN };

typedef TSingleRec *PSingleRec;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TSingleRec
{
private:
	float aSingle;
	Byte __fastcall InternalGetBytes(unsigned Index);
	Word __fastcall InternalGetWords(unsigned Index);
	void __fastcall InternalSetBytes(unsigned Index, const Byte Value);
	void __fastcall InternalSetWords(unsigned Index, const Word Value);
	Byte __fastcall GetBytes(unsigned Index);
	Word __fastcall GetWords(unsigned Index);
	void __fastcall SetBytes(unsigned Index, const Byte Value);
	void __fastcall SetWords(unsigned Index, const Word Value);
	unsigned __int64 __fastcall GetExp();
	unsigned __int64 __fastcall GetFrac();
	bool __fastcall GetSign();
	void __fastcall SetExp(unsigned __int64 NewExp);
	void __fastcall SetFrac(unsigned __int64 NewFrac);
	void __fastcall SetSign(bool NewSign);
	
public:
	int __fastcall Exponent();
	Extended __fastcall Fraction();
	unsigned __int64 __fastcall Mantissa();
	__property bool Sign = {read=GetSign, write=SetSign};
	__property unsigned __int64 Exp = {read=GetExp, write=SetExp};
	__property unsigned __int64 Frac = {read=GetFrac, write=SetFrac};
	TFloatSpecial __fastcall SpecialType();
	void __fastcall BuildUp(const bool SignFlag, const unsigned __int64 Mantissa, const int Exponent);
	static TSingleRec __fastcall _op_Explicit(Extended a);
	// explicit __fastcall operator Extended();
	__property Byte Bytes[unsigned Index] = {read=GetBytes, write=SetBytes};
	__property Word Words[unsigned Index] = {read=GetWords, write=SetWords};
};
#pragma pack(pop)


typedef TDoubleRec *PDoubleRec;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TDoubleRec
{
private:
	double aDouble;
	Byte __fastcall InternalGetBytes(unsigned Index);
	Word __fastcall InternalGetWords(unsigned Index);
	void __fastcall InternalSetBytes(unsigned Index, const Byte Value);
	void __fastcall InternalSetWords(unsigned Index, const Word Value);
	Byte __fastcall GetBytes(unsigned Index);
	Word __fastcall GetWords(unsigned Index);
	void __fastcall SetBytes(unsigned Index, const Byte Value);
	void __fastcall SetWords(unsigned Index, const Word Value);
	unsigned __int64 __fastcall GetExp();
	unsigned __int64 __fastcall GetFrac();
	bool __fastcall GetSign();
	void __fastcall SetExp(unsigned __int64 NewExp);
	void __fastcall SetFrac(unsigned __int64 NewFrac);
	void __fastcall SetSign(bool NewSign);
	
public:
	int __fastcall Exponent();
	Extended __fastcall Fraction();
	unsigned __int64 __fastcall Mantissa();
	__property bool Sign = {read=GetSign, write=SetSign};
	__property unsigned __int64 Exp = {read=GetExp, write=SetExp};
	__property unsigned __int64 Frac = {read=GetFrac, write=SetFrac};
	TFloatSpecial __fastcall SpecialType();
	void __fastcall BuildUp(const bool SignFlag, const unsigned __int64 Mantissa, const int Exponent);
	static TDoubleRec __fastcall _op_Explicit(Extended a);
	// explicit __fastcall operator Extended();
	__property Byte Bytes[unsigned Index] = {read=GetBytes, write=SetBytes};
	__property Word Words[unsigned Index] = {read=GetWords, write=SetWords};
};
#pragma pack(pop)


typedef TExtended80Rec *PExtended80Rec;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TExtended80Rec
{
private:
#ifndef _WIN64
	Extended aExtended80;
#else /* _WIN64 */
	unsigned __int64 aExtended80Frac;
	Word aExtended80Exp;
#endif /* _WIN64 */
	Byte __fastcall InternalGetBytes(unsigned Index);
	Word __fastcall InternalGetWords(unsigned Index);
	void __fastcall InternalSetBytes(unsigned Index, const Byte Value);
	void __fastcall InternalSetWords(unsigned Index, const Word Value);
	Byte __fastcall GetBytes(unsigned Index);
	Word __fastcall GetWords(unsigned Index);
	unsigned __int64 __fastcall Get_Exp();
	unsigned __int64 __fastcall GetExp();
	unsigned __int64 __fastcall GetFrac();
	bool __fastcall GetSign();
	void __fastcall SetBytes(unsigned Index, const Byte Value);
	void __fastcall SetWords(unsigned Index, const Word Value);
	void __fastcall Set_Exp(unsigned __int64 NewExp);
	void __fastcall SetExp(unsigned __int64 NewExp);
	void __fastcall SetFrac(unsigned __int64 NewFrac);
	void __fastcall SetSign(bool NewSign);
	
public:
	int __fastcall Exponent();
	Extended __fastcall Fraction();
	unsigned __int64 __fastcall Mantissa();
	__property bool Sign = {read=GetSign, write=SetSign};
	__property unsigned __int64 Exp = {read=GetExp, write=SetExp};
	__property unsigned __int64 _Exp = {read=Get_Exp, write=Set_Exp};
	__property unsigned __int64 Frac = {read=GetFrac, write=SetFrac};
	TFloatSpecial __fastcall SpecialType();
	void __fastcall BuildUp(const bool SignFlag, const unsigned __int64 Mantissa, const int Exponent);
	static TExtended80Rec __fastcall _op_Explicit(Extended a);
	// explicit __fastcall operator Extended();
	__property Byte Bytes[unsigned Index] = {read=GetBytes, write=SetBytes};
	__property Word Words[unsigned Index] = {read=GetWords, write=SetWords};
};
#pragma pack(pop)


#ifndef _WIN64
typedef PExtended80Rec PExtendedRec;

typedef TExtended80Rec TExtendedRec;

typedef TInitContext *PInitContext;

struct DECLSPEC_DRECORD TInitContext
{
public:
	TInitContext *OuterContext;
	void *ExcFrame;
	PackageInfoTable *InitTable;
	int InitCount;
	TLibModule *Module;
	void *DLLSaveEBP;
	void *DLLSaveEBX;
	void *DLLSaveESI;
	void *DLLSaveEDI;
	void __fastcall (*ExitProcessTLS)(void);
	Byte DLLInitState;
	unsigned ThreadID;
};
#else /* _WIN64 */
typedef PDoubleRec PExtendedRec;
#endif /* _WIN64 */

#ifdef _WIN64
typedef TDoubleRec TExtendedRec;
#endif /* _WIN64 */

typedef void __fastcall (*TDLLProc)(int Reason);

typedef void __fastcall (*TDLLProcEx)(int Reason, void * Reserved);

typedef TExceptionRecord *PExceptionRecord;

struct DECLSPEC_DRECORD TExceptionRecord
{
public:
	unsigned ExceptionCode;
	unsigned ExceptionFlags;
	TExceptionRecord *ExceptionRecord;
	void *ExceptionAddress;
	unsigned NumberParameters;
	
public:
	union
	{
		struct 
		{
			void *ExceptAddr;
			void *ExceptObject;
		};
		struct 
		{
			System::StaticArray<NativeUInt, 15> ExceptionInformation;
		};
		
	};
};


typedef void * __fastcall (*TExceptClsProc)(PExceptionRecord P);

typedef void * __fastcall (*TExceptObjProc)(PExceptionRecord P);

typedef void __fastcall (*TRaiseExceptObjProc)(PExceptionRecord P);

typedef LongBool *PLongBool;

//-- var, const, procedure ---------------------------------------------------
static const bool False = false;
static const bool True = true;
static const int MaxInt = int(2147483647);
static const int MaxLongInt = int(2147483647);
#define RTLVersion  (3.500000E+01)
static const bool RTLVersion111 = true;
static const bool RTLVersion112 = true;
static const bool RTLVersion113 = true;
static const System::Int8 varEmpty = System::Int8(0x0);
static const System::Int8 varNull = System::Int8(0x1);
static const System::Int8 varSmallint = System::Int8(0x2);
static const System::Int8 varInteger = System::Int8(0x3);
static const System::Int8 varSingle = System::Int8(0x4);
static const System::Int8 varDouble = System::Int8(0x5);
static const System::Int8 varCurrency = System::Int8(0x6);
static const System::Int8 varDate = System::Int8(0x7);
static const System::Int8 varOleStr = System::Int8(0x8);
static const System::Int8 varDispatch = System::Int8(0x9);
static const System::Int8 varError = System::Int8(0xa);
static const System::Int8 varBoolean = System::Int8(0xb);
static const System::Int8 varVariant = System::Int8(0xc);
static const System::Int8 varUnknown = System::Int8(0xd);
static const System::Int8 varShortInt = System::Int8(0x10);
static const System::Int8 varByte = System::Int8(0x11);
static const System::Int8 varWord = System::Int8(0x12);
static const System::Int8 varLongWord = System::Int8(0x13);
static const System::Int8 varUInt32 = System::Int8(0x13);
static const System::Int8 varInt64 = System::Int8(0x14);
static const System::Int8 varUInt64 = System::Int8(0x15);
static const System::Int8 varRecord = System::Int8(0x24);
static const System::Int8 varStrArg = System::Int8(0x48);
static const System::Int8 varObject = System::Int8(0x49);
static const System::Int8 varUStrArg = System::Int8(0x4a);
static const System::Word varString = System::Word(0x100);
static const System::Word varAny = System::Word(0x101);
static const System::Word varUString = System::Word(0x102);
static const System::Word varTypeMask = System::Word(0xfff);
static const System::Word varArray = System::Word(0x2000);
static const System::Word varByRef = System::Word(0x4000);
static const System::Int8 vtInteger = System::Int8(0x0);
static const System::Int8 vtBoolean = System::Int8(0x1);
static const System::Int8 vtChar = System::Int8(0x2);
static const System::Int8 vtExtended = System::Int8(0x3);
static const System::Int8 vtString = System::Int8(0x4);
static const System::Int8 vtPointer = System::Int8(0x5);
static const System::Int8 vtPChar = System::Int8(0x6);
static const System::Int8 vtObject = System::Int8(0x7);
static const System::Int8 vtClass = System::Int8(0x8);
static const System::Int8 vtWideChar = System::Int8(0x9);
static const System::Int8 vtPWideChar = System::Int8(0xa);
static const System::Int8 vtAnsiString = System::Int8(0xb);
static const System::Int8 vtCurrency = System::Int8(0xc);
static const System::Int8 vtVariant = System::Int8(0xd);
static const System::Int8 vtInterface = System::Int8(0xe);
static const System::Int8 vtWideString = System::Int8(0xf);
static const System::Int8 vtInt64 = System::Int8(0x10);
static const System::Int8 vtUnicodeString = System::Int8(0x11);
static const System::Int8 vmtArcOffset = System::Int8(0x0);
#ifndef _WIN64
static const System::Int8 CPP_ABI_ADJUST = System::Int8(0x0);
static const Int8 vmtSelfPtr = Int8(-88);
static const Int8 vmtIntfTable = Int8(-84);
static const Int8 vmtAutoTable = Int8(-80);
static const Int8 vmtInitTable = Int8(-76);
static const Int8 vmtTypeInfo = Int8(-72);
static const Int8 vmtFieldTable = Int8(-68);
static const Int8 vmtMethodTable = Int8(-64);
static const Int8 vmtDynamicTable = Int8(-60);
static const Int8 vmtClassName = Int8(-56);
static const Int8 vmtInstanceSize = Int8(-52);
static const Int8 vmtParent = Int8(-48);
static const Int8 vmtEquals _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-44);
static const Int8 vmtGetHashCode _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-40);
static const Int8 vmtToString _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-36);
static const Int8 vmtSafeCallException _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-32);
static const Int8 vmtAfterConstruction _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-28);
static const Int8 vmtBeforeDestruction _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-24);
static const Int8 vmtDispatch _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-20);
static const Int8 vmtDefaultHandler _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-16);
static const Int8 vmtNewInstance _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-12);
static const Int8 vmtFreeInstance _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-8);
static const Int8 vmtDestroy _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-4);
#else /* _WIN64 */
static const System::Int8 CPP_ABI_ADJUST = System::Int8(0x18);
static const short vmtSelfPtr = short(-200);
static const short vmtIntfTable = short(-192);
static const short vmtAutoTable = short(-184);
static const short vmtInitTable = short(-176);
static const short vmtTypeInfo = short(-168);
static const short vmtFieldTable = short(-160);
static const short vmtMethodTable = short(-152);
static const short vmtDynamicTable = short(-144);
static const short vmtClassName = short(-136);
static const Int8 vmtInstanceSize = Int8(-128);
static const Int8 vmtParent = Int8(-120);
static const Int8 vmtEquals _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-112);
static const Int8 vmtGetHashCode _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-104);
static const Int8 vmtToString _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-96);
static const Int8 vmtSafeCallException _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-88);
static const Int8 vmtAfterConstruction _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-80);
static const Int8 vmtBeforeDestruction _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-72);
static const Int8 vmtDispatch _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-64);
static const Int8 vmtDefaultHandler _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-56);
static const Int8 vmtNewInstance _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-48);
static const Int8 vmtFreeInstance _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-40);
static const Int8 vmtDestroy _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = Int8(-32);
#endif /* _WIN64 */
static const System::Int8 vmtQueryInterface _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = System::Int8(0x0);
#ifndef _WIN64
static const System::Int8 vmtAddRef _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = System::Int8(0x4);
static const System::Int8 vmtRelease _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = System::Int8(0x8);
static const System::Int8 vmtCreateObject _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = System::Int8(0xc);
static const int hfFieldSize = int(0x4);
#else /* _WIN64 */
static const System::Int8 vmtAddRef _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = System::Int8(0x8);
static const System::Int8 vmtRelease _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = System::Int8(0x10);
static const System::Int8 vmtCreateObject _DEPRECATED_ATTRIBUTE1("Use VMTOFFSET in asm code")  = System::Int8(0x18);
static const int hfFieldSize = int(0x8);
#endif /* _WIN64 */
static const System::Int8 hfMonitorOffset = System::Int8(0x0);
#define DefaultMethodRttiVisibility (Set<System__1, System__1::vcPrivate, System__1::vcPublished>() << System__1::vcPublic << System__1::vcPublished )
#define DefaultFieldRttiVisibility (Set<System__1, System__1::vcPrivate, System__1::vcPublished>() << System__1::vcPrivate << System__1::vcProtected << System__1::vcPublic << System__1::vcPublished )
#define DefaultPropertyRttiVisibility (Set<System__1, System__1::vcPrivate, System__1::vcPublished>() << System__1::vcPublic << System__1::vcPublished )
static const System::Int8 opAdd = System::Int8(0x0);
static const System::Int8 opSubtract = System::Int8(0x1);
static const System::Int8 opMultiply = System::Int8(0x2);
static const System::Int8 opDivide = System::Int8(0x3);
static const System::Int8 opIntDivide = System::Int8(0x4);
static const System::Int8 opModulus = System::Int8(0x5);
static const System::Int8 opShiftLeft = System::Int8(0x6);
static const System::Int8 opShiftRight = System::Int8(0x7);
static const System::Int8 opAnd = System::Int8(0x8);
static const System::Int8 opOr = System::Int8(0x9);
static const System::Int8 opXor = System::Int8(0xa);
static const System::Int8 opCompare = System::Int8(0xb);
static const System::Int8 opNegate = System::Int8(0xc);
static const System::Int8 opNot = System::Int8(0xd);
static const System::Int8 opCmpEQ = System::Int8(0xe);
static const System::Int8 opCmpNE = System::Int8(0xf);
static const System::Int8 opCmpLT = System::Int8(0x10);
static const System::Int8 opCmpLE = System::Int8(0x11);
static const System::Int8 opCmpGT = System::Int8(0x12);
static const System::Int8 opCmpGE = System::Int8(0x13);
static const TTypeKind tkAnsiChar = (TTypeKind)(2);
static const TTypeKind tkWideChar = (TTypeKind)(9);
static const TTypeKind tkUnicodeString = (TTypeKind)(18);
static const TTypeKind tkAnsiString = (TTypeKind)(10);
static const TTypeKind tkWideString = (TTypeKind)(11);
static const TTypeKind tkShortString = (TTypeKind)(5);
#ifndef _WIN64
static const System::Int8 NumSmallBlockTypes = System::Int8(0x37);
#else /* _WIN64 */
static const System::Int8 NumSmallBlockTypes = System::Int8(0x2e);
#endif /* _WIN64 */
extern DELPHI_PACKAGE void *DispCallByIDProc;
extern DELPHI_PACKAGE void *ExceptProc;
extern DELPHI_PACKAGE void __fastcall (*ErrorProc)(Byte ErrorCode, void * ErrorAddr);
extern DELPHI_PACKAGE void *ExceptClsProc;
extern DELPHI_PACKAGE void *ExceptObjProc;
#ifndef _WIN64
extern DELPHI_PACKAGE void *RaiseExceptionProc;
#else /* _WIN64 */
extern DELPHI_PACKAGE TRaiseExceptionProc RaiseExceptionProc;
#endif /* _WIN64 */
extern DELPHI_PACKAGE void *RTLUnwindProc;
extern DELPHI_PACKAGE void *RaiseExceptObjProc;
extern DELPHI_PACKAGE void *ExceptionAcquired;
extern DELPHI_PACKAGE TClass ExceptionClass;
extern DELPHI_PACKAGE TSafeCallErrorProc SafeCallErrorProc;
extern DELPHI_PACKAGE TAssertErrorProc AssertErrorProc;
extern DELPHI_PACKAGE void __fastcall (*ExitProcessProc)(void);
extern DELPHI_PACKAGE void __fastcall (*AbstractErrorProc)(void);
extern DELPHI_PACKAGE unsigned HPrevInst _DEPRECATED_ATTRIBUTE0 ;
extern DELPHI_PACKAGE unsigned MainThreadID;
extern DELPHI_PACKAGE bool IsLibrary;
extern DELPHI_PACKAGE int CmdShow;
extern DELPHI_PACKAGE WideChar *CmdLine;
extern DELPHI_PACKAGE void *InitProc;
extern DELPHI_PACKAGE int ExitCode;
extern DELPHI_PACKAGE void *ExitProc;
extern DELPHI_PACKAGE void *ErrorAddr;
extern DELPHI_PACKAGE int RandSeed;
extern DELPHI_PACKAGE bool IsConsole;
extern DELPHI_PACKAGE bool IsMultiThread;
extern DELPHI_PACKAGE Byte FileMode;
extern DELPHI_PACKAGE Byte Test8086;
extern DELPHI_PACKAGE Byte Test8087;
extern DELPHI_PACKAGE Int8 TestFDIV;
extern DELPHI_PACKAGE unsigned TestSSE;
extern DELPHI_PACKAGE int CPUCount;
extern DELPHI_PACKAGE TextFile Input;
extern DELPHI_PACKAGE TextFile Output;
extern DELPHI_PACKAGE TextFile ErrOutput;
extern DELPHI_PACKAGE void __fastcall (*VarClearProc)(TVarData &v);
extern DELPHI_PACKAGE void __fastcall (*VarAddRefProc)(TVarData &v);
extern DELPHI_PACKAGE void __fastcall (*VarCopyProc)(TVarData &Dest, const TVarData &Source);
extern DELPHI_PACKAGE void __fastcall (*VarToLStrProc)(AnsiString &Dest, const TVarData &Source, Word CodePage/* = (Word)(0x0)*/);
extern DELPHI_PACKAGE void __fastcall (*VarToWStrProc)(WideString &Dest, const TVarData &Source);
extern DELPHI_PACKAGE void __fastcall (*VarToUStrProc)(UnicodeString &Dest, const TVarData &Source);
extern DELPHI_PACKAGE void __fastcall (*DLLShutdownProc)(void);
static const System::Int8 CPUi386 = System::Int8(0x2);
static const System::Int8 CPUi486 = System::Int8(0x3);
static const System::Int8 CPUPentium = System::Int8(0x4);
extern DELPHI_PACKAGE System::StaticArray<TCPUIDRec, 8> CPUIDTable;
extern DELPHI_PACKAGE NativeInt ERMSBThreshold;
extern DELPHI_PACKAGE Word Default8087CW;
extern DELPHI_PACKAGE unsigned DefaultMXCSR;
extern DELPHI_PACKAGE Word HeapAllocFlags;
extern DELPHI_PACKAGE Byte DebugHook;
extern DELPHI_PACKAGE Byte JITEnable;
extern DELPHI_PACKAGE bool NoErrMsg;
extern DELPHI_PACKAGE int DefaultSystemCodePage;
extern DELPHI_PACKAGE int DefaultUnicodeCodePage;
extern DELPHI_PACKAGE unsigned UTF8CompareLocale;
extern DELPHI_PACKAGE TTextLineBreakStyle DefaultTextLineBreakStyle;
#define sLineBreak "\r\n"
extern DELPHI_PACKAGE int AllocMemCount _DEPRECATED_ATTRIBUTE0 ;
extern DELPHI_PACKAGE int AllocMemSize _DEPRECATED_ATTRIBUTE0 ;
extern DELPHI_PACKAGE bool ReportMemoryLeaksOnShutdown;
extern DELPHI_PACKAGE bool NeverSleepOnMMThreadContention;
extern DELPHI_PACKAGE TSystemThreadFuncProc SystemThreadFuncProc;
extern DELPHI_PACKAGE TSystemThreadEndProc SystemThreadEndProc;
static const Word fmClosed = Word(0xd7b0);
static const Word fmInput = Word(0xd7b1);
static const Word fmOutput = Word(0xd7b2);
static const Word fmInOut = Word(0xd7b3);
static const System::Int8 tfCRLF = System::Int8(0x1);
extern DELPHI_PACKAGE TRandom32Proc Random32Proc;
extern DELPHI_PACKAGE TRandomizeProc RandomizeProc;
static const System::Int8 feeINEXACT = System::Int8(0x20);
static const System::Int8 feeUNDERFLOW = System::Int8(0x10);
static const System::Int8 feeOVERFLOW = System::Int8(0x8);
static const System::Int8 feeDIVBYZERO = System::Int8(0x4);
static const System::Int8 feeINVALID = System::Int8(0x1);
static const System::Int8 feeALLEXCEPT = System::Int8(0x3f);
#ifdef _WIN64
static const System::Word femINEXACT = System::Word(0x1000);
static const System::Word femUNDERFLOW = System::Word(0x800);
static const System::Word femOVERFLOW = System::Word(0x400);
static const System::Word femDIVBYZERO = System::Word(0x200);
static const Byte femINVALID = Byte(0x80);
static const System::Word femALLEXCEPT = System::Word(0x1f80);
#endif /* _WIN64 */
static const System::Int8 feeDENORMALOPERAND = System::Int8(0x2);
#ifndef _WIN64
static const System::Int8 femINEXACT = System::Int8(0x20);
static const System::Int8 femUNDERFLOW = System::Int8(0x10);
static const System::Int8 femOVERFLOW = System::Int8(0x8);
static const System::Int8 femDIVBYZERO = System::Int8(0x4);
static const System::Int8 femINVALID = System::Int8(0x1);
static const System::Int8 femALLEXCEPT = System::Int8(0x3f);
static const System::Int8 femDENORMALOPERAND = System::Int8(0x2);
#else /* _WIN64 */
static const System::Word femDENORMALOPERAND = System::Word(0x100);
#endif /* _WIN64 */
static const System::Int8 ferTONEAREST = System::Int8(0x0);
#ifndef _WIN64
static const System::Word ferUPWARD = System::Word(0x800);
static const System::Word ferDOWNWARD = System::Word(0x400);
static const System::Word ferTOWARDZERO = System::Word(0xc00);
static const System::Word ferALLROUND = System::Word(0xc00);
#else /* _WIN64 */
static const System::Word ferUPWARD = System::Word(0x4000);
static const System::Word ferDOWNWARD = System::Word(0x2000);
static const System::Word ferTOWARDZERO = System::Word(0x6000);
static const System::Word ferALLROUND = System::Word(0x6000);
#endif /* _WIN64 */
extern DELPHI_PACKAGE TLibModule *LibModuleList;
extern DELPHI_PACKAGE TModuleUnloadRec *ModuleUnloadList;
extern DELPHI_PACKAGE UnicodeString __fastcall (*LoadResStringFunc)(PResStringRec ResStringRec);
extern DELPHI_PACKAGE void * __fastcall (*AlternateWriteUnicodeStringProc)(TTextRec &t, UnicodeString s);
extern DELPHI_PACKAGE void __fastcall TextStart _DEPRECATED_ATTRIBUTE0 (void);
extern DELPHI_PACKAGE int __fastcall Pos(const UnicodeString SubStr, const UnicodeString Str, int Offset = 0x1)/* overload */;
extern DELPHI_PACKAGE int __fastcall Pos(const WideString SubStr, const WideString Str, int Offset = 0x1)/* overload */;
extern DELPHI_PACKAGE int __fastcall Pos(const RawByteString SubStr, const RawByteString Str, int Offset = 0x1)/* overload */;
extern DELPHI_PACKAGE void * __fastcall SysGetMem(NativeInt Size);
extern DELPHI_PACKAGE int __fastcall SysFreeMem(void * P);
extern DELPHI_PACKAGE void * __fastcall SysReallocMem(void * P, NativeInt Size);
extern DELPHI_PACKAGE void * __fastcall SysAllocMem(NativeInt Size);
extern DELPHI_PACKAGE bool __fastcall SysRegisterExpectedMemoryLeak(void * P);
extern DELPHI_PACKAGE bool __fastcall SysUnregisterExpectedMemoryLeak(void * P);
extern DELPHI_PACKAGE void __fastcall GetMemoryManagerState(TMemoryManagerState &AMemoryManagerState);
extern DELPHI_PACKAGE void __fastcall GetMemoryMap(TMemoryMap &AMemoryMap);
extern DELPHI_PACKAGE THeapStatus __fastcall GetHeapStatus _DEPRECATED_ATTRIBUTE0 (void);
extern DELPHI_PACKAGE bool __fastcall AttemptToUseSharedMemoryManager(void);
extern DELPHI_PACKAGE bool __fastcall ShareMemoryManager(void);
extern DELPHI_PACKAGE TMinimumBlockAlignment __fastcall GetMinimumBlockAlignment(void);
extern DELPHI_PACKAGE void __fastcall SetMinimumBlockAlignment(TMinimumBlockAlignment AMinimumBlockAlignment);
extern DELPHI_PACKAGE void * __fastcall AllocMem(NativeInt Size);
extern DELPHI_PACKAGE bool __fastcall RegisterExpectedMemoryLeak(void * P);
extern DELPHI_PACKAGE bool __fastcall UnregisterExpectedMemoryLeak(void * P);
extern DELPHI_PACKAGE void __fastcall GetMemoryManager _DEPRECATED_ATTRIBUTE0 (TMemoryManager &MemMgr)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetMemoryManager _DEPRECATED_ATTRIBUTE0 (const TMemoryManager &MemMgr)/* overload */;
extern DELPHI_PACKAGE void __fastcall GetMemoryManager(TMemoryManagerEx &MemMgrEx)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetMemoryManager(const TMemoryManagerEx &MemMgrEx)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsMemoryManagerSet(void);
#ifdef _WIN64
extern DELPHI_PACKAGE void * __fastcall RaiseList _DEPRECATED_ATTRIBUTE1("Use AcquireExceptionObject") (void);
extern DELPHI_PACKAGE void * __fastcall SetRaiseList _DEPRECATED_ATTRIBUTE1("Use AcquireExceptionObject") (void * NewPtr);
#endif /* _WIN64 */
extern DELPHI_PACKAGE TObject* __fastcall ExceptObject(void);
extern DELPHI_PACKAGE void * __fastcall ExceptAddr(void);
extern DELPHI_PACKAGE TObject* __fastcall AcquireExceptionObject(void);
extern DELPHI_PACKAGE void __fastcall ReleaseExceptionObject(void);
#ifndef _WIN64
extern DELPHI_PACKAGE void * __fastcall RaiseList _DEPRECATED_ATTRIBUTE1("Use AcquireExceptionObject") (void);
extern DELPHI_PACKAGE void * __fastcall SetRaiseList _DEPRECATED_ATTRIBUTE1("Use AcquireExceptionObject") (void * NewPtr);
#endif /* not _WIN64 */
extern DELPHI_PACKAGE void __fastcall SetLineBreakStyle(TextFile &T, TTextLineBreakStyle Style);
extern DELPHI_PACKAGE Word __fastcall GetTextCodePage(const TextFile &T);
extern DELPHI_PACKAGE void __fastcall SetTextCodePage(TextFile &T, Word CodePage);
extern DELPHI_PACKAGE void __fastcall SetInOutRes(int NewValue);
extern DELPHI_PACKAGE void __fastcall ChDir(const UnicodeString S)/* overload */;
extern DELPHI_PACKAGE void __fastcall ChDir(WideChar * P)/* overload */;
extern DELPHI_PACKAGE int __fastcall IOResult(void);
extern DELPHI_PACKAGE void __fastcall MkDir(const UnicodeString S)/* overload */;
extern DELPHI_PACKAGE void __fastcall MkDir(WideChar * P)/* overload */;
extern DELPHI_PACKAGE void __fastcall Move(const void *Source, void *Dest, NativeInt Count);
extern DELPHI_PACKAGE void __fastcall MoveChars(const void *Source, void *Dest, int Length);
extern DELPHI_PACKAGE int __fastcall ParamCount(void);
extern DELPHI_PACKAGE UnicodeString __fastcall ParamStr(int Index);
extern DELPHI_PACKAGE void __fastcall DefaultRandomize(unsigned __int64 NewSeed);
extern DELPHI_PACKAGE void __fastcall Randomize(void);
extern DELPHI_PACKAGE unsigned __fastcall DefaultRandom32(void);
extern DELPHI_PACKAGE int __fastcall Random(const int ARange)/* overload */;
extern DELPHI_PACKAGE Extended __fastcall Random(void)/* overload */;
extern DELPHI_PACKAGE void __fastcall RmDir(const UnicodeString S)/* overload */;
extern DELPHI_PACKAGE void __fastcall RmDir(WideChar * P)/* overload */;
extern DELPHI_PACKAGE char __fastcall UpCase(char Ch)/* overload */;
extern DELPHI_PACKAGE WideChar __fastcall UpCase(WideChar Ch)/* overload */;
extern DELPHI_PACKAGE void __fastcall FClearExcept(void);
extern DELPHI_PACKAGE void __fastcall FCheckExcept(void);
extern DELPHI_PACKAGE unsigned __fastcall FSetExceptFlag(unsigned NewFlags, unsigned Excepts = (unsigned)(0x3f));
extern DELPHI_PACKAGE unsigned __fastcall FGetExceptFlag(unsigned Excepts = (unsigned)(0x3f));
extern DELPHI_PACKAGE void __fastcall FRaiseExcept(unsigned excepts, bool CheckExceptionMask = true);
extern DELPHI_PACKAGE unsigned __fastcall FGetRound(void);
extern DELPHI_PACKAGE unsigned __fastcall FSetRound(unsigned NewRound);
#ifndef _WIN64
extern DELPHI_PACKAGE unsigned __fastcall FSetExceptMask(unsigned NewMasks, unsigned ExceptMasks = (unsigned)(0x3f));
extern DELPHI_PACKAGE unsigned __fastcall FGetExceptMask(unsigned ExceptMasks = (unsigned)(0x3f));
#else /* _WIN64 */
extern DELPHI_PACKAGE unsigned __fastcall FSetExceptMask(unsigned NewMasks, unsigned ExceptMasks = (unsigned)(0x1f80));
extern DELPHI_PACKAGE unsigned __fastcall FGetExceptMask(unsigned ExceptMasks = (unsigned)(0x1f80));
#endif /* _WIN64 */
extern DELPHI_PACKAGE void __fastcall Reset8087CW(void);
extern DELPHI_PACKAGE void __fastcall Set8087CW(Word NewCW);
extern DELPHI_PACKAGE Word __fastcall Get8087CW(void);
extern DELPHI_PACKAGE void __fastcall ResetMXCSR(void);
extern DELPHI_PACKAGE void __fastcall SetMXCSR(unsigned NewMXCSR);
extern DELPHI_PACKAGE void __fastcall SetMXCSRExceptionFlag(unsigned NewExceptionFlag);
extern DELPHI_PACKAGE unsigned __fastcall GetMXCSR(void);
#ifndef _WIN64
extern DELPHI_PACKAGE Extended __fastcall Int(const Extended X);
extern DELPHI_PACKAGE Extended __fastcall Frac(const Extended X);
extern DELPHI_PACKAGE Extended __fastcall Exp(const Extended X);
extern DELPHI_PACKAGE Extended __fastcall ExpMinus1(const Extended X);
extern DELPHI_PACKAGE Extended __fastcall Cos(const Extended X);
extern DELPHI_PACKAGE Extended __fastcall Sin(const Extended X);
extern DELPHI_PACKAGE Extended __fastcall Tangent(const Extended X);
extern DELPHI_PACKAGE void __fastcall SineCosine(const Extended X, Extended &Sin, Extended &Cos);
extern DELPHI_PACKAGE Extended __fastcall Ln(const Extended X);
extern DELPHI_PACKAGE Extended __fastcall LnXPlus1(const Extended X);
extern DELPHI_PACKAGE Extended __fastcall ArcTan(const Extended X);
extern DELPHI_PACKAGE Extended __fastcall Sqrt(const Extended X);
#else /* _WIN64 */
extern DELPHI_PACKAGE double __fastcall Int(const double X)/* overload */;
extern DELPHI_PACKAGE double __fastcall Frac(const double X)/* overload */;
extern DELPHI_PACKAGE double __fastcall Exp(const double X)/* overload */;
extern DELPHI_PACKAGE double __fastcall ExpMinus1(const double X)/* overload */;
extern DELPHI_PACKAGE double __fastcall Cos(const double X)/* overload */;
extern DELPHI_PACKAGE double __fastcall Sin(const double X)/* overload */;
extern DELPHI_PACKAGE double __fastcall Tangent(const double X)/* overload */;
extern DELPHI_PACKAGE void __fastcall SineCosine(const double X, double &Sin, double &Cos)/* overload */;
extern DELPHI_PACKAGE double __fastcall Ln(const double X)/* overload */;
extern DELPHI_PACKAGE double __fastcall LnXPlus1(const double X)/* overload */;
extern DELPHI_PACKAGE double __fastcall ArcTan(const double X)/* overload */;
extern DELPHI_PACKAGE double __fastcall Sqrt(const double X)/* overload */;
#endif /* _WIN64 */
extern DELPHI_PACKAGE int __fastcall Flush(TextFile &t);
extern DELPHI_PACKAGE void __fastcall Mark _DEPRECATED_ATTRIBUTE0 (void);
extern DELPHI_PACKAGE bool __fastcall IsICUAvailable(void);
extern DELPHI_PACKAGE void __fastcall Release _DEPRECATED_ATTRIBUTE0 (void);
#ifndef _WIN64
extern DELPHI_PACKAGE void __fastcall FPower10 _DEPRECATED_ATTRIBUTE1("Use Power10") (void);
#else /* _WIN64 */
extern DELPHI_PACKAGE Extended __fastcall FPower10 _DEPRECATED_ATTRIBUTE1("Use Power10") (Extended val, int power);
#endif /* _WIN64 */
extern DELPHI_PACKAGE Extended __fastcall Power10(Extended val, int power);
extern DELPHI_PACKAGE TCPUIDRec __fastcall GetCPUID(unsigned FunctionID, unsigned SubFunctionID = (unsigned)(0x0));
extern DELPHI_PACKAGE UnicodeString __fastcall UTF8IdentToString(const PShortString Name);
extern DELPHI_PACKAGE bool __fastcall UTF8IdentStringCompare(const PShortString Name1, const UnicodeString Name2);
extern DELPHI_PACKAGE bool __fastcall UTF8IdentIdentCompare(const PShortString Name1, const PShortString Name2);
extern DELPHI_PACKAGE int __fastcall UTF8IdentLength(const UnicodeString Name);
extern DELPHI_PACKAGE void * __fastcall GetDynaMethod(TClass vmt, short selector);
extern DELPHI_PACKAGE bool __fastcall MonitorEnter(TObject* const AObject, unsigned Timeout = (unsigned)(0xffffffff));
extern DELPHI_PACKAGE bool __fastcall MonitorTryEnter(TObject* const AObject);
extern DELPHI_PACKAGE void __fastcall MonitorExit(TObject* const AObject);
extern DELPHI_PACKAGE bool __fastcall MonitorWait(TObject* const AObject, unsigned Timeout)/* overload */;
extern DELPHI_PACKAGE bool __fastcall MonitorWait(TObject* const AObject, TObject* const ALock, unsigned Timeout)/* overload */;
extern DELPHI_PACKAGE void __fastcall MonitorPulse(TObject* const AObject);
extern DELPHI_PACKAGE void __fastcall MonitorPulseAll(TObject* const AObject);
extern DELPHI_PACKAGE void __stdcall DLLShutdown(void);
extern DELPHI_PACKAGE NativeUInt __fastcall BeginThread(void * SecurityAttributes, unsigned StackSize, TThreadFunc ThreadFunc, void * Parameter, unsigned CreationFlags, unsigned &ThreadId);
extern DELPHI_PACKAGE void __fastcall EndThread(int ExitCode);
extern DELPHI_PACKAGE Word __fastcall StringElementSize(const UnicodeString S)/* overload */;
extern DELPHI_PACKAGE Word __fastcall StringElementSize(const RawByteString S)/* overload */;
extern DELPHI_PACKAGE Word __fastcall StringCodePage(const UnicodeString S)/* overload */;
extern DELPHI_PACKAGE Word __fastcall StringCodePage(const RawByteString S)/* overload */;
extern DELPHI_PACKAGE int __fastcall StringRefCount(const UnicodeString S)/* overload */;
extern DELPHI_PACKAGE int __fastcall StringRefCount(const RawByteString S)/* overload */;
extern DELPHI_PACKAGE void __fastcall UniqueString(UnicodeString &Str)/* overload */;
extern DELPHI_PACKAGE void __fastcall UniqueString(WideString &Str)/* overload */;
extern DELPHI_PACKAGE void __fastcall UniqueString(AnsiString &Str)/* overload */;
extern DELPHI_PACKAGE int __fastcall Pos(const ShortString &SubStr, const ShortString &Str, int Offset = 0x1)/* overload */;
extern DELPHI_PACKAGE UnicodeString __fastcall StringOfChar(WideChar Ch, int Count)/* overload */;
extern DELPHI_PACKAGE AnsiString __fastcall StringOfChar(char Ch, int Count)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetAnsiString(PAnsiString Dest, char * Source, int Length, Word CodePage)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetAnsiString(PAnsiString Dest, WideChar * Source, int Length, Word CodePage)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetCodePage(RawByteString &S, Word CodePage, bool Convert = true);
extern DELPHI_PACKAGE UCS4String __fastcall UnicodeStringToUCS4String(const UnicodeString S);
extern DELPHI_PACKAGE UnicodeString __fastcall UCS4StringToUnicodeString(const UCS4String S);
extern DELPHI_PACKAGE UCS4String __fastcall WideCharToUCS4String(WideChar * S, int Len = 0x7fffffff);
extern DELPHI_PACKAGE void __fastcall InitializeArray(void * p, void * typeInfo, NativeUInt elemCount);
extern DELPHI_PACKAGE void __fastcall MoveRecord(void * Dest, void * Source, void * TypeInfo);
extern DELPHI_PACKAGE void __fastcall MoveArray(void * Dest, void * Source, void * TypeInfo, NativeInt Count);
extern DELPHI_PACKAGE void __fastcall CopyArray(void * Dest, void * Source, void * TypeInfo, NativeInt Count);
extern DELPHI_PACKAGE void __fastcall FinalizeArray(void * P, void * TypeInfo, NativeUInt Count);
extern DELPHI_PACKAGE void __fastcall CopyRecord(void * Dest, void * Source, void * TypeInfo);
extern DELPHI_PACKAGE void __fastcall FinalizeRecord(void * P, void * TypeInfo);
extern DELPHI_PACKAGE void __fastcall InvokeRecordInitializer(void * Dest, void * TypeInfo);
extern DELPHI_PACKAGE void __fastcall InvokeRecordInitializerArray(void * Dest, void * TypeInfo, NativeUInt ElemCount);
extern DELPHI_PACKAGE UnicodeString __fastcall WideCharToString(WideChar * Source);
extern DELPHI_PACKAGE UnicodeString __fastcall WideCharLenToString(WideChar * Source, int SourceLen);
extern DELPHI_PACKAGE void __fastcall WideCharToStrVar(WideChar * Source, UnicodeString &Dest);
extern DELPHI_PACKAGE void __fastcall WideCharLenToStrVar(WideChar * Source, int SourceLen, UnicodeString &Dest)/* overload */;
extern DELPHI_PACKAGE void __fastcall WideCharLenToStrVar(WideChar * Source, int SourceLen, AnsiString &Dest)/* overload */;
extern DELPHI_PACKAGE WideChar * __fastcall StringToWideChar(const UnicodeString Source, WideChar * Dest, int DestSize);
extern DELPHI_PACKAGE UnicodeString __fastcall OleStrToString(WideChar * Source);
extern DELPHI_PACKAGE void __fastcall OleStrToStrVar(WideChar * Source, AnsiString &Dest)/* overload */;
extern DELPHI_PACKAGE void __fastcall OleStrToStrVar(WideChar * Source, UnicodeString &Dest)/* overload */;
extern DELPHI_PACKAGE WideChar * __fastcall StringToOleStr(const AnsiString Source)/* overload */;
extern DELPHI_PACKAGE WideChar * __fastcall StringToOleStr(const UnicodeString Source)/* overload */;
extern DELPHI_PACKAGE void __fastcall GetVariantManager _DEPRECATED_ATTRIBUTE0 (TVariantManager &VarMgr);
extern DELPHI_PACKAGE void __fastcall SetVariantManager _DEPRECATED_ATTRIBUTE0 (const TVariantManager &VarMgr);
extern DELPHI_PACKAGE bool __fastcall IsVariantManagerSet _DEPRECATED_ATTRIBUTE0 (void);
extern DELPHI_PACKAGE void __fastcall DynArrayClear(void * &A, void * TypeInfo);
extern DELPHI_PACKAGE void __fastcall RegisterWeakRefTypeInfo(const void * aTypeInfo, const bool value, const int index);
extern DELPHI_PACKAGE bool __fastcall SysHasWeakRef(const void * elementType);
extern DELPHI_PACKAGE void __fastcall DynArraySetLength(void * &a, void * typeInfo, NativeInt dimCnt, PNativeInt lengthVec);
extern DELPHI_PACKAGE void __fastcall DynArrayCopy(void * &Result, void * a, void * typeInfo);
extern DELPHI_PACKAGE void __fastcall DynArrayCopyRange(void * &Result, void * A, void * TypeInfo, NativeInt Index, NativeInt Count);
extern DELPHI_PACKAGE void __fastcall DynArrayUnique(void * &A, void * typeInfo);
extern DELPHI_PACKAGE void * __fastcall DynArrayIndex(void * P, const NativeInt *Indices, const int Indices_High, void * TypInfo)/* overload */;
extern DELPHI_PACKAGE void * __fastcall DynArrayIndex(void * P, const int *Indices, const int Indices_High, void * TypInfo)/* overload */;
extern DELPHI_PACKAGE int __fastcall DynArrayDim(void * typeInfo);
extern DELPHI_PACKAGE NativeInt __fastcall DynArraySize(void * A);
extern DELPHI_PACKAGE void __fastcall DynArrayAssign(void * &Dest, void * Source, void * typeInfo);
extern DELPHI_PACKAGE bool __fastcall IsDynArrayRectangular(const void * DynArray, void * typeInfo);
extern DELPHI_PACKAGE TBoundArray __fastcall DynArrayBounds(const void * DynArray, void * typeInfo);
extern DELPHI_PACKAGE NativeUInt __fastcall FindHInstance(void * Address);
extern DELPHI_PACKAGE NativeUInt __fastcall FindClassHInstance(TClass ClassType);
extern DELPHI_PACKAGE NativeUInt __fastcall FindResourceHInstance(NativeUInt Instance);
extern DELPHI_PACKAGE UnicodeString __fastcall GetUILanguages(const Word LANGID);
extern DELPHI_PACKAGE UnicodeString __fastcall GetLocaleOverride(const UnicodeString AppName);
extern DELPHI_PACKAGE void __fastcall SetLocaleOverride(const UnicodeString NewPreferredLanguages);
extern DELPHI_PACKAGE UnicodeString __fastcall GetResourceModuleName(UnicodeString HostAppName, UnicodeString ModuleName);
extern DELPHI_PACKAGE NativeUInt __fastcall LoadResourceModule(WideChar * ModuleName, bool CheckOwner = true);
extern DELPHI_PACKAGE void __fastcall EnumModules(TEnumModuleFunc Func, void * Data)/* overload */;
extern DELPHI_PACKAGE void __fastcall EnumResourceModules(TEnumModuleFunc Func, void * Data)/* overload */;
extern DELPHI_PACKAGE void __fastcall EnumModules(TEnumModuleFuncLW Func, void * Data)/* overload */;
extern DELPHI_PACKAGE void __fastcall EnumResourceModules(TEnumModuleFuncLW Func, void * Data)/* overload */;
extern DELPHI_PACKAGE void __fastcall AddModuleUnloadProc(TModuleUnloadProc Proc)/* overload */;
extern DELPHI_PACKAGE void __fastcall RemoveModuleUnloadProc(TModuleUnloadProc Proc)/* overload */;
extern DELPHI_PACKAGE void __fastcall AddModuleUnloadProc(TModuleUnloadProcLW Proc)/* overload */;
extern DELPHI_PACKAGE void __fastcall RemoveModuleUnloadProc(TModuleUnloadProcLW Proc)/* overload */;
extern DELPHI_PACKAGE void __fastcall RegisterModule(PLibModule LibModule);
extern DELPHI_PACKAGE void __fastcall UnregisterModule(PLibModule LibModule);
extern DELPHI_PACKAGE double __cdecl CompToDouble(Comp Value);
extern DELPHI_PACKAGE void __cdecl DoubleToComp(double Value, Comp &Result);
extern DELPHI_PACKAGE Currency __cdecl CompToCurrency(Comp Value);
extern DELPHI_PACKAGE void __cdecl CurrencyToComp(Currency Value, Comp &Result);
extern DELPHI_PACKAGE void * __cdecl GetMemory(NativeInt Size);
extern DELPHI_PACKAGE int __cdecl FreeMemory(void * P);
extern DELPHI_PACKAGE void * __cdecl ReallocMemory(void * P, NativeInt Size);
extern DELPHI_PACKAGE int __fastcall UnicodeToUtf8 _DEPRECATED_ATTRIBUTE0 (char * Dest, WideChar * Source, int MaxBytes)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall UnicodeToUtf8(char * Dest, unsigned MaxDestBytes, WideChar * Source, unsigned SourceChars)/* overload */;
extern DELPHI_PACKAGE int __fastcall Utf8ToUnicode _DEPRECATED_ATTRIBUTE0 (WideChar * Dest, char * Source, int MaxChars)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall Utf8ToUnicode(WideChar * Dest, unsigned MaxDestChars, char * Source, unsigned SourceBytes)/* overload */;
extern DELPHI_PACKAGE RawByteString __fastcall UTF8Encode(const WideString WS)/* overload */;
extern DELPHI_PACKAGE RawByteString __fastcall UTF8Encode(const UnicodeString US)/* overload */;
extern DELPHI_PACKAGE RawByteString __fastcall UTF8Encode(const RawByteString A)/* overload */;
extern DELPHI_PACKAGE void __fastcall UTF8Encode(const UnicodeString US, Byte *B, const int B_High)/* overload */;
extern DELPHI_PACKAGE ShortString __fastcall UTF8EncodeToShortString(const WideString WS)/* overload */;
extern DELPHI_PACKAGE ShortString __fastcall UTF8EncodeToShortString(const UnicodeString US)/* overload */;
extern DELPHI_PACKAGE ShortString __fastcall UTF8EncodeToShortString(const RawByteString A)/* overload */;
extern DELPHI_PACKAGE WideString __fastcall UTF8Decode _DEPRECATED_ATTRIBUTE1("Use UTF8ToWideString or UTF8ToString") (const RawByteString S);
extern DELPHI_PACKAGE WideString __fastcall UTF8ToWideString(const RawByteString S);
extern DELPHI_PACKAGE UnicodeString __fastcall UTF8ToUnicodeString(const RawByteString S)/* overload */;
extern DELPHI_PACKAGE UnicodeString __fastcall UTF8ToUnicodeString(const char * S)/* overload */;
extern DELPHI_PACKAGE UnicodeString __fastcall UTF8ToUnicodeString(const ShortString &S)/* overload */;
extern DELPHI_PACKAGE UnicodeString __fastcall UTF8ToString(const RawByteString S)/* overload */;
extern DELPHI_PACKAGE UnicodeString __fastcall UTF8ToString(const ShortString &S)/* overload */;
extern DELPHI_PACKAGE UnicodeString __fastcall UTF8ToString(const char * S)/* overload */;
extern DELPHI_PACKAGE UnicodeString __fastcall UTF8ToString _DEPRECATED_ATTRIBUTE1("Use UTF8ArrayToString(const S: array of Byte)") (const Byte *S, const int S_High)/* overload */;
extern DELPHI_PACKAGE UnicodeString __fastcall UTF8ArrayToString(const char *S, const int S_High)/* overload */;
extern DELPHI_PACKAGE UnicodeString __fastcall UTF8ArrayToString(const Byte *S, const int S_High)/* overload */;
extern DELPHI_PACKAGE RawByteString __fastcall AnsiToUtf8(const UnicodeString S);
extern DELPHI_PACKAGE UnicodeString __fastcall Utf8ToAnsi(const RawByteString S);
extern DELPHI_PACKAGE UnicodeString __fastcall LoadResString(PResStringRec ResStringRec);
extern DELPHI_PACKAGE PUCS4Char __fastcall PUCS4Chars(const UCS4String S);
extern DELPHI_PACKAGE UCS4String __fastcall WideStringToUCS4String(const WideString S);
extern DELPHI_PACKAGE WideString __fastcall UCS4StringToWideString(const UCS4String S);
extern DELPHI_PACKAGE int __fastcall LocaleCharsFromUnicode(unsigned CodePage, unsigned Flags, WideChar * UnicodeStr, int UnicodeStrLen, char * LocaleStr, int LocaleStrLen, char * DefaultChar, PLongBool UsedDefaultChar)/* overload */;
extern DELPHI_PACKAGE int __fastcall UnicodeFromLocaleChars(unsigned CodePage, unsigned Flags, char * LocaleStr, int LocaleStrLen, WideChar * UnicodeStr, int UnicodeStrLen)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetMultiByteConversionCodePage(int CodePage);
extern DELPHI_PACKAGE void __fastcall SetUTF8CompareLocale(void);
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#include <sysclass.h>
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SystemHPP
