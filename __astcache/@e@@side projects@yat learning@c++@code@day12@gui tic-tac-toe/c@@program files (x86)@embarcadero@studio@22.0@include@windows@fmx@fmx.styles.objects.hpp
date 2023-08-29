// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Styles.Objects.pas' rev: 35.00 (Windows)

#ifndef Fmx_Styles_ObjectsHPP
#define Fmx_Styles_ObjectsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <System.UIConsts.hpp>
#include <System.Math.hpp>
#include <System.SysUtils.hpp>
#include <System.Messaging.hpp>
#include <System.StrUtils.hpp>
#include <System.Math.Vectors.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.hpp>
#include <FMX.TextLayout.hpp>
#include <FMX.Text.hpp>
#include <FMX.Platform.hpp>
#include <FMX.Ani.hpp>
#include <FMX.MultiResBitmap.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Graphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Styles
{
namespace Objects
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TBitmapLink;
class DELPHICLASS TBitmapLinks;
class DELPHICLASS TCustomStyleObject;
class DELPHICLASS TStyleObject;
class DELPHICLASS TTouchAnimationAdapter;
class DELPHICLASS TTintedStages;
class DELPHICLASS TTintedStyleObject;
__interface DELPHIINTERFACE ITouchAnimationObject;
typedef System::DelphiInterface<ITouchAnimationObject> _di_ITouchAnimationObject;
class DELPHICLASS TSubImage;
class DELPHICLASS TActiveStyleObject;
class DELPHICLASS TTabStyleObject;
class DELPHICLASS TCheckStyleObject;
class DELPHICLASS TButtonStyleObject;
class DELPHICLASS TTintedButtonStyleObject;
class DELPHICLASS TSystemButtonObject;
class DELPHICLASS TMaskedImage;
class DELPHICLASS TActiveMaskedImage;
class DELPHICLASS TStyleShadow;
class DELPHICLASS TStyleTextObject;
class DELPHICLASS TStyleTextAnimation;
class DELPHICLASS TActiveStyleTextObject;
class DELPHICLASS TTabStyleTextObject;
class DELPHICLASS TButtonStyleTextObject;
class DELPHICLASS TActiveOpacityObject;
//-- type declarations -------------------------------------------------------
enum class DECLSPEC_DENUM TStyleTrigger : unsigned char { MouseOver, Pressed, Selected, Focused, Checked, Active };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBitmapLink : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	bool FCapInsetsChanged;
	Fmx::Types::TBounds* FCapInsets;
	Fmx::Types::TBounds* FSourceRect;
	float FScale;
	void __fastcall SetCapInsets(Fmx::Types::TBounds* const Value);
	void __fastcall SetSourceRect(Fmx::Types::TBounds* const Value);
	void __fastcall SetScale(const float Value);
	void __fastcall DoCapInsetsChanged(System::TObject* Sender);
	bool __fastcall IsScaleStored();
	
public:
	__fastcall virtual TBitmapLink(System::Classes::TCollection* Collection);
	__fastcall virtual ~TBitmapLink();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property bool CapInsetsChanged = {read=FCapInsetsChanged, nodefault};
	
__published:
	__property Fmx::Types::TBounds* CapInsets = {read=FCapInsets, write=SetCapInsets};
	__property float Scale = {read=FScale, write=SetScale, stored=IsScaleStored};
	__property Fmx::Types::TBounds* SourceRect = {read=FSourceRect, write=SetSourceRect};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum class DECLSPEC_DENUM TCapWrapMode : unsigned char { Stretch, Tile };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBitmapLinks : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
	
public:
	class DELPHICLASS TPropertyLoader;
	class PASCALIMPLEMENTATION TPropertyLoader : public System::TObject
	{
		typedef System::TObject inherited;
		
	private:
		System::Classes::TFiler* FFiler;
		TBitmapLinks* FInstance;
		System::UnicodeString FPropertyName;
		void __fastcall ReadBitmapMargin(System::Classes::TReader* Reader);
		void __fastcall ReadSourceRect(System::Classes::TReader* Reader);
		void __fastcall ReadBitmapMargin15x(System::Classes::TReader* Reader);
		void __fastcall ReadSourceRect15x(System::Classes::TReader* Reader);
		void __fastcall ReadBitmapMargin20x(System::Classes::TReader* Reader);
		void __fastcall ReadSourceRect20x(System::Classes::TReader* Reader);
		void __fastcall ReadBitmapMargin30x(System::Classes::TReader* Reader);
		void __fastcall ReadSourceRect30x(System::Classes::TReader* Reader);
		TBitmapLink* __fastcall FindOrCreateBitmapLink(const float Scale);
		void __fastcall ReadBitmapLinkSourceRect(System::Classes::TReader* Reader, const float Scale);
		void __fastcall ReadBitmapLinkCapInsets(System::Classes::TReader* Reader, const float Scale);
		
	public:
		__fastcall TPropertyLoader(TBitmapLinks* const AInstance, System::Classes::TFiler* const AFiler, const System::UnicodeString APropertyName);
		void __fastcall ReadSourceRects();
		void __fastcall ReadCapInsets();
		__property TBitmapLinks* Instance = {read=FInstance};
		__property System::UnicodeString PropertyName = {read=FPropertyName};
		__property System::Classes::TFiler* Filer = {read=FFiler};
	public:
		/* TObject.Destroy */ inline __fastcall virtual ~TPropertyLoader() { }
		
	};
	
	
	
private:
	TBitmapLink* __fastcall GetLink(int AIndex);
	bool __fastcall GetEmpty();
	
public:
	__fastcall TBitmapLinks();
	void __fastcall AssignCapInsets(TBitmapLinks* const Source);
	TBitmapLink* __fastcall LinkByScale(const float AScale, const bool ExactMatch);
	__property TBitmapLink* Links[int AIndex] = {read=GetLink};
	__property bool Empty = {read=GetEmpty, nodefault};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TBitmapLinks() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCustomStyleObject : public Fmx::Controls::TControl
{
	typedef Fmx::Controls::TControl inherited;
	
	
public:
	enum class DECLSPEC_DENUM TTintStage : unsigned char { Undefined, Shadow, Mask, Shine };
	
	
private:
	bool FOpaque;
	Fmx::Objects::TImage* FSource;
	System::UnicodeString FSourceLookup;
	TCapWrapMode FCapMode;
	Fmx::Objects::TImageWrapMode FWrapMode;
	System::Uitypes::TAlphaColor FTintColor;
	Fmx::Graphics::TBitmap* FTintBuffer;
	bool FNeedsUpdateTintBuffer;
	TTintStage FTintStage;
	void __fastcall SetCapMode(const TCapWrapMode Value);
	void __fastcall SetWrapMode(const Fmx::Objects::TImageWrapMode Value);
	void __fastcall ReadOpaque(System::Classes::TReader* Reader);
	void __fastcall WriteOpaque(System::Classes::TWriter* Writer);
	void __fastcall SetOpaque(const bool Value);
	void __fastcall SetSource(Fmx::Objects::TImage* const Value);
	void __fastcall SetSourceLookup(const System::UnicodeString Value);
	void __fastcall ReadMarginWrapMode(System::Classes::TReader* Reader);
	static bool FAlignToPixels;
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall Paint();
	virtual void __fastcall FreeNotification(System::TObject* AObject);
	void __fastcall DoDrawToCanvas(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &ARect, const float AOpacity = 1.000000E+00f);
	virtual System::Types::TRectF __fastcall DoGetUpdateRect();
	virtual TBitmapLinks* __fastcall GetCurrentLink() = 0 ;
	virtual bool __fastcall GetCanBeTinted();
	void __fastcall PrepareTintBuffer(Fmx::Graphics::TCanvas* const Canvas, const System::Uitypes::TAlphaColor ATintColor);
	void __fastcall NeedsUpdateTintBuffer();
	void __fastcall SetTintColor(const System::Uitypes::TAlphaColor ATintColor);
	__property bool CanBeTinted = {read=GetCanBeTinted, nodefault};
	__property System::Uitypes::TAlphaColor TintColor = {read=FTintColor, write=SetTintColor, nodefault};
	__property TTintStage TintStage = {read=FTintStage, nodefault};
	__property Fmx::Graphics::TBitmap* TintBuffer = {read=FTintBuffer};
	
public:
	__fastcall virtual TCustomStyleObject(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomStyleObject();
	void __fastcall DrawToCanvas(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &ARect, const float AOpacity = 1.000000E+00f)/* overload */;
	void __fastcall DrawToCanvas(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &ARect, const System::Uitypes::TAlphaColor ATintColor, const float AOpacity = 1.000000E+00f)/* overload */;
	bool __fastcall IsEmpty();
	__property bool Opaque = {read=FOpaque, write=SetOpaque, nodefault};
	__property Fmx::Objects::TImage* Source = {read=FSource, write=SetSource};
	__classmethod float __fastcall ScreenScaleToStyleScale(const float ScreenScale);
	/* static */ __property bool AlignToPixels = {read=FAlignToPixels, write=FAlignToPixels, nodefault};
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property TCapWrapMode CapMode = {read=FCapMode, write=SetCapMode, default=0};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Locked = {default=0};
	__property Height;
	__property HitTest = {default=0};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property System::UnicodeString SourceLookup = {read=FSourceLookup, write=SetSourceLookup};
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Size;
	__property Scale;
	__property Fmx::Objects::TImageWrapMode WrapMode = {read=FWrapMode, write=SetWrapMode, default=2};
	__property Visible = {default=1};
	__property Width;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
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
	void *__IDrawableObject;	// Fmx::Controls::IDrawableObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C86EEAD8-69BF-4FDF-9FEE-A2F65E0EB3F0}
	operator Fmx::Controls::_di_IDrawableObject()
	{
		Fmx::Controls::_di_IDrawableObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Controls::IDrawableObject*(void) { return (Fmx::Controls::IDrawableObject*)&__IDrawableObject; }
	#endif
	
};


class PASCALIMPLEMENTATION TStyleObject : public TCustomStyleObject
{
	typedef TCustomStyleObject inherited;
	
private:
	TBitmapLinks* FSourceLink;
	void __fastcall SetSourceLink(TBitmapLinks* const Value);
	
protected:
	virtual TBitmapLinks* __fastcall GetCurrentLink();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	
public:
	__fastcall virtual TStyleObject(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TStyleObject();
	
__published:
	__property TBitmapLinks* SourceLink = {read=FSourceLink, write=SetSourceLink};
};


class PASCALIMPLEMENTATION TTouchAnimationAdapter : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
	
public:
	enum class DECLSPEC_DENUM TAnimationKind : unsigned char { Pressed, Unpressed };
	
	typedef void __fastcall (__closure *TCustomPaint)();
	
	class DELPHICLASS TTouchAnimation;
	class PASCALIMPLEMENTATION TTouchAnimation : public Fmx::Ani::TAnimation
	{
		typedef Fmx::Ani::TAnimation inherited;
		
	private:
		TTouchAnimationAdapter* FAdapter;
		
	protected:
		virtual void __fastcall ProcessAnimation();
	public:
		/* TAnimation.Create */ inline __fastcall virtual TTouchAnimation(System::Classes::TComponent* AOwner) : Fmx::Ani::TAnimation(AOwner) { }
		/* TAnimation.Destroy */ inline __fastcall virtual ~TTouchAnimation() { }
		
	};
	
	
	class DELPHICLASS TTouchAnimationObject;
	class PASCALIMPLEMENTATION TTouchAnimationObject : public TCustomStyleObject
	{
		typedef TCustomStyleObject inherited;
		
	private:
		TTouchAnimationAdapter* FAdapter;
		
	protected:
		virtual TBitmapLinks* __fastcall GetCurrentLink();
	public:
		/* TCustomStyleObject.Create */ inline __fastcall virtual TTouchAnimationObject(System::Classes::TComponent* AOwner) : TCustomStyleObject(AOwner) { }
		/* TCustomStyleObject.Destroy */ inline __fastcall virtual ~TTouchAnimationObject() { }
		
	};
	
	
	
public:
	#define TTouchAnimationAdapter_DefaultUnpressingDuration  (3.000000E-01)
	
	static const System::Int8 DefaultPressingDuration = System::Int8(0x1);
	
	
private:
	TCustomStyleObject* FStyleObject;
	TTouchAnimation* FTouchAnimation;
	TTouchAnimationObject* FTouchAnimationObject;
	TBitmapLinks* FLink;
	System::Types::TPointF FPressedPosition;
	float FPressingDuration;
	float FUnpressingDuration;
	Fmx::Types::TBounds* FPadding;
	TCustomPaint FCustomPaint;
	void __fastcall SetLink(TBitmapLinks* const Value);
	bool __fastcall PressingDurationStored();
	bool __fastcall UnpressingDurationStored();
	void __fastcall SetPadding(Fmx::Types::TBounds* const Value);
	void __fastcall ReadPaddingRect(System::Classes::TReader* Reader);
	void __fastcall CreateTouchAnimation();
	
public:
	__fastcall virtual TTouchAnimationAdapter(TCustomStyleObject* const AStyleObject);
	__fastcall virtual ~TTouchAnimationAdapter();
	void __fastcall StartAnimation(Fmx::Controls::TControl* const Control, const TAnimationKind Kind);
	void __fastcall StopAnimation();
	void __fastcall DrawTouchAnimation(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &Rect);
	void __fastcall StartTriggerAnimation(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
	void __fastcall DefineTouchAnimationProperty(System::Classes::TFiler* Filer);
	bool __fastcall LinkExists();
	__property TTouchAnimation* TouchAnimation = {read=FTouchAnimation};
	__property TCustomPaint CustomPaint = {read=FCustomPaint, write=FCustomPaint};
	
__published:
	__property TBitmapLinks* Link = {read=FLink, write=SetLink};
	__property float PressingDuration = {read=FPressingDuration, write=FPressingDuration, stored=PressingDurationStored};
	__property float UnpressingDuration = {read=FUnpressingDuration, write=FUnpressingDuration, stored=UnpressingDurationStored};
	__property Fmx::Types::TBounds* Padding = {read=FPadding, write=SetPadding};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTintedStages : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TCustomStyleObject* FStyleObject;
	TBitmapLinks* FShadow;
	TBitmapLinks* FMask;
	TBitmapLinks* FShine;
	void __fastcall SetMask(TBitmapLinks* const Value);
	void __fastcall SetShadow(TBitmapLinks* const Value);
	void __fastcall SetShine(TBitmapLinks* const Value);
	
public:
	__fastcall TTintedStages(TCustomStyleObject* const AStyleObject);
	__fastcall virtual ~TTintedStages();
	__property TCustomStyleObject* StyleObject = {read=FStyleObject};
	
__published:
	__property TBitmapLinks* Shadow = {read=FShadow, write=SetShadow};
	__property TBitmapLinks* Mask = {read=FMask, write=SetMask};
	__property TBitmapLinks* Shine = {read=FShine, write=SetShine};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TTintedStyleObject : public TStyleObject
{
	typedef TStyleObject inherited;
	
private:
	TTintedStages* FTint;
	void __fastcall SetTint(TTintedStages* const Value);
	
protected:
	virtual TBitmapLinks* __fastcall GetCurrentLink();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall Loaded();
	virtual bool __fastcall GetCanBeTinted();
	
public:
	__fastcall virtual TTintedStyleObject(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTintedStyleObject();
	
__published:
	__property TTintedStages* Tint = {read=FTint, write=SetTint};
private:
	void *__ITintedObject;	// Fmx::Controls::ITintedObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {42D829B7-6D86-41CC-86D5-F92C1FCAB060}
	operator Fmx::Controls::_di_ITintedObject()
	{
		Fmx::Controls::_di_ITintedObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Controls::ITintedObject*(void) { return (Fmx::Controls::ITintedObject*)&__ITintedObject; }
	#endif
	
};


__interface  INTERFACE_UUID("{75657913-BED4-45CA-A394-B27BF7B2225F}") ITouchAnimationObject  : public System::IInterface 
{
	virtual TTouchAnimationAdapter* __fastcall GetTouchAnimation() = 0 ;
	__property TTouchAnimationAdapter* TouchAnimation = {read=GetTouchAnimation};
};

class PASCALIMPLEMENTATION TSubImage : public TStyleObject
{
	typedef TStyleObject inherited;
	
public:
	/* TStyleObject.Create */ inline __fastcall virtual TSubImage(System::Classes::TComponent* AOwner) : TStyleObject(AOwner) { }
	/* TStyleObject.Destroy */ inline __fastcall virtual ~TSubImage() { }
	
};


class PASCALIMPLEMENTATION TActiveStyleObject : public TCustomStyleObject
{
	typedef TCustomStyleObject inherited;
	
private:
	TBitmapLinks* FSourceLink;
	bool FActive;
	TBitmapLinks* FActiveLink;
	Fmx::Ani::TAnimation* FActiveAnimation;
	TStyleTrigger FTrigger;
	System::Classes::TNotifyEvent FOnTriggered;
	TTouchAnimationAdapter* FTouchAnimation;
	void __fastcall SetActive(const bool Value);
	void __fastcall SetActiveLink(TBitmapLinks* const Value);
	void __fastcall SetTrigger(const TStyleTrigger Value);
	void __fastcall SetSourceLink(TBitmapLinks* const Value);
	void __fastcall Triggered(System::TObject* Sender);
	void __fastcall SetTouchAnimation(TTouchAnimationAdapter* const Value);
	TTouchAnimationAdapter* __fastcall GetTouchAnimation();
	
protected:
	virtual void __fastcall DoTriggered();
	virtual void __fastcall SetupAnimations();
	virtual TBitmapLinks* __fastcall GetCurrentLink();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall Loaded();
	virtual void __fastcall Paint();
	__property System::Classes::TNotifyEvent OnTriggered = {read=FOnTriggered, write=FOnTriggered};
	
public:
	__fastcall virtual TActiveStyleObject(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TActiveStyleObject();
	virtual void __fastcall StartTriggerAnimation(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
	virtual void __fastcall SetNewScene(Fmx::Controls::_di_IScene AScene);
	__property bool Active = {read=FActive, write=SetActive, nodefault};
	
__published:
	__property TStyleTrigger ActiveTrigger = {read=FTrigger, write=SetTrigger, nodefault};
	__property TBitmapLinks* ActiveLink = {read=FActiveLink, write=SetActiveLink};
	__property TBitmapLinks* SourceLink = {read=FSourceLink, write=SetSourceLink};
	__property TTouchAnimationAdapter* TouchAnimation = {read=FTouchAnimation, write=SetTouchAnimation};
private:
	void *__ITouchAnimationObject;	// ITouchAnimationObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {75657913-BED4-45CA-A394-B27BF7B2225F}
	operator _di_ITouchAnimationObject()
	{
		_di_ITouchAnimationObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ITouchAnimationObject*(void) { return (ITouchAnimationObject*)&__ITouchAnimationObject; }
	#endif
	
};


class PASCALIMPLEMENTATION TTabStyleObject : public TCustomStyleObject
{
	typedef TCustomStyleObject inherited;
	
	
private:
	struct DECLSPEC_DRECORD TTransitionRec
	{
	public:
		Fmx::Ani::TAnimation* Animation;
		System::Classes::TNotifyEvent Event;
	};
	
	
	
protected:
	enum class DECLSPEC_DENUM TLink : unsigned char { Active, Source, Hot, ActiveHot, Focused, ActiveFocused };
	
	enum class DECLSPEC_DENUM TState : unsigned char { Active, Hot, Focused };
	
	
private:
	System::StaticArray<TBitmapLinks*, 6> FBitmapLinks;
	System::StaticArray<TTransitionRec, 3> FTransitions;
	TStyleTrigger FActiveTrigger;
	System::Set<TState, _DELPHI_SET_ENUMERATOR(TState::Active), _DELPHI_SET_ENUMERATOR(TState::Focused)> FState;
	void __fastcall SetActiveTrigger(const TStyleTrigger Value);
	TBitmapLinks* __fastcall GetLink(TLink Index);
	void __fastcall SetLink(TLink Index, TBitmapLinks* const Value);
	System::Classes::TNotifyEvent __fastcall GetEvent(TState Index);
	void __fastcall SetEvent(TState Index, const System::Classes::TNotifyEvent Value);
	void __fastcall InvokeEvent(TState Index);
	void __fastcall HotTriggered(System::TObject* Sender);
	void __fastcall FocusedTriggered(System::TObject* Sender);
	void __fastcall ActiveTriggered(System::TObject* Sender);
	
protected:
	virtual void __fastcall SetupAnimations();
	virtual TBitmapLinks* __fastcall GetCurrentLink();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall Loaded();
	__property System::Classes::TNotifyEvent OnHotTriggered = {read=GetEvent, write=SetEvent, index=2};
	__property System::Classes::TNotifyEvent OnFocusedTriggered = {read=GetEvent, write=SetEvent, index=4};
	__property System::Classes::TNotifyEvent OnActiveTriggered = {read=GetEvent, write=SetEvent, index=0};
	
public:
	__fastcall virtual TTabStyleObject(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTabStyleObject();
	virtual void __fastcall StartTriggerAnimation(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
	
__published:
	__property TStyleTrigger ActiveTrigger = {read=FActiveTrigger, write=SetActiveTrigger, nodefault};
	__property TBitmapLinks* ActiveLink = {read=GetLink, write=SetLink, index=0};
	__property TBitmapLinks* SourceLink = {read=GetLink, write=SetLink, index=1};
	__property TBitmapLinks* HotLink = {read=GetLink, write=SetLink, index=2};
	__property TBitmapLinks* ActiveHotLink = {read=GetLink, write=SetLink, index=3};
	__property TBitmapLinks* FocusedLink = {read=GetLink, write=SetLink, index=4};
	__property TBitmapLinks* ActiveFocusedLink = {read=GetLink, write=SetLink, index=5};
};


class PASCALIMPLEMENTATION TCheckStyleObject : public TTabStyleObject
{
	typedef TTabStyleObject inherited;
	
public:
	__fastcall virtual TCheckStyleObject(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCheckStyleObject();
};


enum class DECLSPEC_DENUM TButtonAnimation : unsigned char { Normal, Hot, Pressed, Focused };

class PASCALIMPLEMENTATION TButtonStyleObject : public TCustomStyleObject
{
	typedef TCustomStyleObject inherited;
	
	
private:
	struct DECLSPEC_DRECORD TTriggerAndLink
	{
	public:
		Fmx::Ani::TAnimation* Animation;
		TBitmapLinks* Link;
	};
	
	
	
private:
	TButtonAnimation FCurrent;
	System::StaticArray<TTriggerAndLink, 4> FTriggerSources;
	System::Classes::TNotifyEvent FOnNormalTriggered;
	System::Classes::TNotifyEvent FOnHotTriggered;
	System::Classes::TNotifyEvent FOnFocusedTriggered;
	System::Classes::TNotifyEvent FOnPressedTriggered;
	TTouchAnimationAdapter* FTouchAnimation;
	void __fastcall NormalTriggered(System::TObject* Sender);
	void __fastcall HotTriggered(System::TObject* Sender);
	void __fastcall PressedTriggered(System::TObject* Sender);
	void __fastcall FocusedTriggered(System::TObject* Sender);
	TBitmapLinks* __fastcall GetLink(TButtonAnimation Index);
	void __fastcall SetLink(TButtonAnimation Index, TBitmapLinks* const Value);
	void __fastcall SetTouchAnimation(TTouchAnimationAdapter* const Value);
	
protected:
	void __fastcall DoNormalTriggered();
	void __fastcall DoHotTriggered();
	void __fastcall DoPressedTriggered();
	void __fastcall DoFocusedTriggered();
	virtual TBitmapLinks* __fastcall GetCurrentLink();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall Loaded();
	virtual void __fastcall Paint();
	__property System::Classes::TNotifyEvent OnNormalTriggered = {read=FOnNormalTriggered, write=FOnNormalTriggered};
	__property System::Classes::TNotifyEvent OnHotTriggered = {read=FOnHotTriggered, write=FOnHotTriggered};
	__property System::Classes::TNotifyEvent OnPressedTriggered = {read=FOnPressedTriggered, write=FOnPressedTriggered};
	__property System::Classes::TNotifyEvent OnFocusedTriggered = {read=FOnFocusedTriggered, write=FOnFocusedTriggered};
	
public:
	__fastcall virtual TButtonStyleObject(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TButtonStyleObject();
	virtual void __fastcall StartTriggerAnimation(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
	
__published:
	__property TBitmapLinks* HotLink = {read=GetLink, write=SetLink, index=1};
	__property TBitmapLinks* FocusedLink = {read=GetLink, write=SetLink, index=3};
	__property TBitmapLinks* NormalLink = {read=GetLink, write=SetLink, index=0};
	__property TBitmapLinks* PressedLink = {read=GetLink, write=SetLink, index=2};
	__property TTouchAnimationAdapter* TouchAnimation = {read=FTouchAnimation, write=SetTouchAnimation};
};


class PASCALIMPLEMENTATION TTintedButtonStyleObject : public TButtonStyleObject
{
	typedef TButtonStyleObject inherited;
	
private:
	System::StaticArray<TTintedStages*, 4> FTintSources;
	TTintedStages* __fastcall GetTintStage(const TButtonAnimation Index);
	void __fastcall SetTintStage(const TButtonAnimation Index, TTintedStages* const Value);
	
protected:
	virtual void __fastcall Loaded();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual TBitmapLinks* __fastcall GetCurrentLink();
	virtual bool __fastcall GetCanBeTinted();
	
public:
	__fastcall virtual TTintedButtonStyleObject(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTintedButtonStyleObject();
	
__published:
	__property TTintedStages* HotTint = {read=GetTintStage, write=SetTintStage, index=1};
	__property TTintedStages* NormalTint = {read=GetTintStage, write=SetTintStage, index=0};
	__property TTintedStages* FocusedTint = {read=GetTintStage, write=SetTintStage, index=3};
	__property TTintedStages* PressedTint = {read=GetTintStage, write=SetTintStage, index=2};
private:
	void *__ITintedObject;	// Fmx::Controls::ITintedObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {42D829B7-6D86-41CC-86D5-F92C1FCAB060}
	operator Fmx::Controls::_di_ITintedObject()
	{
		Fmx::Controls::_di_ITintedObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Controls::ITintedObject*(void) { return (Fmx::Controls::ITintedObject*)&__ITintedObject; }
	#endif
	
};


class PASCALIMPLEMENTATION TSystemButtonObject : public TButtonStyleObject
{
	typedef TButtonStyleObject inherited;
	
private:
	bool FInactive;
	Fmx::Ani::TAnimation* FInactiveAnimation;
	TBitmapLinks* FInactiveLink;
	void __fastcall SetInactiveLink(TBitmapLinks* const Value);
	void __fastcall InactiveTriggered(System::TObject* Sender);
	
protected:
	virtual TBitmapLinks* __fastcall GetCurrentLink();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	
public:
	__fastcall virtual TSystemButtonObject(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TSystemButtonObject();
	
__published:
	__property TBitmapLinks* InactiveLink = {read=FInactiveLink, write=SetInactiveLink};
};


class PASCALIMPLEMENTATION TMaskedImage : public Fmx::Objects::TImage
{
	typedef Fmx::Objects::TImage inherited;
	
private:
	TCustomStyleObject* FContentObject;
	Fmx::Graphics::TBitmap* FBuffer;
	bool FNeedsUpdate;
	void __fastcall PrepareBuffer();
	System::UnicodeString __fastcall GetSourceLookup();
	void __fastcall SetSourceLookup(const System::UnicodeString Value);
	void __fastcall ReadMarginWrapMode(System::Classes::TReader* Reader);
	void __fastcall ReadWrapMode(System::Classes::TReader* Reader);
	
protected:
	virtual TCustomStyleObject* __fastcall CreateContentObject();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall DoChanged();
	virtual void __fastcall Paint();
	void __fastcall NeedsUpdate();
	
public:
	__fastcall virtual TMaskedImage(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TMaskedImage();
	virtual void __fastcall StartTriggerAnimation(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
	
__published:
	__property TCustomStyleObject* ContentObject = {read=FContentObject};
	__property System::UnicodeString SourceLookup = {read=GetSourceLookup, write=SetSourceLookup, stored=false};
};


class PASCALIMPLEMENTATION TActiveMaskedImage : public TMaskedImage
{
	typedef TMaskedImage inherited;
	
private:
	TStyleTrigger __fastcall GetTrigger();
	void __fastcall SetTrigger(const TStyleTrigger Value);
	void __fastcall DoTriggered(System::TObject* Sender);
	
protected:
	virtual TCustomStyleObject* __fastcall CreateContentObject();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	
public:
	__fastcall virtual TActiveMaskedImage(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TActiveMaskedImage();
	
__published:
	__property TStyleTrigger ActiveTrigger = {read=GetTrigger, write=SetTrigger, stored=false, nodefault};
};


class PASCALIMPLEMENTATION TStyleShadow : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Uitypes::TAlphaColor FColor;
	System::Classes::TNotifyEvent FOnChanged;
	Fmx::Types::TPosition* FOffset;
	void __fastcall SetColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetOffset(Fmx::Types::TPosition* const Value);
	
protected:
	virtual void __fastcall DoChanged();
	__property System::Classes::TNotifyEvent OnChanged = {read=FOnChanged, write=FOnChanged};
	
public:
	__fastcall TStyleShadow();
	__fastcall virtual ~TStyleShadow();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual bool __fastcall Equals(System::TObject* Obj);
	
__published:
	__property System::Uitypes::TAlphaColor Color = {read=FColor, write=SetColor, default=0};
	__property Fmx::Types::TPosition* Offset = {read=FOffset, write=SetOffset};
};


class PASCALIMPLEMENTATION TStyleTextObject : public Fmx::Objects::TText
{
	typedef Fmx::Objects::TText inherited;
	
private:
	TStyleShadow* FSavedShadow;
	TStyleShadow* FShadow;
	bool FShadowVisible;
	System::Uitypes::TEditCharCase FCharCase;
	System::Uitypes::TAlphaColor FCurrentColor;
	TStyleShadow* FCurrentShadow;
	void __fastcall SetShadow(TStyleShadow* const Value);
	void __fastcall SetShadowVisible(const bool Value);
	void __fastcall SetCharCase(const System::Uitypes::TEditCharCase Value);
	System::Uitypes::TAlphaColor __fastcall GetSavedColor();
	
protected:
	virtual void __fastcall Paint();
	virtual System::UnicodeString __fastcall ConvertText(const System::UnicodeString Value);
	void __fastcall ShadowChanged();
	virtual void __fastcall FontChanged();
	virtual void __fastcall UpdateDefaultTextSettings();
	virtual bool __fastcall UpdateCurrentProperties();
	bool __fastcall SetCurrentProperties(const System::Uitypes::TAlphaColorRec AColor, TStyleShadow* const AShadow);
	
public:
	__fastcall virtual TStyleTextObject(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TStyleTextObject();
	void __fastcall DrawToCanvas(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &ARect, const float AOpacity = 1.000000E+00f);
	__property System::Uitypes::TAlphaColor SavedColor = {read=GetSavedColor, nodefault};
	__property TStyleShadow* SavedShadow = {read=FSavedShadow};
	__property System::Uitypes::TAlphaColor CurrentColor = {read=FCurrentColor, nodefault};
	__property TStyleShadow* CurrentShadow = {read=FCurrentShadow};
	
__published:
	__property System::Uitypes::TEditCharCase CharCase = {read=FCharCase, write=SetCharCase, default=0};
	__property Color = {stored=false};
	__property TStyleShadow* Shadow = {read=FShadow, write=SetShadow};
	__property bool ShadowVisible = {read=FShadowVisible, write=SetShadowVisible, nodefault};
	__property HitTest = {default=0};
private:
	void *__IDrawableObject;	// Fmx::Controls::IDrawableObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C86EEAD8-69BF-4FDF-9FEE-A2F65E0EB3F0}
	operator Fmx::Controls::_di_IDrawableObject()
	{
		Fmx::Controls::_di_IDrawableObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Controls::IDrawableObject*(void) { return (Fmx::Controls::IDrawableObject*)&__IDrawableObject; }
	#endif
	
};


class PASCALIMPLEMENTATION TStyleTextAnimation : public Fmx::Ani::TAnimation
{
	typedef Fmx::Ani::TAnimation inherited;
	
private:
	System::Uitypes::TAlphaColor FColor;
	TStyleShadow* FShadow;
	void __fastcall SetShadow(TStyleShadow* const Value);
	
protected:
	virtual void __fastcall ProcessAnimation();
	
public:
	__fastcall virtual TStyleTextAnimation(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TStyleTextAnimation();
	__classmethod TStyleTextAnimation* __fastcall CreateAnimation(const System::UnicodeString Trigger, const System::Classes::TNotifyEvent Event);
	void __fastcall AssignIfEmpty(TStyleTextObject* const StyleTextObject);
	__property System::Uitypes::TAlphaColor Color = {read=FColor, write=FColor, nodefault};
	__property TStyleShadow* Shadow = {read=FShadow, write=SetShadow};
};


class PASCALIMPLEMENTATION TActiveStyleTextObject : public TStyleTextObject
{
	typedef TStyleTextObject inherited;
	
private:
	TStyleTrigger FTrigger;
	TStyleTextAnimation* FActiveAnimation;
	bool FActive;
	bool FSavedActive;
	void __fastcall SetTrigger(const TStyleTrigger Value);
	System::Uitypes::TAlphaColor __fastcall GetActiveColor();
	TStyleShadow* __fastcall GetActiveShadow();
	void __fastcall SetActiveColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetActiveShadow(TStyleShadow* const Value);
	void __fastcall SetActive(const bool Value);
	
protected:
	void __fastcall Triggered(System::TObject* Sender);
	virtual void __fastcall SetupAnimations();
	virtual bool __fastcall UpdateCurrentProperties();
	virtual void __fastcall Loaded();
	virtual bool __fastcall SaveState();
	virtual bool __fastcall RestoreState();
	
public:
	__fastcall virtual TActiveStyleTextObject(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TActiveStyleTextObject();
	virtual void __fastcall StartTriggerAnimation(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
	virtual void __fastcall SetNewScene(Fmx::Controls::_di_IScene AScene);
	__property bool Active = {read=FActive, write=SetActive, nodefault};
	
__published:
	__property TStyleTrigger ActiveTrigger = {read=FTrigger, write=SetTrigger, nodefault};
	__property System::Uitypes::TAlphaColor ActiveColor = {read=GetActiveColor, write=SetActiveColor, nodefault};
	__property TStyleShadow* ActiveShadow = {read=GetActiveShadow, write=SetActiveShadow};
};


class PASCALIMPLEMENTATION TTabStyleTextObject : public TActiveStyleTextObject
{
	typedef TActiveStyleTextObject inherited;
	
private:
	TStyleTextAnimation* FHotAnimation;
	bool FHot;
	bool FSavedHot;
	void __fastcall SetHotColor(const System::Uitypes::TAlphaColor Value);
	void __fastcall SetHotShadow(TStyleShadow* const Value);
	System::Uitypes::TAlphaColor __fastcall GetHotColor();
	TStyleShadow* __fastcall GetHotShadow();
	void __fastcall SetHot(const bool Value);
	
protected:
	void __fastcall HotTriggered(System::TObject* Sender);
	virtual void __fastcall SetupAnimations();
	virtual void __fastcall Loaded();
	virtual bool __fastcall UpdateCurrentProperties();
	virtual bool __fastcall SaveState();
	virtual bool __fastcall RestoreState();
	
public:
	__fastcall virtual TTabStyleTextObject(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTabStyleTextObject();
	virtual void __fastcall StartTriggerAnimation(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
	__property bool Hot = {read=FHot, write=SetHot, nodefault};
	
__published:
	__property System::Uitypes::TAlphaColor HotColor = {read=GetHotColor, write=SetHotColor, default=0};
	__property TStyleShadow* HotShadow = {read=GetHotShadow, write=SetHotShadow};
};


class PASCALIMPLEMENTATION TButtonStyleTextObject : public TStyleTextObject
{
	typedef TStyleTextObject inherited;
	
private:
	System::StaticArray<TStyleTextAnimation*, 4> FTriggerSources;
	TButtonAnimation FButtonState;
	TButtonAnimation FSavedButtonState;
	void __fastcall NormalTriggered(System::TObject* Sender);
	void __fastcall HotTriggered(System::TObject* Sender);
	void __fastcall PressedTriggered(System::TObject* Sender);
	void __fastcall FocusedTriggered(System::TObject* Sender);
	HIDESBASE System::Uitypes::TAlphaColor __fastcall GetColor(TButtonAnimation Index);
	HIDESBASE void __fastcall SetColor(TButtonAnimation Index, const System::Uitypes::TAlphaColor Value);
	TStyleShadow* __fastcall GetShadow(TButtonAnimation Index);
	HIDESBASE void __fastcall SetShadow(TButtonAnimation Index, TStyleShadow* const Value);
	void __fastcall SetButtonState(const TButtonAnimation Value);
	void __fastcall GetFontColors(Fmx::Graphics::TFontColorForState* &AColors, Fmx::Graphics::TFontColorForState* &ADefColors);
	
protected:
	virtual void __fastcall Loaded();
	virtual void __fastcall UpdateDefaultTextSettings();
	virtual bool __fastcall UpdateCurrentProperties();
	virtual Fmx::Graphics::TTextSettingsClass __fastcall GetTextSettingsClass();
	virtual bool __fastcall SaveState();
	virtual bool __fastcall RestoreState();
	
public:
	__fastcall virtual TButtonStyleTextObject(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TButtonStyleTextObject();
	virtual void __fastcall StartTriggerAnimation(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
	__property TButtonAnimation ButtonState = {read=FButtonState, write=SetButtonState, nodefault};
	
__published:
	__property System::Uitypes::TAlphaColor HotColor = {read=GetColor, write=SetColor, index=1, default=0};
	__property TStyleShadow* HotShadow = {read=GetShadow, write=SetShadow, index=1};
	__property System::Uitypes::TAlphaColor FocusedColor = {read=GetColor, write=SetColor, index=3, default=0};
	__property TStyleShadow* FocusedShadow = {read=GetShadow, write=SetShadow, index=3};
	__property System::Uitypes::TAlphaColor NormalColor = {read=GetColor, write=SetColor, index=0, default=0};
	__property TStyleShadow* NormalShadow = {read=GetShadow, write=SetShadow, index=0};
	__property System::Uitypes::TAlphaColor PressedColor = {read=GetColor, write=SetColor, index=2, default=0};
	__property TStyleShadow* PressedShadow = {read=GetShadow, write=SetShadow, index=2};
};


class PASCALIMPLEMENTATION TActiveOpacityObject : public Fmx::Controls::TControl
{
	typedef Fmx::Controls::TControl inherited;
	
private:
	TStyleTrigger FTrigger;
	Fmx::Ani::TAnimation* FActiveAnimation;
	float FActiveOpacity;
	float FSavedOpacity;
	bool __fastcall IsActiveOpacityStored();
	void __fastcall SetTrigger(const TStyleTrigger Value);
	void __fastcall Triggered(System::TObject* Sender);
	
protected:
	virtual void __fastcall SetupAnimation();
	virtual void __fastcall Loaded();
	
public:
	__fastcall virtual TActiveOpacityObject(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TActiveOpacityObject();
	virtual void __fastcall StartTriggerAnimation(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString ATrigger);
	
__published:
	__property TStyleTrigger ActiveTrigger = {read=FTrigger, write=SetTrigger, nodefault};
	__property float ActiveOpacity = {read=FActiveOpacity, write=FActiveOpacity, stored=IsActiveOpacityStored};
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
	__property HitTest = {default=0};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
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
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Objects */
}	/* namespace Styles */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_STYLES_OBJECTS)
using namespace Fmx::Styles::Objects;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_STYLES)
using namespace Fmx::Styles;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_Styles_ObjectsHPP
