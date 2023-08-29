// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.SysUtils.pas' rev: 35.00 (Windows)

#ifndef System_SysutilsHPP
#define System_SysutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysConst.hpp>

//-- user supplied -----------------------------------------------------------
namespace System {
namespace Sysutils {
extern PACKAGE System::Set<System::Byte, 0, 255>  LeadBytes;
} // namespace Sysutils
} // namespace System

namespace System
{
namespace Sysutils
{
//-- forward type declarations -----------------------------------------------
struct WordRec;
struct LongRec;
struct Int64Rec;
struct TSearchRec;
struct TSymLinkRec;
struct TDateTimeInfoRec;
struct TFloatRec;
struct TTimeStamp;
struct TSysLocale;
struct TLangRec;
class DELPHICLASS TLanguages;
class DELPHICLASS Exception;
class DELPHICLASS EArgumentException;
class DELPHICLASS EArgumentOutOfRangeException;
class DELPHICLASS EArgumentNilException;
class DELPHICLASS ENotSupportedException;
class DELPHICLASS EListError;
class DELPHICLASS EInvalidOpException;
class DELPHICLASS ENoConstructException;
class DELPHICLASS EAbort;
class DELPHICLASS EHeapException;
class DELPHICLASS EOutOfMemory;
class DELPHICLASS EExternal;
class DELPHICLASS EExternalException;
class DELPHICLASS EIntError;
class DELPHICLASS EDivByZero;
class DELPHICLASS ERangeError;
class DELPHICLASS EIntOverflow;
class DELPHICLASS EMathError;
class DELPHICLASS EInvalidOp;
class DELPHICLASS EZeroDivide;
class DELPHICLASS EOverflow;
class DELPHICLASS EUnderflow;
class DELPHICLASS EInvalidPointer;
class DELPHICLASS EInvalidCast;
class DELPHICLASS EConvertError;
class DELPHICLASS EAccessViolation;
class DELPHICLASS EPrivilege;
class DELPHICLASS EStackOverflow;
class DELPHICLASS EControlC;
class DELPHICLASS EVariantError;
class DELPHICLASS EPropReadOnly;
class DELPHICLASS EPropWriteOnly;
class DELPHICLASS EAssertionFailed;
class DELPHICLASS EAbstractError;
class DELPHICLASS EIntfCastError;
class DELPHICLASS EInvalidContainer;
class DELPHICLASS EInvalidInsert;
class DELPHICLASS EPackageError;
class DELPHICLASS ECFError;
class DELPHICLASS EOSError;
class DELPHICLASS EWin32Error;
class DELPHICLASS ESafecallException;
class DELPHICLASS EMonitor;
class DELPHICLASS EMonitorLockException;
class DELPHICLASS ENoMonitorSupportException;
class DELPHICLASS EProgrammerNotFound;
class DELPHICLASS ENotImplemented;
class DELPHICLASS EObjectDisposed;
class DELPHICLASS EOperationCancelled;
struct TFormatSettings;
struct TGUIDHelper /* Helper for record 'GUID' */;
__interface DELPHIINTERFACE IReadWriteSync;
typedef System::DelphiInterface<IReadWriteSync> _di_IReadWriteSync;
class DELPHICLASS TSimpleRWSync;
struct TThreadInfo;
class DELPHICLASS TThreadLocalCounter;
class DELPHICLASS TMultiReadExclusiveWriteSynchronizer;
struct TCharSearch;
class DELPHICLASS TStringBuilder;
struct TStringHelper /* Helper for uni  string 'System::UnicodeString' */;
struct TSingleHelper /* Helper for real 'float' */;
struct TDoubleHelper /* Helper for real 'double' */;
struct TExtendedHelper /* Helper for real 'System::Extended' */;
struct TByteHelper /* Helper for Ordinal 'System::Byte' */;
struct TShortIntHelper /* Helper for Ordinal 'System::Int8' */;
struct TWordHelper /* Helper for Ordinal 'System::Word' */;
struct TSmallIntHelper /* Helper for Ordinal 'short' */;
struct TCardinalHelper /* Helper for Ordinal 'unsigned' */;
struct TIntegerHelper /* Helper for Ordinal 'int' */;
struct TUInt64Helper /* Helper for long 'unsigned __int64' */;
struct TInt64Helper /* Helper for long '__int64' */;
#ifndef _WIN64
struct TNativeUIntHelper /* Helper for Ordinal 'NativeUInt' */;
struct TNativeIntHelper /* Helper for Ordinal 'NativeInt' */;
#else /* _WIN64 */
struct TNativeUIntHelper /* Helper for long 'NativeUInt' */;
struct TNativeIntHelper /* Helper for long 'NativeInt' */;
#endif /* _WIN64 */
struct TBooleanHelper /* Helper for Boolean 'bool' */;
struct TByteBoolHelper /* Helper for Boolean 'System::ByteBool' */;
struct TWordBoolHelper /* Helper for Boolean 'System::WordBool' */;
struct TLongBoolHelper /* Helper for Boolean 'System::LongBool' */;
struct TCurrencyHelper /* Helper for real 'System::Currency' */;
class DELPHICLASS EEncodingError;
class DELPHICLASS TEncoding;
class DELPHICLASS TMBCSEncoding;
class DELPHICLASS TUTF7Encoding;
class DELPHICLASS TUTF8Encoding;
class DELPHICLASS TUnicodeEncoding;
class DELPHICLASS TBigEndianUnicodeEncoding;
__interface DELPHIINTERFACE TProc;
typedef System::DelphiInterface<TProc> _di_TProc;
template<typename T> __interface DELPHIINTERFACE TProc__1;
#ifdef __clang__
template<typename T> using _di_TProc__1 = System::DelphiInterface<TProc__1<T>>;
#endif
template<typename T1, typename T2> __interface DELPHIINTERFACE TProc__2;
#ifdef __clang__
template<typename T1, typename T2> using _di_TProc__2 = System::DelphiInterface<TProc__2<T1, T2>>;
#endif
template<typename T1, typename T2, typename T3> __interface DELPHIINTERFACE TProc__3;
#ifdef __clang__
template<typename T1, typename T2, typename T3> using _di_TProc__3 = System::DelphiInterface<TProc__3<T1, T2, T3>>;
#endif
template<typename T1, typename T2, typename T3, typename T4> __interface DELPHIINTERFACE TProc__4;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename T4> using _di_TProc__4 = System::DelphiInterface<TProc__4<T1, T2, T3, T4>>;
#endif
template<typename TResult> __interface DELPHIINTERFACE TFunc__1;
#ifdef __clang__
template<typename TResult> using _di_TFunc__1 = System::DelphiInterface<TFunc__1<TResult>>;
#endif
template<typename T, typename TResult> __interface DELPHIINTERFACE TFunc__2;
#ifdef __clang__
template<typename T, typename TResult> using _di_TFunc__2 = System::DelphiInterface<TFunc__2<T, TResult>>;
#endif
template<typename T1, typename T2, typename TResult> __interface DELPHIINTERFACE TFunc__3;
#ifdef __clang__
template<typename T1, typename T2, typename TResult> using _di_TFunc__3 = System::DelphiInterface<TFunc__3<T1, T2, TResult>>;
#endif
template<typename T1, typename T2, typename T3, typename TResult> __interface DELPHIINTERFACE TFunc__4;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename TResult> using _di_TFunc__4 = System::DelphiInterface<TFunc__4<T1, T2, T3, TResult>>;
#endif
template<typename T1, typename T2, typename T3, typename T4, typename TResult> __interface DELPHIINTERFACE TFunc__5;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename T4, typename TResult> using _di_TFunc__5 = System::DelphiInterface<TFunc__5<T1, T2, T3, T4, TResult>>;
#endif
template<typename T> __interface DELPHIINTERFACE TPredicate__1;
#ifdef __clang__
template<typename T> using _di_TPredicate__1 = System::DelphiInterface<TPredicate__1<T>>;
#endif
__interface DELPHIINTERFACE ILanguageEnumerator;
typedef System::DelphiInterface<ILanguageEnumerator> _di_ILanguageEnumerator;
__interface DELPHIINTERFACE ILanguageEnumerable;
typedef System::DelphiInterface<ILanguageEnumerable> _di_ILanguageEnumerable;
struct TOSVersion;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
typedef System::DynamicArray<System::Byte> TBytes;
#else /* _WIN64 */
typedef System::TArray__1<System::Byte> TBytes;
#endif /* _WIN64 */

typedef System::Set<char, _DELPHI_SET_CHAR(0), _DELPHI_SET_CHAR(255)> TSysCharSet;

typedef System::Set<System::Int8, 0, 31> TIntegerSet;

#pragma pack(push,1)
struct DECLSPEC_DRECORD WordRec
{
	
public:
	union
	{
		struct 
		{
			System::StaticArray<System::Byte, 2> Bytes;
		};
		struct 
		{
			System::Byte Lo;
			System::Byte Hi;
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD LongRec
{
	
public:
	union
	{
		struct 
		{
			System::StaticArray<System::Byte, 4> Bytes;
		};
		struct 
		{
			System::StaticArray<System::Word, 2> Words;
		};
		struct 
		{
			System::Word Lo;
			System::Word Hi;
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD Int64Rec
{
	
public:
	union
	{
		struct 
		{
			System::StaticArray<System::Byte, 8> Bytes;
		};
		struct 
		{
			System::StaticArray<System::Word, 4> Words;
		};
		struct 
		{
			System::StaticArray<unsigned, 2> Cardinals;
		};
		struct 
		{
			unsigned Lo;
			unsigned Hi;
		};
		
	};
};
#pragma pack(pop)


typedef System::StaticArray<System::Byte, 32768> TByteArray;

typedef TByteArray *PByteArray;

typedef System::StaticArray<System::Word, 16384> TWordArray;

typedef TWordArray *PWordArray;

typedef void __fastcall (*TProcedure)(void);

typedef System::UnicodeString TFileName;

struct DECLSPEC_DRECORD TSearchRec
{
private:
	System::TDateTime __fastcall GetTimeStamp();
	
public:
	int Time _DEPRECATED_ATTRIBUTE0 ;
	__int64 Size;
	int Attr;
	TFileName Name;
	int ExcludeAttr;
	NativeUInt FindHandle;
	_WIN32_FIND_DATAW FindData;
	__property System::TDateTime TimeStamp = {read=GetTimeStamp};
};


struct DECLSPEC_DRECORD TSymLinkRec
{
private:
	System::TDateTime __fastcall GetTimeStamp();
	
public:
	TFileName TargetName;
	int Attr;
	__int64 Size;
	_WIN32_FIND_DATAW FindData;
	__property System::TDateTime TimeStamp = {read=GetTimeStamp};
};


struct DECLSPEC_DRECORD TDateTimeInfoRec
{
private:
	_WIN32_FIND_DATAW Data;
	System::TDateTime __fastcall GetCreationTime();
	System::TDateTime __fastcall GetLastAccessTime();
	System::TDateTime __fastcall GetTimeStamp();
	
public:
	__property System::TDateTime CreationTime = {read=GetCreationTime};
	__property System::TDateTime LastAccessTime = {read=GetLastAccessTime};
	__property System::TDateTime TimeStamp = {read=GetTimeStamp};
};


enum DECLSPEC_DENUM TFloatValue : unsigned char { fvExtended, fvCurrency };

enum DECLSPEC_DENUM TFloatFormat : unsigned char { ffGeneral, ffExponent, ffFixed, ffNumber, ffCurrency };

#pragma pack(push,1)
struct DECLSPEC_DRECORD TFloatRec
{
public:
	short Exponent;
	bool Negative;
	System::StaticArray<System::Byte, 21> Digits;
};
#pragma pack(pop)


struct DECLSPEC_DRECORD TTimeStamp
{
public:
	int Time;
	int Date;
};


enum DECLSPEC_DENUM TMbcsByteType : unsigned char { mbSingleByte, mbLeadByte, mbTrailByte };

typedef unsigned TLocaleID;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TSysLocale
{
public:
	unsigned DefaultLCID;
	int PriLangID;
	int SubLangID;
	bool FarEast;
	bool MiddleEast;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TLangRec
{
public:
	System::UnicodeString FName;
	unsigned FLCID;
	System::UnicodeString FExt;
	System::UnicodeString FLocaleName;
};
#pragma pack(pop)


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TLanguages : public System::TObject
{
	typedef System::TObject inherited;
	
private:
#ifndef _WIN64
	System::DynamicArray<TLangRec> FSysLangs;
#else /* _WIN64 */
	System::TArray__1<TLangRec> FSysLangs;
#endif /* _WIN64 */
	
private:
	// __classmethod void __fastcall Destroy@();
	
private:
	int __fastcall LocalesCallback(System::WideChar * LocaleID);
	System::UnicodeString __fastcall GetExt(int Index);
	System::UnicodeString __fastcall GetID(int Index);
	unsigned __fastcall GetLocaleID(int Index);
	System::UnicodeString __fastcall GetLocaleName(int Index);
	System::UnicodeString __fastcall GetName(int Index);
	System::UnicodeString __fastcall GetNameFromLocaleID(unsigned ID);
	System::UnicodeString __fastcall GetNameFromLCID(const System::UnicodeString ID);
	unsigned __fastcall GetLocaleIDFromName(const System::UnicodeString LocaleName);
	int __fastcall GetCount();
	static unsigned __fastcall GetUserDefaultLocale();
	
public:
	__fastcall TLanguages();
	__fastcall virtual ~TLanguages();
	static unsigned __fastcall GetLocaleIDFromLocaleName(const System::UnicodeString LocaleName);
	int __fastcall IndexOf(unsigned ID)/* overload */;
	int __fastcall IndexOf(const System::UnicodeString LocaleName)/* overload */;
	__property int Count = {read=GetCount, nodefault};
	__property System::UnicodeString Name[int Index] = {read=GetName};
	__property System::UnicodeString NameFromLocaleID[unsigned ID] = {read=GetNameFromLocaleID};
	__property System::UnicodeString NameFromLCID[const System::UnicodeString ID] = {read=GetNameFromLCID};
	__property System::UnicodeString ID[int Index] = {read=GetID};
	__property System::UnicodeString LocaleName[int Index] = {read=GetLocaleName};
	__property unsigned LocaleID[int Index] = {read=GetLocaleID};
	__property unsigned LocaleIDFromName[const System::UnicodeString LocaleName] = {read=GetLocaleIDFromName};
	__property System::UnicodeString Ext[int Index] = {read=GetExt};
	/* static */ __property unsigned UserDefaultLocale = {read=GetUserDefaultLocale, nodefault};
	
private:
	// __classmethod void __fastcall Create@();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

using System::PExceptionRecord;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION Exception : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FMessage;
	int FHelpContext;
	Exception* FInnerException;
	void *FStackInfo;
	bool FAcquireInnerException;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
protected:
	void __fastcall SetInnerException();
	void __fastcall SetStackInfo(void * AStackInfo);
	System::UnicodeString __fastcall GetStackTrace();
	virtual void __fastcall RaisingException(System::PExceptionRecord P);
	
public:
	__fastcall Exception(const System::UnicodeString Msg);
	__fastcall Exception(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High);
	__fastcall Exception(NativeUInt Ident)/* overload */;
	__fastcall Exception(System::PResStringRec ResStringRec)/* overload */;
	__fastcall Exception(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */;
	__fastcall Exception(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */;
	__fastcall Exception(const System::UnicodeString Msg, int AHelpContext);
	__fastcall Exception(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext);
	__fastcall Exception(NativeUInt Ident, int AHelpContext)/* overload */;
	__fastcall Exception(System::PResStringRec ResStringRec, int AHelpContext)/* overload */;
	__fastcall Exception(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */;
	__fastcall Exception(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */;
	__fastcall virtual ~Exception();
	virtual Exception* __fastcall GetBaseException();
	virtual System::UnicodeString __fastcall ToString();
	__property Exception* BaseException = {read=GetBaseException};
	__property int HelpContext = {read=FHelpContext, write=FHelpContext, nodefault};
	__property Exception* InnerException = {read=FInnerException};
	__property System::UnicodeString Message = {read=FMessage, write=FMessage};
	__property System::UnicodeString StackTrace = {read=GetStackTrace};
	__property void * StackInfo = {read=FStackInfo};
	static void * __fastcall (*GetExceptionStackInfoProc)(System::PExceptionRecord P);
	static System::UnicodeString __fastcall (*GetStackInfoStringProc)(void * Info);
	static void __fastcall (*CleanUpStackInfoProc)(void * Info);
	static void __fastcall RaiseOuterException(Exception* E);
	static void __fastcall ThrowOuterException(Exception* E);
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EArgumentException : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EArgumentException(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EArgumentException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EArgumentException(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EArgumentException(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EArgumentException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EArgumentException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EArgumentException(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EArgumentException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EArgumentException(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EArgumentException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EArgumentException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EArgumentException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EArgumentException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EArgumentOutOfRangeException : public EArgumentException
{
	typedef EArgumentException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EArgumentOutOfRangeException(const System::UnicodeString Msg) : EArgumentException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EArgumentOutOfRangeException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EArgumentException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EArgumentOutOfRangeException(NativeUInt Ident)/* overload */ : EArgumentException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EArgumentOutOfRangeException(System::PResStringRec ResStringRec)/* overload */ : EArgumentException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EArgumentOutOfRangeException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EArgumentException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EArgumentOutOfRangeException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EArgumentException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EArgumentOutOfRangeException(const System::UnicodeString Msg, int AHelpContext) : EArgumentException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EArgumentOutOfRangeException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EArgumentException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EArgumentOutOfRangeException(NativeUInt Ident, int AHelpContext)/* overload */ : EArgumentException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EArgumentOutOfRangeException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EArgumentException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EArgumentOutOfRangeException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EArgumentException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EArgumentOutOfRangeException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EArgumentException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EArgumentOutOfRangeException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EArgumentNilException : public EArgumentException
{
	typedef EArgumentException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EArgumentNilException(const System::UnicodeString Msg) : EArgumentException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EArgumentNilException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EArgumentException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EArgumentNilException(NativeUInt Ident)/* overload */ : EArgumentException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EArgumentNilException(System::PResStringRec ResStringRec)/* overload */ : EArgumentException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EArgumentNilException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EArgumentException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EArgumentNilException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EArgumentException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EArgumentNilException(const System::UnicodeString Msg, int AHelpContext) : EArgumentException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EArgumentNilException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EArgumentException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EArgumentNilException(NativeUInt Ident, int AHelpContext)/* overload */ : EArgumentException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EArgumentNilException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EArgumentException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EArgumentNilException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EArgumentException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EArgumentNilException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EArgumentException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EArgumentNilException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ENotSupportedException : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ENotSupportedException(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ENotSupportedException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ENotSupportedException(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ENotSupportedException(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ENotSupportedException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ENotSupportedException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ENotSupportedException(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ENotSupportedException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENotSupportedException(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENotSupportedException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENotSupportedException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENotSupportedException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ENotSupportedException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EListError : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EListError(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EListError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EListError(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EListError(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EListError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EListError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EListError(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EListError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EListError(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EListError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EListError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EListError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EListError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EInvalidOpException : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvalidOpException(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvalidOpException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidOpException(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidOpException(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidOpException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidOpException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidOpException(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidOpException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidOpException(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidOpException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidOpException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidOpException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidOpException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ENoConstructException : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ENoConstructException(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ENoConstructException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ENoConstructException(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ENoConstructException(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ENoConstructException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ENoConstructException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ENoConstructException(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ENoConstructException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENoConstructException(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENoConstructException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENoConstructException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENoConstructException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ENoConstructException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* ExceptClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, ExceptClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EAbort : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAbort(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAbort(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbort(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbort(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbort(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbort(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbort(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbort(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbort(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbort(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbort(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbort(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbort() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EHeapException : public Exception
{
	typedef Exception inherited;
	
private:
	bool AllowFree;
	
protected:
	virtual void __fastcall RaisingException(System::PExceptionRecord P);
	
public:
	virtual void __fastcall FreeInstance();
public:
	/* Exception.Create */ inline __fastcall EHeapException(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EHeapException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EHeapException(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EHeapException(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EHeapException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EHeapException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EHeapException(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EHeapException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EHeapException(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EHeapException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EHeapException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EHeapException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EHeapException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EOutOfMemory : public EHeapException
{
	typedef EHeapException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EOutOfMemory(const System::UnicodeString Msg) : EHeapException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EOutOfMemory(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EHeapException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EOutOfMemory(NativeUInt Ident)/* overload */ : EHeapException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOutOfMemory(System::PResStringRec ResStringRec)/* overload */ : EHeapException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOutOfMemory(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EHeapException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOutOfMemory(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EHeapException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOutOfMemory(const System::UnicodeString Msg, int AHelpContext) : EHeapException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOutOfMemory(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EHeapException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOutOfMemory(NativeUInt Ident, int AHelpContext)/* overload */ : EHeapException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOutOfMemory(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EHeapException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOutOfMemory(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EHeapException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOutOfMemory(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EHeapException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOutOfMemory() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EExternal : public Exception
{
	typedef Exception inherited;
	
public:
	System::TExceptionRecord *ExceptionRecord;
public:
	/* Exception.Create */ inline __fastcall EExternal(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EExternal(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EExternal(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EExternal(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EExternal(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EExternal(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EExternal(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EExternal(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EExternal(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EExternal(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EExternal(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EExternal(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EExternal() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EExternalException : public EExternal
{
	typedef EExternal inherited;
	
public:
	/* Exception.Create */ inline __fastcall EExternalException(const System::UnicodeString Msg) : EExternal(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EExternalException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EExternal(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EExternalException(NativeUInt Ident)/* overload */ : EExternal(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EExternalException(System::PResStringRec ResStringRec)/* overload */ : EExternal(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EExternalException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EExternal(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EExternalException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EExternal(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EExternalException(const System::UnicodeString Msg, int AHelpContext) : EExternal(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EExternalException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EExternal(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EExternalException(NativeUInt Ident, int AHelpContext)/* overload */ : EExternal(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EExternalException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EExternal(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EExternalException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EExternal(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EExternalException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EExternal(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EExternalException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIntError : public EExternal
{
	typedef EExternal inherited;
	
public:
	/* Exception.Create */ inline __fastcall EIntError(const System::UnicodeString Msg) : EExternal(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EIntError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EExternal(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIntError(NativeUInt Ident)/* overload */ : EExternal(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIntError(System::PResStringRec ResStringRec)/* overload */ : EExternal(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIntError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EExternal(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIntError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EExternal(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIntError(const System::UnicodeString Msg, int AHelpContext) : EExternal(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIntError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EExternal(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIntError(NativeUInt Ident, int AHelpContext)/* overload */ : EExternal(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIntError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EExternal(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIntError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EExternal(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIntError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EExternal(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIntError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EDivByZero : public EIntError
{
	typedef EIntError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EDivByZero(const System::UnicodeString Msg) : EIntError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EDivByZero(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EIntError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EDivByZero(NativeUInt Ident)/* overload */ : EIntError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EDivByZero(System::PResStringRec ResStringRec)/* overload */ : EIntError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EDivByZero(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EIntError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EDivByZero(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EIntError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EDivByZero(const System::UnicodeString Msg, int AHelpContext) : EIntError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EDivByZero(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EIntError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDivByZero(NativeUInt Ident, int AHelpContext)/* overload */ : EIntError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDivByZero(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EIntError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDivByZero(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIntError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDivByZero(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIntError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EDivByZero() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ERangeError : public EIntError
{
	typedef EIntError inherited;
	
public:
	/* Exception.Create */ inline __fastcall ERangeError(const System::UnicodeString Msg) : EIntError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ERangeError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EIntError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ERangeError(NativeUInt Ident)/* overload */ : EIntError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ERangeError(System::PResStringRec ResStringRec)/* overload */ : EIntError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ERangeError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EIntError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ERangeError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EIntError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ERangeError(const System::UnicodeString Msg, int AHelpContext) : EIntError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ERangeError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EIntError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ERangeError(NativeUInt Ident, int AHelpContext)/* overload */ : EIntError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ERangeError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EIntError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ERangeError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIntError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ERangeError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIntError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ERangeError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIntOverflow : public EIntError
{
	typedef EIntError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EIntOverflow(const System::UnicodeString Msg) : EIntError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EIntOverflow(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EIntError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIntOverflow(NativeUInt Ident)/* overload */ : EIntError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIntOverflow(System::PResStringRec ResStringRec)/* overload */ : EIntError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIntOverflow(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EIntError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIntOverflow(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EIntError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIntOverflow(const System::UnicodeString Msg, int AHelpContext) : EIntError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIntOverflow(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EIntError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIntOverflow(NativeUInt Ident, int AHelpContext)/* overload */ : EIntError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIntOverflow(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EIntError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIntOverflow(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIntError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIntOverflow(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIntError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIntOverflow() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EMathError : public EExternal
{
	typedef EExternal inherited;
	
public:
	/* Exception.Create */ inline __fastcall EMathError(const System::UnicodeString Msg) : EExternal(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EMathError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EExternal(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EMathError(NativeUInt Ident)/* overload */ : EExternal(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EMathError(System::PResStringRec ResStringRec)/* overload */ : EExternal(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EMathError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EExternal(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EMathError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EExternal(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EMathError(const System::UnicodeString Msg, int AHelpContext) : EExternal(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EMathError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EExternal(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EMathError(NativeUInt Ident, int AHelpContext)/* overload */ : EExternal(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EMathError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EExternal(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EMathError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EExternal(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EMathError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EExternal(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EMathError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EInvalidOp : public EMathError
{
	typedef EMathError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvalidOp(const System::UnicodeString Msg) : EMathError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvalidOp(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EMathError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidOp(NativeUInt Ident)/* overload */ : EMathError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidOp(System::PResStringRec ResStringRec)/* overload */ : EMathError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidOp(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EMathError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidOp(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EMathError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidOp(const System::UnicodeString Msg, int AHelpContext) : EMathError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidOp(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EMathError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidOp(NativeUInt Ident, int AHelpContext)/* overload */ : EMathError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidOp(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EMathError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidOp(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EMathError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidOp(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EMathError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidOp() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EZeroDivide : public EMathError
{
	typedef EMathError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EZeroDivide(const System::UnicodeString Msg) : EMathError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EZeroDivide(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EMathError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EZeroDivide(NativeUInt Ident)/* overload */ : EMathError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EZeroDivide(System::PResStringRec ResStringRec)/* overload */ : EMathError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EZeroDivide(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EMathError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EZeroDivide(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EMathError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EZeroDivide(const System::UnicodeString Msg, int AHelpContext) : EMathError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EZeroDivide(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EMathError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EZeroDivide(NativeUInt Ident, int AHelpContext)/* overload */ : EMathError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EZeroDivide(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EMathError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EZeroDivide(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EMathError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EZeroDivide(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EMathError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EZeroDivide() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EOverflow : public EMathError
{
	typedef EMathError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EOverflow(const System::UnicodeString Msg) : EMathError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EOverflow(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EMathError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EOverflow(NativeUInt Ident)/* overload */ : EMathError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOverflow(System::PResStringRec ResStringRec)/* overload */ : EMathError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOverflow(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EMathError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOverflow(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EMathError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOverflow(const System::UnicodeString Msg, int AHelpContext) : EMathError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOverflow(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EMathError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOverflow(NativeUInt Ident, int AHelpContext)/* overload */ : EMathError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOverflow(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EMathError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOverflow(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EMathError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOverflow(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EMathError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOverflow() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EUnderflow : public EMathError
{
	typedef EMathError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EUnderflow(const System::UnicodeString Msg) : EMathError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EUnderflow(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EMathError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EUnderflow(NativeUInt Ident)/* overload */ : EMathError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EUnderflow(System::PResStringRec ResStringRec)/* overload */ : EMathError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EUnderflow(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EMathError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EUnderflow(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EMathError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EUnderflow(const System::UnicodeString Msg, int AHelpContext) : EMathError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EUnderflow(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EMathError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EUnderflow(NativeUInt Ident, int AHelpContext)/* overload */ : EMathError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EUnderflow(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EMathError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EUnderflow(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EMathError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EUnderflow(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EMathError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EUnderflow() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EInvalidPointer : public EHeapException
{
	typedef EHeapException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvalidPointer(const System::UnicodeString Msg) : EHeapException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvalidPointer(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EHeapException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidPointer(NativeUInt Ident)/* overload */ : EHeapException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidPointer(System::PResStringRec ResStringRec)/* overload */ : EHeapException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidPointer(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EHeapException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidPointer(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EHeapException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidPointer(const System::UnicodeString Msg, int AHelpContext) : EHeapException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidPointer(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EHeapException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidPointer(NativeUInt Ident, int AHelpContext)/* overload */ : EHeapException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidPointer(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EHeapException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidPointer(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EHeapException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidPointer(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EHeapException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidPointer() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EInvalidCast : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvalidCast(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvalidCast(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidCast(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidCast(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidCast(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidCast(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidCast(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidCast(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidCast(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidCast(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidCast(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidCast(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidCast() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EConvertError : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EConvertError(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EConvertError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EConvertError(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EConvertError(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EConvertError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EConvertError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EConvertError(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EConvertError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EConvertError(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EConvertError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EConvertError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EConvertError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EConvertError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EAccessViolation : public EExternal
{
	typedef EExternal inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAccessViolation(const System::UnicodeString Msg) : EExternal(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAccessViolation(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EExternal(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAccessViolation(NativeUInt Ident)/* overload */ : EExternal(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAccessViolation(System::PResStringRec ResStringRec)/* overload */ : EExternal(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAccessViolation(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EExternal(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAccessViolation(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EExternal(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAccessViolation(const System::UnicodeString Msg, int AHelpContext) : EExternal(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAccessViolation(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EExternal(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAccessViolation(NativeUInt Ident, int AHelpContext)/* overload */ : EExternal(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAccessViolation(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EExternal(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAccessViolation(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EExternal(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAccessViolation(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EExternal(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAccessViolation() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPrivilege : public EExternal
{
	typedef EExternal inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPrivilege(const System::UnicodeString Msg) : EExternal(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPrivilege(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EExternal(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPrivilege(NativeUInt Ident)/* overload */ : EExternal(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPrivilege(System::PResStringRec ResStringRec)/* overload */ : EExternal(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPrivilege(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EExternal(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPrivilege(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EExternal(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPrivilege(const System::UnicodeString Msg, int AHelpContext) : EExternal(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPrivilege(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EExternal(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPrivilege(NativeUInt Ident, int AHelpContext)/* overload */ : EExternal(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPrivilege(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EExternal(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPrivilege(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EExternal(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPrivilege(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EExternal(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPrivilege() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EStackOverflow _DEPRECATED_ATTRIBUTE0  : public EExternal
{
	typedef EExternal inherited;
	
public:
	/* Exception.Create */ inline __fastcall EStackOverflow(const System::UnicodeString Msg) : EExternal(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EStackOverflow(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EExternal(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EStackOverflow(NativeUInt Ident)/* overload */ : EExternal(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EStackOverflow(System::PResStringRec ResStringRec)/* overload */ : EExternal(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EStackOverflow(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EExternal(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EStackOverflow(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EExternal(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EStackOverflow(const System::UnicodeString Msg, int AHelpContext) : EExternal(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EStackOverflow(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EExternal(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EStackOverflow(NativeUInt Ident, int AHelpContext)/* overload */ : EExternal(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EStackOverflow(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EExternal(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EStackOverflow(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EExternal(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EStackOverflow(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EExternal(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EStackOverflow() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EControlC : public EExternal
{
	typedef EExternal inherited;
	
public:
	/* Exception.Create */ inline __fastcall EControlC(const System::UnicodeString Msg) : EExternal(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EControlC(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EExternal(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EControlC(NativeUInt Ident)/* overload */ : EExternal(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EControlC(System::PResStringRec ResStringRec)/* overload */ : EExternal(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EControlC(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EExternal(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EControlC(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EExternal(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EControlC(const System::UnicodeString Msg, int AHelpContext) : EExternal(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EControlC(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EExternal(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EControlC(NativeUInt Ident, int AHelpContext)/* overload */ : EExternal(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EControlC(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EExternal(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EControlC(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EExternal(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EControlC(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EExternal(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EControlC() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EVariantError : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVariantError(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVariantError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVariantError(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVariantError(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVariantError(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVariantError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantError(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVariantError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPropReadOnly : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPropReadOnly(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPropReadOnly(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPropReadOnly(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPropReadOnly(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPropReadOnly(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPropReadOnly(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPropReadOnly(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPropReadOnly(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPropReadOnly(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPropReadOnly(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPropReadOnly(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPropReadOnly(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPropReadOnly() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPropWriteOnly : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPropWriteOnly(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPropWriteOnly(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPropWriteOnly(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPropWriteOnly(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPropWriteOnly(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPropWriteOnly(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPropWriteOnly(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPropWriteOnly(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPropWriteOnly(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPropWriteOnly(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPropWriteOnly(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPropWriteOnly(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPropWriteOnly() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EAssertionFailed : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAssertionFailed(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAssertionFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAssertionFailed(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAssertionFailed(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAssertionFailed(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAssertionFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAssertionFailed(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAssertionFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAssertionFailed(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAssertionFailed(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAssertionFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAssertionFailed(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAssertionFailed() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EAbstractError : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAbstractError(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAbstractError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbstractError(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbstractError(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbstractError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbstractError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbstractError(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbstractError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbstractError(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbstractError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbstractError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbstractError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbstractError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIntfCastError : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EIntfCastError(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EIntfCastError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIntfCastError(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIntfCastError(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIntfCastError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIntfCastError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIntfCastError(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIntfCastError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIntfCastError(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIntfCastError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIntfCastError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIntfCastError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIntfCastError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EInvalidContainer : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvalidContainer(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvalidContainer(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidContainer(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidContainer(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidContainer(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidContainer(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidContainer(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidContainer(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidContainer(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidContainer(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidContainer(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidContainer(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidContainer() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EInvalidInsert : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvalidInsert(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvalidInsert(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidInsert(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidInsert(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidInsert(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidInsert(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidInsert(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidInsert(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidInsert(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidInsert(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidInsert(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidInsert(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidInsert() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPackageError : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPackageError(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPackageError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPackageError(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPackageError(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPackageError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPackageError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPackageError(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPackageError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPackageError(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPackageError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPackageError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPackageError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPackageError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECFError : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECFError(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECFError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECFError(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECFError(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECFError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECFError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECFError(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECFError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECFError(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECFError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECFError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECFError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECFError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EOSError : public Exception
{
	typedef Exception inherited;
	
public:
	unsigned ErrorCode;
public:
	/* Exception.Create */ inline __fastcall EOSError(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EOSError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EOSError(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOSError(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOSError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOSError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOSError(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOSError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOSError(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOSError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOSError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOSError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOSError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EWin32Error _DEPRECATED_ATTRIBUTE0  : public EOSError
{
	typedef EOSError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EWin32Error(const System::UnicodeString Msg) : EOSError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EWin32Error(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EOSError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EWin32Error(NativeUInt Ident)/* overload */ : EOSError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EWin32Error(System::PResStringRec ResStringRec)/* overload */ : EOSError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EWin32Error(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EOSError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EWin32Error(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EOSError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EWin32Error(const System::UnicodeString Msg, int AHelpContext) : EOSError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EWin32Error(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EOSError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EWin32Error(NativeUInt Ident, int AHelpContext)/* overload */ : EOSError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EWin32Error(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOSError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EWin32Error(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EOSError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EWin32Error(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EOSError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EWin32Error() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ESafecallException : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ESafecallException(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ESafecallException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ESafecallException(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ESafecallException(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ESafecallException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ESafecallException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ESafecallException(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ESafecallException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESafecallException(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESafecallException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESafecallException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESafecallException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ESafecallException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EMonitor : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EMonitor(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EMonitor(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EMonitor(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EMonitor(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EMonitor(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EMonitor(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EMonitor(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EMonitor(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EMonitor(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EMonitor(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EMonitor(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EMonitor(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EMonitor() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EMonitorLockException : public EMonitor
{
	typedef EMonitor inherited;
	
public:
	/* Exception.Create */ inline __fastcall EMonitorLockException(const System::UnicodeString Msg) : EMonitor(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EMonitorLockException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EMonitor(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EMonitorLockException(NativeUInt Ident)/* overload */ : EMonitor(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EMonitorLockException(System::PResStringRec ResStringRec)/* overload */ : EMonitor(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EMonitorLockException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EMonitor(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EMonitorLockException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EMonitor(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EMonitorLockException(const System::UnicodeString Msg, int AHelpContext) : EMonitor(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EMonitorLockException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EMonitor(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EMonitorLockException(NativeUInt Ident, int AHelpContext)/* overload */ : EMonitor(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EMonitorLockException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EMonitor(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EMonitorLockException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EMonitor(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EMonitorLockException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EMonitor(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EMonitorLockException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ENoMonitorSupportException : public EMonitor
{
	typedef EMonitor inherited;
	
public:
	/* Exception.Create */ inline __fastcall ENoMonitorSupportException(const System::UnicodeString Msg) : EMonitor(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ENoMonitorSupportException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EMonitor(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ENoMonitorSupportException(NativeUInt Ident)/* overload */ : EMonitor(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ENoMonitorSupportException(System::PResStringRec ResStringRec)/* overload */ : EMonitor(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ENoMonitorSupportException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EMonitor(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ENoMonitorSupportException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EMonitor(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ENoMonitorSupportException(const System::UnicodeString Msg, int AHelpContext) : EMonitor(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ENoMonitorSupportException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EMonitor(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENoMonitorSupportException(NativeUInt Ident, int AHelpContext)/* overload */ : EMonitor(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENoMonitorSupportException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EMonitor(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENoMonitorSupportException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EMonitor(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENoMonitorSupportException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EMonitor(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ENoMonitorSupportException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EProgrammerNotFound : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EProgrammerNotFound(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EProgrammerNotFound(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EProgrammerNotFound(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EProgrammerNotFound(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EProgrammerNotFound(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EProgrammerNotFound(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EProgrammerNotFound(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EProgrammerNotFound(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EProgrammerNotFound(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EProgrammerNotFound(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EProgrammerNotFound(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EProgrammerNotFound(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EProgrammerNotFound() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ENotImplemented : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ENotImplemented(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ENotImplemented(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ENotImplemented(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ENotImplemented(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ENotImplemented(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ENotImplemented(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ENotImplemented(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ENotImplemented(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENotImplemented(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENotImplemented(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENotImplemented(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENotImplemented(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ENotImplemented() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EObjectDisposed : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EObjectDisposed(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EObjectDisposed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EObjectDisposed(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EObjectDisposed(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EObjectDisposed(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EObjectDisposed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EObjectDisposed(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EObjectDisposed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EObjectDisposed(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EObjectDisposed(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EObjectDisposed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EObjectDisposed(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EObjectDisposed() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EOperationCancelled : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EOperationCancelled(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EOperationCancelled(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EOperationCancelled(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOperationCancelled(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOperationCancelled(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOperationCancelled(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOperationCancelled(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOperationCancelled(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOperationCancelled(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOperationCancelled(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOperationCancelled(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOperationCancelled(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOperationCancelled() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TFormatSettings
{
	
public:
	struct DECLSPEC_DRECORD TEraInfo
	{
	public:
		System::UnicodeString EraName;
		int EraOffset;
		System::TDate EraStart;
		System::TDate EraEnd;
	};
	
	
	
private:
	typedef System::StaticArray<System::UnicodeString, 12> _TFormatSettings__1;
	
	typedef System::StaticArray<System::UnicodeString, 12> _TFormatSettings__2;
	
	typedef System::StaticArray<System::UnicodeString, 7> _TFormatSettings__3;
	
	typedef System::StaticArray<System::UnicodeString, 7> _TFormatSettings__4;
	
	typedef System::DynamicArray<TEraInfo> _TFormatSettings__5;
	
	
private:
	static void __fastcall GetDayNames(unsigned Locale, TFormatSettings &AFormatSettings);
	static void __fastcall GetMonthNames(unsigned Locale, TFormatSettings &AFormatSettings);
	static void __fastcall GetEraInformation(unsigned Locale, TFormatSettings &AFormatSettings);
	static System::UnicodeString __fastcall GetString(unsigned Locale, int LocaleItem, int DefaultIndex, void * const *DefaultValues, const int DefaultValues_High);
	static System::UnicodeString __fastcall TranslateDateFormat(unsigned Locale, int LocaleType, const System::UnicodeString Default, const System::WideChar Separator);
	
private:
	static System::UnicodeString __fastcall AdjustLocaleName(const System::UnicodeString LocaleName, const System::UnicodeString ACharSet = System::UnicodeString());
	
public:
	System::UnicodeString CurrencyString;
	System::Byte CurrencyFormat;
	System::Byte CurrencyDecimals;
	System::WideChar DateSeparator;
	System::WideChar TimeSeparator;
	System::WideChar ListSeparator;
	System::UnicodeString ShortDateFormat;
	System::UnicodeString LongDateFormat;
	System::UnicodeString TimeAMString;
	System::UnicodeString TimePMString;
	System::UnicodeString ShortTimeFormat;
	System::UnicodeString LongTimeFormat;
	_TFormatSettings__1 ShortMonthNames;
	_TFormatSettings__2 LongMonthNames;
	_TFormatSettings__3 ShortDayNames;
	_TFormatSettings__4 LongDayNames;
	_TFormatSettings__5 EraInfo;
	System::WideChar ThousandSeparator;
	System::WideChar DecimalSeparator;
	System::Word TwoDigitYearCenturyWindow;
	System::Byte NegCurrFormat;
	System::UnicodeString NormalizedLocaleName;
	static TFormatSettings __fastcall Create()/* overload */;
	static TFormatSettings __fastcall Create(unsigned Locale)/* overload */;
	static TFormatSettings __fastcall Create(const System::UnicodeString LocaleName)/* overload */;
	static TFormatSettings __fastcall Invariant();
	int __fastcall GetEraYearOffset(const System::UnicodeString Name);
};


enum DECLSPEC_DENUM TLocaleOptions : unsigned char { loInvariantLocale, loUserLocale };

typedef System::DynamicArray<System::UnicodeString> System_Sysutils__75;

typedef System::DynamicArray<System::UnicodeString> System_Sysutils__85;

enum DECLSPEC_DENUM TFileSystemAttribute : unsigned char { fsCaseSensitive, fsCasePreserving, fsLocal, fsNetwork, fsRemovable, fsSymLink };

typedef System::Set<TFileSystemAttribute, TFileSystemAttribute::fsCaseSensitive, TFileSystemAttribute::fsSymLink> TFileSystemAttributes;

enum DECLSPEC_DENUM TFilenameCaseMatch : unsigned char { mkNone, mkExactMatch, mkSingleMatch, mkAmbiguous };

typedef System::StaticArray<System::Word, 12> TDayTable;

typedef TDayTable *PDayTable;

enum DECLSPEC_DENUM System_Sysutils__95 : unsigned char { rfReplaceAll, rfIgnoreCase };

typedef System::Set<System_Sysutils__95, System_Sysutils__95::rfReplaceAll, System_Sysutils__95::rfIgnoreCase> TReplaceFlags;

enum DECLSPEC_DENUM TCmdLineSwitchType : unsigned char { clstValueNextParam, clstValueAppended };

typedef System::Set<TCmdLineSwitchType, TCmdLineSwitchType::clstValueNextParam, TCmdLineSwitchType::clstValueAppended> TCmdLineSwitchTypes;

enum DECLSPEC_DENUM TNameType : unsigned char { ntContainsUnit, ntRequiresPackage, ntDcpBpiName };

typedef void __fastcall (*TPackageInfoProc)(const System::UnicodeString Name, TNameType NameType, System::Byte Flags, void * Param);

typedef bool __fastcall (*TValidatePackageProc)(NativeUInt Module);

typedef bool __fastcall (*TTerminateProc)(void);

__interface  INTERFACE_UUID("{7B108C52-1D8F-4CDB-9CDF-57E071193D3F}") IReadWriteSync  : public System::IInterface 
{
	virtual void __fastcall BeginRead() = 0 ;
	virtual void __fastcall EndRead() = 0 ;
	virtual bool __fastcall BeginWrite() = 0 ;
	virtual void __fastcall EndWrite() = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSimpleRWSync : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::TObject* FLock;
	
public:
	__fastcall TSimpleRWSync();
	__fastcall virtual ~TSimpleRWSync();
	void __fastcall BeginRead();
	void __fastcall EndRead();
	bool __fastcall BeginWrite();
	void __fastcall EndWrite();
private:
	void *__IReadWriteSync;	// IReadWriteSync 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7B108C52-1D8F-4CDB-9CDF-57E071193D3F}
	operator _di_IReadWriteSync()
	{
		_di_IReadWriteSync intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IReadWriteSync*(void) { return (IReadWriteSync*)&__IReadWriteSync; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef TThreadInfo *PThreadInfo;

struct DECLSPEC_DRECORD TThreadInfo
{
public:
	TThreadInfo *Next;
	unsigned ThreadID;
	int Active;
	unsigned RecursionCount;
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TThreadLocalCounter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::StaticArray<PThreadInfo, 16> FHashTable;
	System::Byte __fastcall HashIndex();
	PThreadInfo __fastcall Recycle();
	
public:
	__fastcall virtual ~TThreadLocalCounter();
	void __fastcall Open(PThreadInfo &Thread);
	void __fastcall Delete(PThreadInfo &Thread);
	void __fastcall Close(PThreadInfo &Thread);
public:
	/* TObject.Create */ inline __fastcall TThreadLocalCounter() : System::TObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMultiReadExclusiveWriteSynchronizer : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	int FSentinel;
	NativeUInt FReadSignal;
	NativeUInt FWriteSignal;
	unsigned FWaitRecycle;
	unsigned FWriteRecursionCount;
	TThreadLocalCounter* tls;
	unsigned FWriterID;
	unsigned FRevisionLevel;
	void __fastcall BlockReaders();
	void __fastcall UnblockReaders();
	void __fastcall UnblockOneWriter();
	void __fastcall WaitForReadSignal();
	void __fastcall WaitForWriteSignal();
	
public:
	__fastcall TMultiReadExclusiveWriteSynchronizer();
	__fastcall virtual ~TMultiReadExclusiveWriteSynchronizer();
	void __fastcall BeginRead();
	void __fastcall EndRead();
	bool __fastcall BeginWrite();
	void __fastcall EndWrite();
	__property unsigned RevisionLevel = {read=FRevisionLevel, nodefault};
private:
	void *__IReadWriteSync;	// IReadWriteSync 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7B108C52-1D8F-4CDB-9CDF-57E071193D3F}
	operator _di_IReadWriteSync()
	{
		_di_IReadWriteSync intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IReadWriteSync*(void) { return (IReadWriteSync*)&__IReadWriteSync; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef TMultiReadExclusiveWriteSynchronizer TMREWSync;

typedef int __fastcall (*TGrowCollectionFunc)(int OldCapacity, int NewCount);

#ifndef _WIN64
typedef System::DynamicArray<System::WideChar> TCharArray;
#else /* _WIN64 */
typedef System::TArray__1<System::WideChar> TCharArray;
#endif /* _WIN64 */

struct DECLSPEC_DRECORD TCharSearch
{
public:
	System::WideChar *ArrayPtr;
	System::WideChar *MatchPtr;
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStringBuilder : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	struct DECLSPEC_DRECORD TEnumerator
	{
	private:
		System::WideChar *FPtr;
		System::WideChar *FEndPtr;
		
	public:
		void __fastcall Initialize(TStringBuilder* const ABuilder);
		System::WideChar __fastcall GetCurrent();
		bool __fastcall MoveNext();
		__property System::WideChar Current = {read=GetCurrent};
	};
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
	
public:
	System::WideChar operator[](int index) { return this->Chars[index]; }
	
private:
	static const System::Int8 DefaultCapacity = System::Int8(0x10);
	
	static System::UnicodeString LineBreak;
	int __fastcall GetCapacity();
	void __fastcall SetCapacity(int Value);
	System::WideChar __fastcall GetChars(int Index);
	void __fastcall SetChars(int Index, System::WideChar Value);
	int __fastcall GetLength();
	void __fastcall SetLength(int Value);
	int __fastcall GetMaxCapacity();
	void __fastcall ExpandCapacity();
	void __fastcall ReduceCapacity();
	void __fastcall CheckBounds(int Index);
	bool __fastcall _Replace(int Index, const System::UnicodeString Old, const System::UnicodeString New);
	
protected:
	System::UnicodeString FData;
	int FLength;
	int FMaxCapacity;
	
public:
	__fastcall TStringBuilder()/* overload */;
	__fastcall TStringBuilder(int aCapacity)/* overload */;
	__fastcall TStringBuilder(const System::UnicodeString Value)/* overload */;
	__fastcall TStringBuilder(int aCapacity, int aMaxCapacity)/* overload */;
	__fastcall TStringBuilder(const System::UnicodeString Value, int aCapacity)/* overload */;
	__fastcall TStringBuilder(const System::UnicodeString Value, int StartIndex, int Length, int aCapacity)/* overload */;
	TStringBuilder* __fastcall Append(const bool Value)/* overload */;
	TStringBuilder* __fastcall Append(const System::Byte Value)/* overload */;
	TStringBuilder* __fastcall Append(const System::WideChar Value)/* overload */;
	TStringBuilder* __fastcall Append(const System::Currency Value)/* overload */;
	TStringBuilder* __fastcall Append(const double Value)/* overload */;
	TStringBuilder* __fastcall Append(const short Value)/* overload */;
	TStringBuilder* __fastcall Append(const int Value)/* overload */;
	TStringBuilder* __fastcall Append(const __int64 Value)/* overload */;
	TStringBuilder* __fastcall Append(System::TObject* const Value)/* overload */;
	TStringBuilder* __fastcall Append(const System::Int8 Value)/* overload */;
	TStringBuilder* __fastcall Append(const float Value)/* overload */;
	TStringBuilder* __fastcall Append(const System::UnicodeString Value)/* overload */;
	TStringBuilder* __fastcall Append(const unsigned __int64 Value)/* overload */;
#ifndef _WIN64
	TStringBuilder* __fastcall Append(const System::DynamicArray<System::WideChar> Value)/* overload */;
#else /* _WIN64 */
	TStringBuilder* __fastcall Append(const System::TArray__1<System::WideChar> Value)/* overload */;
#endif /* _WIN64 */
	TStringBuilder* __fastcall Append(const System::Word Value)/* overload */;
	TStringBuilder* __fastcall Append(const unsigned Value)/* overload */;
	TStringBuilder* __fastcall Append(const char * Value)/* overload */;
	TStringBuilder* __fastcall Append(const System::RawByteString Value)/* overload */;
	TStringBuilder* __fastcall Append(const System::WideChar Value, int RepeatCount)/* overload */;
#ifndef _WIN64
	TStringBuilder* __fastcall Append(const System::DynamicArray<System::WideChar> Value, int StartIndex, int CharCount)/* overload */;
#else /* _WIN64 */
	TStringBuilder* __fastcall Append(const System::TArray__1<System::WideChar> Value, int StartIndex, int CharCount)/* overload */;
#endif /* _WIN64 */
	TStringBuilder* __fastcall Append(const System::UnicodeString Value, int StartIndex, int Count = 0xffffffff)/* overload */;
	TStringBuilder* __fastcall Append(const System::WideChar * Value, int StartIndex, int Count = 0xffffffff)/* overload */;
	TStringBuilder* __fastcall AppendFormat(const System::UnicodeString Format, const System::TVarRec *Args, const int Args_High)/* overload */;
	TStringBuilder* __fastcall AppendLine()/* overload */;
	TStringBuilder* __fastcall AppendLine(const System::UnicodeString Value)/* overload */;
	void __fastcall Clear();
#ifndef _WIN64
	void __fastcall CopyTo(int SourceIndex, const System::DynamicArray<System::WideChar> Destination, int DestinationIndex, int Count);
#else /* _WIN64 */
	void __fastcall CopyTo(int SourceIndex, const System::TArray__1<System::WideChar> Destination, int DestinationIndex, int Count);
#endif /* _WIN64 */
	int __fastcall EnsureCapacity(int aCapacity);
	HIDESBASE bool __fastcall Equals(TStringBuilder* StringBuilder);
	TStringBuilder* __fastcall Insert(int Index, const bool Value)/* overload */;
	TStringBuilder* __fastcall Insert(int Index, const System::Byte Value)/* overload */;
	TStringBuilder* __fastcall Insert(int Index, const System::WideChar Value)/* overload */;
	TStringBuilder* __fastcall Insert(int Index, const System::Currency Value)/* overload */;
	TStringBuilder* __fastcall Insert(int Index, const double Value)/* overload */;
	TStringBuilder* __fastcall Insert(int Index, const short Value)/* overload */;
	TStringBuilder* __fastcall Insert(int Index, const int Value)/* overload */;
#ifndef _WIN64
	TStringBuilder* __fastcall Insert(int Index, const System::DynamicArray<System::WideChar> Value)/* overload */;
#else /* _WIN64 */
	TStringBuilder* __fastcall Insert(int Index, const System::TArray__1<System::WideChar> Value)/* overload */;
#endif /* _WIN64 */
	TStringBuilder* __fastcall Insert(int Index, const __int64 Value)/* overload */;
	TStringBuilder* __fastcall Insert(int Index, System::TObject* const Value)/* overload */;
	TStringBuilder* __fastcall Insert(int Index, const System::Int8 Value)/* overload */;
	TStringBuilder* __fastcall Insert(int Index, const float Value)/* overload */;
	TStringBuilder* __fastcall Insert(int Index, const System::UnicodeString Value)/* overload */;
	TStringBuilder* __fastcall Insert(int Index, const System::Word Value)/* overload */;
	TStringBuilder* __fastcall Insert(int Index, const unsigned Value)/* overload */;
	TStringBuilder* __fastcall Insert(int Index, const unsigned __int64 Value)/* overload */;
	TStringBuilder* __fastcall Insert(int Index, const System::UnicodeString Value, int count)/* overload */;
#ifndef _WIN64
	TStringBuilder* __fastcall Insert(int Index, const System::DynamicArray<System::WideChar> Value, int startIndex, int charCount)/* overload */;
#else /* _WIN64 */
	TStringBuilder* __fastcall Insert(int Index, const System::TArray__1<System::WideChar> Value, int startIndex, int charCount)/* overload */;
#endif /* _WIN64 */
	TStringBuilder* __fastcall Remove(int StartIndex, int RemLength);
	TStringBuilder* __fastcall Replace(const System::WideChar OldChar, const System::WideChar NewChar)/* overload */;
	TStringBuilder* __fastcall Replace(const System::UnicodeString OldValue, const System::UnicodeString NewValue)/* overload */;
	TStringBuilder* __fastcall Replace(const System::WideChar OldChar, const System::WideChar NewChar, int StartIndex, int Count)/* overload */;
	TStringBuilder* __fastcall Replace(const System::UnicodeString OldValue, const System::UnicodeString NewValue, int StartIndex, int Count)/* overload */;
	virtual System::UnicodeString __fastcall ToString()/* overload */;
	HIDESBASE System::UnicodeString __fastcall ToString(bool UpdateCapacity)/* overload */;
	HIDESBASE System::UnicodeString __fastcall ToString(int StartIndex, int StrLength)/* overload */;
	TEnumerator __fastcall GetEnumerator();
	__property int Capacity = {read=GetCapacity, write=SetCapacity, nodefault};
	__property System::WideChar Chars[int index] = {read=GetChars, write=SetChars/*, default*/};
	__property int Length = {read=GetLength, write=SetLength, nodefault};
	__property int MaxCapacity = {read=GetMaxCapacity, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TStringBuilder() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TCompareOption : unsigned char { coLingIgnoreCase, coLingIgnoreDiacritic, coIgnoreCase, coIgnoreKanatype, coIgnoreNonSpace, coIgnoreSymbols, coIgnoreWidth, coLingCasing, coDigitAsNumbers, coStringSort };

typedef System::Set<TCompareOption, TCompareOption::coLingIgnoreCase, TCompareOption::coStringSort> TCompareOptions;

enum class DECLSPEC_DENUM TStringSplitOptions : unsigned char { None, ExcludeEmpty, ExcludeLastEmpty };

enum class DECLSPEC_DENUM TUseBoolStrs : unsigned char { False, True };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EEncodingError : public Exception
{
	typedef Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EEncodingError(const System::UnicodeString Msg) : Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EEncodingError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EEncodingError(NativeUInt Ident)/* overload */ : Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EEncodingError(System::PResStringRec ResStringRec)/* overload */ : Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EEncodingError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EEncodingError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EEncodingError(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EEncodingError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EEncodingError(NativeUInt Ident, int AHelpContext)/* overload */ : Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EEncodingError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EEncodingError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EEncodingError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EEncodingError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TEncoding : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static TEncoding* FANSIEncoding;
	static TEncoding* FASCIIEncoding;
	static TEncoding* FBigEndianUnicodeEncoding;
	static TEncoding* FUnicodeEncoding;
	static TEncoding* FUTF7Encoding;
	static TEncoding* FUTF8Encoding;
	// __classmethod void __fastcall Destroy@();
	static TEncoding* __fastcall GetANSI();
	static TEncoding* __fastcall GetASCII();
	static TEncoding* __fastcall GetBigEndianUnicode();
	static TEncoding* __fastcall GetDefault();
	static TEncoding* __fastcall GetUnicode();
	static TEncoding* __fastcall GetUTF7();
	static TEncoding* __fastcall GetUTF8();
	
protected:
	bool FIsSingleByte;
	int FMaxCharSize;
	virtual int __fastcall GetByteCount(System::WideChar * Chars, int CharCount) = 0 /* overload */;
	virtual int __fastcall GetBytes(System::WideChar * Chars, int CharCount, System::PByte Bytes, int ByteCount) = 0 /* overload */;
	virtual int __fastcall GetCharCount(System::PByte Bytes, int ByteCount) = 0 /* overload */;
	virtual int __fastcall GetChars(System::PByte Bytes, int ByteCount, System::WideChar * Chars, int CharCount) = 0 /* overload */;
	virtual unsigned __fastcall GetCodePage();
	virtual System::UnicodeString __fastcall GetEncodingName();
	virtual System::UnicodeString __fastcall GetMIMEName();
	
public:
	virtual TEncoding* __fastcall Clone();
#ifndef _WIN64
	__classmethod System::DynamicArray<System::Byte> __fastcall Convert(TEncoding* const Source, TEncoding* const Destination, const System::Byte *Bytes, const int Bytes_High)/* overload */;
	__classmethod System::DynamicArray<System::Byte> __fastcall Convert(TEncoding* const Source, TEncoding* const Destination, const System::DynamicArray<System::Byte> Bytes)/* overload */;
	__classmethod System::DynamicArray<System::Byte> __fastcall Convert(TEncoding* const Source, TEncoding* const Destination, const System::Byte *Bytes, const int Bytes_High, int StartIndex, int Count)/* overload */;
	__classmethod System::DynamicArray<System::Byte> __fastcall Convert(TEncoding* const Source, TEncoding* const Destination, const System::DynamicArray<System::Byte> Bytes, int StartIndex, int Count)/* overload */;
#else /* _WIN64 */
	__classmethod System::TArray__1<System::Byte> __fastcall Convert(TEncoding* const Source, TEncoding* const Destination, const System::Byte *Bytes, const int Bytes_High)/* overload */;
	__classmethod System::TArray__1<System::Byte> __fastcall Convert(TEncoding* const Source, TEncoding* const Destination, const System::TArray__1<System::Byte> Bytes)/* overload */;
	__classmethod System::TArray__1<System::Byte> __fastcall Convert(TEncoding* const Source, TEncoding* const Destination, const System::Byte *Bytes, const int Bytes_High, int StartIndex, int Count)/* overload */;
	__classmethod System::TArray__1<System::Byte> __fastcall Convert(TEncoding* const Source, TEncoding* const Destination, const System::TArray__1<System::Byte> Bytes, int StartIndex, int Count)/* overload */;
#endif /* _WIN64 */
	__classmethod void __fastcall FreeEncodings();
	static bool __fastcall IsStandardEncoding(TEncoding* AEncoding);
#ifndef _WIN64
	static int __fastcall GetBufferEncoding(const System::DynamicArray<System::Byte> Buffer, TEncoding* &AEncoding)/* overload */;
	static int __fastcall GetBufferEncoding(const System::DynamicArray<System::Byte> Buffer, TEncoding* &AEncoding, TEncoding* ADefaultEncoding)/* overload */;
#else /* _WIN64 */
	static int __fastcall GetBufferEncoding(const System::TArray__1<System::Byte> Buffer, TEncoding* &AEncoding)/* overload */;
	static int __fastcall GetBufferEncoding(const System::TArray__1<System::Byte> Buffer, TEncoding* &AEncoding, TEncoding* ADefaultEncoding)/* overload */;
#endif /* _WIN64 */
	int __fastcall GetByteCount(const System::WideChar Chars)/* overload */;
	int __fastcall GetByteCount(const System::WideChar *Chars, const int Chars_High)/* overload */;
#ifndef _WIN64
	int __fastcall GetByteCount(const System::DynamicArray<System::WideChar> Chars)/* overload */;
#else /* _WIN64 */
	int __fastcall GetByteCount(const System::TArray__1<System::WideChar> Chars)/* overload */;
#endif /* _WIN64 */
	int __fastcall GetByteCount(const System::WideChar *Chars, const int Chars_High, int CharIndex, int CharCount)/* overload */;
#ifndef _WIN64
	int __fastcall GetByteCount(const System::DynamicArray<System::WideChar> Chars, int CharIndex, int CharCount)/* overload */;
#else /* _WIN64 */
	int __fastcall GetByteCount(const System::TArray__1<System::WideChar> Chars, int CharIndex, int CharCount)/* overload */;
#endif /* _WIN64 */
	int __fastcall GetByteCount(const System::UnicodeString S)/* overload */;
	int __fastcall GetByteCount(const System::UnicodeString S, int CharIndex, int CharCount)/* overload */;
	int __fastcall GetByteCount(const System::UnicodeString S, int CharIndex, int CharCount, const int StringBaseIndex)/* overload */;
#ifndef _WIN64
	System::DynamicArray<System::Byte> __fastcall GetBytes(const System::WideChar Chars)/* overload */;
	System::DynamicArray<System::Byte> __fastcall GetBytes(const System::WideChar *Chars, const int Chars_High)/* overload */;
	System::DynamicArray<System::Byte> __fastcall GetBytes(const System::DynamicArray<System::WideChar> Chars)/* overload */;
	System::DynamicArray<System::Byte> __fastcall GetBytes(const System::WideChar *Chars, const int Chars_High, int CharIndex, int CharCount)/* overload */;
	System::DynamicArray<System::Byte> __fastcall GetBytes(const System::DynamicArray<System::WideChar> Chars, int CharIndex, int CharCount)/* overload */;
	int __fastcall GetBytes(const System::WideChar *Chars, const int Chars_High, int CharIndex, int CharCount, const System::DynamicArray<System::Byte> Bytes, int ByteIndex)/* overload */;
	int __fastcall GetBytes(const System::DynamicArray<System::WideChar> Chars, int CharIndex, int CharCount, const System::DynamicArray<System::Byte> Bytes, int ByteIndex)/* overload */;
	System::DynamicArray<System::Byte> __fastcall GetBytes(const System::UnicodeString S)/* overload */;
	int __fastcall GetBytes(const System::UnicodeString S, int CharIndex, int CharCount, const System::DynamicArray<System::Byte> Bytes, int ByteIndex)/* overload */;
	int __fastcall GetBytes(const System::UnicodeString S, int CharIndex, int CharCount, const System::DynamicArray<System::Byte> Bytes, int ByteIndex, const int StringBaseIndex)/* overload */;
#else /* _WIN64 */
	System::TArray__1<System::Byte> __fastcall GetBytes(const System::WideChar Chars)/* overload */;
	System::TArray__1<System::Byte> __fastcall GetBytes(const System::WideChar *Chars, const int Chars_High)/* overload */;
	System::TArray__1<System::Byte> __fastcall GetBytes(const System::TArray__1<System::WideChar> Chars)/* overload */;
	System::TArray__1<System::Byte> __fastcall GetBytes(const System::WideChar *Chars, const int Chars_High, int CharIndex, int CharCount)/* overload */;
	System::TArray__1<System::Byte> __fastcall GetBytes(const System::TArray__1<System::WideChar> Chars, int CharIndex, int CharCount)/* overload */;
	int __fastcall GetBytes(const System::WideChar *Chars, const int Chars_High, int CharIndex, int CharCount, const System::TArray__1<System::Byte> Bytes, int ByteIndex)/* overload */;
	int __fastcall GetBytes(const System::TArray__1<System::WideChar> Chars, int CharIndex, int CharCount, const System::TArray__1<System::Byte> Bytes, int ByteIndex)/* overload */;
	System::TArray__1<System::Byte> __fastcall GetBytes(const System::UnicodeString S)/* overload */;
	int __fastcall GetBytes(const System::UnicodeString S, int CharIndex, int CharCount, const System::TArray__1<System::Byte> Bytes, int ByteIndex)/* overload */;
	int __fastcall GetBytes(const System::UnicodeString S, int CharIndex, int CharCount, const System::TArray__1<System::Byte> Bytes, int ByteIndex, const int StringBaseIndex)/* overload */;
#endif /* _WIN64 */
	int __fastcall GetCharCount(const System::Byte *Bytes, const int Bytes_High)/* overload */;
#ifndef _WIN64
	int __fastcall GetCharCount(const System::DynamicArray<System::Byte> Bytes)/* overload */;
#else /* _WIN64 */
	int __fastcall GetCharCount(const System::TArray__1<System::Byte> Bytes)/* overload */;
#endif /* _WIN64 */
	int __fastcall GetCharCount(const System::Byte *Bytes, const int Bytes_High, int ByteIndex, int ByteCount)/* overload */;
#ifndef _WIN64
	int __fastcall GetCharCount(const System::DynamicArray<System::Byte> Bytes, int ByteIndex, int ByteCount)/* overload */;
	System::DynamicArray<System::WideChar> __fastcall GetChars(const System::Byte *Bytes, const int Bytes_High)/* overload */;
	System::DynamicArray<System::WideChar> __fastcall GetChars(const System::DynamicArray<System::Byte> Bytes)/* overload */;
	System::DynamicArray<System::WideChar> __fastcall GetChars(const System::Byte *Bytes, const int Bytes_High, int ByteIndex, int ByteCount)/* overload */;
	System::DynamicArray<System::WideChar> __fastcall GetChars(const System::DynamicArray<System::Byte> Bytes, int ByteIndex, int ByteCount)/* overload */;
#else /* _WIN64 */
	int __fastcall GetCharCount(const System::TArray__1<System::Byte> Bytes, int ByteIndex, int ByteCount)/* overload */;
	System::TArray__1<System::WideChar> __fastcall GetChars(const System::Byte *Bytes, const int Bytes_High)/* overload */;
	System::TArray__1<System::WideChar> __fastcall GetChars(const System::TArray__1<System::Byte> Bytes)/* overload */;
	System::TArray__1<System::WideChar> __fastcall GetChars(const System::Byte *Bytes, const int Bytes_High, int ByteIndex, int ByteCount)/* overload */;
	System::TArray__1<System::WideChar> __fastcall GetChars(const System::TArray__1<System::Byte> Bytes, int ByteIndex, int ByteCount)/* overload */;
#endif /* _WIN64 */
	int __fastcall GetChars(const System::Byte *Bytes, const int Bytes_High, int ByteIndex, int ByteCount, const System::WideChar *Chars, const int Chars_High, int CharIndex)/* overload */;
#ifndef _WIN64
	int __fastcall GetChars(const System::DynamicArray<System::Byte> Bytes, int ByteIndex, int ByteCount, const System::DynamicArray<System::WideChar> Chars, int CharIndex)/* overload */;
#else /* _WIN64 */
	int __fastcall GetChars(const System::TArray__1<System::Byte> Bytes, int ByteIndex, int ByteCount, const System::TArray__1<System::WideChar> Chars, int CharIndex)/* overload */;
#endif /* _WIN64 */
	static TEncoding* __fastcall GetEncoding(int CodePage)/* overload */;
	static TEncoding* __fastcall GetEncoding(const System::UnicodeString EncodingName)/* overload */;
	virtual int __fastcall GetMaxByteCount(int CharCount) = 0 ;
	virtual int __fastcall GetMaxCharCount(int ByteCount) = 0 ;
#ifndef _WIN64
	virtual System::DynamicArray<System::Byte> __fastcall GetPreamble() = 0 ;
	System::UnicodeString __fastcall GetString(const System::DynamicArray<System::Byte> Bytes)/* overload */;
	System::UnicodeString __fastcall GetString(const System::DynamicArray<System::Byte> Bytes, int ByteIndex, int ByteCount)/* overload */;
#else /* _WIN64 */
	virtual System::TArray__1<System::Byte> __fastcall GetPreamble() = 0 ;
	System::UnicodeString __fastcall GetString(const System::TArray__1<System::Byte> Bytes)/* overload */;
	System::UnicodeString __fastcall GetString(const System::TArray__1<System::Byte> Bytes, int ByteIndex, int ByteCount)/* overload */;
#endif /* _WIN64 */
	System::UnicodeString __fastcall GetString(const System::Byte *Bytes, const int Bytes_High)/* overload */;
	/* static */ __property TEncoding* ANSI = {read=GetANSI};
	/* static */ __property TEncoding* ASCII = {read=GetASCII};
	/* static */ __property TEncoding* BigEndianUnicode = {read=GetBigEndianUnicode};
	__property unsigned CodePage = {read=GetCodePage, nodefault};
	/* static */ __property TEncoding* Default = {read=GetDefault};
	__property System::UnicodeString EncodingName = {read=GetEncodingName};
	__property System::UnicodeString MIMEName = {read=GetMIMEName};
	__property bool IsSingleByte = {read=FIsSingleByte, nodefault};
	/* static */ __property TEncoding* Unicode = {read=GetUnicode};
	/* static */ __property TEncoding* UTF7 = {read=GetUTF7};
	/* static */ __property TEncoding* UTF8 = {read=GetUTF8};
	
private:
	// __classmethod void __fastcall Create@();
public:
	/* TObject.Create */ inline __fastcall TEncoding() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TEncoding() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMBCSEncoding : public TEncoding
{
	typedef TEncoding inherited;
	
private:
	unsigned FCodePage;
	unsigned FMBToWCharFlags;
	unsigned FWCharToMBFlags;
	
protected:
	virtual int __fastcall GetByteCount(System::WideChar * Chars, int CharCount)/* overload */;
	virtual int __fastcall GetBytes(System::WideChar * Chars, int CharCount, System::PByte Bytes, int ByteCount)/* overload */;
	virtual int __fastcall GetCharCount(System::PByte Bytes, int ByteCount)/* overload */;
	virtual int __fastcall GetChars(System::PByte Bytes, int ByteCount, System::WideChar * Chars, int CharCount)/* overload */;
	virtual unsigned __fastcall GetCodePage();
	virtual System::UnicodeString __fastcall GetEncodingName();
	
public:
	__fastcall virtual TMBCSEncoding()/* overload */;
	__fastcall virtual TMBCSEncoding(int CodePage)/* overload */;
	__fastcall virtual TMBCSEncoding(int CodePage, int MBToWCharFlags, int WCharToMBFlags)/* overload */;
	virtual TEncoding* __fastcall Clone();
	virtual int __fastcall GetMaxByteCount(int CharCount);
	virtual int __fastcall GetMaxCharCount(int ByteCount);
#ifndef _WIN64
	virtual System::DynamicArray<System::Byte> __fastcall GetPreamble();
#else /* _WIN64 */
	virtual System::TArray__1<System::Byte> __fastcall GetPreamble();
#endif /* _WIN64 */
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TMBCSEncoding() { }
	
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  GetByteCount(const System::WideChar Chars){ return TEncoding::GetByteCount(Chars); }
	inline int __fastcall  GetByteCount(const System::WideChar *Chars, const int Chars_High){ return TEncoding::GetByteCount(Chars, Chars_High); }
#ifndef _WIN64
	inline int __fastcall  GetByteCount(const System::DynamicArray<System::WideChar> Chars){ return TEncoding::GetByteCount(Chars); }
#else /* _WIN64 */
	inline int __fastcall  GetByteCount(const System::TArray__1<System::WideChar> Chars){ return TEncoding::GetByteCount(Chars); }
#endif /* _WIN64 */
	inline int __fastcall  GetByteCount(const System::WideChar *Chars, const int Chars_High, int CharIndex, int CharCount){ return TEncoding::GetByteCount(Chars, Chars_High, CharIndex, CharCount); }
#ifndef _WIN64
	inline int __fastcall  GetByteCount(const System::DynamicArray<System::WideChar> Chars, int CharIndex, int CharCount){ return TEncoding::GetByteCount(Chars, CharIndex, CharCount); }
#else /* _WIN64 */
	inline int __fastcall  GetByteCount(const System::TArray__1<System::WideChar> Chars, int CharIndex, int CharCount){ return TEncoding::GetByteCount(Chars, CharIndex, CharCount); }
#endif /* _WIN64 */
	inline int __fastcall  GetByteCount(const System::UnicodeString S){ return TEncoding::GetByteCount(S); }
	inline int __fastcall  GetByteCount(const System::UnicodeString S, int CharIndex, int CharCount){ return TEncoding::GetByteCount(S, CharIndex, CharCount); }
	inline int __fastcall  GetByteCount(const System::UnicodeString S, int CharIndex, int CharCount, const int StringBaseIndex){ return TEncoding::GetByteCount(S, CharIndex, CharCount, StringBaseIndex); }
#ifndef _WIN64
	inline System::DynamicArray<System::Byte> __fastcall  GetBytes(const System::WideChar Chars){ return TEncoding::GetBytes(Chars); }
	inline System::DynamicArray<System::Byte> __fastcall  GetBytes(const System::WideChar *Chars, const int Chars_High){ return TEncoding::GetBytes(Chars, Chars_High); }
	inline System::DynamicArray<System::Byte> __fastcall  GetBytes(const System::DynamicArray<System::WideChar> Chars){ return TEncoding::GetBytes(Chars); }
	inline System::DynamicArray<System::Byte> __fastcall  GetBytes(const System::WideChar *Chars, const int Chars_High, int CharIndex, int CharCount){ return TEncoding::GetBytes(Chars, Chars_High, CharIndex, CharCount); }
	inline System::DynamicArray<System::Byte> __fastcall  GetBytes(const System::DynamicArray<System::WideChar> Chars, int CharIndex, int CharCount){ return TEncoding::GetBytes(Chars, CharIndex, CharCount); }
	inline int __fastcall  GetBytes(const System::WideChar *Chars, const int Chars_High, int CharIndex, int CharCount, const System::DynamicArray<System::Byte> Bytes, int ByteIndex){ return TEncoding::GetBytes(Chars, Chars_High, CharIndex, CharCount, Bytes, ByteIndex); }
	inline int __fastcall  GetBytes(const System::DynamicArray<System::WideChar> Chars, int CharIndex, int CharCount, const System::DynamicArray<System::Byte> Bytes, int ByteIndex){ return TEncoding::GetBytes(Chars, CharIndex, CharCount, Bytes, ByteIndex); }
	inline System::DynamicArray<System::Byte> __fastcall  GetBytes(const System::UnicodeString S){ return TEncoding::GetBytes(S); }
	inline int __fastcall  GetBytes(const System::UnicodeString S, int CharIndex, int CharCount, const System::DynamicArray<System::Byte> Bytes, int ByteIndex){ return TEncoding::GetBytes(S, CharIndex, CharCount, Bytes, ByteIndex); }
	inline int __fastcall  GetBytes(const System::UnicodeString S, int CharIndex, int CharCount, const System::DynamicArray<System::Byte> Bytes, int ByteIndex, const int StringBaseIndex){ return TEncoding::GetBytes(S, CharIndex, CharCount, Bytes, ByteIndex, StringBaseIndex); }
#else /* _WIN64 */
	inline System::TArray__1<System::Byte> __fastcall  GetBytes(const System::WideChar Chars){ return TEncoding::GetBytes(Chars); }
	inline System::TArray__1<System::Byte> __fastcall  GetBytes(const System::WideChar *Chars, const int Chars_High){ return TEncoding::GetBytes(Chars, Chars_High); }
	inline System::TArray__1<System::Byte> __fastcall  GetBytes(const System::TArray__1<System::WideChar> Chars){ return TEncoding::GetBytes(Chars); }
	inline System::TArray__1<System::Byte> __fastcall  GetBytes(const System::WideChar *Chars, const int Chars_High, int CharIndex, int CharCount){ return TEncoding::GetBytes(Chars, Chars_High, CharIndex, CharCount); }
	inline System::TArray__1<System::Byte> __fastcall  GetBytes(const System::TArray__1<System::WideChar> Chars, int CharIndex, int CharCount){ return TEncoding::GetBytes(Chars, CharIndex, CharCount); }
	inline int __fastcall  GetBytes(const System::WideChar *Chars, const int Chars_High, int CharIndex, int CharCount, const System::TArray__1<System::Byte> Bytes, int ByteIndex){ return TEncoding::GetBytes(Chars, Chars_High, CharIndex, CharCount, Bytes, ByteIndex); }
	inline int __fastcall  GetBytes(const System::TArray__1<System::WideChar> Chars, int CharIndex, int CharCount, const System::TArray__1<System::Byte> Bytes, int ByteIndex){ return TEncoding::GetBytes(Chars, CharIndex, CharCount, Bytes, ByteIndex); }
	inline System::TArray__1<System::Byte> __fastcall  GetBytes(const System::UnicodeString S){ return TEncoding::GetBytes(S); }
	inline int __fastcall  GetBytes(const System::UnicodeString S, int CharIndex, int CharCount, const System::TArray__1<System::Byte> Bytes, int ByteIndex){ return TEncoding::GetBytes(S, CharIndex, CharCount, Bytes, ByteIndex); }
	inline int __fastcall  GetBytes(const System::UnicodeString S, int CharIndex, int CharCount, const System::TArray__1<System::Byte> Bytes, int ByteIndex, const int StringBaseIndex){ return TEncoding::GetBytes(S, CharIndex, CharCount, Bytes, ByteIndex, StringBaseIndex); }
#endif /* _WIN64 */
	inline int __fastcall  GetCharCount(const System::Byte *Bytes, const int Bytes_High){ return TEncoding::GetCharCount(Bytes, Bytes_High); }
#ifndef _WIN64
	inline int __fastcall  GetCharCount(const System::DynamicArray<System::Byte> Bytes){ return TEncoding::GetCharCount(Bytes); }
#else /* _WIN64 */
	inline int __fastcall  GetCharCount(const System::TArray__1<System::Byte> Bytes){ return TEncoding::GetCharCount(Bytes); }
#endif /* _WIN64 */
	inline int __fastcall  GetCharCount(const System::Byte *Bytes, const int Bytes_High, int ByteIndex, int ByteCount){ return TEncoding::GetCharCount(Bytes, Bytes_High, ByteIndex, ByteCount); }
#ifndef _WIN64
	inline int __fastcall  GetCharCount(const System::DynamicArray<System::Byte> Bytes, int ByteIndex, int ByteCount){ return TEncoding::GetCharCount(Bytes, ByteIndex, ByteCount); }
	inline System::DynamicArray<System::WideChar> __fastcall  GetChars(const System::Byte *Bytes, const int Bytes_High){ return TEncoding::GetChars(Bytes, Bytes_High); }
	inline System::DynamicArray<System::WideChar> __fastcall  GetChars(const System::DynamicArray<System::Byte> Bytes){ return TEncoding::GetChars(Bytes); }
	inline System::DynamicArray<System::WideChar> __fastcall  GetChars(const System::Byte *Bytes, const int Bytes_High, int ByteIndex, int ByteCount){ return TEncoding::GetChars(Bytes, Bytes_High, ByteIndex, ByteCount); }
	inline System::DynamicArray<System::WideChar> __fastcall  GetChars(const System::DynamicArray<System::Byte> Bytes, int ByteIndex, int ByteCount){ return TEncoding::GetChars(Bytes, ByteIndex, ByteCount); }
#else /* _WIN64 */
	inline int __fastcall  GetCharCount(const System::TArray__1<System::Byte> Bytes, int ByteIndex, int ByteCount){ return TEncoding::GetCharCount(Bytes, ByteIndex, ByteCount); }
	inline System::TArray__1<System::WideChar> __fastcall  GetChars(const System::Byte *Bytes, const int Bytes_High){ return TEncoding::GetChars(Bytes, Bytes_High); }
	inline System::TArray__1<System::WideChar> __fastcall  GetChars(const System::TArray__1<System::Byte> Bytes){ return TEncoding::GetChars(Bytes); }
	inline System::TArray__1<System::WideChar> __fastcall  GetChars(const System::Byte *Bytes, const int Bytes_High, int ByteIndex, int ByteCount){ return TEncoding::GetChars(Bytes, Bytes_High, ByteIndex, ByteCount); }
	inline System::TArray__1<System::WideChar> __fastcall  GetChars(const System::TArray__1<System::Byte> Bytes, int ByteIndex, int ByteCount){ return TEncoding::GetChars(Bytes, ByteIndex, ByteCount); }
#endif /* _WIN64 */
	inline int __fastcall  GetChars(const System::Byte *Bytes, const int Bytes_High, int ByteIndex, int ByteCount, const System::WideChar *Chars, const int Chars_High, int CharIndex){ return TEncoding::GetChars(Bytes, Bytes_High, ByteIndex, ByteCount, Chars, Chars_High, CharIndex); }
#ifndef _WIN64
	inline int __fastcall  GetChars(const System::DynamicArray<System::Byte> Bytes, int ByteIndex, int ByteCount, const System::DynamicArray<System::WideChar> Chars, int CharIndex){ return TEncoding::GetChars(Bytes, ByteIndex, ByteCount, Chars, CharIndex); }
#else /* _WIN64 */
	inline int __fastcall  GetChars(const System::TArray__1<System::Byte> Bytes, int ByteIndex, int ByteCount, const System::TArray__1<System::WideChar> Chars, int CharIndex){ return TEncoding::GetChars(Bytes, ByteIndex, ByteCount, Chars, CharIndex); }
#endif /* _WIN64 */
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TUTF7Encoding : public TMBCSEncoding
{
	typedef TMBCSEncoding inherited;
	
public:
	__fastcall virtual TUTF7Encoding()/* overload */;
	virtual TEncoding* __fastcall Clone();
	virtual int __fastcall GetMaxByteCount(int CharCount);
	virtual int __fastcall GetMaxCharCount(int ByteCount);
public:
	/* TMBCSEncoding.Create */ inline __fastcall virtual TUTF7Encoding(int CodePage)/* overload */ : TMBCSEncoding(CodePage) { }
	/* TMBCSEncoding.Create */ inline __fastcall virtual TUTF7Encoding(int CodePage, int MBToWCharFlags, int WCharToMBFlags)/* overload */ : TMBCSEncoding(CodePage, MBToWCharFlags, WCharToMBFlags) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TUTF7Encoding() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TUTF8Encoding : public TUTF7Encoding
{
	typedef TUTF7Encoding inherited;
	
public:
	__fastcall virtual TUTF8Encoding()/* overload */;
	virtual TEncoding* __fastcall Clone();
	virtual int __fastcall GetMaxByteCount(int CharCount);
	virtual int __fastcall GetMaxCharCount(int ByteCount);
#ifndef _WIN64
	virtual System::DynamicArray<System::Byte> __fastcall GetPreamble();
#else /* _WIN64 */
	virtual System::TArray__1<System::Byte> __fastcall GetPreamble();
#endif /* _WIN64 */
public:
	/* TMBCSEncoding.Create */ inline __fastcall virtual TUTF8Encoding(int CodePage)/* overload */ : TUTF7Encoding(CodePage) { }
	/* TMBCSEncoding.Create */ inline __fastcall virtual TUTF8Encoding(int CodePage, int MBToWCharFlags, int WCharToMBFlags)/* overload */ : TUTF7Encoding(CodePage, MBToWCharFlags, WCharToMBFlags) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TUTF8Encoding() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TUnicodeEncoding : public TEncoding
{
	typedef TEncoding inherited;
	
protected:
	virtual int __fastcall GetByteCount(System::WideChar * Chars, int CharCount)/* overload */;
	virtual int __fastcall GetBytes(System::WideChar * Chars, int CharCount, System::PByte Bytes, int ByteCount)/* overload */;
	virtual int __fastcall GetCharCount(System::PByte Bytes, int ByteCount)/* overload */;
	virtual int __fastcall GetChars(System::PByte Bytes, int ByteCount, System::WideChar * Chars, int CharCount)/* overload */;
	virtual unsigned __fastcall GetCodePage();
	virtual System::UnicodeString __fastcall GetEncodingName();
	
public:
	__fastcall virtual TUnicodeEncoding();
	virtual TEncoding* __fastcall Clone();
	virtual int __fastcall GetMaxByteCount(int CharCount);
	virtual int __fastcall GetMaxCharCount(int ByteCount);
#ifndef _WIN64
	virtual System::DynamicArray<System::Byte> __fastcall GetPreamble();
#else /* _WIN64 */
	virtual System::TArray__1<System::Byte> __fastcall GetPreamble();
#endif /* _WIN64 */
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TUnicodeEncoding() { }
	
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  GetByteCount(const System::WideChar Chars){ return TEncoding::GetByteCount(Chars); }
	inline int __fastcall  GetByteCount(const System::WideChar *Chars, const int Chars_High){ return TEncoding::GetByteCount(Chars, Chars_High); }
#ifndef _WIN64
	inline int __fastcall  GetByteCount(const System::DynamicArray<System::WideChar> Chars){ return TEncoding::GetByteCount(Chars); }
#else /* _WIN64 */
	inline int __fastcall  GetByteCount(const System::TArray__1<System::WideChar> Chars){ return TEncoding::GetByteCount(Chars); }
#endif /* _WIN64 */
	inline int __fastcall  GetByteCount(const System::WideChar *Chars, const int Chars_High, int CharIndex, int CharCount){ return TEncoding::GetByteCount(Chars, Chars_High, CharIndex, CharCount); }
#ifndef _WIN64
	inline int __fastcall  GetByteCount(const System::DynamicArray<System::WideChar> Chars, int CharIndex, int CharCount){ return TEncoding::GetByteCount(Chars, CharIndex, CharCount); }
#else /* _WIN64 */
	inline int __fastcall  GetByteCount(const System::TArray__1<System::WideChar> Chars, int CharIndex, int CharCount){ return TEncoding::GetByteCount(Chars, CharIndex, CharCount); }
#endif /* _WIN64 */
	inline int __fastcall  GetByteCount(const System::UnicodeString S){ return TEncoding::GetByteCount(S); }
	inline int __fastcall  GetByteCount(const System::UnicodeString S, int CharIndex, int CharCount){ return TEncoding::GetByteCount(S, CharIndex, CharCount); }
	inline int __fastcall  GetByteCount(const System::UnicodeString S, int CharIndex, int CharCount, const int StringBaseIndex){ return TEncoding::GetByteCount(S, CharIndex, CharCount, StringBaseIndex); }
#ifndef _WIN64
	inline System::DynamicArray<System::Byte> __fastcall  GetBytes(const System::WideChar Chars){ return TEncoding::GetBytes(Chars); }
	inline System::DynamicArray<System::Byte> __fastcall  GetBytes(const System::WideChar *Chars, const int Chars_High){ return TEncoding::GetBytes(Chars, Chars_High); }
	inline System::DynamicArray<System::Byte> __fastcall  GetBytes(const System::DynamicArray<System::WideChar> Chars){ return TEncoding::GetBytes(Chars); }
	inline System::DynamicArray<System::Byte> __fastcall  GetBytes(const System::WideChar *Chars, const int Chars_High, int CharIndex, int CharCount){ return TEncoding::GetBytes(Chars, Chars_High, CharIndex, CharCount); }
	inline System::DynamicArray<System::Byte> __fastcall  GetBytes(const System::DynamicArray<System::WideChar> Chars, int CharIndex, int CharCount){ return TEncoding::GetBytes(Chars, CharIndex, CharCount); }
	inline int __fastcall  GetBytes(const System::WideChar *Chars, const int Chars_High, int CharIndex, int CharCount, const System::DynamicArray<System::Byte> Bytes, int ByteIndex){ return TEncoding::GetBytes(Chars, Chars_High, CharIndex, CharCount, Bytes, ByteIndex); }
	inline int __fastcall  GetBytes(const System::DynamicArray<System::WideChar> Chars, int CharIndex, int CharCount, const System::DynamicArray<System::Byte> Bytes, int ByteIndex){ return TEncoding::GetBytes(Chars, CharIndex, CharCount, Bytes, ByteIndex); }
	inline System::DynamicArray<System::Byte> __fastcall  GetBytes(const System::UnicodeString S){ return TEncoding::GetBytes(S); }
	inline int __fastcall  GetBytes(const System::UnicodeString S, int CharIndex, int CharCount, const System::DynamicArray<System::Byte> Bytes, int ByteIndex){ return TEncoding::GetBytes(S, CharIndex, CharCount, Bytes, ByteIndex); }
	inline int __fastcall  GetBytes(const System::UnicodeString S, int CharIndex, int CharCount, const System::DynamicArray<System::Byte> Bytes, int ByteIndex, const int StringBaseIndex){ return TEncoding::GetBytes(S, CharIndex, CharCount, Bytes, ByteIndex, StringBaseIndex); }
#else /* _WIN64 */
	inline System::TArray__1<System::Byte> __fastcall  GetBytes(const System::WideChar Chars){ return TEncoding::GetBytes(Chars); }
	inline System::TArray__1<System::Byte> __fastcall  GetBytes(const System::WideChar *Chars, const int Chars_High){ return TEncoding::GetBytes(Chars, Chars_High); }
	inline System::TArray__1<System::Byte> __fastcall  GetBytes(const System::TArray__1<System::WideChar> Chars){ return TEncoding::GetBytes(Chars); }
	inline System::TArray__1<System::Byte> __fastcall  GetBytes(const System::WideChar *Chars, const int Chars_High, int CharIndex, int CharCount){ return TEncoding::GetBytes(Chars, Chars_High, CharIndex, CharCount); }
	inline System::TArray__1<System::Byte> __fastcall  GetBytes(const System::TArray__1<System::WideChar> Chars, int CharIndex, int CharCount){ return TEncoding::GetBytes(Chars, CharIndex, CharCount); }
	inline int __fastcall  GetBytes(const System::WideChar *Chars, const int Chars_High, int CharIndex, int CharCount, const System::TArray__1<System::Byte> Bytes, int ByteIndex){ return TEncoding::GetBytes(Chars, Chars_High, CharIndex, CharCount, Bytes, ByteIndex); }
	inline int __fastcall  GetBytes(const System::TArray__1<System::WideChar> Chars, int CharIndex, int CharCount, const System::TArray__1<System::Byte> Bytes, int ByteIndex){ return TEncoding::GetBytes(Chars, CharIndex, CharCount, Bytes, ByteIndex); }
	inline System::TArray__1<System::Byte> __fastcall  GetBytes(const System::UnicodeString S){ return TEncoding::GetBytes(S); }
	inline int __fastcall  GetBytes(const System::UnicodeString S, int CharIndex, int CharCount, const System::TArray__1<System::Byte> Bytes, int ByteIndex){ return TEncoding::GetBytes(S, CharIndex, CharCount, Bytes, ByteIndex); }
	inline int __fastcall  GetBytes(const System::UnicodeString S, int CharIndex, int CharCount, const System::TArray__1<System::Byte> Bytes, int ByteIndex, const int StringBaseIndex){ return TEncoding::GetBytes(S, CharIndex, CharCount, Bytes, ByteIndex, StringBaseIndex); }
#endif /* _WIN64 */
	inline int __fastcall  GetCharCount(const System::Byte *Bytes, const int Bytes_High){ return TEncoding::GetCharCount(Bytes, Bytes_High); }
#ifndef _WIN64
	inline int __fastcall  GetCharCount(const System::DynamicArray<System::Byte> Bytes){ return TEncoding::GetCharCount(Bytes); }
#else /* _WIN64 */
	inline int __fastcall  GetCharCount(const System::TArray__1<System::Byte> Bytes){ return TEncoding::GetCharCount(Bytes); }
#endif /* _WIN64 */
	inline int __fastcall  GetCharCount(const System::Byte *Bytes, const int Bytes_High, int ByteIndex, int ByteCount){ return TEncoding::GetCharCount(Bytes, Bytes_High, ByteIndex, ByteCount); }
#ifndef _WIN64
	inline int __fastcall  GetCharCount(const System::DynamicArray<System::Byte> Bytes, int ByteIndex, int ByteCount){ return TEncoding::GetCharCount(Bytes, ByteIndex, ByteCount); }
	inline System::DynamicArray<System::WideChar> __fastcall  GetChars(const System::Byte *Bytes, const int Bytes_High){ return TEncoding::GetChars(Bytes, Bytes_High); }
	inline System::DynamicArray<System::WideChar> __fastcall  GetChars(const System::DynamicArray<System::Byte> Bytes){ return TEncoding::GetChars(Bytes); }
	inline System::DynamicArray<System::WideChar> __fastcall  GetChars(const System::Byte *Bytes, const int Bytes_High, int ByteIndex, int ByteCount){ return TEncoding::GetChars(Bytes, Bytes_High, ByteIndex, ByteCount); }
	inline System::DynamicArray<System::WideChar> __fastcall  GetChars(const System::DynamicArray<System::Byte> Bytes, int ByteIndex, int ByteCount){ return TEncoding::GetChars(Bytes, ByteIndex, ByteCount); }
#else /* _WIN64 */
	inline int __fastcall  GetCharCount(const System::TArray__1<System::Byte> Bytes, int ByteIndex, int ByteCount){ return TEncoding::GetCharCount(Bytes, ByteIndex, ByteCount); }
	inline System::TArray__1<System::WideChar> __fastcall  GetChars(const System::Byte *Bytes, const int Bytes_High){ return TEncoding::GetChars(Bytes, Bytes_High); }
	inline System::TArray__1<System::WideChar> __fastcall  GetChars(const System::TArray__1<System::Byte> Bytes){ return TEncoding::GetChars(Bytes); }
	inline System::TArray__1<System::WideChar> __fastcall  GetChars(const System::Byte *Bytes, const int Bytes_High, int ByteIndex, int ByteCount){ return TEncoding::GetChars(Bytes, Bytes_High, ByteIndex, ByteCount); }
	inline System::TArray__1<System::WideChar> __fastcall  GetChars(const System::TArray__1<System::Byte> Bytes, int ByteIndex, int ByteCount){ return TEncoding::GetChars(Bytes, ByteIndex, ByteCount); }
#endif /* _WIN64 */
	inline int __fastcall  GetChars(const System::Byte *Bytes, const int Bytes_High, int ByteIndex, int ByteCount, const System::WideChar *Chars, const int Chars_High, int CharIndex){ return TEncoding::GetChars(Bytes, Bytes_High, ByteIndex, ByteCount, Chars, Chars_High, CharIndex); }
#ifndef _WIN64
	inline int __fastcall  GetChars(const System::DynamicArray<System::Byte> Bytes, int ByteIndex, int ByteCount, const System::DynamicArray<System::WideChar> Chars, int CharIndex){ return TEncoding::GetChars(Bytes, ByteIndex, ByteCount, Chars, CharIndex); }
#else /* _WIN64 */
	inline int __fastcall  GetChars(const System::TArray__1<System::Byte> Bytes, int ByteIndex, int ByteCount, const System::TArray__1<System::WideChar> Chars, int CharIndex){ return TEncoding::GetChars(Bytes, ByteIndex, ByteCount, Chars, CharIndex); }
#endif /* _WIN64 */
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBigEndianUnicodeEncoding : public TUnicodeEncoding
{
	typedef TUnicodeEncoding inherited;
	
protected:
	virtual int __fastcall GetBytes(System::WideChar * Chars, int CharCount, System::PByte Bytes, int ByteCount)/* overload */;
	virtual int __fastcall GetChars(System::PByte Bytes, int ByteCount, System::WideChar * Chars, int CharCount)/* overload */;
	virtual unsigned __fastcall GetCodePage();
	virtual System::UnicodeString __fastcall GetEncodingName();
	
public:
	virtual TEncoding* __fastcall Clone();
#ifndef _WIN64
	virtual System::DynamicArray<System::Byte> __fastcall GetPreamble();
#else /* _WIN64 */
	virtual System::TArray__1<System::Byte> __fastcall GetPreamble();
#endif /* _WIN64 */
public:
	/* TUnicodeEncoding.Create */ inline __fastcall virtual TBigEndianUnicodeEncoding() : TUnicodeEncoding() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBigEndianUnicodeEncoding() { }
	
	/* Hoisted overloads: */
	
public:
#ifndef _WIN64
	inline System::DynamicArray<System::Byte> __fastcall  GetBytes(const System::WideChar Chars){ return TEncoding::GetBytes(Chars); }
	inline System::DynamicArray<System::Byte> __fastcall  GetBytes(const System::WideChar *Chars, const int Chars_High){ return TEncoding::GetBytes(Chars, Chars_High); }
	inline System::DynamicArray<System::Byte> __fastcall  GetBytes(const System::DynamicArray<System::WideChar> Chars){ return TEncoding::GetBytes(Chars); }
	inline System::DynamicArray<System::Byte> __fastcall  GetBytes(const System::WideChar *Chars, const int Chars_High, int CharIndex, int CharCount){ return TEncoding::GetBytes(Chars, Chars_High, CharIndex, CharCount); }
	inline System::DynamicArray<System::Byte> __fastcall  GetBytes(const System::DynamicArray<System::WideChar> Chars, int CharIndex, int CharCount){ return TEncoding::GetBytes(Chars, CharIndex, CharCount); }
	inline int __fastcall  GetBytes(const System::WideChar *Chars, const int Chars_High, int CharIndex, int CharCount, const System::DynamicArray<System::Byte> Bytes, int ByteIndex){ return TEncoding::GetBytes(Chars, Chars_High, CharIndex, CharCount, Bytes, ByteIndex); }
	inline int __fastcall  GetBytes(const System::DynamicArray<System::WideChar> Chars, int CharIndex, int CharCount, const System::DynamicArray<System::Byte> Bytes, int ByteIndex){ return TEncoding::GetBytes(Chars, CharIndex, CharCount, Bytes, ByteIndex); }
	inline System::DynamicArray<System::Byte> __fastcall  GetBytes(const System::UnicodeString S){ return TEncoding::GetBytes(S); }
	inline int __fastcall  GetBytes(const System::UnicodeString S, int CharIndex, int CharCount, const System::DynamicArray<System::Byte> Bytes, int ByteIndex){ return TEncoding::GetBytes(S, CharIndex, CharCount, Bytes, ByteIndex); }
	inline int __fastcall  GetBytes(const System::UnicodeString S, int CharIndex, int CharCount, const System::DynamicArray<System::Byte> Bytes, int ByteIndex, const int StringBaseIndex){ return TEncoding::GetBytes(S, CharIndex, CharCount, Bytes, ByteIndex, StringBaseIndex); }
	inline System::DynamicArray<System::WideChar> __fastcall  GetChars(const System::Byte *Bytes, const int Bytes_High){ return TEncoding::GetChars(Bytes, Bytes_High); }
	inline System::DynamicArray<System::WideChar> __fastcall  GetChars(const System::DynamicArray<System::Byte> Bytes){ return TEncoding::GetChars(Bytes); }
	inline System::DynamicArray<System::WideChar> __fastcall  GetChars(const System::Byte *Bytes, const int Bytes_High, int ByteIndex, int ByteCount){ return TEncoding::GetChars(Bytes, Bytes_High, ByteIndex, ByteCount); }
	inline System::DynamicArray<System::WideChar> __fastcall  GetChars(const System::DynamicArray<System::Byte> Bytes, int ByteIndex, int ByteCount){ return TEncoding::GetChars(Bytes, ByteIndex, ByteCount); }
#else /* _WIN64 */
	inline System::TArray__1<System::Byte> __fastcall  GetBytes(const System::WideChar Chars){ return TEncoding::GetBytes(Chars); }
	inline System::TArray__1<System::Byte> __fastcall  GetBytes(const System::WideChar *Chars, const int Chars_High){ return TEncoding::GetBytes(Chars, Chars_High); }
	inline System::TArray__1<System::Byte> __fastcall  GetBytes(const System::TArray__1<System::WideChar> Chars){ return TEncoding::GetBytes(Chars); }
	inline System::TArray__1<System::Byte> __fastcall  GetBytes(const System::WideChar *Chars, const int Chars_High, int CharIndex, int CharCount){ return TEncoding::GetBytes(Chars, Chars_High, CharIndex, CharCount); }
	inline System::TArray__1<System::Byte> __fastcall  GetBytes(const System::TArray__1<System::WideChar> Chars, int CharIndex, int CharCount){ return TEncoding::GetBytes(Chars, CharIndex, CharCount); }
	inline int __fastcall  GetBytes(const System::WideChar *Chars, const int Chars_High, int CharIndex, int CharCount, const System::TArray__1<System::Byte> Bytes, int ByteIndex){ return TEncoding::GetBytes(Chars, Chars_High, CharIndex, CharCount, Bytes, ByteIndex); }
	inline int __fastcall  GetBytes(const System::TArray__1<System::WideChar> Chars, int CharIndex, int CharCount, const System::TArray__1<System::Byte> Bytes, int ByteIndex){ return TEncoding::GetBytes(Chars, CharIndex, CharCount, Bytes, ByteIndex); }
	inline System::TArray__1<System::Byte> __fastcall  GetBytes(const System::UnicodeString S){ return TEncoding::GetBytes(S); }
	inline int __fastcall  GetBytes(const System::UnicodeString S, int CharIndex, int CharCount, const System::TArray__1<System::Byte> Bytes, int ByteIndex){ return TEncoding::GetBytes(S, CharIndex, CharCount, Bytes, ByteIndex); }
	inline int __fastcall  GetBytes(const System::UnicodeString S, int CharIndex, int CharCount, const System::TArray__1<System::Byte> Bytes, int ByteIndex, const int StringBaseIndex){ return TEncoding::GetBytes(S, CharIndex, CharCount, Bytes, ByteIndex, StringBaseIndex); }
	inline System::TArray__1<System::WideChar> __fastcall  GetChars(const System::Byte *Bytes, const int Bytes_High){ return TEncoding::GetChars(Bytes, Bytes_High); }
	inline System::TArray__1<System::WideChar> __fastcall  GetChars(const System::TArray__1<System::Byte> Bytes){ return TEncoding::GetChars(Bytes); }
	inline System::TArray__1<System::WideChar> __fastcall  GetChars(const System::Byte *Bytes, const int Bytes_High, int ByteIndex, int ByteCount){ return TEncoding::GetChars(Bytes, Bytes_High, ByteIndex, ByteCount); }
	inline System::TArray__1<System::WideChar> __fastcall  GetChars(const System::TArray__1<System::Byte> Bytes, int ByteIndex, int ByteCount){ return TEncoding::GetChars(Bytes, ByteIndex, ByteCount); }
#endif /* _WIN64 */
	inline int __fastcall  GetChars(const System::Byte *Bytes, const int Bytes_High, int ByteIndex, int ByteCount, const System::WideChar *Chars, const int Chars_High, int CharIndex){ return TEncoding::GetChars(Bytes, Bytes_High, ByteIndex, ByteCount, Chars, Chars_High, CharIndex); }
#ifndef _WIN64
	inline int __fastcall  GetChars(const System::DynamicArray<System::Byte> Bytes, int ByteIndex, int ByteCount, const System::DynamicArray<System::WideChar> Chars, int CharIndex){ return TEncoding::GetChars(Bytes, ByteIndex, ByteCount, Chars, CharIndex); }
#else /* _WIN64 */
	inline int __fastcall  GetChars(const System::TArray__1<System::Byte> Bytes, int ByteIndex, int ByteCount, const System::TArray__1<System::WideChar> Chars, int CharIndex){ return TEncoding::GetChars(Bytes, ByteIndex, ByteCount, Chars, CharIndex); }
#endif /* _WIN64 */
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface TProc  : public System::IInterface 
{
	virtual void __fastcall Invoke() = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface TProc__1  : public System::IInterface 
{
	virtual void __fastcall Invoke(T Arg1) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2> __interface TProc__2  : public System::IInterface 
{
	virtual void __fastcall Invoke(T1 Arg1, T2 Arg2) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3> __interface TProc__3  : public System::IInterface 
{
	virtual void __fastcall Invoke(T1 Arg1, T2 Arg2, T3 Arg3) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4> __interface TProc__4  : public System::IInterface 
{
	virtual void __fastcall Invoke(T1 Arg1, T2 Arg2, T3 Arg3, T4 Arg4) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename TResult> __interface TFunc__1  : public System::IInterface 
{
	virtual TResult __fastcall Invoke() = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T, typename TResult> __interface TFunc__2  : public System::IInterface 
{
	virtual TResult __fastcall Invoke(T Arg1) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename TResult> __interface TFunc__3  : public System::IInterface 
{
	virtual TResult __fastcall Invoke(T1 Arg1, T2 Arg2) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename TResult> __interface TFunc__4  : public System::IInterface 
{
	virtual TResult __fastcall Invoke(T1 Arg1, T2 Arg2, T3 Arg3) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename TResult> __interface TFunc__5  : public System::IInterface 
{
	virtual TResult __fastcall Invoke(T1 Arg1, T2 Arg2, T3 Arg3, T4 Arg4) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface TPredicate__1  : public System::IInterface 
{
	virtual bool __fastcall Invoke(T Arg1) = 0 ;
};

__interface ILanguageEnumerator  : public System::IInterface 
{
	virtual bool __fastcall MoveNext() = 0 ;
	virtual System::UnicodeString __fastcall GetCurrent() = 0 ;
	__property System::UnicodeString Current = {read=GetCurrent};
};

__interface ILanguageEnumerable  : public System::IInterface 
{
	virtual _di_ILanguageEnumerator __fastcall GetEnumerator() = 0 ;
};

enum class DECLSPEC_DENUM TUncertainState : unsigned char { Maybe, Yes, No };

struct DECLSPEC_DRECORD TOSVersion
{
	
public:
	enum DECLSPEC_DENUM TArchitecture : unsigned char { arIntelX86, arIntelX64, arARM32, arARM64 };
	
	enum DECLSPEC_DENUM TPlatform : unsigned char { pfWindows, pfMacOS, pfiOS, pfAndroid, pfWinRT, pfLinux };
	
	
public:
	#define TOSVersion_AllArchitectures (System::Set<TArchitecture, TArchitecture::arIntelX86, TArchitecture::arARM64>() << TArchitecture::arIntelX86 << TArchitecture::arIntelX64 << TArchitecture::arARM32 << TArchitecture::arARM64 )
	
	#define TOSVersion_AllPlatforms (System::Set<TPlatform, TPlatform::pfWindows, TPlatform::pfLinux>() << TPlatform::pfWindows << TPlatform::pfMacOS << TPlatform::pfiOS << TPlatform::pfAndroid << TPlatform::pfWinRT << TPlatform::pfLinux )
	
	
private:
	static TArchitecture FArchitecture;
	static int FBuild;
	static int FMajor;
	static int FMinor;
	static System::UnicodeString FName;
	static TPlatform FPlatform;
	static int FServicePackMajor;
	static int FServicePackMinor;
	
private:
	// __classmethod void __fastcall Create@();
	
public:
	static bool __fastcall Check(int AMajor)/* overload */;
	static bool __fastcall Check(int AMajor, int AMinor)/* overload */;
	static bool __fastcall Check(int AMajor, int AMinor, int AServicePackMajor)/* overload */;
	static System::UnicodeString __fastcall ToString();
	/* static */ __property TArchitecture Architecture = {read=FArchitecture};
	/* static */ __property int Build = {read=FBuild};
	/* static */ __property int Major = {read=FMajor};
	/* static */ __property int Minor = {read=FMinor};
	/* static */ __property System::UnicodeString Name = {read=FName};
	/* static */ __property TPlatform Platform = {read=FPlatform};
	/* static */ __property int ServicePackMajor = {read=FServicePackMajor};
	/* static */ __property int ServicePackMinor = {read=FServicePackMinor};
	
private:
	// __classmethod void __fastcall Destroy@();
};


typedef System::Set<TOSVersion::TArchitecture, TOSVersion::TArchitecture::arIntelX86, TOSVersion::TArchitecture::arARM64> TArchitectures;

typedef System::Set<TOSVersion::TPlatform, TOSVersion::TPlatform::pfWindows, TOSVersion::TPlatform::pfLinux> TPlatforms;

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 fmOpenRead = System::Int8(0x0);
static const System::Int8 fmOpenWrite = System::Int8(0x1);
static const System::Int8 fmOpenReadWrite = System::Int8(0x2);
static const System::Int8 fmExclusive = System::Int8(0x4);
static const System::Int8 fmShareCompat = System::Int8(0x0);
static const System::Int8 fmShareExclusive = System::Int8(0x10);
static const System::Int8 fmShareDenyWrite = System::Int8(0x20);
static const System::Int8 fmShareDenyRead = System::Int8(0x30);
static const System::Int8 fmShareDenyNone = System::Int8(0x40);
static const System::Int8 faInvalid = System::Int8(-1);
static const System::Int8 faReadOnly = System::Int8(0x1);
static const System::Int8 faHidden = System::Int8(0x2);
static const System::Int8 faSysFile = System::Int8(0x4);
static const System::Int8 faVolumeID _DEPRECATED_ATTRIBUTE0  = System::Int8(0x8);
static const System::Int8 faDirectory = System::Int8(0x10);
static const System::Int8 faArchive = System::Int8(0x20);
static const System::Byte faNormal = System::Byte(0x80);
static const System::Word faTemporary = System::Word(0x100);
static const System::Word faSymLink = System::Word(0x400);
static const System::Word faCompressed = System::Word(0x800);
static const System::Word faEncrypted = System::Word(0x4000);
static const int faVirtual = int(0x10000);
static const System::Word faAnyFile = System::Word(0x1ff);
static const System::Int8 HoursPerDay = System::Int8(0x18);
static const System::Int8 MinsPerHour = System::Int8(0x3c);
static const System::Int8 SecsPerMin = System::Int8(0x3c);
static const System::Word MSecsPerSec = System::Word(0x3e8);
static const System::Word MinsPerDay = System::Word(0x5a0);
static const int SecsPerDay = int(0x15180);
static const System::Word SecsPerHour = System::Word(0xe10);
static const int MSecsPerDay = int(0x5265c00);
static const int DateDelta = int(0xa955a);
static const System::Word UnixDateDelta = System::Word(0x63e1);
extern DELPHI_PACKAGE System::UnicodeString EmptyStr;
extern DELPHI_PACKAGE System::UnicodeString *NullStr;
extern DELPHI_PACKAGE System::WideString EmptyWideStr;
extern DELPHI_PACKAGE System::WideString *NullWideStr;
extern DELPHI_PACKAGE System::AnsiString EmptyAnsiStr;
extern DELPHI_PACKAGE System::AnsiString *NullAnsiStr;
static const System::Int8 CDefaultTwoDigitYearCenturyWindow = System::Int8(0x32);
extern DELPHI_PACKAGE TSysLocale SysLocale;
extern DELPHI_PACKAGE TFormatSettings FormatSettings;
static const System::WideChar PathDelim = (System::WideChar)(0x5c);
static const System::WideChar DriveDelim = (System::WideChar)(0x3a);
static const System::WideChar PathSep = (System::WideChar)(0x3b);
extern DELPHI_PACKAGE System_Sysutils__75 TrueBoolStrs;
extern DELPHI_PACKAGE System_Sysutils__85 FalseBoolStrs;
#define DefaultTrueBoolStr L"True"
#define DefaultFalseBoolStr L"False"
extern DELPHI_PACKAGE System::Currency MinCurrency;
extern DELPHI_PACKAGE System::Currency MaxCurrency;
extern DELPHI_PACKAGE System::StaticArray<System::StaticArray<System::Word, 12>, 2> MonthDays;
extern DELPHI_PACKAGE System::TDateTime MinDateTime;
extern DELPHI_PACKAGE System::TDateTime MaxDateTime;
#define SwitchChars (System::Set<char, _DELPHI_SET_CHAR(0), _DELPHI_SET_CHAR(255)>() << '\x2d' << '\x2f' )
extern DELPHI_PACKAGE TCmdLineSwitchType clstValueNextParamForce;
static const System::Int8 pfNeverBuild = System::Int8(0x1);
static const System::Int8 pfDesignOnly = System::Int8(0x2);
static const System::Int8 pfRunOnly = System::Int8(0x4);
static const System::Int8 pfIgnoreDupUnits = System::Int8(0x8);
static const unsigned pfModuleTypeMask = unsigned(0xc0000000);
static const System::Int8 pfExeModule = System::Int8(0x0);
static const int pfPackageModule = int(0x40000000);
static const int pfProducerMask = int(0xc000000);
static const System::Int8 pfV3Produced = System::Int8(0x0);
static const int pfProducerUndefined = int(0x4000000);
static const int pfBCB4Produced = int(0x8000000);
static const int pfDelphi4Produced = int(0xc000000);
static const unsigned pfLibraryModule = unsigned(0x80000000);
static const int pfConsumerMask = int(0xf00000);
static const System::Int8 pfConsumerCompat = System::Int8(0x0);
static const int pfConsumerDelphi = int(0x100000);
static const int pfConsumerBCB = int(0x200000);
static const System::Int8 ufMainUnit = System::Int8(0x1);
static const System::Int8 ufPackageUnit = System::Int8(0x2);
static const System::Int8 ufWeakUnit = System::Int8(0x4);
static const System::Int8 ufOrgWeakUnit = System::Int8(0x8);
static const System::Int8 ufImplicitUnit = System::Int8(0x10);
static const System::Int8 ufWeakPackageUnit = System::Int8(0x6);
extern DELPHI_PACKAGE System::UnicodeString HexDisplayPrefix;
extern DELPHI_PACKAGE TGrowCollectionFunc GrowCollectionFunc;
extern DELPHI_PACKAGE HRESULT __fastcall CreateGUID(/* out */ GUID &Guid);
extern DELPHI_PACKAGE GUID __fastcall StrToGUID(System::WideChar * S);
extern DELPHI_PACKAGE GUID __fastcall StringToGUID(const System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GUIDToString(const GUID &Guid);
extern DELPHI_PACKAGE void __fastcall AddExitProc(TProcedure Proc);
extern DELPHI_PACKAGE bool __fastcall IsLeadChar(char C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsLeadChar(System::Byte C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsLeadChar(System::WideChar C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall CharInSet(char C, const TSysCharSet &CharSet)/* overload */;
extern DELPHI_PACKAGE bool __fastcall CharInSet(System::WideChar C, const TSysCharSet &CharSet)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall StrLen _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const char * Str)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall StrLen(const System::WideChar * Str)/* overload */;
extern DELPHI_PACKAGE System::PAnsiString __fastcall NewStr _DEPRECATED_ATTRIBUTE0 (const System::AnsiString S);
extern DELPHI_PACKAGE void __fastcall DisposeStr _DEPRECATED_ATTRIBUTE0 (System::PAnsiString P);
extern DELPHI_PACKAGE void __fastcall AssignStr _DEPRECATED_ATTRIBUTE0 (System::PAnsiString &P, const System::AnsiString S);
extern DELPHI_PACKAGE void __fastcall AppendStr _DEPRECATED_ATTRIBUTE0 (System::AnsiString &Dest, const System::AnsiString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall UpperCase(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall UpperCase(const System::UnicodeString S, TLocaleOptions LocaleOptions)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall LowerCase(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall LowerCase(const System::UnicodeString S, TLocaleOptions LocaleOptions)/* overload */;
extern DELPHI_PACKAGE int __fastcall CompareStr(const System::UnicodeString S1, const System::UnicodeString S2)/* overload */;
extern DELPHI_PACKAGE int __fastcall CompareStr(const System::UnicodeString S1, const System::UnicodeString S2, TLocaleOptions LocaleOptions)/* overload */;
extern DELPHI_PACKAGE bool __fastcall SameStr(const System::UnicodeString S1, const System::UnicodeString S2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall SameStr(const System::UnicodeString S1, const System::UnicodeString S2, TLocaleOptions LocaleOptions)/* overload */;
extern DELPHI_PACKAGE bool __fastcall CompareMem(void * P1, void * P2, int Length);
extern DELPHI_PACKAGE int __fastcall CompareText(const System::UnicodeString S1, const System::UnicodeString S2)/* overload */;
extern DELPHI_PACKAGE int __fastcall CompareText(const System::UnicodeString S1, const System::UnicodeString S2, TLocaleOptions LocaleOptions)/* overload */;
extern DELPHI_PACKAGE bool __fastcall SameText(const System::UnicodeString S1, const System::UnicodeString S2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall SameText(const System::UnicodeString S1, const System::UnicodeString S2, TLocaleOptions LocaleOptions)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall AnsiUpperCase(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall AnsiLowerCase(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE int __fastcall AnsiCompareStr(const System::UnicodeString S1, const System::UnicodeString S2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall AnsiSameStr(const System::UnicodeString S1, const System::UnicodeString S2)/* overload */;
extern DELPHI_PACKAGE int __fastcall AnsiCompareText(const System::UnicodeString S1, const System::UnicodeString S2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall AnsiSameText(const System::UnicodeString S1, const System::UnicodeString S2)/* overload */;
extern DELPHI_PACKAGE int __fastcall AnsiStrComp _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * S1, char * S2)/* overload */;
extern DELPHI_PACKAGE int __fastcall AnsiStrComp(System::WideChar * S1, System::WideChar * S2)/* overload */;
extern DELPHI_PACKAGE int __fastcall AnsiStrIComp _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * S1, char * S2)/* overload */;
extern DELPHI_PACKAGE int __fastcall AnsiStrIComp(System::WideChar * S1, System::WideChar * S2)/* overload */;
extern DELPHI_PACKAGE int __fastcall AnsiStrLComp _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * S1, char * S2, unsigned MaxLen)/* overload */;
extern DELPHI_PACKAGE int __fastcall AnsiStrLComp(System::WideChar * S1, System::WideChar * S2, unsigned MaxLen)/* overload */;
extern DELPHI_PACKAGE int __fastcall AnsiStrLIComp _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * S1, char * S2, unsigned MaxLen)/* overload */;
extern DELPHI_PACKAGE int __fastcall AnsiStrLIComp(System::WideChar * S1, System::WideChar * S2, unsigned MaxLen)/* overload */;
extern DELPHI_PACKAGE char * __fastcall AnsiStrLower _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Str)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall AnsiStrLower(System::WideChar * Str)/* overload */;
extern DELPHI_PACKAGE char * __fastcall AnsiStrUpper _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Str)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall AnsiStrUpper(System::WideChar * Str)/* overload */;
extern DELPHI_PACKAGE System::WideString __fastcall WideUpperCase(const System::WideString S);
extern DELPHI_PACKAGE System::WideString __fastcall WideLowerCase(const System::WideString S);
extern DELPHI_PACKAGE int __fastcall WideCompareStr(const System::WideString S1, const System::WideString S2);
extern DELPHI_PACKAGE bool __fastcall WideSameStr(const System::WideString S1, const System::WideString S2);
extern DELPHI_PACKAGE int __fastcall WideCompareText(const System::WideString S1, const System::WideString S2);
extern DELPHI_PACKAGE bool __fastcall WideSameText(const System::WideString S1, const System::WideString S2);
extern DELPHI_PACKAGE System::UnicodeString __fastcall Trim(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall TrimLeft(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall TrimRight(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall QuotedStr(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall AnsiQuotedStr(const System::UnicodeString S, System::WideChar Quote)/* overload */;
extern DELPHI_PACKAGE System::AnsiString __fastcall AnsiExtractQuotedStr _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * &Src, char Quote)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall AnsiExtractQuotedStr(System::WideChar * &Src, System::WideChar Quote)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall AnsiDequotedStr(const System::UnicodeString S, System::WideChar AQuote)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall AdjustLineBreaks(const System::UnicodeString S, System::TTextLineBreakStyle Style = (System::TTextLineBreakStyle)(0x1))/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsValidIdent(const System::UnicodeString Ident, bool AllowDots = false);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IntToStr(int Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall IntToStr(__int64 Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall UIntToStr(unsigned Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall UIntToStr(unsigned __int64 Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall IntToHex(System::Int8 Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall IntToHex(System::Byte Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall IntToHex(short Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall IntToHex(System::Word Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall IntToHex(int Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall IntToHex(unsigned Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall IntToHex(__int64 Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall IntToHex(unsigned __int64 Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall IntToHex(int Value, int Digits)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall IntToHex(__int64 Value, int Digits)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall IntToHex(unsigned __int64 Value, int Digits)/* overload */;
extern DELPHI_PACKAGE int __fastcall StrToInt(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE int __fastcall StrToIntDef(const System::UnicodeString S, int Default)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToInt(const System::UnicodeString S, /* out */ int &Value)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall StrToUInt(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall StrToUIntDef(const System::UnicodeString S, unsigned Default)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToUInt(const System::UnicodeString S, /* out */ unsigned &Value)/* overload */;
extern DELPHI_PACKAGE __int64 __fastcall StrToInt64(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE __int64 __fastcall StrToInt64Def(const System::UnicodeString S, const __int64 Default)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToInt64(const System::UnicodeString S, /* out */ __int64 &Value)/* overload */;
extern DELPHI_PACKAGE unsigned __int64 __fastcall StrToUInt64(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE unsigned __int64 __fastcall StrToUInt64Def(const System::UnicodeString S, const unsigned __int64 Default)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToUInt64(const System::UnicodeString S, /* out */ unsigned __int64 &Value)/* overload */;
extern DELPHI_PACKAGE bool __fastcall StrToBool(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE bool __fastcall StrToBoolDef(const System::UnicodeString S, const bool Default)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToBool(const System::UnicodeString S, /* out */ bool &Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall BoolToStr(bool B, bool UseBoolStrs = false);
extern DELPHI_PACKAGE System::UnicodeString __fastcall LoadStr(NativeUInt Ident);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FmtLoadStr(NativeUInt Ident, const System::TVarRec *Args, const int Args_High);
extern DELPHI_PACKAGE NativeUInt __fastcall FileOpen(const System::UnicodeString FileName, unsigned Mode);
extern DELPHI_PACKAGE NativeUInt __fastcall FileCreate(const System::UnicodeString FileName)/* overload */;
extern DELPHI_PACKAGE NativeUInt __fastcall FileCreate(const System::UnicodeString FileName, int Rights)/* overload */;
extern DELPHI_PACKAGE NativeUInt __fastcall FileCreate(const System::UnicodeString FileName, unsigned Mode, int Rights)/* overload */;
extern DELPHI_PACKAGE bool __fastcall FileCreateSymLink(const System::UnicodeString Link, const System::UnicodeString Target);
extern DELPHI_PACKAGE bool __fastcall FileGetSymLinkTarget(const System::UnicodeString FileName, TSymLinkRec &SymLinkRec)/* overload */;
extern DELPHI_PACKAGE bool __fastcall FileGetSymLinkTarget(const System::UnicodeString FileName, System::UnicodeString &TargetName)/* overload */;
extern DELPHI_PACKAGE TFileSystemAttributes __fastcall FileSystemAttributes(const System::UnicodeString Path);
extern DELPHI_PACKAGE int __fastcall FileRead(NativeUInt Handle, void *Buffer, unsigned Count)/* overload */;
extern DELPHI_PACKAGE int __fastcall FileWrite(NativeUInt Handle, const void *Buffer, unsigned Count)/* overload */;
#ifndef _WIN64
extern DELPHI_PACKAGE int __fastcall FileRead(NativeUInt Handle, System::DynamicArray<System::Byte> &Buffer, unsigned Offset, unsigned Count)/* overload */;
extern DELPHI_PACKAGE int __fastcall FileWrite(NativeUInt Handle, const System::DynamicArray<System::Byte> Buffer, unsigned Offset, unsigned Count)/* overload */;
#else /* _WIN64 */
extern DELPHI_PACKAGE int __fastcall FileRead(NativeUInt Handle, System::TArray__1<System::Byte> &Buffer, unsigned Offset, unsigned Count)/* overload */;
extern DELPHI_PACKAGE int __fastcall FileWrite(NativeUInt Handle, const System::TArray__1<System::Byte> Buffer, unsigned Offset, unsigned Count)/* overload */;
#endif /* _WIN64 */
extern DELPHI_PACKAGE int __fastcall FileSeek(NativeUInt Handle, int Offset, int Origin)/* overload */;
extern DELPHI_PACKAGE __int64 __fastcall FileSeek(NativeUInt Handle, const __int64 Offset, int Origin)/* overload */;
extern DELPHI_PACKAGE void __fastcall FileClose(NativeUInt Handle);
extern DELPHI_PACKAGE int __fastcall FileAge _DEPRECATED_ATTRIBUTE0 (const System::UnicodeString FileName)/* overload */;
extern DELPHI_PACKAGE bool __fastcall FileAge(const System::UnicodeString FileName, /* out */ System::TDateTime &FileDateTime, bool FollowLink = true)/* overload */;
extern DELPHI_PACKAGE bool __fastcall FileExists(const System::UnicodeString FileName, bool FollowLink = true);
extern DELPHI_PACKAGE bool __fastcall DirectoryExists(const System::UnicodeString Directory, bool FollowLink = true);
extern DELPHI_PACKAGE bool __fastcall ForceDirectories(System::UnicodeString Dir);
extern DELPHI_PACKAGE int __fastcall FileGetDate(NativeUInt Handle);
extern DELPHI_PACKAGE bool __fastcall FileGetDateTimeInfo(const System::UnicodeString FileName, /* out */ TDateTimeInfoRec &DateTime, bool FollowLink = true);
extern DELPHI_PACKAGE int __fastcall FileSetDate(const System::UnicodeString FileName, int Age)/* overload */;
extern DELPHI_PACKAGE int __fastcall FileSetDate(NativeUInt Handle, int Age)/* overload */;
extern DELPHI_PACKAGE int __fastcall FileGetAttr(const System::UnicodeString FileName, bool FollowLink = true);
extern DELPHI_PACKAGE int __fastcall FileSetAttr(const System::UnicodeString FileName, int Attr, bool FollowLink = true);
extern DELPHI_PACKAGE bool __fastcall FileIsReadOnly(const System::UnicodeString FileName);
extern DELPHI_PACKAGE bool __fastcall FileSetReadOnly(const System::UnicodeString FileName, bool ReadOnly);
extern DELPHI_PACKAGE int __fastcall FindFirst(const System::UnicodeString Path, int Attr, TSearchRec &F);
extern DELPHI_PACKAGE int __fastcall FindNext(TSearchRec &F);
extern DELPHI_PACKAGE void __fastcall FindClose(TSearchRec &F);
extern DELPHI_PACKAGE bool __fastcall DeleteFile(const System::UnicodeString FileName);
extern DELPHI_PACKAGE bool __fastcall RenameFile(const System::UnicodeString OldName, const System::UnicodeString NewName);
extern DELPHI_PACKAGE bool __fastcall IsAssembly(const System::UnicodeString FileName);
extern DELPHI_PACKAGE char * __fastcall AnsiStrLastChar _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * P)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall AnsiStrLastChar(System::WideChar * P)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall AnsiLastChar(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE int __fastcall LastDelimiter(const System::UnicodeString Delimiters, const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE int __fastcall FindDelimiter(const System::UnicodeString Delimiters, const System::UnicodeString S, int StartIdx = 0x1);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ChangeFileExt(const System::UnicodeString FileName, const System::UnicodeString Extension)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ChangeFilePath(const System::UnicodeString FileName, const System::UnicodeString Path)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ExtractFilePath(const System::UnicodeString FileName)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ExtractFileDir(const System::UnicodeString FileName)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ExtractFileDrive(const System::UnicodeString FileName)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ExtractFileName(const System::UnicodeString FileName)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ExtractFileExt(const System::UnicodeString FileName)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetHomePath(void)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ExpandFileName(const System::UnicodeString FileName)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ExpandFileNameCase(const System::UnicodeString FileName, /* out */ TFilenameCaseMatch &MatchFound)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ExpandUNCFileName(const System::UnicodeString FileName)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ExtractRelativePath(const System::UnicodeString BaseName, const System::UnicodeString DestName)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsRelativePath(const System::UnicodeString Path);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ExtractShortPathName(const System::UnicodeString FileName)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall FileSearch(const System::UnicodeString Name, const System::UnicodeString DirList);
extern DELPHI_PACKAGE __int64 __fastcall DiskFree(System::Byte Drive);
extern DELPHI_PACKAGE __int64 __fastcall DiskSize(System::Byte Drive);
extern DELPHI_PACKAGE System::TDateTime __fastcall FileDateToDateTime(int FileDate);
extern DELPHI_PACKAGE int __fastcall DateTimeToFileDate(System::TDateTime DateTime);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetCurrentDir(void);
extern DELPHI_PACKAGE bool __fastcall SetCurrentDir(const System::UnicodeString Dir);
extern DELPHI_PACKAGE bool __fastcall CreateDir(const System::UnicodeString Dir);
extern DELPHI_PACKAGE bool __fastcall RemoveDir(const System::UnicodeString Dir);
extern DELPHI_PACKAGE char * __fastcall StrEnd _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const char * Str)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrEnd(const System::WideChar * Str)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrMove _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Dest, const char * Source, unsigned Count)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrMove(System::WideChar * Dest, const System::WideChar * Source, unsigned Count)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrCopy _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Dest, const char * Source)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrCopy(System::WideChar * Dest, const System::WideChar * Source)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrECopy _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Dest, const char * Source)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrECopy(System::WideChar * Dest, const System::WideChar * Source)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrLCopy _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Dest, const char * Source, unsigned MaxLen)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrLCopy(System::WideChar * Dest, const System::WideChar * Source, unsigned MaxLen)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrPCopy _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Dest, const System::AnsiString Source)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrPCopy(System::WideChar * Dest, const System::UnicodeString Source)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrPLCopy _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Dest, const System::AnsiString Source, unsigned MaxLen)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrPLCopy(System::WideChar * Dest, const System::UnicodeString Source, unsigned MaxLen)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrCat _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Dest, const char * Source)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrCat(System::WideChar * Dest, const System::WideChar * Source)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrLCat _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Dest, const char * Source, unsigned MaxLen)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrLCat(System::WideChar * Dest, const System::WideChar * Source, unsigned MaxLen)/* overload */;
extern DELPHI_PACKAGE int __fastcall StrComp _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const char * Str1, const char * Str2)/* overload */;
extern DELPHI_PACKAGE int __fastcall StrComp(const System::WideChar * Str1, const System::WideChar * Str2)/* overload */;
extern DELPHI_PACKAGE int __fastcall StrIComp _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const char * Str1, const char * Str2)/* overload */;
extern DELPHI_PACKAGE int __fastcall StrIComp(const System::WideChar * Str1, const System::WideChar * Str2)/* overload */;
extern DELPHI_PACKAGE int __fastcall StrLComp _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const char * Str1, const char * Str2, unsigned MaxLen)/* overload */;
extern DELPHI_PACKAGE int __fastcall StrLComp(const System::WideChar * Str1, const System::WideChar * Str2, unsigned MaxLen)/* overload */;
extern DELPHI_PACKAGE int __fastcall StrLIComp _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const char * Str1, const char * Str2, unsigned MaxLen)/* overload */;
extern DELPHI_PACKAGE int __fastcall StrLIComp(const System::WideChar * Str1, const System::WideChar * Str2, unsigned MaxLen)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrScan _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const char * Str, char Chr)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrScan(const System::WideChar * Str, System::WideChar Chr)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrRScan _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const char * Str, char Chr)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrRScan(const System::WideChar * Str, System::WideChar Chr)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrPos _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const char * Str1, const char * Str2)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrPos(const System::WideChar * Str1, const System::WideChar * Str2)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrUpper _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Str)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrUpper(System::WideChar * Str)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrLower _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Str)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrLower(System::WideChar * Str)/* overload */;
extern DELPHI_PACKAGE System::AnsiString __fastcall StrPas _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const char * Str)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrPas(const System::WideChar * Str)/* overload */;
extern DELPHI_PACKAGE char * __fastcall AnsiStrAlloc _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (unsigned Size);
extern DELPHI_PACKAGE System::WideChar * __fastcall WideStrAlloc(unsigned Size);
extern DELPHI_PACKAGE System::WideChar * __fastcall StrAlloc(unsigned Size);
extern DELPHI_PACKAGE unsigned __fastcall StrBufSize _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const char * Str)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall StrBufSize(const System::WideChar * Str)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrNew _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const char * Str)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrNew(const System::WideChar * Str)/* overload */;
extern DELPHI_PACKAGE void __fastcall StrDispose _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Str)/* overload */;
extern DELPHI_PACKAGE void __fastcall StrDispose(System::WideChar * Str)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall FormatBuf _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (void *Buffer, unsigned BufLen, const void *Format, unsigned FmtLen, const System::TVarRec *Args, const int Args_High)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall FormatBuf(System::WideChar * Buffer, unsigned BufLen, const void *Format, unsigned FmtLen, const System::TVarRec *Args, const int Args_High)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall FormatBuf(System::WideChar * Buffer, unsigned BufLen, const void *Format, unsigned FmtLen, const System::TVarRec *Args, const int Args_High, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall FormatBuf(System::UnicodeString &Buffer, unsigned BufLen, const void *Format, unsigned FmtLen, const System::TVarRec *Args, const int Args_High)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall FormatBuf(System::UnicodeString &Buffer, unsigned BufLen, const void *Format, unsigned FmtLen, const System::TVarRec *Args, const int Args_High, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrFmt _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Buffer, char * Format, const System::TVarRec *Args, const int Args_High)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrFmt(System::WideChar * Buffer, System::WideChar * Format, const System::TVarRec *Args, const int Args_High)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrFmt _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Buffer, char * Format, const System::TVarRec *Args, const int Args_High, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrFmt(System::WideChar * Buffer, System::WideChar * Format, const System::TVarRec *Args, const int Args_High, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrLFmt _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Buffer, unsigned MaxBufLen, char * Format, const System::TVarRec *Args, const int Args_High)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrLFmt(System::WideChar * Buffer, unsigned MaxBufLen, System::WideChar * Format, const System::TVarRec *Args, const int Args_High)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrLFmt _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Buffer, unsigned MaxBufLen, char * Format, const System::TVarRec *Args, const int Args_High, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrLFmt(System::WideChar * Buffer, unsigned MaxBufLen, System::WideChar * Format, const System::TVarRec *Args, const int Args_High, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall Format(const System::UnicodeString Format, const System::TVarRec *Args, const int Args_High)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall Format(const System::UnicodeString Format, const System::TVarRec *Args, const int Args_High, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE void __fastcall FmtStr(System::UnicodeString &Result, const System::UnicodeString Format, const System::TVarRec *Args, const int Args_High)/* overload */;
extern DELPHI_PACKAGE void __fastcall FmtStr(System::UnicodeString &Result, const System::UnicodeString Format, const System::TVarRec *Args, const int Args_High, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall WideFormatBuf(void *Buffer, unsigned BufLen, const void *Format, unsigned FmtLen, const System::TVarRec *Args, const int Args_High)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall WideFormatBuf(void *Buffer, unsigned BufLen, const void *Format, unsigned FmtLen, const System::TVarRec *Args, const int Args_High, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall FormatBuf _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (void *Buffer, unsigned BufLen, const void *Format, unsigned FmtLen, const System::TVarRec *Args, const int Args_High, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE void __fastcall WideFmtStr(System::WideString &Result, const System::WideString Format, const System::TVarRec *Args, const int Args_High)/* overload */;
extern DELPHI_PACKAGE void __fastcall WideFmtStr(System::WideString &Result, const System::WideString Format, const System::TVarRec *Args, const int Args_High, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::WideString __fastcall WideFormat(const System::WideString Format, const System::TVarRec *Args, const int Args_High)/* overload */;
extern DELPHI_PACKAGE System::WideString __fastcall WideFormat(const System::WideString Format, const System::TVarRec *Args, const int Args_High, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE int __fastcall FloatToText(System::WideChar * BufferArg, const void *Value, TFloatValue ValueType, TFloatFormat Format, int Precision, int Digits)/* overload */;
extern DELPHI_PACKAGE int __fastcall FloatToText _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * BufferArg, const void *Value, TFloatValue ValueType, TFloatFormat Format, int Precision, int Digits)/* overload */;
extern DELPHI_PACKAGE int __fastcall FloatToText(System::WideChar * BufferArg, const void *Value, TFloatValue ValueType, TFloatFormat Format, int Precision, int Digits, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE int __fastcall FloatToText _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * BufferArg, const void *Value, TFloatValue ValueType, TFloatFormat Format, int Precision, int Digits, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE int __fastcall FloatToTextFmt _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Buf, const void *Value, TFloatValue ValueType, char * Format)/* overload */;
extern DELPHI_PACKAGE int __fastcall FloatToTextFmt _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Buf, const void *Value, TFloatValue ValueType, char * Format, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE int __fastcall FloatToTextFmt(System::WideChar * Buf, const void *Value, TFloatValue ValueType, System::WideChar * Format)/* overload */;
extern DELPHI_PACKAGE int __fastcall FloatToTextFmt(System::WideChar * Buf, const void *Value, TFloatValue ValueType, System::WideChar * Format, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE void __fastcall FloatToDecimal(TFloatRec &Result, const void *Value, TFloatValue ValueType, int Precision, int Decimals);
extern DELPHI_PACKAGE bool __fastcall TextToFloat(System::WideChar * Buffer, void *Value, TFloatValue ValueType)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TextToFloat(System::WideChar * Buffer, void *Value, TFloatValue ValueType, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TextToFloat _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Buffer, void *Value, TFloatValue ValueType)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TextToFloat _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Buffer, void *Value, TFloatValue ValueType, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TextToFloat(const System::UnicodeString S, System::Extended &Value)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TextToFloat(const System::UnicodeString S, System::Extended &Value, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TextToFloat(const System::UnicodeString S, double &Value)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TextToFloat(const System::UnicodeString S, double &Value, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TextToFloat(const System::UnicodeString S, System::Currency &Value)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TextToFloat(const System::UnicodeString S, System::Currency &Value, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall FloatToStr(System::Extended Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall FloatToStr(System::Extended Value, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall CurrToStr(System::Currency Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall CurrToStr(System::Currency Value, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryFloatToCurr(const System::Extended Value, /* out */ System::Currency &AResult);
extern DELPHI_PACKAGE System::Currency __fastcall FloatToCurr(const System::Extended Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FloatToStrF(System::Extended Value, TFloatFormat Format, int Precision, int Digits)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall FloatToStrF(System::Extended Value, TFloatFormat Format, int Precision, int Digits, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall CurrToStrF(System::Currency Value, TFloatFormat Format, int Digits)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall CurrToStrF(System::Currency Value, TFloatFormat Format, int Digits, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall FormatFloat(const System::UnicodeString Format, System::Extended Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall FormatFloat(const System::UnicodeString Format, System::Extended Value, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall FormatCurr(const System::UnicodeString Format, System::Currency Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall FormatCurr(const System::UnicodeString Format, System::Currency Value, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall StrToFloat(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall StrToFloat(const System::UnicodeString S, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall StrToFloatDef(const System::UnicodeString S, const System::Extended Default)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall StrToFloatDef(const System::UnicodeString S, const System::Extended Default, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToFloat(const System::UnicodeString S, /* out */ System::Extended &Value)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToFloat(const System::UnicodeString S, /* out */ System::Extended &Value, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToFloat(const System::UnicodeString S, /* out */ double &Value)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToFloat(const System::UnicodeString S, /* out */ double &Value, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToFloat(const System::UnicodeString S, /* out */ float &Value)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToFloat(const System::UnicodeString S, /* out */ float &Value, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::Currency __fastcall StrToCurr(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::Currency __fastcall StrToCurr(const System::UnicodeString S, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::Currency __fastcall StrToCurrDef(const System::UnicodeString S, const System::Currency Default)/* overload */;
extern DELPHI_PACKAGE System::Currency __fastcall StrToCurrDef(const System::UnicodeString S, const System::Currency Default, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToCurr(const System::UnicodeString S, /* out */ System::Currency &Value)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToCurr(const System::UnicodeString S, /* out */ System::Currency &Value, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE TTimeStamp __fastcall DateTimeToTimeStamp(System::TDateTime DateTime);
extern DELPHI_PACKAGE System::TDateTime __fastcall TimeStampToDateTime(const TTimeStamp &TimeStamp);
extern DELPHI_PACKAGE TTimeStamp __fastcall MSecsToTimeStamp(System::Comp MSecs);
extern DELPHI_PACKAGE System::Comp __fastcall TimeStampToMSecs(const TTimeStamp &TimeStamp);
extern DELPHI_PACKAGE bool __fastcall TryEncodeTime(System::Word Hour, System::Word Min, System::Word Sec, System::Word MSec, /* out */ System::TDateTime &Time);
extern DELPHI_PACKAGE System::TDateTime __fastcall EncodeTime(System::Word Hour, System::Word Min, System::Word Sec, System::Word MSec);
extern DELPHI_PACKAGE void __fastcall DecodeTime(const System::TDateTime DateTime, System::Word &Hour, System::Word &Min, System::Word &Sec, System::Word &MSec);
extern DELPHI_PACKAGE bool __fastcall IsLeapYear(System::Word Year);
extern DELPHI_PACKAGE bool __fastcall TryEncodeDate(System::Word Year, System::Word Month, System::Word Day, /* out */ System::TDateTime &Date);
extern DELPHI_PACKAGE System::TDateTime __fastcall EncodeDate(System::Word Year, System::Word Month, System::Word Day);
extern DELPHI_PACKAGE bool __fastcall DecodeDateFully(const System::TDateTime DateTime, System::Word &Year, System::Word &Month, System::Word &Day, System::Word &DOW);
extern DELPHI_PACKAGE void __fastcall DecodeDate(const System::TDateTime DateTime, System::Word &Year, System::Word &Month, System::Word &Day);
extern DELPHI_PACKAGE void __fastcall DateTimeToSystemTime(const System::TDateTime DateTime, _SYSTEMTIME &SystemTime);
extern DELPHI_PACKAGE System::TDateTime __fastcall SystemTimeToDateTime(const _SYSTEMTIME &SystemTime);
extern DELPHI_PACKAGE bool __fastcall TrySystemTimeToDateTime(const _SYSTEMTIME &SystemTime, /* out */ System::TDateTime &DateTime);
extern DELPHI_PACKAGE System::Word __fastcall DayOfWeek(const System::TDateTime DateTime);
extern DELPHI_PACKAGE System::TDateTime __fastcall Date(void);
extern DELPHI_PACKAGE System::TDateTime __fastcall Time(void);
extern DELPHI_PACKAGE System::TDateTime __fastcall GetTime(void);
extern DELPHI_PACKAGE System::TDateTime __fastcall Now(void);
extern DELPHI_PACKAGE System::TDateTime __fastcall IncMonth(const System::TDateTime DateTime, int NumberOfMonths = 0x1);
extern DELPHI_PACKAGE void __fastcall IncAMonth(System::Word &Year, System::Word &Month, System::Word &Day, int NumberOfMonths = 0x1);
extern DELPHI_PACKAGE void __fastcall ReplaceTime(System::TDateTime &DateTime, const System::TDateTime NewTime);
extern DELPHI_PACKAGE void __fastcall ReplaceDate(System::TDateTime &DateTime, const System::TDateTime NewDate);
extern DELPHI_PACKAGE System::Word __fastcall CurrentYear(void);
extern DELPHI_PACKAGE void __fastcall DateTimeToString(System::UnicodeString &Result, const System::UnicodeString Format, System::TDateTime DateTime)/* overload */;
extern DELPHI_PACKAGE void __fastcall DateTimeToString(System::UnicodeString &Result, const System::UnicodeString Format, System::TDateTime DateTime, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryFloatToDateTime(const System::Extended Value, /* out */ System::TDateTime &AResult);
extern DELPHI_PACKAGE System::TDateTime __fastcall FloatToDateTime(const System::Extended Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall DateToStr(const System::TDateTime DateTime)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall DateToStr(const System::TDateTime DateTime, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall TimeToStr(const System::TDateTime DateTime)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall TimeToStr(const System::TDateTime DateTime, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall DateTimeToStr(const System::TDateTime DateTime)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall DateTimeToStr(const System::TDateTime DateTime, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall FormatDateTime(const System::UnicodeString Format, System::TDateTime DateTime)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall FormatDateTime(const System::UnicodeString Format, System::TDateTime DateTime, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall DateTimeFormatToNative(const System::UnicodeString Format, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall DateTimeFormatToNative(const System::UnicodeString Format)/* overload */;
extern DELPHI_PACKAGE System::TDateTime __fastcall StrToDate(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::TDateTime __fastcall StrToDate(const System::UnicodeString S, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::TDateTime __fastcall StrToDateDef(const System::UnicodeString S, const System::TDateTime Default)/* overload */;
extern DELPHI_PACKAGE System::TDateTime __fastcall StrToDateDef(const System::UnicodeString S, const System::TDateTime Default, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToDate(const System::UnicodeString S, /* out */ System::TDateTime &Value)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToDate(const System::UnicodeString S, /* out */ System::TDateTime &Value, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::TDateTime __fastcall StrToTime(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::TDateTime __fastcall StrToTime(const System::UnicodeString S, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::TDateTime __fastcall StrToTimeDef(const System::UnicodeString S, const System::TDateTime Default)/* overload */;
extern DELPHI_PACKAGE System::TDateTime __fastcall StrToTimeDef(const System::UnicodeString S, const System::TDateTime Default, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToTime(const System::UnicodeString S, /* out */ System::TDateTime &Value)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToTime(const System::UnicodeString S, /* out */ System::TDateTime &Value, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::TDateTime __fastcall StrToDateTime(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::TDateTime __fastcall StrToDateTime(const System::UnicodeString S, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE System::TDateTime __fastcall StrToDateTimeDef(const System::UnicodeString S, const System::TDateTime Default)/* overload */;
extern DELPHI_PACKAGE System::TDateTime __fastcall StrToDateTimeDef(const System::UnicodeString S, const System::TDateTime Default, const TFormatSettings &AFormatSettings)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToDateTime(const System::UnicodeString S, /* out */ System::TDateTime &Value)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToDateTime(const System::UnicodeString S, /* out */ System::TDateTime &Value, const TFormatSettings &AFormatSettings)/* overload */;
#ifndef _WIN64
extern DELPHI_PACKAGE System::UnicodeString __fastcall SysErrorMessage(unsigned ErrorCode, NativeUInt AModuleHandle = (NativeUInt)(0x0));
#else /* _WIN64 */
extern DELPHI_PACKAGE System::UnicodeString __fastcall SysErrorMessage(unsigned ErrorCode, NativeUInt AModuleHandle = (NativeUInt)(0ULL));
#endif /* _WIN64 */
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetLocaleStr(int Locale, int LocaleType, const System::UnicodeString Default);
extern DELPHI_PACKAGE System::WideChar __fastcall GetLocaleChar(int Locale, int LocaleType, System::WideChar Default);
extern DELPHI_PACKAGE int __fastcall ExceptionErrorMessage(System::TObject* ExceptObject, void * ExceptAddr, System::WideChar * Buffer, int Size);
extern DELPHI_PACKAGE void __fastcall ShowException(System::TObject* ExceptObject, void * ExceptAddr);
extern DELPHI_PACKAGE void __fastcall Abort(void);
extern DELPHI_PACKAGE void __fastcall OutOfMemoryError(void);
extern DELPHI_PACKAGE void __fastcall ListIndexError(int AIndex, int AMaxIndex, System::TObject* AListObj);
extern DELPHI_PACKAGE void __fastcall RangeIndexError(int AIndex, int AMaxIndex, System::TObject* AListObj);
extern DELPHI_PACKAGE int __fastcall Win32Platform(void);
extern DELPHI_PACKAGE int __fastcall Win32MajorVersion(void);
extern DELPHI_PACKAGE int __fastcall Win32MinorVersion(void);
extern DELPHI_PACKAGE int __fastcall Win32BuildNumber(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall Win32CSDVersion(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall Win32OSVersion(void);
extern DELPHI_PACKAGE int __fastcall Win32UpdateBuildRevision(void);
extern DELPHI_PACKAGE bool __fastcall CheckWin32Version(int AMajor, int AMinor = 0x0);
extern DELPHI_PACKAGE unsigned __fastcall GetFileVersion(const System::UnicodeString AFileName);
extern DELPHI_PACKAGE bool __fastcall GetProductVersion(const System::UnicodeString AFileName, unsigned &AMajor, unsigned &AMinor, unsigned &ABuild);
extern DELPHI_PACKAGE void __fastcall Beep(void);
extern DELPHI_PACKAGE TMbcsByteType __fastcall ByteType _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const System::AnsiString S, int Index)/* overload */;
extern DELPHI_PACKAGE TMbcsByteType __fastcall ByteType(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE TMbcsByteType __fastcall StrByteType _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Str, unsigned Index)/* overload */;
extern DELPHI_PACKAGE TMbcsByteType __fastcall StrByteType(System::WideChar * Str, unsigned Index)/* overload */;
extern DELPHI_PACKAGE int __fastcall ElementToCharLen _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const System::AnsiString S, int MaxLen)/* overload */;
extern DELPHI_PACKAGE int __fastcall ElementToCharLen(const System::UnicodeString S, int MaxLen)/* overload */;
extern DELPHI_PACKAGE int __fastcall ByteToCharLen _DEPRECATED_ATTRIBUTE1("Use ElementToCharLen.") (const System::UnicodeString S, int MaxLen)/* overload */;
extern DELPHI_PACKAGE int __fastcall ByteToCharLen _DEPRECATED_ATTRIBUTE1("Use ElementToCharLen") (const System::AnsiString S, int MaxLen)/* overload */;
extern DELPHI_PACKAGE int __fastcall ElementToCharIndex _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const System::AnsiString S, int Index)/* overload */;
extern DELPHI_PACKAGE int __fastcall ElementToCharIndex(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE int __fastcall ByteToCharIndex _DEPRECATED_ATTRIBUTE1("Use ElementToCharIndex.") (const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE int __fastcall ByteToCharIndex _DEPRECATED_ATTRIBUTE1("Use ElementToCharIndex.") (const System::AnsiString S, int Index)/* overload */;
extern DELPHI_PACKAGE int __fastcall CharToElementIndex _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const System::AnsiString S, int Index)/* overload */;
extern DELPHI_PACKAGE int __fastcall CharToElementIndex(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE int __fastcall CharToByteIndex _DEPRECATED_ATTRIBUTE1("Use CharToElementIndex.") (const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE int __fastcall CharToByteIndex _DEPRECATED_ATTRIBUTE1("Use CharToElementIndex.") (const System::AnsiString S, int Index)/* overload */;
extern DELPHI_PACKAGE int __fastcall CharToElementLen _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const System::AnsiString S, int MaxLen)/* overload */;
extern DELPHI_PACKAGE int __fastcall CharToElementLen(const System::UnicodeString S, int MaxLen)/* overload */;
extern DELPHI_PACKAGE int __fastcall CharToByteLen _DEPRECATED_ATTRIBUTE1("Use CharToElementLen.") (const System::AnsiString S, int MaxLen)/* overload */;
extern DELPHI_PACKAGE int __fastcall CharToByteLen _DEPRECATED_ATTRIBUTE1("Use CharToElementLen.") (const System::UnicodeString S, int MaxLen)/* overload */;
extern DELPHI_PACKAGE int __fastcall StrCharLength _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const char * Str)/* overload */;
extern DELPHI_PACKAGE int __fastcall StrCharLength(const System::WideChar * Str)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrNextChar _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (const char * Str)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall StrNextChar(const System::WideChar * Str)/* overload */;
extern DELPHI_PACKAGE int __fastcall CharLength(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE int __fastcall NextCharIndex(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsPathDelimiter(const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsDelimiter(const System::UnicodeString Delimiters, const System::UnicodeString S, int Index)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall IncludeTrailingBackslash(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall IncludeTrailingPathDelimiter(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ExcludeTrailingBackslash(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ExcludeTrailingPathDelimiter(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE int __fastcall AnsiPos(const System::UnicodeString Substr, const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE int __fastcall AnsiCompareFileName(const System::WideChar * S1, int Len1, const System::WideChar * S2, int Len2, bool CheckVolumeCase = false)/* overload */;
extern DELPHI_PACKAGE int __fastcall AnsiCompareFileName(const System::UnicodeString S1, int Len1, const System::UnicodeString S2, int Len2, bool CheckVolumeCase = false)/* overload */;
extern DELPHI_PACKAGE int __fastcall AnsiCompareFileName(const System::UnicodeString S1, const System::UnicodeString S2, bool CheckVolumeCase = false)/* overload */;
extern DELPHI_PACKAGE bool __fastcall SameFileName(const System::UnicodeString S1, const System::UnicodeString S2)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall AnsiLowerCaseFileName _DEPRECATED_ATTRIBUTE1("Use AnsiLowerCase instead") (const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall AnsiUpperCaseFileName _DEPRECATED_ATTRIBUTE1("Use AnsiUpperCase instead") (const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE char * __fastcall TextPos _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Str, char * SubStr)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall TextPos(System::WideChar * Str, System::WideChar * SubStr)/* overload */;
extern DELPHI_PACKAGE char * __fastcall AnsiStrPos _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Str, char * SubStr)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall AnsiStrPos(System::WideChar * Str, System::WideChar * SubStr)/* overload */;
extern DELPHI_PACKAGE char * __fastcall AnsiStrRScan _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Str, char Chr)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall AnsiStrRScan(System::WideChar * Str, System::WideChar Chr)/* overload */;
extern DELPHI_PACKAGE char * __fastcall AnsiStrScan _DEPRECATED_ATTRIBUTE1("Moved to the AnsiStrings unit") (char * Str, char Chr)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall AnsiStrScan(System::WideChar * Str, System::WideChar Chr)/* overload */;
extern DELPHI_PACKAGE int __fastcall LCIDToCodePage(const unsigned ALCID);
extern DELPHI_PACKAGE void __fastcall GetFormatSettings(void);
extern DELPHI_PACKAGE void __fastcall GetLocaleFormatSettings _DEPRECATED_ATTRIBUTE1("Use TFormatSettings.Create(Locale)") (unsigned Locale, TFormatSettings &AFormatSettings);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StringReplace(const System::UnicodeString Source, const System::UnicodeString OldPattern, const System::UnicodeString NewPattern, TReplaceFlags Flags)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall WrapText(const System::UnicodeString Line, const System::UnicodeString BreakStr, const TSysCharSet &BreakChars, int MaxCol)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall WrapText(const System::UnicodeString Line, int MaxCol = 0x2d)/* overload */;
extern DELPHI_PACKAGE bool __fastcall FindCmdLineSwitch(const System::UnicodeString Switch, const TSysCharSet &Chars, bool IgnoreCase)/* overload */;
extern DELPHI_PACKAGE bool __fastcall FindCmdLineSwitch(const System::UnicodeString Switch)/* overload */;
extern DELPHI_PACKAGE bool __fastcall FindCmdLineSwitch(const System::UnicodeString Switch, bool IgnoreCase)/* overload */;
extern DELPHI_PACKAGE bool __fastcall FindCmdLineSwitch(const System::UnicodeString Switch, System::UnicodeString &Value, bool IgnoreCase = true, const TCmdLineSwitchTypes SwitchTypes = (TCmdLineSwitchTypes() << TCmdLineSwitchType::clstValueNextParam << TCmdLineSwitchType::clstValueAppended ))/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall HashName(char * Name);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetModuleName(NativeUInt Module);
extern DELPHI_PACKAGE void __fastcall InitializePackage(NativeUInt Module)/* overload */;
extern DELPHI_PACKAGE void __fastcall InitializePackage(NativeUInt Module, TValidatePackageProc AValidatePackage)/* overload */;
extern DELPHI_PACKAGE void __fastcall FinalizePackage(NativeUInt Module);
extern DELPHI_PACKAGE NativeUInt __fastcall LoadPackage(const System::UnicodeString Name)/* overload */;
extern DELPHI_PACKAGE NativeUInt __fastcall LoadPackage(const System::UnicodeString Name, TValidatePackageProc AValidatePackage)/* overload */;
extern DELPHI_PACKAGE void __fastcall UnloadPackage(NativeUInt Module);
extern DELPHI_PACKAGE void __fastcall GetPackageInfo(NativeUInt Module, void * Param, int &Flags, TPackageInfoProc InfoProc);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetPackageDescription(System::WideChar * ModuleName);
extern DELPHI_PACKAGE unsigned __fastcall GetPackageTargets(NativeUInt Module);
extern DELPHI_PACKAGE void __fastcall RaiseLastOSError(void)/* overload */;
extern DELPHI_PACKAGE void __fastcall RaiseLastOSError(int LastError)/* overload */;
extern DELPHI_PACKAGE void __fastcall RaiseLastOSError(int LastError, const System::UnicodeString AdditionalInfo)/* overload */;
extern DELPHI_PACKAGE void __fastcall CheckOSError(int LastError);
extern DELPHI_PACKAGE void __fastcall RaiseLastWin32Error _DEPRECATED_ATTRIBUTE1("Use RaiseLastOSError") (void);
extern DELPHI_PACKAGE System::LongBool __fastcall Win32Check(System::LongBool RetVal);
extern DELPHI_PACKAGE void __fastcall AddTerminateProc(TTerminateProc TermProc);
extern DELPHI_PACKAGE bool __fastcall CallTerminateProcs(void);
extern DELPHI_PACKAGE unsigned __fastcall GDAL(void);
extern DELPHI_PACKAGE void __fastcall RCS(void);
extern DELPHI_PACKAGE void __fastcall RPR(void);
extern DELPHI_PACKAGE void __fastcall CPPFreeAndNil(System::TObject* &Obj);
extern DELPHI_PACKAGE bool __fastcall Supports(const System::_di_IInterface Instance, const GUID &IID, /* out */ void *Intf)/* overload */;
extern DELPHI_PACKAGE bool __fastcall Supports(System::TObject* const Instance, const GUID &IID, /* out */ void *Intf)/* overload */;
extern DELPHI_PACKAGE bool __fastcall Supports(const System::_di_IInterface Instance, const GUID &IID)/* overload */;
extern DELPHI_PACKAGE bool __fastcall Supports(System::TObject* const Instance, const GUID &IID)/* overload */;
extern DELPHI_PACKAGE bool __fastcall Supports(const System::TClass AClass, const GUID &IID)/* overload */;
extern DELPHI_PACKAGE TLanguages* __fastcall Languages(void);
extern DELPHI_PACKAGE NativeUInt __fastcall SafeLoadLibrary(const System::UnicodeString FileName, unsigned ErrorMode = (unsigned)(0x8000));
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetEnvironmentVariable(const System::UnicodeString Name)/* overload */;
extern DELPHI_PACKAGE bool __fastcall DelegatesEqual(void * A, void * B);
extern DELPHI_PACKAGE int __fastcall ByteLength(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE int __fastcall ByteLength(const System::RawByteString S)/* overload */;
extern DELPHI_PACKAGE TGrowCollectionFunc __fastcall SetGrowCollectionFunc(TGrowCollectionFunc Func);
extern DELPHI_PACKAGE int __fastcall GrowCollection(int OldCapacity, int NewCount);
#ifndef _WIN64
extern DELPHI_PACKAGE System::DynamicArray<System::Byte> __fastcall BytesOf(const System::RawByteString Val)/* overload */;
extern DELPHI_PACKAGE System::DynamicArray<System::Byte> __fastcall BytesOf(const System::WideChar Val)/* overload */;
extern DELPHI_PACKAGE System::DynamicArray<System::Byte> __fastcall BytesOf(const char Val)/* overload */;
extern DELPHI_PACKAGE System::DynamicArray<System::Byte> __fastcall BytesOf(const System::UnicodeString Val)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StringOf(const System::DynamicArray<System::Byte> Bytes);
extern DELPHI_PACKAGE System::DynamicArray<System::Byte> __fastcall PlatformBytesOf(const System::UnicodeString Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall PlatformStringOf(const System::DynamicArray<System::Byte> Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall WideStringOf(const System::DynamicArray<System::Byte> Value);
extern DELPHI_PACKAGE System::DynamicArray<System::Byte> __fastcall WideBytesOf(const System::UnicodeString Value);
extern DELPHI_PACKAGE System::DynamicArray<System::Byte> __fastcall BytesOf(const void * Val, const int Len)/* overload */;
#else /* _WIN64 */
extern DELPHI_PACKAGE System::TArray__1<System::Byte> __fastcall BytesOf(const System::RawByteString Val)/* overload */;
extern DELPHI_PACKAGE System::TArray__1<System::Byte> __fastcall BytesOf(const System::WideChar Val)/* overload */;
extern DELPHI_PACKAGE System::TArray__1<System::Byte> __fastcall BytesOf(const char Val)/* overload */;
extern DELPHI_PACKAGE System::TArray__1<System::Byte> __fastcall BytesOf(const System::UnicodeString Val)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StringOf(const System::TArray__1<System::Byte> Bytes);
extern DELPHI_PACKAGE System::TArray__1<System::Byte> __fastcall PlatformBytesOf(const System::UnicodeString Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall PlatformStringOf(const System::TArray__1<System::Byte> Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall WideStringOf(const System::TArray__1<System::Byte> Value);
extern DELPHI_PACKAGE System::TArray__1<System::Byte> __fastcall WideBytesOf(const System::UnicodeString Value);
extern DELPHI_PACKAGE System::TArray__1<System::Byte> __fastcall BytesOf(const void * Val, const int Len)/* overload */;
#endif /* _WIN64 */
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetDefaultFallbackLanguages(void);
extern DELPHI_PACKAGE void __fastcall SetDefaultFallbackLanguages(const System::UnicodeString Languages);
extern DELPHI_PACKAGE System::UnicodeString __fastcall PreferredUILanguages(void);
extern DELPHI_PACKAGE _di_ILanguageEnumerable __fastcall PreferredUILanguageList(void);
extern DELPHI_PACKAGE bool __fastcall LocaleFileExists(const System::UnicodeString FileName);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetLocaleFile(const System::UnicodeString FileName);
extern DELPHI_PACKAGE bool __fastcall LocaleDirectoryExists(const System::UnicodeString Directory);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetLocaleDirectory(const System::UnicodeString Directory);
extern DELPHI_PACKAGE void __fastcall ResStringCleanupCache(void);
}	/* namespace Sysutils */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_SYSUTILS)
using namespace System::Sysutils;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif

//-- user supplied -----------------------------------------------------------
namespace System
{
namespace Sysutils
{
#if defined(_WIN32) || (defined(__ANDROID__) && defined(__APCS_32__))
#pragma pack(push,4) 
#endif

class PASCALIMPLEMENTATION EInOutError : public Exception 
{ 
typedef Exception inherited; 
public: 
int ErrorCode; 
System::UnicodeString Path; 
__fastcall EInOutError(const System::UnicodeString Msg, const System::UnicodeString Path); 
__fastcall EInOutError(System::PResStringRec ResStringRec, const System::UnicodeString Path); 
public: 
 inline __fastcall EInOutError(const System::UnicodeString Msg) : Exception(Msg) { } 
 inline __fastcall EInOutError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Exception(Msg, Args, Args_High) { } 
 inline __fastcall EInOutError(NativeUInt Ident) : Exception(Ident) { } 
 inline __fastcall EInOutError(System::PResStringRec ResStringRec) : Exception(ResStringRec) { } 
 inline __fastcall EInOutError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High) : Exception(Ident, Args, Args_High) { } 
 inline __fastcall EInOutError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : Exception(ResStringRec, Args, Args_High) { } 
 inline __fastcall EInOutError(const System::UnicodeString Msg, int AHelpContext) : Exception(Msg, AHelpContext) { } 
 inline __fastcall EInOutError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Msg, Args, Args_High, AHelpContext) { } 
 inline __fastcall EInOutError(NativeUInt Ident, int AHelpContext) : Exception(Ident, AHelpContext) { } 
 inline __fastcall EInOutError(System::PResStringRec ResStringRec, int AHelpContext) : Exception(ResStringRec, AHelpContext) { } 
 inline __fastcall EInOutError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(ResStringRec, Args, Args_High, AHelpContext) { } 
 inline __fastcall EInOutError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Exception(Ident, Args, Args_High, AHelpContext) { } 
 inline __fastcall virtual ~EInOutError() { } 
}; 

class PASCALIMPLEMENTATION EPathTooLongException : public EInOutError 
{ 
typedef EInOutError inherited; 
public: 
 inline __fastcall EPathTooLongException(const System::UnicodeString Msg, const System::UnicodeString Path) : EInOutError(Msg, Path) { } 
 inline __fastcall EPathTooLongException(System::PResStringRec ResStringRec, const System::UnicodeString Path) : EInOutError(ResStringRec, Path) { } 
public: 
 inline __fastcall EPathTooLongException(const System::UnicodeString Msg) : EInOutError(Msg) { } 
 inline __fastcall EPathTooLongException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EInOutError(Msg, Args, Args_High) { } 
 inline __fastcall EPathTooLongException(NativeUInt Ident) : EInOutError(Ident) { } 
 inline __fastcall EPathTooLongException(System::PResStringRec ResStringRec) : EInOutError(ResStringRec) { } 
 inline __fastcall EPathTooLongException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High) : EInOutError(Ident, Args, Args_High) { } 
 inline __fastcall EPathTooLongException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EInOutError(ResStringRec, Args, Args_High) { } 
 inline __fastcall EPathTooLongException(const System::UnicodeString Msg, int AHelpContext) : EInOutError(Msg, AHelpContext) { } 
 inline __fastcall EPathTooLongException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EInOutError(Msg, Args, Args_High, AHelpContext) { } 
 inline __fastcall EPathTooLongException(NativeUInt Ident, int AHelpContext) : EInOutError(Ident, AHelpContext) { } 
 inline __fastcall EPathTooLongException(System::PResStringRec ResStringRec, int AHelpContext) : EInOutError(ResStringRec, AHelpContext) { } 
 inline __fastcall EPathTooLongException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EInOutError(ResStringRec, Args, Args_High, AHelpContext) { } 
 inline __fastcall EPathTooLongException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EInOutError(Ident, Args, Args_High, AHelpContext) { } 
 inline __fastcall virtual ~EPathTooLongException() { } 
}; 

class PASCALIMPLEMENTATION EDirectoryNotFoundException : public EInOutError 
{ 
typedef EInOutError inherited; 
public: 
 inline __fastcall EDirectoryNotFoundException(const System::UnicodeString Msg, const System::UnicodeString Path) : EInOutError(Msg, Path) { } 
 inline __fastcall EDirectoryNotFoundException(System::PResStringRec ResStringRec, const System::UnicodeString Path) : EInOutError(ResStringRec, Path) { } 
public: 
 inline __fastcall EDirectoryNotFoundException(const System::UnicodeString Msg) : EInOutError(Msg) { } 
 inline __fastcall EDirectoryNotFoundException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EInOutError(Msg, Args, Args_High) { } 
 inline __fastcall EDirectoryNotFoundException(NativeUInt Ident) : EInOutError(Ident) { } 
 inline __fastcall EDirectoryNotFoundException(System::PResStringRec ResStringRec) : EInOutError(ResStringRec) { } 
 inline __fastcall EDirectoryNotFoundException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High) : EInOutError(Ident, Args, Args_High) { } 
 inline __fastcall EDirectoryNotFoundException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EInOutError(ResStringRec, Args, Args_High) { } 
 inline __fastcall EDirectoryNotFoundException(const System::UnicodeString Msg, int AHelpContext) : EInOutError(Msg, AHelpContext) { } 
 inline __fastcall EDirectoryNotFoundException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EInOutError(Msg, Args, Args_High, AHelpContext) { } 
 inline __fastcall EDirectoryNotFoundException(NativeUInt Ident, int AHelpContext) : EInOutError(Ident, AHelpContext) { } 
 inline __fastcall EDirectoryNotFoundException(System::PResStringRec ResStringRec, int AHelpContext) : EInOutError(ResStringRec, AHelpContext) { } 
 inline __fastcall EDirectoryNotFoundException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EInOutError(ResStringRec, Args, Args_High, AHelpContext) { } 
 inline __fastcall EDirectoryNotFoundException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EInOutError(Ident, Args, Args_High, AHelpContext) { } 
 inline __fastcall virtual ~EDirectoryNotFoundException() { } 
}; 

class PASCALIMPLEMENTATION EFileNotFoundException : public EInOutError 
{ 
typedef EInOutError inherited; 
public: 
 inline __fastcall EFileNotFoundException(const System::UnicodeString Msg, const System::UnicodeString Path) : EInOutError(Msg, Path) { } 
 inline __fastcall EFileNotFoundException(System::PResStringRec ResStringRec, const System::UnicodeString Path) : EInOutError(ResStringRec, Path) { } 
public: 
 inline __fastcall EFileNotFoundException(const System::UnicodeString Msg) : EInOutError(Msg) { } 
 inline __fastcall EFileNotFoundException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EInOutError(Msg, Args, Args_High) { } 
 inline __fastcall EFileNotFoundException(NativeUInt Ident) : EInOutError(Ident) { } 
 inline __fastcall EFileNotFoundException(System::PResStringRec ResStringRec) : EInOutError(ResStringRec) { } 
 inline __fastcall EFileNotFoundException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High) : EInOutError(Ident, Args, Args_High) { } 
 inline __fastcall EFileNotFoundException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EInOutError(ResStringRec, Args, Args_High) { } 
 inline __fastcall EFileNotFoundException(const System::UnicodeString Msg, int AHelpContext) : EInOutError(Msg, AHelpContext) { } 
 inline __fastcall EFileNotFoundException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EInOutError(Msg, Args, Args_High, AHelpContext) { } 
 inline __fastcall EFileNotFoundException(NativeUInt Ident, int AHelpContext) : EInOutError(Ident, AHelpContext) { } 
 inline __fastcall EFileNotFoundException(System::PResStringRec ResStringRec, int AHelpContext) : EInOutError(ResStringRec, AHelpContext) { } 
 inline __fastcall EFileNotFoundException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EInOutError(ResStringRec, Args, Args_High, AHelpContext) { } 
 inline __fastcall EFileNotFoundException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EInOutError(Ident, Args, Args_High, AHelpContext) { } 
 inline __fastcall virtual ~EFileNotFoundException() { } 
}; 

class PASCALIMPLEMENTATION EPathNotFoundException : public EInOutError 
{ 
typedef EInOutError inherited; 
public: 
 inline __fastcall EPathNotFoundException(const System::UnicodeString Msg, const System::UnicodeString Path) : EInOutError(Msg, Path) { } 
 inline __fastcall EPathNotFoundException(System::PResStringRec ResStringRec, const System::UnicodeString Path) : EInOutError(ResStringRec, Path) { } 
public: 
 inline __fastcall EPathNotFoundException(const System::UnicodeString Msg) : EInOutError(Msg) { } 
 inline __fastcall EPathNotFoundException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EInOutError(Msg, Args, Args_High) { } 
 inline __fastcall EPathNotFoundException(NativeUInt Ident) : EInOutError(Ident) { } 
 inline __fastcall EPathNotFoundException(System::PResStringRec ResStringRec) : EInOutError(ResStringRec) { } 
 inline __fastcall EPathNotFoundException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High) : EInOutError(Ident, Args, Args_High) { } 
 inline __fastcall EPathNotFoundException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EInOutError(ResStringRec, Args, Args_High) { } 
 inline __fastcall EPathNotFoundException(const System::UnicodeString Msg, int AHelpContext) : EInOutError(Msg, AHelpContext) { } 
 inline __fastcall EPathNotFoundException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EInOutError(Msg, Args, Args_High, AHelpContext) { } 
 inline __fastcall EPathNotFoundException(NativeUInt Ident, int AHelpContext) : EInOutError(Ident, AHelpContext) { } 
 inline __fastcall EPathNotFoundException(System::PResStringRec ResStringRec, int AHelpContext) : EInOutError(ResStringRec, AHelpContext) { } 
 inline __fastcall EPathNotFoundException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EInOutError(ResStringRec, Args, Args_High, AHelpContext) { } 
 inline __fastcall EPathNotFoundException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EInOutError(Ident, Args, Args_High, AHelpContext) { } 
 inline __fastcall virtual ~EPathNotFoundException() { } 
}; 

class PASCALIMPLEMENTATION EInOutArgumentException : public EArgumentException 
{ 
  typedef EArgumentException inherited; 
public: 
  System::UnicodeString Path; 
  __fastcall EInOutArgumentException(const System::UnicodeString Msg, const System::UnicodeString Path); 
  __fastcall EInOutArgumentException(System::PResStringRec ResStringRec, const System::UnicodeString Path); 
public: 
 inline __fastcall EInOutArgumentException(const System::UnicodeString Msg) : EArgumentException(Msg) { }  
  inline __fastcall EInOutArgumentException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EArgumentException(Msg, Args, Args_High) { } 
  inline __fastcall EInOutArgumentException(NativeUInt Ident) : EArgumentException(Ident) { } 
  inline __fastcall EInOutArgumentException(System::PResStringRec ResStringRec) : EArgumentException(ResStringRec) { } 
  inline __fastcall EInOutArgumentException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High) : EArgumentException(Ident, Args, Args_High) { } 
  inline __fastcall EInOutArgumentException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EArgumentException(ResStringRec, Args, Args_High) { } 
  inline __fastcall EInOutArgumentException(const System::UnicodeString Msg, int AHelpContext) : EArgumentException(Msg, AHelpContext) { } 
  inline __fastcall EInOutArgumentException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EArgumentException(Msg, Args, Args_High, AHelpContext) { } 
  inline __fastcall EInOutArgumentException(NativeUInt Ident, int AHelpContext) : EArgumentException(Ident, AHelpContext) { } 
  inline __fastcall EInOutArgumentException(System::PResStringRec ResStringRec, int AHelpContext) : EArgumentException(ResStringRec, AHelpContext) { } 
  inline __fastcall EInOutArgumentException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EArgumentException(ResStringRec, Args, Args_High, AHelpContext) { } 
  inline __fastcall EInOutArgumentException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EArgumentException(Ident, Args, Args_High, AHelpContext) { } 
  inline __fastcall virtual ~EInOutArgumentException() { } 
}; 

#if defined(_WIN32) || (defined(__ANDROID__) && defined(__APCS_32__))
#pragma pack(pop) 
#endif

}	/* namespace Sysutils */
}	/* namespace System */
namespace System
{
namespace Sysutils
{
  struct TGUIDHelper {
    static TGUID __fastcall Create(const System::Sysutils::TBytes B, System::Types::TEndian DataEndian);
    static TGUID __fastcall Create(const System::Sysutils::TBytes B, unsigned AStartIndex, System::Types::TEndian DataEndian);
    static TGUID __fastcall Create(const System::UnicodeString S);
    static TGUID __fastcall Create(int A, short B, short C, const System::Sysutils::TBytes D);
    static TGUID __fastcall Create(int A, short B, short C, System::Byte D, System::Byte E, System::Byte F, System::Byte G, System::Byte H, System::Byte I, System::Byte J, System::Byte K);
    static TGUID __fastcall Create(const void *Data, System::Types::TEndian DataEndian);
    static TGUID __fastcall Create(unsigned A, System::Word B, System::Word C, System::Byte D, System::Byte E, System::Byte F, System::Byte G, System::Byte H, System::Byte I, System::Byte J, System::Byte K);
    static TGUID __fastcall NewGuid();
  };


#if (__cplusplus >= 201103L) && !defined(SYSTEM_SYSUTILS_NO_VARIADIC_FORMAT)
  namespace internal {
    // NOTE: Would be better to use 'std::' but can't force 'type_traits' in
    //       'System.SysUtils.hpp'. Hence, home-made traits
    template<bool B, class T = void>
    struct only_if {};

    template<class T>
    struct only_if<true, T> { typedef T type; };

    template<class T, T v>
    struct integral_constant {
      static constexpr T value = v;
      using value_type = T;
    };

    template<typename T, typename Y>
    struct is_same {
      enum { value = 0 };
    };

    template<typename T>
    struct is_same<T, T> {
      enum { value = 1 };
    };

    template<std::size_t N, typename T = void, typename... types>
    struct GetType
    {
      using type = typename GetType<N - 1, types...>::type;
    };

    template<typename T, typename... types>
    struct GetType<0, T, types...>
    {
      using type = T;
    };
    template <typename T>
    using is_TVarRec_compat = std::integral_constant<bool,
                                                     is_same<T, void>::value ||
                                                     is_same<T, char>::value ||
                                                     is_same<T, int>::value ||
                                                     is_same<T, unsigned>::value ||
                                                     is_same<T, long>::value ||
                                                     is_same<T, unsigned long>::value ||
#if defined(_WIN64) || defined(TARGET_OS_IPHONE) || defined(__ANDROID__)
                                                     is_same<T, double>::value ||
#endif
                                                     is_same<T, long double>::value ||
                                                     is_same<T, System::ShortString>::value ||
                                                     is_same<T, System::UnicodeString>::value ||
                                                     is_same<T, System::Currency>::value ||
                                                     is_same<T, System::Variant>::value ||
                                                     is_same<T, System::WideString>::value ||
                                                     is_same<T, long long>::value ||
                                                     is_same<T, unsigned long long>::value
                                                    >;
  }


  // Variadic version of Format. Supports the more natural syntax of
  //   Format("A string='%s', An int='%d'", str, i);
  template <typename... Args,
            class Enable = typename internal::only_if<
                             internal::is_TVarRec_compat<
                               typename internal::GetType<0, Args...>::type>::value>::type>
  System::String Format(const char *fmt, const Args&... args) {
    System::TVarRec arg_list[] = {args...};
    return Format(System::String(fmt), arg_list, sizeof...(Args)-1);
  }

  template <typename... Args,
            class Enable = typename internal::only_if<
                             internal::is_TVarRec_compat<
                               typename internal::GetType<0, Args...>::type>::value>::type>
  System::String Format(const System::WideChar *fmt, const Args&... args) {
    System::TVarRec arg_list[] = {args...};
    return Format(System::String(fmt), arg_list, sizeof...(Args)-1);
  }
#endif


  // Typesafe 'FreeAndNil' for 'TObject-derived**'
  template <typename T>
  void FreeAndNil(T** obj) {
    static_assert(__is_base_of(System::TObject, T), "'T' must derive from System::TObject");
    CPPFreeAndNil(*reinterpret_cast<TObject**>(obj));
  }

  // Typesafe 'FreeAndNil' for 'TObject-derived*'
  template <typename T>
  void FreeAndNil(T* &obj) {
    static_assert(__is_base_of(System::TObject, T), "'T' must derive from System::TObject");
    CPPFreeAndNil(*reinterpret_cast<TObject**>(&obj));
  }
}	/* namespace Sysutils */
}	/* namespace System */

#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_SysutilsHPP
