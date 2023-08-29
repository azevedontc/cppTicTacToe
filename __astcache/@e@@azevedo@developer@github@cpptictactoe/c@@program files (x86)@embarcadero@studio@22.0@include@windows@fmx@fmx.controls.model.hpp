// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Controls.Model.pas' rev: 35.00 (Windows)

#ifndef Fmx_Controls_ModelHPP
#define Fmx_Controls_ModelHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Rtti.hpp>
#include <System.Classes.hpp>
#include <FMX.Presentation.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Controls
{
namespace Model
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDataModel;
//-- type declarations -------------------------------------------------------
typedef System::Generics::Collections::TPair__2<System::UnicodeString,System::Rtti::TValue> TDataRecord;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDataModel : public Fmx::Presentation::Messages::TMessageSender
{
	typedef Fmx::Presentation::Messages::TMessageSender inherited;
	
	
public:
	typedef System::Generics::Collections::TDictionary__2<System::UnicodeString,System::Rtti::TValue>* TDataSource;
	
	
private:
	System::Classes::TComponent* FOwner;
	System::Generics::Collections::TDictionary__2<System::UnicodeString,System::Rtti::TValue>* FDataSource;
	System::Rtti::TValue __fastcall GetData(const System::UnicodeString Index);
	void __fastcall SetData(const System::UnicodeString Index, const System::Rtti::TValue &Value);
	void __fastcall RemoveData(const System::UnicodeString Index);
	
protected:
	virtual HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	int __stdcall _AddRef();
	int __stdcall _Release();
	
public:
	__fastcall virtual TDataModel(System::Classes::TComponent* const AOwner)/* overload */;
	__fastcall virtual ~TDataModel();
	__property System::Classes::TComponent* Owner = {read=FOwner};
	__property System::Rtti::TValue Data[const System::UnicodeString Key] = {read=GetData, write=SetData};
	__property System::Generics::Collections::TDictionary__2<System::UnicodeString,System::Rtti::TValue>* DataSource = {read=FDataSource};
public:
	/* TMessageSender.Create */ inline __fastcall virtual TDataModel()/* overload */ : Fmx::Presentation::Messages::TMessageSender() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TDataModelClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TDataModelClass);
#endif /* _WIN64 */

//-- var, const, procedure ---------------------------------------------------
static const System::Word MM_BASE = System::Word(0x1600);
static const System::Word MM_GETDATA = System::Word(0x1601);
static const System::Word MM_DATA_CHANGED = System::Word(0x1602);
static const System::Word MM_USER = System::Word(0x1700);
}	/* namespace Model */
}	/* namespace Controls */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_CONTROLS_MODEL)
using namespace Fmx::Controls::Model;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_CONTROLS)
using namespace Fmx::Controls;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_Controls_ModelHPP
