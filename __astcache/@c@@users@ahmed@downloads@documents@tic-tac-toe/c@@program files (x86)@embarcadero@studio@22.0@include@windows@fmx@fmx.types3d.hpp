// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Types3D.pas' rev: 35.00 (Windows)

#ifndef Fmx_Types3dHPP
#define Fmx_Types3dHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <System.UIConsts.hpp>
#include <System.Messaging.hpp>
#include <System.Math.Vectors.hpp>
#include <FMX.Types.hpp>
#include <FMX.Graphics.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Types3d
{
//-- forward type declarations -----------------------------------------------
struct TBoundingBox;
struct TVertexElement;
class DELPHICLASS TVertexBuffer;
class DELPHICLASS TIndexBuffer;
struct TMeshVertex;
class DELPHICLASS TMeshData;
struct TContextShaderVariable;
struct TContextShaderSource;
class DELPHICLASS TContextShader;
class DELPHICLASS TShaderManager;
__interface DELPHIINTERFACE ITextureAccess;
typedef System::DelphiInterface<ITextureAccess> _di_ITextureAccess;
class DELPHICLASS TTexture;
class DELPHICLASS TTextureBitmap;
class DELPHICLASS TMaterial;
struct TLightDescription;
class DELPHICLASS TContextBeforeLosingMessage;
class DELPHICLASS TContextLostMessage;
class DELPHICLASS TContextResetMessage;
class DELPHICLASS TContextRemovedMessage;
__interface DELPHIINTERFACE IContextObject;
typedef System::DelphiInterface<IContextObject> _di_IContextObject;
class DELPHICLASS EContext3DException;
class DELPHICLASS TContext3D;
class DELPHICLASS EContextManagerException;
class DELPHICLASS TContextManager;
class DELPHICLASS TPosition3D;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TBoundingBox
{
private:
	float __fastcall GetWidth();
	void __fastcall SetWidth(const float Value);
	float __fastcall GetHeight();
	void __fastcall SetHeight(const float Value);
	float __fastcall GetDepth();
	void __fastcall SetDepth(const float Value);
	System::Math::Vectors::TPoint3D __fastcall GetCenterPoint();
	
public:
	__fastcall TBoundingBox(const System::Math::Vectors::TPoint3D &AnOrigin)/* overload */;
	__fastcall TBoundingBox(const System::Math::Vectors::TPoint3D &AnOrigin, const float Width, const float Height, const float Depth)/* overload */;
	__fastcall TBoundingBox(const float Left, const float Top, const float Near, const float Right, const float Bottom, const float Far)/* overload */;
	__fastcall TBoundingBox(const System::Math::Vectors::TPoint3D &APoint1, const System::Math::Vectors::TPoint3D &APoint2, bool NormalizeBox)/* overload */;
	__fastcall TBoundingBox(const TBoundingBox &ABox, bool NormalizeBox)/* overload */;
#ifndef _WIN64
	__fastcall TBoundingBox(const System::DynamicArray<System::Math::Vectors::TPoint3D> Points)/* overload */;
#else /* _WIN64 */
	__fastcall TBoundingBox(const System::TArray__1<System::Math::Vectors::TPoint3D> Points)/* overload */;
#endif /* _WIN64 */
	__fastcall TBoundingBox(const System::Math::Vectors::PPoint3D Points, const int PointCount)/* overload */;
	static bool __fastcall _op_Equality(const TBoundingBox &LeftBox, const TBoundingBox &RightBox);
	static bool __fastcall _op_Inequality(const TBoundingBox &LeftBox, const TBoundingBox &RightBox);
	static TBoundingBox __fastcall _op_Addition(const TBoundingBox &LeftBox, const TBoundingBox &RightBox);
	static TBoundingBox __fastcall _op_Multiply(const TBoundingBox &LeftBox, const TBoundingBox &RightBox);
	static TBoundingBox __fastcall Empty();
	float __fastcall FitIntoScale(const TBoundingBox &ADesignatedArea);
	TBoundingBox __fastcall FitInto(const TBoundingBox &ADesignatedArea, /* out */ float &ARatio)/* overload */;
	TBoundingBox __fastcall FitInto(const TBoundingBox &ADesignatedArea)/* overload */;
	TBoundingBox __fastcall Normalize();
	bool __fastcall IsEmpty(const float Epsilon = 1.000000E-04f);
	bool __fastcall Contains(const System::Math::Vectors::TPoint3D &APoint)/* overload */;
	bool __fastcall Contains(const TBoundingBox &ABox)/* overload */;
	bool __fastcall IntersectsWith(const TBoundingBox &ABox);
	TBoundingBox __fastcall Intersect(const TBoundingBox &DestBox);
	TBoundingBox __fastcall Union(const TBoundingBox &DestBox)/* overload */;
	TBoundingBox __fastcall Offset(const float DX, const float DY, const float DZ)/* overload */;
	TBoundingBox __fastcall Offset(const System::Math::Vectors::TPoint3D &APoint)/* overload */;
	TBoundingBox __fastcall Inflate(const float DX, const float DY, const float DZ)/* overload */;
	TBoundingBox __fastcall Inflate(const float DL, const float DT, const float DN, const float DR, const float DB, const float DF)/* overload */;
	System::Math::Vectors::TPoint3D __fastcall GetSize();
	bool __fastcall EqualsTo(const TBoundingBox &ABox, const float Epsilon = 0.000000E+00f);
	__property float Width = {read=GetWidth, write=SetWidth};
	__property float Height = {read=GetHeight, write=SetHeight};
	__property float Depth = {read=GetDepth, write=SetDepth};
	__property System::Math::Vectors::TPoint3D CenterPoint = {read=GetCenterPoint};
	TBoundingBox() {}
	
	friend bool operator ==(const TBoundingBox &LeftBox, const TBoundingBox &RightBox) { return TBoundingBox::_op_Equality(LeftBox, RightBox); }
	friend bool operator !=(const TBoundingBox &LeftBox, const TBoundingBox &RightBox) { return TBoundingBox::_op_Inequality(LeftBox, RightBox); }
	friend TBoundingBox operator +(const TBoundingBox &LeftBox, const TBoundingBox &RightBox) { return TBoundingBox::_op_Addition(LeftBox, RightBox); }
	friend TBoundingBox operator *(const TBoundingBox &LeftBox, const TBoundingBox &RightBox) { return TBoundingBox::_op_Multiply(LeftBox, RightBox); }
	
public:
	union
	{
		struct 
		{
			System::Math::Vectors::TPoint3D MinCorner;
			System::Math::Vectors::TPoint3D MaxCorner;
		};
		struct 
		{
			System::Math::Vectors::TPoint3D TopLeftNear;
			System::Math::Vectors::TPoint3D BottomRightFar;
		};
		struct 
		{
			float Left;
			float Top;
			float Near;
			float Right;
			float Bottom;
			float Far;
		};
		
	};
};


typedef TBoundingBox TBox _DEPRECATED_ATTRIBUTE1("Use TBoundingBox") ;

typedef System::DynamicArray<System::Math::Vectors::TMatrix3D> TMatrix3DDynArray;

typedef System::DynamicArray<System::Math::Vectors::TPoint3D> TPoint3DDynArray;

typedef System::DynamicArray<System::Types::TPointF> TPointFDynArray;

enum class DECLSPEC_DENUM TVertexFormat : unsigned char { Vertex, Normal, Color0, Color1, Color2, Color3, ColorF0, ColorF1, ColorF2, ColorF3, TexCoord0, TexCoord1, TexCoord2, TexCoord3, BiNormal, Tangent };

typedef System::Set<TVertexFormat, _DELPHI_SET_ENUMERATOR(TVertexFormat::Vertex), _DELPHI_SET_ENUMERATOR(TVertexFormat::Tangent)> TVertexFormats;

struct DECLSPEC_DRECORD TVertexElement
{
public:
	TVertexFormat Format;
	int Offset;
};


typedef System::DynamicArray<TVertexElement> TVertexDeclaration;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TVertexBuffer : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	void *FBuffer;
	TVertexFormats FFormat;
	int FLength;
	int FSize;
	int FVertexSize;
	int FTexCoord0;
	int FTexCoord1;
	int FTexCoord2;
	int FTexCoord3;
	int FColor0;
	int FColor1;
	int FColor2;
	int FColor3;
	int FColorF0;
	int FColorF1;
	int FColorF2;
	int FColorF3;
	int FNormal;
	int FBiNormal;
	int FTangent;
	int FSaveLength;
	System::Math::Vectors::TPoint3D __fastcall GetVertices(int AIndex);
	System::Types::TPointF __fastcall GetTexCoord0(int AIndex);
	System::Uitypes::TAlphaColor __fastcall GetColor0(int AIndex);
	System::Math::Vectors::TPoint3D __fastcall GetNormals(int AIndex);
	System::Math::Vectors::PPoint3D __fastcall GetNormalsPtr(int AIndex);
	System::Uitypes::TAlphaColor __fastcall GetColor1(int AIndex);
	System::Types::TPointF __fastcall GetTexCoord1(int AIndex);
	System::Types::TPointF __fastcall GetTexCoord2(int AIndex);
	System::Types::TPointF __fastcall GetTexCoord3(int AIndex);
	System::Math::Vectors::PPoint3D __fastcall GetVerticesPtr(int AIndex);
	void * __fastcall GetItemPtr(int AIndex);
	void __fastcall SetVertices(int AIndex, const System::Math::Vectors::TPoint3D &Value);
	void __fastcall SetColor0(int AIndex, const System::Uitypes::TAlphaColor Value);
	void __fastcall SetNormals(int AIndex, const System::Math::Vectors::TPoint3D &Value);
	void __fastcall SetColor1(int AIndex, const System::Uitypes::TAlphaColor Value);
	void __fastcall SetTexCoord0(int AIndex, const System::Types::TPointF &Value);
	void __fastcall SetTexCoord1(int AIndex, const System::Types::TPointF &Value);
	void __fastcall SetTexCoord2(int AIndex, const System::Types::TPointF &Value);
	void __fastcall SetTexCoord3(int AIndex, const System::Types::TPointF &Value);
	void __fastcall SetLength(const int Value);
	System::Uitypes::TAlphaColor __fastcall GetColor2(int AIndex);
	System::Uitypes::TAlphaColor __fastcall GetColor3(int AIndex);
	void __fastcall SetColor2(int AIndex, const System::Uitypes::TAlphaColor Value);
	void __fastcall SetColor3(int AIndex, const System::Uitypes::TAlphaColor Value);
	System::Math::Vectors::TPoint3D __fastcall GetBiNormals(int AIndex);
	void __fastcall SetBiNormals(int AIndex, const System::Math::Vectors::TPoint3D &Value);
	System::Math::Vectors::TPoint3D __fastcall GetTangents(int AIndex);
	void __fastcall SetTangents(int AIndex, const System::Math::Vectors::TPoint3D &Value);
	System::Math::Vectors::PPoint3D __fastcall GetBiNormalsPtr(int AIndex);
	System::Math::Vectors::PPoint3D __fastcall GetTangentsPtr(int AIndex);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__fastcall virtual TVertexBuffer(const TVertexFormats AFormat, const int ALength);
	__fastcall virtual ~TVertexBuffer();
	void __fastcall BeginDraw(const int ALength);
	void __fastcall EndDraw();
	TVertexDeclaration __fastcall GetVertexDeclarations();
	__property void * Buffer = {read=FBuffer};
	__property int Size = {read=FSize, nodefault};
	__property int VertexSize = {read=FVertexSize, nodefault};
	__property int Length = {read=FLength, write=SetLength, nodefault};
	__property TVertexFormats Format = {read=FFormat, nodefault};
	__property void * ItemPtr[int AIndex] = {read=GetItemPtr};
	__property System::Math::Vectors::TPoint3D Vertices[int AIndex] = {read=GetVertices, write=SetVertices};
	__property System::Math::Vectors::PPoint3D VerticesPtr[int AIndex] = {read=GetVerticesPtr};
	__property System::Math::Vectors::TPoint3D Normals[int AIndex] = {read=GetNormals, write=SetNormals};
	__property System::Math::Vectors::PPoint3D NormalsPtr[int AIndex] = {read=GetNormalsPtr};
	__property System::Math::Vectors::TPoint3D BiNormals[int AIndex] = {read=GetBiNormals, write=SetBiNormals};
	__property System::Math::Vectors::PPoint3D BiNormalsPtr[int AIndex] = {read=GetBiNormalsPtr};
	__property System::Math::Vectors::TPoint3D Tangents[int AIndex] = {read=GetTangents, write=SetTangents};
	__property System::Math::Vectors::PPoint3D TangentsPtr[int AIndex] = {read=GetTangentsPtr};
	__property System::Uitypes::TAlphaColor Color0[int AIndex] = {read=GetColor0, write=SetColor0};
	__property System::Uitypes::TAlphaColor Color1[int AIndex] = {read=GetColor1, write=SetColor1};
	__property System::Uitypes::TAlphaColor Color2[int AIndex] = {read=GetColor2, write=SetColor2};
	__property System::Uitypes::TAlphaColor Color3[int AIndex] = {read=GetColor3, write=SetColor3};
	__property System::Types::TPointF TexCoord0[int AIndex] = {read=GetTexCoord0, write=SetTexCoord0};
	__property System::Types::TPointF TexCoord1[int AIndex] = {read=GetTexCoord1, write=SetTexCoord1};
	__property System::Types::TPointF TexCoord2[int AIndex] = {read=GetTexCoord2, write=SetTexCoord2};
	__property System::Types::TPointF TexCoord3[int AIndex] = {read=GetTexCoord3, write=SetTexCoord3};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum class DECLSPEC_DENUM TIndexFormat : unsigned char { UInt16, UInt32 };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TIndexBuffer : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
public:
	int operator[](int AIndex) { return this->Indices[AIndex]; }
	
private:
	void *FBuffer;
	int FLength;
	int FIndexSize;
	int FSize;
	int FSaveLength;
	TIndexFormat FFormat;
	int __fastcall GetIndices(int AIndex);
	void __fastcall SetIndices(int AIndex, const int Value);
	void __fastcall SetLength(const int Value);
	void __fastcall SetFormat(const TIndexFormat Value);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__fastcall virtual TIndexBuffer(const int ALength, const TIndexFormat AFormat);
	__fastcall virtual ~TIndexBuffer();
	void __fastcall BeginDraw(const int ALength);
	void __fastcall EndDraw();
	__property void * Buffer = {read=FBuffer};
	__property TIndexFormat Format = {read=FFormat, write=SetFormat, nodefault};
	__property int IndexSize = {read=FIndexSize, nodefault};
	__property int Size = {read=FSize, nodefault};
	__property int Length = {read=FLength, write=SetLength, nodefault};
	__property int Indices[int AIndex] = {read=GetIndices, write=SetIndices/*, default*/};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#pragma pack(push,1)
struct DECLSPEC_DRECORD TMeshVertex
{
public:
	float x;
	float y;
	float z;
	float nx;
	float ny;
	float nz;
	float tu;
	float tv;
};
#pragma pack(pop)


class PASCALIMPLEMENTATION TMeshData : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
	
public:
	enum class DECLSPEC_DENUM TCalculateNormalMethod : unsigned char { Default, Fastest, Slowest };
	
	
private:
	struct DECLSPEC_DRECORD TVertexSmoothNormalInfo
	{
	public:
		int VertexId;
		int ScaledRoundedX;
		int ScaledRoundedY;
		int ScaledRoundedZ;
	};
	
	
	
private:
	TVertexBuffer* FVertexBuffer;
	TIndexBuffer* FIndexBuffer;
	System::Classes::TNotifyEvent FOnChanged;
	TPoint3DDynArray FFaceNormals;
	TBoundingBox FBoundingBox;
	bool FBoundingBoxUpdateNeeded;
	System::UnicodeString __fastcall GetNormals();
	System::UnicodeString __fastcall GetPoint3Ds();
	System::UnicodeString __fastcall GetTexCoordinates();
	void __fastcall SetNormals(const System::UnicodeString Value);
	void __fastcall SetPoint3Ds(const System::UnicodeString Value);
	void __fastcall SetTexCoordinates(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetTriangleIndices();
	void __fastcall SetTriangleIndices(const System::UnicodeString Value);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall ReadMesh(System::Classes::TStream* Stream);
	void __fastcall WriteMesh(System::Classes::TStream* Stream);
	
public:
	__fastcall virtual TMeshData();
	__fastcall virtual ~TMeshData();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall AssignFromMeshVertex(const TMeshVertex *Vertices, const int Vertices_High, const System::Word *Indices, const int Indices_High)/* overload */;
	void __fastcall AssignFromMeshVertex(const TMeshVertex *Vertices, const int Vertices_High, const unsigned *Indices, const int Indices_High)/* overload */;
	void __fastcall ChangeFormat(const TVertexFormats ANewFormat);
	void __fastcall Clear();
	void __fastcall CalcFaceNormals(const bool PropagateFaceNormalsToVertices = true);
	void __fastcall CalcSmoothNormals(const TCalculateNormalMethod Method = (TCalculateNormalMethod)(0x0), const float WeldEpsilon = 1.000000E-03f);
	void __fastcall CalcTangentBinormals();
	TBoundingBox __fastcall GetBoundingBox();
	void __fastcall BoundingBoxNeedsUpdate();
	bool __fastcall RayCastIntersect(const float Width, const float Height, const float Depth, const System::Math::Vectors::TPoint3D &RayPos, const System::Math::Vectors::TPoint3D &RayDir, System::Math::Vectors::TPoint3D &Intersection)/* overload */;
	bool __fastcall RayCastIntersect(const System::Math::Vectors::TPoint3D &RayPos, const System::Math::Vectors::TPoint3D &RayDir, System::Math::Vectors::TPoint3D &Intersection)/* overload */;
	void __fastcall Render(TContext3D* const AContext, TMaterial* const AMaterial, const float AOpacity);
	__property TPoint3DDynArray FaceNormals = {read=FFaceNormals};
	__property TIndexBuffer* IndexBuffer = {read=FIndexBuffer};
	__property TVertexBuffer* VertexBuffer = {read=FVertexBuffer};
	__property System::Classes::TNotifyEvent OnChanged = {read=FOnChanged, write=FOnChanged};
	
__published:
	__property System::UnicodeString Normals = {read=GetNormals, write=SetNormals, stored=false};
	__property System::UnicodeString Points = {read=GetPoint3Ds, write=SetPoint3Ds, stored=false};
	__property System::UnicodeString TexCoordinates = {read=GetTexCoordinates, write=SetTexCoordinates, stored=false};
	__property System::UnicodeString TriangleIndices = {read=GetTriangleIndices, write=SetTriangleIndices, stored=false};
};


enum class DECLSPEC_DENUM TContextShaderKind : unsigned char { VertexShader, PixelShader };

enum class DECLSPEC_DENUM TContextShaderVariableKind : unsigned char { Float, Float2, Float3, Vector, Matrix, Texture };

struct DECLSPEC_DRECORD TContextShaderVariable
{
public:
	System::UnicodeString Name;
	TContextShaderVariableKind Kind;
	int Index;
	int Size;
	TContextShaderKind ShaderKind;
	int TextureUnit;
	__fastcall TContextShaderVariable(const System::UnicodeString Name, const TContextShaderVariableKind Kind, const int Index, const int Size);
	TContextShaderVariable() {}
};


enum class DECLSPEC_DENUM TContextShaderArch : unsigned char { Undefined, DX9, DX10, DX11_level_9, DX11, Metal, GLSL, Mac, IOS, Android };

typedef System::DynamicArray<System::Byte> TContextShaderCode;

typedef System::DynamicArray<TContextShaderVariable> TContextShaderVariables;

struct DECLSPEC_DRECORD TContextShaderSource
{
public:
	TContextShaderArch Arch;
	TContextShaderCode Code;
	TContextShaderVariables Variables;
	__fastcall TContextShaderSource(const TContextShaderArch Arch, const System::Byte *ACode, const int ACode_High, const TContextShaderVariable *AVariables, const int AVariables_High);
	bool __fastcall IsDefined();
	bool __fastcall FindVariable(const System::UnicodeString AName, /* out */ TContextShaderVariable &AShaderVariable);
	TContextShaderSource() {}
};


typedef NativeUInt TContextShaderHandle;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TContextShader : /*[[sealed]]*/ public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TContextShaderSource> _TContextShader__1;
	
	
private:
	System::UnicodeString FOriginalSource;
	_TContextShader__1 FSources;
	TContextShaderHandle FHandle;
	TContextShaderKind FKind;
	System::UnicodeString FName;
	int FRefCount;
	int FContextLostId;
	void __fastcall ContextLostHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	
public:
	__fastcall TContextShader();
	__fastcall virtual ~TContextShader();
	__classmethod System::UnicodeString __fastcall BuildKey(const System::UnicodeString Name, const TContextShaderKind Kind, const TContextShaderSource *Sources, const int Sources_High);
	TContextShaderSource __fastcall GetSourceByArch(TContextShaderArch Arch);
	void __fastcall LoadFromData(const System::UnicodeString Name, const TContextShaderKind Kind, const System::UnicodeString OriginalSource, const TContextShaderSource *Sources, const int Sources_High);
	void __fastcall LoadFromFile(const System::UnicodeString FileName);
	void __fastcall LoadFromStream(System::Classes::TStream* const AStream);
	void __fastcall SaveToFile(const System::UnicodeString FileName);
	void __fastcall SaveToStream(System::Classes::TStream* const AStream);
	__property TContextShaderKind Kind = {read=FKind, nodefault};
	__property System::UnicodeString Name = {read=FName};
	__property System::UnicodeString OriginalSource = {read=FOriginalSource};
#ifndef _WIN64
	__property TContextShaderHandle Handle = {read=FHandle, write=FHandle, nodefault};
#else /* _WIN64 */
	__property TContextShaderHandle Handle = {read=FHandle, write=FHandle};
#endif /* _WIN64 */
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TShaderManager : /*[[sealed]]*/ public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static System::Generics::Collections::TObjectDictionary__2<System::UnicodeString,TContextShader*>* FShaderList;
	static TContextShader* __fastcall GetShader(const System::UnicodeString Key);
	
public:
	__classmethod void __fastcall UnInitialize();
	__classmethod TContextShader* __fastcall RegisterShader(TContextShader* const Shader);
	__classmethod TContextShader* __fastcall RegisterShaderFromData(const System::UnicodeString Name, const TContextShaderKind Kind, const System::UnicodeString OriginalSource, const TContextShaderSource *Sources, const int Sources_High);
	__classmethod TContextShader* __fastcall RegisterShaderFromFile(const System::UnicodeString FileName);
	__classmethod void __fastcall UnregisterShader(TContextShader* const Shader);
public:
	/* TObject.Create */ inline __fastcall TShaderManager() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TShaderManager() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{3A41B87B-99E6-4DF7-BA7D-CAC558AD0D90}") ITextureAccess  : public System::IInterface 
{
	virtual void __fastcall SetHandle(const NativeUInt AHandle) = 0 ;
	virtual void __fastcall SetTextureScale(const float Scale) = 0 ;
	__property NativeUInt Handle = {write=SetHandle};
	__property float TextureScale = {write=SetTextureScale};
};

typedef NativeUInt TTextureHandle;

enum class DECLSPEC_DENUM TTextureFilter : unsigned char { Nearest, Linear };

enum class DECLSPEC_DENUM TTextureStyle : unsigned char { MipMaps, Dynamic, RenderTarget, Volatile };

typedef System::Set<TTextureStyle, _DELPHI_SET_ENUMERATOR(TTextureStyle::MipMaps), _DELPHI_SET_ENUMERATOR(TTextureStyle::Volatile)> TTextureStyles;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTexture : public System::Classes::TInterfacedPersistent
{
	typedef System::Classes::TInterfacedPersistent inherited;
	
private:
	int FWidth;
	int FHeight;
	Fmx::Types::TPixelFormat FPixelFormat;
	NativeUInt FHandle;
	TTextureStyles FStyle;
	TTextureFilter FMagFilter;
	TTextureFilter FMinFilter;
	float FTextureScale;
	bool FRequireInitializeAfterLost;
	void *FBits;
	int FContextLostId;
	int FContextResetId;
	void __fastcall ContextLostHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	void __fastcall ContextResetHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	void __fastcall SetPixelFormat(const Fmx::Types::TPixelFormat Value);
	void __fastcall SetStyle(const TTextureStyles Value);
	int __fastcall GetBytesPerPixel();
	void __fastcall SetMagFilter(const TTextureFilter Value);
	void __fastcall SetMinFilter(const TTextureFilter Value);
	void __fastcall SetHeight(const int Value);
	void __fastcall SetWidth(const int Value);
	void __fastcall SetHandle(const NativeUInt AHandle);
	void __fastcall SetTextureScale(const float Scale);
	
public:
	__fastcall virtual TTexture();
	__fastcall virtual ~TTexture();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall SetSize(const int AWidth, const int AHeight);
	bool __fastcall IsEmpty();
	void __fastcall Initialize();
	void __fastcall Finalize();
	void __fastcall LoadFromStream(System::Classes::TStream* const Stream);
	void __fastcall UpdateTexture(const void * Bits, const int Pitch);
	__property int BytesPerPixel = {read=GetBytesPerPixel, nodefault};
	__property TTextureFilter MinFilter = {read=FMinFilter, write=SetMinFilter, nodefault};
	__property TTextureFilter MagFilter = {read=FMagFilter, write=SetMagFilter, nodefault};
	__property Fmx::Types::TPixelFormat PixelFormat = {read=FPixelFormat, write=SetPixelFormat, nodefault};
	__property float TextureScale = {read=FTextureScale};
	__property TTextureStyles Style = {read=FStyle, write=SetStyle, nodefault};
	__property int Width = {read=FWidth, write=SetWidth, nodefault};
	__property int Height = {read=FHeight, write=SetHeight, nodefault};
#ifndef _WIN64
	__property NativeUInt Handle = {read=FHandle, nodefault};
#else /* _WIN64 */
	__property NativeUInt Handle = {read=FHandle};
#endif /* _WIN64 */
private:
	void *__ITextureAccess;	// ITextureAccess 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3A41B87B-99E6-4DF7-BA7D-CAC558AD0D90}
	operator _di_ITextureAccess()
	{
		_di_ITextureAccess intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ITextureAccess*(void) { return (ITextureAccess*)&__ITextureAccess; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TTextureBitmap : public Fmx::Graphics::TBitmap
{
	typedef Fmx::Graphics::TBitmap inherited;
	
private:
	TTexture* FTexture;
	TTexture* __fastcall GetTexture();
	
protected:
	virtual void __fastcall DestroyResources();
	virtual void __fastcall BitmapChanged();
	
public:
	__property TTexture* Texture = {read=GetTexture};
public:
	/* TBitmap.Create */ inline __fastcall virtual TTextureBitmap()/* overload */ : Fmx::Graphics::TBitmap() { }
	/* TBitmap.Create */ inline __fastcall virtual TTextureBitmap(const int AWidth, const int AHeight)/* overload */ : Fmx::Graphics::TBitmap(AWidth, AHeight) { }
	/* TBitmap.CreateFromStream */ inline __fastcall virtual TTextureBitmap(System::Classes::TStream* const AStream) : Fmx::Graphics::TBitmap(AStream) { }
	/* TBitmap.CreateFromFile */ inline __fastcall virtual TTextureBitmap(const System::UnicodeString AFileName) : Fmx::Graphics::TBitmap(AFileName) { }
	/* TBitmap.CreateFromBitmapAndMask */ inline __fastcall TTextureBitmap(Fmx::Graphics::TBitmap* const Bitmap, Fmx::Graphics::TBitmap* const Mask) : Fmx::Graphics::TBitmap(Bitmap, Mask) { }
	/* TBitmap.Destroy */ inline __fastcall virtual ~TTextureBitmap() { }
	
};


class PASCALIMPLEMENTATION TMaterial : public System::TObject
{
	typedef System::TObject inherited;
	
	
public:
	enum class DECLSPEC_DENUM TProperty : unsigned char { ModelViewProjection, ModelView, ModelViewInverseTranspose };
	
	
private:
	System::Classes::TNotifyEvent FOnChange;
	bool FModified;
	System::Generics::Collections::TList__1<void *>* FNotifyList;
	
protected:
	virtual void __fastcall DoInitialize() = 0 ;
	virtual void __fastcall DoApply(TContext3D* const Context);
	virtual void __fastcall DoReset(TContext3D* const Context);
	virtual void __fastcall DoChange();
	__classmethod virtual System::UnicodeString __fastcall DoGetMaterialProperty(const TProperty Prop);
	
public:
	__fastcall virtual TMaterial();
	__fastcall virtual ~TMaterial();
	__classmethod System::UnicodeString __fastcall GetMaterialProperty(const TProperty Prop);
	void __fastcall Apply(TContext3D* const Context);
	void __fastcall Reset(TContext3D* const Context);
	void __fastcall AddFreeNotify(const Fmx::Types::_di_IFreeNotification AObject);
	void __fastcall RemoveFreeNotify(const Fmx::Types::_di_IFreeNotification AObject);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property bool Modified = {read=FModified, nodefault};
};


#ifndef _WIN64
typedef System::TMetaClass* TMaterialClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TMaterialClass);
#endif /* _WIN64 */

enum class DECLSPEC_DENUM TLightType : unsigned char { Directional, Point, Spot };

struct DECLSPEC_DRECORD TLightDescription
{
public:
	bool Enabled;
	System::Uitypes::TAlphaColor Color;
	TLightType LightType;
	float SpotCutOff;
	float SpotExponent;
	System::Math::Vectors::TPoint3D Position;
	System::Math::Vectors::TPoint3D Direction;
	__fastcall TLightDescription(bool AEnabled, System::Uitypes::TAlphaColor AColor, TLightType ALightType, float ASpotCutOff, float ASpotExponent, const System::Math::Vectors::TPoint3D &APosition, const System::Math::Vectors::TPoint3D &ADirection);
	TLightDescription() {}
};


typedef System::Generics::Collections::TList__1<TLightDescription>* TLightDescriptionList;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TContextBeforeLosingMessage : public System::Messaging::TMessageBase
{
	typedef System::Messaging::TMessageBase inherited;
	
public:
	/* TObject.Create */ inline __fastcall TContextBeforeLosingMessage() : System::Messaging::TMessageBase() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TContextBeforeLosingMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TContextLostMessage : public System::Messaging::TMessageBase
{
	typedef System::Messaging::TMessageBase inherited;
	
public:
	/* TObject.Create */ inline __fastcall TContextLostMessage() : System::Messaging::TMessageBase() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TContextLostMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TContextResetMessage : public System::Messaging::TMessageBase
{
	typedef System::Messaging::TMessageBase inherited;
	
public:
	/* TObject.Create */ inline __fastcall TContextResetMessage() : System::Messaging::TMessageBase() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TContextResetMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TContextRemovedMessage : public System::Messaging::TMessageBase
{
	typedef System::Messaging::TMessageBase inherited;
	
public:
	/* TObject.Create */ inline __fastcall TContextRemovedMessage() : System::Messaging::TMessageBase() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TContextRemovedMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum class DECLSPEC_DENUM TProjection : unsigned char { Camera, Screen };

enum class DECLSPEC_DENUM TMultisample : unsigned char { None, TwoSamples, FourSamples };

enum class DECLSPEC_DENUM TClearTarget : unsigned char { Color, Depth, Stencil };

typedef System::Set<TClearTarget, _DELPHI_SET_ENUMERATOR(TClearTarget::Color), _DELPHI_SET_ENUMERATOR(TClearTarget::Stencil)> TClearTargets;

enum class DECLSPEC_DENUM TStencilOp : unsigned char { Keep, Zero, Replace, Increase, Decrease, Invert };

enum class DECLSPEC_DENUM TStencilFunc : unsigned char { Never, Less, Lequal, Greater, Gequal, Equal, NotEqual, Always };

enum class DECLSPEC_DENUM TContextState : unsigned char { cs2DScene, cs3DScene, csZTestOn, csZTestOff, csZWriteOn, csZWriteOff, csAlphaBlendOn, csAlphaBlendOff, csStencilOn, csStencilOff, csColorWriteOn, csColorWriteOff, csScissorOn, csScissorOff, csFrontFace, csBackFace, csAllFace };

enum class DECLSPEC_DENUM TPrimitivesKind : unsigned char { Points, Lines, Triangles };

__interface  INTERFACE_UUID("{A78019E4-F09A-4F8D-AC43-E8D51FE3AD69}") IContextObject  : public System::IInterface 
{
	virtual TContext3D* __fastcall GetContext() = 0 ;
	__property TContext3D* Context = {read=GetContext};
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EContext3DException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EContext3DException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EContext3DException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EContext3DException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EContext3DException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EContext3DException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EContext3DException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EContext3DException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EContext3DException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EContext3DException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EContext3DException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EContext3DException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EContext3DException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EContext3DException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum class DECLSPEC_DENUM TContextStyle : unsigned char { RenderTargetFlipped, Fragile };

typedef System::Set<TContextStyle, _DELPHI_SET_ENUMERATOR(TContextStyle::RenderTargetFlipped), _DELPHI_SET_ENUMERATOR(TContextStyle::Fragile)> TContextStyles;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TContext3D : public System::Classes::TInterfacedPersistent
{
	typedef System::Classes::TInterfacedPersistent inherited;
	
	
public:
	enum class DECLSPEC_DENUM TIndexBufferSupport : unsigned char { Unknown, Int16, Int32 };
	
	
private:
	typedef System::StaticArray<bool, 17> TStatesArray;
	
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	struct DECLSPEC_DRECORD TContextStates
	{
	public:
		TContext3D::TStatesArray States;
		System::Math::Vectors::TMatrix3D Matrix;
		TContext3D* Context;
		System::Types::TRect ScissorRect;
	};
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
	
protected:
	static const System::Int8 DefaultMaxLightCount = System::Int8(0x8);
	
	static const System::Int8 DefaultTextureUnitCount = System::Int8(0x8);
	
	static const System::Int8 DefaultScale = System::Int8(0x1);
	
	static const int MaxInt16Vertices = int(0x10000);
	
	static const int MaxInt16Indices = int(0x10000);
	
	
private:
	static int FContextCount;
	static System::Generics::Collections::TList__1<TContextStates>* FSaveStates;
	static int FGlobalBeginSceneCount;
	static int FChangeStateCount;
	static int FChangeShaderCount;
	static double FFPS;
	static double FRenderTime;
	static double FBeginTime;
	static double FEndTime;
	static Fmx::Types::_di_IFMXTimerService FTimerService;
	static int FFrameCount;
	static TContext3D* FCurrentContext;
	static TStatesArray FCurrentStates;
	static TContextShader* FCurrentVertexShader;
	static TContextShader* FCurrentPixelShader;
	static float FCurrentOpacity;
	static TMaterial* FCurrentMaterial;
	static TMaterialClass FCurrentMaterialClass;
	static TVertexFormats FCurrentFormat;
	static System::Types::TRect FCurrentScissorRect;
	int FBeginSceneCount;
	bool FRecalcScreenMatrix;
	bool FRecalcProjectionMatrix;
	System::Math::Vectors::TMatrix3D FScreenMatrix;
	System::Math::Vectors::TMatrix3D FProjectionMatrix;
	System::Math::Vectors::TMatrix3D FInvScreenMatrix;
	System::Math::Vectors::TMatrix3D FInvProjectionMatrix;
	Fmx::Types::TPosition* FCenterOffset;
	Fmx::Types::TWindowHandle* FParent;
	int FWidth;
	int FHeight;
	float FScale;
	TTexture* FTexture;
	System::Generics::Collections::TList__1<TLightDescription>* FLights;
	TMultisample FMultisample;
	bool FDepthStencil;
	System::Math::Vectors::TMatrix3D FCurrentMatrix;
	System::Math::Vectors::TMatrix3D FCurrentCameraMatrix;
	System::Math::Vectors::TMatrix3D FCurrentCameraInvMatrix;
	float FCurrentAngleOfView;
	TMaterial* FDefaultMaterial;
	System::Math::Vectors::TMatrix3D FRenderToMatrix;
	bool __fastcall GetCurrentState(TContextState AIndex);
	System::Math::Vectors::TMatrix3D __fastcall GetProjectionMatrix();
	System::Math::Vectors::TMatrix3D __fastcall GetScreenMatrix();
	void __fastcall ApplyMaterial(TMaterial* const Material);
	void __fastcall ResetMaterial(TMaterial* const Material);
	System::Math::Vectors::TMatrix3D __fastcall GetCurrentModelViewProjectionMatrix();
	void __fastcall DrawPrimitivesMultiBatch(const TPrimitivesKind AKind, const void * Vertices, const void * Indices, const TVertexDeclaration VertexDeclaration, const int VertexSize, const int VertexCount, const int IndexSize, const int IndexCount);
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual void __fastcall DoFreeBuffer() = 0 ;
	virtual void __fastcall DoResize() = 0 ;
	virtual void __fastcall DoCreateBuffer() = 0 ;
	virtual void __fastcall DoCopyToBitmap(Fmx::Graphics::TBitmap* const Dest, const System::Types::TRect &ARect);
	virtual void __fastcall DoCopyToBits(const void * Bits, const int Pitch, const System::Types::TRect &ARect) = 0 ;
	virtual float __fastcall GetContextScale();
	virtual bool __fastcall DoBeginScene();
	virtual void __fastcall DoEndScene();
	virtual void __fastcall DoClear(const TClearTargets ATarget, const System::Uitypes::TAlphaColor AColor, const float ADepth, const unsigned AStencil) = 0 ;
	virtual void __fastcall DoSetContextState(TContextState AState) = 0 ;
	virtual void __fastcall DoSetStencilOp(const TStencilOp Fail, const TStencilOp ZFail, const TStencilOp ZPass) = 0 ;
	virtual void __fastcall DoSetStencilFunc(const TStencilFunc Func, unsigned Ref, unsigned Mask) = 0 ;
	virtual void __fastcall DoSetScissorRect(const System::Types::TRect &ScissorRect) = 0 ;
	virtual void __fastcall DoDrawPrimitivesBatch(const TPrimitivesKind AKind, const void * Vertices, const void * Indices, const TVertexDeclaration VertexDeclaration, const int VertexSize, const int VertexCount, const int IndexSize, const int IndexCount) = 0 ;
	virtual void __fastcall DoDrawPrimitives(const TPrimitivesKind AKind, const void * Vertices, const void * Indices, const TVertexDeclaration VertexDeclaration, const int VertexSize, const int VertexCount, const int IndexSize, const int IndexCount);
	virtual __classmethod void __fastcall DoInitializeTexture(TTexture* const Texture) = 0 ;
	virtual __classmethod void __fastcall DoFinalizeTexture(TTexture* const Texture) = 0 ;
	virtual __classmethod void __fastcall DoUpdateTexture(TTexture* const Texture, const void * Bits, const int Pitch) = 0 ;
	__classmethod virtual TTexture* __fastcall DoBitmapToTexture(Fmx::Graphics::TBitmap* const Bitmap);
	virtual __classmethod void __fastcall DoInitializeShader(TContextShader* const Shader) = 0 ;
	virtual __classmethod void __fastcall DoFinalizeShader(TContextShader* const Shader) = 0 ;
	virtual void __fastcall DoSetShaders(TContextShader* const VertexShader, TContextShader* const PixelShader) = 0 ;
	virtual void __fastcall DoSetShaderVariable(const System::UnicodeString Name, const System::Math::Vectors::TVector3D *Data, const int Data_High) = 0 /* overload */;
	virtual void __fastcall DoSetShaderVariable(const System::UnicodeString Name, TTexture* const Texture) = 0 /* overload */;
	virtual void __fastcall DoSetShaderVariable(const System::UnicodeString Name, const System::Math::Vectors::TMatrix3D &Matrix) = 0 /* overload */;
	virtual void __fastcall FreeNotification(System::TObject* AObject);
	__fastcall virtual TContext3D(Fmx::Types::TWindowHandle* const AParent, const int AWidth, const int AHeight, const TMultisample AMultisample, const bool ADepthStencil);
	__fastcall virtual TContext3D(TTexture* const ATexture, const TMultisample AMultisample, const bool ADepthStencil);
	virtual void __fastcall InitContext();
	virtual TIndexBufferSupport __fastcall GetIndexBufferSupport();
	
public:
	__fastcall virtual ~TContext3D();
	void __fastcall SetSize(const int AWidth, const int AHeight);
	void __fastcall SetMultisample(const TMultisample Multisample);
	void __fastcall SetStateFromContext(TContext3D* const AContext);
	static void __fastcall ResetStates();
	__property int BeginSceneCount = {read=FBeginSceneCount, nodefault};
	/* static */ __property int GlobalBeginSceneCount = {read=FGlobalBeginSceneCount, nodefault};
	void __fastcall SetRenderToMatrix(const System::Math::Vectors::TMatrix3D &Matrix);
	void __fastcall FreeBuffer();
	void __fastcall Resize();
	void __fastcall CreateBuffer();
	void __fastcall CopyToBitmap(Fmx::Graphics::TBitmap* const Dest, const System::Types::TRect &ARect);
	void __fastcall CopyToBits(const void * Bits, const int Pitch, const System::Types::TRect &ARect);
	bool __fastcall BeginScene();
	void __fastcall EndScene();
	void __fastcall Clear(const System::Uitypes::TAlphaColor AColor)/* overload */;
	void __fastcall Clear(const TClearTargets ATarget, const System::Uitypes::TAlphaColor AColor, const float ADepth, const unsigned AStencil)/* overload */;
	void __fastcall SetMatrix(const System::Math::Vectors::TMatrix3D &M);
	void __fastcall SetCameraMatrix(const System::Math::Vectors::TMatrix3D &M);
	void __fastcall SetCameraAngleOfView(const float Angle);
	void __fastcall PushContextStates();
	void __fastcall PopContextStates();
	void __fastcall SetContextState(const TContextState State);
	void __fastcall SetStencilOp(const TStencilOp Fail, const TStencilOp ZFail, const TStencilOp ZPass);
	void __fastcall SetStencilFunc(const TStencilFunc Func, unsigned Ref, unsigned Mask);
	void __fastcall SetScissorRect(const System::Types::TRect &ScissorRect);
	void __fastcall DrawTriangles(TVertexBuffer* const Vertices, TIndexBuffer* const Indices, TMaterial* const Material, const float Opacity);
	void __fastcall DrawLines(TVertexBuffer* const Vertices, TIndexBuffer* const Indices, TMaterial* const Material, const float Opacity);
	void __fastcall DrawPoints(TVertexBuffer* const Vertices, TIndexBuffer* const Indices, TMaterial* const Material, const float Opacity);
	void __fastcall DrawPrimitives(const TPrimitivesKind AKind, const void * Vertices, const void * Indices, const TVertexDeclaration VertexDeclaration, const int VertexSize, const int VertexCount, const int IndexSize, const int IndexCount, TMaterial* const Material, const float Opacity);
	void __fastcall FillRect(const System::Math::Vectors::TPoint3D &TopLeft, const System::Math::Vectors::TPoint3D &BottomRight, const float Opacity, const System::Uitypes::TAlphaColor Color);
	void __fastcall FillCube(const System::Math::Vectors::TPoint3D &Center, const System::Math::Vectors::TPoint3D &Size, const float Opacity, const System::Uitypes::TAlphaColor Color);
	void __fastcall DrawLine(const System::Math::Vectors::TPoint3D &StartPoint, const System::Math::Vectors::TPoint3D &EndPoint, const float Opacity, const System::Uitypes::TAlphaColor Color);
	void __fastcall DrawRect(const System::Math::Vectors::TPoint3D &TopLeft, const System::Math::Vectors::TPoint3D &BottomRight, const float Opacity, const System::Uitypes::TAlphaColor Color);
	void __fastcall DrawCube(const System::Math::Vectors::TPoint3D &Center, const System::Math::Vectors::TPoint3D &Size, const float Opacity, const System::Uitypes::TAlphaColor Color);
	void __fastcall FillPolygon(const System::Math::Vectors::TPoint3D &Center, const System::Math::Vectors::TPoint3D &Size, const System::Types::TRectF &Rect, const System::Math::Vectors::TPolygon Points, TMaterial* const Material, const float Opacity, bool Front = true, bool Back = true, bool Left = true);
	__classmethod void __fastcall InitializeTexture(TTexture* const Texture);
	__classmethod void __fastcall FinalizeTexture(TTexture* const Texture);
	__classmethod void __fastcall UpdateTexture(TTexture* const Texture, const void * Bits, const int Pitch);
	__classmethod TTexture* __fastcall BitmapToTexture(Fmx::Graphics::TBitmap* const Bitmap);
	__classmethod void __fastcall InitializeShader(TContextShader* const Shader);
	__classmethod void __fastcall FinalizeShader(TContextShader* const Shader);
	void __fastcall SetShaders(TContextShader* const VertexShader, TContextShader* const PixelShader);
	void __fastcall SetShaderVariable(const System::UnicodeString Name, const System::Math::Vectors::TVector3D *Data, const int Data_High)/* overload */;
	void __fastcall SetShaderVariable(const System::UnicodeString Name, TTexture* const Texture)/* overload */;
	void __fastcall SetShaderVariable(const System::UnicodeString Name, const System::Math::Vectors::TMatrix3D &Matrix)/* overload */;
	void __fastcall SetShaderVariable(const System::UnicodeString Name, const System::Uitypes::TAlphaColor Color)/* overload */;
	void __fastcall Pick(float X, float Y, const TProjection AProj, System::Math::Vectors::TVector3D &RayPos, System::Math::Vectors::TVector3D &RayDir);
	System::Math::Vectors::TPoint3D __fastcall WorldToScreen(const TProjection AProj, const System::Math::Vectors::TPoint3D &P);
	__property System::Math::Vectors::TMatrix3D CurrentModelViewProjectionMatrix = {read=GetCurrentModelViewProjectionMatrix};
	__property System::Math::Vectors::TMatrix3D CurrentMatrix = {read=FCurrentMatrix};
	__property System::Math::Vectors::TMatrix3D CurrentCameraMatrix = {read=FCurrentCameraMatrix};
	__property System::Math::Vectors::TMatrix3D CurrentCameraInvMatrix = {read=FCurrentCameraInvMatrix};
	__property System::Math::Vectors::TMatrix3D CurrentProjectionMatrix = {read=GetProjectionMatrix};
	__property System::Math::Vectors::TMatrix3D CurrentScreenMatrix = {read=GetScreenMatrix};
	__property bool CurrentStates[TContextState AIndex] = {read=GetCurrentState};
	/* static */ __property TContext3D* CurrentContext = {read=FCurrentContext};
	/* static */ __property float CurrentOpacity = {read=FCurrentOpacity};
	/* static */ __property TContextShader* CurrentVertexShader = {read=FCurrentVertexShader};
	/* static */ __property TContextShader* CurrentPixelShader = {read=FCurrentPixelShader};
	/* static */ __property System::Types::TRect CurrentScissorRect = {read=FCurrentScissorRect};
	__property System::Generics::Collections::TList__1<TLightDescription>* Lights = {read=FLights};
	__classmethod virtual TContextStyles __fastcall Style();
	__classmethod virtual int __fastcall MaxLightCount();
	virtual __classmethod int __fastcall MaxTextureSize() = 0 ;
	__classmethod virtual int __fastcall TextureUnitCount();
	virtual __classmethod Fmx::Types::TPixelFormat __fastcall PixelFormat() = 0 ;
	__classmethod virtual System::Types::TPointF __fastcall PixelToPixelPolygonOffset();
	/* static */ __property double FPS = {read=FFPS};
	/* static */ __property int ChangeStateCount = {read=FChangeStateCount, nodefault};
	/* static */ __property int ChangeShaderCount = {read=FChangeStateCount, nodefault};
	__property TMaterial* DefaultMaterial = {read=FDefaultMaterial};
	__property Fmx::Types::TPosition* CenterOffset = {read=FCenterOffset};
	__property int Height = {read=FHeight, nodefault};
	__property int Width = {read=FWidth, nodefault};
	__property float Scale = {read=FScale};
	__property TTexture* Texture = {read=FTexture};
	__property bool DepthStencil = {read=FDepthStencil, nodefault};
	__property TMultisample Multisample = {read=FMultisample, nodefault};
	__property TIndexBufferSupport IndexBufferSupport = {read=GetIndexBufferSupport, nodefault};
	virtual __classmethod bool __fastcall Valid() = 0 ;
	__property Fmx::Types::TWindowHandle* Parent = {read=FParent};
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
public:
	/* TObject.Create */ inline __fastcall TContext3D() : System::Classes::TInterfacedPersistent() { }
	
private:
	void *__IFreeNotification;	// Fmx::Types::IFreeNotification 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FEB50EAF-A3B9-4B37-8EDB-1EF9EE2F22D4}
	operator Fmx::Types::_di_IFreeNotification()
	{
		Fmx::Types::_di_IFreeNotification intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IFreeNotification*(void) { return (Fmx::Types::IFreeNotification*)&__IFreeNotification; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TContextClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TContextClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EContextManagerException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EContextManagerException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EContextManagerException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EContextManagerException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EContextManagerException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EContextManagerException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EContextManagerException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EContextManagerException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EContextManagerException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EContextManagerException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EContextManagerException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EContextManagerException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EContextManagerException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EContextManagerException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TContextManager : /*[[sealed]]*/ public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	struct DECLSPEC_DRECORD TContextClassRec
	{
	public:
		TContextClass ContextClass;
		bool Default;
	};
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
	
private:
	static System::Generics::Collections::TList__1<TContextClassRec>* FContextList;
	static TContextClass FDefaultContextClass;
	
private:
	static TContextClass __fastcall GetDefaultContextClass();
	static int __fastcall GetContextCount();
	
public:
	__classmethod void __fastcall UnInitialize();
	__classmethod void __fastcall RegisterContext(const TContextClass ContextClass, const bool ADefault);
	/* static */ __property int ContextCount = {read=GetContextCount, nodefault};
	/* static */ __property TContextClass DefaultContextClass = {read=GetDefaultContextClass};
	__classmethod void __fastcall InitializeShader(TContextShader* const Shader);
	__classmethod void __fastcall FinalizeShader(TContextShader* const Shader);
	__classmethod TContext3D* __fastcall CreateFromWindow(Fmx::Types::TWindowHandle* const AParent, const int AWidth, const int AHeight, const TMultisample AMultisample, const bool ADepthStencil);
	__classmethod TContext3D* __fastcall CreateFromTexture(TTexture* const ATexture, const TMultisample AMultisample, const bool ADepthStencil);
public:
	/* TObject.Create */ inline __fastcall TContextManager() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TContextManager() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TPosition3D : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TNotifyEvent FOnChange;
	float FY;
	float FX;
	float FZ;
	System::Math::Vectors::TPoint3D FDefaultValue;
	System::Classes::TNotifyEvent FOnChangeY;
	System::Classes::TNotifyEvent FOnChangeX;
	System::Classes::TNotifyEvent FOnChangeZ;
	void __fastcall SetPoint3D(const System::Math::Vectors::TPoint3D &Value);
	void __fastcall SetX(const float Value);
	void __fastcall SetY(const float Value);
	void __fastcall SetZ(const float Value);
	System::Math::Vectors::TPoint3D __fastcall GetPoint3D();
	System::Math::Vectors::TVector3D __fastcall GetVector();
	void __fastcall SetVector(const System::Math::Vectors::TVector3D &Value);
	bool __fastcall IsXStored();
	bool __fastcall IsYStored();
	bool __fastcall IsZStored();
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall ReadPoint(System::Classes::TReader* Reader);
	void __fastcall WritePoint(System::Classes::TWriter* Writer);
	
public:
	__fastcall virtual TPosition3D(const System::Math::Vectors::TPoint3D &ADefaultValue);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall SetPoint3DNoChange(const System::Math::Vectors::TPoint3D &P);
	void __fastcall SetVectorNoChange(const System::Math::Vectors::TVector3D &P);
	bool __fastcall Empty();
	__property System::Math::Vectors::TPoint3D Point = {read=GetPoint3D, write=SetPoint3D};
	__property System::Math::Vectors::TVector3D Vector = {read=GetVector, write=SetVector};
	__property System::Math::Vectors::TPoint3D DefaultValue = {read=FDefaultValue, write=FDefaultValue};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnChangeX = {read=FOnChangeX, write=FOnChangeX};
	__property System::Classes::TNotifyEvent OnChangeY = {read=FOnChangeY, write=FOnChangeY};
	__property System::Classes::TNotifyEvent OnChangeZ = {read=FOnChangeZ, write=FOnChangeZ};
	
__published:
	__property float X = {read=FX, write=SetX, stored=IsXStored};
	__property float Y = {read=FY, write=SetY, stored=IsYStored};
	__property float Z = {read=FZ, write=SetZ, stored=IsZStored};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TPosition3D() { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Math::Vectors::TVector3D NullVector3D;
extern DELPHI_PACKAGE System::Math::Vectors::TPoint3D NullPoint3D;
static const System::Word MaxLightCount = System::Word(0x100);
extern DELPHI_PACKAGE System::UnicodeString __fastcall WideGetToken(int &Pos, const System::UnicodeString S, const System::UnicodeString Separators, const System::UnicodeString Stop = System::UnicodeString());
extern DELPHI_PACKAGE int __fastcall VertexSize(const TVertexFormats AFormat);
extern DELPHI_PACKAGE int __fastcall GetVertexOffset(const TVertexFormat APosition, const TVertexFormats AFormat);
extern DELPHI_PACKAGE int __fastcall RayCastSphereIntersect(const System::Math::Vectors::TPoint3D &RayPos, const System::Math::Vectors::TPoint3D &RayDir, const System::Math::Vectors::TPoint3D &SphereCenter, const float SphereRadius, System::Math::Vectors::TPoint3D &IntersectionNear, System::Math::Vectors::TPoint3D &IntersectionFar);
extern DELPHI_PACKAGE int __fastcall RayCastEllipsoidIntersect(const System::Math::Vectors::TPoint3D &RayPos, const System::Math::Vectors::TPoint3D &RayDir, const System::Math::Vectors::TPoint3D &EllipsoidCenter, const float XRadius, const float YRadius, const float ZRadius, System::Math::Vectors::TPoint3D &IntersectionNear, System::Math::Vectors::TPoint3D &IntersectionFar);
extern DELPHI_PACKAGE int __fastcall RayCastCuboidIntersect(const System::Math::Vectors::TPoint3D &RayPos, const System::Math::Vectors::TPoint3D &RayDir, const System::Math::Vectors::TPoint3D &CuboidCenter, const float Width, const float Height, const float Depth, System::Math::Vectors::TPoint3D &IntersectionNear, System::Math::Vectors::TPoint3D &IntersectionFar);
extern DELPHI_PACKAGE bool __fastcall RayCastPlaneIntersect(const System::Math::Vectors::TPoint3D &RayPos, const System::Math::Vectors::TPoint3D &RayDir, const System::Math::Vectors::TPoint3D &PlanePoint, const System::Math::Vectors::TPoint3D &PlaneNormal, System::Math::Vectors::TPoint3D &Intersection);
extern DELPHI_PACKAGE bool __fastcall RayCastTriangleIntersect(const System::Math::Vectors::TPoint3D &RayPos, const System::Math::Vectors::TPoint3D &RayDir, const System::Math::Vectors::TPoint3D &Vertex1, const System::Math::Vectors::TPoint3D &Vertex2, const System::Math::Vectors::TPoint3D &Vertex3, System::Math::Vectors::TPoint3D &Intersection);
}	/* namespace Types3d */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_TYPES3D)
using namespace Fmx::Types3d;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_Types3dHPP
