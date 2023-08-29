// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Pickers.pas' rev: 35.00 (Windows)

#ifndef Fmx_PickersHPP
#define Fmx_PickersHPP

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
#include <System.Generics.Collections.hpp>
#include <System.SysUtils.hpp>
#include <FMX.Controls.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Pickers
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EFeatureError;
class DELPHICLASS TCustomPicker;
class DELPHICLASS TCustomDateTimePicker;
class DELPHICLASS TCustomListPicker;
__interface DELPHIINTERFACE IFMXPickerService;
typedef System::DelphiInterface<IFMXPickerService> _di_IFMXPickerService;
class DELPHICLASS TPickerFactoryService;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EFeatureError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EFeatureError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EFeatureError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EFeatureError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EFeatureError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EFeatureError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EFeatureError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EFeatureError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EFeatureError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFeatureError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFeatureError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFeatureError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFeatureError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EFeatureError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum class DECLSPEC_DENUM TDropDownKind : unsigned char { Custom, Native };

class PASCALIMPLEMENTATION TCustomPicker : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TPickerFactoryService* FPickerService;
	Fmx::Controls::TControl* FParent;
	int FPreferedDisplayIndex;
	System::Types::TRectF FAbsoluteTargetRect;
	System::Classes::TNotifyEvent FOnShow;
	System::Classes::TNotifyEvent FOnHide;
	void __fastcall ResetLinkOnPickerService();
	void __fastcall SetAbsoluteTargetRect(const System::Types::TRectF &Value);
	
protected:
	virtual void __fastcall DoShow();
	virtual void __fastcall DoHide();
	virtual void __fastcall AbsoluteTargetRectChanged();
	
public:
	__fastcall virtual TCustomPicker(TPickerFactoryService* const APickerService);
	__fastcall virtual ~TCustomPicker();
	virtual void __fastcall Show();
	virtual void __fastcall Hide() = 0 ;
	virtual bool __fastcall IsShown();
	__property Fmx::Controls::TControl* Parent = {read=FParent, write=FParent};
	__property int PreferedDisplayIndex = {read=FPreferedDisplayIndex, write=FPreferedDisplayIndex, nodefault};
	__property System::Types::TRectF AbsoluteTargetRect = {read=FAbsoluteTargetRect, write=SetAbsoluteTargetRect};
	__property System::Classes::TNotifyEvent OnShow = {read=FOnShow, write=FOnShow};
	__property System::Classes::TNotifyEvent OnHide = {read=FOnHide, write=FOnHide};
};


enum class DECLSPEC_DENUM TDatePickerShowMode : unsigned char { Date, Time, DateTime };

typedef void __fastcall (__closure *TOnDateChanged)(System::TObject* Sender, const System::TDateTime ADateTime);

class PASCALIMPLEMENTATION TCustomDateTimePicker : public TCustomPicker
{
	typedef TCustomPicker inherited;
	
private:
	System::TDateTime FDate;
	System::TDateTime FMinDate;
	System::TDateTime FMaxDate;
	System::Uitypes::TCalDayOfWeek FFirstDayOfWeek;
	TDatePickerShowMode FShowMode;
	bool FShowWeekNumbers;
	bool FTodayDefault;
	TOnDateChanged FOnDateChanged;
	
protected:
	virtual void __fastcall SetShowMode(const TDatePickerShowMode AValue);
	virtual void __fastcall SetMinDate(const System::TDateTime AValue);
	virtual void __fastcall SetMaxDate(const System::TDateTime AValue);
	virtual void __fastcall DoDateChanged(const System::TDateTime ADateTime);
	
public:
	__fastcall virtual TCustomDateTimePicker(TPickerFactoryService* const APickerService);
	__property System::TDateTime Date = {read=FDate, write=FDate};
	__property System::TDateTime MinDate = {read=FMinDate, write=SetMinDate};
	__property System::TDateTime MaxDate = {read=FMaxDate, write=SetMaxDate};
	__property System::Uitypes::TCalDayOfWeek FirstDayOfWeek = {read=FFirstDayOfWeek, write=FFirstDayOfWeek, nodefault};
	__property TDatePickerShowMode ShowMode = {read=FShowMode, write=SetShowMode, nodefault};
	__property bool ShowWeekNumbers = {read=FShowWeekNumbers, write=FShowWeekNumbers, nodefault};
	__property bool TodayDefault = {read=FTodayDefault, write=FTodayDefault, nodefault};
	__property TOnDateChanged OnDateChanged = {read=FOnDateChanged, write=FOnDateChanged};
public:
	/* TCustomPicker.Destroy */ inline __fastcall virtual ~TCustomDateTimePicker() { }
	
};


typedef void __fastcall (__closure *TOnValueChanged)(System::TObject* Sender, const int AValueIndex);

class PASCALIMPLEMENTATION TCustomListPicker : public TCustomPicker
{
	typedef TCustomPicker inherited;
	
private:
	System::Classes::TStrings* FValues;
	int FCountVisibleItems;
	int FItemIndex;
	float FItemHeight;
	float FItemWidth;
	TOnValueChanged FOnValueChanged;
	
protected:
	virtual void __fastcall SetValues(System::Classes::TStrings* AValues);
	virtual void __fastcall SetItemIndex(int AValue);
	virtual void __fastcall DoItemChanged(const int AItemIndex);
	
public:
	__fastcall virtual TCustomListPicker(TPickerFactoryService* const APickerService);
	__fastcall virtual ~TCustomListPicker();
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, nodefault};
	__property float ItemHeight = {read=FItemHeight, write=FItemHeight};
	__property float ItemWidth = {read=FItemWidth, write=FItemWidth};
	__property int CountVisibleItems = {read=FCountVisibleItems, write=FCountVisibleItems, nodefault};
	__property System::Classes::TStrings* Values = {read=FValues, write=SetValues};
	__property TOnValueChanged OnValueChanged = {read=FOnValueChanged, write=FOnValueChanged};
};


__interface  INTERFACE_UUID("{AE1A8D3C-D5FE-4343-A7B0-2AAEDA3ABB8A}") IFMXPickerService  : public System::IInterface 
{
	virtual TCustomDateTimePicker* __fastcall CreateDateTimePicker() = 0 ;
	virtual TCustomListPicker* __fastcall CreateListPicker() = 0 ;
	virtual void __fastcall CloseAllPickers() = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPickerFactoryService : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::Generics::Collections::TList__1<TCustomPicker*>* FPickers;
	
protected:
	virtual TCustomDateTimePicker* __fastcall DoCreateDateTimePicker() = 0 ;
	virtual TCustomListPicker* __fastcall DoCreateListPicker() = 0 ;
	virtual void __fastcall DoPickerRemoving(TCustomPicker* const APicker);
	
public:
	__fastcall TPickerFactoryService();
	__fastcall virtual ~TPickerFactoryService();
	TCustomDateTimePicker* __fastcall CreateDateTimePicker();
	TCustomListPicker* __fastcall CreateListPicker();
	void __fastcall CloseAllPickers();
private:
	void *__IFMXPickerService;	// IFMXPickerService 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {AE1A8D3C-D5FE-4343-A7B0-2AAEDA3ABB8A}
	operator _di_IFMXPickerService()
	{
		_di_IFMXPickerService intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IFMXPickerService*(void) { return (IFMXPickerService*)&__IFMXPickerService; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Pickers */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_PICKERS)
using namespace Fmx::Pickers;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_PickersHPP
