// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Utils.pas' rev: 35.00 (Windows)

#ifndef Fmx_UtilsHPP
#define Fmx_UtilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <System.Math.Vectors.hpp>
#include <System.Classes.hpp>
#include <FMX.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Utils
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TNonReentrantHelper;
class DELPHICLASS TFMXObjectHelper;
struct TCircle2D;
struct TLine2D;
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<System::Uitypes::TAlphaColor, 536870911> TAlphaColorArray;

typedef TAlphaColorArray *PAlphaColorArray;

typedef System::StaticArray<System::Uitypes::TAlphaColorRec, 536870911> TAlphaColorRecArray;

typedef TAlphaColorRecArray *PAlphaColorRecArray;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TNonReentrantHelper : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod bool __fastcall Execute(bool &Guard, const System::Sysutils::_di_TProc Proc)/* overload */;
	template<typename A> __classmethod bool __fastcall Execute(bool &Guard, const System::DelphiInterface<System::Sysutils::TProc__1<A> > Proc, const A Arg)/* overload */;
	template<typename R> __classmethod R __fastcall Execute(bool &Guard, const System::DelphiInterface<System::Sysutils::TFunc__1<R> > Func, const R Default)/* overload */;
	template<typename A, typename R> __classmethod R __fastcall Execute(bool &Guard, const System::DelphiInterface<System::Sysutils::TFunc__2<A,R> > Func, const A Arg, const R Default)/* overload */;
	__classmethod bool __fastcall EnterSection(bool &Guard);
	__classmethod void __fastcall LeaveSection(bool &Guard);
