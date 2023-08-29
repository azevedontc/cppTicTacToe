// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.ActnList.pas' rev: 35.00 (Windows)

#ifndef Fmx_ActnlistHPP
#define Fmx_ActnlistHPP

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
#include <System.Actions.hpp>
#include <System.ImageList.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Actnlist
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IActionClient;
typedef System::DelphiInterface<IActionClient> _di_IActionClient;
__interface DELPHIINTERFACE IIsChecked;
typedef System::DelphiInterface<IIsChecked> _di_IIsChecked;
__interface DELPHIINTERFACE IGroupName;
typedef System::DelphiInterface<IGroupName> _di_IGroupName;
__interface DELPHIINTERFACE IKeyShortcut;
typedef System::DelphiInterface<IKeyShortcut> _di_IKeyShortcut;
__interface DELPHIINTERFACE ICaption;
typedef System::DelphiInterface<ICaption> _di_ICaption;
__interface DELPHIINTERFACE IGlyph;
typedef System::DelphiInterface<IGlyph> _di_IGlyph;
class DELPHICLASS TCustomActionList;
class DELPHICLASS TActionList;
class DELPHICLASS TActionLink;
class DELPHICLASS TShortCutList;
class DELPHICLASS TCustomAction;
class DELPHICLASS TCustomViewAction;
class DELPHICLASS TAction;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{4CAAFEEE-73ED-4C4B-8413-8BF1C3FFD777}") IActionClient  : public System::IInterface 
{
	virtual System::Classes::TComponent* __fastcall GetRoot() = 0 ;
	virtual bool __fastcall GetActionClient() = 0 ;
	virtual void __fastcall SetActionClient(const bool Value) = 0 ;
	virtual System::Classes::TBasicAction* __fastcall GetAction() = 0 ;
	virtual void __fastcall SetAction(System::Classes::TBasicAction* const Value) = 0 ;
	virtual int __fastcall GetIndex() = 0 ;
	virtual void __fastcall InitiateAction() = 0 ;
	__property System::Classes::TBasicAction* Action = {read=GetAction, write=SetAction};
};

__interface  INTERFACE_UUID("{DE946EB7-0A6F-4458-AEB0-C911122630D0}") IIsChecked  : public System::IInterface 
{
	virtual bool __fastcall GetIsChecked() = 0 ;
	virtual void __fastcall SetIsChecked(const bool Value) = 0 ;
	virtual bool __fastcall IsCheckedStored() = 0 ;
	__property bool IsChecked = {read=GetIsChecked, write=SetIsChecked};
};

__interface  INTERFACE_UUID("{F5C14792-67AB-41F2-99C1-90C7F94102EE}") IGroupName  : public IIsChecked 
{
	virtual System::UnicodeString __fastcall GetGroupName() = 0 ;
	virtual void __fastcall SetGroupName(const System::UnicodeString Value) = 0 ;
	virtual bool __fastcall GroupNameStored() = 0 ;
	__property System::UnicodeString GroupName = {read=GetGroupName, write=SetGroupName};
};

__interface  INTERFACE_UUID("{1AE6E932-9291-4BCD-93D1-DDD2A3E09394}") IKeyShortcut  : public System::IInterface 
{
	virtual System::Classes::TShortCut __fastcall GetShortcut() = 0 ;
	virtual void __fastcall SetShortcut(const System::Classes::TShortCut Value) = 0 ;
	__property System::Classes::TShortCut Shortcut = {read=GetShortcut, write=SetShortcut};
};

__interface  INTERFACE_UUID("{3D039C9C-8888-466F-A344-E7026EEE2C07}") ICaption  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetText() = 0 ;
	virtual void __fastcall SetText(const System::UnicodeString Value) = 0 ;
	virtual bool __fastcall TextStored() = 0 ;
	__property System::UnicodeString Text = {read=GetText, write=SetText};
};

