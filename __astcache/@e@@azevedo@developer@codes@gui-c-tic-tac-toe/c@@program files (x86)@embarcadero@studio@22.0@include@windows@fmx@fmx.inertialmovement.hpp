// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.InertialMovement.pas' rev: 35.00 (Windows)

#ifndef Fmx_InertialmovementHPP
#define Fmx_InertialmovementHPP

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
#include <System.Generics.Collections.hpp>
#include <FMX.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Inertialmovement
{
//-- forward type declarations -----------------------------------------------
struct TPointD;
struct TRectD;
class DELPHICLASS TAniCalculations;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TPointD
{
public:
	double X;
	double Y;
	__fastcall TPointD(const TPointD &P)/* overload */;
	__fastcall TPointD(const System::Types::TPointF &P)/* overload */;
	__fastcall TPointD(const System::Types::TPoint &P)/* overload */;
	__fastcall TPointD(const double X, const double Y)/* overload */;
	void __fastcall SetLocation(const TPointD &P);
	static bool __fastcall _op_Equality(const TPointD &Lhs, const TPointD &Rhs);
	static bool __fastcall _op_Inequality(const TPointD &Lhs, const TPointD &Rhs);
	static TPointD __fastcall _op_Addition(const TPointD &Lhs, const TPointD &Rhs);
	static TPointD __fastcall _op_Subtraction(const TPointD &Lhs, const TPointD &Rhs);
	static TPointD __fastcall _op_Implicit(const System::Types::TPointF &APointF);
	double __fastcall Distance(const TPointD &P2);
	double __fastcall Abs();
	void __fastcall Offset(const double DX, const double DY);
	TPointD() {}
	
	friend bool operator ==(const TPointD &Lhs, const TPointD &Rhs) { return TPointD::_op_Equality(Lhs, Rhs); }
	friend bool operator !=(const TPointD &Lhs, const TPointD &Rhs) { return TPointD::_op_Inequality(Lhs, Rhs); }
	friend TPointD operator +(const TPointD &Lhs, const TPointD &Rhs) { return TPointD::_op_Addition(Lhs, Rhs); }
	friend TPointD operator -(const TPointD &Lhs, const TPointD &Rhs) { return TPointD::_op_Subtraction(Lhs, Rhs); }
	TPointD& operator =(const System::Types::TPointF &APointF) { *this = TPointD::_op_Implicit(APointF); return *this; }
};


struct DECLSPEC_DRECORD TRectD
{
public:
	double Left;
	double Top;
	double Right;
	double Bottom;
	
private:
	double __fastcall GetHeight();
	double __fastcall GetWidth();
	void __fastcall SetHeight(const double Value);
	void __fastcall SetWidth(const double Value);
	TPointD __fastcall GetTopLeft();
	void __fastcall SetTopLeft(const TPointD &P);
	TPointD __fastcall GetBottomRight();
	void __fastcall SetBottomRight(const TPointD &P);
	
public:
	__fastcall TRectD(const TPointD &Origin)/* overload */;
	__fastcall TRectD(const double Left, const double Top, const double Right, const double Bottom)/* overload */;
	static bool __fastcall _op_Equality(const TRectD &Lhs, const TRectD &Rhs);
	static bool __fastcall _op_Inequality(const TRectD &Lhs, const TRectD &Rhs);
	static TRectD __fastcall Empty();
	__property double Width = {read=GetWidth, write=SetWidth};
	__property double Height = {read=GetHeight, write=SetHeight};
	void __fastcall Inflate(const double DX, const double DY);
	void __fastcall Offset(const double DX, const double DY);
	__property TPointD TopLeft = {read=GetTopLeft, write=SetTopLeft};
	__property TPointD BottomRight = {read=GetBottomRight, write=SetBottomRight};
	TRectD() {}
	
	friend bool operator ==(const TRectD &Lhs, const TRectD &Rhs) { return TRectD::_op_Equality(Lhs, Rhs); }
	friend bool operator !=(const TRectD &Lhs, const TRectD &Rhs) { return TRectD::_op_Inequality(Lhs, Rhs); }
};


struct TTarget;
class PASCALIMPLEMENTATION TAniCalculations : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
	
public:
	enum class DECLSPEC_DENUM TTargetType : unsigned char { Achieved, Max, Min, Other };
	
	struct DECLSPEC_DRECORD TTarget
	{
	public:
		TAniCalculations::TTargetType TargetType;
		TPointD Point;
	};
	
	
	
private:
	struct DECLSPEC_DRECORD TPointTime
	{
	public:
		TPointD Point;
		System::TDateTime Time;
	};
	
	
	typedef System::DynamicArray<TTarget> _TAniCalculations__1;
	
	
private:
	bool FEnabled;
	bool FInTimerProc;
	System::Uitypes::TTouchTracking FTouchTracking;
	NativeUInt FTimerHandle;
	System::Word FInterval;
	TPointD FCurrentVelocity;
	TPointD FUpVelocity;
	TPointD FUpPosition;
	System::TDateTime FUpDownTime;
	System::TDateTime FLastTimeCalc;
	System::Classes::TPersistent* FOwner;
	Fmx::Types::_di_IFMXTimerService FPlatformTimer;
	System::Generics::Collections::TList__1<TPointTime>* FPointTime;
	_TAniCalculations__1 FTargets;
	TTarget FMinTarget;
	TTarget FMaxTarget;
	TTarget FTarget;
	TTarget FLastTarget;
	bool FCancelTargetX;
	bool FCancelTargetY;
	System::Classes::TNotifyEvent FOnStart;
	System::Classes::TNotifyEvent FOnTimer;
	System::Classes::TNotifyEvent FOnStop;
	bool FDown;
	bool FAnimation;
	TPointD FViewportPosition;
	bool FLowChanged;
	System::TDateTime FLastTimeChanged;
	TPointD FDownPoint;
	TPointD FDownPosition;
	int FUpdateTimerCount;
	double FElasticity;
	double FDecelerationRate;
	double FStorageTime;
	bool FInDoStart;
	bool FInDoStop;
	bool FMoved;
	bool FStarted;
	bool FBoundsAnimation;
	bool FAutoShowing;
	float FOpacity;
	bool FShown;
	TTarget FMouseTarget;
	bool FAveraging;
	int FMinVelocity;
	int FMaxVelocity;
	int FDeadZone;
	int FUpdateCount;
	System::Types::TPoint FElasticityFactor;
	void __fastcall StartTimer();
	void __fastcall StopTimer();
	void __fastcall TimerProc();
	void __fastcall Clear(System::TDateTime T = 0.000000E+00);
	void __fastcall UpdateTimer();
	void __fastcall SetInterval(const System::Word Value);
	void __fastcall SetEnabled(const bool Value);
	void __fastcall SetTouchTracking(const System::Uitypes::TTouchTracking Value);
	void __fastcall InternalCalc(double DeltaTime);
	void __fastcall SetAnimation(const bool Value);
	void __fastcall SetDown(const bool Value);
	bool __fastcall FindTarget(TTarget &Target);
	int __fastcall GetTargetCount();
	bool __fastcall DecelerationRateStored();
	bool __fastcall ElasticityStored();
	bool __fastcall StorageTimeStored();
	void __fastcall CalcVelocity(const System::TDateTime Time = 0.000000E+00);
	void __fastcall InternalStart();
	void __fastcall InternalTerminated();
	void __fastcall SetBoundsAnimation(const bool Value);
	void __fastcall UpdateViewportPositionByBounds();
	void __fastcall SetAutoShowing(const bool Value);
	void __fastcall SetShown(const bool Value);
	System::Types::TPointF __fastcall GetViewportPositionF();
	void __fastcall SetViewportPositionF(const System::Types::TPointF &Value);
	void __fastcall SetMouseTarget(const TTarget &Value);
	System::Uitypes::TTouchTracking __fastcall GetInternalTouchTracking();
	TPointD __fastcall GetPositions(const int Index);
	int __fastcall GetPositionCount();
	System::TDateTime __fastcall GetPositionTimes(const int Index);
	TPointD __fastcall PosToView(const TPointD &APosition);
	void __fastcall SetViewportPosition(const TPointD &Value);
	float __fastcall GetOpacity();
	bool __fastcall GetLowVelocity();
	TPointTime __fastcall AddPointTime(const double X, const double Y, const System::TDateTime Time = 0.000000E+00);
	void __fastcall InternalChanged();
	void __fastcall UpdateTarget();
	bool __fastcall DoStopScrolling(System::TDateTime CurrentTime = 0.000000E+00);
	
protected:
	bool __fastcall IsSmall(const TPointD &P, const double Epsilon)/* overload */;
	bool __fastcall IsSmall(const TPointD &P)/* overload */;
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual void __fastcall DoStart();
	virtual void __fastcall DoChanged();
	virtual void __fastcall DoStop();
	virtual void __fastcall DoCalc(const double DeltaTime, TPointD &NewPoint, TPointD &NewVelocity, bool &Done);
	__property bool Enabled = {read=FEnabled, write=SetEnabled, nodefault};
	__property bool Shown = {read=FShown, write=SetShown, nodefault};
	__property TTarget MouseTarget = {read=FMouseTarget, write=SetMouseTarget};
	__property System::Uitypes::TTouchTracking InternalTouchTracking = {read=GetInternalTouchTracking, nodefault};
	__property TPointD Positions[const int index] = {read=GetPositions};
	__property System::TDateTime PositionTimes[const int index] = {read=GetPositionTimes};
	__property int PositionCount = {read=GetPositionCount, nodefault};
	__property TPointD UpVelocity = {read=FUpVelocity};
	__property TPointD UpPosition = {read=FUpPosition};
	__property System::TDateTime UpDownTime = {read=FUpDownTime};
	__property TTarget MinTarget = {read=FMinTarget};
	__property TTarget MaxTarget = {read=FMaxTarget};
	__property TTarget Target = {read=FTarget};
	__property int MinVelocity = {read=FMinVelocity, write=FMinVelocity, default=10};
	__property int MaxVelocity = {read=FMaxVelocity, write=FMaxVelocity, default=5000};
	__property int DeadZone = {read=FDeadZone, write=FDeadZone, default=8};
	__property bool CancelTargetX = {read=FCancelTargetX, nodefault};
	__property bool CancelTargetY = {read=FCancelTargetY, nodefault};
	
public:
	__fastcall virtual TAniCalculations(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TAniCalculations();
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall MouseDown(double X, double Y);
	void __fastcall MouseMove(double X, double Y);
	void __fastcall MouseLeave();
	void __fastcall MouseUp(double X, double Y);
	void __fastcall MouseWheel(double X, double Y);
	__property bool Animation = {read=FAnimation, write=SetAnimation, default=0};
	__property bool AutoShowing = {read=FAutoShowing, write=SetAutoShowing, default=0};
	__property bool Averaging = {read=FAveraging, write=FAveraging, default=0};
	__property bool BoundsAnimation = {read=FBoundsAnimation, write=SetBoundsAnimation, default=1};
	__property System::Word Interval = {read=FInterval, write=SetInterval, default=10};
	__property System::Uitypes::TTouchTracking TouchTracking = {read=FTouchTracking, write=SetTouchTracking, default=3};
	__property int TargetCount = {read=GetTargetCount, nodefault};
	void __fastcall SetTargets(const TTarget *ATargets, const int ATargets_High);
	void __fastcall GetTargets(TTarget *ATargets, const int ATargets_High);
	void __fastcall UpdatePosImmediately(const bool Force = false);
	__property double DecelerationRate = {read=FDecelerationRate, write=FDecelerationRate, stored=DecelerationRateStored};
	__property double Elasticity = {read=FElasticity, write=FElasticity, stored=ElasticityStored};
	__property double StorageTime = {read=FStorageTime, write=FStorageTime, stored=StorageTimeStored};
	__property TPointD CurrentVelocity = {read=FCurrentVelocity};
	__property TPointD ViewportPosition = {read=FViewportPosition, write=SetViewportPosition};
	__property System::Types::TPointF ViewportPositionF = {read=GetViewportPositionF, write=SetViewportPositionF};
	__property System::TDateTime LastTimeCalc = {read=FLastTimeCalc};
	__property bool Down = {read=FDown, write=SetDown, nodefault};
	__property float Opacity = {read=GetOpacity};
	__property bool InTimerProc = {read=FInTimerProc, nodefault};
	__property bool Moved = {read=FMoved, nodefault};
	__property bool LowVelocity = {read=GetLowVelocity, nodefault};
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	__property int UpdateCount = {read=FUpdateCount, nodefault};
	__property System::Classes::TNotifyEvent OnStart = {read=FOnStart, write=FOnStart};
	__property System::Classes::TNotifyEvent OnChanged = {read=FOnTimer, write=FOnTimer};
	__property System::Classes::TNotifyEvent OnStop = {read=FOnStop, write=FOnStop};
};


//-- var, const, procedure ---------------------------------------------------
#define DefaultStorageTime  (1.500000E-01)
static const System::Int8 DefaultIntervalOfAni = System::Int8(0xa);
#define DecelerationRateNormal  (1.950000E+00)
#define DecelerationRateFast  (9.500000E+00)
static const System::Int8 DefaultElasticity = System::Int8(0x64);
static const System::Int8 DefaultMinVelocity = System::Int8(0xa);
static const System::Word DefaultMaxVelocity = System::Word(0x1388);
static const System::Int8 DefaultDeadZone = System::Int8(0x8);
}	/* namespace Inertialmovement */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_INERTIALMOVEMENT)
using namespace Fmx::Inertialmovement;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_InertialmovementHPP
