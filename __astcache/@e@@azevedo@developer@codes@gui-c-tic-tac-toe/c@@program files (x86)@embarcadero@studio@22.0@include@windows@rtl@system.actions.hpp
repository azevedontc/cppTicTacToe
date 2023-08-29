// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Actions.pas' rev: 35.00 (Windows)

#ifndef System_ActionsHPP
#define System_ActionsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Collections.hpp>
#include <System.UITypes.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Actions
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EActionError;
class DELPHICLASS TCustomShortCutList;
class DELPHICLASS TContainedAction;
class DELPHICLASS TContainedActionLink;
class DELPHICLASS TActionListEnumerator;
__interface DELPHIINTERFACE TEnumActionListRef;
typedef System::DelphiInterface<TEnumActionListRef> _di_TEnumActionListRef;
class DELPHICLASS TContainedActionList;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EActionError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EActionError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EActionError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EActionError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EActionError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EActionError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EActionError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EActionError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EActionError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EActionError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EActionError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EActionError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EActionError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EActionError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TStatusAction : unsigned char { saNone, saTrivial, saDefault, saRequiredEmpty, saRequired, saValid, saInvalid, saWaiting, saWarning, saUnused, saCalculated, saError, saOther };

#ifndef _WIN64
typedef System::TMetaClass* TContainedActionListClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TContainedActionListClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TCustomShortCutList : public System::Classes::TStringList
{
	typedef System::Classes::TStringList inherited;
	
private:
	System::Classes::TShortCut __fastcall GetShortCuts(int Index);
	
public:
	int __fastcall IndexOfShortCut(const System::Classes::TShortCut ShortCut)/* overload */;
	int __fastcall IndexOfShortCut(const System::UnicodeString ShortCut)/* overload */;
	__property System::Classes::TShortCut ShortCuts[int Index] = {read=GetShortCuts};
public:
	/* TStringList.Create */ inline __fastcall TCustomShortCutList()/* overload */ : System::Classes::TStringList() { }
	/* TStringList.Create */ inline __fastcall TCustomShortCutList(bool OwnsObjects)/* overload */ : System::Classes::TStringList(OwnsObjects) { }
	/* TStringList.Create */ inline __fastcall TCustomShortCutList(System::WideChar QuoteChar, System::WideChar Delimiter)/* overload */ : System::Classes::TStringList(QuoteChar, Delimiter) { }
	/* TStringList.Create */ inline __fastcall TCustomShortCutList(System::WideChar QuoteChar, System::WideChar Delimiter, System::Classes::TStringsOptions Options)/* overload */ : System::Classes::TStringList(QuoteChar, Delimiter, Options) { }
	/* TStringList.Create */ inline __fastcall TCustomShortCutList(System::Types::TDuplicates Duplicates, bool Sorted, bool CaseSensitive)/* overload */ : System::Classes::TStringList(Duplicates, Sorted, CaseSensitive) { }
	/* TStringList.Destroy */ inline __fastcall virtual ~TCustomShortCutList() { }
	
};