__interface  INTERFACE_UUID("{62BDCA4F-820A-4058-B57A-FE8931DB3CCC}") IGlyph  : public System::IInterface 
{
	virtual System::Uitypes::TImageIndex __fastcall GetImageIndex() = 0 ;
	virtual void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value) = 0 ;
	virtual System::Imagelist::TBaseImageList* __fastcall GetImages() = 0 ;
	virtual void __fastcall SetImages(System::Imagelist::TBaseImageList* const Value) = 0 ;
	virtual void __fastcall ImagesChanged() = 0 ;
	__property System::Uitypes::TImageIndex ImageIndex = {read=GetImageIndex, write=SetImageIndex};
	__property System::Imagelist::TBaseImageList* Images = {read=GetImages, write=SetImages};
};

class PASCALIMPLEMENTATION TCustomActionList : public System::Actions::TContainedActionList
{
	typedef System::Actions::TContainedActionList inherited;
	
private:
	System::Imagelist::TImageLink* FImageLink;
	void __fastcall SetImages(System::Imagelist::TBaseImageList* const Value);
	System::Imagelist::TBaseImageList* __fastcall GetImages();
	
protected:
	virtual void __fastcall ImagesChanged();
	
public:
	__fastcall virtual ~TCustomActionList();
	virtual bool __fastcall DialogKey(const System::Word Key, const System::Classes::TShiftState Shift);
	__property System::Imagelist::TBaseImageList* Images = {read=GetImages, write=SetImages};
public:
	/* TContainedActionList.Create */ inline __fastcall virtual TCustomActionList(System::Classes::TComponent* AOwner) : System::Actions::TContainedActionList(AOwner) { }
	
};


class PASCALIMPLEMENTATION TActionList : public TCustomActionList
{
	typedef TCustomActionList inherited;
	
__published:
	__property Name = {default=0};
	__property Images;
	__property State = {default=0};
	__property OnChange;
	__property OnExecute;
	__property OnStateChange;
	__property OnUpdate;
public:
	/* TCustomActionList.Destroy */ inline __fastcall virtual ~TActionList() { }
	
public:
	/* TContainedActionList.Create */ inline __fastcall virtual TActionList(System::Classes::TComponent* AOwner) : TCustomActionList(AOwner) { }
	
};


