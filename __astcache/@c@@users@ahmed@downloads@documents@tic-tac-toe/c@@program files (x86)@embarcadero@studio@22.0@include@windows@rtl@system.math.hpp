// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Math.pas' rev: 35.00 (Windows)

#ifndef System_MathHPP
#define System_MathHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------
#pragma option -w-8071
namespace System
{
namespace Math
{
extern const System::Extended MinComp /*= -9223372036854775807*/;
extern const System::Extended MaxComp /*= 9223372036854775807*/;
extern const System::Extended NaN /*= 0.0 / 0.0*/;
extern const System::Extended Infinity /*= 1.0 / 0.0*/;
extern const System::Extended NegInfinity /*= -1.0 / 0.0*/;
}	/* namespace Math */
}	/* namespace System */

namespace System
{
namespace Math
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EInvalidArgument;
//-- type declarations -------------------------------------------------------
typedef System::Int8 TValueSign;

typedef System::Int8 TRoundToRange;

typedef System::Int8 TRoundToEXRangeExtended;

enum DECLSPEC_DENUM TPaymentTime : unsigned char { ptEndOfPeriod, ptStartOfPeriod };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EInvalidArgument : public System::Sysutils::EMathError
{
	typedef System::Sysutils::EMathError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvalidArgument(const System::UnicodeString Msg) : System::Sysutils::EMathError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvalidArgument(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::EMathError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidArgument(NativeUInt Ident)/* overload */ : System::Sysutils::EMathError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidArgument(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::EMathError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidArgument(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EMathError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidArgument(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EMathError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidArgument(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::EMathError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidArgument(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::EMathError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidArgument(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::EMathError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidArgument(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::EMathError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidArgument(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EMathError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidArgument(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EMathError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidArgument() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TRoundingMode : unsigned char { rmNearest, rmDown, rmUp, rmTruncate };

typedef TRoundingMode TFPURoundingMode;

typedef TRoundingMode TSSERoundingMode;

enum DECLSPEC_DENUM TFPUPrecisionMode : unsigned char { pmSingle, pmReserved, pmDouble, pmExtended };

enum DECLSPEC_DENUM TArithmeticException : unsigned char { exInvalidOp, exDenormalized, exZeroDivide, exOverflow, exUnderflow, exPrecision };

typedef TArithmeticException TFPUException;

typedef TArithmeticException TSSEException;

typedef System::Set<TArithmeticException, TArithmeticException::exInvalidOp, TArithmeticException::exPrecision> TArithmeticExceptions;

typedef System::Set<TArithmeticException, TArithmeticException::exInvalidOp, TArithmeticException::exPrecision> TArithmeticExceptionMask;

typedef System::Set<TFPUException, TFPUException::exInvalidOp, TFPUException::exPrecision> TFPUExceptionMask;

typedef System::Set<TSSEException, TSSEException::exInvalidOp, TSSEException::exPrecision> TSSEExceptionMask;

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 NegativeValue = System::Int8(-1);
static const System::Int8 ZeroValue = System::Int8(0x0);
static const System::Int8 PositiveValue = System::Int8(1);
#define exAllArithmeticExceptions (System::Set<TArithmeticException, TArithmeticException::exInvalidOp, TArithmeticException::exPrecision>() << TArithmeticException::exInvalidOp << TArithmeticException::exDenormalized << TArithmeticException::exZeroDivide << TArithmeticException::exOverflow << TArithmeticException::exUnderflow << TArithmeticException::exPrecision )
#define DefaultExceptionFlags (System::Set<TArithmeticException, TArithmeticException::exInvalidOp, TArithmeticException::exPrecision>() << TArithmeticException::exInvalidOp << TArithmeticException::exZeroDivide << TArithmeticException::exOverflow )
static const System::Int8 seSSE = System::Int8(0x1);
static const System::Int8 seSSE2 = System::Int8(0x2);
static const System::Int8 seSSE3 = System::Int8(0x4);
static const System::Int8 seSSSE3 = System::Int8(0x8);
static const System::Int8 seSSE41 = System::Int8(0x10);
static const System::Int8 seSSE42 = System::Int8(0x20);
static const System::Int8 sePOPCNT = System::Int8(0x40);
static const System::Byte seAESNI = System::Byte(0x80);
static const System::Word sePCLMULQDQ = System::Word(0x100);
extern DELPHI_PACKAGE void __fastcall DivMod(unsigned Dividend, System::Word Divisor, System::Word &Result, System::Word &Remainder)/* overload */;
extern DELPHI_PACKAGE void __fastcall DivMod(unsigned __int64 Dividend, unsigned __int64 Divisor, unsigned __int64 &Result, unsigned __int64 &Remainder)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall RoundTo(const System::Extended AValue, const TRoundToEXRangeExtended ADigit);
extern DELPHI_PACKAGE float __fastcall SimpleRoundTo(const float AValue, const TRoundToRange ADigit = (TRoundToRange)(0xfffffffe))/* overload */;
extern DELPHI_PACKAGE double __fastcall SimpleRoundTo(const double AValue, const TRoundToRange ADigit = (TRoundToRange)(0xfffffffe))/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall SimpleRoundTo(const System::Extended AValue, const TRoundToRange ADigit = (TRoundToRange)(0xfffffffe))/* overload */;
extern DELPHI_PACKAGE float __fastcall DegToRad(const float Degrees)/* overload */;
extern DELPHI_PACKAGE double __fastcall DegToRad(const double Degrees)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall DegToRad(const System::Extended Degrees)/* overload */;
extern DELPHI_PACKAGE float __fastcall RadToDeg(const float Radians)/* overload */;
extern DELPHI_PACKAGE double __fastcall RadToDeg(const double Radians)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall RadToDeg(const System::Extended Radians)/* overload */;
extern DELPHI_PACKAGE float __fastcall GradToRad(const float Grads)/* overload */;
extern DELPHI_PACKAGE double __fastcall GradToRad(const double Grads)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall GradToRad(const System::Extended Grads)/* overload */;
extern DELPHI_PACKAGE float __fastcall RadToGrad(const float Radians)/* overload */;
extern DELPHI_PACKAGE double __fastcall RadToGrad(const double Radians)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall RadToGrad(const System::Extended Radians)/* overload */;
extern DELPHI_PACKAGE float __fastcall CycleToRad(const float Cycles)/* overload */;
extern DELPHI_PACKAGE double __fastcall CycleToRad(const double Cycles)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall CycleToRad(const System::Extended Cycles)/* overload */;
extern DELPHI_PACKAGE float __fastcall RadToCycle(const float Radians)/* overload */;
extern DELPHI_PACKAGE double __fastcall RadToCycle(const double Radians)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall RadToCycle(const System::Extended Radians)/* overload */;
extern DELPHI_PACKAGE float __fastcall DegToGrad(const float Degrees)/* overload */;
extern DELPHI_PACKAGE double __fastcall DegToGrad(const double Degrees)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall DegToGrad(const System::Extended Degrees)/* overload */;
extern DELPHI_PACKAGE float __fastcall DegToCycle(const float Degrees)/* overload */;
extern DELPHI_PACKAGE double __fastcall DegToCycle(const double Degrees)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall DegToCycle(const System::Extended Degrees)/* overload */;
extern DELPHI_PACKAGE float __fastcall DegNormalize(const float Degrees)/* overload */;
extern DELPHI_PACKAGE double __fastcall DegNormalize(const double Degrees)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall DegNormalize(const System::Extended Degrees)/* overload */;
extern DELPHI_PACKAGE float __fastcall GradToDeg(const float Grads)/* overload */;
extern DELPHI_PACKAGE double __fastcall GradToDeg(const double Grads)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall GradToDeg(const System::Extended Grads)/* overload */;
extern DELPHI_PACKAGE float __fastcall GradToCycle(const float Grads)/* overload */;
extern DELPHI_PACKAGE double __fastcall GradToCycle(const double Grads)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall GradToCycle(const System::Extended Grads)/* overload */;
extern DELPHI_PACKAGE float __fastcall CycleToDeg(const float Cycles)/* overload */;
extern DELPHI_PACKAGE double __fastcall CycleToDeg(const double Cycles)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall CycleToDeg(const System::Extended Cycles)/* overload */;
extern DELPHI_PACKAGE float __fastcall CycleToGrad(const float Cycles)/* overload */;
extern DELPHI_PACKAGE double __fastcall CycleToGrad(const double Cycles)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall CycleToGrad(const System::Extended Cycles)/* overload */;
extern DELPHI_PACKAGE float __fastcall LnXP1(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall LnXP1(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall LnXP1(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall IntPower(const float Base, const int Exponent)/* overload */;
extern DELPHI_PACKAGE double __fastcall IntPower(const double Base, const int Exponent)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall IntPower(const System::Extended Base, const int Exponent)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall ArcCos(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE double __fastcall ArcCos(const double X)/* overload */;
extern DELPHI_PACKAGE float __fastcall ArcCos(const float X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall ArcSin(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE double __fastcall ArcSin(const double X)/* overload */;
extern DELPHI_PACKAGE float __fastcall ArcSin(const float X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall ArcTan2(const System::Extended Y, const System::Extended X)/* overload */;
extern DELPHI_PACKAGE double __fastcall ArcTan2(const double Y, const double X)/* overload */;
extern DELPHI_PACKAGE float __fastcall ArcTan2(const float Y, const float X)/* overload */;
extern DELPHI_PACKAGE float __fastcall Tan(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall Tan(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Tan(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall Cotan(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall Cotan(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Cotan(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall Secant(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall Secant(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Secant(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall Cosecant(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall Cosecant(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Cosecant(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall Hypot(const float X, const float Y)/* overload */;
extern DELPHI_PACKAGE double __fastcall Hypot(const double X, const double Y)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Hypot(const System::Extended X, const System::Extended Y)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Hypot(const System::Extended X, const System::Extended Y, const System::Extended Z)/* overload */;
extern DELPHI_PACKAGE double __fastcall Hypot(const double X, const double Y, const double Z)/* overload */;
extern DELPHI_PACKAGE float __fastcall Hypot(const float X, const float Y, const float Z)/* overload */;
extern DELPHI_PACKAGE void __fastcall SinCos(const float Theta, float &Sin, float &Cos)/* overload */;
extern DELPHI_PACKAGE void __fastcall SinCos(const double Theta, double &Sin, double &Cos)/* overload */;
extern DELPHI_PACKAGE void __fastcall SinCos(const System::Extended Theta, System::Extended &Sin, System::Extended &Cos)/* overload */;
extern DELPHI_PACKAGE void __fastcall Frexp(const float X, float &Mantissa, int &Exponent)/* overload */;
extern DELPHI_PACKAGE void __fastcall Frexp(const double X, double &Mantissa, int &Exponent)/* overload */;
extern DELPHI_PACKAGE void __fastcall Frexp(const System::Extended X, System::Extended &Mantissa, int &Exponent)/* overload */;
extern DELPHI_PACKAGE float __fastcall Ldexp(const float X, const int P)/* overload */;
extern DELPHI_PACKAGE double __fastcall Ldexp(const double X, const int P)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Ldexp(const System::Extended X, const int P)/* overload */;
extern DELPHI_PACKAGE int __fastcall Ceil(const float X)/* overload */;
extern DELPHI_PACKAGE int __fastcall Ceil(const double X)/* overload */;
extern DELPHI_PACKAGE int __fastcall Ceil(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE int __fastcall Floor(const float X)/* overload */;
extern DELPHI_PACKAGE int __fastcall Floor(const double X)/* overload */;
extern DELPHI_PACKAGE int __fastcall Floor(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall Log10(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall Log10(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Log10(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall Log2(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall Log2(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Log2(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall LogN(const float Base, const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall LogN(const double Base, const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall LogN(const System::Extended Base, const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall Poly(const float X, const float *Coefficients, const int Coefficients_High)/* overload */;
extern DELPHI_PACKAGE double __fastcall Poly(const double X, const double *Coefficients, const int Coefficients_High)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Poly(const System::Extended X, const System::Extended *Coefficients, const int Coefficients_High)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Power(const System::Extended Base, const System::Extended Exponent)/* overload */;
extern DELPHI_PACKAGE double __fastcall Power(const double Base, const double Exponent)/* overload */;
extern DELPHI_PACKAGE float __fastcall Power(const float Base, const float Exponent)/* overload */;
extern DELPHI_PACKAGE float __fastcall Cosh(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall Cosh(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Cosh(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall Sinh(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall Sinh(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Sinh(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall Tanh(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall Tanh(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Tanh(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall ArcCosh(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall ArcCosh(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall ArcCosh(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall ArcSinh(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall ArcSinh(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall ArcSinh(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall ArcTanh(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall ArcTanh(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall ArcTanh(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall Cot(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall Cot(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Cot(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall Sec(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall Sec(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Sec(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall Csc(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall Csc(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Csc(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall CotH(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall CotH(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall CotH(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall SecH(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall SecH(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall SecH(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall CscH(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall CscH(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall CscH(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall ArcCot(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall ArcCot(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall ArcCot(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall ArcSec(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall ArcSec(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall ArcSec(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall ArcCsc(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall ArcCsc(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall ArcCsc(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall ArcCotH(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall ArcCotH(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall ArcCotH(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall ArcSecH(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall ArcSecH(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall ArcSecH(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE float __fastcall ArcCscH(const float X)/* overload */;
extern DELPHI_PACKAGE double __fastcall ArcCscH(const double X)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall ArcCscH(const System::Extended X)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsNan(const float AValue)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsNan(const double AValue)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsNan(const System::Extended AValue)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsInfinite(const float AValue)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsInfinite(const double AValue)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsInfinite(const System::Extended AValue)/* overload */;
extern DELPHI_PACKAGE float __fastcall Mean(const float *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE double __fastcall Mean(const double *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Mean(const System::Extended *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE float __fastcall MinValue(const float *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE double __fastcall MinValue(const double *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall MinValue(const System::Extended *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE int __fastcall MinIntValue(const int *Data, const int Data_High);
extern DELPHI_PACKAGE int __fastcall Min(const int A, const int B)/* overload */;
extern DELPHI_PACKAGE __int64 __fastcall Min(const __int64 A, const __int64 B)/* overload */;
extern DELPHI_PACKAGE unsigned __int64 __fastcall Min(const unsigned __int64 A, const unsigned __int64 B)/* overload */;
extern DELPHI_PACKAGE float __fastcall Min(const float A, const float B)/* overload */;
extern DELPHI_PACKAGE double __fastcall Min(const double A, const double B)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Min(const System::Extended A, const System::Extended B)/* overload */;
extern DELPHI_PACKAGE float __fastcall MaxValue(const float *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE double __fastcall MaxValue(const double *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall MaxValue(const System::Extended *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE int __fastcall MaxIntValue(const int *Data, const int Data_High);
extern DELPHI_PACKAGE int __fastcall Max(const int A, const int B)/* overload */;
extern DELPHI_PACKAGE __int64 __fastcall Max(const __int64 A, const __int64 B)/* overload */;
extern DELPHI_PACKAGE unsigned __int64 __fastcall Max(const unsigned __int64 A, const unsigned __int64 B)/* overload */;
extern DELPHI_PACKAGE float __fastcall Max(const float A, const float B)/* overload */;
extern DELPHI_PACKAGE double __fastcall Max(const double A, const double B)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Max(const System::Extended A, const System::Extended B)/* overload */;
extern DELPHI_PACKAGE TValueSign __fastcall Sign(const int AValue)/* overload */;
extern DELPHI_PACKAGE TValueSign __fastcall Sign(const __int64 AValue)/* overload */;
extern DELPHI_PACKAGE TValueSign __fastcall Sign(const float AValue)/* overload */;
extern DELPHI_PACKAGE TValueSign __fastcall Sign(const double AValue)/* overload */;
extern DELPHI_PACKAGE TValueSign __fastcall Sign(const System::Extended AValue)/* overload */;
extern DELPHI_PACKAGE System::Types::TValueRelationship __fastcall CompareValue(const System::Extended A, const System::Extended B, System::Extended Epsilon = 0.000000E+00)/* overload */;
extern DELPHI_PACKAGE System::Types::TValueRelationship __fastcall CompareValue(const double A, const double B, double Epsilon = 0.000000E+00)/* overload */;
extern DELPHI_PACKAGE System::Types::TValueRelationship __fastcall CompareValue(const float A, const float B, float Epsilon = 0.000000E+00f)/* overload */;
extern DELPHI_PACKAGE System::Types::TValueRelationship __fastcall CompareValue(const int A, const int B)/* overload */;
extern DELPHI_PACKAGE System::Types::TValueRelationship __fastcall CompareValue(const __int64 A, const __int64 B)/* overload */;
extern DELPHI_PACKAGE System::Types::TValueRelationship __fastcall CompareValue(const unsigned __int64 A, const unsigned __int64 B)/* overload */;
extern DELPHI_PACKAGE bool __fastcall SameValue(const System::Extended A, const System::Extended B, System::Extended Epsilon = 0.000000E+00)/* overload */;
extern DELPHI_PACKAGE bool __fastcall SameValue(const double A, const double B, double Epsilon = 0.000000E+00)/* overload */;
extern DELPHI_PACKAGE bool __fastcall SameValue(const float A, const float B, float Epsilon = 0.000000E+00f)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsZero(const System::Extended A, System::Extended Epsilon = 0.000000E+00)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsZero(const double A, double Epsilon = 0.000000E+00)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsZero(const float A, float Epsilon = 0.000000E+00f)/* overload */;
extern DELPHI_PACKAGE int __fastcall IfThen(bool AValue, const int ATrue, const int AFalse = 0x0)/* overload */;
#ifndef _WIN64
extern DELPHI_PACKAGE __int64 __fastcall IfThen(bool AValue, const __int64 ATrue, const __int64 AFalse = 0LL)/* overload */;
extern DELPHI_PACKAGE unsigned __int64 __fastcall IfThen(bool AValue, const unsigned __int64 ATrue, const unsigned __int64 AFalse = 0ULL)/* overload */;
#else /* _WIN64 */
extern DELPHI_PACKAGE __int64 __fastcall IfThen(bool AValue, const __int64 ATrue, const __int64 AFalse = (__int64)(0LL))/* overload */;
extern DELPHI_PACKAGE unsigned __int64 __fastcall IfThen(bool AValue, const unsigned __int64 ATrue, const unsigned __int64 AFalse = (unsigned __int64)(0ULL))/* overload */;
#endif /* _WIN64 */
extern DELPHI_PACKAGE float __fastcall IfThen(bool AValue, const float ATrue, const float AFalse = 0.000000E+00f)/* overload */;
extern DELPHI_PACKAGE double __fastcall IfThen(bool AValue, const double ATrue, const double AFalse = 0.000000E+00)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall IfThen(bool AValue, const System::Extended ATrue, const System::Extended AFalse = 0.000000E+00)/* overload */;
extern DELPHI_PACKAGE float __fastcall FMod(const float ANumerator, const float ADenominator)/* overload */;
extern DELPHI_PACKAGE double __fastcall FMod(const double ANumerator, const double ADenominator)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall FMod(const System::Extended ANumerator, const System::Extended ADenominator)/* overload */;
extern DELPHI_PACKAGE int __fastcall RandomRange(const int AFrom, const int ATo);
extern DELPHI_PACKAGE int __fastcall RandomFrom(const int *AValues, const int AValues_High)/* overload */;
extern DELPHI_PACKAGE __int64 __fastcall RandomFrom(const __int64 *AValues, const int AValues_High)/* overload */;
extern DELPHI_PACKAGE unsigned __int64 __fastcall RandomFrom(const unsigned __int64 *AValues, const int AValues_High)/* overload */;
extern DELPHI_PACKAGE float __fastcall RandomFrom(const float *AValues, const int AValues_High)/* overload */;
extern DELPHI_PACKAGE double __fastcall RandomFrom(const double *AValues, const int AValues_High)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall RandomFrom(const System::Extended *AValues, const int AValues_High)/* overload */;
extern DELPHI_PACKAGE bool __fastcall InRange(const int AValue, const int AMin, const int AMax)/* overload */;
extern DELPHI_PACKAGE bool __fastcall InRange(const __int64 AValue, const __int64 AMin, const __int64 AMax)/* overload */;
extern DELPHI_PACKAGE bool __fastcall InRange(const unsigned __int64 AValue, const unsigned __int64 AMin, const unsigned __int64 AMax)/* overload */;
extern DELPHI_PACKAGE bool __fastcall InRange(const float AValue, const float AMin, const float AMax)/* overload */;
extern DELPHI_PACKAGE bool __fastcall InRange(const double AValue, const double AMin, const double AMax)/* overload */;
extern DELPHI_PACKAGE bool __fastcall InRange(const System::Extended AValue, const System::Extended AMin, const System::Extended AMax)/* overload */;
extern DELPHI_PACKAGE int __fastcall EnsureRange(const int AValue, const int AMin, const int AMax)/* overload */;
extern DELPHI_PACKAGE __int64 __fastcall EnsureRange(const __int64 AValue, const __int64 AMin, const __int64 AMax)/* overload */;
extern DELPHI_PACKAGE unsigned __int64 __fastcall EnsureRange(const unsigned __int64 AValue, const unsigned __int64 AMin, const unsigned __int64 AMax)/* overload */;
extern DELPHI_PACKAGE float __fastcall EnsureRange(const float AValue, const float AMin, const float AMax)/* overload */;
extern DELPHI_PACKAGE double __fastcall EnsureRange(const double AValue, const double AMin, const double AMax)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall EnsureRange(const System::Extended AValue, const System::Extended AMin, const System::Extended AMax)/* overload */;
extern DELPHI_PACKAGE void __fastcall MeanAndStdDev(const float *Data, const int Data_High, float &Mean, float &StdDev)/* overload */;
extern DELPHI_PACKAGE void __fastcall MeanAndStdDev(const double *Data, const int Data_High, double &Mean, double &StdDev)/* overload */;
extern DELPHI_PACKAGE void __fastcall MeanAndStdDev(const System::Extended *Data, const int Data_High, System::Extended &Mean, System::Extended &StdDev)/* overload */;
extern DELPHI_PACKAGE void __fastcall MomentSkewKurtosis(const double *Data, const int Data_High, System::Extended &M1, System::Extended &M2, System::Extended &M3, System::Extended &M4, System::Extended &Skew, System::Extended &Kurtosis);
extern DELPHI_PACKAGE float __fastcall Norm(const float *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE double __fastcall Norm(const double *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Norm(const System::Extended *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE float __fastcall PopnStdDev(const float *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE double __fastcall PopnStdDev(const double *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall PopnStdDev(const System::Extended *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE float __fastcall PopnVariance(const float *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE double __fastcall PopnVariance(const double *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall PopnVariance(const System::Extended *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE float __fastcall RandG(float Mean, float StdDev)/* overload */;
extern DELPHI_PACKAGE double __fastcall RandG(double Mean, double StdDev)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall RandG(System::Extended Mean, System::Extended StdDev)/* overload */;
extern DELPHI_PACKAGE float __fastcall StdDev(const float *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE double __fastcall StdDev(const double *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall StdDev(const System::Extended *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE int __fastcall SumInt(const int *Data, const int Data_High);
extern DELPHI_PACKAGE float __fastcall Sum(const float *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE double __fastcall Sum(const double *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Sum(const System::Extended *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE float __fastcall SumOfSquares(const float *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE double __fastcall SumOfSquares(const double *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall SumOfSquares(const System::Extended *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE void __fastcall SumsAndSquares(const float *Data, const int Data_High, System::Extended &Sum, System::Extended &SumOfSquares)/* overload */;
extern DELPHI_PACKAGE void __fastcall SumsAndSquares(const double *Data, const int Data_High, System::Extended &Sum, System::Extended &SumOfSquares)/* overload */;
extern DELPHI_PACKAGE void __fastcall SumsAndSquares(const System::Extended *Data, const int Data_High, System::Extended &Sum, System::Extended &SumOfSquares)/* overload */;
extern DELPHI_PACKAGE float __fastcall TotalVariance(const float *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE double __fastcall TotalVariance(const double *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall TotalVariance(const System::Extended *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE float __fastcall Variance(const float *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE double __fastcall Variance(const double *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Variance(const System::Extended *Data, const int Data_High)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall DoubleDecliningBalance(const System::Extended Cost, const System::Extended Salvage, int Life, int Period);
extern DELPHI_PACKAGE System::Extended __fastcall SLNDepreciation(const System::Extended Cost, const System::Extended Salvage, int Life);
extern DELPHI_PACKAGE System::Extended __fastcall SYDDepreciation(const System::Extended Cost, const System::Extended Salvage, int Life, int Period);
extern DELPHI_PACKAGE System::Extended __fastcall InternalRateOfReturn(const System::Extended Guess, const double *CashFlows, const int CashFlows_High);
extern DELPHI_PACKAGE System::Extended __fastcall NetPresentValue(const System::Extended Rate, const double *CashFlows, const int CashFlows_High, TPaymentTime PaymentTime);
extern DELPHI_PACKAGE System::Extended __fastcall FutureValue(const System::Extended Rate, int NPeriods, const System::Extended Payment, const System::Extended PresentValue, TPaymentTime PaymentTime);
extern DELPHI_PACKAGE System::Extended __fastcall InterestPayment(const System::Extended Rate, int Period, int NPeriods, const System::Extended PresentValue, const System::Extended FutureValue, TPaymentTime PaymentTime);
extern DELPHI_PACKAGE System::Extended __fastcall InterestRate(int NPeriods, const System::Extended Payment, const System::Extended PresentValue, const System::Extended FutureValue, TPaymentTime PaymentTime);
extern DELPHI_PACKAGE System::Extended __fastcall NumberOfPeriods(const System::Extended Rate, System::Extended Payment, const System::Extended PresentValue, const System::Extended FutureValue, TPaymentTime PaymentTime);
extern DELPHI_PACKAGE System::Extended __fastcall Payment(System::Extended Rate, int NPeriods, const System::Extended PresentValue, const System::Extended FutureValue, TPaymentTime PaymentTime);
extern DELPHI_PACKAGE System::Extended __fastcall PeriodPayment(const System::Extended Rate, int Period, int NPeriods, const System::Extended PresentValue, const System::Extended FutureValue, TPaymentTime PaymentTime);
extern DELPHI_PACKAGE System::Extended __fastcall PresentValue(const System::Extended Rate, int NPeriods, const System::Extended Payment, const System::Extended FutureValue, TPaymentTime PaymentTime);
extern DELPHI_PACKAGE TFPURoundingMode __fastcall GetFPURoundMode(void);
extern DELPHI_PACKAGE TSSERoundingMode __fastcall GetSSERoundMode(void);
extern DELPHI_PACKAGE TRoundingMode __fastcall GetRoundMode(void);
extern DELPHI_PACKAGE TFPURoundingMode __fastcall SetFPURoundMode(const TFPURoundingMode RoundMode);
extern DELPHI_PACKAGE TSSERoundingMode __fastcall SetSSERoundMode(const TSSERoundingMode RoundMode);
extern DELPHI_PACKAGE TRoundingMode __fastcall SetRoundMode(const TRoundingMode RoundMode);
extern DELPHI_PACKAGE TFPUPrecisionMode __fastcall GetPrecisionMode(void);
extern DELPHI_PACKAGE TFPUPrecisionMode __fastcall SetPrecisionMode(const TFPUPrecisionMode Precision);
extern DELPHI_PACKAGE TFPUExceptionMask __fastcall GetFPUExceptionMask(void);
extern DELPHI_PACKAGE TSSEExceptionMask __fastcall GetSSEExceptionMask(void);
extern DELPHI_PACKAGE TArithmeticExceptionMask __fastcall GetExceptionMask(void);
extern DELPHI_PACKAGE TFPUExceptionMask __fastcall SetFPUExceptionMask(const TFPUExceptionMask Mask);
extern DELPHI_PACKAGE TSSEExceptionMask __fastcall SetSSEExceptionMask(const TSSEExceptionMask Mask);
extern DELPHI_PACKAGE TArithmeticExceptionMask __fastcall SetExceptionMask(const TArithmeticExceptionMask Mask);
extern DELPHI_PACKAGE void __fastcall ClearFPUExceptions(bool RaisePending = true);
extern DELPHI_PACKAGE void __fastcall ClearSSEExceptions(bool RaisePending = true);
extern DELPHI_PACKAGE void __fastcall ClearExceptions(bool RaisePending = true, TArithmeticExceptions ExceptionFlags = (TArithmeticExceptions() << TArithmeticException::exInvalidOp << TArithmeticException::exZeroDivide << TArithmeticException::exOverflow ));
extern DELPHI_PACKAGE TArithmeticExceptions __fastcall GetExceptions(void);
extern DELPHI_PACKAGE TArithmeticExceptions __fastcall SetExceptions(const TArithmeticExceptions Exceptions);
extern DELPHI_PACKAGE void __fastcall RaiseExceptions(const TArithmeticExceptions ExceptionFlags = (TArithmeticExceptions() << TArithmeticException::exInvalidOp << TArithmeticException::exZeroDivide << TArithmeticException::exOverflow ));
}	/* namespace Math */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_MATH)
using namespace System::Math;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_MathHPP
