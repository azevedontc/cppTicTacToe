// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Math.Vectors.pas' rev: 35.00 (Windows)

#ifndef System_Math_VectorsHPP
#define System_Math_VectorsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Math
{
namespace Vectors
{
//-- forward type declarations -----------------------------------------------
struct TEpsilon;
struct tagVECTOR;
struct TVector;
struct TPoint3D;
struct tagVECTOR3D;
struct TMatrix;
struct TMatrixConstants /* Helper for record 'TMatrix' */;
struct TVector3D;
struct TMatrix3D;
struct TMatrix3DConstants /* Helper for record 'TMatrix3D' */;
struct TQuaternion3D;
struct TQuaternion3DConstants /* Helper for record 'TQuaternion3D' */;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TEpsilon
{
public:
	#define TEpsilon_Matrix  (1.000000E-05)
	
	#define TEpsilon_Vector  (1.000000E-04)
	
	#define TEpsilon_Scale  (1.000000E-04)
	
	#define TEpsilon_FontSize  (1.000000E-02)
	
	#define TEpsilon_Position  (1.000000E-03)
	
	#define TEpsilon_Angle  (1.000000E-04)
	
};


typedef System::StaticArray<float, 4> TVector3DType;

typedef System::StaticArray<float, 3> TVectorArray;

typedef System::DynamicArray<System::Types::TPointF> TPolygon;

typedef System::StaticArray<System::Types::TPointF, 4> TCubicBezier;

struct DECLSPEC_DRECORD tagVECTOR
{
	
public:
	union
	{
		struct 
		{
			float X;
			float Y;
			float W;
		};
		struct 
		{
			TVectorArray V;
		};
		
	};
};


typedef TVector *PVector;

struct DECLSPEC_DRECORD TVector
{
public:
	static TVector __fastcall Create(const float AX, const float AY, const float AW = 1.000000E+00f)/* overload */;
	static TVector __fastcall Create(const System::Types::TPointF &APoint)/* overload */;
	static TVector __fastcall _op_Addition(const TVector &AVector1, const TVector &AVector2);
	static TVector __fastcall _op_Subtraction(const TVector &AVector1, const TVector &AVector2);
	static bool __fastcall _op_Equality(const TVector &AVector1, const TVector &AVector2);
	static bool __fastcall _op_Inequality(const TVector &AVector1, const TVector &AVector2);
	static TVector __fastcall _op_Implicit(const System::Types::TPointF &APoint);
	// explicit __fastcall operator System::Types::TPointF();
	__fastcall operator System::Types::TPointF() _DEPRECATED_ATTRIBUTE1("Implicit conversion from TVector to TPointF requires homogenization") ;
	static TVector __fastcall _op_Implicit(const System::Types::TSizeF &ASize);
	static TVector __fastcall _op_Multiply(const TVector &AVector, const float AFactor);
	static TVector __fastcall _op_Multiply(const float AFactor, const TVector &AVector);
	static TVector __fastcall _op_Division(const TVector &AVector, const float AFactor);
	static TVector __fastcall Zero();
	float __fastcall Length();
	TVector __fastcall Normalize();
	TVector __fastcall CrossProduct(const TVector &AVector);
	float __fastcall DotProduct(const TVector &AVector);
	TVector __fastcall MidVector(const TVector &AVector);
	System::Types::TPointF __fastcall ToPointF _DEPRECATED_ATTRIBUTE1("Use explicit typecast instead.") ();
	
	friend TVector operator +(const TVector &AVector1, const TVector &AVector2) { return TVector::_op_Addition(AVector1, AVector2); }
	friend TVector operator -(const TVector &AVector1, const TVector &AVector2) { return TVector::_op_Subtraction(AVector1, AVector2); }
	friend bool operator ==(const TVector &AVector1, const TVector &AVector2) { return TVector::_op_Equality(AVector1, AVector2); }
	friend bool operator !=(const TVector &AVector1, const TVector &AVector2) { return TVector::_op_Inequality(AVector1, AVector2); }
	TVector& operator =(const System::Types::TPointF &APoint) { *this = TVector::_op_Implicit(APoint); return *this; }
	TVector& operator =(const System::Types::TSizeF &ASize) { *this = TVector::_op_Implicit(ASize); return *this; }
	friend TVector operator *(const TVector &AVector, const float AFactor) { return TVector::_op_Multiply(AVector, AFactor); }
	friend TVector operator *(const float AFactor, const TVector &AVector) { return TVector::_op_Multiply(AFactor, AVector); }
	friend TVector operator /(const TVector &AVector, const float AFactor) { return TVector::_op_Division(AVector, AFactor); }
	
public:
	union
	{
		struct 
		{
			float X;
			float Y;
			float W;
		};
		struct 
		{
			TVectorArray V;
		};
		
	};
};


struct DECLSPEC_DRECORD TPoint3D
{
	
public:
	typedef System::StaticArray<float, 3> TPoint3DArray;
	
	
public:
	static TPoint3D __fastcall Create(const float AX, const float AY, const float AZ)/* overload */;
	static TPoint3D __fastcall Create(const TVector3DType &P)/* overload */;
	static TPoint3D __fastcall Create(const System::Types::TPointF &APoint, const float AZ = 0.000000E+00f)/* overload */;
	static TPoint3D __fastcall _op_Addition(const TPoint3D &APoint1, const TPoint3D &APoint2);
	static TPoint3D __fastcall _op_Subtraction(const TPoint3D &APoint1, const TPoint3D &APoint2);
	static bool __fastcall _op_Equality(const TPoint3D &APoint1, const TPoint3D &APoint2);
	static bool __fastcall _op_Inequality(const TPoint3D &APoint1, const TPoint3D &APoint2);
	static TPoint3D __fastcall _op_UnaryNegation(const TPoint3D &APoint);
	static TPoint3D __fastcall _op_Multiply(const TPoint3D &APoint1, const TPoint3D &APoint2);
	static TPoint3D __fastcall _op_Multiply(const TPoint3D &APoint, const float AFactor);
	static TPoint3D __fastcall _op_Multiply(const float AFactor, const TPoint3D &APoint);
	static TPoint3D __fastcall _op_Division(const TPoint3D &APoint, const float AFactor);
	static TPoint3D __fastcall Zero();
	void __fastcall Offset(const TPoint3D &ADelta)/* overload */;
	void __fastcall Offset(const float ADeltaX, const float ADeltaY, const float ADeltaZ)/* overload */;
	TPoint3D __fastcall CrossProduct(const TPoint3D &APoint);
	float __fastcall DotProduct(const TPoint3D &APoint);
	bool __fastcall EqualsTo(const TPoint3D &APoint, const float Epsilon = 0.000000E+00f);
	float __fastcall Length();
	TPoint3D __fastcall Normalize();
	float __fastcall Distance(const TPoint3D &APoint);
	TPoint3D __fastcall Rotate(const TPoint3D &AAxis, const float AAngle);
	TPoint3D __fastcall Reflect(const TPoint3D &APoint);
	TPoint3D __fastcall MidPoint(const TPoint3D &APoint);
	float __fastcall AngleCosine(const TPoint3D &APoint);
	
	friend TPoint3D operator +(const TPoint3D &APoint1, const TPoint3D &APoint2) { return TPoint3D::_op_Addition(APoint1, APoint2); }
	friend TPoint3D operator -(const TPoint3D &APoint1, const TPoint3D &APoint2) { return TPoint3D::_op_Subtraction(APoint1, APoint2); }
	friend bool operator ==(const TPoint3D &APoint1, const TPoint3D &APoint2) { return TPoint3D::_op_Equality(APoint1, APoint2); }
	friend bool operator !=(const TPoint3D &APoint1, const TPoint3D &APoint2) { return TPoint3D::_op_Inequality(APoint1, APoint2); }
	TPoint3D operator -() { return TPoint3D::_op_UnaryNegation(*this); }
	friend TPoint3D operator *(const TPoint3D &APoint1, const TPoint3D &APoint2) { return TPoint3D::_op_Multiply(APoint1, APoint2); }
	friend TPoint3D operator *(const TPoint3D &APoint, const float AFactor) { return TPoint3D::_op_Multiply(APoint, AFactor); }
	friend TPoint3D operator *(const float AFactor, const TPoint3D &APoint) { return TPoint3D::_op_Multiply(AFactor, APoint); }
	friend TPoint3D operator /(const TPoint3D &APoint, const float AFactor) { return TPoint3D::_op_Division(APoint, AFactor); }
	
public:
	union
	{
		struct 
		{
			float X;
			float Y;
			float Z;
		};
		struct 
		{
			TPoint3DArray V;
		};
		
	};
};


typedef TPoint3D *PPoint3D;

struct DECLSPEC_DRECORD tagVECTOR3D
{
	
public:
	union
	{
		struct 
		{
			float X;
			float Y;
			float Z;
			float W;
		};
		struct 
		{
			TVector3DType V;
		};
		
	};
};


typedef System::StaticArray<tagVECTOR, 3> TMaxtrixArrayBase;

struct DECLSPEC_DRECORD TMatrix
{
private:
	TMatrix __fastcall Scale(const float AFactor);
	
public:
	static TMatrix __fastcall CreateRotation(const float AAngle);
	static TMatrix __fastcall CreateScaling(const float AScaleX, const float AScaleY);
	static TMatrix __fastcall CreateTranslation(const float ADeltaX, const float ADeltaY);
	static TMatrix __fastcall _op_Multiply(const TMatrix &AMatrix1, const TMatrix &AMatrix2);
	static System::Types::TPointF __fastcall _op_Multiply(const System::Types::TPointF &APoint, const TMatrix &AMatrix);
	static TVector __fastcall _op_Multiply(const TVector &AVector, const TMatrix &AMatrix);
	static TPoint3D __fastcall _op_Multiply(const TPoint3D &AVector, const TMatrix &AMatrix);
	static bool __fastcall _op_Equality(const TMatrix &RightMatrix, const TMatrix &LeftMatrix);
	float __fastcall Determinant();
	TMatrix __fastcall Adjoint();
	TMatrix __fastcall Inverse();
	System::Types::TPointF __fastcall ExtractScale();
	bool __fastcall EqualsTo(const TMatrix &AMatrix, const float Epsilon = 1.000000E-05f);
	
	friend TMatrix operator *(const TMatrix &AMatrix1, const TMatrix &AMatrix2) { return TMatrix::_op_Multiply(AMatrix1, AMatrix2); }
	friend System::Types::TPointF operator *(const System::Types::TPointF &APoint, const TMatrix &AMatrix) { return TMatrix::_op_Multiply(APoint, AMatrix); }
	friend TVector operator *(const TVector &AVector, const TMatrix &AMatrix) { return TMatrix::_op_Multiply(AVector, AMatrix); }
	friend TPoint3D operator *(const TPoint3D &AVector, const TMatrix &AMatrix) { return TMatrix::_op_Multiply(AVector, AMatrix); }
	friend bool operator ==(const TMatrix &RightMatrix, const TMatrix &LeftMatrix) { return TMatrix::_op_Equality(RightMatrix, LeftMatrix); }
	
public:
	union
	{
		struct 
		{
			float m11;
			float m12;
			float m13;
			float m21;
			float m22;
			float m23;
			float m31;
			float m32;
			float m33;
		};
		struct 
		{
			System::Math::Vectors::TMaxtrixArrayBase M;
		};
		
	};
};


typedef TVector3D *PVector3D;

struct DECLSPEC_DRECORD TVector3D
{
public:
	static TVector3D __fastcall Create(const float AX, const float AY, const float AZ, const float AW = 1.000000E+00f)/* overload */;
	static TVector3D __fastcall Create(const TPoint3D &APoint, const float AW = 1.000000E+00f)/* overload */;
	static TVector3D __fastcall _op_Addition(const TVector3D &AVector1, const TVector3D &AVector2);
	static TVector3D __fastcall _op_Subtraction(const TVector3D &AVector1, const TVector3D &AVector2);
	static bool __fastcall _op_Equality(const TVector3D &AVector1, const TVector3D &AVector2);
	static bool __fastcall _op_Inequality(const TVector3D &AVector1, const TVector3D &AVector2);
	static TVector3D __fastcall _op_UnaryNegation(const TVector3D &AVector);
	static TVector3D __fastcall _op_Implicit(const TPoint3D &APoint);
	// explicit __fastcall operator TPoint3D();
	__fastcall operator TPoint3D() _DEPRECATED_ATTRIBUTE1("Implicit conversion from TVector3D to TPoint3D requires homogenization") ;
	static TVector3D __fastcall _op_Multiply(const TVector3D &AVector1, const TVector3D &AVector2);
	static TVector3D __fastcall _op_Multiply(const TVector3D &AVector, const float AFactor);
	static TVector3D __fastcall _op_Multiply(const float AFactor, const TVector3D &AVector);
	static TVector3D __fastcall _op_Division(const TVector3D &AVector, const float AFactor);
	static TVector3D __fastcall Zero();
	void __fastcall Offset _DEPRECATED_ATTRIBUTE1("Use TPoint3D.Offset") (const TPoint3D &ADelta)/* overload */;
	void __fastcall Offset _DEPRECATED_ATTRIBUTE1("Use TPoint3D.Offset") (const float ADeltaX, const float ADeltaY, const float ADeltaZ)/* overload */;
	TVector3D __fastcall CrossProduct _DEPRECATED_ATTRIBUTE1("Use TPoint3D.CrossProduct") (const TVector3D &AVector);
	float __fastcall DotProduct _DEPRECATED_ATTRIBUTE1("Use TPoint3D.DotProduct") (const TVector3D &AVector);
	bool __fastcall EqualsTo(const TVector3D &AVector, const float Epsilon = 0.000000E+00f);
	float __fastcall Length();
	TVector3D __fastcall Normalize();
	float __fastcall Distance(const TVector3D &AVector);
	TVector3D __fastcall Rotate _DEPRECATED_ATTRIBUTE1("Use TPoint3D.Rotate") (const TPoint3D &AAxis, const float AAngle);
	TVector3D __fastcall Reflect _DEPRECATED_ATTRIBUTE1("Use TPoint3D.Reflect") (const TVector3D &AVector);
	TVector3D __fastcall MidVector(const TVector3D &AVector);
	float __fastcall AngleCosine _DEPRECATED_ATTRIBUTE1("Use TPoint3D.AngleCosine") (const TVector3D &AVector);
	TPoint3D __fastcall ToPoint3D _DEPRECATED_ATTRIBUTE1("Use explicit typecast instead.") (const bool ATransform = false);
	
	friend TVector3D operator +(const TVector3D &AVector1, const TVector3D &AVector2) { return TVector3D::_op_Addition(AVector1, AVector2); }
	friend TVector3D operator -(const TVector3D &AVector1, const TVector3D &AVector2) { return TVector3D::_op_Subtraction(AVector1, AVector2); }
	friend bool operator ==(const TVector3D &AVector1, const TVector3D &AVector2) { return TVector3D::_op_Equality(AVector1, AVector2); }
	friend bool operator !=(const TVector3D &AVector1, const TVector3D &AVector2) { return TVector3D::_op_Inequality(AVector1, AVector2); }
	TVector3D operator -() { return TVector3D::_op_UnaryNegation(*this); }
	TVector3D& operator =(const TPoint3D &APoint) { *this = TVector3D::_op_Implicit(APoint); return *this; }
	friend TVector3D operator *(const TVector3D &AVector1, const TVector3D &AVector2) { return TVector3D::_op_Multiply(AVector1, AVector2); }
	friend TVector3D operator *(const TVector3D &AVector, const float AFactor) { return TVector3D::_op_Multiply(AVector, AFactor); }
	friend TVector3D operator *(const float AFactor, const TVector3D &AVector) { return TVector3D::_op_Multiply(AFactor, AVector); }
	friend TVector3D operator /(const TVector3D &AVector, const float AFactor) { return TVector3D::_op_Division(AVector, AFactor); }
	
public:
	union
	{
		struct 
		{
			float X;
			float Y;
			float Z;
			float W;
		};
		struct 
		{
			TVector3DType V;
		};
		
	};
};


typedef System::StaticArray<tagVECTOR3D, 3> TVector3DArrayBase;

typedef System::StaticArray<tagVECTOR3D, 4> TMatrix3DTypeBase;

struct DECLSPEC_DRECORD TMatrix3D
{
private:
	float __fastcall DetInternal(const float a1, const float a2, const float a3, const float b1, const float b2, const float b3, const float c1, const float c2, const float c3);
	TMatrix3D __fastcall Scale(const float AFactor);
	
public:
	__fastcall TMatrix3D(const float AM11, const float AM12, const float AM13, const float AM14, const float AM21, const float AM22, const float AM23, const float AM24, const float AM31, const float AM32, const float AM33, const float AM34, const float AM41, const float AM42, const float AM43, const float AM44)/* overload */;
#ifndef _WIN64
	__fastcall TMatrix3D(const System::DynamicArray<float> AArray)/* overload */;
#else /* _WIN64 */
	__fastcall TMatrix3D(const System::TArray__1<float> AArray)/* overload */;
#endif /* _WIN64 */
	static TMatrix3D __fastcall CreateScaling(const TPoint3D &AScale);
	static TMatrix3D __fastcall CreateTranslation(const TPoint3D &ATranslation);
	static TMatrix3D __fastcall CreateRotationX(const float AAngle);
	static TMatrix3D __fastcall CreateRotationY(const float AAngle);
	static TMatrix3D __fastcall CreateRotationZ(const float AAngle);
	static TMatrix3D __fastcall CreateRotation(const TPoint3D &AAxis, const float AAngle);
	static TMatrix3D __fastcall CreateRotationYawPitchRoll(const float AYaw, const float APitch, const float ARoll);
	static TMatrix3D __fastcall CreateRotationHeadingPitchBank(const float AHeading, const float APitch, const float ABank);
	static TMatrix3D __fastcall CreateLookAtRH(const TPoint3D &ASource, const TPoint3D &ATarget, const TPoint3D &ACeiling);
	static TMatrix3D __fastcall CreateLookAtLH(const TPoint3D &ASource, const TPoint3D &ATarget, const TPoint3D &ACeiling);
	static TMatrix3D __fastcall CreateLookAtDirRH(const TPoint3D &ASource, const TPoint3D &ADirection, const TPoint3D &ACeiling);
	static TMatrix3D __fastcall CreateLookAtDirLH(const TPoint3D &ASource, const TPoint3D &ADirection, const TPoint3D &ACeiling);
	static TMatrix3D __fastcall CreateOrthoLH(const float AWidth, const float AHeight, const float AZNear, const float AZFar);
	static TMatrix3D __fastcall CreateOrthoRH(const float AWidth, const float AHeight, const float AZNear, const float AZFar);
	static TMatrix3D __fastcall CreateOrthoOffCenterLH(const float ALeft, const float ATop, const float ARight, const float ABottom, const float AZNear, const float AZFar);
	static TMatrix3D __fastcall CreateOrthoOffCenterRH(const float ALeft, const float ATop, const float ARight, const float ABottom, const float AZNear, const float AZFar);
	static TMatrix3D __fastcall CreatePerspectiveFovLH(const float AFOV, const float AAspect, const float AZNear, const float AZFar, const bool AHorizontalFOV = false);
	static TMatrix3D __fastcall CreatePerspectiveFovRH(const float AFOV, const float AAspect, const float AZNear, const float AZFar, const bool AHorizontalFOV = false);
	static TMatrix3D __fastcall _op_Multiply(const TMatrix3D &APoint1, const TMatrix3D &APoint2);
	static TPoint3D __fastcall _op_Multiply(const TPoint3D &APoint, const TMatrix3D &AMatrix);
	static TVector3D __fastcall _op_Multiply(const TVector3D &AVector, const TMatrix3D &AMatrix);
	TMatrix3D __fastcall Transpose();
	float __fastcall Determinant();
	TMatrix3D __fastcall Adjoint();
	TMatrix3D __fastcall Inverse();
	TMatrix __fastcall ToMatrix();
	TPoint3D __fastcall EyePosition();
	TMatrix3D() {}
	
	friend TMatrix3D operator *(const TMatrix3D &APoint1, const TMatrix3D &APoint2) { return TMatrix3D::_op_Multiply(APoint1, APoint2); }
	friend TPoint3D operator *(const TPoint3D &APoint, const TMatrix3D &AMatrix) { return TMatrix3D::_op_Multiply(APoint, AMatrix); }
	friend TVector3D operator *(const TVector3D &AVector, const TMatrix3D &AMatrix) { return TMatrix3D::_op_Multiply(AVector, AMatrix); }
	
public:
	union
	{
		struct 
		{
			float m11;
			float m12;
			float m13;
			float m14;
			float m21;
			float m22;
			float m23;
			float m24;
			float m31;
			float m32;
			float m33;
			float m34;
			float m41;
			float m42;
			float m43;
			float m44;
		};
		struct 
		{
			System::Math::Vectors::TMatrix3DTypeBase M;
		};
		
	};
};


struct DECLSPEC_DRECORD TQuaternion3D
{
public:
	__fastcall TQuaternion3D(const TPoint3D &AAxis, const float AAngle)/* overload */;
	__fastcall TQuaternion3D(const float AYaw, const float APitch, const float ARoll)/* overload */;
	__fastcall TQuaternion3D(const TMatrix3D &AMatrix)/* overload */;
	__fastcall operator TMatrix3D();
	static TQuaternion3D __fastcall _op_Multiply(const TQuaternion3D &AQuaternion1, const TQuaternion3D &AQuaternion2);
	float __fastcall Length();
	TQuaternion3D __fastcall Normalize();
	TQuaternion3D() {}
	
	friend TQuaternion3D operator *(const TQuaternion3D &AQuaternion1, const TQuaternion3D &AQuaternion2) { return TQuaternion3D::_op_Multiply(AQuaternion1, AQuaternion2); }
	
public:
	union
	{
		struct 
		{
			TPoint3D ImagPart;
			float RealPart;
		};
		struct 
		{
			TVector3DType V;
		};
		
	};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TVector3D NullVector3D;
extern DELPHI_PACKAGE TPoint3D NullPoint3D;
extern DELPHI_PACKAGE TVector __fastcall Vector(const float X, const float Y, const float W = 1.000000E+00f)/* overload */;
extern DELPHI_PACKAGE TVector __fastcall Vector(const System::Types::TPointF &P, const float W = 1.000000E+00f)/* overload */;
extern DELPHI_PACKAGE TVector3D __fastcall Vector3D(const float X, const float Y, const float Z, const float W = 1.000000E+00f)/* overload */;
extern DELPHI_PACKAGE TVector3D __fastcall Vector3D(const TPoint3D &P, const float W = 1.000000E+00f)/* overload */;
extern DELPHI_PACKAGE TPoint3D __fastcall Point3D(const float X, const float Y, const float Z)/* overload */;
extern DELPHI_PACKAGE TPoint3D __fastcall Point3D _DEPRECATED_ATTRIBUTE1("Use direct typecast instead.") (const TVector3D &AVector3D, const bool ATransform = false)/* overload */;
extern DELPHI_PACKAGE System::Types::TPointF __fastcall PointF(const TVector &V)/* overload */;
}	/* namespace Vectors */
}	/* namespace Math */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_MATH_VECTORS)
using namespace System::Math::Vectors;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_MATH)
using namespace System::Math;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif

//-- user supplied -----------------------------------------------------------
namespace System
{
namespace Math
{
namespace Vectors
{
typedef TVector TMatrixArray[3];
}	/* namespace Vectors */
}	/* namespace Math */
}	/* namespace System */
namespace System
{
namespace Math
{
namespace Vectors
{
typedef TVector3D TVector3DArray[3];
}	/* namespace Vectors */
}	/* namespace Math */
}	/* namespace System */
namespace System
{
namespace Math
{
namespace Vectors
{
typedef TVector3D TMatrix3DType[3];
}	/* namespace Vectors */
}	/* namespace Math */
}	/* namespace System */

#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_Math_VectorsHPP
