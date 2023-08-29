// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Dialogs.pas' rev: 35.00 (Windows)

#ifndef Fmx_DialogsHPP
#define Fmx_DialogsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.UITypes.hpp>
#include <FMX.Types.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Consts.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Dialogs
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCommonDialog;
class DELPHICLASS TOpenDialog;
class DELPHICLASS TSaveDialog;
__interface DELPHIINTERFACE TInputCloseQueryFunc;
typedef System::DelphiInterface<TInputCloseQueryFunc> _di_TInputCloseQueryFunc;
__interface DELPHIINTERFACE TInputCloseQueryProc;
typedef System::DelphiInterface<TInputCloseQueryProc> _di_TInputCloseQueryProc;
__interface DELPHIINTERFACE TInputCloseBoxProc;
typedef System::DelphiInterface<TInputCloseBoxProc> _di_TInputCloseBoxProc;
__interface DELPHIINTERFACE TInputCloseDialogProc;
typedef System::DelphiInterface<TInputCloseDialogProc> _di_TInputCloseDialogProc;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TCommonDialog : public Fmx::Types::TFmxObject
{
	typedef Fmx::Types::TFmxObject inherited;
	
private:
	System::Classes::THelpContext FHelpContext;
	System::Classes::TNotifyEvent FOnClose;
	System::Classes::TNotifyEvent FOnShow;
	
protected:
	DYNAMIC void __fastcall DoClose();
	DYNAMIC void __fastcall DoShow();
	virtual bool __fastcall DoExecute() = 0 ;
	
public:
	__fastcall virtual TCommonDialog(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCommonDialog();
	virtual bool __fastcall Execute()/* overload */;
	
__published:
	__property System::Classes::THelpContext HelpContext = {read=FHelpContext, write=FHelpContext, default=0};
	__property System::Classes::TNotifyEvent OnClose = {read=FOnClose, write=FOnClose};
	__property System::Classes::TNotifyEvent OnShow = {read=FOnShow, write=FOnShow};
};


class PASCALIMPLEMENTATION TOpenDialog : public TCommonDialog
{
	typedef TCommonDialog inherited;
	
private:
	System::Classes::TStrings* FHistoryList;
	System::Uitypes::TOpenOptions FOptions;
	System::Uitypes::TOpenOptionsEx FOptionsEx;
	System::UnicodeString FFilter;
	int FFilterIndex;
	System::UnicodeString FInitialDir;
	System::UnicodeString FTitle;
	System::UnicodeString FDefaultExt;
	System::Sysutils::TFileName FFileName;
	System::Classes::TStrings* FFiles;
	System::Classes::TNotifyEvent FOnSelectionChange;
	System::Classes::TNotifyEvent FOnFolderChange;
	System::Classes::TNotifyEvent FOnTypeChange;
	Fmx::Forms::TCloseQueryEvent FOnCanClose;
	System::Sysutils::TFileName __fastcall GetFileName();
	System::Classes::TStrings* __fastcall GetFiles();
	int __fastcall GetFilterIndex();
	System::UnicodeString __fastcall GetInitialDir();
	System::UnicodeString __fastcall GetTitle();
	void __fastcall ReadFileEditStyle(System::Classes::TReader* Reader);
	void __fastcall SetFileName(const System::Sysutils::TFileName Value);
	void __fastcall SetHistoryList(System::Classes::TStrings* const Value);
	void __fastcall SetInitialDir(const System::UnicodeString Value);
	void __fastcall SetTitle(const System::UnicodeString Value);
	
protected:
	DYNAMIC bool __fastcall DoCanClose();
	DYNAMIC void __fastcall DoSelectionChange();
	DYNAMIC void __fastcall DoFolderChange();
	DYNAMIC void __fastcall DoTypeChange();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual bool __fastcall DoExecute();
	
public:
	__fastcall virtual TOpenDialog(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TOpenDialog();
	__property System::Classes::TStrings* Files = {read=GetFiles};
	__property System::Classes::TStrings* HistoryList = {read=FHistoryList, write=SetHistoryList};
	
__published:
	__property System::UnicodeString DefaultExt = {read=FDefaultExt, write=FDefaultExt};
	__property System::Sysutils::TFileName FileName = {read=GetFileName, write=SetFileName};
	__property System::UnicodeString Filter = {read=FFilter, write=FFilter};
	__property int FilterIndex = {read=GetFilterIndex, write=FFilterIndex, default=1};
	__property System::UnicodeString InitialDir = {read=GetInitialDir, write=SetInitialDir};
	__property System::Uitypes::TOpenOptions Options = {read=FOptions, write=FOptions, default=524292};
	__property System::Uitypes::TOpenOptionsEx OptionsEx = {read=FOptionsEx, write=FOptionsEx, default=0};
	__property System::UnicodeString Title = {read=GetTitle, write=SetTitle};
	__property Fmx::Forms::TCloseQueryEvent OnCanClose = {read=FOnCanClose, write=FOnCanClose};
	__property System::Classes::TNotifyEvent OnFolderChange = {read=FOnFolderChange, write=FOnFolderChange};
	__property System::Classes::TNotifyEvent OnSelectionChange = {read=FOnSelectionChange, write=FOnSelectionChange};
	__property System::Classes::TNotifyEvent OnTypeChange = {read=FOnTypeChange, write=FOnTypeChange};
};


class PASCALIMPLEMENTATION TSaveDialog : public TOpenDialog
{
	typedef TOpenDialog inherited;
	
protected:
	virtual bool __fastcall DoExecute();
public:
	/* TOpenDialog.Create */ inline __fastcall virtual TSaveDialog(System::Classes::TComponent* AOwner) : TOpenDialog(AOwner) { }
	/* TOpenDialog.Destroy */ inline __fastcall virtual ~TSaveDialog() { }
	
};


typedef System::StaticArray<System::UnicodeString, 5> Fmx_Dialogs__4;

typedef System::StaticArray<System::UnicodeString, 12> Fmx_Dialogs__5;

typedef void __fastcall (__closure *TInputCloseQueryEvent)(System::TObject* Sender, const System::UnicodeString *Values, const int Values_High, bool &CanClose);

__interface TInputCloseQueryFunc  : public System::IInterface 
{
	virtual bool __fastcall Invoke(const System::UnicodeString *Values, const int Values_High) = 0 ;
};

__interface TInputCloseQueryProc  : public System::IInterface 
{
	virtual void __fastcall Invoke(const System::Uitypes::TModalResult AResult, const System::UnicodeString *AValues, const int AValues_High) = 0 ;
};

__interface TInputCloseBoxProc  : public System::IInterface 
{
	virtual void __fastcall Invoke(const System::Uitypes::TModalResult AResult, const System::UnicodeString AValue) = 0 ;
};

__interface TInputCloseDialogProc  : public System::IInterface 
{
	virtual void __fastcall Invoke(const System::Uitypes::TModalResult AResult) = 0 ;
};

typedef void __fastcall (__closure *TInputCloseDialogEvent)(System::TObject* Sender, const System::Uitypes::TModalResult AResult);

typedef void __fastcall (__closure *TInputCloseQueryWithResultEvent)(System::TObject* Sender, const System::Uitypes::TModalResult AResult, const System::UnicodeString *AValues, const int AValues_High);

typedef void __fastcall (__closure *TInputCloseBoxEvent)(System::TObject* Sender, const System::Uitypes::TModalResult AResult, const System::UnicodeString AValue);

//-- var, const, procedure ---------------------------------------------------
#define mbYesNo (System::Set<System::Uitypes::TMsgDlgBtn, _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbYes), _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbClose)>() << System::Uitypes::TMsgDlgBtn::mbYes << System::Uitypes::TMsgDlgBtn::mbNo )
#define mbYesNoCancel (System::Set<System::Uitypes::TMsgDlgBtn, _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbYes), _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbClose)>() << System::Uitypes::TMsgDlgBtn::mbYes << System::Uitypes::TMsgDlgBtn::mbNo << System::Uitypes::TMsgDlgBtn::mbCancel )
#define mbYesAllNoAllCancel (System::Set<System::Uitypes::TMsgDlgBtn, _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbYes), _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbClose)>() << System::Uitypes::TMsgDlgBtn::mbYes << System::Uitypes::TMsgDlgBtn::mbNo << System::Uitypes::TMsgDlgBtn::mbCancel << System::Uitypes::TMsgDlgBtn::mbNoToAll << System::Uitypes::TMsgDlgBtn::mbYesToAll )
#define mbOKCancel (System::Set<System::Uitypes::TMsgDlgBtn, _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbYes), _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbClose)>() << System::Uitypes::TMsgDlgBtn::mbOK << System::Uitypes::TMsgDlgBtn::mbCancel )
#define mbAbortRetryIgnore (System::Set<System::Uitypes::TMsgDlgBtn, _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbYes), _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbClose)>() << System::Uitypes::TMsgDlgBtn::mbAbort << System::Uitypes::TMsgDlgBtn::mbRetry << System::Uitypes::TMsgDlgBtn::mbIgnore )
#define mbAbortIgnore (System::Set<System::Uitypes::TMsgDlgBtn, _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbYes), _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbClose)>() << System::Uitypes::TMsgDlgBtn::mbAbort << System::Uitypes::TMsgDlgBtn::mbIgnore )
extern DELPHI_PACKAGE Fmx_Dialogs__4 MsgTitles;
extern DELPHI_PACKAGE System::StaticArray<int, 12> ModalResults;
extern DELPHI_PACKAGE Fmx_Dialogs__5 ButtonCaptions;
extern DELPHI_PACKAGE System::UnicodeString __fastcall LocalizedButtonCaption(const System::Uitypes::TMsgDlgBtn AButton);
extern DELPHI_PACKAGE System::UnicodeString __fastcall LocalizedMessageDialogTitle(const System::Uitypes::TMsgDlgType ADialogType);
extern DELPHI_PACKAGE void __fastcall MessageDialogCheckInUIThread(void);
extern DELPHI_PACKAGE int __fastcall MessageDlg _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Classes::THelpContext AHelpContext)/* overload */;
extern DELPHI_PACKAGE void __fastcall MessageDlg _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Classes::THelpContext AHelpContext, const _di_TInputCloseDialogProc ACloseDialogProc)/* overload */;
extern DELPHI_PACKAGE void __fastcall MessageDlg _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Classes::THelpContext AHelpContext, const TInputCloseDialogEvent ACloseDialogEvent, System::TObject* const AContext = (System::TObject*)(0x0))/* overload */;
extern DELPHI_PACKAGE int __fastcall MessageDlg _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Classes::THelpContext AHelpContext, const System::Uitypes::TMsgDlgBtn ADefaultButton)/* overload */;
extern DELPHI_PACKAGE void __fastcall MessageDlg _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Classes::THelpContext AHelpContext, const System::Uitypes::TMsgDlgBtn ADefaultButton, const _di_TInputCloseDialogProc ACloseDialogProc)/* overload */;
extern DELPHI_PACKAGE void __fastcall MessageDlg _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Classes::THelpContext AHelpContext, const System::Uitypes::TMsgDlgBtn ADefaultButton, const TInputCloseDialogEvent ACloseDialogEvent, System::TObject* const AContext = (System::TObject*)(0x0))/* overload */;
extern DELPHI_PACKAGE int __fastcall MessageDlgPos _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Classes::THelpContext AHelpContext, const int AX, const int AY)/* overload */;
extern DELPHI_PACKAGE void __fastcall MessageDlgPos _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Classes::THelpContext AHelpContext, const int AX, const int AY, const _di_TInputCloseDialogProc ACloseDialogProc)/* overload */;
extern DELPHI_PACKAGE void __fastcall MessageDlgPos _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Classes::THelpContext AHelpContext, const int AX, const int AY, const TInputCloseDialogEvent ACloseDialogEvent, System::TObject* const AContext = (System::TObject*)(0x0))/* overload */;
extern DELPHI_PACKAGE int __fastcall MessageDlgPos _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Classes::THelpContext AHelpContext, const int AX, const int AY, const System::Uitypes::TMsgDlgBtn ADefaultButton)/* overload */;
extern DELPHI_PACKAGE void __fastcall MessageDlgPos _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Classes::THelpContext AHelpContext, const int AX, const int AY, const System::Uitypes::TMsgDlgBtn ADefaultButton, const _di_TInputCloseDialogProc ACloseDialogProc)/* overload */;
extern DELPHI_PACKAGE void __fastcall MessageDlgPos _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Classes::THelpContext AHelpContext, const int AX, const int AY, const System::Uitypes::TMsgDlgBtn ADefaultButton, const TInputCloseDialogEvent ACloseDialogEvent, System::TObject* const AContext = (System::TObject*)(0x0))/* overload */;
extern DELPHI_PACKAGE int __fastcall MessageDlgPosHelp _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Classes::THelpContext AHelpContext, const int AX, const int AY, const System::UnicodeString AHelpFileName)/* overload */;
extern DELPHI_PACKAGE void __fastcall MessageDlgPosHelp _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Classes::THelpContext AHelpContext, const int AX, const int AY, const System::UnicodeString AHelpFileName, const _di_TInputCloseDialogProc ACloseDialogProc)/* overload */;
extern DELPHI_PACKAGE void __fastcall MessageDlgPosHelp _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Classes::THelpContext AHelpContext, const int AX, const int AY, const System::UnicodeString AHelpFileName, const TInputCloseDialogEvent ACloseDialogEvent, System::TObject* const AContext = (System::TObject*)(0x0))/* overload */;
extern DELPHI_PACKAGE int __fastcall MessageDlgPosHelp _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Classes::THelpContext AHelpContext, const int AX, const int AY, const System::UnicodeString AHelpFileName, const System::Uitypes::TMsgDlgBtn ADefaultButton)/* overload */;
extern DELPHI_PACKAGE void __fastcall MessageDlgPosHelp _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Classes::THelpContext AHelpContext, const int AX, const int AY, const System::UnicodeString AHelpFileName, const System::Uitypes::TMsgDlgBtn ADefaultButton, const _di_TInputCloseDialogProc ACloseDialogProc)/* overload */;
extern DELPHI_PACKAGE void __fastcall MessageDlgPosHelp _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const System::Uitypes::TMsgDlgType ADialogType, const System::Uitypes::TMsgDlgButtons AButtons, const System::Classes::THelpContext AHelpContext, const int AX, const int AY, const System::UnicodeString AHelpFileName, const System::Uitypes::TMsgDlgBtn ADefaultButton, const TInputCloseDialogEvent ACloseDialogEvent, System::TObject* const AContext = (System::TObject*)(0x0))/* overload */;
extern DELPHI_PACKAGE void __fastcall ShowMessage(const System::UnicodeString AMessage);
extern DELPHI_PACKAGE void __fastcall ShowMessageFmt(const System::UnicodeString AMessage, const System::TVarRec *AParams, const int AParams_High);
extern DELPHI_PACKAGE void __fastcall ShowMessagePos _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString AMessage, const int AX, const int AY);
extern DELPHI_PACKAGE bool __fastcall SelectDirectory(const System::UnicodeString Caption, const System::UnicodeString Root, System::UnicodeString &Directory);
extern DELPHI_PACKAGE System::UnicodeString __fastcall InputBox _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString ACaption, const System::UnicodeString APrompt, const System::UnicodeString ADefault)/* overload */;
extern DELPHI_PACKAGE void __fastcall InputBox _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString ACaption, const System::UnicodeString APrompt, const System::UnicodeString ADefault, const _di_TInputCloseBoxProc ACloseBoxProc)/* overload */;
extern DELPHI_PACKAGE void __fastcall InputBox _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString ACaption, const System::UnicodeString APrompt, const System::UnicodeString ADefault, const TInputCloseBoxEvent ACloseBoxEvent, System::TObject* const AContext = (System::TObject*)(0x0))/* overload */;
extern DELPHI_PACKAGE bool __fastcall InputQuery _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString ACaption, const System::UnicodeString *APrompts, const int APrompts_High, System::UnicodeString *AValues, const int AValues_High, const _di_TInputCloseQueryFunc ACloseQueryFunc = _di_TInputCloseQueryFunc())/* overload */;
extern DELPHI_PACKAGE bool __fastcall InputQuery _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString ACaption, const System::UnicodeString *APrompts, const int APrompts_High, System::UnicodeString *AValues, const int AValues_High, const TInputCloseQueryEvent ACloseQueryEvent, System::TObject* const AContext = (System::TObject*)(0x0))/* overload */;
extern DELPHI_PACKAGE bool __fastcall InputQuery _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString ACaption, const System::UnicodeString APrompt, System::UnicodeString &Value)/* overload */;
extern DELPHI_PACKAGE void __fastcall InputQuery _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString ACaption, const System::UnicodeString *APrompts, const int APrompts_High, const System::UnicodeString *ADefaultValues, const int ADefaultValues_High, const _di_TInputCloseQueryProc ACloseQueryProc)/* overload */;
extern DELPHI_PACKAGE void __fastcall InputQuery _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString ACaption, const System::UnicodeString *APrompts, const int APrompts_High, const System::UnicodeString *ADefaultValues, const int ADefaultValues_High, const TInputCloseQueryWithResultEvent ACloseQueryEvent, System::TObject* const AContext = (System::TObject*)(0x0))/* overload */;
extern DELPHI_PACKAGE void __fastcall InputQuery _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString ACaption, const System::UnicodeString APrompt, const System::UnicodeString ADefaultValue, const _di_TInputCloseBoxProc ACloseBoxProc)/* overload */;
extern DELPHI_PACKAGE void __fastcall InputQuery _DEPRECATED_ATTRIBUTE1("Use FMX.DialogService methods") (const System::UnicodeString ACaption, const System::UnicodeString APrompt, const System::UnicodeString ADefaultValue, const TInputCloseQueryWithResultEvent ACloseQueryEvent, System::TObject* const AContext = (System::TObject*)(0x0))/* overload */;
}	/* namespace Dialogs */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_DIALOGS)
using namespace Fmx::Dialogs;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_DialogsHPP
