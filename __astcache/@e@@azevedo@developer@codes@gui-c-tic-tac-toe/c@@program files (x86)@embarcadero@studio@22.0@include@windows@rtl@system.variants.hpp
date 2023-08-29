// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Variants.pas' rev: 35.00 (Windows)

#ifndef System_VariantsHPP
#define System_VariantsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Variants
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomVariantType;
__interface DELPHIINTERFACE IVarInvokeable;
typedef System::DelphiInterface<IVarInvokeable> _di_IVarInvokeable;
class DELPHICLASS TInvokeableVariantType;
__interface DELPHIINTERFACE IVarInstanceReference;
typedef System::DelphiInterface<IVarInstanceReference> _di_IVarInstanceReference;
class DELPHICLASS EVariantInvalidOpError;
class DELPHICLASS EVariantTypeCastError;
class DELPHICLASS EVariantOverflowError;
class DELPHICLASS EVariantInvalidArgError;
class DELPHICLASS EVariantBadVarTypeError;
class DELPHICLASS EVariantBadIndexError;
class DELPHICLASS EVariantArrayLockedError;
class DELPHICLASS EVariantNotAnArrayError;
class DELPHICLASS EVariantArrayCreateError;
class DELPHICLASS EVariantNotImplError;
class DELPHICLASS EVariantOutOfMemoryError;
class DELPHICLASS EVariantUnexpectedError;
class DELPHICLASS EVariantDispatchError;
class DELPHICLASS EVariantRangeCheckError;
class DELPHICLASS EVariantInvalidNullOpError;
struct TStringRef;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TVariantRelationship : unsigned char { vrEqual, vrLessThan, vrGreaterThan, vrNotEqual };

enum DECLSPEC_DENUM TVarCompareResult : unsigned char { crLessThan, crEqual, crGreaterThan };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomVariantType : public System::TNoRefCountObject
{
	typedef System::TNoRefCountObject inherited;
	
private:
	System::Word FVarType;
	
protected:
	void __fastcall SimplisticClear(TVarData &V);
	void __fastcall SimplisticCopy(TVarData &Dest, const TVarData &Source, const bool Indirect = false);
	void __fastcall RaiseInvalidOp();
	void __fastcall RaiseCastError();
	void __fastcall RaiseDispError();
	virtual bool __fastcall LeftPromotion(const TVarData &V, const int Operator, /* out */ System::Word &RequiredVarType);
	virtual bool __fastcall RightPromotion(const TVarData &V, const int Operator, /* out */ System::Word &RequiredVarType);
	virtual bool __fastcall OlePromotion(const TVarData &V, /* out */ System::Word &RequiredVarType);
	virtual void __fastcall DispInvoke(PVarData Dest, const TVarData &Source, System::PCallDesc CallDesc, void * Params);
	void __fastcall VarDataInit(TVarData &Dest);
	void __fastcall VarDataClear(TVarData &Dest);
	void __fastcall VarDataCopy(TVarData &Dest, const TVarData &Source);
	void __fastcall VarDataCopyNoInd(TVarData &Dest, const TVarData &Source);
	void __fastcall VarDataCast(TVarData &Dest, const TVarData &Source);
	void __fastcall VarDataCastTo(TVarData &Dest, const TVarData &Source, const System::Word AVarType)/* overload */;
	void __fastcall VarDataCastTo(TVarData &Dest, const System::Word AVarType)/* overload */;
	void __fastcall VarDataCastToOleStr(TVarData &Dest);
	void __fastcall VarDataFromStr(TVarData &V, const System::UnicodeString Value);
	void __fastcall VarDataFromOleStr(TVarData &V, const System::WideString Value);
	void __fastcall VarDataFromLStr(TVarData &V, const System::AnsiString Value);
	System::UnicodeString __fastcall VarDataToStr(const TVarData &V);
	bool __fastcall VarDataIsEmptyParam(const TVarData &V);
	bool __fastcall VarDataIsByRef(const TVarData &V);
	bool __fastcall VarDataIsArray(const TVarData &V);
	bool __fastcall VarDataIsOrdinal(const TVarData &V);
	bool __fastcall VarDataIsFloat(const TVarData &V);
	bool __fastcall VarDataIsNumeric(const TVarData &V);
	bool __fastcall VarDataIsStr(const TVarData &V);
	
public:
	__fastcall TCustomVariantType()/* overload */;
	__fastcall TCustomVariantType(System::Word RequestedVarType)/* overload */;
	__fastcall virtual ~TCustomVariantType();
	__property System::Word VarType = {read=FVarType, nodefault};
	virtual bool __fastcall IsClear(const TVarData &V);
	virtual void __fastcall Cast(TVarData &Dest, const TVarData &Source);
	virtual void __fastcall CastTo(TVarData &Dest, const TVarData &Source, const System::Word AVarType);
	virtual void __fastcall CastToOle(TVarData &Dest, const TVarData &Source);
	virtual void __fastcall Clear(TVarData &V) = 0 ;
	virtual void __fastcall Copy(TVarData &Dest, const TVarData &Source, const bool Indirect) = 0 ;
	virtual void __fastcall BinaryOp(TVarData &Left, const TVarData &Right, const int Operator);
	virtual void __fastcall UnaryOp(TVarData &Right, const int Operator);
	virtual bool __fastcall CompareOp(const TVarData &Left, const TVarData &Right, const int Operator);
	virtual void __fastcall Compare(const TVarData &Left, const TVarData &Right, TVarCompareResult &Relationship);
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TCustomVariantTypeClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomVariantTypeClass);
#endif /* _WIN64 */