class PASCALIMPLEMENTATION TActionLink : public System::Actions::TContainedActionLink
{
	typedef System::Actions::TContainedActionLink inherited;
	
private:
	System::TObject* FClient;
	bool FIsViewActionClient;
	System::Imagelist::TBaseImageList* FImages;
	_di_IGlyph FGlyph;
	_di_ICaption FCaption;
	_di_IIsChecked FChecked;
	_di_IGroupName FGroupName;
	void __fastcall UpdateImages(const bool AImageListLinked);
	
protected:
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual void __fastcall SetAction(System::Classes::TBasicAction* Value);
	virtual bool __fastcall IsCaptionLinked();
	virtual bool __fastcall IsCheckedLinked();
	virtual bool __fastcall IsEnabledLinked();
	virtual bool __fastcall IsGroupIndexLinked();
	virtual bool __fastcall IsOnExecuteLinked();
	virtual bool __fastcall IsShortCutLinked();
	virtual bool __fastcall IsVisibleLinked();
	virtual bool __fastcall IsImageIndexLinked();
	virtual void __fastcall SetCaption(const System::UnicodeString Value);
	virtual void __fastcall SetChecked(bool Value);
	virtual void __fastcall SetGroupIndex(int Value);
	virtual void __fastcall SetImageIndex(int Value);
	virtual void __fastcall Change();
	__property _di_IGlyph Glyph = {read=FGlyph};
	
public:
	bool __fastcall IsViewActionClient();
	__property System::TObject* Client = {read=FClient};
	__property System::Imagelist::TBaseImageList* Images = {read=FImages};
	__property bool CaptionLinked = {read=IsCaptionLinked, nodefault};
	__property bool HintLinked = {read=IsHintLinked, nodefault};
	__property bool CheckedLinked = {read=IsCheckedLinked, nodefault};
	__property bool EnabledLinked = {read=IsEnabledLinked, nodefault};
	__property bool GroupIndexLinked = {read=IsGroupIndexLinked, nodefault};
	__property bool ShortCutLinked = {read=IsShortCutLinked, nodefault};
	__property bool VisibleLinked = {read=IsVisibleLinked, nodefault};
	__property bool OnExecuteLinked = {read=IsOnExecuteLinked, nodefault};
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TActionLink(System::TObject* AClient) : System::Actions::TContainedActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TActionLink() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TActionLinkClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TActionLinkClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TShortCutList : public System::Actions::TCustomShortCutList
{
	typedef System::Actions::TCustomShortCutList inherited;
	
public:
	virtual int __fastcall Add(const System::UnicodeString S);
public:
	/* TStringList.Create */ inline __fastcall TShortCutList()/* overload */ : System::Actions::TCustomShortCutList() { }
	/* TStringList.Create */ inline __fastcall TShortCutList(bool OwnsObjects)/* overload */ : System::Actions::TCustomShortCutList(OwnsObjects) { }
	/* TStringList.Create */ inline __fastcall TShortCutList(System::WideChar QuoteChar, System::WideChar Delimiter)/* overload */ : System::Actions::TCustomShortCutList(QuoteChar, Delimiter) { }
	/* TStringList.Create */ inline __fastcall TShortCutList(System::WideChar QuoteChar, System::WideChar Delimiter, System::Classes::TStringsOptions Options)/* overload */ : System::Actions::TCustomShortCutList(QuoteChar, Delimiter, Options) { }
	/* TStringList.Create */ inline __fastcall TShortCutList(System::Types::TDuplicates Duplicates, bool Sorted, bool CaseSensitive)/* overload */ : System::Actions::TCustomShortCutList(Duplicates, Sorted, CaseSensitive) { }
	/* TStringList.Destroy */ inline __fastcall virtual ~TShortCutList() { }
	
};


class PASCALIMPLEMENTATION TCustomAction : public System::Actions::TContainedAction
{
	typedef System::Actions::TContainedAction inherited;
	
private:
	bool FShortCutPressed;
	System::Classes::TComponent* FTarget;
	System::Sysutils::TArchitectures FUnsupportedArchitectures;
	System::Sysutils::TPlatforms FUnsupportedPlatforms;
	bool FOldVisible;
	bool FOldEnabled;
	bool FSupported;
	System::UnicodeString FCustomText;
	bool FSupportedChecked;
	bool FHideIfUnsupportedInterface;
	System::UnicodeString __fastcall GetText();
	void __fastcall SetText(const System::UnicodeString Value);
	TCustomActionList* __fastcall GetCustomActionList();
	void __fastcall SetCustomActionList(TCustomActionList* const Value);
	void __fastcall ReaderCaptionProc(System::Classes::TReader* Reader);
	void __fastcall WriterCaptionProc(System::Classes::TWriter* Writer);
	void __fastcall ReaderImageIndexProc(System::Classes::TReader* Reader);
	void __fastcall WriterImageIndexProc(System::Classes::TWriter* Writer);
	void __fastcall SetUnsupportedArchitectures(const System::Sysutils::TArchitectures Value);
	void __fastcall SetUnsupportedPlatforms(const System::Sysutils::TPlatforms Value);
	void __fastcall SetCustomText(const System::UnicodeString Value);
	void __fastcall SetHideIfUnsupportedInterface(const bool Value);
	
protected:
	void __fastcall UpdateSupported();
	virtual bool __fastcall IsSupportedInterface();
	virtual System::Actions::TCustomShortCutList* __fastcall CreateShortCutList();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall SetTarget(System::Classes::TComponent* const Value);
	virtual void __fastcall SetEnabled(bool Value);
	virtual void __fastcall SetVisible(bool Value);
	virtual void __fastcall Loaded();
	virtual void __fastcall CustomTextChanged();
	__property System::UnicodeString CustomText = {read=FCustomText, write=SetCustomText};
	
public:
	__fastcall virtual TCustomAction(System::Classes::TComponent* AOwner);
	DYNAMIC bool __fastcall Execute();
	virtual bool __fastcall Update();
	bool __fastcall IsDialogKey(const System::Word Key, const System::Classes::TShiftState Shift);
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property Caption = {stored=false, default=0};
	__property TCustomActionList* ActionList = {read=GetCustomActionList, write=SetCustomActionList};
	__property bool HideIfUnsupportedInterface = {read=FHideIfUnsupportedInterface, write=SetHideIfUnsupportedInterface, nodefault};
	__property bool ShortCutPressed = {read=FShortCutPressed, write=FShortCutPressed, nodefault};
	__property System::Classes::TComponent* Target = {read=FTarget, write=SetTarget};
	__property System::Sysutils::TArchitectures UnsupportedArchitectures = {read=FUnsupportedArchitectures, write=SetUnsupportedArchitectures, default=0};
	__property System::Sysutils::TPlatforms UnsupportedPlatforms = {read=FUnsupportedPlatforms, write=SetUnsupportedPlatforms, default=0};
	__property bool Supported = {read=FSupported, nodefault};
public:
	/* TContainedAction.Destroy */ inline __fastcall virtual ~TCustomAction() { }
	
};


typedef void __fastcall (__closure *TOnCreateComponent)(System::TObject* Sender, System::Classes::TComponent* &NewComponent);

typedef void __fastcall (__closure *TOnBeforeShow)(System::TObject* Sender, bool &CanShow);

class PASCALIMPLEMENTATION TCustomViewAction : public TCustomAction
{
	typedef TCustomAction inherited;
	
private:
	System::Classes::TComponent* FComponent;
	TOnCreateComponent FOnCreateComponent;
	System::Classes::TNotifyEvent FOnAfterShow;
	TOnBeforeShow FOnBeforeShow;
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall DoCreateComponent(System::Classes::TComponent* &NewComponent);
	virtual void __fastcall DoBeforeShow(bool &CanShow);
	virtual void __fastcall DoAfterShow();
	virtual System::UnicodeString __fastcall ComponentText();
	virtual void __fastcall ComponentChanged();
	virtual void __fastcall SetComponent(System::Classes::TComponent* const Value);
	__property TOnCreateComponent OnCreateComponent = {read=FOnCreateComponent, write=FOnCreateComponent};
	__property TOnBeforeShow OnBeforeShow = {read=FOnBeforeShow, write=FOnBeforeShow};
	__property System::Classes::TNotifyEvent OnAfterShow = {read=FOnAfterShow, write=FOnAfterShow};
	
public:
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	__property System::Classes::TComponent* Component = {read=FComponent, write=SetComponent};
public:
	/* TCustomAction.Create */ inline __fastcall virtual TCustomViewAction(System::Classes::TComponent* AOwner) : TCustomAction(AOwner) { }
	
public:
	/* TContainedAction.Destroy */ inline __fastcall virtual ~TCustomViewAction() { }
	
};


class PASCALIMPLEMENTATION TAction : public TCustomAction
{
	typedef TCustomAction inherited;
	
public:
	__fastcall virtual TAction(System::Classes::TComponent* AOwner);
	
__published:
	__property AutoCheck = {default=0};
	__property Text = {default=0};
	__property Checked = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property UnsupportedArchitectures = {default=0};
	__property UnsupportedPlatforms = {default=0};
	__property OnExecute;
	__property OnUpdate;
	__property OnHint;
public:
	/* TContainedAction.Destroy */ inline __fastcall virtual ~TAction() { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int __fastcall TextToShortCut(System::UnicodeString Text);
}	/* namespace Actnlist */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_ACTNLIST)
using namespace Fmx::Actnlist;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_ActnlistHPP
