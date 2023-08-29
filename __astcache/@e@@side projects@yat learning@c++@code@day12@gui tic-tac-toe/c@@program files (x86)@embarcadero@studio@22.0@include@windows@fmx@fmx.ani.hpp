// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Ani.pas' rev: 35.00 (Windows)

#ifndef Fmx_AniHPP
#define Fmx_AniHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.UITypes.hpp>
#include <System.Rtti.hpp>
#include <System.Generics.Collections.hpp>
#include <FMX.Types.hpp>
#include <FMX.Graphics.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Ani
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE ITriggerAnimation;
typedef System::DelphiInterface<ITriggerAnimation> _di_ITriggerAnimation;
class DELPHICLASS TAnimator;
class DELPHICLASS TAnimationTrigger;
class DELPHICLASS TAnimation;
class DELPHICLASS TCustomPropertyAnimation;
class DELPHICLASS TFloatAnimation;
class DELPHICLASS TIntAnimation;
class DELPHICLASS TColorAnimation;
class DELPHICLASS TGradientAnimation;
class DELPHICLASS TRectAnimation;
class DELPHICLASS TBitmapAnimation;
class DELPHICLASS TBitmapListAnimation;
class DELPHICLASS TKey;
class DELPHICLASS TKeys;
class DELPHICLASS TColorKey;
class DELPHICLASS TColorKeyAnimation;
class DELPHICLASS TFloatKey;
class DELPHICLASS TFloatKeyAnimation;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{8A291102-742F-45CB-9159-4E1D283AAF20}") ITriggerAnimation  : public System::IInterface 
{
	virtual void __fastcall StartTriggerAnimation(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString APropertyName) = 0 ;
	virtual void __fastcall StartTriggerAnimationWait(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString APropertyName) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TAnimator : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	__interface DELPHIINTERFACE IAnimationDestroyer;
	typedef System::DelphiInterface<IAnimationDestroyer> _di_IAnimationDestroyer;
	__interface  INTERFACE_UUID("{3597F657-95E3-4E21-992D-C834EE541F1D}") IAnimationDestroyer  : public System::IInterface 
	{
		virtual void __fastcall RegisterAnimation(TAnimation* const AAnimation) = 0 ;
	};
	
	class DELPHICLASS TAnimationDestroyer;
	class PASCALIMPLEMENTATION TAnimationDestroyer : public System::TInterfacedObject
	{
		typedef System::TInterfacedObject inherited;
		
	private:
		System::Generics::Collections::TList__1<void *>* FAnimations;
		void __fastcall DoAniFinished(System::TObject* Sender);
		void __fastcall FreeNotification(System::TObject* AObject);
		