public:
	/* TObject.Create */ inline __fastcall TNonReentrantHelper() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TNonReentrantHelper() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFMXObjectHelper : public System::TObject
{
	typedef System::TObject inherited;
	
	
public:
	typedef System::DelphiInterface<System::Sysutils::TFunc__2<Fmx::Types::TFmxObject*,bool> > TFilterFunc;
	
	class DELPHICLASS ESearchException;
	class PASCALIMPLEMENTATION ESearchException : public System::Sysutils::Exception
	{
		typedef System::Sysutils::Exception inherited;
		
	public:
		/* Exception.Create */ inline __fastcall ESearchException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
		/* Exception.CreateFmt */ inline __fastcall ESearchException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
		/* Exception.CreateRes */ inline __fastcall ESearchException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
		/* Exception.CreateRes */ inline __fastcall ESearchException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
		/* Exception.CreateResFmt */ inline __fastcall ESearchException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
		/* Exception.CreateResFmt */ inline __fastcall ESearchException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
		/* Exception.CreateHelp */ inline __fastcall ESearchException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
		/* Exception.CreateFmtHelp */ inline __fastcall ESearchException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
		/* Exception.CreateResHelp */ inline __fastcall ESearchException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
		/* Exception.CreateResHelp */ inline __fastcall ESearchException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
		/* Exception.CreateResFmtHelp */ inline __fastcall ESearchException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
		/* Exception.CreateResFmtHelp */ inline __fastcall ESearchException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
		/* Exception.Destroy */ inline __fastcall virtual ~ESearchException() { }
		
	};
	
	
	
public:
	__classmethod bool __fastcall FindParent(Fmx::Types::TFmxObject* const AObject, const System::DelphiInterface<System::Sysutils::TFunc__2<Fmx::Types::TFmxObject*,bool> > AFilter, Fmx::Types::TFmxObject* &AResult);
	__classmethod Fmx::Types::TFmxObject* __fastcall GetParent(Fmx::Types::TFmxObject* const AObject, const System::DelphiInterface<System::Sysutils::TFunc__2<Fmx::Types::TFmxObject*,bool> > AFilter);
	template<typename T> __classmethod bool __fastcall FindNearestParentOfClass(Fmx::Types::TFmxObject* const AObject, T &AResult);
	template<typename T> __classmethod T __fastcall GetNearestParentOfClass(Fmx::Types::TFmxObject* const AObject);
public:
	/* TObject.Create */ inline __fastcall TFMXObjectHelper() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TFMXObjectHelper() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TCircle2D
{
public:
	System::Types::TPointF Center;
	float Radius;
	__fastcall TCircle2D(const System::Types::TPointF &ACenter, const float ARadius);
	TCircle2D() {}
};


struct DECLSPEC_DRECORD TLine2D
{
public:
	System::Types::TPointF Origin;
	System::Types::TPointF Direction;
	__fastcall TLine2D(const System::Types::TPointF &AnOrigin, const System::Types::TPointF &ADestination);
	bool __fastcall Intersects(const TCircle2D &ACircle);
	TLine2D() {}
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Sysutils::TFormatSettings USFormatSettings;
extern DELPHI_PACKAGE float __fastcall Luminance(const System::Uitypes::TAlphaColor AColor);
extern DELPHI_PACKAGE void __fastcall FillAlphaColor(const PAlphaColorArray Dest, const int Count, const System::Uitypes::TAlphaColor Value);
extern DELPHI_PACKAGE void __fastcall FillAlphaColorRect(const PAlphaColorArray Dest, int Width, int Height, int X1, int Y1, int X2, int Y2, const System::Uitypes::TAlphaColor Value);
extern DELPHI_PACKAGE void __fastcall FillAlpha(const PAlphaColorRecArray Dest, const int Count, const System::Byte Alpha);
extern DELPHI_PACKAGE void __fastcall ReverseBytes _DEPRECATED_ATTRIBUTE0 (const void * Dest, const int Count);
extern DELPHI_PACKAGE System::UnicodeString __fastcall RectToString(const System::Types::TRectF &R);
extern DELPHI_PACKAGE System::Types::TRectF __fastcall StringToRect(System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FixNumberText(const System::UnicodeString AText);
extern DELPHI_PACKAGE System::UnicodeString __fastcall PointToString(const System::Types::TPointF &P);
extern DELPHI_PACKAGE System::Types::TPointF __fastcall StringToPoint(System::UnicodeString S);
extern DELPHI_PACKAGE float __fastcall InterpolateSingle(const float Start, const float Stop, const float T);
extern DELPHI_PACKAGE float __fastcall InterpolateRotation(const float Start, const float Stop, const float T);
extern DELPHI_PACKAGE System::Uitypes::TAlphaColor __fastcall InterpolateColor(const System::Uitypes::TAlphaColor Start, const System::Uitypes::TAlphaColor Stop, float T);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetToken(System::UnicodeString &S, const System::UnicodeString Separators, const System::UnicodeString Stop = System::UnicodeString())/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetToken(int &Pos, const System::UnicodeString S, const System::UnicodeString Separators, const System::UnicodeString Stop = System::UnicodeString())/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall Point3DToString(const System::Math::Vectors::TPoint3D &P);
extern DELPHI_PACKAGE System::Math::Vectors::TPoint3D __fastcall StringToPoint3D(System::UnicodeString S);
extern DELPHI_PACKAGE System::Math::Vectors::TVector3D __fastcall ColorToVector3D _DEPRECATED_ATTRIBUTE1("Use TAlphaColorF instead.") (const System::Uitypes::TAlphaColor AColor);
extern DELPHI_PACKAGE System::Uitypes::TAlphaColor __fastcall Vector3DToColor _DEPRECATED_ATTRIBUTE1("Use TAlphaColorF instead.") (const System::Math::Vectors::TVector3D &AColor);
extern DELPHI_PACKAGE bool __fastcall IsPointInCircle(const System::Types::TPointF &APoint, const System::Types::TPointF &ACenter, const int ARadius);
extern DELPHI_PACKAGE double __fastcall CheckPoint(const System::Types::TPointF &APoint, const System::Types::TPointF &ASource, const int ADeviation, const int ErrorMargin);
extern DELPHI_PACKAGE void __fastcall ValidateInheritance(System::Classes::TPersistent* const AValue, const System::TClass AClass, const bool CanBeNil = true);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetShortHint(const System::UnicodeString Hint);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetLongHint(const System::UnicodeString Hint);
}	/* namespace Utils */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_UTILS)
using namespace Fmx::Utils;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_UtilsHPP