class PASCALIMPLEMENTATION TContainedAction : public System::Classes::TBasicAction
{
	typedef System::Classes::TBasicAction inherited;
	
private:
	System::UnicodeString FCategory;
	TContainedActionList* FActionList;
	bool FSavedEnabledState;
	bool FDisableIfNoHandler;
	bool FAutoCheck;
	System::UnicodeString FCaption;
	bool FChecked;
	bool FEnabled;
	int FGroupIndex;
	System::Classes::THelpContext FHelpContext;
	System::UnicodeString FHelpKeyword;
	System::Classes::THelpType FHelpType;
	System::UnicodeString FHint;
	bool FVisible;
	System::Classes::TShortCut FShortCut;
	TCustomShortCutList* FSecondaryShortCuts;
	System::Uitypes::TImageIndex FImageIndex;
	bool FChecking;
	TStatusAction FStatusAction;
	System::Classes::THintEvent FOnHint;
	int __fastcall GetIndex();
	void __fastcall SetIndex(int Value);
	void __fastcall SetCategory(const System::UnicodeString Value);
	TCustomShortCutList* __fastcall GetSecondaryShortCuts();
	void __fastcall SetSecondaryShortCuts(TCustomShortCutList* const Value);
	bool __fastcall IsSecondaryShortCutsStored();
	void __fastcall SetActionList(TContainedActionList* AActionList);
	
protected:
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	bool __fastcall SecondaryShortCutsCreated();
	virtual TCustomShortCutList* __fastcall CreateShortCutList();
	__property bool SavedEnabledState = {read=FSavedEnabledState, write=FSavedEnabledState, nodefault};
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual bool __fastcall HandleShortCut();
	virtual void __fastcall SetAutoCheck(bool Value);
	virtual void __fastcall SetCaption(const System::UnicodeString Value);
	virtual void __fastcall SetName(const System::Classes::TComponentName Value);
	virtual void __fastcall SetChecked(bool Value);
	virtual void __fastcall SetEnabled(bool Value);
	virtual void __fastcall SetGroupIndex(const int Value);
	virtual void __fastcall SetHelpContext(System::Classes::THelpContext Value);
	virtual void __fastcall SetHelpKeyword(const System::UnicodeString Value);
	virtual void __fastcall SetHelpType(System::Classes::THelpType Value);
	virtual void __fastcall SetHint(const System::UnicodeString Value);
	virtual void __fastcall SetVisible(bool Value);
	virtual void __fastcall SetShortCut(System::Classes::TShortCut Value);
	virtual void __fastcall SetImageIndex(System::Uitypes::TImageIndex Value);
	virtual void __fastcall SetStatusAction(const TStatusAction Value);
	
public:
	__fastcall virtual TContainedAction(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TContainedAction();
	DYNAMIC System::Classes::TComponent* __fastcall GetParentComponent();
	DYNAMIC bool __fastcall HasParent();
	DYNAMIC void __fastcall SetParentComponent(System::Classes::TComponent* AParent);
	__property TContainedActionList* ActionList = {read=FActionList, write=SetActionList};
	virtual bool __fastcall Suspended();
	__property int Index = {read=GetIndex, write=SetIndex, stored=false, nodefault};
	__property bool DisableIfNoHandler = {read=FDisableIfNoHandler, write=FDisableIfNoHandler, default=1};
	__property bool AutoCheck = {read=FAutoCheck, write=SetAutoCheck, default=0};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property bool Checked = {read=FChecked, write=SetChecked, default=0};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property int GroupIndex = {read=FGroupIndex, write=SetGroupIndex, default=0};
	__property System::Classes::THelpContext HelpContext = {read=FHelpContext, write=SetHelpContext, default=0};
	__property System::UnicodeString HelpKeyword = {read=FHelpKeyword, write=SetHelpKeyword};
	__property System::Classes::THelpType HelpType = {read=FHelpType, write=SetHelpType, default=0};
	__property System::UnicodeString Hint = {read=FHint, write=SetHint};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
	__property System::Classes::TShortCut ShortCut = {read=FShortCut, write=SetShortCut, default=0};
	__property TCustomShortCutList* SecondaryShortCuts = {read=GetSecondaryShortCuts, write=SetSecondaryShortCuts, stored=IsSecondaryShortCutsStored};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	DYNAMIC bool __fastcall DoHint(System::UnicodeString &HintStr);
	__property System::Classes::THintEvent OnHint = {read=FOnHint, write=FOnHint};
	__property TStatusAction StatusAction = {read=FStatusAction, write=SetStatusAction, nodefault};
	
__published:
	__property System::UnicodeString Category = {read=FCategory, write=SetCategory};
};


class PASCALIMPLEMENTATION TContainedActionLink : public System::Classes::TBasicActionLink
{
	typedef System::Classes::TBasicActionLink inherited;
	
protected:
	virtual void __fastcall DefaultIsLinked(bool &Result);
	virtual bool __fastcall IsCaptionLinked();
	virtual bool __fastcall IsCheckedLinked();
	virtual bool __fastcall IsEnabledLinked();
	virtual bool __fastcall IsGroupIndexLinked();
	virtual bool __fastcall IsHelpContextLinked();
	virtual bool __fastcall IsHelpLinked();
	virtual bool __fastcall IsHintLinked();
	virtual bool __fastcall IsImageIndexLinked();
	virtual bool __fastcall IsShortCutLinked();
	virtual bool __fastcall IsVisibleLinked();
	virtual bool __fastcall IsStatusActionLinked();
	virtual void __fastcall SetAutoCheck(bool Value);
	virtual void __fastcall SetCaption(const System::UnicodeString Value);
	virtual void __fastcall SetChecked(bool Value);
	virtual void __fastcall SetEnabled(bool Value);
	virtual void __fastcall SetGroupIndex(int Value);
	virtual void __fastcall SetHelpContext(System::Classes::THelpContext Value);
	virtual void __fastcall SetHelpKeyword(const System::UnicodeString Value);
	virtual void __fastcall SetHelpType(System::Classes::THelpType Value);
	virtual void __fastcall SetHint(const System::UnicodeString Value);
	virtual void __fastcall SetImageIndex(int Value);
	virtual void __fastcall SetShortCut(System::Classes::TShortCut Value);
	virtual void __fastcall SetVisible(bool Value);
	virtual void __fastcall SetStatusAction(const TStatusAction Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TContainedActionLink(System::TObject* AClient) : System::Classes::TBasicActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TContainedActionLink() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TContainedActionLinkClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TContainedActionLinkClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TContainedActionClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TContainedActionClass);
#endif /* _WIN64 */

enum DECLSPEC_DENUM TActionListState : unsigned char { asNormal, asSuspended, asSuspendedEnabled };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TActionListEnumerator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FIndex;
	TContainedActionList* FActionList;
	TContainedAction* __fastcall GetCurrent();
	
public:
	__fastcall TActionListEnumerator(TContainedActionList* AActionList);
	bool __fastcall MoveNext();
	__property TContainedAction* Current = {read=GetCurrent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TActionListEnumerator() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TEnumActionListEvent)(TContainedAction* const Action, bool &Done);

__interface TEnumActionListRef  : public System::IInterface 
{
	virtual void __fastcall Invoke(TContainedAction* const Action, bool &Done) = 0 ;
};

class PASCALIMPLEMENTATION TContainedActionList : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
public:
	TContainedAction* operator[](int Index) { return this->Actions[Index]; }
	
private:
	System::Generics::Collections::TList__1<TContainedAction*>* FActions;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TActionEvent FOnExecute;
	System::Classes::TActionEvent FOnUpdate;
	TActionListState FState;
	System::Classes::TNotifyEvent FOnStateChange;
	TContainedAction* __fastcall GetAction(int Index);
	void __fastcall SetAction(int Index, TContainedAction* Value);
	int __fastcall GetActionCount();
	
protected:
	bool __fastcall ActionsCreated();
	void __fastcall CheckActionsCreated();
	void __fastcall AddAction(TContainedAction* const Action);
	void __fastcall RemoveAction(TContainedAction* const Action);
	virtual void __fastcall Change();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC void __fastcall SetChildOrder(System::Classes::TComponent* Component, int Order);
	virtual void __fastcall SetState(const TActionListState Value);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TActionEvent OnExecute = {read=FOnExecute, write=FOnExecute};
	__property System::Classes::TActionEvent OnUpdate = {read=FOnUpdate, write=FOnUpdate};
	bool __fastcall SameCategory(const System::UnicodeString Source, const System::UnicodeString Dest, const bool IncludeSubCategory = true);
	
public:
	__fastcall virtual TContainedActionList(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TContainedActionList();
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	HIDESBASE TActionListEnumerator* __fastcall GetEnumerator();
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	bool __fastcall EnumByCategory(TEnumActionListEvent Proc, const System::UnicodeString Category, const bool IncludeSubCategory = true)/* overload */;
	bool __fastcall EnumByCategory(_di_TEnumActionListRef Proc, const System::UnicodeString Category, const bool IncludeSubCategory = true)/* overload */;
	__property TContainedAction* Actions[int Index] = {read=GetAction, write=SetAction/*, default*/};
	__property int ActionCount = {read=GetActionCount, nodefault};
	__property TActionListState State = {read=FState, write=SetState, default=0};
	__property System::Classes::TNotifyEvent OnStateChange = {read=FOnStateChange, write=FOnStateChange};
};


typedef void * TEnumActionProcInfo;

typedef void __fastcall (__closure *TEnumActionProc)(const System::UnicodeString Category, System::Classes::TBasicActionClass ActionClass, void * Info);

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool vDesignAction;
extern DELPHI_PACKAGE void __fastcall (*RegisterActionsProc)(const System::UnicodeString CategoryName, System::Classes::TBasicActionClass const *AClasses, const int AClasses_High, System::Classes::TComponentClass Resource);
extern DELPHI_PACKAGE void __fastcall (*UnRegisterActionsProc)(System::Classes::TBasicActionClass const *AClasses, const int AClasses_High);
extern DELPHI_PACKAGE void __fastcall (*EnumRegisteredActionsProc)(TEnumActionProc Proc, void * Info, const System::UnicodeString FrameworkType);
extern DELPHI_PACKAGE System::Classes::TBasicAction* __fastcall (*CreateActionProc)(System::Classes::TComponent* AOwner, System::Classes::TBasicActionClass ActionClass, const System::UnicodeString FrameworkType);
extern DELPHI_PACKAGE void __fastcall RegisterActions(const System::UnicodeString CategoryName, System::Classes::TBasicActionClass const *AClasses, const int AClasses_High, System::Classes::TComponentClass Resource);
extern DELPHI_PACKAGE void __fastcall UnRegisterActions(System::Classes::TBasicActionClass const *AClasses, const int AClasses_High);
extern DELPHI_PACKAGE void __fastcall EnumRegisteredActions(TEnumActionProc Proc, void * Info, System::UnicodeString FrameworkType = System::UnicodeString());
extern DELPHI_PACKAGE System::Classes::TBasicAction* __fastcall CreateAction(System::Classes::TComponent* AOwner, System::Classes::TBasicActionClass ActionClass, System::UnicodeString FrameworkType = System::UnicodeString());
extern DELPHI_PACKAGE int __fastcall RegisterShortCut(System::Classes::TShortCut ShortCut, int Index = 0xffffffff);
extern DELPHI_PACKAGE bool __fastcall UnregisterShortCut(System::Classes::TShortCut ShortCut);
extern DELPHI_PACKAGE int __fastcall RegisteredShortCutCount(void);
extern DELPHI_PACKAGE System::Classes::TShortCut __fastcall RegisteredShortCut(int Index);
}	/* namespace Actions */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_ACTIONS)
using namespace System::Actions;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_ActionsHPP
