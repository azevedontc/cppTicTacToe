// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.TypInfo.pas' rev: 35.00 (Windows)

#ifndef System_TypinfoHPP
#define System_TypinfoHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Variants.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------
namespace System
{
namespace Typinfo
{
#if defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) || defined(NO_USING_NAMESPACE_SYSTEM_TYPINFO)
  static const System::TTypeKind tkUnknown = System::TTypeKind::tkUnknown;
  static const System::TTypeKind tkInteger = System::TTypeKind::tkInteger;
  static const System::TTypeKind tkChar = System::TTypeKind::tkChar;
  static const System::TTypeKind tkEnumeration = System::TTypeKind::tkEnumeration;
  static const System::TTypeKind tkFloat = System::TTypeKind::tkFloat;
  static const System::TTypeKind tkString = System::TTypeKind::tkString;
  static const System::TTypeKind tkSet = System::TTypeKind::tkSet;
  static const System::TTypeKind tkClass = System::TTypeKind::tkClass;
  static const System::TTypeKind tkMethod = System::TTypeKind::tkMethod;
  static const System::TTypeKind tkWChar = System::TTypeKind::tkWChar;
  static const System::TTypeKind tkLString = System::TTypeKind::tkLString;
  static const System::TTypeKind tkWString = System::TTypeKind::tkWString;
  static const System::TTypeKind tkVariant = System::TTypeKind::tkVariant;
  static const System::TTypeKind tkArray = System::TTypeKind::tkArray;
  static const System::TTypeKind tkRecord = System::TTypeKind::tkRecord;
  static const System::TTypeKind tkInterface = System::TTypeKind::tkInterface;
  static const System::TTypeKind tkInt64 = System::TTypeKind::tkInt64;
  static const System::TTypeKind tkDynArray = System::TTypeKind::tkDynArray;
  static const System::TTypeKind tkUString = System::TTypeKind::tkUString;
  static const System::TTypeKind tkClassRef = System::TTypeKind::tkClassRef;
  static const System::TTypeKind tkPointer = System::TTypeKind::tkPointer;
  static const System::TTypeKind tkProcedure = System::TTypeKind::tkProcedure;
#endif
}	/* namespace Typinfo */
}	/* namespace System */
namespace System
{
namespace Typinfo
{
  enum DECLSPEC_DENUM TParamFlag : unsigned char {
    pfVar, pfConst, pfArray, pfAddress, pfReference, pfOut, pfResult
  };
  enum DECLSPEC_DENUM TIntfFlag : unsigned char {ifHasGuid, ifDispInterface, ifDispatch, ifHasRtti, ifUnused1, ifUnused2, ifMethRef, ifUnused3};
  typedef SetBase<TParamFlag, pfVar, pfResult> TParamFlagsBase;
  typedef SetBase<TIntfFlag, ifHasGuid, ifUnused3> TIntfFlagsBase;
}	/* namespace Typinfo */
}	/* namespace System */
namespace System
{
namespace Typinfo
{
typedef System::ShortString TSymbolName;
typedef System::ShortStringBase TSymbolNameBase;
}	/* namespace Typinfo */
}	/* namespace System */