typedef System::DynamicArray<TVarData> TVarDataArray;

__interface  INTERFACE_UUID("{1CB65C52-BBCB-41A6-9E58-7FB916BEEB2D}") IVarInvokeable  : public System::IInterface 
{
	virtual bool __fastcall DoFunction(TVarData &Dest, const TVarData &V, const System::UnicodeString Name, const TVarDataArray Arguments) = 0 ;
	virtual bool __fastcall DoProcedure(const TVarData &V, const System::UnicodeString Name, const TVarDataArray Arguments) = 0 ;
	virtual bool __fastcall GetProperty(TVarData &Dest, const TVarData &V, const System::UnicodeString Name) = 0 ;
	virtual bool __fastcall SetProperty(const TVarData &V, const System::UnicodeString Name, const TVarData &Value) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TInvokeableVariantType : public TCustomVariantType
{
	typedef TCustomVariantType inherited;
	
protected:
	virtual System::UnicodeString __fastcall FixupIdent(const System::UnicodeString AText);
	virtual void __fastcall DispInvoke(PVarData Dest, const TVarData &Source, System::PCallDesc CallDesc, void * Params);
	
public:
	virtual bool __fastcall DoFunction(TVarData &Dest, const TVarData &V, const System::UnicodeString Name, const TVarDataArray Arguments);
	virtual bool __fastcall DoProcedure(const TVarData &V, const System::UnicodeString Name, const TVarDataArray Arguments);
	virtual bool __fastcall GetProperty(TVarData &Dest, const TVarData &V, const System::UnicodeString Name);
	virtual bool __fastcall SetProperty(const TVarData &V, const System::UnicodeString Name, const TVarData &Value);
public:
	/* TCustomVariantType.Create */ inline __fastcall TInvokeableVariantType()/* overload */ : TCustomVariantType() { }
	/* TCustomVariantType.Create */ inline __fastcall TInvokeableVariantType(System::Word RequestedVarType)/* overload */ : TCustomVariantType(RequestedVarType) { }
	/* TCustomVariantType.Destroy */ inline __fastcall virtual ~TInvokeableVariantType() { }
	
private:
	void *__IVarInvokeable;	// IVarInvokeable 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1CB65C52-BBCB-41A6-9E58-7FB916BEEB2D}
	operator _di_IVarInvokeable()
	{
		_di_IVarInvokeable intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IVarInvokeable*(void) { return (IVarInvokeable*)&__IVarInvokeable; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{5C176802-3F89-428D-850E-9F54F50C2293}") IVarInstanceReference  : public System::IInterface 
{
	virtual System::TObject* __fastcall GetInstance(const TVarData &V) = 0 ;
};

typedef void __fastcall (*TAnyProc)(TVarData &V);

typedef void __cdecl (*TVarDispProc)(System::PVariant Dest, const System::Variant &Source, System::PCallDesc CallDesc, void * Params);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EVariantInvalidOpError : public System::Sysutils::EVariantError
{
	typedef System::Sysutils::EVariantError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVariantInvalidOpError(const System::UnicodeString Msg) : System::Sysutils::EVariantError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVariantInvalidOpError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::EVariantError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVariantInvalidOpError(NativeUInt Ident)/* overload */ : System::Sysutils::EVariantError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVariantInvalidOpError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::EVariantError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantInvalidOpError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantInvalidOpError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVariantInvalidOpError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::EVariantError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVariantInvalidOpError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::EVariantError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantInvalidOpError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantInvalidOpError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantInvalidOpError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantInvalidOpError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVariantInvalidOpError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EVariantTypeCastError : public System::Sysutils::EVariantError
{
	typedef System::Sysutils::EVariantError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVariantTypeCastError(const System::UnicodeString Msg) : System::Sysutils::EVariantError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVariantTypeCastError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::EVariantError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVariantTypeCastError(NativeUInt Ident)/* overload */ : System::Sysutils::EVariantError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVariantTypeCastError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::EVariantError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantTypeCastError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantTypeCastError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVariantTypeCastError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::EVariantError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVariantTypeCastError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::EVariantError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantTypeCastError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantTypeCastError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantTypeCastError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantTypeCastError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVariantTypeCastError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EVariantOverflowError : public System::Sysutils::EVariantError
{
	typedef System::Sysutils::EVariantError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVariantOverflowError(const System::UnicodeString Msg) : System::Sysutils::EVariantError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVariantOverflowError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::EVariantError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVariantOverflowError(NativeUInt Ident)/* overload */ : System::Sysutils::EVariantError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVariantOverflowError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::EVariantError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantOverflowError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantOverflowError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVariantOverflowError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::EVariantError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVariantOverflowError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::EVariantError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantOverflowError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantOverflowError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantOverflowError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantOverflowError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVariantOverflowError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EVariantInvalidArgError : public System::Sysutils::EVariantError
{
	typedef System::Sysutils::EVariantError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVariantInvalidArgError(const System::UnicodeString Msg) : System::Sysutils::EVariantError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVariantInvalidArgError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::EVariantError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVariantInvalidArgError(NativeUInt Ident)/* overload */ : System::Sysutils::EVariantError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVariantInvalidArgError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::EVariantError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantInvalidArgError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantInvalidArgError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVariantInvalidArgError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::EVariantError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVariantInvalidArgError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::EVariantError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantInvalidArgError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantInvalidArgError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantInvalidArgError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantInvalidArgError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVariantInvalidArgError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EVariantBadVarTypeError : public System::Sysutils::EVariantError
{
	typedef System::Sysutils::EVariantError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVariantBadVarTypeError(const System::UnicodeString Msg) : System::Sysutils::EVariantError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVariantBadVarTypeError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::EVariantError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVariantBadVarTypeError(NativeUInt Ident)/* overload */ : System::Sysutils::EVariantError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVariantBadVarTypeError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::EVariantError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantBadVarTypeError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantBadVarTypeError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVariantBadVarTypeError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::EVariantError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVariantBadVarTypeError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::EVariantError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantBadVarTypeError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantBadVarTypeError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantBadVarTypeError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantBadVarTypeError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVariantBadVarTypeError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EVariantBadIndexError : public System::Sysutils::EVariantError
{
	typedef System::Sysutils::EVariantError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVariantBadIndexError(const System::UnicodeString Msg) : System::Sysutils::EVariantError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVariantBadIndexError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::EVariantError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVariantBadIndexError(NativeUInt Ident)/* overload */ : System::Sysutils::EVariantError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVariantBadIndexError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::EVariantError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantBadIndexError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantBadIndexError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVariantBadIndexError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::EVariantError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVariantBadIndexError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::EVariantError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantBadIndexError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantBadIndexError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantBadIndexError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantBadIndexError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVariantBadIndexError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EVariantArrayLockedError : public System::Sysutils::EVariantError
{
	typedef System::Sysutils::EVariantError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVariantArrayLockedError(const System::UnicodeString Msg) : System::Sysutils::EVariantError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVariantArrayLockedError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::EVariantError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVariantArrayLockedError(NativeUInt Ident)/* overload */ : System::Sysutils::EVariantError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVariantArrayLockedError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::EVariantError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantArrayLockedError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantArrayLockedError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVariantArrayLockedError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::EVariantError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVariantArrayLockedError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::EVariantError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantArrayLockedError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantArrayLockedError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantArrayLockedError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantArrayLockedError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVariantArrayLockedError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EVariantNotAnArrayError : public System::Sysutils::EVariantError
{
	typedef System::Sysutils::EVariantError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVariantNotAnArrayError(const System::UnicodeString Msg) : System::Sysutils::EVariantError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVariantNotAnArrayError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::EVariantError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVariantNotAnArrayError(NativeUInt Ident)/* overload */ : System::Sysutils::EVariantError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVariantNotAnArrayError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::EVariantError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantNotAnArrayError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantNotAnArrayError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVariantNotAnArrayError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::EVariantError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVariantNotAnArrayError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::EVariantError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantNotAnArrayError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantNotAnArrayError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantNotAnArrayError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantNotAnArrayError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVariantNotAnArrayError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EVariantArrayCreateError : public System::Sysutils::EVariantError
{
	typedef System::Sysutils::EVariantError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVariantArrayCreateError(const System::UnicodeString Msg) : System::Sysutils::EVariantError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVariantArrayCreateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::EVariantError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVariantArrayCreateError(NativeUInt Ident)/* overload */ : System::Sysutils::EVariantError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVariantArrayCreateError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::EVariantError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantArrayCreateError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantArrayCreateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVariantArrayCreateError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::EVariantError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVariantArrayCreateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::EVariantError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantArrayCreateError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantArrayCreateError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantArrayCreateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantArrayCreateError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVariantArrayCreateError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EVariantNotImplError : public System::Sysutils::EVariantError
{
	typedef System::Sysutils::EVariantError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVariantNotImplError(const System::UnicodeString Msg) : System::Sysutils::EVariantError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVariantNotImplError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::EVariantError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVariantNotImplError(NativeUInt Ident)/* overload */ : System::Sysutils::EVariantError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVariantNotImplError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::EVariantError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantNotImplError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantNotImplError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVariantNotImplError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::EVariantError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVariantNotImplError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::EVariantError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantNotImplError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantNotImplError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantNotImplError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantNotImplError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVariantNotImplError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EVariantOutOfMemoryError : public System::Sysutils::EVariantError
{
	typedef System::Sysutils::EVariantError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVariantOutOfMemoryError(const System::UnicodeString Msg) : System::Sysutils::EVariantError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVariantOutOfMemoryError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::EVariantError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVariantOutOfMemoryError(NativeUInt Ident)/* overload */ : System::Sysutils::EVariantError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVariantOutOfMemoryError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::EVariantError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantOutOfMemoryError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantOutOfMemoryError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVariantOutOfMemoryError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::EVariantError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVariantOutOfMemoryError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::EVariantError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantOutOfMemoryError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantOutOfMemoryError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantOutOfMemoryError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantOutOfMemoryError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVariantOutOfMemoryError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EVariantUnexpectedError : public System::Sysutils::EVariantError
{
	typedef System::Sysutils::EVariantError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVariantUnexpectedError(const System::UnicodeString Msg) : System::Sysutils::EVariantError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVariantUnexpectedError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::EVariantError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVariantUnexpectedError(NativeUInt Ident)/* overload */ : System::Sysutils::EVariantError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVariantUnexpectedError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::EVariantError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantUnexpectedError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantUnexpectedError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVariantUnexpectedError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::EVariantError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVariantUnexpectedError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::EVariantError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantUnexpectedError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantUnexpectedError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantUnexpectedError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantUnexpectedError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVariantUnexpectedError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EVariantDispatchError : public System::Sysutils::EVariantError
{
	typedef System::Sysutils::EVariantError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVariantDispatchError(const System::UnicodeString Msg) : System::Sysutils::EVariantError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVariantDispatchError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::EVariantError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVariantDispatchError(NativeUInt Ident)/* overload */ : System::Sysutils::EVariantError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVariantDispatchError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::EVariantError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantDispatchError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantDispatchError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVariantDispatchError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::EVariantError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVariantDispatchError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::EVariantError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantDispatchError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantDispatchError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantDispatchError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantDispatchError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EVariantError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVariantDispatchError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EVariantRangeCheckError : public EVariantOverflowError
{
	typedef EVariantOverflowError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVariantRangeCheckError(const System::UnicodeString Msg) : EVariantOverflowError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVariantRangeCheckError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EVariantOverflowError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVariantRangeCheckError(NativeUInt Ident)/* overload */ : EVariantOverflowError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVariantRangeCheckError(System::PResStringRec ResStringRec)/* overload */ : EVariantOverflowError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantRangeCheckError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EVariantOverflowError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantRangeCheckError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EVariantOverflowError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVariantRangeCheckError(const System::UnicodeString Msg, int AHelpContext) : EVariantOverflowError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVariantRangeCheckError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EVariantOverflowError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantRangeCheckError(NativeUInt Ident, int AHelpContext)/* overload */ : EVariantOverflowError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantRangeCheckError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EVariantOverflowError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantRangeCheckError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EVariantOverflowError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantRangeCheckError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EVariantOverflowError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVariantRangeCheckError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EVariantInvalidNullOpError : public EVariantInvalidOpError
{
	typedef EVariantInvalidOpError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVariantInvalidNullOpError(const System::UnicodeString Msg) : EVariantInvalidOpError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVariantInvalidNullOpError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EVariantInvalidOpError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVariantInvalidNullOpError(NativeUInt Ident)/* overload */ : EVariantInvalidOpError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVariantInvalidNullOpError(System::PResStringRec ResStringRec)/* overload */ : EVariantInvalidOpError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantInvalidNullOpError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EVariantInvalidOpError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVariantInvalidNullOpError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EVariantInvalidOpError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVariantInvalidNullOpError(const System::UnicodeString Msg, int AHelpContext) : EVariantInvalidOpError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVariantInvalidNullOpError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EVariantInvalidOpError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantInvalidNullOpError(NativeUInt Ident, int AHelpContext)/* overload */ : EVariantInvalidOpError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVariantInvalidNullOpError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EVariantInvalidOpError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantInvalidNullOpError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EVariantInvalidOpError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVariantInvalidNullOpError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EVariantInvalidOpError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVariantInvalidNullOpError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TNullCompareRule : unsigned char { ncrError, ncrStrict, ncrLoose };

enum DECLSPEC_DENUM TBooleanToStringRule : unsigned char { bsrAsIs, bsrLower, bsrUpper };

struct DECLSPEC_DRECORD TStringRef
{
public:
	System::WideString Wide;
	System::AnsiString *Ansi;
	System::UnicodeString *Unicode;
	System::PWideString __fastcall FromAnsi(System::PAnsiString A);
	System::PWideString __fastcall FromUnicode(System::PUnicodeString U);
};


typedef System::DynamicArray<TStringRef> TStringRefList;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TVarDispProc VarDispProc;
extern DELPHI_PACKAGE TAnyProc ClearAnyProc;
extern DELPHI_PACKAGE TAnyProc ChangeAnyProc;
extern DELPHI_PACKAGE TAnyProc RefAnyProc;
extern DELPHI_PACKAGE TNullCompareRule NullEqualityRule;
extern DELPHI_PACKAGE TNullCompareRule NullMagnitudeRule;
extern DELPHI_PACKAGE bool NullStrictConvert;
extern DELPHI_PACKAGE System::UnicodeString NullAsStringValue;
extern DELPHI_PACKAGE bool PackVarCreation;
extern DELPHI_PACKAGE TBooleanToStringRule BooleanToStringRule;
extern DELPHI_PACKAGE bool OleVariantInt64AsDouble;
static const System::Int8 MaxDispArgs = System::Int8(0x40);
extern DELPHI_PACKAGE bool DispatchUnsignedAsSigned;
extern DELPHI_PACKAGE void __fastcall VarCastError(void)/* overload */;
extern DELPHI_PACKAGE void __fastcall VarCastError(const System::Word ASourceType, const System::Word ADestType)/* overload */;
extern DELPHI_PACKAGE void __fastcall VarInvalidOp(void);
extern DELPHI_PACKAGE void __fastcall VarInvalidNullOp(void);
extern DELPHI_PACKAGE void __fastcall VarOverflowError(const System::Word ASourceType, const System::Word ADestType);
extern DELPHI_PACKAGE void __fastcall VarRangeCheckError(const System::Word ASourceType, const System::Word ADestType);
extern DELPHI_PACKAGE void __fastcall VarArrayCreateError(void);
extern DELPHI_PACKAGE void __fastcall VarResultCheck(HRESULT AResult)/* overload */;
extern DELPHI_PACKAGE void __fastcall VarResultCheck(HRESULT AResult, System::Word ASourceType, System::Word ADestType)/* overload */;
extern DELPHI_PACKAGE void __fastcall HandleConversionException(const System::Word ASourceType, const System::Word ADestType);
extern DELPHI_PACKAGE TVarDataArray __fastcall GetDispatchInvokeArgs(System::PCallDesc CallDesc, void * Params, TStringRefList &Strings, bool OrderLTR);
extern DELPHI_PACKAGE void __fastcall FinalizeDispatchInvokeArgs(System::PCallDesc CallDesc, const TVarDataArray Args, bool OrderLTR);
extern DELPHI_PACKAGE void __fastcall VarCopyNoInd(System::Variant &Dest, const System::Variant &Source);
extern DELPHI_PACKAGE System::UnicodeString __fastcall VarTypeAsText(const System::Word AType);
extern DELPHI_PACKAGE System::Word __fastcall VarType(const System::Variant &V);
extern DELPHI_PACKAGE PVarData __fastcall FindVarData(const System::Variant &V);
extern DELPHI_PACKAGE System::Variant __fastcall VarAsType(const System::Variant &V, System::Word AVarType);
extern DELPHI_PACKAGE bool __fastcall VarIsType(const System::Variant &V, System::Word AVarType)/* overload */;
extern DELPHI_PACKAGE bool __fastcall VarIsType(const System::Variant &V, const System::Word *AVarTypes, const int AVarTypes_High)/* overload */;
extern DELPHI_PACKAGE bool __fastcall VarIsClear(const System::Variant &V);
extern DELPHI_PACKAGE bool __fastcall VarIsCustom(const System::Variant &V);
extern DELPHI_PACKAGE bool __fastcall VarIsOrdinal(const System::Variant &V);
extern DELPHI_PACKAGE bool __fastcall VarIsFloat(const System::Variant &V);
extern DELPHI_PACKAGE bool __fastcall VarIsNumeric(const System::Variant &V);
extern DELPHI_PACKAGE bool __fastcall VarIsStr(const System::Variant &V);
extern DELPHI_PACKAGE bool __fastcall VarIsEmpty(const System::Variant &V);
extern DELPHI_PACKAGE void __fastcall VarCheckEmpty(const System::Variant &V);
extern DELPHI_PACKAGE bool __fastcall VarIsNull(const System::Variant &V);
extern DELPHI_PACKAGE System::UnicodeString __fastcall VarToStr(const System::Variant &V);
extern DELPHI_PACKAGE System::UnicodeString __fastcall VarToStrDef(const System::Variant &V, const System::UnicodeString ADefault);
extern DELPHI_PACKAGE System::WideString __fastcall VarToWideStr(const System::Variant &V);
extern DELPHI_PACKAGE System::WideString __fastcall VarToWideStrDef(const System::Variant &V, const System::WideString ADefault);
extern DELPHI_PACKAGE System::Variant __fastcall VarFromDateTime(const System::TDateTime DateTime);
extern DELPHI_PACKAGE System::TDateTime __fastcall VarToDateTime(const System::Variant &V);
extern DELPHI_PACKAGE bool __fastcall VarInRange(const System::Variant &AValue, const System::Variant &AMin, const System::Variant &AMax);
extern DELPHI_PACKAGE System::Variant __fastcall VarEnsureRange(const System::Variant &AValue, const System::Variant &AMin, const System::Variant &AMax);
extern DELPHI_PACKAGE bool __fastcall VarSameValue(const System::Variant &A, const System::Variant &B);
extern DELPHI_PACKAGE TVariantRelationship __fastcall VarCompareValue(const System::Variant &A, const System::Variant &B);
extern DELPHI_PACKAGE bool __fastcall VarIsEmptyParam(const System::Variant &V);
extern DELPHI_PACKAGE bool __fastcall VarIsError(const System::Variant &V, /* out */ HRESULT &AResult)/* overload */;
extern DELPHI_PACKAGE bool __fastcall VarIsError(const System::Variant &V)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall VarAsError(HRESULT AResult);
extern DELPHI_PACKAGE bool __fastcall VarIsByRef(const System::Variant &V);
extern DELPHI_PACKAGE bool __fastcall VarSupports(const System::Variant &V, const GUID &IID, /* out */ void *Intf)/* overload */;
extern DELPHI_PACKAGE bool __fastcall VarSupports(const System::Variant &V, const GUID &IID)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall VarArrayCreate(const int *Bounds, const int Bounds_High, System::Word AVarType);
extern DELPHI_PACKAGE System::Variant __fastcall VarArrayOf(const System::Variant *Values, const int Values_High);
extern DELPHI_PACKAGE System::PVarArray __fastcall VarArrayAsPSafeArray(const System::Variant &A);
extern DELPHI_PACKAGE int __fastcall VarArrayDimCount(const System::Variant &A);
extern DELPHI_PACKAGE int __fastcall VarArrayLowBound(const System::Variant &A, int Dim);
extern DELPHI_PACKAGE int __fastcall VarArrayHighBound(const System::Variant &A, int Dim);
extern DELPHI_PACKAGE void * __fastcall VarArrayLock(const System::Variant &A);
extern DELPHI_PACKAGE void __fastcall VarArrayUnlock(const System::Variant &A);
extern DELPHI_PACKAGE System::Variant __fastcall VarArrayRef(const System::Variant &A);
extern DELPHI_PACKAGE bool __fastcall VarIsArray(const System::Variant &A)/* overload */;
extern DELPHI_PACKAGE bool __fastcall VarIsArray(const System::Variant &A, bool AResolveByRef)/* overload */;
extern DELPHI_PACKAGE bool __fastcall VarTypeIsValidArrayType(const System::Word AVarType);
extern DELPHI_PACKAGE bool __fastcall VarTypeIsValidElementType(const System::Word AVarType);
extern DELPHI_PACKAGE System::Variant __fastcall VarArrayGet(const System::Variant &A, const int *Indices, const int Indices_High);
extern DELPHI_PACKAGE void __fastcall VarArrayPut(System::Variant &A, const System::Variant &Value, const int *Indices, const int Indices_High);
extern DELPHI_PACKAGE void __fastcall DynArrayToVariant(System::Variant &V, const void * DynArray, void * TypeInfo);
extern DELPHI_PACKAGE void __fastcall DynArrayFromVariant(void * &DynArray, const System::Variant &V, void * TypeInfo);
extern DELPHI_PACKAGE bool __fastcall FindCustomVariantType(const System::Word AVarType, /* out */ TCustomVariantType* &CustomVariantType)/* overload */;
extern DELPHI_PACKAGE bool __fastcall FindCustomVariantType(const System::UnicodeString TypeName, /* out */ TCustomVariantType* &CustomVariantType)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall Unassigned(void);
extern DELPHI_PACKAGE System::Variant __fastcall Null(void);
extern DELPHI_PACKAGE void __fastcall InitVariantConstants(void);
}	/* namespace Variants */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_VARIANTS)
using namespace System::Variants;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_VariantsHPP
