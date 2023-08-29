// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Rtti.pas' rev: 35.00 (Windows)

#ifndef System_RttiHPP
#define System_RttiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Variants.hpp>
#include <System.TypInfo.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Rtti
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EInsufficientRtti;
class DELPHICLASS EInvocationError;
class DELPHICLASS ENonPublicType;
__interface DELPHIINTERFACE IValueData;
typedef System::DelphiInterface<IValueData> _di_IValueData;
struct TValueData;
struct TValue;
class DELPHICLASS TRttiObject;
class DELPHICLASS TRttiNamedObject;
class DELPHICLASS TRttiType;
class DELPHICLASS TRttiMember;
class DELPHICLASS TRttiStructuredType;
class DELPHICLASS TRttiField;
class DELPHICLASS TRttiManagedField;
class DELPHICLASS TRttiRecordType;
class DELPHICLASS TRttiProperty;
struct TRecordTypeMethod;
class DELPHICLASS TRttiInstanceProperty;
class DELPHICLASS TRttiParameter;
__interface DELPHIINTERFACE TMethodImplementationCallback;
typedef System::DelphiInterface<TMethodImplementationCallback> _di_TMethodImplementationCallback;
class DELPHICLASS TMethodImplementation;
class DELPHICLASS TRttiMethod;
class DELPHICLASS TRttiIndexedProperty;
class DELPHICLASS TRttiInstanceType;
class DELPHICLASS TRttiInterfaceType;
class DELPHICLASS TRttiOrdinalType;
class DELPHICLASS TRttiInt64Type;
class DELPHICLASS TRttiInvokableType;
class DELPHICLASS TRttiMethodType;
class DELPHICLASS TRttiProcedureType;
class DELPHICLASS TRttiClassRefType;
class DELPHICLASS TRttiEnumerationType;
class DELPHICLASS TRttiSetType;
class DELPHICLASS TRttiStringType;
class DELPHICLASS TRttiAnsiStringType;
class DELPHICLASS TRttiFloatType;
class DELPHICLASS TRttiArrayType;
class DELPHICLASS TRttiDynamicArrayType;
class DELPHICLASS TRttiPointerType;
class DELPHICLASS TRttiPackage;
struct TRttiContext;
__interface DELPHIINTERFACE TInterceptBeforeNotify;
typedef System::DelphiInterface<TInterceptBeforeNotify> _di_TInterceptBeforeNotify;
__interface DELPHIINTERFACE TInterceptAfterNotify;
typedef System::DelphiInterface<TInterceptAfterNotify> _di_TInterceptAfterNotify;
__interface DELPHIINTERFACE TInterceptExceptionNotify;
typedef System::DelphiInterface<TInterceptExceptionNotify> _di_TInterceptExceptionNotify;
class DELPHICLASS TVirtualMethodInterceptor;
class DELPHICLASS TRawVirtualClass;
__interface DELPHIINTERFACE TVirtualInterfaceInvokeEvent;
typedef System::DelphiInterface<TVirtualInterfaceInvokeEvent> _di_TVirtualInterfaceInvokeEvent;
class DELPHICLASS TVirtualInterface;
__interface DELPHIINTERFACE TGetArrayValueFunc;
typedef System::DelphiInterface<TGetArrayValueFunc> _di_TGetArrayValueFunc;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EInsufficientRtti : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInsufficientRtti(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInsufficientRtti(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInsufficientRtti(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInsufficientRtti(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInsufficientRtti(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInsufficientRtti(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInsufficientRtti(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInsufficientRtti(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInsufficientRtti(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInsufficientRtti(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInsufficientRtti(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInsufficientRtti(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInsufficientRtti() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EInvocationError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvocationError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvocationError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvocationError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvocationError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvocationError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvocationError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvocationError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvocationError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvocationError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvocationError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvocationError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvocationError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvocationError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ENonPublicType : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ENonPublicType(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ENonPublicType(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ENonPublicType(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ENonPublicType(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ENonPublicType(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ENonPublicType(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ENonPublicType(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ENonPublicType(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENonPublicType(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENonPublicType(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENonPublicType(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENonPublicType(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ENonPublicType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface IValueData  : public System::IInterface 
{
	virtual int __fastcall GetDataSize() = 0 ;
	virtual void __fastcall ExtractRawData(void * ABuffer) = 0 ;
	virtual void __fastcall ExtractRawDataNoCopy(void * ABuffer) = 0 ;
	virtual void * __fastcall GetReferenceToRawData() = 0 ;
};

struct DECLSPEC_DRECORD TValueData
{
public:
	System::Typinfo::TTypeInfo *FTypeInfo;
	_di_IValueData FValueData;
	
public:
	union
	{
		struct 
		{
			void *FAsPointer;
		};
		struct 
		{
			System::TMethod FAsMethod;
		};
		struct 
		{
			__int64 FAsSInt64;
		};
		struct 
		{
			unsigned __int64 FAsUInt64;
		};
		struct 
		{
			System::CurrencyBase FAsCurr;
		};
		struct 
		{
			System::CompBase FAsComp;
		};
		struct 
		{
			System::Extended FAsExtended;
		};
		struct 
		{
			double FAsDouble;
		};
		struct 
		{
			float FAsSingle;
		};
		struct 
		{
			int FAsSLong;
		};
		struct 
		{
			short FAsSWord;
		};
		struct 
		{
			System::Int8 FAsSByte;
		};
		struct 
		{
			System::TClass FAsClass;
		};
		struct 
		{
			void *FAsObject;
		};
		struct 
		{
			unsigned FAsULong;
		};
		struct 
		{
			System::Word FAsUWord;
		};
		struct 
		{
			System::Byte FAsUByte;
		};
		
	};
};


struct __declspec(delphirecord) TValue
{
private:
	static TValue FEmpty;
	
private:
	// __classmethod void __fastcall Create@();
	
private:
	bool __fastcall GetIsEmpty();
	System::Typinfo::PTypeInfo __fastcall GetTypeInfo();
	System::TTypeKind __fastcall GetTypeKind();
	System::Typinfo::PTypeData __fastcall GetTypeDataProp();
	int __fastcall GetDataSize();
	static void __fastcall InitData(TValue &AValue);
	static TValue __fastcall Create(System::Typinfo::PTypeInfo ATypeInfo);
	static TValue __fastcall GetEmpty();
	bool __fastcall TryAsTypeInternal(void *AResult, System::Typinfo::PTypeInfo ATypeInfo, const bool EmptyAsAnyType = true);
	void __fastcall AsTypeInternal(void *AResult, void * ATypeInfo);
	
public:
	static TValue __fastcall _op_Implicit(const System::UnicodeString Value);
	static TValue __fastcall _op_Implicit(int Value);
	static TValue __fastcall _op_Implicit(unsigned Value);
	static TValue __fastcall _op_Implicit(float Value);
	static TValue __fastcall _op_Implicit(double Value);
	static TValue __fastcall _op_Implicit(System::Extended Value);
	static TValue __fastcall _op_Implicit(System::Currency Value);
	static TValue __fastcall _op_Implicit(__int64 Value);
	static TValue __fastcall _op_Implicit(unsigned __int64 Value);
	static TValue __fastcall _op_Implicit(System::TObject* Value);
	static TValue __fastcall _op_Implicit(System::TClass Value);
	static TValue __fastcall _op_Implicit(bool Value);
	static TValue __fastcall _op_Implicit(System::TDateTime Value);
	// NOP;
	// NOP;
	static TValue __fastcall _op_Implicit(const System::TVarRec &VarRec);
	static TValue __fastcall FromVariant(const System::Variant &Value);
	template<typename T> static TValue __fastcall From(const T Value);
	static TValue __fastcall FromOrdinal(System::Typinfo::PTypeInfo ATypeInfo, __int64 AValue);
	static TValue __fastcall FromArray(System::Typinfo::PTypeInfo ArrayTypeInfo, const TValue *Values, const int Values_High);
	static TValue __fastcall FromVarRec(const System::TVarRec &VarRec);
	__property System::TTypeKind Kind = {read=GetTypeKind};
	__property System::Typinfo::PTypeInfo TypeInfo = {read=GetTypeInfo};
	__property System::Typinfo::PTypeData TypeData = {read=GetTypeDataProp};
	__property bool IsEmpty = {read=GetIsEmpty};
	bool __fastcall IsObject();
	bool __fastcall IsObjectInstance();
	System::TObject* __fastcall AsObject();
	bool __fastcall IsInstanceOf(System::TClass AClass);
	bool __fastcall IsClass();
	System::TClass __fastcall AsClass();
	bool __fastcall IsOrdinal();
	__int64 __fastcall AsOrdinal();
	bool __fastcall TryAsOrdinal(/* out */ __int64 &AResult);
	template<typename T> bool __fastcall IsType(const bool EmptyAsAnyType = true)/* overload */;
	bool __fastcall IsType(System::Typinfo::PTypeInfo ATypeInfo, const bool EmptyAsAnyType = true)/* overload */;
	template<typename T> T __fastcall AsType(const bool EmptyAsAnyType = true);
	template<typename T> bool __fastcall TryAsType(/* out */ T &AResult, const bool EmptyAsAnyType = true);
	template<typename T> TValue __fastcall Cast(const bool EmptyAsAnyType = true)/* overload */;
	TValue __fastcall Cast(System::Typinfo::PTypeInfo ATypeInfo, const bool EmptyAsAnyType = true)/* overload */;
	bool __fastcall TryCast(System::Typinfo::PTypeInfo ATypeInfo, /* out */ TValue &AResult, const bool EmptyAsAnyType = true);
	int __fastcall AsInteger();
	bool __fastcall AsBoolean();
	System::Extended __fastcall AsExtended();
	__int64 __fastcall AsInt64();
	unsigned __int64 __fastcall AsUInt64();
	System::_di_IInterface __fastcall AsInterface();
	System::UnicodeString __fastcall AsString();
	System::Variant __fastcall AsVariant();
	System::Currency __fastcall AsCurrency();
	bool __fastcall IsArray();
	TValue __fastcall CastToVarRec();
	System::TVarRec __fastcall AsVarRec();
	int __fastcall GetArrayLength();
	TValue __fastcall GetArrayElement(int Index);
	void __fastcall SetArrayElement(int Index, const TValue &AValue);
	static void __fastcall Make(void * ABuffer, System::Typinfo::PTypeInfo ATypeInfo, TValue &Result)/* overload */;
	static void __fastcall Make(NativeInt AValue, System::Typinfo::PTypeInfo ATypeInfo, TValue &Result)/* overload */;
	template<typename T> static void __fastcall Make(const T Value, TValue &Result)/* overload */;
	static void __fastcall MakeWithoutCopy(void * ABuffer, System::Typinfo::PTypeInfo ATypeInfo, TValue &Result, bool IsMoved = false)/* overload */;
	__property int DataSize = {read=GetDataSize};
	void __fastcall ExtractRawData(void * ABuffer);
	void __fastcall ExtractRawDataNoCopy(void * ABuffer);
	void * __fastcall GetReferenceToRawData();
	void * __fastcall GetReferenceToRawArrayElement(int Index);
	/* static */ __property TValue Empty = {read=GetEmpty};
	System::UnicodeString __fastcall ToString();
	
private:
	System::Typinfo::TTypeInfo *FTypeInfo;
	_di_IValueData FValueData;
public:
	
	TValue& operator =(const System::UnicodeString Value) { *this = TValue::_op_Implicit(Value); return *this; }
	TValue& operator =(int Value) { *this = TValue::_op_Implicit(Value); return *this; }
	TValue& operator =(unsigned Value) { *this = TValue::_op_Implicit(Value); return *this; }
	TValue& operator =(float Value) { *this = TValue::_op_Implicit(Value); return *this; }
	TValue& operator =(double Value) { *this = TValue::_op_Implicit(Value); return *this; }
	TValue& operator =(System::Extended Value) { *this = TValue::_op_Implicit(Value); return *this; }
	TValue& operator =(System::Currency Value) { *this = TValue::_op_Implicit(Value); return *this; }
	TValue& operator =(__int64 Value) { *this = TValue::_op_Implicit(Value); return *this; }
	TValue& operator =(unsigned __int64 Value) { *this = TValue::_op_Implicit(Value); return *this; }
	TValue& operator =(System::TObject* Value) { *this = TValue::_op_Implicit(Value); return *this; }
	TValue& operator =(System::TClass Value) { *this = TValue::_op_Implicit(Value); return *this; }
	TValue& operator =(bool Value) { *this = TValue::_op_Implicit(Value); return *this; }
	TValue& operator =(System::TDateTime Value) { *this = TValue::_op_Implicit(Value); return *this; }
	TValue& operator =(const System::TVarRec &VarRec) { *this = TValue::_op_Implicit(VarRec); return *this; }
	
private:
	union
	{
		struct 
		{
			void *FAsPointer;
		};
		struct 
		{
			System::TMethod FAsMethod;
		};
		struct 
		{
			__int64 FAsSInt64;
		};
		struct 
		{
			unsigned __int64 FAsUInt64;
		};
		struct 
		{
			System::CurrencyBase FAsCurr;
		};
		struct 
		{
			System::CompBase FAsComp;
		};
		struct 
		{
			System::Extended FAsExtended;
		};
		struct 
		{
			double FAsDouble;
		};
		struct 
		{
			float FAsSingle;
		};
		struct 
		{
			int FAsSLong;
		};
		struct 
		{
			short FAsSWord;
		};
		struct 
		{
			System::Int8 FAsSByte;
		};
		struct 
		{
			System::TClass FAsClass;
		};
		struct 
		{
			void *FAsObject;
		};
		struct 
		{
			unsigned FAsULong;
		};
		struct 
		{
			System::Word FAsUWord;
		};
		struct 
		{
			System::Byte FAsUByte;
		};
		
	};
};


typedef TValue *PValue;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiObject : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void *FHandle;
	int FRttiDataSize;
	TRttiPackage* FPackage;
	TRttiObject* FParent;
#ifndef _WIN64
	System::DelphiInterface<System::Sysutils::TFunc__1<System::DynamicArray<System::TCustomAttribute*> > > FAttributeGetter;
#else /* _WIN64 */
	System::DelphiInterface<System::Sysutils::TFunc__1<System::TArray__1<System::TCustomAttribute*> > > FAttributeGetter;
#endif /* _WIN64 */
	
protected:
	__fastcall virtual TRttiObject(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P);
	
public:
	__fastcall virtual ~TRttiObject();
	System::TCustomAttribute* __fastcall GetAttribute(System::TCustomAttributeClass AAttrClass)/* overload */;
	template<typename T> T __fastcall GetAttribute()/* overload */;
	bool __fastcall HasAttribute(System::TCustomAttributeClass AAttrClass)/* overload */;
	template<typename T> bool __fastcall HasAttribute()/* overload */;
	__property void * Handle = {read=FHandle};
	__property int RttiDataSize = {read=FRttiDataSize, nodefault};
	__property TRttiObject* Parent = {read=FParent};
	__property TRttiPackage* Package = {read=FPackage};
#ifndef _WIN64
	virtual System::DynamicArray<System::TCustomAttribute*> __fastcall GetAttributes();
#else /* _WIN64 */
	virtual System::TArray__1<System::TCustomAttribute*> __fastcall GetAttributes();
#endif /* _WIN64 */
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiNamedObject : public TRttiObject
{
	typedef TRttiObject inherited;
	
private:
	virtual System::UnicodeString __fastcall GetName() = 0 ;
	
public:
	virtual bool __fastcall HasName(const System::UnicodeString AName);
	__property System::UnicodeString Name = {read=GetName};
protected:
	/* TRttiObject.Create */ inline __fastcall virtual TRttiNamedObject(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P) : TRttiObject(APackage, AParent, P) { }
	
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiNamedObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TRttiClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TRttiClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiType : public TRttiNamedObject
{
	typedef TRttiNamedObject inherited;
	
	
protected:
	/* [Template Alias] */
	#if defined(__clang__)
	template<typename T> using TGetListFunc__1 = System::TArray__1<T> __fastcall (*)(TRttiType* AType);
	#endif
	
	
private:
	virtual System::UnicodeString __fastcall GetName();
	System::TTypeKind __fastcall GetTypeKind();
	System::Typinfo::PTypeData __fastcall GetTypeData();
	bool __fastcall GetIsManaged();
	TRttiInstanceType* __fastcall GetAsInstance();
	TRttiOrdinalType* __fastcall GetAsOrdinal();
	TRttiRecordType* __fastcall GetAsRecord();
	bool __fastcall GetIsInstance();
	bool __fastcall GetIsOrdinal();
	bool __fastcall GetIsRecord();
	System::Typinfo::PTypeInfo __fastcall GetHandle();
	TRttiSetType* __fastcall GetAsSet();
	bool __fastcall GetIsSet();
	virtual bool __fastcall GetIsHFA();
	virtual TRttiFloatType* __fastcall GetHFAElementType();
	virtual int __fastcall GetHFAElementCount();
	virtual int __fastcall GetTypeSize();
	System::UnicodeString __fastcall GetQualifiedName();
	virtual TRttiType* __fastcall GetBaseType();
	bool __fastcall GetIsPublicType();
	__property System::Typinfo::PTypeData TypeData = {read=GetTypeData};
	
protected:
	__fastcall virtual TRttiType(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P);
#ifndef _WIN64
	template<typename T> T __fastcall GetNamedObject(const System::UnicodeString AName, const System::DynamicArray<T> __fastcall (*)(TRttiType* AType) );
	template<typename T> System::DynamicArray<T> __fastcall GetNamedObjects(const System::UnicodeString AName, const System::DynamicArray<T> __fastcall (*)(TRttiType* AType) );
	template<typename T> System::DynamicArray<T> __fastcall GetObjectList(const System::DynamicArray<T> __fastcall (*)(TRttiType* AType) );
#else /* _WIN64 */
	template<typename T> T __fastcall GetNamedObject(const System::UnicodeString AName, const TGetListFunc__1<T> AGetListFunc);
	template<typename T> System::TArray__1<T> __fastcall GetNamedObjects(const System::UnicodeString AName, const TGetListFunc__1<T> AGetListFunc);
	template<typename T> System::TArray__1<T> __fastcall GetObjectList(const TGetListFunc__1<T> AGetListFunc);
#endif /* _WIN64 */
	
public:
	virtual System::UnicodeString __fastcall ToString();
	__property System::Typinfo::PTypeInfo Handle = {read=GetHandle};
	__property System::UnicodeString QualifiedName = {read=GetQualifiedName};
	__property bool IsPublicType = {read=GetIsPublicType, nodefault};
	__property System::TTypeKind TypeKind = {read=GetTypeKind, nodefault};
	__property int TypeSize = {read=GetTypeSize, nodefault};
	__property bool IsManaged = {read=GetIsManaged, nodefault};
	virtual bool __fastcall HasName(const System::UnicodeString AName);
#ifndef _WIN64
	virtual System::DynamicArray<TRttiMethod*> __fastcall GetMethods()/* overload */;
	virtual System::DynamicArray<TRttiField*> __fastcall GetFields();
	virtual System::DynamicArray<TRttiProperty*> __fastcall GetProperties();
	virtual System::DynamicArray<TRttiIndexedProperty*> __fastcall GetIndexedProperties();
#else /* _WIN64 */
	virtual System::TArray__1<TRttiMethod*> __fastcall GetMethods()/* overload */;
	virtual System::TArray__1<TRttiField*> __fastcall GetFields();
	virtual System::TArray__1<TRttiProperty*> __fastcall GetProperties();
	virtual System::TArray__1<TRttiIndexedProperty*> __fastcall GetIndexedProperties();
#endif /* _WIN64 */
	virtual TRttiMethod* __fastcall GetMethod(const System::UnicodeString AName);
#ifndef _WIN64
	virtual System::DynamicArray<TRttiMethod*> __fastcall GetMethods(const System::UnicodeString AName)/* overload */;
#else /* _WIN64 */
	virtual System::TArray__1<TRttiMethod*> __fastcall GetMethods(const System::UnicodeString AName)/* overload */;
#endif /* _WIN64 */
	virtual TRttiField* __fastcall GetField(const System::UnicodeString AName);
	virtual TRttiProperty* __fastcall GetProperty(const System::UnicodeString AName);
	virtual TRttiIndexedProperty* __fastcall GetIndexedProperty(const System::UnicodeString AName);
#ifndef _WIN64
	virtual System::DynamicArray<TRttiMethod*> __fastcall GetDeclaredMethods();
	virtual System::DynamicArray<TRttiProperty*> __fastcall GetDeclaredProperties();
	virtual System::DynamicArray<TRttiField*> __fastcall GetDeclaredFields();
	virtual System::DynamicArray<TRttiIndexedProperty*> __fastcall GetDeclaredIndexedProperties();
#else /* _WIN64 */
	virtual System::TArray__1<TRttiMethod*> __fastcall GetDeclaredMethods();
	virtual System::TArray__1<TRttiProperty*> __fastcall GetDeclaredProperties();
	virtual System::TArray__1<TRttiField*> __fastcall GetDeclaredFields();
	virtual System::TArray__1<TRttiIndexedProperty*> __fastcall GetDeclaredIndexedProperties();
#endif /* _WIN64 */
	__property TRttiType* BaseType = {read=GetBaseType};
	__property TRttiInstanceType* AsInstance = {read=GetAsInstance};
	__property bool IsInstance = {read=GetIsInstance, nodefault};
	__property TRttiOrdinalType* AsOrdinal = {read=GetAsOrdinal};
	__property bool IsOrdinal = {read=GetIsOrdinal, nodefault};
	__property TRttiRecordType* AsRecord = {read=GetAsRecord};
	__property bool IsRecord = {read=GetIsRecord, nodefault};
	__property bool IsSet = {read=GetIsSet, nodefault};
	__property TRttiSetType* AsSet = {read=GetAsSet};
	__property bool IsHFA = {read=GetIsHFA, nodefault};
	__property TRttiFloatType* HFAElementType = {read=GetHFAElementType};
	__property int HFAElementCount = {read=GetHFAElementCount, nodefault};
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiMember : public TRttiNamedObject
{
	typedef TRttiNamedObject inherited;
	
private:
	TRttiType* __fastcall GetParent();
	virtual System::Typinfo::TMemberVisibility __fastcall GetVisibility();
	
public:
	__property TRttiType* Parent = {read=GetParent};
	__property System::Typinfo::TMemberVisibility Visibility = {read=GetVisibility, nodefault};
protected:
	/* TRttiObject.Create */ inline __fastcall virtual TRttiMember(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P) : TRttiNamedObject(APackage, AParent, P) { }
	
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiMember() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiStructuredType : public TRttiType
{
	typedef TRttiType inherited;
	
protected:
	/* TRttiType.Create */ inline __fastcall virtual TRttiStructuredType(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P) : TRttiType(APackage, AParent, P) { }
	
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiStructuredType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiField : public TRttiMember
{
	typedef TRttiMember inherited;
	
private:
	TRttiType* FFieldType;
	int FOffset;
	virtual TRttiType* __fastcall GetFieldType();
	virtual int __fastcall GetOffset();
	
protected:
	__fastcall virtual TRttiField(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P);
	
public:
	__property TRttiType* FieldType = {read=FFieldType};
	__property int Offset = {read=FOffset, nodefault};
	TValue __fastcall GetValue(void * Instance);
	void __fastcall SetValue(void * Instance, const TValue &AValue);
	virtual System::UnicodeString __fastcall ToString();
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiField() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiManagedField : public TRttiObject
{
	typedef TRttiObject inherited;
	
private:
	int __fastcall GetFieldOffset();
	TRttiType* __fastcall GetFieldType();
	
protected:
	__fastcall virtual TRttiManagedField(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P);
	
public:
	__property TRttiType* FieldType = {read=GetFieldType};
	__property int FieldOffset = {read=GetFieldOffset, nodefault};
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiManagedField() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiRecordType : public TRttiStructuredType
{
	typedef TRttiStructuredType inherited;
	
private:
	System::Byte *FMethOfs;
#ifndef _WIN64
	System::DynamicArray<TRttiManagedField*> __fastcall GetManagedFields();
#else /* _WIN64 */
	System::TArray__1<TRttiManagedField*> __fastcall GetManagedFields();
#endif /* _WIN64 */
	
protected:
	virtual int __fastcall GetTypeSize();
	
public:
#ifndef _WIN64
	virtual System::DynamicArray<TRttiField*> __fastcall GetDeclaredFields();
	virtual System::DynamicArray<TRttiMethod*> __fastcall GetDeclaredMethods();
	virtual System::DynamicArray<System::TCustomAttribute*> __fastcall GetAttributes();
	__property System::DynamicArray<TRttiManagedField*> ManagedFields = {read=GetManagedFields};
#else /* _WIN64 */
	virtual System::TArray__1<TRttiField*> __fastcall GetDeclaredFields();
	virtual System::TArray__1<TRttiMethod*> __fastcall GetDeclaredMethods();
	virtual System::TArray__1<System::TCustomAttribute*> __fastcall GetAttributes();
	__property System::TArray__1<TRttiManagedField*> ManagedFields = {read=GetManagedFields};
#endif /* _WIN64 */
protected:
	/* TRttiType.Create */ inline __fastcall virtual TRttiRecordType(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P) : TRttiStructuredType(APackage, AParent, P) { }
	
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiRecordType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiProperty : public TRttiMember
{
	typedef TRttiMember inherited;
	
private:
	virtual TRttiType* __fastcall GetPropertyType() = 0 ;
	virtual bool __fastcall GetIsReadable() = 0 ;
	virtual bool __fastcall GetIsWritable() = 0 ;
	virtual TValue __fastcall DoGetValue(void * Instance) = 0 ;
	virtual void __fastcall DoSetValue(void * Instance, const TValue &AValue) = 0 ;
	
public:
	__property TRttiType* PropertyType = {read=GetPropertyType};
	TValue __fastcall GetValue(void * Instance);
	void __fastcall SetValue(void * Instance, const TValue &AValue);
	__property bool IsReadable = {read=GetIsReadable, nodefault};
	__property bool IsWritable = {read=GetIsWritable, nodefault};
protected:
	/* TRttiObject.Create */ inline __fastcall virtual TRttiProperty(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P) : TRttiMember(APackage, AParent, P) { }
	
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiProperty() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef TRecordTypeMethod *PRecordTypeMethod;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecordTypeMethod
{
public:
	System::Byte Flags;
	void *Code;
	System::Byte NameLen;
};
#pragma pack(pop)


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiInstanceProperty : public TRttiProperty
{
	typedef TRttiProperty inherited;
	
private:
	virtual int __fastcall GetDefault();
	virtual int __fastcall GetIndex();
	virtual short __fastcall GetNameIndex();
	virtual TRttiType* __fastcall GetPropertyType();
	virtual System::Typinfo::PPropInfo __fastcall GetPropInfo() = 0 ;
	virtual System::UnicodeString __fastcall GetName();
	virtual bool __fastcall GetIsReadable();
	virtual bool __fastcall GetIsWritable();
	virtual TValue __fastcall DoGetValue(void * Instance);
	virtual void __fastcall DoSetValue(void * Instance, const TValue &AValue);
	
public:
	virtual System::UnicodeString __fastcall ToString();
	virtual bool __fastcall HasName(const System::UnicodeString AName);
	__property TRttiType* PropertyType = {read=GetPropertyType};
	__property int Index = {read=GetIndex, nodefault};
	__property int Default = {read=GetDefault, nodefault};
	__property short NameIndex = {read=GetNameIndex, nodefault};
	__property System::Typinfo::PPropInfo PropInfo = {read=GetPropInfo};
protected:
	/* TRttiObject.Create */ inline __fastcall virtual TRttiInstanceProperty(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P) : TRttiProperty(APackage, AParent, P) { }
	
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiInstanceProperty() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiParameter : public TRttiNamedObject
{
	typedef TRttiNamedObject inherited;
	
private:
	virtual System::Typinfo::TParamFlags __fastcall GetFlags() = 0 ;
	virtual TRttiType* __fastcall GetParamType() = 0 ;
	
public:
	virtual System::UnicodeString __fastcall ToString();
	__property System::Typinfo::TParamFlags Flags = {read=GetFlags, nodefault};
	__property TRttiType* ParamType = {read=GetParamType};
protected:
	/* TRttiObject.Create */ inline __fastcall virtual TRttiParameter(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P) : TRttiNamedObject(APackage, AParent, P) { }
	
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiParameter() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TDispatchKind : unsigned char { dkStatic, dkVtable, dkDynamic, dkMessage, dkInterface };

__interface TMethodImplementationCallback  : public System::IInterface 
{
#ifndef _WIN64
	virtual void __fastcall Invoke(void * UserData, const System::DynamicArray<TValue> Args, /* out */ TValue &Result) = 0 ;
#else /* _WIN64 */
	virtual void __fastcall Invoke(void * UserData, const System::TArray__1<TValue> Args, /* out */ TValue &Result) = 0 ;
#endif /* _WIN64 */
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMethodImplementation : public System::TObject
{
	typedef System::TObject inherited;
	friend class DELPHICLASS TRttiMethod;
	friend class DELPHICLASS TRawVirtualClass;
	
	
private:
#ifndef _WIN64
	#pragma pack(push,8)
	struct DECLSPEC_DRECORD TFloatReg
#else /* _WIN64 */
	#pragma pack(push,1)
	struct DECLSPEC_DRECORD TFirstStageIntercept
#endif /* _WIN64 */
	{
#ifndef _WIN64
		
#endif /* not _WIN64 */
	public:
#ifndef _WIN64
		union
		{
			struct 
			{
				void *Unused1;
				void *Unused2;
				System::Word Unused3;
				System::Typinfo::TFloatType Kind;
			};
			struct 
			{
				System::CurrencyBase RegCurr;
			};
			struct 
			{
				System::CompBase RegComp;
			};
			struct 
			{
				System::Extended RegExtended;
			};
			struct 
			{
				double RegDouble;
			};
			struct 
			{
				float RegSingle;
			};
			
		};
#else /* _WIN64 */
		System::Byte MovRAX_48;
		System::Byte MovRAX_B8;
		void *SelfVal;
		System::Byte MovR10_49;
		System::Byte MovR10_BA;
		void *Target;
		System::Byte JmpR10_49;
		System::Byte JmpR10_FF;
		System::Byte JmpR10_E2;
#endif /* _WIN64 */
	};
	#pragma pack(pop)
	
	
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	struct DECLSPEC_DRECORD TInterceptFrame
	{
		
	private:
		struct DECLSPEC_DRECORD _TMethodImplementation_TInterceptFrame__1
		{
		};
		
		
		
	public:
#ifndef _WIN64
		TMethodImplementation::TFloatReg FP;
		void *RegEAX;
		void *RegEDX;
		void *RegECX;
		TMethodImplementation* Impl;
		void *PreviousFrame;
#else /* _WIN64 */
		void *RegXMM0;
		void *RegXMM1;
		void *RegXMM2;
		void *RegXMM3;
		void *PrevFrame;
#endif /* _WIN64 */
		void *RetAddr;
#ifdef _WIN64
		void *RegRCX;
		void *RegRDX;
		void *RegR8;
		void *RegR9;
#endif /* _WIN64 */
		_TMethodImplementation_TInterceptFrame__1 Args;
	};
#ifndef _WIN64
	#pragma pack(pop)
	
	
	#pragma pack(push,1)
	struct DECLSPEC_DRECORD TFirstStageIntercept
	{
	public:
		System::Byte PushEBP_55;
		System::Byte MovEBP_ESP_1_89;
		System::Byte MovEBP_ESP_2_E5;
		System::Byte Push_68;
		void *PushVal;
		System::Byte JmpRel_E9;
		int RelTarget;
	};
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
	typedef TInterceptFrame *PInterceptFrame;
	
	typedef TFirstStageIntercept *PFirstStageIntercept;
	
	class DELPHICLASS TRuntimeTypeInfos;
	class PASCALIMPLEMENTATION TRuntimeTypeInfos : public System::TObject
	{
		typedef System::TObject inherited;
		
		
	private:
		#pragma pack(push,1)
		struct DECLSPEC_DRECORD TOpenArrayTypeInfo
		{
		public:
			System::TTypeKind FKind;
			System::Byte FNameLen;
			System::StaticArray<System::Byte, 12> FName;
			int Size;
			int ElCount;
			System::Typinfo::PTypeInfo *ElType;
			System::Byte DimCount;
			System::StaticArray<System::Typinfo::PPTypeInfo, 1> Dims;
			System::Typinfo::TTypeInfo *FElType;
			System::Typinfo::TTypeInfo *FIndType;
		};
		#pragma pack(pop)
		
		
		
	private:
		static const System::Int8 CNameLen = System::Int8(0xc);
		
		static System::ShortString CNameTempl;
		
	private:
		System::Generics::Collections::TList__1<void *>* FList;
		
	public:
		__fastcall TRuntimeTypeInfos();
		__fastcall virtual ~TRuntimeTypeInfos();
		System::Typinfo::PTypeInfo __fastcall DefineOpenArray(System::Typinfo::PTypeInfo AElType, int AElCount)/* overload */;
		static bool __fastcall IsOpenArray(System::Typinfo::PTypeInfo ATypeInfo);
	};
	
	
	struct TParamLoc;
	typedef TParamLoc *PParamLoc;
	
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	struct DECLSPEC_DRECORD TParamLoc
	{
	public:
		System::Typinfo::TTypeInfo *FTypeInfo;
		bool FByRefParam;
		bool FConstant;
		bool FSetDefault;
		bool FOpenArray;
		int FOffset;
		__fastcall TParamLoc(System::Typinfo::PTypeInfo AType, bool AByRef, bool AConstant, bool ASetDefault, bool AOpenArray);
		__fastcall TParamLoc(System::Typinfo::PTypeInfo AType, bool AByRef);
		void * __fastcall GetArgLoc(TMethodImplementation::PInterceptFrame AFrame);
		void __fastcall GetArg(TMethodImplementation::PInterceptFrame AFrame, TValue &Value);
		void __fastcall GetOpenArrayArg(TMethodImplementation::PInterceptFrame AFrame, const TMethodImplementation::TParamLoc &AHighLoc, TValue &Value, TMethodImplementation::TRuntimeTypeInfos* &ATypeInfos);
		void __fastcall SetArg(TMethodImplementation::PInterceptFrame AFrame, const TValue &Value);
		TParamLoc() {}
	};
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
	class DELPHICLASS TInvokeInfo;
	class PASCALIMPLEMENTATION TInvokeInfo : public System::TObject
	{
		typedef System::TObject inherited;
		
	private:
#ifndef _WIN64
		bool FCallerPopsStack;
		System::Typinfo::TFloatType FResultFP;
#endif /* not _WIN64 */
		bool FHasSelf;
		int FStackSize;
#ifndef _WIN64
		System::DynamicArray<TMethodImplementation::TParamLoc> FParams;
#else /* _WIN64 */
		System::TArray__1<TMethodImplementation::TParamLoc> FParams;
#endif /* _WIN64 */
		TMethodImplementation::TParamLoc FResultLoc;
		System::Generics::Collections::TList__1<TMethodImplementation::TParamLoc>* FParamList;
		System::Typinfo::TTypeInfo *FReturnType;
		System::Typinfo::TCallConv FCallConv;
		TMethodImplementation::TRuntimeTypeInfos* FTypeInfos;
		void __fastcall SetReturnType(System::Typinfo::PTypeInfo Value);
		TMethodImplementation::TRuntimeTypeInfos* __fastcall GetTypeInfos();
		void __fastcall CheckNotSealed();
		void __fastcall Seal();
#ifndef _WIN64
		System::DynamicArray<TValue> __fastcall LoadArguments(TMethodImplementation::PInterceptFrame AFrame, TMethodImplementation::TRuntimeTypeInfos* &ATypeInfos);
		void __fastcall SaveArguments(TMethodImplementation::PInterceptFrame AFrame, const System::DynamicArray<TValue> Args, const TValue &Result);
#else /* _WIN64 */
		System::TArray__1<TValue> __fastcall LoadArguments(TMethodImplementation::PInterceptFrame AFrame, TMethodImplementation::TRuntimeTypeInfos* &ATypeInfos);
		void __fastcall SaveArguments(TMethodImplementation::PInterceptFrame AFrame, const System::TArray__1<TValue> Args, const TValue &Result);
#endif /* _WIN64 */
		
	public:
		__fastcall TInvokeInfo(System::Typinfo::TCallConv ACallConv, bool AHasSelf);
		__fastcall virtual ~TInvokeInfo();
#ifndef _WIN64
		System::DynamicArray<TMethodImplementation::TParamLoc> __fastcall GetParamLocs();
#else /* _WIN64 */
		System::TArray__1<TMethodImplementation::TParamLoc> __fastcall GetParamLocs();
#endif /* _WIN64 */
		void __fastcall AddParameter(System::Typinfo::PTypeInfo AType, bool AByRef, bool AConstant, bool ASetDefault, bool AOpenArray);
		__property TMethodImplementation::TRuntimeTypeInfos* TypeInfos = {read=GetTypeInfos};
		__property System::Typinfo::PTypeInfo ReturnType = {read=FReturnType, write=SetReturnType};
	};
	
	
	
private:
#ifndef _WIN64
	static const System::Int8 regEAX = System::Int8(-1);
#else /* _WIN64 */
	static const System::Int8 regRCX = System::Int8(-1);
#endif /* _WIN64 */
	
#ifndef _WIN64
	static const System::Int8 regEDX = System::Int8(-2);
#else /* _WIN64 */
	static const System::Int8 regRDX = System::Int8(-2);
#endif /* _WIN64 */
	
#ifndef _WIN64
	static const System::Int8 regECX = System::Int8(-3);
#else /* _WIN64 */
	static const System::Int8 regR8 = System::Int8(-3);
#endif /* _WIN64 */
	
#ifndef _WIN64
	static const System::Int8 regFloat = System::Int8(-4);
#else /* _WIN64 */
	static const System::Int8 regR9 = System::Int8(-4);
	
	static const System::Int8 regXMM0 = System::Int8(-5);
	
	static const System::Int8 regXMM1 = System::Int8(-6);
	
	static const System::Int8 regXMM2 = System::Int8(-7);
	
	static const System::Int8 regXMM3 = System::Int8(-8);
#endif /* _WIN64 */
	
	static const System::Int8 rsNone = System::Int8(0x0);
	
#ifndef _WIN64
	static const System::Int8 rsEAX = System::Int8(0x1);
#else /* _WIN64 */
	static const System::Int8 rsRCX = System::Int8(0x1);
#endif /* _WIN64 */
	
#ifndef _WIN64
	static const System::Int8 rsEDX = System::Int8(0x2);
#else /* _WIN64 */
	static const System::Int8 rsXMM0 = System::Int8(0x1);
#endif /* _WIN64 */
	
#ifndef _WIN64
	static const System::Int8 rsECX = System::Int8(0x4);
#else /* _WIN64 */
	static const System::Int8 rsRDX = System::Int8(0x2);
#endif /* _WIN64 */
	
#ifndef _WIN64
	static const System::Int8 rsAll = System::Int8(0x7);
#else /* _WIN64 */
	static const System::Int8 rsXMM1 = System::Int8(0x2);
	
	static const System::Int8 rsR8 = System::Int8(0x4);
	
	static const System::Int8 rsXMM2 = System::Int8(0x4);
	
	static const System::Int8 rsR9 = System::Int8(0x8);
	
	static const System::Int8 rsXMM3 = System::Int8(0x8);
	
	static const System::Int8 rsAll = System::Int8(0xf);
#endif /* _WIN64 */
	
	
private:
	TFirstStageIntercept *FStub;
	void *FUserData;
	_di_TMethodImplementationCallback FCallback;
	
protected:
	TInvokeInfo* FInvokeInfo;
	System::TObject* FSafeExcHandler;
	__fastcall TMethodImplementation(void * AUserData, TInvokeInfo* AInvokeInfo, const _di_TMethodImplementationCallback ACallback)/* overload */;
	void __fastcall Intercept(PInterceptFrame AFrame);
	void * __fastcall GetCodeAddress();
	
public:
	__fastcall TMethodImplementation()/* overload */;
	__fastcall virtual ~TMethodImplementation();
	__property void * CodeAddress = {read=GetCodeAddress};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiMethod : public TRttiMember
{
	typedef TRttiMember inherited;
	
private:
	TMethodImplementation::TInvokeInfo* FInvokeInfo;
	bool __fastcall GetIsConstructor();
	bool __fastcall GetIsDestructor();
	virtual System::Typinfo::TMethodKind __fastcall GetMethodKind() = 0 ;
	virtual System::Typinfo::TCallConv __fastcall GetCallingConvention() = 0 ;
	virtual TRttiType* __fastcall GetReturnType() = 0 ;
	virtual TDispatchKind __fastcall GetDispatchKind();
	virtual bool __fastcall GetHasExtendedInfo();
	virtual short __fastcall GetVirtualIndex();
	virtual void * __fastcall GetCodeAddress();
	virtual bool __fastcall GetIsClassMethod();
	virtual bool __fastcall GetIsStatic();
	virtual TValue __fastcall DispatchInvoke(const TValue &Instance, const TValue *Args, const int Args_High) = 0 ;
	TMethodImplementation::TInvokeInfo* __fastcall GetInvokeInfo();
	void __fastcall GetCommonInvokeParams(bool &isCons, bool &isDest, bool &isStat, bool &isClas, System::Typinfo::TCallConv &callConv);
	
public:
	__fastcall virtual ~TRttiMethod();
	TValue __fastcall Invoke(System::TObject* Instance, const TValue *Args, const int Args_High)/* overload */;
	TValue __fastcall Invoke(System::TClass Instance, const TValue *Args, const int Args_High)/* overload */;
	TValue __fastcall Invoke(const TValue &Instance, const TValue *Args, const int Args_High)/* overload */;
	TMethodImplementation* __fastcall CreateImplementation(void * AUserData, const _di_TMethodImplementationCallback ACallback);
#ifndef _WIN64
	virtual System::DynamicArray<TRttiParameter*> __fastcall GetParameters() = 0 ;
#else /* _WIN64 */
	virtual System::TArray__1<TRttiParameter*> __fastcall GetParameters() = 0 ;
#endif /* _WIN64 */
	virtual System::UnicodeString __fastcall ToString();
	__property TRttiType* ReturnType = {read=GetReturnType};
	__property bool HasExtendedInfo = {read=GetHasExtendedInfo, nodefault};
	__property System::Typinfo::TMethodKind MethodKind = {read=GetMethodKind, nodefault};
	__property TDispatchKind DispatchKind = {read=GetDispatchKind, nodefault};
	__property bool IsConstructor = {read=GetIsConstructor, nodefault};
	__property bool IsDestructor = {read=GetIsDestructor, nodefault};
	__property bool IsClassMethod = {read=GetIsClassMethod, nodefault};
	__property bool IsStatic = {read=GetIsStatic, nodefault};
	__property short VirtualIndex = {read=GetVirtualIndex, nodefault};
	__property System::Typinfo::TCallConv CallingConvention = {read=GetCallingConvention, nodefault};
	__property void * CodeAddress = {read=GetCodeAddress};
protected:
	/* TRttiObject.Create */ inline __fastcall virtual TRttiMethod(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P) : TRttiMember(APackage, AParent, P) { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiIndexedProperty : public TRttiMember
{
	typedef TRttiMember inherited;
	
private:
	TRttiMethod* FReadMethod;
	TRttiMethod* FWriteMethod;
	void __fastcall GetAccessors();
	TRttiType* __fastcall GetPropertyType();
	bool __fastcall GetIsReadable();
	bool __fastcall GetIsWritable();
	bool __fastcall GetIsDefault();
	TRttiMethod* __fastcall GetReadMethod();
	TRttiMethod* __fastcall GetWriteMethod();
	System::Typinfo::PArrayPropInfo __fastcall GetHandle();
	virtual System::UnicodeString __fastcall GetName();
	
protected:
	__fastcall virtual TRttiIndexedProperty(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P);
	
private:
	virtual System::Typinfo::TMemberVisibility __fastcall GetVisibility();
	
public:
	virtual bool __fastcall HasName(const System::UnicodeString AName);
	__property System::Typinfo::PArrayPropInfo Handle = {read=GetHandle};
	__property TRttiType* PropertyType = {read=GetPropertyType};
	__property TRttiMethod* ReadMethod = {read=GetReadMethod};
	__property TRttiMethod* WriteMethod = {read=GetWriteMethod};
	TValue __fastcall GetValue(void * Instance, const TValue *Args, const int Args_High);
	void __fastcall SetValue(void * Instance, const TValue *Args, const int Args_High, const TValue &Value);
	__property bool IsReadable = {read=GetIsReadable, nodefault};
	__property bool IsWritable = {read=GetIsWritable, nodefault};
	__property bool IsDefault = {read=GetIsDefault, nodefault};
	virtual System::UnicodeString __fastcall ToString();
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiIndexedProperty() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiInstanceType : public TRttiStructuredType
{
	typedef TRttiStructuredType inherited;
	
private:
#ifndef _WIN64
	System::DynamicArray<TRttiProperty*> FProps;
	System::DynamicArray<TRttiMethod*> FMeths;
#else /* _WIN64 */
	System::TArray__1<TRttiProperty*> FProps;
	System::TArray__1<TRttiMethod*> FMeths;
#endif /* _WIN64 */
	System::Word FVirtCount;
#ifndef _WIN64
	System::DynamicArray<TRttiIndexedProperty*> FIndexedProps;
#else /* _WIN64 */
	System::TArray__1<TRttiIndexedProperty*> FIndexedProps;
#endif /* _WIN64 */
	System::Typinfo::TVmtFieldClassTab *FClassTab;
	bool FReadPropData;
	bool FReadMethData;
	void __fastcall ReadPropData();
	void __fastcall ReadMethData();
	virtual TRttiType* __fastcall GetBaseType();
	TRttiInstanceType* __fastcall GetBaseTyped();
	System::TClass __fastcall GetMetaclassType();
	System::UnicodeString __fastcall GetDeclaringUnitName();
	int __fastcall GetVmtSize();
	
protected:
	__fastcall virtual TRttiInstanceType(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P);
	
public:
	__property TRttiInstanceType* BaseType = {read=GetBaseTyped};
	__property System::UnicodeString DeclaringUnitName = {read=GetDeclaringUnitName};
	__property System::TClass MetaclassType = {read=GetMetaclassType};
#ifndef _WIN64
	virtual System::DynamicArray<TRttiProperty*> __fastcall GetDeclaredProperties();
	virtual System::DynamicArray<TRttiMethod*> __fastcall GetDeclaredMethods();
	virtual System::DynamicArray<TRttiField*> __fastcall GetDeclaredFields();
	virtual System::DynamicArray<TRttiIndexedProperty*> __fastcall GetDeclaredIndexedProperties();
	System::DynamicArray<TRttiInterfaceType*> __fastcall GetDeclaredImplementedInterfaces();
	System::DynamicArray<TRttiInterfaceType*> __fastcall GetImplementedInterfaces();
	virtual System::DynamicArray<System::TCustomAttribute*> __fastcall GetAttributes();
#else /* _WIN64 */
	virtual System::TArray__1<TRttiProperty*> __fastcall GetDeclaredProperties();
	virtual System::TArray__1<TRttiMethod*> __fastcall GetDeclaredMethods();
	virtual System::TArray__1<TRttiField*> __fastcall GetDeclaredFields();
	virtual System::TArray__1<TRttiIndexedProperty*> __fastcall GetDeclaredIndexedProperties();
	System::TArray__1<TRttiInterfaceType*> __fastcall GetDeclaredImplementedInterfaces();
	System::TArray__1<TRttiInterfaceType*> __fastcall GetImplementedInterfaces();
	virtual System::TArray__1<System::TCustomAttribute*> __fastcall GetAttributes();
#endif /* _WIN64 */
	__property int VmtSize = {read=GetVmtSize, nodefault};
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiInstanceType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiInterfaceType : public TRttiStructuredType
{
	typedef TRttiStructuredType inherited;
	
private:
#ifndef _WIN64
	System::DynamicArray<TRttiMethod*> FMethods;
#else /* _WIN64 */
	System::TArray__1<TRttiMethod*> FMethods;
#endif /* _WIN64 */
	int FTotalMethodCount;
	
protected:
	__fastcall virtual TRttiInterfaceType(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P);
	
private:
	System::Typinfo::TIntfFlags __fastcall GetIntfFlags();
	System::UnicodeString __fastcall GetDeclaringUnitName();
	virtual TRttiType* __fastcall GetBaseType();
	TRttiInterfaceType* __fastcall GetBaseTyped();
	GUID __fastcall GetGUID();
	
public:
	__property TRttiInterfaceType* BaseType = {read=GetBaseTyped};
	__property GUID GUID = {read=GetGUID};
	__property System::Typinfo::TIntfFlags IntfFlags = {read=GetIntfFlags, nodefault};
	__property System::UnicodeString DeclaringUnitName = {read=GetDeclaringUnitName};
#ifndef _WIN64
	virtual System::DynamicArray<TRttiMethod*> __fastcall GetDeclaredMethods();
#else /* _WIN64 */
	virtual System::TArray__1<TRttiMethod*> __fastcall GetDeclaredMethods();
#endif /* _WIN64 */
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiInterfaceType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiOrdinalType : public TRttiType
{
	typedef TRttiType inherited;
	
private:
	virtual int __fastcall GetMaxValue();
	virtual int __fastcall GetMinValue();
	System::Typinfo::TOrdType __fastcall GetOrdType();
	
protected:
	__fastcall virtual TRttiOrdinalType(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P);
	virtual int __fastcall GetTypeSize();
	
public:
	__property System::Typinfo::TOrdType OrdType = {read=GetOrdType, nodefault};
	__property int MinValue = {read=GetMinValue, nodefault};
	__property int MaxValue = {read=GetMaxValue, nodefault};
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiOrdinalType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiInt64Type : public TRttiType
{
	typedef TRttiType inherited;
	
private:
	__int64 __fastcall GetMaxValue();
	__int64 __fastcall GetMinValue();
	
protected:
	__fastcall virtual TRttiInt64Type(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P);
	virtual int __fastcall GetTypeSize();
	
public:
	__property __int64 MinValue = {read=GetMinValue};
	__property __int64 MaxValue = {read=GetMaxValue};
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiInt64Type() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiInvokableType : public TRttiType
{
	typedef TRttiType inherited;
	
private:
	void *FProcSig;
	TRttiType* __fastcall GetReturnType();
	System::Typinfo::TCallConv __fastcall GetCallingConvention();
	
public:
	virtual TValue __fastcall Invoke(const TValue &ProcOrMeth, const TValue *Args, const int Args_High) = 0 ;
#ifndef _WIN64
	System::DynamicArray<TRttiParameter*> __fastcall GetParameters();
#else /* _WIN64 */
	System::TArray__1<TRttiParameter*> __fastcall GetParameters();
#endif /* _WIN64 */
	__property TRttiType* ReturnType = {read=GetReturnType};
	__property System::Typinfo::TCallConv CallingConvention = {read=GetCallingConvention, nodefault};
	virtual System::UnicodeString __fastcall ToString();
protected:
	/* TRttiType.Create */ inline __fastcall virtual TRttiInvokableType(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P) : TRttiType(APackage, AParent, P) { }
	
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiInvokableType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiMethodType : public TRttiInvokableType
{
	typedef TRttiInvokableType inherited;
	
private:
	System::Typinfo::TMethodKind __fastcall GetMethodKind();
	virtual int __fastcall GetTypeSize();
	
protected:
	__fastcall virtual TRttiMethodType(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P);
	
public:
	virtual TValue __fastcall Invoke(const TValue &Callable, const TValue *Args, const int Args_High);
	__property System::Typinfo::TMethodKind MethodKind = {read=GetMethodKind, nodefault};
	virtual System::UnicodeString __fastcall ToString();
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiMethodType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiProcedureType : public TRttiInvokableType
{
	typedef TRttiInvokableType inherited;
	
protected:
	__fastcall virtual TRttiProcedureType(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P);
	
public:
	virtual TValue __fastcall Invoke(const TValue &Callable, const TValue *Args, const int Args_High);
#ifndef _WIN64
	virtual System::DynamicArray<System::TCustomAttribute*> __fastcall GetAttributes();
#else /* _WIN64 */
	virtual System::TArray__1<System::TCustomAttribute*> __fastcall GetAttributes();
#endif /* _WIN64 */
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiProcedureType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiClassRefType : public TRttiType
{
	typedef TRttiType inherited;
	
private:
	TRttiInstanceType* __fastcall GetInstanceType();
	System::TClass __fastcall GetMetaclassType();
	
protected:
	__fastcall virtual TRttiClassRefType(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P);
	
public:
	__property TRttiInstanceType* InstanceType = {read=GetInstanceType};
	__property System::TClass MetaclassType = {read=GetMetaclassType};
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiClassRefType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiEnumerationType : public TRttiOrdinalType
{
	typedef TRttiOrdinalType inherited;
	
private:
	virtual int __fastcall GetMaxValue();
	virtual int __fastcall GetMinValue();
	TRttiType* __fastcall GetUnderlyingType();
	bool __fastcall HasEnumNameList();
	
protected:
	__fastcall virtual TRttiEnumerationType(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P);
	
public:
#ifndef _WIN64
	System::DynamicArray<System::UnicodeString> __fastcall GetNames();
#else /* _WIN64 */
	System::TArray__1<System::UnicodeString> __fastcall GetNames();
#endif /* _WIN64 */
	template<typename T> static System::UnicodeString __fastcall GetName(T AValue);
	template<typename T> static T __fastcall GetValue(const System::UnicodeString AName);
	__property TRttiType* UnderlyingType = {read=GetUnderlyingType};
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiEnumerationType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiSetType : public TRttiType
{
	typedef TRttiType inherited;
	
private:
	TRttiType* __fastcall GetElementType();
	virtual int __fastcall GetTypeSize();
	int __fastcall GetByteOffset();
	
protected:
	__fastcall virtual TRttiSetType(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P);
	
public:
	__property TRttiType* ElementType = {read=GetElementType};
	__property int ByteOffset = {read=GetByteOffset, nodefault};
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiSetType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TRttiStringKind : unsigned char { skShortString, skAnsiString, skWideString, skUnicodeString };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiStringType : public TRttiType
{
	typedef TRttiType inherited;
	
private:
	TRttiStringKind __fastcall GetStringKind();
	virtual int __fastcall GetTypeSize();
	
protected:
	__fastcall virtual TRttiStringType(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P);
	
public:
	__property TRttiStringKind StringKind = {read=GetStringKind, nodefault};
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiStringType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiAnsiStringType : public TRttiStringType
{
	typedef TRttiStringType inherited;
	
private:
	System::Word __fastcall GetCodePage();
	
public:
	__property System::Word CodePage = {read=GetCodePage, nodefault};
protected:
	/* TRttiStringType.Create */ inline __fastcall virtual TRttiAnsiStringType(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P) : TRttiStringType(APackage, AParent, P) { }
	
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiAnsiStringType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiFloatType : public TRttiType
{
	typedef TRttiType inherited;
	
private:
	System::Typinfo::TFloatType __fastcall GetFloatType();
	virtual int __fastcall GetTypeSize();
	
protected:
	__fastcall virtual TRttiFloatType(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P);
	
public:
	__property System::Typinfo::TFloatType FloatType = {read=GetFloatType, nodefault};
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiFloatType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiArrayType : public TRttiType
{
	typedef TRttiType inherited;
	
private:
	virtual int __fastcall GetTypeSize();
	int __fastcall GetTotalElementCount();
	TRttiType* __fastcall GetElementType();
	int __fastcall GetDimensionCount();
	TRttiType* __fastcall GetDimension(int Index);
	
protected:
	__fastcall virtual TRttiArrayType(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P);
	
public:
	__property int TotalElementCount = {read=GetTotalElementCount, nodefault};
	__property TRttiType* ElementType = {read=GetElementType};
	__property int DimensionCount = {read=GetDimensionCount, nodefault};
	__property TRttiType* Dimensions[int Index] = {read=GetDimension};
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiArrayType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiDynamicArrayType : public TRttiType
{
	typedef TRttiType inherited;
	
private:
	System::UnicodeString __fastcall GetDeclaringUnitName();
	int __fastcall GetElementSize();
	TRttiType* __fastcall GetElementType();
	System::Word __fastcall GetOleAutoVarType();
	
protected:
	__fastcall virtual TRttiDynamicArrayType(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P);
	
public:
	__property int ElementSize = {read=GetElementSize, nodefault};
	__property TRttiType* ElementType = {read=GetElementType};
	__property System::Word OleAutoVarType = {read=GetOleAutoVarType, nodefault};
	__property System::UnicodeString DeclaringUnitName = {read=GetDeclaringUnitName};
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiDynamicArrayType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiPointerType : public TRttiType
{
	typedef TRttiType inherited;
	
private:
	TRttiType* __fastcall GetReferredType();
	
public:
	__property TRttiType* ReferredType = {read=GetReferredType};
#ifndef _WIN64
	virtual System::DynamicArray<System::TCustomAttribute*> __fastcall GetAttributes();
#else /* _WIN64 */
	virtual System::TArray__1<System::TCustomAttribute*> __fastcall GetAttributes();
#endif /* _WIN64 */
protected:
	/* TRttiType.Create */ inline __fastcall virtual TRttiPointerType(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P) : TRttiType(APackage, AParent, P) { }
	
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiPointerType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRttiPackage : public TRttiNamedObject
{
	typedef TRttiNamedObject inherited;
	
private:
	System::TObject* FLock;
	System::Generics::Collections::TDictionary__2<void *,TRttiObject*>* FHandleToObject;
	void *FBaseAddress;
	TRttiObject* __fastcall ReadObject(TRttiClass ARttiClass, TRttiObject* AParent, System::PByte &P);
	TRttiObject* __fastcall ReadObjectPointer(TRttiClass ARttiClass, TRttiObject* AParent, void * P);
	virtual System::UnicodeString __fastcall GetNameFromType(TRttiType* AType);
	NativeUInt __fastcall GetHandle();
	
public:
	__fastcall virtual ~TRttiPackage();
#ifndef _WIN64
	__property NativeUInt Handle = {read=GetHandle, nodefault};
#else /* _WIN64 */
	__property NativeUInt Handle = {read=GetHandle};
#endif /* _WIN64 */
	__property void * BaseAddress = {read=FBaseAddress};
#ifndef _WIN64
	virtual System::DynamicArray<TRttiType*> __fastcall GetTypes() = 0 ;
#else /* _WIN64 */
	virtual System::TArray__1<TRttiType*> __fastcall GetTypes() = 0 ;
#endif /* _WIN64 */
	virtual TRttiType* __fastcall FindType(const System::UnicodeString AQualifiedName) = 0 ;
protected:
	/* TRttiObject.Create */ inline __fastcall virtual TRttiPackage(TRttiPackage* APackage, TRttiObject* AParent, System::PByte &P) : TRttiNamedObject(APackage, AParent, P) { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TRttiContext
{
private:
	System::_di_IInterface FContextToken;
	
public:
	static TRttiContext __fastcall Create();
	void __fastcall Free();
	static void __fastcall KeepContext();
	static void __fastcall DropContext();
	TRttiType* __fastcall GetType(void * ATypeInfo)/* overload */;
	TRttiType* __fastcall GetType(System::TClass AClass)/* overload */;
#ifndef _WIN64
	System::DynamicArray<TRttiType*> __fastcall GetTypes();
#else /* _WIN64 */
	System::TArray__1<TRttiType*> __fastcall GetTypes();
#endif /* _WIN64 */
	TRttiType* __fastcall FindType(const System::UnicodeString AQualifiedName);
#ifndef _WIN64
	System::DynamicArray<TRttiPackage*> __fastcall GetPackages();
#else /* _WIN64 */
	System::TArray__1<TRttiPackage*> __fastcall GetPackages();
#endif /* _WIN64 */
};


__interface TInterceptBeforeNotify  : public System::IInterface 
{
#ifndef _WIN64
	virtual void __fastcall Invoke(System::TObject* Instance, TRttiMethod* Method, const System::DynamicArray<TValue> Args, /* out */ bool &DoInvoke, /* out */ TValue &Result) = 0 ;
#else /* _WIN64 */
	virtual void __fastcall Invoke(System::TObject* Instance, TRttiMethod* Method, const System::TArray__1<TValue> Args, /* out */ bool &DoInvoke, /* out */ TValue &Result) = 0 ;
#endif /* _WIN64 */
};

__interface TInterceptAfterNotify  : public System::IInterface 
{
#ifndef _WIN64
	virtual void __fastcall Invoke(System::TObject* Instance, TRttiMethod* Method, const System::DynamicArray<TValue> Args, TValue &Result) = 0 ;
#else /* _WIN64 */
	virtual void __fastcall Invoke(System::TObject* Instance, TRttiMethod* Method, const System::TArray__1<TValue> Args, TValue &Result) = 0 ;
#endif /* _WIN64 */
};

__interface TInterceptExceptionNotify  : public System::IInterface 
{
#ifndef _WIN64
	virtual void __fastcall Invoke(System::TObject* Instance, TRttiMethod* Method, const System::DynamicArray<TValue> Args, /* out */ bool &RaiseException, System::Sysutils::Exception* TheException, /* out */ TValue &Result) = 0 ;
#else /* _WIN64 */
	virtual void __fastcall Invoke(System::TObject* Instance, TRttiMethod* Method, const System::TArray__1<TValue> Args, /* out */ bool &RaiseException, System::Sysutils::Exception* TheException, /* out */ TValue &Result) = 0 ;
#endif /* _WIN64 */
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TVirtualMethodInterceptor : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	enum DECLSPEC_DENUM TExtraMethodInfo : unsigned char { eiNormal, eiObjAddRef, eiObjRelease, eiFreeInstance };
	
	class DELPHICLASS TInterceptInfo;
	class PASCALIMPLEMENTATION TInterceptInfo : public System::TObject
	{
		typedef System::TObject inherited;
		
	private:
		TVirtualMethodInterceptor::TExtraMethodInfo FExtraMethodInfo;
		TMethodImplementation* FImpl;
		void *FOriginalCode;
		void *FProxyCode;
		TRttiMethod* FMethod;
		
	public:
		__fastcall TInterceptInfo(void * AOriginalCode, TRttiMethod* AMethod, const _di_TMethodImplementationCallback ACallback, const TVirtualMethodInterceptor::TExtraMethodInfo ExtraMethodInfo);
		__fastcall virtual ~TInterceptInfo();
		__property TVirtualMethodInterceptor::TExtraMethodInfo ExtraMethodInfo = {read=FExtraMethodInfo, nodefault};
		__property void * OriginalCode = {read=FOriginalCode};
		__property void * ProxyCode = {read=FProxyCode};
		__property TRttiMethod* Method = {read=FMethod};
	};
	
	
	
private:
	TRttiContext FContext;
	System::TClass FOriginalClass;
	System::TClass FProxyClass;
	void *FProxyClassData;
	System::Generics::Collections::TObjectList__1<TInterceptInfo*>* FIntercepts;
	_di_TMethodImplementationCallback FImplementationCallback;
	_di_TInterceptBeforeNotify FOnBefore;
	_di_TInterceptAfterNotify FOnAfter;
	_di_TInterceptExceptionNotify FOnException;
	void __fastcall CreateProxyClass();
#ifndef _WIN64
	void __fastcall RawCallback(void * UserData, const System::DynamicArray<TValue> Args, /* out */ TValue &Result);
#else /* _WIN64 */
	void __fastcall RawCallback(void * UserData, const System::TArray__1<TValue> Args, /* out */ TValue &Result);
#endif /* _WIN64 */
	
protected:
#ifndef _WIN64
	void __fastcall DoBefore(System::TObject* Instance, TRttiMethod* Method, const System::DynamicArray<TValue> Args, /* out */ bool &DoInvoke, /* out */ TValue &Result);
	void __fastcall DoAfter(System::TObject* Instance, TRttiMethod* Method, const System::DynamicArray<TValue> Args, TValue &Result);
	void __fastcall DoException(System::TObject* Instance, TRttiMethod* Method, const System::DynamicArray<TValue> Args, /* out */ bool &RaiseException, System::Sysutils::Exception* TheException, /* out */ TValue &Result);
#else /* _WIN64 */
	void __fastcall DoBefore(System::TObject* Instance, TRttiMethod* Method, const System::TArray__1<TValue> Args, /* out */ bool &DoInvoke, /* out */ TValue &Result);
	void __fastcall DoAfter(System::TObject* Instance, TRttiMethod* Method, const System::TArray__1<TValue> Args, TValue &Result);
	void __fastcall DoException(System::TObject* Instance, TRttiMethod* Method, const System::TArray__1<TValue> Args, /* out */ bool &RaiseException, System::Sysutils::Exception* TheException, /* out */ TValue &Result);
#endif /* _WIN64 */
	
public:
	__fastcall TVirtualMethodInterceptor(System::TClass AClass);
	__fastcall virtual ~TVirtualMethodInterceptor();
	void __fastcall Proxify(System::TObject* AInstance);
	void __fastcall Unproxify(System::TObject* AInstance);
	__property System::TClass OriginalClass = {read=FOriginalClass};
	__property System::TClass ProxyClass = {read=FProxyClass};
	__property _di_TInterceptBeforeNotify OnBefore = {read=FOnBefore, write=FOnBefore};
	__property _di_TInterceptAfterNotify OnAfter = {read=FOnAfter, write=FOnAfter};
	__property _di_TInterceptExceptionNotify OnException = {read=FOnException, write=FOnException};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRawVirtualClass : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
	
public:
	class DELPHICLASS TVTable;
	class PASCALIMPLEMENTATION TVTable : public System::TObject
	{
		typedef System::TObject inherited;
		
	public:
		static const System::Int8 RESERVED_VTABLE_SLOTS = System::Int8(0x3);
		
		
	private:
#ifndef _WIN64
		System::DynamicArray<void *> FVTable;
		System::DynamicArray<void *> FInterceptors;
		System::DynamicArray<void *> __fastcall GetVTable();
#else /* _WIN64 */
		System::TArray__1<void *> FVTable;
		System::TArray__1<void *> FInterceptors;
		System::TArray__1<void *> __fastcall GetVTable();
#endif /* _WIN64 */
		
	protected:
		__fastcall TVTable(int MethodCount);
		
	public:
		__fastcall virtual ~TVTable();
		void __fastcall SetVTableSlot(int Idx, void * Proc, void * Context)/* overload */;
		void __fastcall SetVTableSlot(int Idx, void * Proc)/* overload */;
#ifndef _WIN64
		__property System::DynamicArray<void *> VTable = {read=GetVTable};
#else /* _WIN64 */
		__property System::TArray__1<void *> VTable = {read=GetVTable};
#endif /* _WIN64 */
		static void * __fastcall AllocateRawThunk(void * Proc, void * Context, int BytesToPop);
		static void __fastcall FreeRawThunk(void * Thunk);
	};
	
	
	
private:
	#pragma pack(push,1)
	struct DECLSPEC_DRECORD BoundInterface
	{
	public:
		void *Obj;
#ifndef _WIN64
		System::DynamicArray<void *> VTable;
#else /* _WIN64 */
		System::TArray__1<void *> VTable;
#endif /* _WIN64 */
	};
	#pragma pack(pop)
	
	
	typedef BoundInterface *PBoundInterface;
	
	
private:
	BoundInterface FVTable;
#ifndef _WIN64
	System::DynamicArray<GUID> FIIDs;
#else /* _WIN64 */
	System::TArray__1<GUID> FIIDs;
#endif /* _WIN64 */
	int __stdcall _AddRefFromIntf();
	int __stdcall _ReleaseFromIntf();
	HRESULT __stdcall _QIFromIntf(const GUID &IID, /* out */ void *Obj);
	
public:
	HIDESBASE virtual HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	void * __fastcall FindInterface(const GUID &IID);
#ifndef _WIN64
	__fastcall TRawVirtualClass(System::DynamicArray<GUID> Guids, TVTable* VTable)/* overload */;
#else /* _WIN64 */
	__fastcall TRawVirtualClass(System::TArray__1<GUID> Guids, TVTable* VTable)/* overload */;
#endif /* _WIN64 */
	__fastcall virtual ~TRawVirtualClass();
	static TRawVirtualClass* __fastcall GetInstanceFromInterface(void * Intf);
private:
	void *__IInterface;	// System::IInterface 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IInterface; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface TVirtualInterfaceInvokeEvent  : public System::IInterface 
{
#ifndef _WIN64
	virtual void __fastcall Invoke(TRttiMethod* Method, const System::DynamicArray<TValue> Args, /* out */ TValue &Result) = 0 ;
#else /* _WIN64 */
	virtual void __fastcall Invoke(TRttiMethod* Method, const System::TArray__1<TValue> Args, /* out */ TValue &Result) = 0 ;
#endif /* _WIN64 */
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TVirtualInterface : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
	
private:
	class DELPHICLASS TImplInfo;
	class PASCALIMPLEMENTATION TImplInfo : public System::TObject
	{
		typedef System::TObject inherited;
		
	private:
		TMethodImplementation* FImpl;
		TRttiMethod* FMethod;
		void * __fastcall GetCodeAddress();
		short __fastcall GetVirtualIndex();
		
	public:
		__fastcall TImplInfo(TRttiMethod* AMethod, const _di_TMethodImplementationCallback ACallback);
		__fastcall virtual ~TImplInfo();
		__property void * CodeAddress = {read=GetCodeAddress};
		__property short VirtualIndex = {read=GetVirtualIndex, nodefault};
	};
	
	
	
private:
	void * *VTable;
	GUID FIID;
	TRttiContext FContext;
	System::Generics::Collections::TObjectList__1<TImplInfo*>* FIntercepts;
	_di_TVirtualInterfaceInvokeEvent FOnInvoke;
	int __stdcall _AddRefFromIntf();
	int __stdcall _ReleaseFromIntf();
	HRESULT __stdcall _QIFromIntf(const GUID &IID, /* out */ void *Obj);
#ifndef _WIN64
	virtual void __fastcall RawCallback(void * UserData, const System::DynamicArray<TValue> Args, /* out */ TValue &Result);
#else /* _WIN64 */
	virtual void __fastcall RawCallback(void * UserData, const System::TArray__1<TValue> Args, /* out */ TValue &Result);
#endif /* _WIN64 */
	void __fastcall ErrorProc();
	
protected:
	HIDESBASE virtual int __stdcall _AddRef();
	HIDESBASE virtual int __stdcall _Release();
	
public:
	HIDESBASE virtual HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	__fastcall TVirtualInterface(System::Typinfo::PTypeInfo PIID)/* overload */;
	__fastcall TVirtualInterface(System::Typinfo::PTypeInfo PIID, _di_TVirtualInterfaceInvokeEvent InvokeEvent)/* overload */;
	__fastcall virtual ~TVirtualInterface();
	__property _di_TVirtualInterfaceInvokeEvent OnInvoke = {read=FOnInvoke, write=FOnInvoke};
private:
	void *__IInterface;	// System::IInterface 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IInterface; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface TGetArrayValueFunc  : public System::IInterface 
{
	virtual TValue __fastcall Invoke(TRttiType* AArrType) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall IsBoolType(System::Typinfo::PTypeInfo ATypeInfo);
extern DELPHI_PACKAGE bool __fastcall IsManaged(System::Typinfo::PTypeInfo TypeInfo);
#ifndef _WIN64
extern DELPHI_PACKAGE System::DynamicArray<TValue> __fastcall ArrayOfConstToTValueArray(const System::TVarRec *Params, const int Params_High);
extern DELPHI_PACKAGE System::DynamicArray<System::TVarRec> __fastcall TValueArrayToArrayOfConst(const TValue *Params, const int Params_High);
extern DELPHI_PACKAGE TValue __fastcall GetArrayValueFromTListHelperValue(const TRttiContext ACtx, const TValue &AListHelperValue, /* out */ int &ACount);
extern DELPHI_PACKAGE void __fastcall SetTListHelperValueFromArrayValue(const TRttiContext ACtx, TValue &AListHelperValue, const _di_TGetArrayValueFunc AGetArrValFunc);
extern DELPHI_PACKAGE TValue __fastcall Invoke(void * CodeAddress, const System::DynamicArray<TValue> Args, System::Typinfo::TCallConv CallingConvention, System::Typinfo::PTypeInfo AResultType, bool IsStatic = false, bool IsConstructor = false);
#else /* _WIN64 */
extern DELPHI_PACKAGE System::TArray__1<TValue> __fastcall ArrayOfConstToTValueArray(const System::TVarRec *Params, const int Params_High);
extern DELPHI_PACKAGE System::TArray__1<System::TVarRec> __fastcall TValueArrayToArrayOfConst(const TValue *Params, const int Params_High);
extern DELPHI_PACKAGE TValue __fastcall GetArrayValueFromTListHelperValue(const TRttiContext &ACtx, const TValue &AListHelperValue, /* out */ int &ACount);
extern DELPHI_PACKAGE void __fastcall SetTListHelperValueFromArrayValue(const TRttiContext &ACtx, TValue &AListHelperValue, const _di_TGetArrayValueFunc AGetArrValFunc);
extern DELPHI_PACKAGE TValue __fastcall Invoke(void * CodeAddress, const System::TArray__1<TValue> Args, System::Typinfo::TCallConv CallingConvention, System::Typinfo::PTypeInfo AResultType, bool IsStatic = false, bool IsConstructor = false);
#endif /* _WIN64 */
}	/* namespace Rtti */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_RTTI)
using namespace System::Rtti;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif

//-- user supplied -----------------------------------------------------------
#include <SystemRtti.h>

#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_RttiHPP