namespace System
{
namespace Typinfo
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TPublishableVariantType;
struct TTypeInfoFieldAccessor;
struct TTypeInfo;
struct TAttrEntry;
struct TAttrData;
struct TFieldExEntry;
struct TVmtFieldEntry;
struct TVmtFieldClassTab;
struct TVmtFieldTable;
struct TVmtMethodParam;
struct TVmtMethodEntry;
struct TVmtMethodEntryTail;
struct TVmtMethodExEntry;
struct TVmtMethodTable;
struct TArrayPropInfo;
struct TManagedField;
struct TProcedureParam;
struct TProcedureSignature;
struct TIntfMethodTable;
struct TIntfMethodEntry;
struct TIntfMethodEntryTail;
struct TIntfMethodParam;
struct TIntfMethodParamTail;
struct TArrayTypeData;
struct TRecordTypeField;
struct TRecordTypeMethod;
struct TTypeData;
struct TPropData;
struct TPropInfo;
struct TPropDataEx;
struct TPropInfoEx;
class DELPHICLASS EPropertyError;
class DELPHICLASS EPropertyConvertError;
//-- type declarations -------------------------------------------------------
using System::TTypeKind;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPublishableVariantType : public System::Variants::TInvokeableVariantType
{
	typedef System::Variants::TInvokeableVariantType inherited;
	
protected:
	virtual System::TObject* __fastcall GetInstance(const TVarData &V) = 0 ;
	
public:
	virtual bool __fastcall GetProperty(TVarData &Dest, const TVarData &V, const System::UnicodeString Name);
	virtual bool __fastcall SetProperty(const TVarData &V, const System::UnicodeString Name, const TVarData &Value);
public:
	/* TCustomVariantType.Create */ inline __fastcall TPublishableVariantType()/* overload */ : System::Variants::TInvokeableVariantType() { }
	/* TCustomVariantType.Create */ inline __fastcall TPublishableVariantType(System::Word RequestedVarType)/* overload */ : System::Variants::TInvokeableVariantType(RequestedVarType) { }
	/* TCustomVariantType.Destroy */ inline __fastcall virtual ~TPublishableVariantType() { }
	
private:
	void *__IVarInstanceReference;	// System::Variants::IVarInstanceReference 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {5C176802-3F89-428D-850E-9F54F50C2293}
	operator System::Variants::_di_IVarInstanceReference()
	{
		System::Variants::_di_IVarInstanceReference intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::Variants::IVarInstanceReference*(void) { return (System::Variants::IVarInstanceReference*)&__IVarInstanceReference; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef System::Set<System::TTypeKind, System::TTypeKind::tkUnknown, System::TTypeKind::tkMRecord> TTypeKinds;

enum DECLSPEC_DENUM TOrdType : unsigned char { otSByte, otUByte, otSWord, otUWord, otSLong, otULong };

enum DECLSPEC_DENUM TFloatType : unsigned char { ftSingle, ftDouble, ftExtended, ftComp, ftCurr };

enum DECLSPEC_DENUM TMemberVisibility : unsigned char { mvPrivate, mvProtected, mvPublic, mvPublished };

enum DECLSPEC_DENUM TMethodKind : unsigned char { mkProcedure, mkFunction, mkConstructor, mkDestructor, mkClassProcedure, mkClassFunction, mkClassConstructor, mkClassDestructor, mkOperatorOverload, mkSafeProcedure, mkSafeFunction };

typedef System::Set<TParamFlag, TParamFlag::pfVar, TParamFlag::pfResult> TParamFlags;

typedef System::Set<TIntfFlag, TIntfFlag::ifHasGuid, TIntfFlag::ifUnused3> TIntfFlags;

struct DECLSPEC_DRECORD TTypeInfoFieldAccessor
{
private:
	System::Byte *FData;
	
public:
	void __fastcall SetData(const System::PByte Data);
#ifndef _WIN64
	static bool __fastcall _op_Equality(const TTypeInfoFieldAccessor Left, const TTypeInfoFieldAccessor Right);
#else /* _WIN64 */
	static bool __fastcall _op_Equality(const TTypeInfoFieldAccessor &Left, const TTypeInfoFieldAccessor &Right);
#endif /* _WIN64 */
	int __fastcall UTF8Length();
	System::UnicodeString __fastcall ToString();
	bool __fastcall HasName(const System::UnicodeString AName);
	System::ShortString __fastcall ToShortUTF8String();
#ifndef _WIN64
	System::DynamicArray<System::Byte> __fastcall ToByteArray();
#else /* _WIN64 */
	System::TArray__1<System::Byte> __fastcall ToByteArray();
#endif /* _WIN64 */
	System::PByte __fastcall Tail();
	
#ifndef _WIN64
	friend bool operator ==(const TTypeInfoFieldAccessor Left, const TTypeInfoFieldAccessor Right) { return TTypeInfoFieldAccessor::_op_Equality(Left, Right); }
#else /* _WIN64 */
	friend bool operator ==(const TTypeInfoFieldAccessor &Left, const TTypeInfoFieldAccessor &Right) { return TTypeInfoFieldAccessor::_op_Equality(Left, Right); }
#endif /* _WIN64 */
};


enum DECLSPEC_DENUM TCallConv : unsigned char { ccReg, ccCdecl, ccPascal, ccStdCall, ccSafeCall };

enum DECLSPEC_DENUM TConstRecordArgMode : unsigned char { rmUnknown, rmByValueStack, rmByValueReg, rmByRef };

typedef TAttrData *PAttrData;

typedef TVmtMethodEntryTail *PVmtMethodEntryTail;

typedef TIntfMethodEntryTail *PIntfMethodEntryTail;

typedef TTypeData *PTypeData;

typedef TPropData *PPropData;

typedef TPropDataEx *PPropDataEx;

typedef TTypeInfo *PTypeInfo;

typedef PTypeInfo *PPTypeInfo;

struct DECLSPEC_DRECORD TTypeInfo
{
public:
	System::TTypeKind Kind;
	TSymbolName Name;
	TTypeInfoFieldAccessor __fastcall NameFld();
	PTypeData __fastcall TypeData();
};


typedef TAttrEntry *PAttrEntry;

struct DECLSPEC_DRECORD TAttrEntry
{
public:
	PTypeInfo *AttrType;
	void *AttrCtor;
	System::Word ArgLen;
	System::StaticArray<System::Byte, 65536> ArgData;
};


struct DECLSPEC_DRECORD TAttrData
{
public:
	System::Word Len;
};


typedef TFieldExEntry *PFieldExEntry;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TFieldExEntry
{
public:
	System::Byte Flags;
	PTypeInfo *TypeRef;
	unsigned Offset;
	TSymbolName Name;
	TTypeInfoFieldAccessor __fastcall NameFld();
	PAttrData __fastcall AttrData();
};
#pragma pack(pop)


typedef TVmtFieldEntry *PVmtFieldEntry;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TVmtFieldEntry
{
public:
	unsigned FieldOffset;
	System::Word TypeIndex;
	TSymbolName Name;
	TTypeInfoFieldAccessor __fastcall NameFld();
	PAttrData __fastcall AttrData();
};
#pragma pack(pop)


typedef TVmtFieldClassTab *PVmtFieldClassTab;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TVmtFieldClassTab
{
public:
	System::Word Count;
	System::StaticArray<System::TClass*, 65536> ClassRef;
};
#pragma pack(pop)


typedef TVmtFieldTable *PVmtFieldTable;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TVmtFieldTable
{
public:
	System::Word Count;
	TVmtFieldClassTab *ClassTab;
};
#pragma pack(pop)


typedef TVmtMethodParam *PVmtMethodParam;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TVmtMethodParam
{
public:
	System::Byte Flags;
	PTypeInfo *ParamType;
	System::Byte ParOff;
	TSymbolName Name;
	TTypeInfoFieldAccessor __fastcall NameFld();
	PAttrData __fastcall AttrData();
};
#pragma pack(pop)


typedef TVmtMethodEntry *PVmtMethodEntry;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TVmtMethodEntry
{
public:
	System::Word Len;
	void *CodeAddress;
	TSymbolName Name;
	TTypeInfoFieldAccessor __fastcall NameFld();
	PVmtMethodEntryTail __fastcall Tail();
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TVmtMethodEntryTail
{
public:
	System::Byte Version;
	TCallConv CC;
	PTypeInfo *ResultType;
	System::Word ParOff;
	System::Byte ParamCount;
};
#pragma pack(pop)


typedef TVmtMethodExEntry *PVmtMethodExEntry;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TVmtMethodExEntry
{
public:
	TVmtMethodEntry *Entry;
	System::Word Flags;
	short VirtualIndex;
};
#pragma pack(pop)


typedef TVmtMethodTable *PVmtMethodTable;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TVmtMethodTable
{
public:
	System::Word Count;
};
#pragma pack(pop)


typedef TArrayPropInfo *PArrayPropInfo;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TArrayPropInfo
{
public:
	System::Byte Flags;
	System::Word ReadIndex;
	System::Word WriteIndex;
	TSymbolName Name;
	TTypeInfoFieldAccessor __fastcall NameFld();
	PAttrData __fastcall AttrData();
};
#pragma pack(pop)


typedef TManagedField *PManagedField;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TManagedField
{
public:
	PTypeInfo *TypeRef;
	NativeInt FldOffset;
};
#pragma pack(pop)


typedef TProcedureParam *PProcedureParam;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TProcedureParam
{
public:
	System::Byte Flags;
	PTypeInfo *ParamType;
	TSymbolName Name;
	TTypeInfoFieldAccessor __fastcall NameFld();
	PAttrData __fastcall AttrData();
};
#pragma pack(pop)


typedef TProcedureSignature *PProcedureSignature;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TProcedureSignature
{
public:
	System::Byte Flags;
	TCallConv CC;
	PTypeInfo *ResultType;
	System::Byte ParamCount;
};
#pragma pack(pop)


typedef TIntfMethodTable *PIntfMethodTable;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIntfMethodTable
{
public:
	System::Word Count;
	System::Word RttiCount;
};
#pragma pack(pop)


typedef TIntfMethodEntry *PIntfMethodEntry;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIntfMethodEntry
{
public:
	TSymbolName Name;
	TTypeInfoFieldAccessor __fastcall NameFld();
	PIntfMethodEntryTail __fastcall Tail();
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TIntfMethodEntryTail
{
public:
	System::Byte Kind;
	TCallConv CC;
	System::Byte ParamCount;
};
#pragma pack(pop)


typedef TIntfMethodParam *PIntfMethodParam;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIntfMethodParam
{
public:
	System::Byte Flags;
	TSymbolName ParamName;
	TTypeInfoFieldAccessor __fastcall ParamNameFld();
};
#pragma pack(pop)


typedef TIntfMethodParamTail *PIntfMethodParamTail;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIntfMethodParamTail
{
public:
	PTypeInfo *ParamType;
	TAttrData AttrData;
};
#pragma pack(pop)


typedef TArrayTypeData *PArrayTypeData;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TArrayTypeData
{
public:
	int Size;
	int ElCount;
	PTypeInfo *ElType;
	System::Byte DimCount;
	System::StaticArray<PPTypeInfo, 256> Dims;
};
#pragma pack(pop)


typedef TRecordTypeField *PRecordTypeField;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecordTypeField
{
public:
	TManagedField Field;
	System::Byte Flags;
	TSymbolName Name;
	TTypeInfoFieldAccessor __fastcall NameFld();
	PAttrData __fastcall AttrData();
};
#pragma pack(pop)


typedef TRecordTypeMethod *PRecordTypeMethod;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecordTypeMethod
{
public:
	System::Byte Flags;
	void *Code;
	TSymbolName Name;
	TTypeInfoFieldAccessor __fastcall NameFld();
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TTypeData
{
public:
	TTypeInfoFieldAccessor __fastcall NameListFld();
	TTypeInfoFieldAccessor __fastcall UnitNameFld();
	TTypeInfoFieldAccessor __fastcall IntfUnitFld();
	TTypeInfoFieldAccessor __fastcall DynUnitNameFld();
	PPropData __fastcall PropData();
	PIntfMethodTable __fastcall IntfMethods();
	PPTypeInfo __fastcall DynArrElType();
	PAttrData __fastcall DynArrAttrData();
	GUID __fastcall GUID();
	
public:
	union
	{
		struct 
		{
			TArrayTypeData ArrayData;
		};
		struct 
		{
			PTypeInfo *RefType;
			TAttrData PtrAttrData;
		};
		struct 
		{
			PTypeInfo *InstanceType;
			TAttrData ClassRefAttrData;
		};
		struct 
		{
			int RecSize;
			int ManagedFldCount;
		};
		struct 
		{
			int elSize;
			PTypeInfo *elType;
			int varType;
			PTypeInfo *elType2;
			TSymbolNameBase DynUnitName;
		};
		struct 
		{
			__int64 MinInt64Value;
			__int64 MaxInt64Value;
			TAttrData Int64AttrData;
		};
		struct 
		{
			PTypeInfo *IntfParent;
			TIntfFlagsBase IntfFlags;
			System::StaticArray<System::Byte, 16> IntfGuid;
			TSymbolNameBase IntfUnit;
		};
		struct 
		{
			TProcedureSignature *ProcSig;
			TAttrData ProcAttrData;
		};
		struct 
		{
			TMethodKind MethodKind;
			System::Byte ParamCount;
			System::StaticArray<char, 1024> ParamList;
		};
		struct 
		{
			System::TClass ClassType;
			PTypeInfo *ParentInfo;
			short PropCount;
			TSymbolNameBase UnitName;
		};
		struct 
		{
			System::Byte MaxLength;
		};
		struct 
		{
			TFloatType FloatType;
		};
		struct 
		{
			System::Byte SetTypeOrSize;
			PTypeInfo *CompType;
		};
		struct 
		{
			TOrdType OrdType;union
			{
				struct 
				{
					int MinValue;
					int MaxValue;union
					{
						struct 
						{
							PTypeInfo *BaseType;
							TSymbolNameBase NameList;
						};
						
					};
				};
				
			};
		};
		struct 
		{
			System::Word CodePage;
		};
		struct 
		{
			TAttrData AttrData;
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TPropData
{
	
private:
	struct DECLSPEC_DRECORD _TPropData__1
	{
	};
	
	
	
public:
	System::Word PropCount;
	_TPropData__1 PropList;
};
#pragma pack(pop)


typedef TPropInfo *PPropInfo;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPropInfo
{
public:
	PTypeInfo *PropType;
	void *GetProc;
	void *SetProc;
	void *StoredProc;
	int Index;
	int Default;
	short NameIndex;
	TSymbolName Name;
	TTypeInfoFieldAccessor __fastcall NameFld();
	PPropInfo __fastcall Tail();
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TPropDataEx
{
	
private:
	struct DECLSPEC_DRECORD _TPropDataEx__1
	{
	};
	
	
	
public:
	System::Word PropCount;
	_TPropDataEx__1 PropList;
};
#pragma pack(pop)


typedef TPropInfoEx *PPropInfoEx;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPropInfoEx
{
public:
	System::Byte Flags;
	TPropInfo *Info;
	TAttrData AttrData;
};
#pragma pack(pop)


typedef void __fastcall (__closure *TPropInfoProc)(PPropInfo PropInfo);

typedef System::StaticArray<PPropInfo, 16380> TPropList;

typedef TPropList *PPropList;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPropertyError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPropertyError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPropertyError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPropertyError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPropertyError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPropertyError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPropertyError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPropertyError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPropertyError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPropertyError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPropertyError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPropertyError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPropertyError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPropertyError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPropertyConvertError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPropertyConvertError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPropertyConvertError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPropertyConvertError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPropertyConvertError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPropertyConvertError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPropertyConvertError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPropertyConvertError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPropertyConvertError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPropertyConvertError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPropertyConvertError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPropertyConvertError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPropertyConvertError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPropertyConvertError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef System::StaticArray<System::UnicodeString, 2> System_Typinfo__4;

//-- var, const, procedure ---------------------------------------------------
#define tkAny (System::Set<System::TTypeKind, System::TTypeKind::tkUnknown, System::TTypeKind::tkMRecord>() << System::TTypeKind::tkUnknown << System::TTypeKind::tkInteger << System::TTypeKind::tkChar << System::TTypeKind::tkEnumeration << System::TTypeKind::tkFloat << System::TTypeKind::tkString << System::TTypeKind::tkSet << System::TTypeKind::tkClass << System::TTypeKind::tkMethod << System::TTypeKind::tkWChar << System::TTypeKind::tkLString << System::TTypeKind::tkWString << System::TTypeKind::tkVariant << System::TTypeKind::tkArray << System::TTypeKind::tkRecord << System::TTypeKind::tkInterface << System::TTypeKind::tkInt64 << System::TTypeKind::tkDynArray << System::TTypeKind::tkUString << System::TTypeKind::tkClassRef << System::TTypeKind::tkPointer \
	<< System::TTypeKind::tkProcedure << System::TTypeKind::tkMRecord )
#define tkMethods (System::Set<System::TTypeKind, System::TTypeKind::tkUnknown, System::TTypeKind::tkMRecord>() << System::TTypeKind::tkMethod )
#define tkProperties (System::Set<System::TTypeKind, System::TTypeKind::tkUnknown, System::TTypeKind::tkMRecord>() << System::TTypeKind::tkInteger << System::TTypeKind::tkChar << System::TTypeKind::tkEnumeration << System::TTypeKind::tkFloat << System::TTypeKind::tkString << System::TTypeKind::tkSet << System::TTypeKind::tkClass << System::TTypeKind::tkWChar << System::TTypeKind::tkLString << System::TTypeKind::tkWString << System::TTypeKind::tkVariant << System::TTypeKind::tkArray << System::TTypeKind::tkRecord << System::TTypeKind::tkInterface << System::TTypeKind::tkInt64 << System::TTypeKind::tkDynArray << System::TTypeKind::tkUString << System::TTypeKind::tkClassRef << System::TTypeKind::tkPointer << System::TTypeKind::tkProcedure << System::TTypeKind::tkMRecord )
#ifndef _WIN64
static const unsigned PROPSLOT_MASK = unsigned(0xff000000);
static const unsigned PROPSLOT_FIELD = unsigned(0xff000000);
static const unsigned PROPSLOT_VIRTUAL = unsigned(0xfe000000);
#else /* _WIN64 */
static const unsigned __int64 PROPSLOT_MASK = 0xff00000000000000ULL;
static const unsigned __int64 PROPSLOT_FIELD = 0xff00000000000000ULL;
static const unsigned __int64 PROPSLOT_VIRTUAL = 0xfe00000000000000ULL;
#endif /* _WIN64 */
extern DELPHI_PACKAGE System_Typinfo__4 BooleanIdents;
extern DELPHI_PACKAGE System::UnicodeString DotSep;
extern DELPHI_PACKAGE bool __fastcall (*IsStoredPropCA)(System::TObject* Instance, PPropInfo PropInfo);
extern DELPHI_PACKAGE bool __fastcall PropIsType(System::TObject* Instance, const System::UnicodeString PropName, System::TTypeKind TypeKind)/* overload */;
extern DELPHI_PACKAGE bool __fastcall PropIsType(System::TClass AClass, const System::UnicodeString PropName, System::TTypeKind TypeKind)/* overload */;
extern DELPHI_PACKAGE System::TTypeKind __fastcall PropType(System::TObject* Instance, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE System::TTypeKind __fastcall PropType(System::TClass AClass, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsStoredProp(System::TObject* Instance, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall GetOrdProp(System::TObject* Instance, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetOrdProp(System::TObject* Instance, const System::UnicodeString PropName, NativeInt Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetEnumProp(System::TObject* Instance, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetEnumProp(System::TObject* Instance, const System::UnicodeString PropName, const System::UnicodeString Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetSetProp(System::TObject* Instance, const System::UnicodeString PropName, bool Brackets = false)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetSetProp(System::TObject* Instance, const System::UnicodeString PropName, const System::UnicodeString Value)/* overload */;
extern DELPHI_PACKAGE System::TObject* __fastcall GetObjectProp(System::TObject* Instance, const System::UnicodeString PropName, System::TClass MinClass = 0x0)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetObjectProp(System::TObject* Instance, const System::UnicodeString PropName, System::TObject* Value)/* overload */;
extern DELPHI_PACKAGE System::TClass __fastcall GetObjectPropClass(System::TObject* Instance, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetStrProp(System::TObject* Instance, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetStrProp(System::TObject* Instance, const System::UnicodeString PropName, const System::UnicodeString Value)/* overload */;
extern DELPHI_PACKAGE System::AnsiString __fastcall GetAnsiStrProp(System::TObject* Instance, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetAnsiStrProp(System::TObject* Instance, const System::UnicodeString PropName, const System::AnsiString Value)/* overload */;
extern DELPHI_PACKAGE System::WideString __fastcall GetWideStrProp _DEPRECATED_ATTRIBUTE1("use GetStrProp") (System::TObject* Instance, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetWideStrProp _DEPRECATED_ATTRIBUTE1("use SetStrProp") (System::TObject* Instance, const System::UnicodeString PropName, const System::WideString Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetUnicodeStrProp _DEPRECATED_ATTRIBUTE1("use GetStrProp") (System::TObject* Instance, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetUnicodeStrProp _DEPRECATED_ATTRIBUTE1("use SetStrProp") (System::TObject* Instance, const System::UnicodeString PropName, const System::UnicodeString Value)/* overload */;
extern DELPHI_PACKAGE System::RawByteString __fastcall GetRawByteStrProp(System::TObject* Instance, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetRawByteStrProp(System::TObject* Instance, const System::UnicodeString PropName, const System::RawByteString Value)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall GetFloatProp(System::TObject* Instance, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetFloatProp(System::TObject* Instance, const System::UnicodeString PropName, const System::Extended Value)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall GetVariantProp(System::TObject* Instance, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetVariantProp(System::TObject* Instance, const System::UnicodeString PropName, const System::Variant &Value)/* overload */;
extern DELPHI_PACKAGE System::TMethod __fastcall GetMethodProp(System::TObject* Instance, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetMethodProp(System::TObject* Instance, const System::UnicodeString PropName, const System::TMethod &Value)/* overload */;
extern DELPHI_PACKAGE __int64 __fastcall GetInt64Prop(System::TObject* Instance, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetInt64Prop(System::TObject* Instance, const System::UnicodeString PropName, const __int64 Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetPropName(PPropInfo PropInfo);
extern DELPHI_PACKAGE System::Variant __fastcall GetPropValue(System::TObject* Instance, const System::UnicodeString PropName, bool PreferStrings = true)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall GetPropValue(System::TObject* Instance, PPropInfo PropInfo, bool PreferStrings = true)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetPropValue(System::TObject* Instance, const System::UnicodeString PropName, const System::Variant &Value)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetPropValue(System::TObject* Instance, PPropInfo PropInfo, const System::Variant &Value)/* overload */;
extern DELPHI_PACKAGE void __fastcall FreeAndNilProperties(System::TObject* AObject);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetTypeName(PTypeInfo TypeInfo);
extern DELPHI_PACKAGE PTypeData __fastcall GetTypeData(PTypeInfo TypeInfo);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetEnumName(PTypeInfo TypeInfo, int Value);
extern DELPHI_PACKAGE void __fastcall AddEnumElementAliases(PTypeInfo TypeInfo, const System::UnicodeString *Names, const int Names_High, int StartValue = 0x0);
extern DELPHI_PACKAGE void __fastcall RemoveEnumElementAliases(PTypeInfo TypeInfo);
extern DELPHI_PACKAGE int __fastcall GetEnumValue(PTypeInfo TypeInfo, const System::UnicodeString Name);
extern DELPHI_PACKAGE PPropInfo __fastcall GetPropInfo(PTypeInfo TypeInfo, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE PPropInfo __fastcall GetPropInfo(PTypeInfo TypeInfo, const System::UnicodeString PropName, TTypeKinds AKinds)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsPublishedProp(System::TObject* Instance, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsPublishedProp(System::TClass AClass, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE PPropInfo __fastcall GetPropInfo(System::TObject* Instance, const System::UnicodeString PropName, TTypeKinds AKinds = TTypeKinds() )/* overload */;
extern DELPHI_PACKAGE PPropInfo __fastcall GetPropInfo(System::TClass AClass, const System::UnicodeString PropName, TTypeKinds AKinds = TTypeKinds() )/* overload */;
extern DELPHI_PACKAGE void __fastcall GetPropInfos(PTypeInfo TypeInfo, PPropList PropList);
extern DELPHI_PACKAGE void __fastcall SortPropList(PPropList PropList, int PropCount);
extern DELPHI_PACKAGE int __fastcall GetPropList(PTypeInfo TypeInfo, TTypeKinds TypeKinds, PPropList PropList, bool SortList = true)/* overload */;
extern DELPHI_PACKAGE int __fastcall GetPropList(PTypeInfo TypeInfo, /* out */ PPropList &PropList)/* overload */;
extern DELPHI_PACKAGE int __fastcall GetPropList(System::TObject* AObject, /* out */ PPropList &PropList)/* overload */;
extern DELPHI_PACKAGE bool __fastcall HasCustomAttribute(System::TObject* Instance, PPropInfo PropInfo);
extern DELPHI_PACKAGE bool __fastcall IsStoredProp(System::TObject* Instance, PPropInfo PropInfo)/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall GetOrdProp(System::TObject* Instance, PPropInfo PropInfo)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetOrdProp(System::TObject* Instance, PPropInfo PropInfo, NativeInt Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetSetElementName(PTypeInfo TypeInfo, int Value);
extern DELPHI_PACKAGE int __fastcall GetSetElementValue(PTypeInfo TypeInfo, const System::UnicodeString Name);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetEnumProp(System::TObject* Instance, PPropInfo PropInfo)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetEnumProp(System::TObject* Instance, PPropInfo PropInfo, const System::UnicodeString Value)/* overload */;
extern DELPHI_PACKAGE int __fastcall SizeOfSet(PTypeInfo TypeInfo);
extern DELPHI_PACKAGE int __fastcall ByteOffsetOfSet(PTypeInfo TypeInfo);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetSetProp(System::TObject* Instance, PPropInfo PropInfo, bool Brackets = false)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall SetToString(PPropInfo PropInfo, int Value, bool Brackets = false)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall SetToString(PTypeInfo TypeInfo, int Value, bool Brackets = false)/* overload */;
extern DELPHI_PACKAGE int __fastcall StringToSet(PPropInfo PropInfo, const System::UnicodeString Value)/* overload */;
extern DELPHI_PACKAGE int __fastcall StringToSet(PTypeInfo TypeInfo, const System::UnicodeString Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall SetToString(PPropInfo PropInfo, void * Value, bool Brackets = false)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall SetToString(PTypeInfo TypeInfo, void * Value, bool Brackets = false)/* overload */;
extern DELPHI_PACKAGE void __fastcall StringToSet(PPropInfo PropInfo, const System::UnicodeString Value, void * Result)/* overload */;
extern DELPHI_PACKAGE void __fastcall StringToSet(PTypeInfo TypeInfo, const System::UnicodeString Value, void * Result)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetSetProp(System::TObject* Instance, PPropInfo PropInfo, const System::UnicodeString Value)/* overload */;
extern DELPHI_PACKAGE System::TObject* __fastcall GetObjectProp(System::TObject* Instance, PPropInfo PropInfo, System::TClass MinClass = 0x0)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetObjectProp(System::TObject* Instance, PPropInfo PropInfo, System::TObject* Value, bool ValidateClass = true)/* overload */;
extern DELPHI_PACKAGE System::TClass __fastcall GetObjectPropClass(System::TObject* Instance, PPropInfo PropInfo)/* overload */;
extern DELPHI_PACKAGE System::TClass __fastcall GetObjectPropClass(PPropInfo PropInfo)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetStrProp(System::TObject* Instance, PPropInfo PropInfo)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetStrProp(System::TObject* Instance, PPropInfo PropInfo, const System::UnicodeString Value)/* overload */;
extern DELPHI_PACKAGE System::AnsiString __fastcall GetAnsiStrProp(System::TObject* Instance, PPropInfo PropInfo)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetAnsiStrProp(System::TObject* Instance, PPropInfo PropInfo, const System::AnsiString Value)/* overload */;
extern DELPHI_PACKAGE System::WideString __fastcall GetWideStrProp(System::TObject* Instance, PPropInfo PropInfo)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetWideStrProp(System::TObject* Instance, PPropInfo PropInfo, const System::WideString Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetUnicodeStrProp _DEPRECATED_ATTRIBUTE1("use GetStrProp") (System::TObject* Instance, PPropInfo PropInfo)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetUnicodeStrProp _DEPRECATED_ATTRIBUTE1("use SetStrProp") (System::TObject* Instance, PPropInfo PropInfo, const System::UnicodeString Value)/* overload */;
extern DELPHI_PACKAGE System::RawByteString __fastcall GetRawByteStrProp(System::TObject* Instance, PPropInfo PropInfo)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetRawByteStrProp(System::TObject* Instance, PPropInfo PropInfo, const System::RawByteString Value)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall GetFloatProp(System::TObject* Instance, PPropInfo PropInfo)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetFloatProp(System::TObject* Instance, PPropInfo PropInfo, const System::Extended Value)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall GetVariantProp(System::TObject* Instance, PPropInfo PropInfo)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetVariantProp(System::TObject* Instance, PPropInfo PropInfo, const System::Variant &Value)/* overload */;
extern DELPHI_PACKAGE System::TMethod __fastcall GetMethodProp(System::TObject* Instance, PPropInfo PropInfo)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetMethodProp(System::TObject* Instance, PPropInfo PropInfo, const System::TMethod &Value)/* overload */;
extern DELPHI_PACKAGE __int64 __fastcall GetInt64Prop(System::TObject* Instance, PPropInfo PropInfo)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetInt64Prop(System::TObject* Instance, PPropInfo PropInfo, const __int64 Value)/* overload */;
extern DELPHI_PACKAGE System::_di_IInterface __fastcall GetInterfaceProp(System::TObject* Instance, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetInterfaceProp(System::TObject* Instance, const System::UnicodeString PropName, const System::_di_IInterface Value)/* overload */;
extern DELPHI_PACKAGE System::_di_IInterface __fastcall GetInterfaceProp(System::TObject* Instance, PPropInfo PropInfo)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetInterfaceProp(System::TObject* Instance, PPropInfo PropInfo, const System::_di_IInterface Value)/* overload */;
extern DELPHI_PACKAGE void * __fastcall GetDynArrayProp(System::TObject* Instance, const System::UnicodeString PropName)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetDynArrayProp(System::TObject* Instance, const System::UnicodeString PropName, const void * Value)/* overload */;
extern DELPHI_PACKAGE void * __fastcall GetDynArrayProp(System::TObject* Instance, PPropInfo PropInfo)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetDynArrayProp(System::TObject* Instance, PPropInfo PropInfo, const void * Value)/* overload */;
extern DELPHI_PACKAGE bool __fastcall SamePropTypeName(const System::UnicodeString Name1, const System::UnicodeString Name2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall SamePropTypeName _DEPRECATED_ATTRIBUTE1("use string version of SamePropTypeName") (const System::ShortString &Name1, const System::ShortString &Name2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall SamePropTypeName _DEPRECATED_ATTRIBUTE1("use string version of SamePropTypeName") (const System::UnicodeString Name1, const System::ShortString &Name2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall SamePropTypeName _DEPRECATED_ATTRIBUTE1("use string version of SamePropTypeName") (const System::ShortString &Name1, const System::UnicodeString Name2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall HasWeakRef(PTypeInfo Info);
extern DELPHI_PACKAGE TConstRecordArgMode __fastcall GetConstRecordArgMode(PTypeInfo Info);
}	/* namespace Typinfo */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_TYPINFO)
using namespace System::Typinfo;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif

//-- user supplied -----------------------------------------------------------
#if defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
  using System::Typinfo::PTypeInfo;
#endif

#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_TypinfoHPP
