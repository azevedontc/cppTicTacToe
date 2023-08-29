// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Objects.pas' rev: 35.00 (Windows)

#ifndef Fmx_ObjectsHPP
#define Fmx_ObjectsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <System.Classes.hpp>
#include <System.Rtti.hpp>
#include <System.Messaging.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.hpp>
#include <FMX.TextLayout.hpp>
#include <FMX.Platform.hpp>
#include <FMX.Graphics.hpp>
#include <FMX.MultiResBitmap.hpp>
#include <FMX.ActnList.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Objects
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TShape;
class DELPHICLASS TLine;
class DELPHICLASS TRectangle;
class DELPHICLASS TCaretRectangle;
class DELPHICLASS TRoundRect;
class DELPHICLASS TCalloutRectangle;
class DELPHICLASS TEllipse;
class DELPHICLASS TCircle;
class DELPHICLASS TPie;
class DELPHICLASS TArc;
class DELPHICLASS TCustomPath;
class DELPHICLASS TPath;
class DELPHICLASS TText;
class DELPHICLASS TImageMultiResBitmap;
class DELPHICLASS TImage;
class DELPHICLASS TPaintBox;
class DELPHICLASS TSelection;
class DELPHICLASS TSelectionPoint;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TShape : public Fmx::Controls::TControl
{
	typedef Fmx::Controls::TControl inherited;
	
private:
	Fmx::Graphics::TBrush* FFill;
	Fmx::Graphics::TStrokeBrush* FStroke;
	void __fastcall SetFill(Fmx::Graphics::TBrush* const Value);
	void __fastcall SetStroke(Fmx::Graphics::TStrokeBrush* const Value);
	
protected:
	virtual void __fastcall Painting();
	virtual void __fastcall FillChanged(System::TObject* Sender);
	virtual void __fastcall StrokeChanged(System::TObject* Sender);
	System::Types::TRectF __fastcall GetShapeRect();
	virtual System::Types::TRectF __fastcall DoGetUpdateRect();
	
public:
	__fastcall virtual TShape(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TShape();
	__property Fmx::Graphics::TBrush* Fill = {read=FFill, write=SetFill};
	__property Fmx::Graphics::TStrokeBrush* Stroke = {read=FStroke, write=SetStroke};
	__property System::Types::TRectF ShapeRect = {read=GetShapeRect};
};


enum class DECLSPEC_DENUM TLineType : unsigned char { Diagonal, Top, Left, Bottom, Right };

enum class DECLSPEC_DENUM TLineLocation : unsigned char { Boundary, Inner, InnerWithin };

class PASCALIMPLEMENTATION TLine : public TShape
{
	typedef TShape inherited;
	
private:
	TLineType FLineType;
	bool FShortenLine;
	TLineLocation FLineLocation;
	void __fastcall SetLineType(const TLineType Value);
	void __fastcall SetShortenLine(const bool AValue);
	void __fastcall SetLineLocation(const TLineLocation AValue);
	
protected:
	virtual System::Types::TRectF __fastcall DoGetUpdateRect();
	virtual bool __fastcall IsControlRectEmpty();
	
public:
	__fastcall virtual TLine(System::Classes::TComponent* AOwner);
	virtual void __fastcall Paint();
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Locked = {default=0};
	__property Height;
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property TLineLocation LineLocation = {read=FLineLocation, write=SetLineLocation, default=0};
	__property TLineType LineType = {read=FLineType, write=SetLineType, nodefault};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property bool ShortenLine = {read=FShortenLine, write=SetShortenLine, default=0};
	__property Size;
	__property Stroke;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TShape.Destroy */ inline __fastcall virtual ~TLine() { }
	
};


class PASCALIMPLEMENTATION TRectangle : public TShape
{
	typedef TShape inherited;
	
private:
	float FYRadius;
	float FXRadius;
	Fmx::Types::TCorners FCorners;
	Fmx::Types::TCornerType FCornerType;
	Fmx::Types::TSides FSides;
	bool __fastcall IsCornersStored();
	bool __fastcall IsSidesStored();
	
protected:
	virtual void __fastcall SetXRadius(const float Value);
	virtual void __fastcall SetYRadius(const float Value);
	virtual void __fastcall SetCorners(const Fmx::Types::TCorners Value);
	virtual void __fastcall SetCornerType(const Fmx::Types::TCornerType Value);
	virtual void __fastcall SetSides(const Fmx::Types::TSides Value);
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TRectangle(System::Classes::TComponent* AOwner);
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Fmx::Types::TCorners Corners = {read=FCorners, write=SetCorners, stored=IsCornersStored, nodefault};
	__property Fmx::Types::TCornerType CornerType = {read=FCornerType, write=SetCornerType, default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Fill;
	__property Locked = {default=0};
	__property Height;
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Fmx::Types::TSides Sides = {read=FSides, write=SetSides, stored=IsSidesStored, nodefault};
	__property Size;
	__property Stroke;
	__property Visible = {default=1};
	__property float XRadius = {read=FXRadius, write=SetXRadius};
	__property float YRadius = {read=FYRadius, write=SetYRadius};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TShape.Destroy */ inline __fastcall virtual ~TRectangle() { }
	
};


class PASCALIMPLEMENTATION TCaretRectangle : public TRectangle
{
	typedef TRectangle inherited;
	
private:
	Fmx::Types::TTimer* FFlashTimer;
	Fmx::Types::TCustomCaret* FCaret;
	System::Uitypes::TAlphaColor FColor;
	System::Types::TPointF FPos;
	System::Types::TSizeF FSize;
	Fmx::Types::TFlasherInterval FInterval;
	Fmx::Platform::_di_IFMXSystemInformationService FSystemInformation;
	void __fastcall FlashTimerProc(System::TObject* Sender);
	System::Uitypes::TAlphaColor __fastcall GetColor();
	System::Types::TPointF __fastcall GetPos();
	System::Types::TSizeF __fastcall GetSize();
	HIDESBASE bool __fastcall GetVisible();
	Fmx::Types::TFlasherInterval __fastcall GetInterval();
	Fmx::Types::TCustomCaret* __fastcall GetCaret();
	float __fastcall GetOpacity();
	void __fastcall SetCaret(Fmx::Types::TCustomCaret* const Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual int __fastcall DefaultWidth();
	virtual System::Uitypes::TAlphaColor __fastcall DefaultColor();
	virtual bool __fastcall UseFontColor();
	virtual Fmx::Types::TFlasherInterval __fastcall DefaultInterval();
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	
public:
	__fastcall virtual TCaretRectangle(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCaretRectangle();
	void __fastcall UpdateState();
	__property Fmx::Types::TCustomCaret* Caret = {read=GetCaret, write=SetCaret};
private:
	void *__IFlasher;	// Fmx::Types::IFlasher 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1A9163B4-47FD-45D6-A54F-70158CB01777}
	operator Fmx::Types::_di_IFlasher()
	{
		Fmx::Types::_di_IFlasher intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IFlasher*(void) { return (Fmx::Types::IFlasher*)&__IFlasher; }
	#endif
	
};


class PASCALIMPLEMENTATION TRoundRect : public TShape
{
	typedef TShape inherited;
	
private:
	Fmx::Types::TCorners FCorners;
	bool __fastcall IsCornersStored();
	
protected:
	virtual void __fastcall SetCorners(const Fmx::Types::TCorners Value);
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TRoundRect(System::Classes::TComponent* AOwner);
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Fmx::Types::TCorners Corners = {read=FCorners, write=SetCorners, stored=IsCornersStored, nodefault};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Fill;
	__property Locked = {default=0};
	__property Height;
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property Stroke;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TShape.Destroy */ inline __fastcall virtual ~TRoundRect() { }
	
};


enum class DECLSPEC_DENUM TCalloutPosition : unsigned char { Top, Left, Bottom, Right };

class PASCALIMPLEMENTATION TCalloutRectangle : public TRectangle
{
	typedef TRectangle inherited;
	
private:
	Fmx::Graphics::TPathData* FPath;
	Fmx::Graphics::TPathData* FFillPath;
	float FCalloutWidth;
	float FCalloutLength;
	TCalloutPosition FCalloutPosition;
	float FCalloutOffset;
	void __fastcall SetCalloutWidth(const float Value);
	void __fastcall SetCalloutLength(const float Value);
	void __fastcall SetCalloutPosition(const TCalloutPosition Value);
	void __fastcall SetCalloutOffset(const float Value);
	
protected:
	void __fastcall RebuildPaths();
	virtual void __fastcall SetXRadius(const float Value);
	virtual void __fastcall SetYRadius(const float Value);
	virtual void __fastcall SetCorners(const Fmx::Types::TCorners Value);
	virtual void __fastcall SetCornerType(const Fmx::Types::TCornerType Value);
	virtual void __fastcall SetSides(const Fmx::Types::TSides Value);
	virtual void __fastcall Resize();
	virtual void __fastcall Loaded();
	System::Types::TRectF __fastcall GetCalloutRectangleRect();
	void __fastcall AddCalloutToPath(Fmx::Graphics::TPathData* APath, const System::Types::TRectF &ARect, const System::Types::TSizeF &ACornerRadiuses);
	void __fastcall AddRoundCornerToPath(Fmx::Graphics::TPathData* APath, const System::Types::TRectF &ARect, const System::Types::TSizeF &ACornerSize, const Fmx::Types::TCorner ACorner);
	void __fastcall AddRectCornerToPath(Fmx::Graphics::TPathData* APath, const System::Types::TRectF &ARect, const System::Types::TSizeF &ACornerSize, const Fmx::Types::TCorner ACorner, const bool ASkipEmptySide = true);
	void __fastcall CreatePath();
	void __fastcall CreateFillPath();
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TCalloutRectangle(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCalloutRectangle();
	
__published:
	__property Fill;
	__property float CalloutWidth = {read=FCalloutWidth, write=SetCalloutWidth};
	__property float CalloutLength = {read=FCalloutLength, write=SetCalloutLength};
	__property TCalloutPosition CalloutPosition = {read=FCalloutPosition, write=SetCalloutPosition, default=0};
	__property float CalloutOffset = {read=FCalloutOffset, write=SetCalloutOffset};
	__property Stroke;
};


class PASCALIMPLEMENTATION TEllipse : public TShape
{
	typedef TShape inherited;
	
protected:
	virtual void __fastcall Paint();
	
__published:
	virtual bool __fastcall PointInObjectLocal(float X, float Y);
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Fill;
	__property Locked = {default=0};
	__property Height;
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property Stroke;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TShape.Create */ inline __fastcall virtual TEllipse(System::Classes::TComponent* AOwner) : TShape(AOwner) { }
	/* TShape.Destroy */ inline __fastcall virtual ~TEllipse() { }
	
};


class PASCALIMPLEMENTATION TCircle : public TEllipse
{
	typedef TEllipse inherited;
	
protected:
	virtual void __fastcall Paint();
public:
	/* TShape.Create */ inline __fastcall virtual TCircle(System::Classes::TComponent* AOwner) : TEllipse(AOwner) { }
	/* TShape.Destroy */ inline __fastcall virtual ~TCircle() { }
	
};


class PASCALIMPLEMENTATION TPie : public TEllipse
{
	typedef TEllipse inherited;
	
private:
	float FStartAngle;
	float FEndAngle;
	void __fastcall SetEndAngle(const float Value);
	void __fastcall SetStartAngle(const float Value);
	
protected:
	virtual void __fastcall Paint();
	
public:
	virtual bool __fastcall PointInObject(float X, float Y);
	__fastcall virtual TPie(System::Classes::TComponent* AOwner);
	
__published:
	__property float StartAngle = {read=FStartAngle, write=SetStartAngle};
	__property float EndAngle = {read=FEndAngle, write=SetEndAngle};
public:
	/* TShape.Destroy */ inline __fastcall virtual ~TPie() { }
	
};


class PASCALIMPLEMENTATION TArc : public TEllipse
{
	typedef TEllipse inherited;
	
private:
	float FStartAngle;
	float FEndAngle;
	void __fastcall SetEndAngle(const float Value);
	void __fastcall SetStartAngle(const float Value);
	
protected:
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TArc(System::Classes::TComponent* AOwner);
	
__published:
	__property float StartAngle = {read=FStartAngle, write=SetStartAngle};
	__property float EndAngle = {read=FEndAngle, write=SetEndAngle};
public:
	/* TShape.Destroy */ inline __fastcall virtual ~TArc() { }
	
};


enum class DECLSPEC_DENUM TPathWrapMode : unsigned char { Original, Fit, Stretch, Tile };

class PASCALIMPLEMENTATION TCustomPath : public TShape
{
	typedef TShape inherited;
	
private:
	Fmx::Graphics::TPathData* FData;
	Fmx::Graphics::TPathData* FCurrent;
	TPathWrapMode FWrapMode;
	bool FNeedUpdate;
	void __fastcall SetWrapMode(const TPathWrapMode Value);
	void __fastcall SetPathData(Fmx::Graphics::TPathData* const Value);
	Fmx::Graphics::TPathData* __fastcall GetPath();
	
protected:
	virtual void __fastcall StrokeChanged(System::TObject* Sender);
	void __fastcall DoChanged(System::TObject* Sender);
	virtual void __fastcall Paint();
	virtual void __fastcall Resize();
	virtual void __fastcall Loaded();
	void __fastcall UpdateCurrent();
	
public:
	__fastcall virtual TCustomPath(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomPath();
	virtual bool __fastcall PointInObject(float X, float Y);
	__property Fmx::Graphics::TPathData* Data = {read=FData, write=SetPathData};
	__property TPathWrapMode WrapMode = {read=FWrapMode, write=SetWrapMode, default=2};
private:
	void *__IPathObject;	// Fmx::Graphics::IPathObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {8C014863-4F69-48F2-9CF7-E336BFD3F06B}
	operator Fmx::Graphics::_di_IPathObject()
	{
		Fmx::Graphics::_di_IPathObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Graphics::IPathObject*(void) { return (Fmx::Graphics::IPathObject*)&__IPathObject; }
	#endif
	
};


class PASCALIMPLEMENTATION TPath : public TCustomPath
{
	typedef TCustomPath inherited;
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property Data;
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Fill;
	__property Locked = {default=0};
	__property Height;
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property Stroke;
	__property Visible = {default=1};
	__property Width;
	__property WrapMode = {default=2};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
public:
	/* TCustomPath.Create */ inline __fastcall virtual TPath(System::Classes::TComponent* AOwner) : TCustomPath(AOwner) { }
	/* TCustomPath.Destroy */ inline __fastcall virtual ~TPath() { }
	
};


class PASCALIMPLEMENTATION TText : public Fmx::Controls::TControl
{
	typedef Fmx::Controls::TControl inherited;
	
	
protected:
	class DELPHICLASS TAcceleratorInfo;
#ifndef _WIN64
	#pragma pack(push,4)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TAcceleratorInfo : public System::TObject
	{
		typedef System::TObject inherited;
		
	private:
		Fmx::Graphics::TStrokeBrush* FBrush;
		Fmx::Graphics::TStrokeBrush* __fastcall GetBrush();
		
	private:
		int FKeyIndex;
		bool FIsUnderlineValid;
		System::Types::TPointF FUnderlineBeginPoint;
		System::Types::TPointF FUnderlineEndPoint;
		void __fastcall SetKeyIndex(const int Value);
		bool __fastcall ValidateUnderlinePoints(Fmx::Controls::TControl* const AnOwnerControl, Fmx::Graphics::TCanvas* const ACanvas, Fmx::Textlayout::TTextLayout* const ALayout);
		
	public:
		__fastcall virtual ~TAcceleratorInfo();
		void __fastcall InvalidateUnderline();
		bool __fastcall DrawUnderline(Fmx::Controls::TControl* const AnOwnerControl, Fmx::Graphics::TCanvas* const ACanvas, Fmx::Textlayout::TTextLayout* const ALayout, const System::Uitypes::TAlphaColor AColor, const float AnOpacity);
		__property int KeyIndex = {read=FKeyIndex, write=SetKeyIndex, nodefault};
		__property bool IsUnderlineValid = {read=FIsUnderlineValid, nodefault};
		__property Fmx::Graphics::TStrokeBrush* Brush = {read=GetBrush};
	public:
		/* TObject.Create */ inline __fastcall TAcceleratorInfo() : System::TObject() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
private:
	Fmx::Graphics::TTextSettings* FTextSettings;
	Fmx::Graphics::TTextSettings* FDefaultTextSettings;
	Fmx::Types::TStyledSettings FStyledSettings;
	Fmx::Graphics::TTextSettings* FSavedTextSettings;
	Fmx::Textlayout::TTextLayout* FLayout;
	bool FAutoSize;
	bool FStretch;
	bool FIsChanging;
	Fmx::Types::TPrefixStyle FPrefixStyle;
	TAcceleratorInfo* FAcceleratorKeyInfo;
	void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall DoSetText(const System::UnicodeString Value);
	void __fastcall SetFont(Fmx::Graphics::TFont* const Value);
	void __fastcall SetHorzTextAlign(const Fmx::Types::TTextAlign Value);
	void __fastcall SetVertTextAlign(const Fmx::Types::TTextAlign Value);
	void __fastcall SetWordWrap(const bool Value);
	void __fastcall SetAutoSize(const bool Value);
	void __fastcall SetStretch(const bool Value);
	void __fastcall SetColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetTrimming(const Fmx::Types::TTextTrimming Value);
	void __fastcall SetPrefixStyle(const Fmx::Types::TPrefixStyle Value);
	void __fastcall OnFontChanged(System::TObject* Sender);
	Fmx::Graphics::TTextSettings* __fastcall GetDefaultTextSettings();
	Fmx::Graphics::TTextSettings* __fastcall GetTextSettings();
	void __fastcall SetTextSettings(Fmx::Graphics::TTextSettings* const Value);
	void __fastcall SetStyledSettings(const Fmx::Types::TStyledSettings Value);
	Fmx::Types::TStyledSettings __fastcall GetStyledSettings();
	System::Uitypes::TAlphaColor __fastcall GetColor();
	Fmx::Graphics::TFont* __fastcall GetFont();
	Fmx::Types::TTextAlign __fastcall GetHorzTextAlign();
	Fmx::Types::TTextTrimming __fastcall GetTrimming();
	Fmx::Types::TTextAlign __fastcall GetVertTextAlign();
	bool __fastcall GetWordWrap();
	System::UnicodeString __fastcall GetText();
	bool __fastcall TextStored();
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall FontChanged();
	virtual System::UnicodeString __fastcall ConvertText(const System::UnicodeString Value);
	virtual bool __fastcall SupportsPaintStage(const Fmx::Controls::TPaintStage Stage);
	virtual Fmx::Graphics::TTextSettingsClass __fastcall GetTextSettingsClass();
	virtual void __fastcall Paint();
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	virtual void __fastcall DoRealign();
	void __fastcall AdjustSize();
	virtual void __fastcall Resize();
	virtual void __fastcall Loaded();
	__property Fmx::Textlayout::TTextLayout* Layout = {read=FLayout};
	virtual void __fastcall UpdateDefaultTextSettings();
	virtual bool __fastcall SaveState();
	virtual bool __fastcall RestoreState();
	void __fastcall RemoveAcceleratorKeyInfo();
	__property TAcceleratorInfo* AcceleratorKeyInfo = {read=FAcceleratorKeyInfo};
	
public:
	__fastcall virtual TText(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TText();
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall SetBounds(float X, float Y, float AWidth, float AHeight);
	__property Fmx::Graphics::TFont* Font = {read=GetFont, write=SetFont};
	__property System::Uitypes::TAlphaColor Color = {read=GetColor, write=SetColor, nodefault};
	__property Fmx::Types::TTextAlign HorzTextAlign = {read=GetHorzTextAlign, write=SetHorzTextAlign, nodefault};
	__property Fmx::Types::TTextTrimming Trimming = {read=GetTrimming, write=SetTrimming, nodefault};
	__property Fmx::Types::TTextAlign VertTextAlign = {read=GetVertTextAlign, write=SetVertTextAlign, nodefault};
	__property bool WordWrap = {read=GetWordWrap, write=SetWordWrap, nodefault};
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Locked = {default=0};
	__property Height;
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property bool Stretch = {read=FStretch, write=SetStretch, default=0};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property Fmx::Graphics::TTextSettings* TextSettings = {read=GetTextSettings, write=SetTextSettings};
	__property Fmx::Types::TPrefixStyle PrefixStyle = {read=FPrefixStyle, write=SetPrefixStyle, default=0};
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
private:
	void *__ICaption;	// Fmx::Actnlist::ICaption 
	void *__IObjectState;	// Fmx::Types::IObjectState 
	void *__ITextSettings;	// Fmx::Graphics::ITextSettings 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3D039C9C-8888-466F-A344-E7026EEE2C07}
	operator Fmx::Actnlist::_di_ICaption()
	{
		Fmx::Actnlist::_di_ICaption intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::ICaption*(void) { return (Fmx::Actnlist::ICaption*)&__ICaption; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0402E1A6-1F75-4D28-BFEA-8092803B00EE}
	operator Fmx::Types::_di_IObjectState()
	{
		Fmx::Types::_di_IObjectState intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IObjectState*(void) { return (Fmx::Types::IObjectState*)&__IObjectState; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FD99635D-D8DB-4E26-B36F-97D3AABBCCB3}
	operator Fmx::Graphics::_di_ITextSettings()
	{
		Fmx::Graphics::_di_ITextSettings intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Graphics::ITextSettings*(void) { return (Fmx::Graphics::ITextSettings*)&__ITextSettings; }
	#endif
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TImageMultiResBitmap : public Fmx::Multiresbitmap::TFixedMultiResBitmap
{
	typedef Fmx::Multiresbitmap::TFixedMultiResBitmap inherited;
	
private:
	TImage* FImage;
	
protected:
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	virtual System::Types::TSize __fastcall GetDefaultSize();
public:
	/* TFixedMultiResBitmap.Create */ inline __fastcall TImageMultiResBitmap(System::Classes::TPersistent* AOwner, Fmx::Multiresbitmap::TFixedBitmapItemClass ItemClass)/* overload */ : Fmx::Multiresbitmap::TFixedMultiResBitmap(AOwner, ItemClass) { }
	/* TFixedMultiResBitmap.Create */ inline __fastcall TImageMultiResBitmap(System::Classes::TPersistent* AOwner)/* overload */ : Fmx::Multiresbitmap::TFixedMultiResBitmap(AOwner) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TImageMultiResBitmap() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum class DECLSPEC_DENUM TImageWrapMode : unsigned char { Original, Fit, Stretch, Tile, Center, Place };

class PASCALIMPLEMENTATION TImage : public Fmx::Controls::TControl
{
	typedef Fmx::Controls::TControl inherited;
	
private:
	System::Rtti::TValue FData;
	Fmx::Types::TBounds* FBitmapMargins;
	TImageWrapMode FWrapMode;
	bool FDisableInterpolation;
	TImageWrapMode FMarginWrapMode;
	int FScaleChangedId;
	Fmx::Multiresbitmap::TFixedMultiResBitmap* FMultiResBitmap;
	float FScreenScale;
	float FCurrentScale;
	Fmx::Graphics::TBitmap* FCurrentBitmap;
	bool FCurrentBitmapUpdating;
	void __fastcall SetBitmap(Fmx::Graphics::TBitmap* const Value);
	void __fastcall SetWrapMode(const TImageWrapMode Value);
	void __fastcall SetBitmapMargins(Fmx::Types::TBounds* const Value);
	void __fastcall SetMarginWrapMode(const TImageWrapMode Value);
	void __fastcall SetDisableInterpolation(const bool Value);
	void __fastcall ScaleChangedHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	Fmx::Graphics::TBitmap* __fastcall GetBitmap();
	void __fastcall ReadBitmap(System::Classes::TStream* Stream);
	void __fastcall ReadHiBitmap(System::Classes::TStream* Stream);
	void __fastcall SetMultiResBitmap(Fmx::Multiresbitmap::TFixedMultiResBitmap* const Value);
	void __fastcall UpdateCurrentBitmap();
	Fmx::Multiresbitmap::TCustomMultiResBitmap* __fastcall GetMultiResBitmap();
	
protected:
	virtual void __fastcall DoChanged();
	virtual void __fastcall Paint();
	void __fastcall DrawWithMargins(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &ARect, Fmx::Graphics::TBitmap* const ABitmap, const float AOpacity = 1.000000E+00f);
	Fmx::Multiresbitmap::TCustomBitmapItem* __fastcall ItemForCurrentScale(const bool IncludeEmpty);
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	virtual Fmx::Multiresbitmap::TFixedMultiResBitmap* __fastcall CreateMultiResBitmap();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual bool __fastcall MultiResBitmapStored();
	virtual bool __fastcall CanObserve(const int ID);
	
public:
	__fastcall virtual TImage(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TImage();
	void __fastcall DrawBitmap(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &ARect, Fmx::Graphics::TBitmap* const ABitmap, const float AOpacity = 1.000000E+00f);
	__property Fmx::Graphics::TBitmap* Bitmap = {read=GetBitmap, write=SetBitmap};
	
__published:
	__property Fmx::Multiresbitmap::TFixedMultiResBitmap* MultiResBitmap = {read=FMultiResBitmap, write=SetMultiResBitmap, stored=MultiResBitmapStored};
	__property Align = {default=0};
	__property Anchors;
	__property Fmx::Types::TBounds* BitmapMargins = {read=FBitmapMargins, write=SetBitmapMargins};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property bool DisableInterpolation = {read=FDisableInterpolation, write=SetDisableInterpolation, default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Locked = {default=0};
	__property Height;
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property TImageWrapMode MarginWrapMode = {read=FMarginWrapMode, write=SetMarginWrapMode, default=2};
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property Visible = {default=1};
	__property Width;
	__property TImageWrapMode WrapMode = {read=FWrapMode, write=SetWrapMode, default=1};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
private:
	void *__IMultiResBitmapObject;	// Fmx::Multiresbitmap::IMultiResBitmapObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D64BEB1F-D3C5-4C83-BE1C-DBBA319C0EA5}
	operator Fmx::Multiresbitmap::_di_IMultiResBitmapObject()
	{
		Fmx::Multiresbitmap::_di_IMultiResBitmapObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Multiresbitmap::IMultiResBitmapObject*(void) { return (Fmx::Multiresbitmap::IMultiResBitmapObject*)&__IMultiResBitmapObject; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {5C17D001-47C1-462F-856D-8358B7B2C842}
	operator Fmx::Graphics::_di_IBitmapObject()
	{
		Fmx::Graphics::_di_IBitmapObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Graphics::IBitmapObject*(void) { return (Fmx::Graphics::IBitmapObject*)&__IMultiResBitmapObject; }
	#endif
	
};


typedef void __fastcall (__closure *TPaintEvent)(System::TObject* Sender, Fmx::Graphics::TCanvas* Canvas);

class PASCALIMPLEMENTATION TPaintBox : public Fmx::Controls::TControl
{
	typedef Fmx::Controls::TControl inherited;
	
private:
	TPaintEvent FOnPaint;
	
protected:
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TPaintBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TPaintBox();
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Locked = {default=0};
	__property Height;
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property TPaintEvent OnPaint = {read=FOnPaint, write=FOnPaint};
	__property OnResize;
	__property OnResized;
};


class PASCALIMPLEMENTATION TSelection : public Fmx::Controls::TControl
{
	typedef Fmx::Controls::TControl inherited;
	
	
public:
	enum class DECLSPEC_DENUM TGrabHandle : unsigned char { None, LeftTop, RightTop, LeftBottom, RightBottom };
	
	
public:
	static const unsigned DefaultColor = unsigned(0xff1072c5);
	
	
private:
	bool FParentBounds;
	System::Classes::TNotifyEvent FOnChange;
	bool FHideSelection;
	int FMinSize;
	System::Classes::TNotifyEvent FOnTrack;
	bool FProportional;
	float FGripSize;
	float FRatio;
	TGrabHandle FActiveHandle;
	TGrabHandle FHotHandle;
	System::Types::TPointF FDownPos;
	bool FShowHandles;
	System::Uitypes::TAlphaColor FColor;
	void __fastcall SetHideSelection(const bool Value);
	void __fastcall SetMinSize(const int Value);
	void __fastcall SetGripSize(const float Value);
	void __fastcall ResetInSpace(const System::Types::TPointF &ARotationPoint, const System::Types::TPointF &ASize);
	System::Types::TPointF __fastcall GetProportionalSize(const System::Types::TPointF &ASize);
	TGrabHandle __fastcall GetHandleForPoint(const System::Types::TPointF &P);
	void __fastcall GetTransformLeftTop(float AX, float AY, System::Types::TPointF &NewSize, System::Types::TPointF &Pivot);
	void __fastcall GetTransformLeftBottom(float AX, float AY, System::Types::TPointF &NewSize, System::Types::TPointF &Pivot);
	void __fastcall GetTransformRightTop(float AX, float AY, System::Types::TPointF &NewSize, System::Types::TPointF &Pivot);
	void __fastcall GetTransformRightBottom(float AX, float AY, System::Types::TPointF &NewSize, System::Types::TPointF &Pivot);
	void __fastcall MoveHandle(float AX, float AY);
	void __fastcall SetShowHandles(const bool Value);
	void __fastcall SetColor(const System::Uitypes::TAlphaColor Value);
	
protected:
	virtual System::Types::TRectF __fastcall DoGetUpdateRect();
	virtual void __fastcall Paint();
	virtual void __fastcall DrawHandle(Fmx::Graphics::TCanvas* const Canvas, const TGrabHandle Handle, const System::Types::TRectF &Rect);
	virtual void __fastcall DrawFrame(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &Rect);
	
public:
	virtual bool __fastcall PointInObjectLocal(float X, float Y);
	__fastcall virtual TSelection(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TSelection();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall DoMouseLeave();
	__property TGrabHandle HotHandle = {read=FHotHandle, nodefault};
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property System::Uitypes::TAlphaColor Color = {read=FColor, write=SetColor, default=-15699259};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property float GripSize = {read=FGripSize, write=SetGripSize};
	__property Locked = {default=0};
	__property Height;
	__property bool HideSelection = {read=FHideSelection, write=SetHideSelection, nodefault};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property int MinSize = {read=FMinSize, write=SetMinSize, default=15};
	__property Opacity;
	__property Margins;
	__property bool ParentBounds = {read=FParentBounds, write=FParentBounds, default=1};
	__property bool Proportional = {read=FProportional, write=FProportional, nodefault};
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property bool ShowHandles = {read=FShowHandles, write=SetShowHandles, nodefault};
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
	__property System::Classes::TNotifyEvent OnTrack = {read=FOnTrack, write=FOnTrack};
};


typedef void __fastcall (__closure *TOnChangeTracking)(System::TObject* Sender, float &X, float &Y);

class PASCALIMPLEMENTATION TSelectionPoint : public Fmx::Controls::TStyledControl
{
	typedef Fmx::Controls::TStyledControl inherited;
	
private:
	bool FParentBounds;
	float FGripSize;
	Fmx::Types::TPosition* FGripCenter;
	bool FPressed;
	bool FStylized;
	System::Classes::TNotifyEvent FOnChange;
	TOnChangeTracking FOnChangeTrack;
	void __fastcall SetGripSize(const float Value);
	void __fastcall SetGripCenter(Fmx::Types::TPosition* const Value);
	
protected:
	virtual void __fastcall Paint();
	virtual void __fastcall SetHeight(const float Value);
	virtual void __fastcall SetWidth(const float Value);
	virtual System::Types::TRectF __fastcall DoGetUpdateRect();
	virtual void __fastcall DoMouseEnter();
	virtual void __fastcall DoMouseLeave();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	void __fastcall DoChangeTracking(float &X, float &Y);
	void __fastcall DoChange();
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	
public:
	__fastcall virtual TSelectionPoint(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TSelectionPoint();
	virtual bool __fastcall PointInObjectLocal(float X, float Y);
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property float GripSize = {read=FGripSize, write=SetGripSize};
	__property Fmx::Types::TPosition* GripCenter = {read=FGripCenter, write=SetGripCenter};
	__property Locked = {default=0};
	__property Height;
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property bool ParentBounds = {read=FParentBounds, write=FParentBounds, default=1};
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
	__property TOnChangeTracking OnTrack = {read=FOnChangeTrack, write=FOnChangeTrack};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Objects */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_OBJECTS)
using namespace Fmx::Objects;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_ObjectsHPP