	public:
		__fastcall TAnimationDestroyer();
		__fastcall virtual ~TAnimationDestroyer();
		void __fastcall RegisterAnimation(TAnimation* const AAnimation);
private:
		void *__TAnimator_IAnimationDestroyer;	// TAnimator::IAnimationDestroyer 
		void *__IFreeNotification;	// Fmx::Types::IFreeNotification 
		
public:
		#if defined(MANAGED_INTERFACE_OPERATORS)
		// {3597F657-95E3-4E21-992D-C834EE541F1D}
		operator TAnimator::_di_IAnimationDestroyer()
		{
			TAnimator::_di_IAnimationDestroyer intf;
			this->GetInterface(intf);
			return intf;
		}
		#else
		operator TAnimator::IAnimationDestroyer*(void) { return (TAnimator::IAnimationDestroyer*)&__TAnimator_IAnimationDestroyer; }
		#endif
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
	
	
	
private:
	static _di_IAnimationDestroyer FDestroyer;
	__classmethod void __fastcall CreateDestroyer();
	__classmethod void __fastcall Uninitialize();
	
public:
	__classmethod void __fastcall StartAnimation(Fmx::Types::TFmxObject* const Target, const System::UnicodeString AName);
	__classmethod void __fastcall StopAnimation(Fmx::Types::TFmxObject* const Target, const System::UnicodeString AName);
	__classmethod void __fastcall StartTriggerAnimation(Fmx::Types::TFmxObject* const Target, Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString APropertyName);
	__classmethod void __fastcall StartTriggerAnimationWait(Fmx::Types::TFmxObject* const Target, Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString APropertyName);
	__classmethod void __fastcall StopTriggerAnimation(Fmx::Types::TFmxObject* const Target, Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString APropertyName);
	static void __fastcall DefaultStartTriggerAnimation(Fmx::Types::TFmxObject* const Target, Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString APropertyName);
	__classmethod void __fastcall DefaultStartTriggerAnimationWait(Fmx::Types::TFmxObject* const Target, Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString APropertyName);
	__classmethod void __fastcall AnimateFloat(Fmx::Types::TFmxObject* const Target, const System::UnicodeString APropertyName, const float NewValue, float Duration = 2.000000E-01f, Fmx::Types::TAnimationType AType = (Fmx::Types::TAnimationType)(0x0), Fmx::Types::TInterpolationType AInterpolation = (Fmx::Types::TInterpolationType)(0x0));
	__classmethod void __fastcall AnimateFloatDelay(Fmx::Types::TFmxObject* const Target, const System::UnicodeString APropertyName, const float NewValue, float Duration = 2.000000E-01f, float Delay = 0.000000E+00f, Fmx::Types::TAnimationType AType = (Fmx::Types::TAnimationType)(0x0), Fmx::Types::TInterpolationType AInterpolation = (Fmx::Types::TInterpolationType)(0x0));
	__classmethod void __fastcall AnimateFloatWait(Fmx::Types::TFmxObject* const Target, const System::UnicodeString APropertyName, const float NewValue, float Duration = 2.000000E-01f, Fmx::Types::TAnimationType AType = (Fmx::Types::TAnimationType)(0x0), Fmx::Types::TInterpolationType AInterpolation = (Fmx::Types::TInterpolationType)(0x0));
	__classmethod void __fastcall AnimateInt(Fmx::Types::TFmxObject* const Target, const System::UnicodeString APropertyName, const int NewValue, float Duration = 2.000000E-01f, Fmx::Types::TAnimationType AType = (Fmx::Types::TAnimationType)(0x0), Fmx::Types::TInterpolationType AInterpolation = (Fmx::Types::TInterpolationType)(0x0));
	__classmethod void __fastcall AnimateIntWait(Fmx::Types::TFmxObject* const Target, const System::UnicodeString APropertyName, const int NewValue, float Duration = 2.000000E-01f, Fmx::Types::TAnimationType AType = (Fmx::Types::TAnimationType)(0x0), Fmx::Types::TInterpolationType AInterpolation = (Fmx::Types::TInterpolationType)(0x0));
	__classmethod void __fastcall AnimateColor(Fmx::Types::TFmxObject* const Target, const System::UnicodeString APropertyName, System::Uitypes::TAlphaColor NewValue, float Duration = 2.000000E-01f, Fmx::Types::TAnimationType AType = (Fmx::Types::TAnimationType)(0x0), Fmx::Types::TInterpolationType AInterpolation = (Fmx::Types::TInterpolationType)(0x0));
	__classmethod void __fastcall StopPropertyAnimation(Fmx::Types::TFmxObject* const Target, const System::UnicodeString APropertyName);
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
public:
	/* TObject.Create */ inline __fastcall TAnimator() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAnimator() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TAnimationTrigger : public System::TObject
{
	typedef System::TObject inherited;
	
	
public:
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	struct DECLSPEC_DRECORD TTriggerInfo
	{
	public:
		System::UnicodeString Name;
		bool Value;
		System::Rtti::TRttiProperty* Prop;
	};
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
	
private:
	Fmx::Types::TTrigger FTrigger;
	System::Generics::Collections::TDictionary__2<Fmx::Types::TTrigger,Fmx::Types::TTrigger>* FNames;
	System::Generics::Collections::TList__1<TTriggerInfo>* FRttiInfo;
	System::TClass FTargetClass;
	void __fastcall SetTrigger(const Fmx::Types::TTrigger ATrigger);
	void __fastcall ParseTriggerNames(const Fmx::Types::TTrigger ATrigger);
	void __fastcall CollectRttiInfo(System::TObject* const ATarget);
	void __fastcall ClearRttiInfo();
	
public:
	__fastcall virtual ~TAnimationTrigger();
	bool __fastcall HasProperty(const System::UnicodeString APropertyName);
	bool __fastcall CanExecute(System::TObject* const ATarget);
	__property Fmx::Types::TTrigger Trigger = {read=FTrigger, write=SetTrigger};
public:
	/* TObject.Create */ inline __fastcall TAnimationTrigger() : System::TObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TAnimation : public Fmx::Types::TFmxObject
{
	typedef Fmx::Types::TFmxObject inherited;
	
	
private:
	enum class DECLSPEC_DENUM TTriggerType : unsigned char { Normal, Inverse };
	
	
public:
	static const System::Int8 DefaultAniFrameRate = System::Int8(0x3c);
	
	static int AniFrameRate;
	
private:
	static Fmx::Types::TTimer* FAniThread;
	int FTickCount;
	float FDuration;
	float FDelay;
	float FDelayTime;
	float FTime;
	bool FInverse;
	bool FSavedInverse;
	bool FLoop;
	bool FPause;
	bool FRunning;
	System::Classes::TNotifyEvent FOnFinish;
	System::Classes::TNotifyEvent FOnProcess;
	Fmx::Types::TInterpolationType FInterpolation;
	Fmx::Types::TAnimationType FAnimationType;
	bool FEnabled;
	bool FAutoReverse;
	System::StaticArray<TAnimationTrigger*, 2> FTriggers;
	void __fastcall SetEnabled(const bool Value);
	void __fastcall SetTrigger(const TTriggerType Index, const Fmx::Types::TTrigger Value);
	Fmx::Types::TTrigger __fastcall GetTrigger(const TTriggerType Index);
	__classmethod void __fastcall Uninitialize();
	
protected:
	float __fastcall GetNormalizedTime();
	virtual void __fastcall FirstFrame();
	virtual void __fastcall ProcessAnimation() = 0 ;
	virtual void __fastcall DoProcess();
	virtual void __fastcall DoFinish();
	virtual void __fastcall Loaded();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	
public:
	__fastcall virtual TAnimation(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAnimation();
	virtual void __fastcall Start();
	virtual void __fastcall Stop();
	virtual void __fastcall StopAtCurrent();
	void __fastcall StartTrigger(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString APropertyName);
	void __fastcall StopTrigger(Fmx::Types::TFmxObject* const AInstance, const System::UnicodeString APropertyName);
	void __fastcall ProcessTick(const float ATime, const float ADeltaTime);
	__property bool Running = {read=FRunning, nodefault};
	__property bool Pause = {read=FPause, write=FPause, nodefault};
	__property Fmx::Types::TAnimationType AnimationType = {read=FAnimationType, write=FAnimationType, default=0};
	__property bool AutoReverse = {read=FAutoReverse, write=FAutoReverse, default=0};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=0};
	__property float Delay = {read=FDelay, write=FDelay};
	__property float Duration = {read=FDuration, write=FDuration};
	__property Fmx::Types::TInterpolationType Interpolation = {read=FInterpolation, write=FInterpolation, default=0};
	__property bool Inverse = {read=FInverse, write=FInverse, default=0};
	__property float NormalizedTime = {read=GetNormalizedTime};
	__property bool Loop = {read=FLoop, write=FLoop, default=0};
	__property Fmx::Types::TTrigger Trigger = {read=GetTrigger, write=SetTrigger, index=0};
	__property Fmx::Types::TTrigger TriggerInverse = {read=GetTrigger, write=SetTrigger, index=1};
	__property float CurrentTime = {read=FTime};
	__property System::Classes::TNotifyEvent OnProcess = {read=FOnProcess, write=FOnProcess};
	__property System::Classes::TNotifyEvent OnFinish = {read=FOnFinish, write=FOnFinish};
	/* static */ __property Fmx::Types::TTimer* AniThread = {read=FAniThread};
};


class PASCALIMPLEMENTATION TCustomPropertyAnimation : public TAnimation
{
	typedef TAnimation inherited;
	
protected:
	System::TObject* FInstance;
	System::Rtti::TRttiProperty* FRttiProperty;
	System::UnicodeString FPath;
	System::UnicodeString FPropertyName;
	void __fastcall SetPropertyName(const System::UnicodeString AValue);
	bool __fastcall FindProperty();
	virtual void __fastcall ParentChanged();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	
public:
	__property System::UnicodeString PropertyName = {read=FPropertyName, write=SetPropertyName};
	virtual void __fastcall Start();
	virtual void __fastcall Stop();
public:
	/* TAnimation.Create */ inline __fastcall virtual TCustomPropertyAnimation(System::Classes::TComponent* AOwner) : TAnimation(AOwner) { }
	/* TAnimation.Destroy */ inline __fastcall virtual ~TCustomPropertyAnimation() { }
	
};


class PASCALIMPLEMENTATION TFloatAnimation : public TCustomPropertyAnimation
{
	typedef TCustomPropertyAnimation inherited;
	
private:
	float FStartFloat;
	float FStopFloat;
	bool FStartFromCurrent;
	
protected:
	virtual void __fastcall ProcessAnimation();
	virtual void __fastcall FirstFrame();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	
public:
	__fastcall virtual TFloatAnimation(System::Classes::TComponent* AOwner);
	
__published:
	__property AnimationType = {default=0};
	__property AutoReverse = {default=0};
	__property Enabled = {default=0};
	__property Delay = {default=0};
	__property Duration;
	__property Interpolation = {default=0};
	__property Inverse = {default=0};
	__property Loop = {default=0};
	__property OnProcess;
	__property OnFinish;
	__property PropertyName = {default=0};
	__property float StartValue = {read=FStartFloat, write=FStartFloat, stored=true};
	__property bool StartFromCurrent = {read=FStartFromCurrent, write=FStartFromCurrent, default=0};
	__property float StopValue = {read=FStopFloat, write=FStopFloat, stored=true};
	__property Trigger = {index=0, default=0};
	__property TriggerInverse = {index=1, default=0};
public:
	/* TAnimation.Destroy */ inline __fastcall virtual ~TFloatAnimation() { }
	
};


class PASCALIMPLEMENTATION TIntAnimation : public TCustomPropertyAnimation
{
	typedef TCustomPropertyAnimation inherited;
	
private:
	int FStartValue;
	int FStopValue;
	bool FStartFromCurrent;
	
protected:
	virtual void __fastcall ProcessAnimation();
	virtual void __fastcall FirstFrame();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	
public:
	__fastcall virtual TIntAnimation(System::Classes::TComponent* AOwner);
	
__published:
	__property AnimationType = {default=0};
	__property AutoReverse = {default=0};
	__property Enabled = {default=0};
	__property Delay = {default=0};
	__property Duration;
	__property Interpolation = {default=0};
	__property Inverse = {default=0};
	__property Loop = {default=0};
	__property OnProcess;
	__property OnFinish;
	__property PropertyName = {default=0};
	__property int StartValue = {read=FStartValue, write=FStartValue, stored=true, nodefault};
	__property bool StartFromCurrent = {read=FStartFromCurrent, write=FStartFromCurrent, default=0};
	__property int StopValue = {read=FStopValue, write=FStopValue, stored=true, nodefault};
	__property Trigger = {index=0, default=0};
	__property TriggerInverse = {index=1, default=0};
public:
	/* TAnimation.Destroy */ inline __fastcall virtual ~TIntAnimation() { }
	
};


class PASCALIMPLEMENTATION TColorAnimation : public TCustomPropertyAnimation
{
	typedef TCustomPropertyAnimation inherited;
	
private:
	System::Uitypes::TAlphaColor FStartColor;
	System::Uitypes::TAlphaColor FStopColor;
	bool FStartFromCurrent;
	
protected:
	virtual void __fastcall ProcessAnimation();
	virtual void __fastcall FirstFrame();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	
public:
	__fastcall virtual TColorAnimation(System::Classes::TComponent* AOwner);
	
__published:
	__property AnimationType = {default=0};
	__property AutoReverse = {default=0};
	__property Enabled = {default=0};
	__property Delay = {default=0};
	__property Duration;
	__property Interpolation = {default=0};
	__property Inverse = {default=0};
	__property Loop = {default=0};
	__property OnProcess;
	__property OnFinish;
	__property PropertyName = {default=0};
	__property System::Uitypes::TAlphaColor StartValue = {read=FStartColor, write=FStartColor, nodefault};
	__property bool StartFromCurrent = {read=FStartFromCurrent, write=FStartFromCurrent, default=0};
	__property System::Uitypes::TAlphaColor StopValue = {read=FStopColor, write=FStopColor, nodefault};
	__property Trigger = {index=0, default=0};
	__property TriggerInverse = {index=1, default=0};
public:
	/* TAnimation.Destroy */ inline __fastcall virtual ~TColorAnimation() { }
	
};


class PASCALIMPLEMENTATION TGradientAnimation : public TCustomPropertyAnimation
{
	typedef TCustomPropertyAnimation inherited;
	
private:
	Fmx::Graphics::TGradient* FStartGradient;
	Fmx::Graphics::TGradient* FStopGradient;
	bool FStartFromCurrent;
	void __fastcall SetStartGradient(Fmx::Graphics::TGradient* const Value);
	void __fastcall SetStopGradient(Fmx::Graphics::TGradient* const Value);
	
protected:
	virtual void __fastcall ProcessAnimation();
	virtual void __fastcall FirstFrame();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	
public:
	__fastcall virtual TGradientAnimation(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TGradientAnimation();
	
__published:
	__property AnimationType = {default=0};
	__property AutoReverse = {default=0};
	__property Enabled = {default=0};
	__property Delay = {default=0};
	__property Duration;
	__property Interpolation = {default=0};
	__property Inverse = {default=0};
	__property Loop = {default=0};
	__property OnProcess;
	__property OnFinish;
	__property PropertyName = {default=0};
	__property Fmx::Graphics::TGradient* StartValue = {read=FStartGradient, write=SetStartGradient};
	__property bool StartFromCurrent = {read=FStartFromCurrent, write=FStartFromCurrent, default=0};
	__property Fmx::Graphics::TGradient* StopValue = {read=FStopGradient, write=SetStopGradient};
	__property Trigger = {index=0, default=0};
	__property TriggerInverse = {index=1, default=0};
};


class PASCALIMPLEMENTATION TRectAnimation : public TCustomPropertyAnimation
{
	typedef TCustomPropertyAnimation inherited;
	
private:
	Fmx::Types::TBounds* FStartRect;
	Fmx::Types::TBounds* FCurrent;
	Fmx::Types::TBounds* FStopRect;
	bool FStartFromCurrent;
	void __fastcall SetStartRect(Fmx::Types::TBounds* const Value);
	void __fastcall SetStopRect(Fmx::Types::TBounds* const Value);
	
protected:
	virtual void __fastcall ProcessAnimation();
	virtual void __fastcall FirstFrame();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	
public:
	__fastcall virtual TRectAnimation(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TRectAnimation();
	
__published:
	__property AnimationType = {default=0};
	__property AutoReverse = {default=0};
	__property Enabled = {default=0};
	__property Delay = {default=0};
	__property Duration;
	__property Interpolation = {default=0};
	__property Inverse = {default=0};
	__property Loop = {default=0};
	__property OnProcess;
	__property OnFinish;
	__property PropertyName = {default=0};
	__property Fmx::Types::TBounds* StartValue = {read=FStartRect, write=SetStartRect};
	__property bool StartFromCurrent = {read=FStartFromCurrent, write=FStartFromCurrent, default=0};
	__property Fmx::Types::TBounds* StopValue = {read=FStopRect, write=SetStopRect};
	__property Trigger = {index=0, default=0};
	__property TriggerInverse = {index=1, default=0};
};


class PASCALIMPLEMENTATION TBitmapAnimation : public TCustomPropertyAnimation
{
	typedef TCustomPropertyAnimation inherited;
	
private:
	Fmx::Graphics::TBitmap* FStartBitmap;
	Fmx::Graphics::TBitmap* FStopBitmap;
	void __fastcall SetStartBitmap(Fmx::Graphics::TBitmap* Value);
	void __fastcall SetStopBitmap(Fmx::Graphics::TBitmap* Value);
	
protected:
	virtual void __fastcall ProcessAnimation();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	
public:
	__fastcall virtual TBitmapAnimation(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TBitmapAnimation();
	
__published:
	__property AnimationType = {default=0};
	__property AutoReverse = {default=0};
	__property Enabled = {default=0};
	__property Delay = {default=0};
	__property Duration;
	__property Interpolation = {default=0};
	__property Inverse = {default=0};
	__property Loop = {default=0};
	__property OnProcess;
	__property OnFinish;
	__property PropertyName = {default=0};
	__property Fmx::Graphics::TBitmap* StartValue = {read=FStartBitmap, write=SetStartBitmap};
	__property Fmx::Graphics::TBitmap* StopValue = {read=FStopBitmap, write=SetStopBitmap};
	__property Trigger = {index=0, default=0};
	__property TriggerInverse = {index=1, default=0};
};


class PASCALIMPLEMENTATION TBitmapListAnimation : public TCustomPropertyAnimation
{
	typedef TCustomPropertyAnimation inherited;
	
	
private:
	class DELPHICLASS TAnimationBitmap;
	class PASCALIMPLEMENTATION TAnimationBitmap : public Fmx::Graphics::TBitmap
	{
		typedef Fmx::Graphics::TBitmap inherited;
		
	private:
		TBitmapListAnimation* FAnimation;
		
	protected:
		virtual void __fastcall ReadStyleLookup(System::Classes::TReader* Reader);
	public:
		/* TBitmap.Create */ inline __fastcall virtual TAnimationBitmap()/* overload */ : Fmx::Graphics::TBitmap() { }
		/* TBitmap.Create */ inline __fastcall virtual TAnimationBitmap(const int AWidth, const int AHeight)/* overload */ : Fmx::Graphics::TBitmap(AWidth, AHeight) { }
		/* TBitmap.CreateFromStream */ inline __fastcall virtual TAnimationBitmap(System::Classes::TStream* const AStream) : Fmx::Graphics::TBitmap(AStream) { }
		/* TBitmap.CreateFromFile */ inline __fastcall virtual TAnimationBitmap(const System::UnicodeString AFileName) : Fmx::Graphics::TBitmap(AFileName) { }
		/* TBitmap.CreateFromBitmapAndMask */ inline __fastcall TAnimationBitmap(Fmx::Graphics::TBitmap* const Bitmap, Fmx::Graphics::TBitmap* const Mask) : Fmx::Graphics::TBitmap(Bitmap, Mask) { }
		/* TBitmap.Destroy */ inline __fastcall virtual ~TAnimationBitmap() { }
		
	};
	
	
	
private:
	int FAnimationCount;
	Fmx::Graphics::TBitmap* FAnimationBitmap;
	int FLastAnimationStep;
	int FAnimationRowCount;
	System::UnicodeString FAnimationLookup;
	void __fastcall SetAnimationBitmap(Fmx::Graphics::TBitmap* Value);
	void __fastcall SetAnimationRowCount(const int Value);
	void __fastcall SetAnimationLookup(const System::UnicodeString Value);
	void __fastcall RefreshBitmap(Fmx::Graphics::TBitmap* const WorkBitmap = (Fmx::Graphics::TBitmap*)(0x0));
	
protected:
	virtual void __fastcall ProcessAnimation();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	
public:
	__fastcall virtual TBitmapListAnimation(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TBitmapListAnimation();
	
__published:
	__property Fmx::Graphics::TBitmap* AnimationBitmap = {read=FAnimationBitmap, write=SetAnimationBitmap};
	__property System::UnicodeString AnimationLookup = {read=FAnimationLookup, write=SetAnimationLookup};
	__property int AnimationCount = {read=FAnimationCount, write=FAnimationCount, nodefault};
	__property int AnimationRowCount = {read=FAnimationRowCount, write=SetAnimationRowCount, default=1};
	__property AnimationType = {default=0};
	__property AutoReverse = {default=0};
	__property Enabled = {default=0};
	__property Delay = {default=0};
	__property Duration;
	__property Interpolation = {default=0};
	__property Inverse = {default=0};
	__property Loop = {default=0};
	__property OnProcess;
	__property OnFinish;
	__property PropertyName = {default=0};
	__property Trigger = {index=0, default=0};
	__property TriggerInverse = {index=1, default=0};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TKey : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	float FKey;
	void __fastcall SetKey(const float Value);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property float Key = {read=FKey, write=SetKey};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TKey(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TKey() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TKeys : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	bool __fastcall FindKeys(const float Time, TKey* &Key1, TKey* &Key2);
public:
	/* TCollection.Create */ inline __fastcall TKeys(System::Classes::TCollectionItemClass ItemClass) : System::Classes::TCollection(ItemClass) { }
	/* TCollection.Destroy */ inline __fastcall virtual ~TKeys() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TColorKey : public TKey
{
	typedef TKey inherited;
	
private:
	System::Uitypes::TAlphaColor FValue;
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property System::Uitypes::TAlphaColor Value = {read=FValue, write=FValue, nodefault};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TColorKey(System::Classes::TCollection* Collection) : TKey(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TColorKey() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TColorKeyAnimation : public TCustomPropertyAnimation
{
	typedef TCustomPropertyAnimation inherited;
	
private:
	TKeys* FKeys;
	bool FStartFromCurrent;
	void __fastcall SetKeys(TKeys* const Value);
	
protected:
	virtual void __fastcall ProcessAnimation();
	virtual void __fastcall FirstFrame();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	
public:
	__fastcall virtual TColorKeyAnimation(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TColorKeyAnimation();
	
__published:
	__property AnimationType = {default=0};
	__property AutoReverse = {default=0};
	__property Enabled = {default=0};
	__property Delay = {default=0};
	__property Duration;
	__property Interpolation = {default=0};
	__property Inverse = {default=0};
	__property TKeys* Keys = {read=FKeys, write=SetKeys};
	__property Loop = {default=0};
	__property OnProcess;
	__property OnFinish;
	__property PropertyName = {default=0};
	__property bool StartFromCurrent = {read=FStartFromCurrent, write=FStartFromCurrent, nodefault};
	__property Trigger = {index=0, default=0};
	__property TriggerInverse = {index=1, default=0};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFloatKey : public TKey
{
	typedef TKey inherited;
	
private:
	float FValue;
	
__published:
	__property float Value = {read=FValue, write=FValue};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TFloatKey(System::Classes::TCollection* Collection) : TKey(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TFloatKey() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TFloatKeyAnimation : public TCustomPropertyAnimation
{
	typedef TCustomPropertyAnimation inherited;
	
private:
	TKeys* FKeys;
	bool FStartFromCurrent;
	void __fastcall SetKeys(TKeys* const Value);
	
protected:
	virtual void __fastcall ProcessAnimation();
	virtual void __fastcall FirstFrame();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	
public:
	__fastcall virtual TFloatKeyAnimation(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFloatKeyAnimation();
	
__published:
	__property AnimationType = {default=0};
	__property AutoReverse = {default=0};
	__property Enabled = {default=0};
	__property Delay = {default=0};
	__property Duration;
	__property Interpolation = {default=0};
	__property Inverse = {default=0};
	__property TKeys* Keys = {read=FKeys, write=SetKeys};
	__property Loop = {default=0};
	__property OnProcess;
	__property OnFinish;
	__property PropertyName = {default=0};
	__property bool StartFromCurrent = {read=FStartFromCurrent, write=FStartFromCurrent, nodefault};
	__property Trigger = {index=0, default=0};
	__property TriggerInverse = {index=1, default=0};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE float __fastcall InterpolateBack(float t, float B, float C, float D, float S, Fmx::Types::TAnimationType AType);
extern DELPHI_PACKAGE float __fastcall InterpolateBounce(float t, float B, float C, float D, Fmx::Types::TAnimationType AType);
extern DELPHI_PACKAGE float __fastcall InterpolateCirc(float t, float B, float C, float D, Fmx::Types::TAnimationType AType);
extern DELPHI_PACKAGE float __fastcall InterpolateCubic(float t, float B, float C, float D, Fmx::Types::TAnimationType AType);
extern DELPHI_PACKAGE float __fastcall InterpolateElastic(float t, float B, float C, float D, float A, float P, Fmx::Types::TAnimationType AType);
extern DELPHI_PACKAGE float __fastcall InterpolateExpo(float t, float B, float C, float D, Fmx::Types::TAnimationType AType);
extern DELPHI_PACKAGE float __fastcall InterpolateLinear(float t, float B, float C, float D);
extern DELPHI_PACKAGE float __fastcall InterpolateQuad(float t, float B, float C, float D, Fmx::Types::TAnimationType AType);
extern DELPHI_PACKAGE float __fastcall InterpolateQuart(float t, float B, float C, float D, Fmx::Types::TAnimationType AType);
extern DELPHI_PACKAGE float __fastcall InterpolateQuint(float t, float B, float C, float D, Fmx::Types::TAnimationType AType);
extern DELPHI_PACKAGE float __fastcall InterpolateSine(float t, float B, float C, float D, Fmx::Types::TAnimationType AType);
}	/* namespace Ani */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_ANI)
using namespace Fmx::Ani;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_AniHPP
