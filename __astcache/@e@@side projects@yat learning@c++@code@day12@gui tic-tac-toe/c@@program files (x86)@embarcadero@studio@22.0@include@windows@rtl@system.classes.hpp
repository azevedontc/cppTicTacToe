// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Classes.pas' rev: 35.00 (Windows)

#ifndef System_ClassesHPP
#define System_ClassesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Types.hpp>
#include <System.TypInfo.hpp>
#include <System.Rtti.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------
#if defined(Yield)
#undef Yield
#endif
#pragma option -w-8022  // "TBaseAsyncResult::Dispatch" hides virtual function "TObject::Dispatch"

namespace System
{
namespace Classes
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EStreamError;
class DELPHICLASS EFileStreamError;
class DELPHICLASS EFCreateError;
class DELPHICLASS EFOpenError;
class DELPHICLASS EFilerError;
class DELPHICLASS EReadError;
class DELPHICLASS EWriteError;
class DELPHICLASS EClassNotFound;
class DELPHICLASS EMethodNotFound;
class DELPHICLASS EInvalidImage;
class DELPHICLASS EResNotFound;
class DELPHICLASS EBitsError;
class DELPHICLASS EStringListError;
class DELPHICLASS EComponentError;
class DELPHICLASS EParserError;
class DELPHICLASS EOutOfResources;
class DELPHICLASS EInvalidOperation;
__interface DELPHIINTERFACE TListSortCompareFunc;
typedef System::DelphiInterface<TListSortCompareFunc> _di_TListSortCompareFunc;
class DELPHICLASS TListEnumerator;
class DELPHICLASS TList;
class DELPHICLASS TThreadList;
__interface DELPHIINTERFACE IInterfaceList;
typedef System::DelphiInterface<IInterfaceList> _di_IInterfaceList;
__interface DELPHIINTERFACE IInterfaceListEx;
typedef System::DelphiInterface<IInterfaceListEx> _di_IInterfaceListEx;
class DELPHICLASS TInterfaceListEnumerator;
class DELPHICLASS TInterfaceList;
class DELPHICLASS TBits;
class DELPHICLASS TPersistent;
class DELPHICLASS TInterfacedPersistent;
class DELPHICLASS TRecall;
class DELPHICLASS TCollectionItem;
class DELPHICLASS TCollectionEnumerator;
class DELPHICLASS TCollection;
class DELPHICLASS TOwnedCollection;
__interface DELPHIINTERFACE IStringsAdapter;
typedef System::DelphiInterface<IStringsAdapter> _di_IStringsAdapter;
class DELPHICLASS TStringsEnumerator;
class DELPHICLASS TStrings;
struct TStringItem;
class DELPHICLASS TStringList;
class DELPHICLASS TStream;
__interface DELPHIINTERFACE IStreamPersist;
typedef System::DelphiInterface<IStreamPersist> _di_IStreamPersist;
class DELPHICLASS THandleStream;
class DELPHICLASS TFileStream;
class DELPHICLASS TBufferedFileStream;
class DELPHICLASS TCustomMemoryStream;
class DELPHICLASS TMemoryStream;
class DELPHICLASS TBytesStream;
class DELPHICLASS TStringStream;
class DELPHICLASS TResourceStream;
class DELPHICLASS TPointerStream;
class DELPHICLASS TStreamAdapter;
class DELPHICLASS TClassFinder;
__interface DELPHIINTERFACE IInterfaceComponentReference;
typedef System::DelphiInterface<IInterfaceComponentReference> _di_IInterfaceComponentReference;
class DELPHICLASS TFiler;
__interface DELPHIINTERFACE IVarStreamable;
typedef System::DelphiInterface<IVarStreamable> _di_IVarStreamable;
class DELPHICLASS TReader;
class DELPHICLASS TWriter;
class DELPHICLASS TParser;
class DELPHICLASS EThread;
class DELPHICLASS EThreadExternalException;
__interface DELPHIINTERFACE TThreadProcedure;
typedef System::DelphiInterface<TThreadProcedure> _di_TThreadProcedure;
class DELPHICLASS TThread;
class DELPHICLASS TComponentEnumerator;
__interface DELPHIINTERFACE IVCLComObject;
typedef System::DelphiInterface<IVCLComObject> _di_IVCLComObject;
__interface DELPHIINTERFACE IDesignerNotify;
typedef System::DelphiInterface<IDesignerNotify> _di_IDesignerNotify;
class DELPHICLASS ComponentPlatformsAttribute;
__interface DELPHIINTERFACE TObserverToggleEvent;
typedef System::DelphiInterface<TObserverToggleEvent> _di_TObserverToggleEvent;
__interface DELPHIINTERFACE IObserver;
typedef System::DelphiInterface<IObserver> _di_IObserver;
__interface DELPHIINTERFACE ISingleCastObserver;
typedef System::DelphiInterface<ISingleCastObserver> _di_ISingleCastObserver;
__interface DELPHIINTERFACE IMultiCastObserver;
typedef System::DelphiInterface<IMultiCastObserver> _di_IMultiCastObserver;
__interface DELPHIINTERFACE IEditFormatLink;
typedef System::DelphiInterface<IEditFormatLink> _di_IEditFormatLink;
__interface DELPHIINTERFACE IEditLinkObserver;
typedef System::DelphiInterface<IEditLinkObserver> _di_IEditLinkObserver;
__interface DELPHIINTERFACE TObserverGetCurrentEvent;
typedef System::DelphiInterface<TObserverGetCurrentEvent> _di_TObserverGetCurrentEvent;
__interface DELPHIINTERFACE IEditGridLinkObserver;
typedef System::DelphiInterface<IEditGridLinkObserver> _di_IEditGridLinkObserver;
__interface DELPHIINTERFACE IPositionLinkObserver170;
typedef System::DelphiInterface<IPositionLinkObserver170> _di_IPositionLinkObserver170;
__interface DELPHIINTERFACE IPositionLinkObserver;
typedef System::DelphiInterface<IPositionLinkObserver> _di_IPositionLinkObserver;
__interface DELPHIINTERFACE IControlValueObserver;
typedef System::DelphiInterface<IControlValueObserver> _di_IControlValueObserver;
__interface DELPHIINTERFACE IObserverTrack;
typedef System::DelphiInterface<IObserverTrack> _di_IObserverTrack;
__interface DELPHIINTERFACE IIteratorLinkObserver;
typedef System::DelphiInterface<IIteratorLinkObserver> _di_IIteratorLinkObserver;
class DELPHICLASS TObservers;
class DELPHICLASS TLinkObservers;
class DELPHICLASS TObserverMapping;
class DELPHICLASS EObserverException;
class DELPHICLASS TDefaultAttributeBase;
class DELPHICLASS DefaultAttribute;
class DELPHICLASS NoDefaultAttribute;
class DELPHICLASS ObservableMemberAttribute;
class DELPHICLASS TBaseAsyncResult;
__interface DELPHIINTERFACE TAsyncConstArrayProc;
typedef System::DelphiInterface<TAsyncConstArrayProc> _di_TAsyncConstArrayProc;
template<typename TResult> __interface DELPHIINTERFACE TAsyncConstArrayFunc__1;
#ifdef __clang__
template<typename TResult> using _di_TAsyncConstArrayFunc__1 = System::DelphiInterface<TAsyncConstArrayFunc__1<TResult>>;
#endif
__interface DELPHIINTERFACE TAsyncCallback;
typedef System::DelphiInterface<TAsyncCallback> _di_TAsyncCallback;
class DELPHICLASS TComponent;
class DELPHICLASS TComponentInterfaceDelegate;
class DELPHICLASS TBasicActionLink;
class DELPHICLASS TBasicAction;
class DELPHICLASS TDataModule;
struct TIdentMapEntry;
class DELPHICLASS TTextReader;
class DELPHICLASS TTextWriter;
class DELPHICLASS TBinaryReader;
class DELPHICLASS TBinaryWriter;
class DELPHICLASS TStringReader;
class DELPHICLASS TStringWriter;
class DELPHICLASS TStreamWriter;
class DELPHICLASS TStreamReader;
class DELPHICLASS ELoginCredentialError;
class DELPHICLASS TLoginCredentialService;
__interface DELPHIINTERFACE TPostFoundCycleProc;
typedef System::DelphiInterface<TPostFoundCycleProc> _di_TPostFoundCycleProc;
class DELPHICLASS TProxySubrangeStream;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TSeekOrigin : unsigned char { soBeginning, soCurrent, soEnd };

typedef unsigned TPlatformIds;

enum DECLSPEC_DENUM TAlignment : unsigned char { taLeftJustify, taRightJustify, taCenter };

typedef TAlignment TLeftRight;

enum DECLSPEC_DENUM TBiDiMode : unsigned char { bdLeftToRight, bdRightToLeft, bdRightToLeftNoAlign, bdRightToLeftReadingOnly };

enum DECLSPEC_DENUM TVerticalAlignment : unsigned char { taAlignTop, taAlignBottom, taVerticalCenter };

typedef TVerticalAlignment TTopBottom;

enum DECLSPEC_DENUM System_Classes__1 : unsigned char { ssShift, ssAlt, ssCtrl, ssLeft, ssRight, ssMiddle, ssDouble, ssTouch, ssPen, ssCommand, ssHorizontal };

typedef System::Set<System_Classes__1, System_Classes__1::ssShift, System_Classes__1::ssHorizontal> TShiftState;

typedef int THelpContext;

enum DECLSPEC_DENUM THelpType : unsigned char { htKeyword, htContext };

typedef System::Word TShortCut;

typedef void __fastcall (__closure *TNotifyEvent)(System::TObject* Sender);

typedef void __fastcall (__closure *TGetStrProc)(const System::UnicodeString S);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EStreamError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EStreamError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EStreamError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EStreamError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EStreamError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EStreamError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EStreamError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EStreamError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EStreamError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EStreamError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EStreamError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EStreamError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EStreamError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EStreamError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EFileStreamError : public EStreamError
{
	typedef EStreamError inherited;
	
public:
	__fastcall EFileStreamError(System::PResStringRec ResStringRec, const System::UnicodeString FileName);
public:
	/* Exception.CreateFmt */ inline __fastcall EFileStreamError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EStreamError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EFileStreamError(NativeUInt Ident)/* overload */ : EStreamError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EFileStreamError(System::PResStringRec ResStringRec)/* overload */ : EStreamError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EFileStreamError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EStreamError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EFileStreamError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EStreamError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EFileStreamError(const System::UnicodeString Msg, int AHelpContext) : EStreamError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EFileStreamError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EStreamError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFileStreamError(NativeUInt Ident, int AHelpContext)/* overload */ : EStreamError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFileStreamError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EStreamError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFileStreamError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EStreamError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFileStreamError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EStreamError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EFileStreamError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EFCreateError : public EFileStreamError
{
	typedef EFileStreamError inherited;
	
public:
	/* EFileStreamError.Create */ inline __fastcall EFCreateError(System::PResStringRec ResStringRec, const System::UnicodeString FileName) : EFileStreamError(ResStringRec, FileName) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EFCreateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EFileStreamError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EFCreateError(NativeUInt Ident)/* overload */ : EFileStreamError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EFCreateError(System::PResStringRec ResStringRec)/* overload */ : EFileStreamError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EFCreateError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EFileStreamError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EFCreateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EFileStreamError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EFCreateError(const System::UnicodeString Msg, int AHelpContext) : EFileStreamError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EFCreateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EFileStreamError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFCreateError(NativeUInt Ident, int AHelpContext)/* overload */ : EFileStreamError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFCreateError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EFileStreamError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFCreateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EFileStreamError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFCreateError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EFileStreamError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EFCreateError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EFOpenError : public EFileStreamError
{
	typedef EFileStreamError inherited;
	
public:
	/* EFileStreamError.Create */ inline __fastcall EFOpenError(System::PResStringRec ResStringRec, const System::UnicodeString FileName) : EFileStreamError(ResStringRec, FileName) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EFOpenError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EFileStreamError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EFOpenError(NativeUInt Ident)/* overload */ : EFileStreamError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EFOpenError(System::PResStringRec ResStringRec)/* overload */ : EFileStreamError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EFOpenError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EFileStreamError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EFOpenError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EFileStreamError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EFOpenError(const System::UnicodeString Msg, int AHelpContext) : EFileStreamError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EFOpenError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EFileStreamError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFOpenError(NativeUInt Ident, int AHelpContext)/* overload */ : EFileStreamError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFOpenError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EFileStreamError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFOpenError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EFileStreamError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFOpenError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EFileStreamError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EFOpenError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EFilerError : public EStreamError
{
	typedef EStreamError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EFilerError(const System::UnicodeString Msg) : EStreamError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EFilerError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EStreamError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EFilerError(NativeUInt Ident)/* overload */ : EStreamError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EFilerError(System::PResStringRec ResStringRec)/* overload */ : EStreamError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EFilerError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EStreamError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EFilerError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EStreamError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EFilerError(const System::UnicodeString Msg, int AHelpContext) : EStreamError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EFilerError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EStreamError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFilerError(NativeUInt Ident, int AHelpContext)/* overload */ : EStreamError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFilerError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EStreamError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFilerError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EStreamError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFilerError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EStreamError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EFilerError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EReadError : public EFilerError
{
	typedef EFilerError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EReadError(const System::UnicodeString Msg) : EFilerError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EReadError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EFilerError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EReadError(NativeUInt Ident)/* overload */ : EFilerError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EReadError(System::PResStringRec ResStringRec)/* overload */ : EFilerError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EReadError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EFilerError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EReadError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EFilerError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EReadError(const System::UnicodeString Msg, int AHelpContext) : EFilerError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EReadError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EFilerError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EReadError(NativeUInt Ident, int AHelpContext)/* overload */ : EFilerError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EReadError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EFilerError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EReadError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EFilerError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EReadError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EFilerError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EReadError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EWriteError : public EFilerError
{
	typedef EFilerError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EWriteError(const System::UnicodeString Msg) : EFilerError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EWriteError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EFilerError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EWriteError(NativeUInt Ident)/* overload */ : EFilerError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EWriteError(System::PResStringRec ResStringRec)/* overload */ : EFilerError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EWriteError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EFilerError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EWriteError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EFilerError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EWriteError(const System::UnicodeString Msg, int AHelpContext) : EFilerError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EWriteError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EFilerError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EWriteError(NativeUInt Ident, int AHelpContext)/* overload */ : EFilerError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EWriteError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EFilerError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EWriteError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EFilerError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EWriteError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EFilerError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EWriteError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EClassNotFound : public EFilerError
{
	typedef EFilerError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EClassNotFound(const System::UnicodeString Msg) : EFilerError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EClassNotFound(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EFilerError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EClassNotFound(NativeUInt Ident)/* overload */ : EFilerError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EClassNotFound(System::PResStringRec ResStringRec)/* overload */ : EFilerError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EClassNotFound(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EFilerError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EClassNotFound(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EFilerError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EClassNotFound(const System::UnicodeString Msg, int AHelpContext) : EFilerError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EClassNotFound(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EFilerError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EClassNotFound(NativeUInt Ident, int AHelpContext)/* overload */ : EFilerError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EClassNotFound(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EFilerError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EClassNotFound(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EFilerError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EClassNotFound(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EFilerError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EClassNotFound() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EMethodNotFound : public EFilerError
{
	typedef EFilerError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EMethodNotFound(const System::UnicodeString Msg) : EFilerError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EMethodNotFound(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EFilerError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EMethodNotFound(NativeUInt Ident)/* overload */ : EFilerError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EMethodNotFound(System::PResStringRec ResStringRec)/* overload */ : EFilerError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EMethodNotFound(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EFilerError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EMethodNotFound(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EFilerError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EMethodNotFound(const System::UnicodeString Msg, int AHelpContext) : EFilerError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EMethodNotFound(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EFilerError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EMethodNotFound(NativeUInt Ident, int AHelpContext)/* overload */ : EFilerError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EMethodNotFound(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EFilerError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EMethodNotFound(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EFilerError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EMethodNotFound(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EFilerError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EMethodNotFound() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EInvalidImage : public EFilerError
{
	typedef EFilerError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvalidImage(const System::UnicodeString Msg) : EFilerError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvalidImage(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EFilerError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidImage(NativeUInt Ident)/* overload */ : EFilerError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidImage(System::PResStringRec ResStringRec)/* overload */ : EFilerError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidImage(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EFilerError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidImage(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EFilerError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidImage(const System::UnicodeString Msg, int AHelpContext) : EFilerError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidImage(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EFilerError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidImage(NativeUInt Ident, int AHelpContext)/* overload */ : EFilerError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidImage(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EFilerError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidImage(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EFilerError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidImage(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EFilerError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidImage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EResNotFound : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EResNotFound(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EResNotFound(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EResNotFound(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EResNotFound(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EResNotFound(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EResNotFound(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EResNotFound(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EResNotFound(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EResNotFound(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EResNotFound(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EResNotFound(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EResNotFound(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EResNotFound() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EBitsError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EBitsError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EBitsError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EBitsError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EBitsError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EBitsError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EBitsError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EBitsError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EBitsError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EBitsError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EBitsError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EBitsError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EBitsError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EBitsError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EStringListError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EStringListError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EStringListError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EStringListError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EStringListError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EStringListError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EStringListError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EStringListError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EStringListError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EStringListError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EStringListError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EStringListError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EStringListError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EStringListError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EComponentError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EComponentError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EComponentError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EComponentError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EComponentError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EComponentError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EComponentError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EComponentError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EComponentError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EComponentError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EComponentError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EComponentError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EComponentError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EComponentError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EParserError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EParserError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EParserError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EParserError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EParserError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EParserError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EParserError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EParserError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EParserError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EParserError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EParserError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EParserError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EParserError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EParserError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EOutOfResources : public System::Sysutils::EOutOfMemory
{
	typedef System::Sysutils::EOutOfMemory inherited;
	
public:
	/* Exception.Create */ inline __fastcall EOutOfResources(const System::UnicodeString Msg) : System::Sysutils::EOutOfMemory(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EOutOfResources(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::EOutOfMemory(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EOutOfResources(NativeUInt Ident)/* overload */ : System::Sysutils::EOutOfMemory(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOutOfResources(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::EOutOfMemory(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOutOfResources(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EOutOfMemory(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOutOfResources(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::EOutOfMemory(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOutOfResources(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::EOutOfMemory(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOutOfResources(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::EOutOfMemory(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOutOfResources(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::EOutOfMemory(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOutOfResources(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::EOutOfMemory(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOutOfResources(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EOutOfMemory(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOutOfResources(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::EOutOfMemory(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOutOfResources() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EInvalidOperation : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvalidOperation(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvalidOperation(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidOperation(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidOperation(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidOperation(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidOperation(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidOperation(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidOperation(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidOperation(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidOperation(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidOperation(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidOperation(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidOperation() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

using System::Types::TDuplicates;

typedef System::DynamicArray<void *> TPointerList;

typedef TPointerList *PPointerList;

typedef int __fastcall (*TListSortCompare)(void * Item1, void * Item2);

__interface TListSortCompareFunc  : public System::IInterface 
{
	virtual int __fastcall Invoke(void * Item1, void * Item2) = 0 ;
};

enum DECLSPEC_DENUM TListNotification : unsigned char { lnAdded, lnExtracted, lnDeleted };

enum DECLSPEC_DENUM TListAssignOp : unsigned char { laCopy, laAnd, laOr, laXor, laSrcUnique, laDestUnique };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListEnumerator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FIndex;
	TList* FList;
	
public:
	__fastcall TListEnumerator(TList* AList);
	void * __fastcall GetCurrent();
	bool __fastcall MoveNext();
	__property void * Current = {read=GetCurrent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TListEnumerator() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TList : public System::TObject
{
	typedef System::TObject inherited;
	
	
public:
	typedef System::Types::TDirection TDirection;
	
	
public:
	void * operator[](int Index) { return this->Items[Index]; }
	
private:
	TPointerList FList;
	int FCount;
	int FCapacity;
	
protected:
	void * __fastcall Get(int Index);
	virtual void __fastcall Grow();
	void __fastcall Put(int Index, void * Item);
	virtual void __fastcall Notify(void * Ptr, TListNotification Action);
	void __fastcall SetCapacity(int NewCapacity);
	void __fastcall SetCount(int NewCount);
	
public:
	__fastcall virtual ~TList();
	int __fastcall Add(void * Item);
	virtual void __fastcall Clear();
	void __fastcall Delete(int Index);
	__classmethod virtual void __fastcall Error(const System::UnicodeString Msg, NativeInt Data)/* overload */;
	__classmethod void __fastcall Error(System::PResStringRec Msg, NativeInt Data)/* overload */;
	void __fastcall Exchange(int Index1, int Index2);
	TList* __fastcall Expand();
	void * __fastcall Extract(void * Item);
	void * __fastcall ExtractItem(void * Item, System::Types::TDirection Direction);
	void * __fastcall First();
	TListEnumerator* __fastcall GetEnumerator();
	int __fastcall IndexOf(void * Item);
	int __fastcall IndexOfItem(void * Item, System::Types::TDirection Direction);
	void __fastcall Insert(int Index, void * Item);
	void * __fastcall Last();
	void __fastcall Move(int CurIndex, int NewIndex);
	int __fastcall Remove(void * Item);
	int __fastcall RemoveItem(void * Item, System::Types::TDirection Direction);
	void __fastcall Pack();
	void __fastcall Sort(TListSortCompare Compare);
	void __fastcall SortList(const _di_TListSortCompareFunc Compare);
	void __fastcall Assign(TList* ListA, TListAssignOp AOperator = (TListAssignOp)(0x0), TList* ListB = (TList*)(0x0));
	__property int Capacity = {read=FCapacity, write=SetCapacity, nodefault};
	__property int Count = {read=FCount, write=SetCount, nodefault};
	__property void * Items[int Index] = {read=Get, write=Put/*, default*/};
	__property TPointerList List = {read=FList};
public:
	/* TObject.Create */ inline __fastcall TList() : System::TObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TThreadList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TList* FList;
	System::TObject* FLock;
	System::Types::TDuplicates FDuplicates;
	
public:
	__fastcall TThreadList();
	__fastcall virtual ~TThreadList();
	void __fastcall Add(void * Item);
	void __fastcall Clear();
	TList* __fastcall LockList();
	void __fastcall Remove(void * Item);
	void __fastcall RemoveItem(void * Item, System::Types::TDirection Direction);
	void __fastcall UnlockList();
	__property System::Types::TDuplicates Duplicates = {read=FDuplicates, write=FDuplicates, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{285DEA8A-B865-11D1-AAA7-00C04FB17A72}") IInterfaceList  : public System::IInterface 
{
	
public:
	System::_di_IInterface operator[](int Index) { return this->Items[Index]; }
	virtual System::_di_IInterface __fastcall Get(int Index) = 0 ;
	virtual int __fastcall GetCapacity() = 0 ;
	virtual int __fastcall GetCount() = 0 ;
	virtual void __fastcall Put(int Index, const System::_di_IInterface Item) = 0 ;
	virtual void __fastcall SetCapacity(int NewCapacity) = 0 ;
	virtual void __fastcall SetCount(int NewCount) = 0 ;
	virtual void __fastcall Clear() = 0 ;
	virtual void __fastcall Delete(int Index) = 0 ;
	virtual void __fastcall Exchange(int Index1, int Index2) = 0 ;
	virtual System::_di_IInterface __fastcall First() = 0 ;
	virtual int __fastcall IndexOf(const System::_di_IInterface Item) = 0 ;
	virtual int __fastcall Add(const System::_di_IInterface Item) = 0 ;
	virtual void __fastcall Insert(int Index, const System::_di_IInterface Item) = 0 ;
	virtual System::_di_IInterface __fastcall Last() = 0 ;
	virtual int __fastcall Remove(const System::_di_IInterface Item) = 0 ;
	virtual void __fastcall Lock() = 0 ;
	virtual void __fastcall Unlock() = 0 ;
	__property int Capacity = {read=GetCapacity, write=SetCapacity};
	__property int Count = {read=GetCount, write=SetCount};
	__property System::_di_IInterface Items[int Index] = {read=Get, write=Put/*, default*/};
};

__interface  INTERFACE_UUID("{FDB39D70-65B9-4995-9436-6084ACA05DB3}") IInterfaceListEx  : public IInterfaceList 
{
	virtual TInterfaceListEnumerator* __fastcall GetEnumerator() = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TInterfaceListEnumerator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FIndex;
	TInterfaceList* FInterfaceList;
	
public:
	__fastcall TInterfaceListEnumerator(TInterfaceList* AInterfaceList);
	System::_di_IInterface __fastcall GetCurrent();
	bool __fastcall MoveNext();
	__property System::_di_IInterface Current = {read=GetCurrent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TInterfaceListEnumerator() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TInterfaceList : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	System::_di_IInterface operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Generics::Collections::TThreadList__1<System::_di_IInterface>* FList;
	
protected:
	System::_di_IInterface __fastcall Get(int Index);
	int __fastcall GetCapacity();
	int __fastcall GetCount();
	void __fastcall Put(int Index, const System::_di_IInterface Item);
	void __fastcall SetCapacity(int NewCapacity);
	void __fastcall SetCount(int NewCount);
	
public:
	__fastcall TInterfaceList();
	__fastcall virtual ~TInterfaceList();
	void __fastcall Clear();
	void __fastcall Delete(int Index);
	void __fastcall Exchange(int Index1, int Index2);
	TInterfaceList* __fastcall Expand();
	System::_di_IInterface __fastcall First();
	int __fastcall IndexOf(const System::_di_IInterface Item);
	int __fastcall IndexOfItem(const System::_di_IInterface Item, System::Types::TDirection Direction);
	int __fastcall Add(const System::_di_IInterface Item);
	void __fastcall Insert(int Index, const System::_di_IInterface Item);
	System::_di_IInterface __fastcall Last();
	int __fastcall Remove(const System::_di_IInterface Item);
	int __fastcall RemoveItem(const System::_di_IInterface Item, System::Types::TDirection Direction);
	void __fastcall Lock();
	void __fastcall Unlock();
	TInterfaceListEnumerator* __fastcall GetEnumerator();
	__property int Capacity = {read=GetCapacity, write=SetCapacity, nodefault};
	__property int Count = {read=GetCount, write=SetCount, nodefault};
	__property System::_di_IInterface Items[int Index] = {read=Get, write=Put/*, default*/};
private:
	void *__IInterfaceListEx;	// IInterfaceListEx 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FDB39D70-65B9-4995-9436-6084ACA05DB3}
	operator _di_IInterfaceListEx()
	{
		_di_IInterfaceListEx intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IInterfaceListEx*(void) { return (IInterfaceListEx*)&__IInterfaceListEx; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {285DEA8A-B865-11D1-AAA7-00C04FB17A72}
	operator _di_IInterfaceList()
	{
		_di_IInterfaceList intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IInterfaceList*(void) { return (IInterfaceList*)&__IInterfaceListEx; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBits : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	bool operator[](int Index) { return this->Bits[Index]; }
	
private:
	int FSize;
	void *FBits;
	void __fastcall Error();
	void __fastcall SetSize(int Value);
	void __fastcall SetBit(int Index, bool Value);
	bool __fastcall GetBit(int Index);
	
public:
	__fastcall virtual ~TBits();
	int __fastcall OpenBit();
	__property bool Bits[int Index] = {read=GetBit, write=SetBit/*, default*/};
	__property int Size = {read=FSize, write=SetSize, nodefault};
public:
	/* TObject.Create */ inline __fastcall TBits() : System::TObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPersistent : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall AssignError(TPersistent* Source);
	
protected:
	virtual void __fastcall AssignTo(TPersistent* Dest);
	virtual void __fastcall DefineProperties(TFiler* Filer);
	DYNAMIC TPersistent* __fastcall GetOwner();
	
public:
	__fastcall virtual ~TPersistent();
	virtual void __fastcall Assign(TPersistent* Source);
	DYNAMIC System::UnicodeString __fastcall GetNamePath();
public:
	/* TObject.Create */ inline __fastcall TPersistent() : System::TObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TPersistentClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TPersistentClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TInterfacedPersistent : public TPersistent
{
	typedef TPersistent inherited;
	
private:
	System::_di_IInterface FOwnerInterface;
	
protected:
	int __stdcall _AddRef();
	int __stdcall _Release();
	
public:
	virtual HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	virtual void __fastcall AfterConstruction();
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TInterfacedPersistent() { }
	
public:
	/* TObject.Create */ inline __fastcall TInterfacedPersistent() : TPersistent() { }
	
private:
	void *__IInterface;	// System::IInterface 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IInterface; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRecall : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TPersistent* FStorage;
	TPersistent* FReference;
	
public:
	__fastcall TRecall(TPersistent* AStorage, TPersistent* AReference);
	__fastcall virtual ~TRecall();
	void __fastcall Store();
	void __fastcall Forget();
	__property TPersistent* Reference = {read=FReference};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCollectionItem : public TPersistent
{
	typedef TPersistent inherited;
	
private:
	TCollection* FCollection;
	int FID;
	int __fastcall GetIndex();
	
protected:
	void __fastcall Changed(bool AllItems);
	DYNAMIC TPersistent* __fastcall GetOwner();
	virtual System::UnicodeString __fastcall GetDisplayName();
	virtual void __fastcall SetCollection(TCollection* Value);
	virtual void __fastcall SetIndex(int Value);
	virtual void __fastcall SetDisplayName(const System::UnicodeString Value);
	
public:
	__fastcall virtual TCollectionItem(TCollection* Collection);
	__fastcall virtual ~TCollectionItem();
	virtual void __fastcall Release();
	DYNAMIC System::UnicodeString __fastcall GetNamePath();
	__property TCollection* Collection = {read=FCollection, write=SetCollection};
	__property int ID = {read=FID, nodefault};
	__property int Index = {read=GetIndex, write=SetIndex, nodefault};
	__property System::UnicodeString DisplayName = {read=GetDisplayName, write=SetDisplayName};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TCollectionItemClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCollectionItemClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCollectionEnumerator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FIndex;
	TCollection* FCollection;
	
public:
	__fastcall TCollectionEnumerator(TCollection* ACollection);
	TCollectionItem* __fastcall GetCurrent();
	bool __fastcall MoveNext();
	__property TCollectionItem* Current = {read=GetCurrent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCollectionEnumerator() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCollection : public TPersistent
{
	typedef TPersistent inherited;
	
private:
	TCollectionItemClass FItemClass;
	System::Generics::Collections::TList__1<TCollectionItem*>* FItems;
	int FUpdateCount;
	int FNextID;
	System::UnicodeString FPropName;
	int __fastcall GetCapacity();
	int __fastcall GetCount();
	System::UnicodeString __fastcall GetPropName();
	void __fastcall InsertItem(TCollectionItem* Item);
	void __fastcall RemoveItem(TCollectionItem* Item);
	void __fastcall SetCapacity(int Value);
	
protected:
	virtual void __fastcall Added _DEPRECATED_ATTRIBUTE0 (TCollectionItem* &Item);
	virtual void __fastcall Deleting _DEPRECATED_ATTRIBUTE0 (TCollectionItem* Item);
	__property int NextID = {read=FNextID, nodefault};
	virtual void __fastcall Notify(TCollectionItem* Item, System::Generics::Collections::TCollectionNotification Action);
	DYNAMIC int __fastcall GetAttrCount();
	DYNAMIC System::UnicodeString __fastcall GetAttr(int Index);
	DYNAMIC System::UnicodeString __fastcall GetItemAttr(int Index, int ItemIndex);
	void __fastcall Changed();
	TCollectionItem* __fastcall GetItem(int Index);
	void __fastcall SetItem(int Index, TCollectionItem* Value);
	virtual void __fastcall SetItemName(TCollectionItem* Item);
	virtual void __fastcall Update(TCollectionItem* Item);
	__property System::UnicodeString PropName = {read=GetPropName, write=FPropName};
	__property int UpdateCount = {read=FUpdateCount, nodefault};
	
public:
	__fastcall TCollection(TCollectionItemClass ItemClass);
	__fastcall virtual ~TCollection();
	TPersistent* __fastcall Owner();
	TCollectionItem* __fastcall Add();
	virtual void __fastcall Assign(TPersistent* Source);
	virtual void __fastcall BeginUpdate();
	void __fastcall Clear();
	void __fastcall ClearAndResetID();
	void __fastcall Delete(int Index);
	virtual void __fastcall EndUpdate();
	void __fastcall Sort(const System::DelphiInterface<System::Generics::Defaults::IComparer__1<TCollectionItem*> > AComparer);
	TCollectionItem* __fastcall FindItemID(int ID);
	TCollectionEnumerator* __fastcall GetEnumerator();
	DYNAMIC System::UnicodeString __fastcall GetNamePath();
	TCollectionItem* __fastcall Insert(int Index);
	__property int Capacity = {read=GetCapacity, write=SetCapacity, nodefault};
	__property int Count = {read=GetCount, nodefault};
	__property TCollectionItemClass ItemClass = {read=FItemClass};
	__property TCollectionItem* Items[int Index] = {read=GetItem, write=SetItem};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TOwnedCollection : public TCollection
{
	typedef TCollection inherited;
	
private:
	TPersistent* FOwner;
	
protected:
	DYNAMIC TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TOwnedCollection(TPersistent* AOwner, TCollectionItemClass ItemClass);
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TOwnedCollection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TGetModuleProc)(const System::UnicodeString FileName, const System::UnicodeString UnitName, const System::UnicodeString FormName, const System::UnicodeString DesignClass, TStrings* CoClasses);

__interface  INTERFACE_UUID("{739C2F34-52EC-11D0-9EA6-0020AF3D82DA}") IStringsAdapter  : public System::IInterface 
{
	virtual void __fastcall ReferenceStrings(TStrings* S) = 0 ;
	virtual void __fastcall ReleaseStrings() = 0 ;
};

enum DECLSPEC_DENUM System_Classes__23 : unsigned char { sdDelimiter, sdQuoteChar, sdNameValueSeparator, sdLineBreak, sdStrictDelimiter };

typedef System::Set<System_Classes__23, System_Classes__23::sdDelimiter, System_Classes__23::sdStrictDelimiter> TStringsDefined;

enum DECLSPEC_DENUM TStringsOption : unsigned char { soStrictDelimiter, soWriteBOM, soTrailingLineBreak, soUseLocale };

typedef System::Set<TStringsOption, TStringsOption::soStrictDelimiter, TStringsOption::soUseLocale> TStringsOptions;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStringsEnumerator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FIndex;
	TStrings* FStrings;
	
public:
	__fastcall TStringsEnumerator(TStrings* AStrings);
	System::UnicodeString __fastcall GetCurrent();
	bool __fastcall MoveNext();
	__property System::UnicodeString Current = {read=GetCurrent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TStringsEnumerator() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStrings : public TPersistent
{
	typedef TPersistent inherited;
	
public:
	System::UnicodeString operator[](int Index) { return this->Strings[Index]; }
	
private:
	System::Sysutils::TEncoding* FEncoding;
	System::Sysutils::TEncoding* FDefaultEncoding;
	System::UnicodeString FLineBreak;
	_di_IStringsAdapter FAdapter;
	int FUpdateCount;
	System::WideChar FDelimiter;
	System::WideChar FQuoteChar;
	System::WideChar FNameValueSeparator;
	TStringsOptions FOptions;
	System::UnicodeString __fastcall GetCommaText();
	System::UnicodeString __fastcall GetDelimitedText();
	System::UnicodeString __fastcall GetName(int Index);
	System::UnicodeString __fastcall GetValue(const System::UnicodeString Name);
	void __fastcall ReadData(TReader* Reader);
	void __fastcall SetCommaText(const System::UnicodeString Value);
	void __fastcall SetDelimitedText(const System::UnicodeString Value);
	void __fastcall SetStringsAdapter(const _di_IStringsAdapter Value);
	void __fastcall SetValue(const System::UnicodeString Name, const System::UnicodeString Value);
	void __fastcall WriteData(TWriter* Writer);
	bool __fastcall GetStrictDelimiter();
	void __fastcall SetStrictDelimiter(const bool Value);
	System::UnicodeString __fastcall GetValueFromIndex(int Index);
	void __fastcall SetValueFromIndex(int Index, const System::UnicodeString Value);
	void __fastcall SetDefaultEncoding(System::Sysutils::TEncoding* const Value);
	bool __fastcall GetTrailingLineBreak();
	void __fastcall SetTrailingLineBreak(const bool Value);
	bool __fastcall GetUseLocale();
	void __fastcall SetUseLocale(const bool Value);
	bool __fastcall GetWriteBOM();
	void __fastcall SetWriteBOM(const bool Value);
	bool __fastcall GetUpdating();
	System::UnicodeString __fastcall GetKeyName(int Index);
	
protected:
	virtual void __fastcall DefineProperties(TFiler* Filer);
	void __fastcall Error(const System::UnicodeString Msg, int Data)/* overload */;
	void __fastcall Error(System::PResStringRec Msg, int Data)/* overload */;
	System::UnicodeString __fastcall ExtractName(const System::UnicodeString S)/* overload */;
	System::UnicodeString __fastcall ExtractName(const System::UnicodeString S, bool AllNames)/* overload */;
	virtual System::UnicodeString __fastcall Get(int Index) = 0 ;
	virtual int __fastcall GetCapacity();
	virtual int __fastcall GetCount() = 0 ;
	virtual System::TObject* __fastcall GetObject(int Index);
	virtual System::UnicodeString __fastcall GetTextStr();
	virtual void __fastcall Put(int Index, const System::UnicodeString S);
	virtual void __fastcall PutObject(int Index, System::TObject* AObject);
	virtual void __fastcall SetCapacity(int NewCapacity);
	virtual void __fastcall SetEncoding(System::Sysutils::TEncoding* const Value);
	virtual void __fastcall SetTextStr(const System::UnicodeString Value);
	virtual void __fastcall SetUpdateState(bool Updating);
	virtual int __fastcall CompareStrings(const System::UnicodeString S1, const System::UnicodeString S2);
	__property int UpdateCount = {read=FUpdateCount, nodefault};
	
public:
	__fastcall TStrings();
	__fastcall virtual ~TStrings();
	virtual int __fastcall Add(const System::UnicodeString S);
	TStrings* __fastcall AddPair(const System::UnicodeString Name, const System::UnicodeString Value)/* overload */;
	TStrings* __fastcall AddPair(const System::UnicodeString Name, const System::UnicodeString Value, System::TObject* AObject)/* overload */;
	virtual int __fastcall AddObject(const System::UnicodeString S, System::TObject* AObject);
	void __fastcall Append(const System::UnicodeString S);
	virtual void __fastcall AddStrings(TStrings* Strings)/* overload */;
	void __fastcall AddStrings(const System::UnicodeString *Strings, const int Strings_High);
	void __fastcall AddStrings(const System::DynamicArray<System::UnicodeString> Strings) {
	   if (Strings.Length)
	     AddStrings(Strings.data(), Strings.High);
	};
	void __fastcall AddStrings(const System::UnicodeString *Strings, const int Strings_High,
	                 System::TObject* const *Objects, const int Objects_High);
	void __fastcall AddStrings(const System::DynamicArray<System::UnicodeString> Strings,
	                 const System::DynamicArray<System::TObject*> Objects) {
	  if (Strings.Length && Objects.Length)
	    AddStrings(Strings.data(), Strings.High, Objects.data(), Objects.High);
	};
	virtual void __fastcall Assign(TPersistent* Source);
	void __fastcall SetStrings(TStrings* Source);
	void __fastcall BeginUpdate();
	virtual void __fastcall Clear() = 0 ;
	virtual void __fastcall Delete(int Index) = 0 ;
	void __fastcall EndUpdate();
	HIDESBASE bool __fastcall Equals(TStrings* Strings);
	virtual void __fastcall Exchange(int Index1, int Index2);
	TStringsEnumerator* __fastcall GetEnumerator();
	virtual System::WideChar * __fastcall GetText();
	virtual int __fastcall IndexOf(const System::UnicodeString S);
	virtual int __fastcall IndexOfName(const System::UnicodeString Name);
	virtual int __fastcall IndexOfObject(System::TObject* AObject);
	virtual void __fastcall Insert(int Index, const System::UnicodeString S) = 0 ;
	virtual void __fastcall InsertObject(int Index, const System::UnicodeString S, System::TObject* AObject);
	virtual void __fastcall LoadFromFile(const System::UnicodeString FileName)/* overload */;
	virtual void __fastcall LoadFromFile(const System::UnicodeString FileName, System::Sysutils::TEncoding* Encoding)/* overload */;
	virtual void __fastcall LoadFromStream(TStream* Stream)/* overload */;
	virtual void __fastcall LoadFromStream(TStream* Stream, System::Sysutils::TEncoding* Encoding)/* overload */;
	virtual void __fastcall Move(int CurIndex, int NewIndex);
	virtual void __fastcall SaveToFile(const System::UnicodeString FileName)/* overload */;
	virtual void __fastcall SaveToFile(const System::UnicodeString FileName, System::Sysutils::TEncoding* Encoding)/* overload */;
	virtual void __fastcall SaveToStream(TStream* Stream)/* overload */;
	virtual void __fastcall SaveToStream(TStream* Stream, System::Sysutils::TEncoding* Encoding)/* overload */;
	virtual void __fastcall SetText(System::WideChar * Text);
#ifndef _WIN64
	System::DynamicArray<System::UnicodeString> __fastcall ToStringArray();
	System::DynamicArray<System::TObject*> __fastcall ToObjectArray();
#else /* _WIN64 */
	System::TArray__1<System::UnicodeString> __fastcall ToStringArray();
	System::TArray__1<System::TObject*> __fastcall ToObjectArray();
#endif /* _WIN64 */
	__property bool Updating = {read=GetUpdating, nodefault};
	__property int Capacity = {read=GetCapacity, write=SetCapacity, nodefault};
	__property System::UnicodeString CommaText = {read=GetCommaText, write=SetCommaText};
	__property int Count = {read=GetCount, nodefault};
	__property System::Sysutils::TEncoding* DefaultEncoding = {read=FDefaultEncoding, write=SetDefaultEncoding};
	__property System::WideChar Delimiter = {read=FDelimiter, write=FDelimiter, nodefault};
	__property System::UnicodeString DelimitedText = {read=GetDelimitedText, write=SetDelimitedText};
	__property System::Sysutils::TEncoding* Encoding = {read=FEncoding};
	__property System::UnicodeString LineBreak = {read=FLineBreak, write=FLineBreak};
	__property System::UnicodeString Names[int Index] = {read=GetName};
	__property System::UnicodeString KeyNames[int Index] = {read=GetKeyName};
	__property System::TObject* Objects[int Index] = {read=GetObject, write=PutObject};
	__property System::WideChar QuoteChar = {read=FQuoteChar, write=FQuoteChar, nodefault};
	__property System::UnicodeString Values[const System::UnicodeString Name] = {read=GetValue, write=SetValue};
	__property System::UnicodeString ValueFromIndex[int Index] = {read=GetValueFromIndex, write=SetValueFromIndex};
	__property System::WideChar NameValueSeparator = {read=FNameValueSeparator, write=FNameValueSeparator, nodefault};
	__property bool StrictDelimiter = {read=GetStrictDelimiter, write=SetStrictDelimiter, nodefault};
	__property System::UnicodeString Strings[int Index] = {read=Get, write=Put/*, default*/};
	__property System::UnicodeString Text = {read=GetTextStr, write=SetTextStr};
	__property _di_IStringsAdapter StringsAdapter = {read=FAdapter, write=SetStringsAdapter};
	__property bool WriteBOM = {read=GetWriteBOM, write=SetWriteBOM, nodefault};
	__property bool TrailingLineBreak = {read=GetTrailingLineBreak, write=SetTrailingLineBreak, nodefault};
	__property bool UseLocale = {read=GetUseLocale, write=SetUseLocale, nodefault};
	__property TStringsOptions Options = {read=FOptions, write=FOptions, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef TStringItem *PStringItem;

struct DECLSPEC_DRECORD TStringItem
{
public:
	System::UnicodeString FString;
	System::TObject* FObject;
};


typedef System::DynamicArray<TStringItem> TStringItemList;

typedef TStringItemList *PStringItemList;

typedef int __fastcall (*TStringListSortCompare)(TStringList* List, int Index1, int Index2);

class PASCALIMPLEMENTATION TStringList : public TStrings
{
	typedef TStrings inherited;
	
	
private:
	enum DECLSPEC_DENUM _TStringList__1 : unsigned char { sloCompareStrings, sloGetObject };
	
	typedef System::Set<_TStringList__1, _TStringList__1::sloCompareStrings, _TStringList__1::sloGetObject> TOverridden;
	
	
private:
	TStringItemList FList;
	int FCount;
	int FCapacity;
	bool FSorted;
	System::Types::TDuplicates FDuplicates;
	bool FCaseSensitive;
	TNotifyEvent FOnChange;
	TNotifyEvent FOnChanging;
	bool FOwnsObject;
	TOverridden FOverridden;
	void __fastcall Grow();
	void __fastcall QuickSort(int L, int R, TStringListSortCompare SCompare);
	void __fastcall SetSorted(bool Value);
	void __fastcall SetCaseSensitive(const bool Value);
	static int __fastcall InternalStrComp(System::WideChar * L, System::WideChar * R, int Len, int Mode);
	int __fastcall LinearIndexOfName(const System::UnicodeString Name);
	int __fastcall SortedIndexOfName(const System::UnicodeString Name);
	
protected:
	virtual void __fastcall Changed();
	virtual void __fastcall Changing();
	void __fastcall ExchangeItems(int Index1, int Index2);
	virtual System::UnicodeString __fastcall Get(int Index);
	virtual int __fastcall GetCapacity();
	virtual int __fastcall GetCount();
	virtual System::TObject* __fastcall GetObject(int Index);
	virtual void __fastcall Put(int Index, const System::UnicodeString S);
	virtual void __fastcall PutObject(int Index, System::TObject* AObject);
	virtual void __fastcall SetCapacity(int NewCapacity);
	virtual void __fastcall SetUpdateState(bool Updating);
	virtual int __fastcall CompareStrings(const System::UnicodeString S1, const System::UnicodeString S2);
	virtual void __fastcall InsertItem(int Index, const System::UnicodeString S, System::TObject* AObject);
	
public:
	__fastcall TStringList()/* overload */;
	__fastcall TStringList(bool OwnsObjects)/* overload */;
	__fastcall TStringList(System::WideChar QuoteChar, System::WideChar Delimiter)/* overload */;
	__fastcall TStringList(System::WideChar QuoteChar, System::WideChar Delimiter, TStringsOptions Options)/* overload */;
	__fastcall TStringList(System::Types::TDuplicates Duplicates, bool Sorted, bool CaseSensitive)/* overload */;
	__fastcall virtual ~TStringList();
	virtual int __fastcall Add(const System::UnicodeString S);
	virtual int __fastcall AddObject(const System::UnicodeString S, System::TObject* AObject);
	virtual void __fastcall AddStrings(TStrings* Strings)/* overload */;
	void __fastcall AddStrings(const System::DynamicArray<System::UnicodeString> Strings) {
	   TStrings::AddStrings(Strings);
	}
	void __fastcall AddStrings(const System::DynamicArray<System::UnicodeString> Strings,
	                           const System::DynamicArray<System::TObject*> Objects) {
	   TStrings::AddStrings(Strings, Objects);
	};
	virtual void __fastcall Assign(TPersistent* Source);
	virtual void __fastcall Clear();
	virtual void __fastcall Delete(int Index);
	virtual void __fastcall Exchange(int Index1, int Index2);
	virtual bool __fastcall Find(const System::UnicodeString S, int &Index);
	virtual int __fastcall IndexOf(const System::UnicodeString S);
	virtual int __fastcall IndexOfName(const System::UnicodeString Name);
	virtual int __fastcall IndexOfObject(System::TObject* AObject);
	virtual void __fastcall Insert(int Index, const System::UnicodeString S);
	virtual void __fastcall InsertObject(int Index, const System::UnicodeString S, System::TObject* AObject);
	virtual void __fastcall Sort();
	virtual void __fastcall CustomSort(TStringListSortCompare Compare);
	__property System::Types::TDuplicates Duplicates = {read=FDuplicates, write=FDuplicates, nodefault};
	__property bool Sorted = {read=FSorted, write=SetSorted, nodefault};
	__property bool CaseSensitive = {read=FCaseSensitive, write=SetCaseSensitive, nodefault};
	__property TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TNotifyEvent OnChanging = {read=FOnChanging, write=FOnChanging};
	__property bool OwnsObjects = {read=FOwnsObject, write=FOwnsObject, nodefault};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  AddStrings(const System::UnicodeString *Strings, const int Strings_High){ TStrings::AddStrings(Strings, Strings_High); }
	inline void __fastcall  AddStrings(const System::UnicodeString *Strings, const int Strings_High, System::TObject* const *Objects, const int Objects_High){ TStrings::AddStrings(Strings, Strings_High, Objects, Objects_High); }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStream : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	__int64 __fastcall GetPosition();
	void __fastcall SetPosition(const __int64 Pos);
	void __fastcall SetSize64(const __int64 NewSize);
	__int64 __fastcall Skip(__int64 Amount);
	
protected:
	virtual __int64 __fastcall GetSize();
	virtual void __fastcall SetSize _DEPRECATED_ATTRIBUTE0 (int NewSize)/* overload */;
	virtual void __fastcall SetSize(const __int64 NewSize)/* overload */;
#ifndef _WIN64
	int __fastcall GetByteCount(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count);
	__int64 __fastcall GetByteCount64(const System::DynamicArray<System::Byte> Buffer, __int64 Offset, __int64 Count);
#else /* _WIN64 */
	int __fastcall GetByteCount(const System::TArray__1<System::Byte> Buffer, int Offset, int Count);
	__int64 __fastcall GetByteCount64(const System::TArray__1<System::Byte> Buffer, __int64 Offset, __int64 Count);
#endif /* _WIN64 */
	
public:
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
#ifndef _WIN64
	virtual int __fastcall Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count)/* overload */;
	virtual int __fastcall Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count)/* overload */;
	int __fastcall Read(System::DynamicArray<System::Byte> &Buffer, int Count)/* overload */;
	int __fastcall Write(const System::DynamicArray<System::Byte> Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Read64(System::DynamicArray<System::Byte> Buffer, __int64 Offset, __int64 Count);
	virtual __int64 __fastcall Write64(const System::DynamicArray<System::Byte> Buffer, __int64 Offset, __int64 Count);
#else /* _WIN64 */
	virtual int __fastcall Read(System::TArray__1<System::Byte> Buffer, int Offset, int Count)/* overload */;
	virtual int __fastcall Write(const System::TArray__1<System::Byte> Buffer, int Offset, int Count)/* overload */;
	int __fastcall Read(System::TArray__1<System::Byte> &Buffer, int Count)/* overload */;
	int __fastcall Write(const System::TArray__1<System::Byte> Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Read64(System::TArray__1<System::Byte> Buffer, __int64 Offset, __int64 Count);
	virtual __int64 __fastcall Write64(const System::TArray__1<System::Byte> Buffer, __int64 Offset, __int64 Count);
#endif /* _WIN64 */
	NativeInt __fastcall ReadData(void * Buffer, NativeInt Count)/* overload */;
#ifndef _WIN64
	NativeInt __fastcall ReadData(const System::DynamicArray<System::Byte> Buffer, NativeInt Count)/* overload */;
#else /* _WIN64 */
	NativeInt __fastcall ReadData(const System::TArray__1<System::Byte> Buffer, NativeInt Count)/* overload */;
#endif /* _WIN64 */
	NativeInt __fastcall ReadData(bool &Buffer)/* overload */;
	NativeInt __fastcall ReadData(bool &Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall ReadData(char &Buffer)/* overload */;
	NativeInt __fastcall ReadData(char &Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall ReadData(System::WideChar &Buffer)/* overload */;
	NativeInt __fastcall ReadData(System::WideChar &Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall ReadData(System::Int8 &Buffer)/* overload */;
	NativeInt __fastcall ReadData(System::Int8 &Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall ReadData(System::Byte &Buffer)/* overload */;
	NativeInt __fastcall ReadData(System::Byte &Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall ReadData(short &Buffer)/* overload */;
	NativeInt __fastcall ReadData(short &Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall ReadData(System::Word &Buffer)/* overload */;
	NativeInt __fastcall ReadData(System::Word &Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall ReadData(int &Buffer)/* overload */;
	NativeInt __fastcall ReadData(int &Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall ReadData(unsigned &Buffer)/* overload */;
	NativeInt __fastcall ReadData(unsigned &Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall ReadData(__int64 &Buffer)/* overload */;
	NativeInt __fastcall ReadData(__int64 &Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall ReadData(unsigned __int64 &Buffer)/* overload */;
	NativeInt __fastcall ReadData(unsigned __int64 &Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall ReadData(float &Buffer)/* overload */;
	NativeInt __fastcall ReadData(float &Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall ReadData(double &Buffer)/* overload */;
	NativeInt __fastcall ReadData(double &Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall ReadData(System::Extended &Buffer)/* overload */;
	NativeInt __fastcall ReadData(System::Extended &Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall ReadData(System::TExtended80Rec &Buffer)/* overload */;
	NativeInt __fastcall ReadData(System::TExtended80Rec &Buffer, NativeInt Count)/* overload */;
	template<typename T> NativeInt __fastcall ReadData(T &Buffer)/* overload */;
	template<typename T> NativeInt __fastcall ReadData(T &Buffer, NativeInt Count)/* overload */;
#ifndef _WIN64
	NativeInt __fastcall WriteData(const System::DynamicArray<System::Byte> Buffer, NativeInt Count)/* overload */;
#else /* _WIN64 */
	NativeInt __fastcall WriteData(const System::TArray__1<System::Byte> Buffer, NativeInt Count)/* overload */;
#endif /* _WIN64 */
	NativeInt __fastcall WriteData(const void * Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall WriteData(const bool Buffer)/* overload */;
	NativeInt __fastcall WriteData(const bool Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall WriteData(const char Buffer)/* overload */;
	NativeInt __fastcall WriteData(const char Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall WriteData(const System::WideChar Buffer)/* overload */;
	NativeInt __fastcall WriteData(const System::WideChar Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall WriteData(const System::Int8 Buffer)/* overload */;
	NativeInt __fastcall WriteData(const System::Int8 Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall WriteData(const System::Byte Buffer)/* overload */;
	NativeInt __fastcall WriteData(const System::Byte Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall WriteData(const short Buffer)/* overload */;
	NativeInt __fastcall WriteData(const short Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall WriteData(const System::Word Buffer)/* overload */;
	NativeInt __fastcall WriteData(const System::Word Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall WriteData(const int Buffer)/* overload */;
	NativeInt __fastcall WriteData(const int Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall WriteData(const unsigned Buffer)/* overload */;
	NativeInt __fastcall WriteData(const unsigned Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall WriteData(const __int64 Buffer)/* overload */;
	NativeInt __fastcall WriteData(const __int64 Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall WriteData(const unsigned __int64 Buffer)/* overload */;
	NativeInt __fastcall WriteData(const unsigned __int64 Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall WriteData(const float Buffer)/* overload */;
	NativeInt __fastcall WriteData(const float Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall WriteData(const double Buffer)/* overload */;
	NativeInt __fastcall WriteData(const double Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall WriteData(const System::Extended Buffer)/* overload */;
	NativeInt __fastcall WriteData(const System::Extended Buffer, NativeInt Count)/* overload */;
	NativeInt __fastcall WriteData(const System::TExtended80Rec &Buffer)/* overload */;
	NativeInt __fastcall WriteData(const System::TExtended80Rec &Buffer, NativeInt Count)/* overload */;
	template<typename T> NativeInt __fastcall WriteData(const T Buffer)/* overload */;
	template<typename T> NativeInt __fastcall WriteData(const T Buffer, NativeInt Count)/* overload */;
	__int64 __fastcall Seek32(const int Offset, TSeekOrigin Origin)/* overload */;
	virtual int __fastcall Seek(int Offset, System::Word Origin)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, TSeekOrigin Origin)/* overload */;
	__int64 __fastcall Seek(const __int64 Offset, System::Word Origin)/* overload */;
	void __fastcall ReadBuffer(void *Buffer, NativeInt Count)/* overload */;
#ifndef _WIN64
	void __fastcall ReadBuffer(System::DynamicArray<System::Byte> &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadBuffer(System::DynamicArray<System::Byte> &Buffer, NativeInt Offset, NativeInt Count)/* overload */;
#else /* _WIN64 */
	void __fastcall ReadBuffer(System::TArray__1<System::Byte> &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadBuffer(System::TArray__1<System::Byte> &Buffer, NativeInt Offset, NativeInt Count)/* overload */;
#endif /* _WIN64 */
	void __fastcall ReadBufferData(bool &Buffer)/* overload */;
	void __fastcall ReadBufferData(bool &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadBufferData(char &Buffer)/* overload */;
	void __fastcall ReadBufferData(char &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadBufferData(System::WideChar &Buffer)/* overload */;
	void __fastcall ReadBufferData(System::WideChar &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadBufferData(System::Int8 &Buffer)/* overload */;
	void __fastcall ReadBufferData(System::Int8 &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadBufferData(System::Byte &Buffer)/* overload */;
	void __fastcall ReadBufferData(System::Byte &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadBufferData(short &Buffer)/* overload */;
	void __fastcall ReadBufferData(short &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadBufferData(System::Word &Buffer)/* overload */;
	void __fastcall ReadBufferData(System::Word &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadBufferData(int &Buffer)/* overload */;
	void __fastcall ReadBufferData(int &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadBufferData(unsigned &Buffer)/* overload */;
	void __fastcall ReadBufferData(unsigned &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadBufferData(__int64 &Buffer)/* overload */;
	void __fastcall ReadBufferData(__int64 &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadBufferData(unsigned __int64 &Buffer)/* overload */;
	void __fastcall ReadBufferData(unsigned __int64 &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadBufferData(float &Buffer)/* overload */;
	void __fastcall ReadBufferData(float &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadBufferData(double &Buffer)/* overload */;
	void __fastcall ReadBufferData(double &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadBufferData(System::Extended &Buffer)/* overload */;
	void __fastcall ReadBufferData(System::Extended &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadBufferData(System::TExtended80Rec &Buffer)/* overload */;
	void __fastcall ReadBufferData(System::TExtended80Rec &Buffer, NativeInt Count)/* overload */;
	void __fastcall WriteBuffer(const void *Buffer, NativeInt Count)/* overload */;
#ifndef _WIN64
	void __fastcall WriteBuffer(const System::DynamicArray<System::Byte> Buffer, NativeInt Count)/* overload */;
	void __fastcall WriteBuffer(const System::DynamicArray<System::Byte> Buffer, NativeInt Offset, NativeInt Count)/* overload */;
#else /* _WIN64 */
	void __fastcall WriteBuffer(const System::TArray__1<System::Byte> Buffer, NativeInt Count)/* overload */;
	void __fastcall WriteBuffer(const System::TArray__1<System::Byte> Buffer, NativeInt Offset, NativeInt Count)/* overload */;
#endif /* _WIN64 */
	void __fastcall WriteBufferData(int &Buffer, NativeInt Count)/* overload */;
#ifndef _WIN64
	__int64 __fastcall CopyFrom(TStream* const Source, __int64 Count = 0LL, int BufferSize = 0x100000);
#else /* _WIN64 */
	__int64 __fastcall CopyFrom(TStream* const Source, __int64 Count = (__int64)(0LL), int BufferSize = 0x100000);
#endif /* _WIN64 */
	TComponent* __fastcall ReadComponent(TComponent* const Instance);
	TComponent* __fastcall ReadComponentRes(TComponent* const Instance);
	void __fastcall WriteComponent(TComponent* const Instance);
	void __fastcall WriteComponentRes(const System::UnicodeString ResName, TComponent* const Instance);
	void __fastcall WriteDescendent(TComponent* const Instance, TComponent* const Ancestor);
	void __fastcall WriteDescendentRes(const System::UnicodeString ResName, TComponent* const Instance, TComponent* const Ancestor);
	void __fastcall WriteResourceHeader(const System::UnicodeString ResName, /* out */ int &FixupInfo);
	void __fastcall FixupResourceHeader(int FixupInfo);
	void __fastcall ReadResHeader();
	__property __int64 Position = {read=GetPosition, write=SetPosition};
	__property __int64 Size = {read=GetSize, write=SetSize64};
public:
	/* TObject.Create */ inline __fastcall TStream() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TStream() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{B8CD12A3-267A-11D4-83DA-00C04F60B2DD}") IStreamPersist  : public System::IInterface 
{
	virtual void __fastcall LoadFromStream(TStream* Stream) = 0 ;
	virtual void __fastcall SaveToStream(TStream* Stream) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION THandleStream : public TStream
{
	typedef TStream inherited;
	
protected:
	NativeUInt FHandle;
	virtual void __fastcall SetSize(int NewSize)/* overload */;
	virtual void __fastcall SetSize(const __int64 NewSize)/* overload */;
	
public:
	__fastcall THandleStream(NativeUInt AHandle);
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, TSeekOrigin Origin)/* overload */;
#ifndef _WIN64
	__property NativeUInt Handle = {read=FHandle, nodefault};
#else /* _WIN64 */
	__property NativeUInt Handle = {read=FHandle};
#endif /* _WIN64 */
public:
	/* TObject.Destroy */ inline __fastcall virtual ~THandleStream() { }
	
	/* Hoisted overloads: */
	
public:
#ifndef _WIN64
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return TStream::Write(Buffer, Count); }
#else /* _WIN64 */
	inline int __fastcall  Read(System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::TArray__1<System::Byte> &Buffer, int Count){ return TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Count){ return TStream::Write(Buffer, Count); }
#endif /* _WIN64 */
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Word Origin){ return TStream::Seek(Offset, Origin); }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFileStream : public THandleStream
{
	typedef THandleStream inherited;
	
private:
	System::UnicodeString FFileName;
	
public:
	__fastcall TFileStream(const System::UnicodeString AFileName, System::Word Mode)/* overload */;
	__fastcall TFileStream(const System::UnicodeString AFileName, System::Word Mode, unsigned Rights)/* overload */;
	__fastcall virtual ~TFileStream();
	__property System::UnicodeString FileName = {read=FFileName};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TBufferedFileStream : public TFileStream
{
	typedef TFileStream inherited;
	
private:
	__int64 FFilePos;
	__int64 FBufStartPos;
	__int64 FBufEndPos;
	System::Byte *FBuffer;
	int FBufferSize;
	bool FModified;
	bool FBuffered;
	
protected:
	virtual void __fastcall SetSize(const __int64 NewSize)/* overload */;
	void __fastcall SyncBuffer(bool ReRead);
	
public:
	__fastcall TBufferedFileStream(const System::UnicodeString AFileName, System::Word Mode, int BufferSize)/* overload */;
	__fastcall TBufferedFileStream(const System::UnicodeString AFileName, System::Word Mode, unsigned Rights, int BufferSize)/* overload */;
	__fastcall virtual ~TBufferedFileStream();
	void __fastcall FlushBuffer();
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, TSeekOrigin Origin)/* overload */;
public:
	/* TFileStream.Create */ inline __fastcall TBufferedFileStream(const System::UnicodeString AFileName, System::Word Mode)/* overload */ : TFileStream(AFileName, Mode) { }
	/* TFileStream.Create */ inline __fastcall TBufferedFileStream(const System::UnicodeString AFileName, System::Word Mode, unsigned Rights)/* overload */ : TFileStream(AFileName, Mode, Rights) { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  SetSize(int NewSize){ THandleStream::SetSize(NewSize); }
	
public:
#ifndef _WIN64
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return TStream::Write(Buffer, Count); }
#else /* _WIN64 */
	inline int __fastcall  Read(System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::TArray__1<System::Byte> &Buffer, int Count){ return TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Count){ return TStream::Write(Buffer, Count); }
#endif /* _WIN64 */
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Word Origin){ return TStream::Seek(Offset, Origin); }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomMemoryStream : public TStream
{
	typedef TStream inherited;
	
private:
	void *FMemory;
	NativeInt FSize;
	NativeInt FPosition;
	
protected:
	void __fastcall SetPointer(void * Ptr, const NativeInt Size);
	
public:
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, TSeekOrigin Origin)/* overload */;
	virtual void __fastcall SaveToStream(TStream* Stream);
	void __fastcall SaveToFile(const System::UnicodeString FileName);
	__property void * Memory = {read=FMemory};
public:
	/* TObject.Create */ inline __fastcall TCustomMemoryStream() : TStream() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomMemoryStream() { }
	
	/* Hoisted overloads: */
	
public:
#ifndef _WIN64
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return TStream::Read(Buffer, Count); }
#else /* _WIN64 */
	inline int __fastcall  Read(System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::TArray__1<System::Byte> &Buffer, int Count){ return TStream::Read(Buffer, Count); }
#endif /* _WIN64 */
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Word Origin){ return TStream::Seek(Offset, Origin); }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMemoryStream : public TCustomMemoryStream
{
	typedef TCustomMemoryStream inherited;
	
private:
	NativeInt FCapacity;
	
protected:
	virtual void __fastcall SetCapacity(NativeInt NewCapacity);
	virtual void * __fastcall Realloc(NativeInt &NewCapacity);
#ifndef _WIN64
	__property NativeInt Capacity = {read=FCapacity, write=SetCapacity, nodefault};
#else /* _WIN64 */
	__property NativeInt Capacity = {read=FCapacity, write=SetCapacity};
#endif /* _WIN64 */
	
public:
	__fastcall virtual ~TMemoryStream();
	void __fastcall Clear();
	void __fastcall LoadFromStream(TStream* Stream);
	void __fastcall LoadFromFile(const System::UnicodeString FileName);
	virtual void __fastcall SetSize(const __int64 NewSize)/* overload */;
	virtual void __fastcall SetSize(int NewSize)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TMemoryStream() : TCustomMemoryStream() { }
	
	/* Hoisted overloads: */
	
public:
#ifndef _WIN64
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return TStream::Write(Buffer, Count); }
#else /* _WIN64 */
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Count){ return TStream::Write(Buffer, Count); }
#endif /* _WIN64 */
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBytesStream : public TMemoryStream
{
	typedef TMemoryStream inherited;
	
private:
#ifndef _WIN64
	System::DynamicArray<System::Byte> FBytes;
#else /* _WIN64 */
	System::TArray__1<System::Byte> FBytes;
#endif /* _WIN64 */
	
protected:
	virtual void * __fastcall Realloc(NativeInt &NewCapacity);
	
public:
#ifndef _WIN64
	__fastcall TBytesStream(const System::DynamicArray<System::Byte> ABytes)/* overload */;
	__property System::DynamicArray<System::Byte> Bytes = {read=FBytes};
#else /* _WIN64 */
	__fastcall TBytesStream(const System::TArray__1<System::Byte> ABytes)/* overload */;
	__property System::TArray__1<System::Byte> Bytes = {read=FBytes};
#endif /* _WIN64 */
public:
	/* TMemoryStream.Destroy */ inline __fastcall virtual ~TBytesStream() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStringStream : public TBytesStream
{
	typedef TBytesStream inherited;
	
private:
	System::Sysutils::TEncoding* FEncoding;
	bool FOwnsEncoding;
	System::UnicodeString __fastcall GetDataString();
	
public:
	__fastcall TStringStream()/* overload */;
	__fastcall TStringStream(const System::UnicodeString AString)/* overload */;
	__fastcall TStringStream(const System::RawByteString AString)/* overload */;
	__fastcall TStringStream(const System::UnicodeString AString, System::Sysutils::TEncoding* AEncoding, bool AOwnsEncoding)/* overload */;
	__fastcall TStringStream(const System::UnicodeString AString, int ACodePage)/* overload */;
#ifndef _WIN64
	__fastcall TStringStream(const System::DynamicArray<System::Byte> ABytes)/* overload */;
#else /* _WIN64 */
	__fastcall TStringStream(const System::TArray__1<System::Byte> ABytes)/* overload */;
#endif /* _WIN64 */
	__fastcall virtual ~TStringStream();
	System::UnicodeString __fastcall ReadString(int Count);
	void __fastcall WriteString(const System::UnicodeString AString);
	__property System::UnicodeString DataString = {read=GetDataString};
	__property System::Sysutils::TEncoding* Encoding = {read=FEncoding};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TResourceStream : public TCustomMemoryStream
{
	typedef TCustomMemoryStream inherited;
	
private:
	NativeUInt HResInfo;
	NativeUInt HGlobal;
	void __fastcall Initialize(NativeUInt Instance, System::WideChar * Name, System::WideChar * ResType, bool FromID);
	
public:
	__fastcall TResourceStream(NativeUInt Instance, const System::UnicodeString ResName, System::WideChar * ResType);
	__fastcall TResourceStream(NativeUInt Instance, int ResID, System::WideChar * ResType);
	__fastcall virtual ~TResourceStream();
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */ _FINAL_ATTRIBUTE;
	/* Hoisted overloads: */
	
public:
#ifndef _WIN64
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return TStream::Write(Buffer, Count); }
#else /* _WIN64 */
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Count){ return TStream::Write(Buffer, Count); }
#endif /* _WIN64 */
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPointerStream : public TCustomMemoryStream
{
	typedef TCustomMemoryStream inherited;
	
private:
	bool FReadOnly;
	
protected:
	virtual void __fastcall SetSize(int NewSize)/* overload */;
	virtual void __fastcall SetSize(const __int64 NewSize)/* overload */;
	
public:
	__fastcall TPointerStream(void * Ptr, const NativeInt Size, bool ReadOnly);
	HIDESBASE void __fastcall SetPointer(void * Ptr, const NativeInt Size);
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPointerStream() { }
	
	/* Hoisted overloads: */
	
public:
#ifndef _WIN64
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return TStream::Write(Buffer, Count); }
#else /* _WIN64 */
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Count){ return TStream::Write(Buffer, Count); }
#endif /* _WIN64 */
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TStreamOwnership : unsigned char { soReference, soOwned };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStreamAdapter : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	TStream* FStream;
	TStreamOwnership FOwnership;
	
public:
	__fastcall TStreamAdapter(TStream* Stream, TStreamOwnership Ownership);
	__fastcall virtual ~TStreamAdapter();
	virtual HRESULT __stdcall Read(void * pv, unsigned cb, System::PFixedUInt pcbRead);
	virtual HRESULT __stdcall Write(void * pv, unsigned cb, System::PFixedUInt pcbWritten);
	virtual HRESULT __stdcall Seek(__int64 dlibMove, unsigned dwOrigin, /* out */ unsigned __int64 &libNewPosition);
	virtual HRESULT __stdcall SetSize(unsigned __int64 libNewSize);
	virtual HRESULT __stdcall CopyTo(_di_IStream stm, unsigned __int64 cb, /* out */ unsigned __int64 &cbRead, /* out */ unsigned __int64 &cbWritten);
	virtual HRESULT __stdcall Commit(unsigned grfCommitFlags);
	virtual HRESULT __stdcall Revert();
	virtual HRESULT __stdcall LockRegion(unsigned __int64 libOffset, unsigned __int64 cb, unsigned dwLockType);
	virtual HRESULT __stdcall UnlockRegion(unsigned __int64 libOffset, unsigned __int64 cb, unsigned dwLockType);
	virtual HRESULT __stdcall Stat(/* out */ tagSTATSTG &statstg, unsigned grfStatFlag);
	virtual HRESULT __stdcall Clone(/* out */ _di_IStream &stm);
	__property TStream* Stream = {read=FStream};
	__property TStreamOwnership StreamOwnership = {read=FOwnership, write=FOwnership, nodefault};
private:
	void *__IStream;	// IStream 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0000000C-0000-0000-C000-000000000046}
	operator _di_IStream()
	{
		_di_IStream intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IStream*(void) { return (IStream*)&__IStream; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TGetClass)(TPersistentClass AClass);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TClassFinder : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Generics::Collections::TList__1<System::TObject*>* FGroups;
	TPersistentClass FClass;
	
public:
	__fastcall TClassFinder(TPersistentClass AClass, bool AIncludeActiveGroups);
	__fastcall virtual ~TClassFinder();
	TPersistentClass __fastcall GetClass(const System::UnicodeString AClassName);
	void __fastcall GetClasses(TGetClass Proc);
	__property TPersistentClass FinderClass = {read=FClass};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TValueType : unsigned char { vaNull, vaList, vaInt8, vaInt16, vaInt32, vaExtended, vaString, vaIdent, vaFalse, vaTrue, vaBinary, vaSet, vaLString, vaNil, vaCollection, vaSingle, vaCurrency, vaDate, vaWString, vaInt64, vaUTF8String, vaDouble };

enum DECLSPEC_DENUM TFilerFlag : unsigned char { ffInherited, ffChildPos, ffInline };

typedef System::Set<TFilerFlag, TFilerFlag::ffInherited, TFilerFlag::ffInline> TFilerFlags;

typedef void __fastcall (__closure *TReaderProc)(TReader* Reader);

typedef void __fastcall (__closure *TWriterProc)(TWriter* Writer);

typedef void __fastcall (__closure *TStreamProc)(TStream* Stream);

__interface  INTERFACE_UUID("{E28B1858-EC86-4559-8FCD-6B4F824151ED}") IInterfaceComponentReference  : public System::IInterface 
{
	virtual TComponent* __fastcall GetComponent() = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFiler : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TStream* FStream;
#ifndef _WIN64
	System::DynamicArray<System::Byte> FBuffer;
#else /* _WIN64 */
	System::TArray__1<System::Byte> FBuffer;
#endif /* _WIN64 */
	NativeInt FBufSize;
	NativeInt FBufPos;
	NativeInt FBufEnd;
	TComponent* FRoot;
	TComponent* FLookupRoot;
	TPersistent* FAncestor;
	bool FIgnoreChildren;
	
protected:
	virtual void __fastcall SetRoot(TComponent* Value);
	
public:
	__fastcall TFiler(TStream* Stream, int BufSize);
	__fastcall virtual ~TFiler();
	virtual void __fastcall DefineProperty(const System::UnicodeString Name, TReaderProc ReadData, TWriterProc WriteData, bool HasData) = 0 ;
	virtual void __fastcall DefineBinaryProperty(const System::UnicodeString Name, TStreamProc ReadData, TStreamProc WriteData, bool HasData) = 0 ;
	virtual void __fastcall FlushBuffer() = 0 ;
	__property TComponent* Root = {read=FRoot, write=SetRoot};
	__property TComponent* LookupRoot = {read=FLookupRoot};
	__property TPersistent* Ancestor = {read=FAncestor, write=FAncestor};
	__property bool IgnoreChildren = {read=FIgnoreChildren, write=FIgnoreChildren, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TComponentClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TComponentClass);
#endif /* _WIN64 */

__interface  INTERFACE_UUID("{D60BA026-5E42-4C2A-BB01-3F1C8F30A28E}") IVarStreamable  : public System::IInterface 
{
	virtual void __fastcall StreamIn(TVarData &Dest, TStream* const Stream) = 0 ;
	virtual void __fastcall StreamOut(const TVarData &Source, TStream* const Stream) = 0 ;
};

typedef void __fastcall (__closure *TFindMethodEvent)(TReader* Reader, const System::UnicodeString MethodName, void * &Address, bool &Error);

typedef void __fastcall (__closure *TSetNameEvent)(TReader* Reader, TComponent* Component, System::UnicodeString &Name);

typedef void __fastcall (__closure *TReferenceNameEvent)(TReader* Reader, System::UnicodeString &Name);

typedef void __fastcall (__closure *TAncestorNotFoundEvent)(TReader* Reader, const System::UnicodeString ComponentName, TPersistentClass ComponentClass, TComponent* &Component);

typedef void __fastcall (__closure *TReadComponentsProc)(TComponent* Component);

typedef void __fastcall (__closure *TReaderError)(TReader* Reader, const System::UnicodeString Message, bool &Handled);

typedef void __fastcall (__closure *TFindComponentClassEvent)(TReader* Reader, const System::UnicodeString ClassName, TComponentClass &ComponentClass);

typedef void __fastcall (__closure *TCreateComponentEvent)(TReader* Reader, TComponentClass ComponentClass, TComponent* &Component);

typedef void __fastcall (__closure *TFindMethodInstanceEvent)(TReader* Reader, const System::UnicodeString MethodName, System::TMethod &AMethod, bool &Error);

typedef void __fastcall (__closure *TFindComponentInstanceEvent)(TReader* Reader, const System::UnicodeString Name, void * &Instance);

class PASCALIMPLEMENTATION TReader : public TFiler
{
	typedef TFiler inherited;
	
private:
	TComponent* FOwner;
	TComponent* FParent;
	System::Generics::Collections::TList__1<System::TObject*>* FFixups;
	System::Generics::Collections::TList__1<TComponent*>* FLoaded;
	TFindMethodEvent FOnFindMethod;
	TFindMethodInstanceEvent FOnFindMethodInstance;
	TSetNameEvent FOnSetName;
	TReferenceNameEvent FOnReferenceName;
	TAncestorNotFoundEvent FOnAncestorNotFound;
	TReaderError FOnError;
	TFindComponentClassEvent FOnFindComponentClass;
	TCreateComponentEvent FOnCreateComponent;
	TFindComponentInstanceEvent FOnFindComponentInstance;
	System::UnicodeString FPropName;
	TClassFinder* FFinder;
	bool FCanHandleExcepts;
	void __fastcall DoFixupReferences();
	void __fastcall EnsureAtLeast(int NumBytes);
	void __fastcall FreeFixups();
	TPersistentClass __fastcall GetFieldClass(System::TObject* const Instance, const System::UnicodeString ClassName);
	NativeInt __fastcall GetPosition();
	void __fastcall ReadBuffer(int Keeping = 0x0, bool MoveBuffer = true);
	void __fastcall ReadDataInner(TComponent* const Instance);
	TComponentClass __fastcall FindComponentClass(const System::UnicodeString ClassName);
	
protected:
	virtual bool __fastcall Error(const System::UnicodeString Message);
	virtual TComponent* __fastcall FindAncestorComponent(const System::UnicodeString Name, TPersistentClass ComponentClass);
	virtual System::TMethod __fastcall FindMethodInstance(TComponent* Root, const System::UnicodeString MethodName);
	virtual void * __fastcall FindMethod(TComponent* Root, const System::UnicodeString MethodName);
	virtual void __fastcall SetName(TComponent* Component, System::UnicodeString &Name);
	void __fastcall ReadProperty(TPersistent* AInstance);
	void __fastcall ReadPropValue(TPersistent* const Instance, void * PropInfo);
	virtual void __fastcall ReferenceName(System::UnicodeString &Name);
	void __fastcall PropertyError(const System::UnicodeString Name);
	void __fastcall ReadData(TComponent* const Instance);
	int __fastcall ReadSet(void * SetType);
	void __fastcall SetPosition(NativeInt Value);
	void __fastcall SkipBytes(int Count);
	void __fastcall SkipSetBody();
	void __fastcall SkipProperty();
	void __fastcall SkipComponent(bool SkipHeader);
	__property System::UnicodeString PropName = {read=FPropName};
	__property bool CanHandleExceptions = {read=FCanHandleExcepts, nodefault};
	
public:
	__fastcall virtual ~TReader();
	void __fastcall BeginReferences();
	void __fastcall CheckValue(TValueType Value);
	virtual void __fastcall DefineProperty(const System::UnicodeString Name, TReaderProc ReadData, TWriterProc WriteData, bool HasData);
	virtual void __fastcall DefineBinaryProperty(const System::UnicodeString Name, TStreamProc ReadData, TStreamProc WriteData, bool HasData);
	bool __fastcall EndOfList();
	void __fastcall EndReferences();
	void __fastcall FixupReferences();
	virtual void __fastcall FlushBuffer();
	TValueType __fastcall NextValue();
	void __fastcall Read(void *Buffer, NativeInt Count)/* overload */;
#ifndef _WIN64
	void __fastcall Read(System::DynamicArray<System::Byte> Buffer, NativeInt Offset, NativeInt Count)/* overload */;
	void __fastcall Read(System::DynamicArray<System::Byte> Buffer, NativeInt Count)/* overload */;
#else /* _WIN64 */
	void __fastcall Read(System::TArray__1<System::Byte> Buffer, NativeInt Offset, NativeInt Count)/* overload */;
	void __fastcall Read(System::TArray__1<System::Byte> Buffer, NativeInt Count)/* overload */;
#endif /* _WIN64 */
	void __fastcall ReadVar(char &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadVar(System::WideChar &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadVar(System::Int8 &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadVar(System::Byte &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadVar(short &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadVar(System::Word &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadVar(int &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadVar(unsigned &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadVar(__int64 &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadVar(unsigned __int64 &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadVar(float &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadVar(double &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadVar(System::Extended &Buffer, NativeInt Count)/* overload */;
	void __fastcall ReadVar(System::TExtended80Rec &Buffer, NativeInt Count)/* overload */;
	bool __fastcall ReadBoolean();
	System::WideChar __fastcall ReadChar();
	System::WideChar __fastcall ReadWideChar _DEPRECATED_ATTRIBUTE1("Use ReadChar") ();
	void __fastcall ReadCollection(TCollection* const Collection);
	TComponent* __fastcall ReadComponent(TComponent* Component);
	void __fastcall ReadComponents(TComponent* const AOwner, TComponent* const AParent, TReadComponentsProc Proc);
	System::Extended __fastcall ReadFloat();
	float __fastcall ReadSingle();
	double __fastcall ReadDouble();
	System::Currency __fastcall ReadCurrency();
	System::TDateTime __fastcall ReadDate();
	System::UnicodeString __fastcall ReadIdent();
	int __fastcall ReadInteger();
	__int64 __fastcall ReadInt64();
	void __fastcall ReadListBegin();
	void __fastcall ReadListEnd();
	virtual void __fastcall ReadPrefix(TFilerFlags &Flags, int &AChildPos);
	TComponent* __fastcall ReadRootComponent(TComponent* const Root);
	void __fastcall ReadSignature();
	System::UnicodeString __fastcall ReadStr();
	System::UnicodeString __fastcall ReadString();
	System::UnicodeString __fastcall ReadWideString _DEPRECATED_ATTRIBUTE1("Use ReadString") ();
	TValueType __fastcall ReadValue();
	System::Variant __fastcall ReadVariant();
	void __fastcall CopyValue(TWriter* const Writer);
	void __fastcall SkipValue();
	__property TComponent* Owner = {read=FOwner, write=FOwner};
	__property TComponent* Parent = {read=FParent, write=FParent};
#ifndef _WIN64
	__property NativeInt Position = {read=GetPosition, write=SetPosition, nodefault};
#else /* _WIN64 */
	__property NativeInt Position = {read=GetPosition, write=SetPosition};
#endif /* _WIN64 */
	__property TReaderError OnError = {read=FOnError, write=FOnError};
	__property TFindMethodEvent OnFindMethod = {read=FOnFindMethod, write=FOnFindMethod};
	__property TFindMethodInstanceEvent OnFindMethodInstance = {read=FOnFindMethodInstance, write=FOnFindMethodInstance};
	__property TSetNameEvent OnSetName = {read=FOnSetName, write=FOnSetName};
	__property TReferenceNameEvent OnReferenceName = {read=FOnReferenceName, write=FOnReferenceName};
	__property TAncestorNotFoundEvent OnAncestorNotFound = {read=FOnAncestorNotFound, write=FOnAncestorNotFound};
	__property TCreateComponentEvent OnCreateComponent = {read=FOnCreateComponent, write=FOnCreateComponent};
	__property TFindComponentClassEvent OnFindComponentClass = {read=FOnFindComponentClass, write=FOnFindComponentClass};
	__property TFindComponentInstanceEvent OnFindComponentInstance = {read=FOnFindComponentInstance, write=FOnFindComponentInstance};
public:
	/* TFiler.Create */ inline __fastcall TReader(TStream* Stream, int BufSize) : TFiler(Stream, BufSize) { }
	
};


typedef void __fastcall (__closure *TFindAncestorEvent)(TWriter* Writer, TComponent* Component, const System::UnicodeString Name, TComponent* &Ancestor, TComponent* &RootAncestor);

typedef void __fastcall (__closure *TFindMethodNameEvent)(TWriter* Writer, const System::TMethod &AMethod, System::UnicodeString &MethodName);

typedef void __fastcall (__closure *TGetLookupInfoEvent)(TPersistent* &Ancestor, TComponent* &Root, TComponent* &LookupRoot, TComponent* &RootAncestor);

class PASCALIMPLEMENTATION TWriter : public TFiler
{
	typedef TFiler inherited;
	
private:
	TComponent* FRootAncestor;
	System::UnicodeString FPropPath;
	System::Generics::Collections::TList__1<TComponent*>* FAncestorList;
	int FAncestorPos;
	int FChildPos;
	TFindAncestorEvent FOnFindAncestor;
	TFindMethodNameEvent FOnFindMethodName;
	bool FUseQualifiedNames;
	void __fastcall AddAncestor(TComponent* Component);
	void __fastcall EnsureAtLeast(int Amount);
	NativeInt __fastcall GetPosition();
	void __fastcall SetPosition(NativeInt Value);
	void __fastcall WriteBuffer();
	virtual void __fastcall WriteData(TComponent* Instance);
	void __fastcall GetLookupInfo(TPersistent* &Ancestor, TComponent* &Root, TComponent* &LookupRoot, TComponent* &RootAncestor);
	
protected:
	virtual System::UnicodeString __fastcall FindMethodName(const System::TMethod &AMethod);
	virtual void __fastcall SetRoot(TComponent* Value);
	void __fastcall WriteBinary(TStreamProc WriteData);
	void __fastcall WritePrefix(TFilerFlags Flags, int AChildPos);
	void __fastcall WriteProperty(TPersistent* const Instance, System::Typinfo::PPropInfo PropInfo);
	void __fastcall WritePropName(const System::UnicodeString PropName);
	void __fastcall WriteValue(TValueType Value);
	
public:
	__fastcall virtual ~TWriter();
	virtual void __fastcall DefineProperty(const System::UnicodeString Name, TReaderProc ReadData, TWriterProc WriteData, bool HasData);
	virtual void __fastcall DefineBinaryProperty(const System::UnicodeString Name, TStreamProc ReadData, TStreamProc WriteData, bool HasData);
	virtual void __fastcall FlushBuffer();
	void __fastcall Write(const void *Buffer, NativeInt Count)/* overload */;
#ifndef _WIN64
	void __fastcall Write(System::DynamicArray<System::Byte> Buffer, NativeInt Offset, NativeInt Count)/* overload */;
	void __fastcall Write(System::DynamicArray<System::Byte> Buffer, NativeInt Count)/* overload */;
#else /* _WIN64 */
	void __fastcall Write(System::TArray__1<System::Byte> Buffer, NativeInt Offset, NativeInt Count)/* overload */;
	void __fastcall Write(System::TArray__1<System::Byte> Buffer, NativeInt Count)/* overload */;
#endif /* _WIN64 */
	void __fastcall WriteVar(const char Buffer, NativeInt Count)/* overload */;
	void __fastcall WriteVar(const System::WideChar Buffer, NativeInt Count)/* overload */;
	void __fastcall WriteVar(const System::Int8 Buffer, NativeInt Count)/* overload */;
	void __fastcall WriteVar(const System::Byte Buffer, NativeInt Count)/* overload */;
	void __fastcall WriteVar(const short Buffer, NativeInt Count)/* overload */;
	void __fastcall WriteVar(const System::Word Buffer, NativeInt Count)/* overload */;
	void __fastcall WriteVar(const int Buffer, NativeInt Count)/* overload */;
	void __fastcall WriteVar(const unsigned Buffer, NativeInt Count)/* overload */;
	void __fastcall WriteVar(const __int64 Buffer, NativeInt Count)/* overload */;
	void __fastcall WriteVar(const unsigned __int64 Buffer, NativeInt Count)/* overload */;
	void __fastcall WriteVar(const float Buffer, NativeInt Count)/* overload */;
	void __fastcall WriteVar(const double Buffer, NativeInt Count)/* overload */;
	void __fastcall WriteVar(const System::Extended Buffer, NativeInt Count)/* overload */;
	void __fastcall WriteVar(const System::TExtended80Rec &Buffer, NativeInt Count)/* overload */;
	void __fastcall WriteBoolean(bool Value);
	void __fastcall WriteCollection(TCollection* const Value);
	void __fastcall WriteComponent(TComponent* Component);
	void __fastcall WriteChar(System::WideChar Value);
	void __fastcall WriteWideChar _DEPRECATED_ATTRIBUTE1("Use WriteChar") (System::WideChar Value);
	void __fastcall WriteDescendent(TComponent* const Root, TComponent* const AAncestor);
	void __fastcall WriteFloat(const System::Extended Value);
	void __fastcall WriteSingle(const float Value);
	void __fastcall WriteDouble(const double Value);
	void __fastcall WriteCurrency(const System::Currency Value);
	void __fastcall WriteDate(const System::TDateTime Value);
	void __fastcall WriteIdent(const System::UnicodeString Ident);
	void __fastcall WriteInteger(int Value)/* overload */;
	void __fastcall WriteInteger(__int64 Value)/* overload */;
	void __fastcall WriteListBegin();
	void __fastcall WriteListEnd();
	void __fastcall WriteProperties(TPersistent* const Instance);
	void __fastcall WriteRootComponent(TComponent* const Root);
	void __fastcall WriteSignature();
	void __fastcall WriteStr(const System::AnsiString Value);
	void __fastcall WriteUTF8Str(const System::UnicodeString Value);
	void __fastcall WriteString(const System::UnicodeString Value);
	void __fastcall WriteWideString _DEPRECATED_ATTRIBUTE1("Use WriteString") (const System::UnicodeString Value);
	void __fastcall WriteVariant(const System::Variant &Value);
#ifndef _WIN64
	__property NativeInt Position = {read=GetPosition, write=SetPosition, nodefault};
#else /* _WIN64 */
	__property NativeInt Position = {read=GetPosition, write=SetPosition};
#endif /* _WIN64 */
	__property TComponent* RootAncestor = {read=FRootAncestor, write=FRootAncestor};
	__property TFindAncestorEvent OnFindAncestor = {read=FOnFindAncestor, write=FOnFindAncestor};
	__property TFindMethodNameEvent OnFindMethodName = {read=FOnFindMethodName, write=FOnFindMethodName};
	__property bool UseQualifiedNames = {read=FUseQualifiedNames, write=FUseQualifiedNames, nodefault};
public:
	/* TFiler.Create */ inline __fastcall TWriter(TStream* Stream, int BufSize) : TFiler(Stream, BufSize) { }
	
};


typedef void __fastcall (__closure *TParserErrorEvent)(System::TObject* Sender, const System::UnicodeString Message, bool &Handled);

class PASCALIMPLEMENTATION TParser : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	enum DECLSPEC_DENUM TCharType : unsigned char { ctOther, ctLetterStart, ctLetterNumber, ctNumber, ctHash, ctQuote, ctDollar, ctDash };
	
	
private:
	TStream* FStream;
	NativeInt FOrigin;
#ifndef _WIN64
	System::DynamicArray<System::Byte> FBuffer;
#else /* _WIN64 */
	System::TArray__1<System::Byte> FBuffer;
#endif /* _WIN64 */
	NativeInt FBufPtr;
	NativeInt FBufEnd;
	NativeInt FSourcePtr;
	NativeInt FSourceEnd;
	NativeInt FTokenPtr;
	NativeInt FStringPtr;
	int FSourceLine;
	System::Byte FSaveChar;
	System::WideChar FToken;
	System::WideChar FFloatType;
#ifndef _WIN64
	System::DynamicArray<System::WideChar> FWideStr;
#else /* _WIN64 */
	System::TArray__1<System::WideChar> FWideStr;
#endif /* _WIN64 */
	TParserErrorEvent FOnError;
	System::Sysutils::TEncoding* FEncoding;
	System::Sysutils::TFormatSettings FFormatSettings;
	void __fastcall ReadBuffer();
	void __fastcall SkipBlanks();
	TCharType __fastcall CharType(NativeInt &ABufPos);
	
protected:
	NativeInt __fastcall GetLinePos();
	
public:
	__fastcall TParser(TStream* Stream, TParserErrorEvent AOnError)/* overload */;
	__fastcall TParser(TStream* Stream, const System::Sysutils::TFormatSettings &FormatSettings, TParserErrorEvent AOnError)/* overload */;
	__fastcall virtual ~TParser();
	void __fastcall CheckToken(System::WideChar T);
	void __fastcall CheckTokenSymbol(const System::UnicodeString S);
	void __fastcall Error(const System::UnicodeString Ident)/* overload */;
	void __fastcall Error(const System::PResStringRec IdentRes)/* overload */;
	void __fastcall ErrorFmt(const System::UnicodeString Ident, const System::TVarRec *Args, const int Args_High)/* overload */;
	void __fastcall ErrorFmt(const System::PResStringRec IdentRes, const System::TVarRec *Args, const int Args_High)/* overload */;
	void __fastcall ErrorStr(const System::UnicodeString Message);
	void __fastcall HexToBinary(TStream* Stream);
	System::WideChar __fastcall NextToken();
	NativeInt __fastcall SourcePos();
	System::UnicodeString __fastcall TokenComponentIdent();
	System::Extended __fastcall TokenFloat();
	__int64 __fastcall TokenInt();
	System::UnicodeString __fastcall TokenString();
	System::UnicodeString __fastcall TokenWideString();
	bool __fastcall TokenSymbolIs(const System::UnicodeString S);
	__property System::WideChar FloatType = {read=FFloatType, nodefault};
	__property int SourceLine = {read=FSourceLine, nodefault};
#ifndef _WIN64
	__property NativeInt LinePos = {read=GetLinePos, nodefault};
#else /* _WIN64 */
	__property NativeInt LinePos = {read=GetLinePos};
#endif /* _WIN64 */
	__property System::WideChar Token = {read=FToken, nodefault};
	__property TParserErrorEvent OnError = {read=FOnError, write=FOnError};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EThread : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EThread(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EThread(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EThread(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EThread(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EThread(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EThread(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EThread(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EThread(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EThread(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EThread(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EThread(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EThread(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EThread() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EThreadExternalException : public EThread
{
	typedef EThread inherited;
	
public:
	/* Exception.Create */ inline __fastcall EThreadExternalException(const System::UnicodeString Msg) : EThread(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EThreadExternalException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EThread(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EThreadExternalException(NativeUInt Ident)/* overload */ : EThread(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EThreadExternalException(System::PResStringRec ResStringRec)/* overload */ : EThread(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EThreadExternalException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EThread(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EThreadExternalException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EThread(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EThreadExternalException(const System::UnicodeString Msg, int AHelpContext) : EThread(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EThreadExternalException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EThread(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EThreadExternalException(NativeUInt Ident, int AHelpContext)/* overload */ : EThread(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EThreadExternalException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EThread(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EThreadExternalException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EThread(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EThreadExternalException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EThread(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EThreadExternalException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TThreadMethod)(void);

__interface TThreadProcedure  : public System::IInterface 
{
	virtual void __fastcall Invoke() = 0 ;
};

enum DECLSPEC_DENUM TThreadPriority : unsigned char { tpIdle, tpLowest, tpLower, tpNormal, tpHigher, tpHighest, tpTimeCritical };

class PASCALIMPLEMENTATION TThread : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	struct TSynchronizeRecord;
	typedef TSynchronizeRecord *PSynchronizeRecord;
	
	struct DECLSPEC_DRECORD TSynchronizeRecord
	{
	public:
		System::TObject* FThread;
		TThreadMethod FMethod;
		_di_TThreadProcedure FProcedure;
		System::TObject* FSynchronizeException;
		__int64 FExecuteAfterTimestamp;
		void __fastcall Init(System::TObject* AThread, const TThreadMethod AMethod)/* overload */;
		void __fastcall Init(System::TObject* AThread, const _di_TThreadProcedure AProcedure)/* overload */;
	};
	
	
	__interface DELPHIINTERFACE TOnSynchronizeProc;
	typedef System::DelphiInterface<TOnSynchronizeProc> _di_TOnSynchronizeProc;
	__interface TOnSynchronizeProc  : public System::IInterface 
	{
		virtual void __fastcall Invoke(unsigned AThreadID, bool &AQueueEvent, bool &AForceQueue, TThreadMethod &AMethod, _di_TThreadProcedure &AProcedure) = 0 ;
	};
	
	
public:
	struct DECLSPEC_DRECORD TSystemTimes
	{
	public:
		unsigned __int64 IdleTime;
		unsigned __int64 UserTime;
		unsigned __int64 KernelTime;
		unsigned __int64 NiceTime;
	};
	
	
	
private:
	static int FProcessorCount;
	static _di_TOnSynchronizeProc FOnSynchronize;
	unsigned FThreadID;
	NativeUInt FHandle;
	bool FStarted;
	bool FCreateSuspended;
	volatile bool FTerminated;
	bool FSuspended;
	bool FFreeOnTerminate;
	volatile bool FFinished;
	int FReturnValue;
	TNotifyEvent FOnTerminate;
	System::TObject* FFatalException;
	bool FExternalThread;
	bool FShutdown;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall CallOnTerminate();
	__classmethod void __fastcall Synchronize(PSynchronizeRecord ASyncRec, bool QueueEvent = false, bool ForceQueue = false)/* overload */;
	static TThread* __fastcall GetCurrentThread();
	static bool __fastcall GetIsSingleProcessor();
	void __fastcall InternalStart(bool Force);
	TThreadPriority __fastcall GetPriority();
	void __fastcall SetPriority(TThreadPriority Value);
	void __fastcall SetSuspended(bool Value);
	static DELPHITHREAD TThread* FCurrentThread;
	
protected:
	void __fastcall CheckThreadError(int ErrCode)/* overload */;
	void __fastcall CheckThreadError(bool Success)/* overload */;
	virtual void __fastcall DoTerminate();
	virtual void __fastcall TerminatedSet();
	virtual void __fastcall Execute() = 0 ;
	void __fastcall Queue(TThreadMethod AMethod)/* overload */;
	void __fastcall Synchronize(TThreadMethod AMethod)/* overload */;
	void __fastcall Queue(_di_TThreadProcedure AThreadProc)/* overload */;
	void __fastcall Synchronize(_di_TThreadProcedure AThreadProc)/* overload */;
	void __fastcall SetFreeOnTerminate(bool Value);
	virtual void __fastcall ShutdownThread();
	__classmethod void __fastcall InitializeExternalThreadsList();
	__property int ReturnValue = {read=FReturnValue, write=FReturnValue, nodefault};
	__property bool Terminated = {read=FTerminated, nodefault};
	
public:
	__fastcall TThread()/* overload */;
	__fastcall TThread(bool CreateSuspended)/* overload */;
	__fastcall TThread(bool CreateSuspended, NativeUInt ReservedStackSize)/* overload */;
	__fastcall virtual ~TThread();
	static TThread* __fastcall CreateAnonymousThread(const System::Sysutils::_di_TProc ThreadProc);
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall BeforeDestruction();
	void __fastcall Resume _DEPRECATED_ATTRIBUTE0 ();
	void __fastcall Start();
	void __fastcall Suspend _DEPRECATED_ATTRIBUTE0 ();
	void __fastcall Terminate();
	unsigned __fastcall WaitFor();
	static bool __fastcall CheckTerminated();
	static void __fastcall SetReturnValue(int Value);
	static void __fastcall Queue(TThread* const AThread, TThreadMethod AMethod)/* overload */;
	static void __fastcall Queue(TThread* const AThread, _di_TThreadProcedure AThreadProc)/* overload */;
	static void __fastcall RemoveQueuedEvents(TThread* const AThread, TThreadMethod AMethod)/* overload */;
	static void __fastcall StaticQueue _DEPRECATED_ATTRIBUTE1("From C++ just use Queue now that it is just a static method") (TThread* const AThread, TThreadMethod AMethod);
	static void __fastcall Synchronize(TThread* const AThread, TThreadMethod AMethod)/* overload */;
	static void __fastcall Synchronize(TThread* const AThread, _di_TThreadProcedure AThreadProc)/* overload */;
	static void __fastcall StaticSynchronize _DEPRECATED_ATTRIBUTE1("From C++ just use Synchronize now that it is just a static method") (TThread* const AThread, TThreadMethod AMethod);
	static void __fastcall ForceQueue(TThread* const AThread, const TThreadMethod AMethod, int ADelay = 0x0)/* overload */;
	static void __fastcall ForceQueue(TThread* const AThread, const _di_TThreadProcedure AThreadProc, int ADelay = 0x0)/* overload */;
	static void __fastcall RemoveQueuedEvents(TThread* const AThread)/* overload */;
	static void __fastcall RemoveQueuedEvents(TThreadMethod AMethod)/* overload */;
	static void __fastcall NameThreadForDebugging(System::AnsiString AThreadName, unsigned AThreadID = (unsigned)(0xffffffff))/* overload */;
	static void __fastcall NameThreadForDebugging(System::UnicodeString AThreadName, unsigned AThreadID = (unsigned)(0xffffffff))/* overload */;
	static void __fastcall SpinWait(int Iterations);
	static void __fastcall Sleep(int Timeout);
	static void __fastcall Yield();
	static bool __fastcall GetSystemTimes(/* out */ TSystemTimes &SystemTimes);
	static int __fastcall GetCPUUsage(TSystemTimes &PrevSystemTimes);
	static unsigned __fastcall GetTickCount();
	static unsigned __int64 __fastcall GetTickCount64();
	static bool __fastcall IsTimeout(unsigned AStartTime, int ATimeout);
	__property bool ExternalThread = {read=FExternalThread, nodefault};
	__property System::TObject* FatalException = {read=FFatalException};
	__property bool FreeOnTerminate = {read=FFreeOnTerminate, write=SetFreeOnTerminate, nodefault};
	__property bool Finished = {read=FFinished, nodefault};
#ifndef _WIN64
	__property NativeUInt Handle = {read=FHandle, nodefault};
#else /* _WIN64 */
	__property NativeUInt Handle = {read=FHandle};
#endif /* _WIN64 */
	__property TThreadPriority Priority = {read=GetPriority, write=SetPriority, nodefault};
	__property bool Started = {read=FStarted, nodefault};
	__property bool Suspended = {read=FSuspended, write=SetSuspended, nodefault};
	__property unsigned ThreadID = {read=FThreadID, nodefault};
	__property TNotifyEvent OnTerminate = {read=FOnTerminate, write=FOnTerminate};
	/* static */ __property TThread* Current = {read=GetCurrentThread};
	/* static */ __property TThread* CurrentThread = {read=GetCurrentThread};
	/* static */ __property int ProcessorCount = {read=FProcessorCount, nodefault};
	/* static */ __property bool IsSingleProcessor = {read=GetIsSingleProcessor, nodefault};
	/* static */ __property _di_TOnSynchronizeProc OnSynchronize = {read=FOnSynchronize, write=FOnSynchronize};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TComponentEnumerator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FIndex;
	TComponent* FComponent;
	
public:
	__fastcall TComponentEnumerator(TComponent* AComponent);
	TComponent* __fastcall GetCurrent();
	bool __fastcall MoveNext();
	__property TComponent* Current = {read=GetCurrent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TComponentEnumerator() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TOperation : unsigned char { opInsert, opRemove };

enum DECLSPEC_DENUM System_Classes__65 : unsigned char { csLoading, csReading, csWriting, csDestroying, csDesigning, csAncestor, csUpdating, csFixups, csFreeNotification, csInline, csDesignInstance };

typedef System::Set<System_Classes__65, System_Classes__65::csLoading, System_Classes__65::csDesignInstance> TComponentState;

enum DECLSPEC_DENUM System_Classes__75 : unsigned char { csInheritable, csCheckPropAvail, csSubComponent, csTransient };

typedef System::Set<System_Classes__75, System_Classes__75::csInheritable, System_Classes__75::csTransient> TComponentStyle;

typedef void __fastcall (__closure *TGetChildProc)(TComponent* Child);

typedef void __fastcall (__closure *TGetStreamProc)(TStream* const S);

typedef void __fastcall (__closure *TGetDeltaStreamsEvent)(System::TObject* Sender, TGetStreamProc Proc, bool &Handled);

typedef System::UnicodeString TComponentName;

__interface  INTERFACE_UUID("{E07892A0-F52F-11CF-BD2F-0020AF0E5B81}") IVCLComObject  : public System::IInterface 
{
	virtual HRESULT __stdcall GetTypeInfoCount(/* out */ int &Count) = 0 ;
	virtual HRESULT __stdcall GetTypeInfo(int Index, int LocaleID, /* out */ void *TypeInfo) = 0 ;
	virtual HRESULT __stdcall GetIDsOfNames(const GUID &IID, void * Names, int NameCount, int LocaleID, void * DispIDs) = 0 ;
	virtual HRESULT __stdcall Invoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, void *Params, void * VarResult, void * ExcepInfo, void * ArgErr) = 0 ;
	virtual HRESULT __fastcall SafeCallException(System::TObject* ExceptObject, void * ExceptAddr) = 0 ;
	virtual void __fastcall FreeOnRelease() = 0 ;
};

__interface  INTERFACE_UUID("{B971E807-E3A6-11D1-AAB1-00C04FB16FBC}") IDesignerNotify  : public System::IInterface 
{
	virtual void __fastcall Modified() = 0 ;
	virtual void __fastcall Notification(TPersistent* AnObject, TOperation Operation) = 0 ;
	virtual void __fastcall CanInsertComponent(TComponent* AComponent) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ComponentPlatformsAttribute : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
private:
	unsigned FPlatforms;
	
public:
	__fastcall ComponentPlatformsAttribute(const unsigned Platforms);
	__property unsigned Platforms = {read=FPlatforms, write=FPlatforms, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~ComponentPlatformsAttribute() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface TObserverToggleEvent  : public System::IInterface 
{
	virtual void __fastcall Invoke(const _di_IObserver AObserver, const bool Value) = 0 ;
};

__interface  INTERFACE_UUID("{B03253D8-7720-4B68-B10A-E3E79B91ECD3}") IObserver  : public System::IInterface 
{
	virtual void __fastcall Removed() = 0 ;
	virtual bool __fastcall GetActive() = 0 ;
	virtual void __fastcall SetActive(bool Value) = 0 ;
	virtual _di_TObserverToggleEvent __fastcall GetOnObserverToggle() = 0 ;
	virtual void __fastcall SetOnObserverToggle(_di_TObserverToggleEvent AEvent) = 0 ;
	__property _di_TObserverToggleEvent OnObserverToggle = {read=GetOnObserverToggle, write=SetOnObserverToggle};
	__property bool Active = {read=GetActive, write=SetActive};
};

__interface  INTERFACE_UUID("{D0395F17-52AA-4515-93A5-5B292F03AA7B}") ISingleCastObserver  : public IObserver 
{
	
};

__interface  INTERFACE_UUID("{C19CB01E-1233-4405-8A30-7987DF2C3690}") IMultiCastObserver  : public IObserver 
{
	
};

__interface  INTERFACE_UUID("{D1CE0112-FA41-4922-A9F1-D4641C02AA05}") IEditFormatLink  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetDisplayName() = 0 ;
	virtual int __fastcall GetDisplayWidth() = 0 ;
	virtual int __fastcall GetDisplayTextWidth() = 0 ;
	virtual bool __fastcall GetReadOnly() = 0 ;
	virtual bool __fastcall GetVisible() = 0 ;
	virtual bool __fastcall GetCurrency() = 0 ;
	virtual System::UnicodeString __fastcall GetEditMask() = 0 ;
	virtual TAlignment __fastcall GetAlignment() = 0 ;
	virtual int __fastcall GetMaxLength() = 0 ;
	__property System::UnicodeString DisplayName = {read=GetDisplayName};
	__property int DisplayWidth = {read=GetDisplayWidth};
	__property int DisplayTextWidth = {read=GetDisplayTextWidth};
	__property bool ReadOnly = {read=GetReadOnly};
	__property bool Visible = {read=GetVisible};
	__property bool Currency = {read=GetCurrency};
	__property System::UnicodeString EditMask = {read=GetEditMask};
	__property TAlignment Alignment = {read=GetAlignment};
	__property int MaxLength = {read=GetMaxLength};
};

__interface  INTERFACE_UUID("{E88C2705-7C5A-4E66-9B81-447D05D5E640}") IEditLinkObserver  : public ISingleCastObserver 
{
	virtual void __fastcall Update() = 0 ;
	virtual bool __fastcall Edit() = 0 ;
	virtual void __fastcall Reset() = 0 ;
	virtual void __fastcall Modified() = 0 ;
	virtual bool __fastcall IsModified() = 0 ;
	virtual bool __fastcall IsValidChar(System::WideChar AKey) = 0 ;
	virtual bool __fastcall IsRequired() = 0 ;
	virtual bool __fastcall GetIsReadOnly() = 0 ;
	virtual void __fastcall SetIsReadOnly(bool Value) = 0 ;
	__property bool IsReadOnly = {read=GetIsReadOnly, write=SetIsReadOnly};
	virtual bool __fastcall GetIsEditing() = 0 ;
	__property bool IsEditing = {read=GetIsEditing};
	virtual void __fastcall BeginUpdate() = 0 ;
	virtual void __fastcall EndUpdate() = 0 ;
	virtual bool __fastcall GetUpdating() = 0 ;
	__property bool Updating = {read=GetUpdating};
	virtual _di_IEditFormatLink __fastcall GetFormatLink() = 0 ;
	__property _di_IEditFormatLink FormatLink = {read=GetFormatLink};
};

__interface TObserverGetCurrentEvent  : public System::IInterface 
{
	virtual System::TVarRec __fastcall Invoke() = 0 ;
};

__interface  INTERFACE_UUID("{A911B648-E1E5-4EEC-9FEE-D8E62FFA0E71}") IEditGridLinkObserver  : public IEditLinkObserver 
{
	virtual System::TVarRec __fastcall GetCurrent() = 0 ;
	__property System::TVarRec Current = {read=GetCurrent};
	virtual _di_TObserverGetCurrentEvent __fastcall GetOnObserverCurrent() = 0 ;
	virtual void __fastcall SetOnObserverCurrent(_di_TObserverGetCurrentEvent AEvent) = 0 ;
	__property _di_TObserverGetCurrentEvent OnObserverCurrent = {read=GetOnObserverCurrent, write=SetOnObserverCurrent};
};

__interface  INTERFACE_UUID("{FA45CF0C-E8DB-4F9E-B53F-E072C94659F6}") IPositionLinkObserver170  : public System::IInterface 
{
	virtual void __fastcall PosChanged() = 0 ;
};

__interface  INTERFACE_UUID("{E78B0035-6802-447C-A80A-0AEC04AD851F}") IPositionLinkObserver  : public IPositionLinkObserver170 
{
	virtual void __fastcall PosChanging() = 0 ;
};

__interface  INTERFACE_UUID("{61DAC12C-B950-43CA-86B5-43D8E78012E8}") IControlValueObserver  : public System::IInterface 
{
	virtual void __fastcall ValueModified() = 0 ;
	virtual void __fastcall ValueUpdate() = 0 ;
};

__interface  INTERFACE_UUID("{8B9F22C3-FDA3-45FD-99E1-5A88481A9F95}") IObserverTrack  : public System::IInterface 
{
	virtual bool __fastcall GetTrack() = 0 ;
	__property bool Track = {read=GetTrack};
};

__interface  INTERFACE_UUID("{8429848A-4447-4211-93D2-745543C7AB57}") IIteratorLinkObserver  : public System::IInterface 
{
	virtual void __fastcall StartFrom(int APosition) = 0 ;
	virtual bool __fastcall MoveNext() = 0 ;
	virtual void __fastcall UpdateControlComponent(TComponent* AControl) = 0 ;
	virtual void __fastcall Finish() = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TObservers : public System::TObject
{
	typedef System::TObject inherited;
	
	
public:
	__interface DELPHIINTERFACE TCanObserveEvent;
	typedef System::DelphiInterface<TCanObserveEvent> _di_TCanObserveEvent;
	__interface TCanObserveEvent  : public System::IInterface 
	{
		virtual bool __fastcall Invoke(const int ID) = 0 ;
	};
	
	__interface DELPHIINTERFACE TObserverAddedEvent;
	typedef System::DelphiInterface<TObserverAddedEvent> _di_TObserverAddedEvent;
	__interface TObserverAddedEvent  : public System::IInterface 
	{
		virtual void __fastcall Invoke(const int ID, const _di_IObserver Observer) = 0 ;
	};
	
	
private:
	System::Generics::Collections::TDictionary__2<int,_di_IInterfaceList>* FObservers;
	_di_TCanObserveEvent FCanObserve;
	_di_TObserverAddedEvent FObserverAdded;
	
public:
	__fastcall TObservers();
	__fastcall virtual ~TObservers();
	__property _di_TCanObserveEvent OnCanObserve = {read=FCanObserve, write=FCanObserve};
	__property _di_TObserverAddedEvent OnObserverAdded = {read=FObserverAdded, write=FObserverAdded};
	virtual bool __fastcall CanObserve(const int ID)/* overload */;
	virtual void __fastcall AddObserver(const int ID, const System::_di_IInterface AIntf)/* overload */;
	virtual void __fastcall AddObserver(const int *IDs, const int IDs_High, const System::_di_IInterface AIntf)/* overload */;
	virtual void __fastcall RemoveObserver(const int ID, const System::_di_IInterface AIntf)/* overload */;
	virtual void __fastcall RemoveObserver(const int *IDs, const int IDs_High, const System::_di_IInterface AIntf)/* overload */;
	virtual bool __fastcall IsObserving(const int ID)/* overload */;
	virtual bool __fastcall TryIsObserving(const int ID, /* out */ System::_di_IInterface &AIntf);
	virtual System::_di_IInterface __fastcall GetSingleCastObserver(const int ID);
	virtual _di_IInterfaceList __fastcall GetMultiCastObserver(const int ID);
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TLinkObservers : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static _di_IEditGridLinkObserver __fastcall GetEditGridLink(TObservers* const AObservers);
	static _di_IEditLinkObserver __fastcall GetEditLink(TObservers* const AObservers);
	static void __fastcall EditLinkUpdate(TObservers* const AObservers);
	static bool __fastcall EditLinkTrackUpdate(TObservers* const AObservers);
	static void __fastcall EditLinkReset(TObservers* const AObservers);
	static void __fastcall EditLinkModified(TObservers* AObservers);
	static bool __fastcall EditLinkIsModified(TObservers* const AObservers);
	static bool __fastcall EditLinkIsValidChar(TObservers* const AObservers, System::WideChar AKey);
	static bool __fastcall EditLinkIsEditing(TObservers* const AObservers);
	static bool __fastcall EditLinkEdit(TObservers* const AObservers);
	static void __fastcall EditLinkSetIsReadOnly(TObservers* const AObservers, bool AValue);
	static bool __fastcall EditLinkIsReadOnly(TObservers* const AObservers);
	static void __fastcall EditGridLinkUpdate(TObservers* const AObservers);
	static void __fastcall EditGridLinkReset(TObservers* const AObservers);
	static void __fastcall EditGridLinkModified(TObservers* const AObservers);
	static bool __fastcall EditGridLinkIsModified(TObservers* const AObservers);
	static bool __fastcall EditGridLinkIsValidChar(TObservers* const AObservers, System::WideChar AKey);
	static bool __fastcall EditGridLinkIsEditing(TObservers* const AObservers);
	static bool __fastcall EditGridLinkEdit(TObservers* const AObservers);
	static bool __fastcall EditGridLinkIsReadOnly(TObservers* const AObservers);
	static void __fastcall EditGridLinkSetIsReadOnly(TObservers* const AObservers, bool AValue);
	static void __fastcall PositionLinkPosChanged(TObservers* const AObservers);
	static void __fastcall PositionLinkPosChanging(TObservers* const AObservers);
	static void __fastcall ListSelectionChanged(TObservers* const AObservers);
	static void __fastcall ControlValueUpdate(TObservers* AObservers);
	static void __fastcall ControlValueModified(TObservers* AObservers);
	static bool __fastcall ControlValueTrackUpdate(TObservers* const AObservers);
	static bool __fastcall AllowControlChange(TComponent* const AControl);
	static void __fastcall ControlChanged(TComponent* const AControl);
	static void __fastcall IteratorLinkStartFrom(TObservers* const AObservers, int APosition);
	static bool __fastcall IteratorLinkMoveNext(TObservers* const AObservers);
	static void __fastcall IteratorLinkUpdateControlComponent(TObservers* const AObservers, TComponent* AControl);
	static void __fastcall IteratorLinkFinish(TObservers* const AObservers);
public:
	/* TObject.Create */ inline __fastcall TLinkObservers() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TLinkObservers() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TObserverMapping : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::Int8 EditLinkID = System::Int8(0x1);
	
	static const System::Int8 EditGridLinkID = System::Int8(0x2);
	
	static const System::Int8 PositionLinkID = System::Int8(0x3);
	
	static const System::Int8 ControlValueID = System::Int8(0x4);
	
	static const System::Int8 IteratorLinkID = System::Int8(0x5);
	
	static const System::Int8 MappedID = System::Int8(0x64);
	
	
private:
	TStringList* FMappings;
	static TObserverMapping* FInstance;
	
protected:
	__classmethod TObserverMapping* __fastcall Instance();
	
public:
	__fastcall TObserverMapping();
	__fastcall virtual ~TObserverMapping();
	
private:
	// __classmethod void __fastcall Destroy@();
	
public:
	__classmethod int __fastcall GetObserverID(const System::UnicodeString Key);
	
private:
	// __classmethod void __fastcall Create@();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EObserverException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EObserverException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EObserverException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EObserverException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EObserverException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EObserverException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EObserverException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EObserverException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EObserverException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EObserverException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EObserverException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EObserverException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EObserverException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EObserverException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TDefaultAttributeBase : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
protected:
	System::Variant FValue;
	
public:
	__property System::Variant Value = {read=FValue};
public:
	/* TObject.Create */ inline __fastcall TDefaultAttributeBase() : System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDefaultAttributeBase() { }
	
};


class PASCALIMPLEMENTATION DefaultAttribute : public TDefaultAttributeBase
{
	typedef TDefaultAttributeBase inherited;
	
public:
	__fastcall DefaultAttribute(const bool DefaultValue)/* overload */;
	__fastcall DefaultAttribute(const char DefaultValue)/* overload */;
	__fastcall DefaultAttribute(const System::WideChar DefaultValue)/* overload */;
	__fastcall DefaultAttribute(const int DefaultValue)/* overload */;
	__fastcall DefaultAttribute(const unsigned DefaultValue)/* overload */;
	__fastcall DefaultAttribute(const __int64 DefaultValue)/* overload */;
	__fastcall DefaultAttribute(const unsigned __int64 DefaultValue)/* overload */;
	__fastcall DefaultAttribute(const System::UnicodeString DefaultValue)/* overload */;
	__fastcall DefaultAttribute(const System::Extended DefaultValue)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~DefaultAttribute() { }
	
};


class PASCALIMPLEMENTATION NoDefaultAttribute : public TDefaultAttributeBase
{
	typedef TDefaultAttributeBase inherited;
	
public:
	__fastcall NoDefaultAttribute();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~NoDefaultAttribute() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ObservableMemberAttribute : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
protected:
	System::UnicodeString FMemberName;
	System::UnicodeString FFramework;
	bool FTrack;
	
public:
	__fastcall ObservableMemberAttribute(const System::UnicodeString AMemberName, const System::UnicodeString AFramework, bool ATrack)/* overload */;
	__fastcall ObservableMemberAttribute(const System::UnicodeString AMemberName, bool ATrack)/* overload */;
	__fastcall ObservableMemberAttribute(const System::UnicodeString AMemberName)/* overload */;
	__property System::UnicodeString MemberName = {read=FMemberName};
	__property System::UnicodeString Framework = {read=FFramework};
	__property bool Track = {read=FTrack, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~ObservableMemberAttribute() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef int TDesignInfo;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBaseAsyncResult : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
	
private:
	enum DECLSPEC_DENUM TAsyncFlag : unsigned char { Completed, Synchronous, Invoked, Cancelled, ForceSize = 31 };
	
	typedef System::Set<TAsyncFlag, TAsyncFlag::Completed, TAsyncFlag::ForceSize> TAsyncFlags;
	
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	System::TObject* FContext;
	TAsyncFlags FAsyncFlags;
	unsigned FInvokingThread;
	System::Types::TMultiWaitEvent* FAsyncHandle;
	void __fastcall SetFlagsAtomic(TAsyncFlags Value, TAsyncFlags Mask);
	System::TObject* __fastcall GetAsyncContext();
	System::Types::TMultiWaitEvent* __fastcall GetAsyncWaitEvent();
	bool __fastcall GetCompletedSynchronously();
	bool __fastcall GetIsCompleted();
	bool __fastcall GetIsCancelled();
	__property System::Types::TMultiWaitEvent* AsyncWaitEvent = {read=GetAsyncWaitEvent};
	
protected:
	System::TObject* FInvokingException;
	virtual void __fastcall AsyncDispatch() = 0 ;
	virtual void __fastcall Complete();
	void __fastcall DoAsyncDispatch();
	virtual void __fastcall Schedule();
	__fastcall TBaseAsyncResult(System::TObject* const AContext)/* overload */;
	__property System::TObject* Context = {read=FContext};
	virtual bool __fastcall DoCancel();
	
public:
	__fastcall TBaseAsyncResult()/* overload */;
	__fastcall virtual ~TBaseAsyncResult();
	bool __fastcall Cancel();
	System::Types::_di_IAsyncResult __fastcall Invoke();
	void __fastcall WaitForCompletion();
	static void __fastcall Dispatch(TBaseAsyncResult* const AsyncResult);
	__property bool IsCancelled = {read=GetIsCancelled, nodefault};
private:
	void *__IAsyncResult;	// System::Types::IAsyncResult 
	
public:
	operator System::Types::IAsyncResult*(void) { return (System::Types::IAsyncResult*)&__IAsyncResult; }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TAsyncProcedureEvent)(const System::Types::_di_IAsyncResult ASyncResult);

typedef void __fastcall (__closure *TAsyncFunctionEvent)(const System::Types::_di_IAsyncResult ASyncResult, /* out */ System::TObject* &Result);

typedef void __fastcall (__closure *TAsyncConstArrayProcedureEvent)(const System::Types::_di_IAsyncResult ASyncResult, const System::TVarRec *Params, const int Params_High);

typedef void __fastcall (__closure *TAsyncConstArrayFunctionEvent)(const System::Types::_di_IAsyncResult ASyncResult, /* out */ System::TObject* &Result, const System::TVarRec *Params, const int Params_High);

__interface TAsyncConstArrayProc  : public System::IInterface 
{
	virtual void __fastcall Invoke(const System::TVarRec *Params, const int Params_High) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename TResult> __interface TAsyncConstArrayFunc__1  : public System::IInterface 
{
	virtual TResult __fastcall Invoke(const System::TVarRec *Params, const int Params_High) = 0 ;
};

__interface TAsyncCallback  : public System::IInterface 
{
	virtual void __fastcall Invoke(const System::Types::_di_IAsyncResult ASyncResult) = 0 ;
};

typedef TAsyncProcedureEvent TAsyncCallbackEvent;

class PASCALIMPLEMENTATION TComponent : public TPersistent
{
	typedef TPersistent inherited;
	
	
protected:
	class DELPHICLASS TComponentAsyncResult;
#ifndef _WIN64
	#pragma pack(push,4)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TComponentAsyncResult : public TBaseAsyncResult
	{
		typedef TBaseAsyncResult inherited;
		
	private:
		TComponent* FComponent;
		
	protected:
		virtual void __fastcall Schedule();
		__fastcall TComponentAsyncResult(System::TObject* const AContext, TComponent* const AComponent);
	public:
		/* TBaseAsyncResult.Destroy */ inline __fastcall virtual ~TComponentAsyncResult() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	class DELPHICLASS TAsyncConstArrayResult;
#ifndef _WIN64
	#pragma pack(push,4)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TAsyncConstArrayResult : public TComponent::TComponentAsyncResult
	{
		typedef TComponent::TComponentAsyncResult inherited;
		
	protected:
#ifndef _WIN64
		System::DynamicArray<System::Rtti::TValue> FParams;
#else /* _WIN64 */
		System::TArray__1<System::Rtti::TValue> FParams;
#endif /* _WIN64 */
		__fastcall TAsyncConstArrayResult(System::TObject* const AContext, TComponent* const AComponent, const System::TVarRec *Params, const int Params_High);
	public:
		/* TBaseAsyncResult.Destroy */ inline __fastcall virtual ~TAsyncConstArrayResult() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	class DELPHICLASS TAsyncConstArrayProcResult;
#ifndef _WIN64
	#pragma pack(push,4)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TAsyncConstArrayProcResult : /*[[sealed]]*/ public TComponent::TAsyncConstArrayResult
	{
		typedef TComponent::TAsyncConstArrayResult inherited;
		
	private:
		_di_TAsyncConstArrayProc FAsyncProcedure;
		
	protected:
		virtual void __fastcall AsyncDispatch();
		__fastcall TAsyncConstArrayProcResult(const _di_TAsyncConstArrayProc AAsyncProcedure, System::TObject* const AContext, TComponent* const AComponent, const System::TVarRec *Params, const int Params_High);
	public:
		/* TBaseAsyncResult.Destroy */ inline __fastcall virtual ~TAsyncConstArrayProcResult() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	template<typename TResult> class DELPHICLASS TAsyncConstArrayFuncResult__1;
#ifndef _WIN64
	#pragma pack(push,4)
#endif /* not _WIN64 */
	// Template declaration generated by Delphi parameterized types is
	// used only for accessing Delphi variables and fields.
	// Don't instantiate with new type parameters in user code.
	template<typename TResult> class PASCALIMPLEMENTATION TAsyncConstArrayFuncResult__1 : /*[[sealed]]*/ public TComponent::TAsyncConstArrayResult
	{
		typedef TComponent::TAsyncConstArrayResult inherited;
		
	private:
		TResult FRetVal;
		System::DelphiInterface<TAsyncConstArrayFunc__1<TResult> > FAsyncFunction;
		
	protected:
		__fastcall TAsyncConstArrayFuncResult__1(const System::DelphiInterface<TAsyncConstArrayFunc__1<TResult> > AAsyncFunction, System::TObject* const AContext, TComponent* const AComponent, const System::TVarRec *Params, const int Params_High);
		virtual void __fastcall AsyncDispatch();
		TResult __fastcall GetRetVal();
	public:
		/* TBaseAsyncResult.Destroy */ inline __fastcall virtual ~TAsyncConstArrayFuncResult__1() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	class DELPHICLASS TAsyncConstArrayProcedureResult;
	class PASCALIMPLEMENTATION TAsyncConstArrayProcedureResult : /*[[sealed]]*/ public TComponent::TAsyncConstArrayResult
	{
		typedef TComponent::TAsyncConstArrayResult inherited;
		
	private:
		TAsyncConstArrayProcedureEvent FAsyncProcedure;
		
	protected:
		virtual void __fastcall AsyncDispatch();
		__fastcall TAsyncConstArrayProcedureResult(const TAsyncConstArrayProcedureEvent AAsyncProcedure, System::TObject* const AContext, TComponent* const AComponent, const System::TVarRec *Params, const int Params_High);
	public:
		/* TBaseAsyncResult.Destroy */ inline __fastcall virtual ~TAsyncConstArrayProcedureResult() { }
		
	};
	
	
	class DELPHICLASS TAsyncConstArrayFunctionResult;
	class PASCALIMPLEMENTATION TAsyncConstArrayFunctionResult : /*[[sealed]]*/ public TComponent::TAsyncConstArrayResult
	{
		typedef TComponent::TAsyncConstArrayResult inherited;
		
	private:
		System::TObject* FRetVal;
		TAsyncConstArrayFunctionEvent FAsyncFunction;
		
	protected:
		__fastcall TAsyncConstArrayFunctionResult(const TAsyncConstArrayFunctionEvent AAsyncFunction, System::TObject* const AContext, TComponent* const AComponent, const System::TVarRec *Params, const int Params_High);
		virtual void __fastcall AsyncDispatch();
		System::TObject* __fastcall GetRetVal();
	public:
		/* TBaseAsyncResult.Destroy */ inline __fastcall virtual ~TAsyncConstArrayFunctionResult() { }
		
	};
	
	
	class DELPHICLASS TAsyncProcedureResult;
#ifndef _WIN64
	#pragma pack(push,4)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TAsyncProcedureResult : /*[[sealed]]*/ public TComponent::TComponentAsyncResult
	{
		typedef TComponent::TComponentAsyncResult inherited;
		
	private:
		System::Sysutils::_di_TProc FAsyncProcedure;
		
	protected:
		__fastcall TAsyncProcedureResult(const System::Sysutils::_di_TProc AAsyncProcedure, System::TObject* const AContext, TComponent* const AComponent);
		virtual void __fastcall AsyncDispatch();
	public:
		/* TBaseAsyncResult.Destroy */ inline __fastcall virtual ~TAsyncProcedureResult() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	template<typename TResult> class DELPHICLASS TAsyncFunctionResult__1;
#ifndef _WIN64
	#pragma pack(push,4)
#endif /* not _WIN64 */
	// Template declaration generated by Delphi parameterized types is
	// used only for accessing Delphi variables and fields.
	// Don't instantiate with new type parameters in user code.
	template<typename TResult> class PASCALIMPLEMENTATION TAsyncFunctionResult__1 : /*[[sealed]]*/ public TComponent::TComponentAsyncResult
	{
		typedef TComponent::TComponentAsyncResult inherited;
		
	private:
		TResult FRetVal;
		System::DelphiInterface<System::Sysutils::TFunc__1<TResult> > FAsyncFunction;
		
	protected:
		__fastcall TAsyncFunctionResult__1(const System::DelphiInterface<System::Sysutils::TFunc__1<TResult> > AAsyncFunction, System::TObject* const AContext, TComponent* const AComponent);
		virtual void __fastcall AsyncDispatch();
		TResult __fastcall GetRetVal();
	public:
		/* TBaseAsyncResult.Destroy */ inline __fastcall virtual ~TAsyncFunctionResult__1() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	class DELPHICLASS TAsyncProcedureResultEvent;
	class PASCALIMPLEMENTATION TAsyncProcedureResultEvent : /*[[sealed]]*/ public TComponent::TComponentAsyncResult
	{
		typedef TComponent::TComponentAsyncResult inherited;
		
	private:
		TAsyncProcedureEvent FAsyncProcedure;
		
	protected:
		__fastcall TAsyncProcedureResultEvent(const TAsyncProcedureEvent AAsyncProcedure, System::TObject* const AContext, TComponent* const AComponent);
		virtual void __fastcall AsyncDispatch();
	public:
		/* TBaseAsyncResult.Destroy */ inline __fastcall virtual ~TAsyncProcedureResultEvent() { }
		
	};
	
	
	class DELPHICLASS TAsyncFunctionResultEvent;
	class PASCALIMPLEMENTATION TAsyncFunctionResultEvent : /*[[sealed]]*/ public TComponent::TComponentAsyncResult
	{
		typedef TComponent::TComponentAsyncResult inherited;
		
	private:
		System::TObject* FRetVal;
		TAsyncFunctionEvent FAsyncFunction;
		
	protected:
		__fastcall TAsyncFunctionResultEvent(const TAsyncFunctionEvent AAsyncFunction, System::TObject* const AContext, TComponent* const AComponent);
		virtual void __fastcall AsyncDispatch();
		System::TObject* __fastcall GetRetVal();
	public:
		/* TBaseAsyncResult.Destroy */ inline __fastcall virtual ~TAsyncFunctionResultEvent() { }
		
	};
	
	
	
private:
	TComponent* FOwner;
	TComponentName FName;
	NativeInt FTag;
	System::Generics::Collections::TList__1<TComponent*>* FComponents;
	System::Generics::Collections::TList__1<TComponent*>* FFreeNotifies;
	int FDesignInfo;
	TComponentState FComponentState;
	void *FVCLComObject;
	TObservers* FObservers;
	TGetDeltaStreamsEvent FOnGetDeltaStreams;
	System::_di_IInterface __fastcall GetComObject();
	TComponent* __fastcall GetComponent(int AIndex);
	int __fastcall GetComponentCount();
	int __fastcall GetComponentIndex();
	void __fastcall Insert(TComponent* AComponent);
	void __fastcall ReadLeft(TReader* Reader);
	void __fastcall ReadTop(TReader* Reader);
	void __fastcall Remove(TComponent* AComponent);
	void __fastcall RemoveNotification(TComponent* const AComponent);
	void __fastcall SetComponentIndex(int Value);
	void __fastcall SetReference(bool Enable);
	void __fastcall WriteLeft(TWriter* Writer);
	void __fastcall WriteTop(TWriter* Writer);
	TComponent* __fastcall IntfGetComponent();
	void __fastcall DoGetDeltaStreams(TGetStreamProc Proc, bool &Handled);
	void __fastcall ReadDeltaStream(TStream* const S);
	void __fastcall ReadDeltaState();
	
protected:
	TComponentStyle FComponentStyle;
	
private:
	System::Generics::Collections::TList__1<TComponent*>* FSortedComponents;
	TComponent* __fastcall FindSortedComponent(const System::UnicodeString AName, int &Index);
	void __fastcall AddSortedComponent(TComponent* const AComponent);
	void __fastcall RemoveSortedComponent(TComponent* const AComponent);
	static System::DelphiInterface<System::Generics::Defaults::IComparer__1<TComponent*> > FComparer;
	
private:
	// __classmethod void __fastcall Create@();
	
protected:
	virtual void __fastcall AsyncSchedule(TBaseAsyncResult* const ASyncResult);
	void __fastcall ChangeName(const TComponentName NewName);
	virtual void __fastcall DefineProperties(TFiler* Filer);
	DYNAMIC void __fastcall GetChildren(TGetChildProc Proc, TComponent* Root);
	DYNAMIC TComponent* __fastcall GetChildOwner();
	DYNAMIC TComponent* __fastcall GetChildParent();
	DYNAMIC TPersistent* __fastcall GetOwner();
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(TComponent* AComponent, TOperation Operation);
	DYNAMIC void __fastcall GetDeltaStreams(TGetStreamProc Proc);
	virtual void __fastcall ReadState(TReader* Reader);
	virtual bool __fastcall CanObserve(const int ID);
	virtual void __fastcall ObserverAdded(const int ID, const _di_IObserver Observer);
	virtual TObservers* __fastcall GetObservers();
	void __fastcall SetAncestor(bool Value);
	void __fastcall SetDesigning(bool Value, bool SetChildren = true);
	void __fastcall SetInline(bool Value);
	void __fastcall SetDesignInstance(bool Value);
	virtual void __fastcall SetName(const TComponentName NewName);
	DYNAMIC void __fastcall SetChildOrder(TComponent* Child, int Order);
	DYNAMIC void __fastcall SetParentComponent(TComponent* Value);
	DYNAMIC void __fastcall Updating();
	DYNAMIC void __fastcall Updated();
	__classmethod virtual void __fastcall UpdateRegistry(bool Register, const System::UnicodeString ClassID, const System::UnicodeString ProgID);
	virtual void __fastcall ValidateRename(TComponent* AComponent, const System::UnicodeString CurName, const System::UnicodeString NewName);
	DYNAMIC void __fastcall ValidateContainer(TComponent* AComponent);
	DYNAMIC void __fastcall ValidateInsert(TComponent* AComponent);
	virtual void __fastcall WriteState(TWriter* Writer);
	void __fastcall RemoveFreeNotifications();
	virtual HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	int __stdcall _AddRef();
	int __stdcall _Release();
	HRESULT __stdcall GetTypeInfoCount(/* out */ int &Count);
	HRESULT __stdcall GetTypeInfo(int Index, int LocaleID, /* out */ void *TypeInfo);
	HRESULT __stdcall GetIDsOfNames(const GUID &IID, void * Names, int NameCount, int LocaleID, void * DispIDs);
	HRESULT __stdcall Invoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, void *Params, void * VarResult, void * ExcepInfo, void * ArgErr);
	__property TGetDeltaStreamsEvent OnGetDeltaStreams = {read=FOnGetDeltaStreams, write=FOnGetDeltaStreams};
	
public:
	__fastcall virtual TComponent(TComponent* AOwner);
	__fastcall virtual ~TComponent();
	virtual void __fastcall BeforeDestruction();
	System::Types::_di_IAsyncResult __fastcall BeginInvoke(const System::Sysutils::_di_TProc AProc, System::TObject* const AContext = (System::TObject*)(0x0))/* overload */;
	System::Types::_di_IAsyncResult __fastcall BeginInvoke(const TAsyncProcedureEvent AProc, System::TObject* const AContext = (System::TObject*)(0x0))/* overload */;
	template<typename TResult> System::Types::_di_IAsyncResult __fastcall BeginInvoke(const System::DelphiInterface<System::Sysutils::TFunc__1<TResult> > AFunc, System::TObject* const AContext = (System::TObject*)(0x0))/* overload */;
	System::Types::_di_IAsyncResult __fastcall BeginInvoke(const _di_TAsyncConstArrayProc AProc, const System::TVarRec *Params, const int Params_High, System::TObject* const AContext = (System::TObject*)(0x0))/* overload */;
	template<typename TResult> System::Types::_di_IAsyncResult __fastcall BeginInvoke(const System::DelphiInterface<TAsyncConstArrayFunc__1<TResult> > AFunc, const System::TVarRec *Params, const int Params_High, System::TObject* const AContext = (System::TObject*)(0x0))/* overload */;
	System::Types::_di_IAsyncResult __fastcall BeginInvoke(const TAsyncConstArrayProcedureEvent AProc, const System::TVarRec *Params, const int Params_High, System::TObject* const AContext = (System::TObject*)(0x0))/* overload */;
	System::Types::_di_IAsyncResult __fastcall BeginInvoke(const TAsyncConstArrayFunctionEvent AFunc, const System::TVarRec *Params, const int Params_High, System::TObject* const AContext = (System::TObject*)(0x0))/* overload */;
	System::Types::_di_IAsyncResult __fastcall BeginInvoke(const TAsyncFunctionEvent AFunc, System::TObject* const AContext = (System::TObject*)(0x0))/* overload */;
	void __fastcall EndInvoke(const System::Types::_di_IAsyncResult ASyncResult)/* overload */;
	template<typename TResult> TResult __fastcall EndInvoke(const System::Types::_di_IAsyncResult AsyncResult)/* overload */;
	System::TObject* __fastcall EndFunctionInvoke(const System::Types::_di_IAsyncResult AsyncResult);
	void __fastcall DestroyComponents();
	void __fastcall Destroying();
	DYNAMIC bool __fastcall ExecuteAction(TBasicAction* Action);
	TComponent* __fastcall FindComponent(const System::UnicodeString AName);
	void __fastcall FreeNotification(TComponent* AComponent);
	void __fastcall RemoveFreeNotification(TComponent* AComponent);
	void __fastcall FreeOnRelease();
	TComponentEnumerator* __fastcall GetEnumerator();
	DYNAMIC TComponent* __fastcall GetParentComponent();
	DYNAMIC System::UnicodeString __fastcall GetNamePath();
	DYNAMIC bool __fastcall HasParent();
	void __fastcall InsertComponent(TComponent* const AComponent);
	void __fastcall RemoveComponent(TComponent* const AComponent);
	void __fastcall SetSubComponent(bool IsSubComponent);
	virtual HRESULT __fastcall SafeCallException(System::TObject* ExceptObject, void * ExceptAddr);
	virtual bool __fastcall UpdateAction(TBasicAction* Action);
	bool __fastcall IsImplementorOf(const System::_di_IInterface I);
	bool __fastcall ReferenceInterface(const System::_di_IInterface I, TOperation Operation);
	__property System::_di_IInterface ComObject = {read=GetComObject};
	__property TComponent* Components[int Index] = {read=GetComponent};
	__property int ComponentCount = {read=GetComponentCount, nodefault};
	__property int ComponentIndex = {read=GetComponentIndex, write=SetComponentIndex, nodefault};
	__property TComponentState ComponentState = {read=FComponentState, nodefault};
	__property TComponentStyle ComponentStyle = {read=FComponentStyle, nodefault};
	__property int DesignInfo = {read=FDesignInfo, write=FDesignInfo, nodefault};
	__property TComponent* Owner = {read=FOwner};
	__property void * VCLComObject = {read=FVCLComObject, write=FVCLComObject};
	__property TObservers* Observers = {read=GetObservers};
	
__published:
	__property TComponentName Name = {read=FName, write=SetName, stored=false};
	__property NativeInt Tag = {read=FTag, write=FTag, default=0};
	
private:
	// __classmethod void __fastcall Destroy@();
private:
	void *__IInterfaceComponentReference;	// IInterfaceComponentReference 
	void *__IInterface;	// System::IInterface 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E28B1858-EC86-4559-8FCD-6B4F824151ED}
	operator _di_IInterfaceComponentReference()
	{
		_di_IInterfaceComponentReference intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IInterfaceComponentReference*(void) { return (IInterfaceComponentReference*)&__IInterfaceComponentReference; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IInterface; }
	#endif
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TComponentInterfaceDelegate : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TComponent* FOwner;
	
protected:
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	int __stdcall _AddRef();
	int __stdcall _Release();
	HRESULT __stdcall GetTypeInfoCount(/* out */ int &Count);
	HRESULT __stdcall GetTypeInfo(int Index, int LocaleID, /* out */ void *TypeInfo);
	HRESULT __stdcall GetIDsOfNames(const GUID &IID, void * Names, int NameCount, int LocaleID, void * DispIDs);
	HRESULT __stdcall Invoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, void *Params, void * VarResult, void * ExcepInfo, void * ArgErr);
	void __fastcall FreeOnRelease();
	
public:
	__fastcall TComponentInterfaceDelegate(TComponent* AOwner);
	__fastcall virtual ~TComponentInterfaceDelegate();
	__property TComponent* Owner = {read=FOwner};
private:
	void *__IVCLComObject;	// IVCLComObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E07892A0-F52F-11CF-BD2F-0020AF0E5B81}
	operator _di_IVCLComObject()
	{
		_di_IVCLComObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IVCLComObject*(void) { return (IVCLComObject*)&__IVCLComObject; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IVCLComObject; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TBasicActionLink : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TNotifyEvent FOnChange;
	TBasicAction* FAction;
	
protected:
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual void __fastcall Change();
	virtual bool __fastcall IsOnExecuteLinked();
	virtual void __fastcall SetAction(TBasicAction* Value);
	virtual void __fastcall SetOnExecute(TNotifyEvent Value);
	
public:
	__fastcall virtual TBasicActionLink(System::TObject* AClient);
	__fastcall virtual ~TBasicActionLink();
	virtual bool __fastcall Execute(TComponent* AComponent = (TComponent*)(0x0));
	virtual bool __fastcall Update();
	__property TBasicAction* Action = {read=FAction, write=SetAction};
	__property TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


#ifndef _WIN64
typedef System::TMetaClass* TBasicActionLinkClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TBasicActionLinkClass);
#endif /* _WIN64 */

typedef void __fastcall (__closure *TActionEvent)(TBasicAction* Action, bool &Handled);

typedef void __fastcall (__closure *THintEvent)(System::UnicodeString &HintStr, bool &CanShow);

class PASCALIMPLEMENTATION TBasicAction : public TComponent
{
	typedef TComponent inherited;
	
private:
	System::Generics::Collections::TList__1<TBasicActionLink*>* FClients;
	TComponent* FActionComponent;
	TNotifyEvent FOnChange;
	TNotifyEvent FOnExecute;
	TNotifyEvent FOnUpdate;
	int __fastcall GetClientCount();
	TBasicActionLink* __fastcall GetClient(int Index);
	void __fastcall SetActionComponent(TComponent* const Value);
	
protected:
	virtual void __fastcall Change();
	virtual void __fastcall SetOnExecute(TNotifyEvent Value);
	__property TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	virtual void __fastcall Notification(TComponent* AComponent, TOperation Operation);
	__property int ClientCount = {read=GetClientCount, nodefault};
	__property TBasicActionLink* Clients[int Index] = {read=GetClient};
	void __fastcall RegisterChanges(TBasicActionLink* const Value);
	void __fastcall UnRegisterChanges(TBasicActionLink* const Value);
	
public:
	__fastcall virtual TBasicAction(TComponent* AOwner);
	__fastcall virtual ~TBasicAction();
	virtual bool __fastcall Suspended();
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	DYNAMIC bool __fastcall Execute();
	virtual bool __fastcall Update();
	__property TComponent* ActionComponent = {read=FActionComponent, write=SetActionComponent};
	__property TNotifyEvent OnExecute = {read=FOnExecute, write=SetOnExecute};
	__property TNotifyEvent OnUpdate = {read=FOnUpdate, write=FOnUpdate};
};


#ifndef _WIN64
typedef System::TMetaClass* TBasicActionClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TBasicActionClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TDataModule : public TComponent
{
	typedef TComponent inherited;
	
private:
	int FPixelsPerInch;
	System::Types::TPoint FDesignSize;
	System::Types::TPoint FDesignOffset;
	TNotifyEvent FOnCreate;
	TNotifyEvent FOnDestroy;
	void __fastcall ReadHeight(TReader* Reader);
	void __fastcall ReadPixelsPerInch(TReader* Reader);
	void __fastcall ReadHorizontalOffset(TReader* Reader);
	void __fastcall ReadVerticalOffset(TReader* Reader);
	void __fastcall ReadWidth(TReader* Reader);
	void __fastcall WriteWidth(TWriter* Writer);
	void __fastcall WritePixelsPerInch(TWriter* Writer);
	void __fastcall WriteHorizontalOffset(TWriter* Writer);
	void __fastcall WriteVerticalOffset(TWriter* Writer);
	void __fastcall WriteHeight(TWriter* Writer);
	void __fastcall IgnoreIdent(TReader* Reader);
	
protected:
	virtual void __fastcall DoCreate();
	virtual void __fastcall DoDestroy();
	virtual void __fastcall DefineProperties(TFiler* Filer);
	DYNAMIC void __fastcall GetChildren(TGetChildProc Proc, TComponent* Root);
	DYNAMIC bool __fastcall HandleCreateException();
	
public:
	__fastcall virtual TDataModule(TComponent* AOwner);
	__fastcall virtual TDataModule(TComponent* AOwner, int Dummy);
	__fastcall virtual ~TDataModule();
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall BeforeDestruction();
	__property System::Types::TPoint DesignOffset = {read=FDesignOffset, write=FDesignOffset};
	__property System::Types::TPoint DesignSize = {read=FDesignSize, write=FDesignSize};
	__property int PixelsPerInch = {read=FPixelsPerInch, write=FPixelsPerInch, nodefault};
	
__published:
	__property TNotifyEvent OnCreate = {read=FOnCreate, write=FOnCreate};
	__property TNotifyEvent OnDestroy = {read=FOnDestroy, write=FOnDestroy};
};


enum DECLSPEC_DENUM TActiveXRegType : unsigned char { axrComponentOnly, axrIncludeDescendants };

struct DECLSPEC_DRECORD TIdentMapEntry
{
public:
	int Value;
	System::UnicodeString Name;
};


typedef bool __fastcall (*TIdentToInt)(const System::UnicodeString Ident, int &Int);

typedef bool __fastcall (*TIntToIdent)(int Int, System::UnicodeString &Ident);

typedef TComponent* __fastcall (*TFindGlobalComponent)(const System::UnicodeString Name);

typedef bool __fastcall (*TIsUniqueGlobalComponentName)(const System::UnicodeString Name);

enum DECLSPEC_DENUM TStreamOriginalFormat : unsigned char { sofUnknown, sofBinary, sofText, sofUTF8Text };

typedef void __fastcall (__closure *TWndMethod)(Winapi::Messages::TMessage &Message);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTextReader : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual void __fastcall Close() = 0 ;
	virtual int __fastcall Peek() = 0 ;
	virtual int __fastcall Read() = 0 /* overload */;
#ifndef _WIN64
	virtual int __fastcall Read(System::DynamicArray<System::WideChar> &Buffer, int Index, int Count) = 0 /* overload */;
	virtual int __fastcall ReadBlock(System::DynamicArray<System::WideChar> &Buffer, int Index, int Count) = 0 ;
#else /* _WIN64 */
	virtual int __fastcall Read(System::TArray__1<System::WideChar> &Buffer, int Index, int Count) = 0 /* overload */;
	virtual int __fastcall ReadBlock(System::TArray__1<System::WideChar> &Buffer, int Index, int Count) = 0 ;
#endif /* _WIN64 */
	virtual System::UnicodeString __fastcall ReadLine() = 0 ;
	virtual System::UnicodeString __fastcall ReadToEnd() = 0 ;
	virtual void __fastcall Rewind() = 0 ;
public:
	/* TObject.Create */ inline __fastcall TTextReader() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TTextReader() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTextWriter : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual void __fastcall Close() = 0 ;
	virtual void __fastcall Flush() = 0 ;
	virtual void __fastcall Write(bool Value) = 0 /* overload */;
	virtual void __fastcall Write(System::WideChar Value) = 0 /* overload */;
	virtual void __fastcall Write(System::WideChar Value, int Count)/* overload */;
#ifndef _WIN64
	virtual void __fastcall Write(const System::DynamicArray<System::WideChar> Value) = 0 /* overload */;
#else /* _WIN64 */
	virtual void __fastcall Write(const System::TArray__1<System::WideChar> Value) = 0 /* overload */;
#endif /* _WIN64 */
	virtual void __fastcall Write(double Value) = 0 /* overload */;
	virtual void __fastcall Write(int Value) = 0 /* overload */;
	virtual void __fastcall Write(__int64 Value) = 0 /* overload */;
	virtual void __fastcall Write(System::TObject* Value) = 0 /* overload */;
	virtual void __fastcall Write(float Value) = 0 /* overload */;
	virtual void __fastcall Write(const System::UnicodeString Value) = 0 /* overload */;
	virtual void __fastcall Write(unsigned Value) = 0 /* overload */;
	virtual void __fastcall Write(unsigned __int64 Value) = 0 /* overload */;
	virtual void __fastcall Write(const System::UnicodeString Format, System::TVarRec *Args, const int Args_High) = 0 /* overload */;
#ifndef _WIN64
	virtual void __fastcall Write(const System::DynamicArray<System::WideChar> Value, int Index, int Count) = 0 /* overload */;
#else /* _WIN64 */
	virtual void __fastcall Write(const System::TArray__1<System::WideChar> Value, int Index, int Count) = 0 /* overload */;
#endif /* _WIN64 */
	virtual void __fastcall WriteLine() = 0 /* overload */;
	virtual void __fastcall WriteLine(bool Value) = 0 /* overload */;
	virtual void __fastcall WriteLine(System::WideChar Value) = 0 /* overload */;
#ifndef _WIN64
	virtual void __fastcall WriteLine(const System::DynamicArray<System::WideChar> Value) = 0 /* overload */;
#else /* _WIN64 */
	virtual void __fastcall WriteLine(const System::TArray__1<System::WideChar> Value) = 0 /* overload */;
#endif /* _WIN64 */
	virtual void __fastcall WriteLine(double Value) = 0 /* overload */;
	virtual void __fastcall WriteLine(int Value) = 0 /* overload */;
	virtual void __fastcall WriteLine(__int64 Value) = 0 /* overload */;
	virtual void __fastcall WriteLine(System::TObject* Value) = 0 /* overload */;
	virtual void __fastcall WriteLine(float Value) = 0 /* overload */;
	virtual void __fastcall WriteLine(const System::UnicodeString Value) = 0 /* overload */;
	virtual void __fastcall WriteLine(unsigned Value) = 0 /* overload */;
	virtual void __fastcall WriteLine(unsigned __int64 Value) = 0 /* overload */;
	virtual void __fastcall WriteLine(const System::UnicodeString Format, System::TVarRec *Args, const int Args_High) = 0 /* overload */;
#ifndef _WIN64
	virtual void __fastcall WriteLine(const System::DynamicArray<System::WideChar> Value, int Index, int Count) = 0 /* overload */;
#else /* _WIN64 */
	virtual void __fastcall WriteLine(const System::TArray__1<System::WideChar> Value, int Index, int Count) = 0 /* overload */;
#endif /* _WIN64 */
public:
	/* TObject.Create */ inline __fastcall TTextWriter() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TTextWriter() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBinaryReader : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TStream* FStream;
	System::Sysutils::TEncoding* FEncoding;
	bool FOwnsStream;
	bool FTwoBytesPerChar;
#ifndef _WIN64
	System::DynamicArray<System::Byte> FCharBytes;
	System::DynamicArray<System::WideChar> FOneChar;
#else /* _WIN64 */
	System::TArray__1<System::Byte> FCharBytes;
	System::TArray__1<System::WideChar> FOneChar;
#endif /* _WIN64 */
	int FMaxCharsSize;
	int __fastcall InternalReadChar();
#ifndef _WIN64
	int __fastcall InternalReadChars(const System::DynamicArray<System::WideChar> Chars, int Index, int Count);
#else /* _WIN64 */
	int __fastcall InternalReadChars(const System::TArray__1<System::WideChar> Chars, int Index, int Count);
#endif /* _WIN64 */
	
protected:
	virtual TStream* __fastcall GetBaseStream();
	virtual int __fastcall Read7BitEncodedInt();
	
public:
	__fastcall TBinaryReader(TStream* Stream, System::Sysutils::TEncoding* AEncoding, bool AOwnsStream)/* overload */;
	__fastcall TBinaryReader(const System::UnicodeString Filename, System::Sysutils::TEncoding* Encoding)/* overload */;
	__fastcall virtual ~TBinaryReader();
	virtual void __fastcall Close();
	virtual int __fastcall PeekChar();
	virtual int __fastcall Read()/* overload */;
#ifndef _WIN64
	virtual int __fastcall Read(System::DynamicArray<System::WideChar> &Buffer, int Index, int Count)/* overload */;
	virtual int __fastcall Read(const System::DynamicArray<System::Byte> Buffer, int Index, int Count)/* overload */;
#else /* _WIN64 */
	virtual int __fastcall Read(System::TArray__1<System::WideChar> &Buffer, int Index, int Count)/* overload */;
	virtual int __fastcall Read(const System::TArray__1<System::Byte> Buffer, int Index, int Count)/* overload */;
#endif /* _WIN64 */
	virtual bool __fastcall ReadBoolean();
	virtual System::Byte __fastcall ReadByte();
#ifndef _WIN64
	virtual System::DynamicArray<System::Byte> __fastcall ReadBytes(int Count);
#else /* _WIN64 */
	virtual System::TArray__1<System::Byte> __fastcall ReadBytes(int Count);
#endif /* _WIN64 */
	virtual System::WideChar __fastcall ReadChar();
#ifndef _WIN64
	virtual System::DynamicArray<System::WideChar> __fastcall ReadChars(int Count);
#else /* _WIN64 */
	virtual System::TArray__1<System::WideChar> __fastcall ReadChars(int Count);
#endif /* _WIN64 */
	virtual double __fastcall ReadDouble();
	System::Int8 __fastcall ReadSByte();
	virtual System::Int8 __fastcall ReadShortInt();
	virtual short __fastcall ReadSmallInt();
	short __fastcall ReadInt16();
	virtual int __fastcall ReadInteger();
	int __fastcall ReadInt32();
	virtual __int64 __fastcall ReadInt64();
	virtual float __fastcall ReadSingle();
	virtual System::UnicodeString __fastcall ReadString();
	virtual System::Word __fastcall ReadWord();
	System::Word __fastcall ReadUInt16();
	virtual unsigned __fastcall ReadCardinal();
	unsigned __fastcall ReadUInt32();
	virtual unsigned __int64 __fastcall ReadUInt64();
	__property TStream* BaseStream = {read=GetBaseStream};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBinaryWriter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TStream* FStream;
	bool FOwnsStream;
	System::Sysutils::TEncoding* FEncoding;
	static TBinaryWriter* FNull;
	// __classmethod void __fastcall Destroy@();
	static TBinaryWriter* __fastcall GetNull();
	
protected:
	virtual TStream* __fastcall GetBaseStream();
	virtual void __fastcall Write7BitEncodedInt(int Value);
	__fastcall TBinaryWriter()/* overload */;
	
public:
	__fastcall TBinaryWriter(TStream* Stream)/* overload */;
	__fastcall TBinaryWriter(TStream* Stream, System::Sysutils::TEncoding* Encoding)/* overload */;
	__fastcall TBinaryWriter(TStream* Stream, System::Sysutils::TEncoding* Encoding, bool AOwnsStream)/* overload */;
	__fastcall TBinaryWriter(const System::UnicodeString Filename, bool Append)/* overload */;
	__fastcall TBinaryWriter(const System::UnicodeString Filename, bool Append, System::Sysutils::TEncoding* Encoding)/* overload */;
	__fastcall virtual ~TBinaryWriter();
	virtual void __fastcall Close();
	virtual __int64 __fastcall Seek(const __int64 Offset, TSeekOrigin Origin);
	virtual void __fastcall Write(System::Byte Value)/* overload */;
	virtual void __fastcall Write(bool Value)/* overload */;
	virtual void __fastcall Write(System::WideChar Value)/* overload */;
#ifndef _WIN64
	virtual void __fastcall Write(const System::DynamicArray<System::WideChar> Value)/* overload */;
	virtual void __fastcall Write(const System::DynamicArray<System::Byte> Value)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall Write(const System::TArray__1<System::WideChar> Value)/* overload */;
	virtual void __fastcall Write(const System::TArray__1<System::Byte> Value)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall Write(double Value)/* overload */;
	virtual void __fastcall Write(int Value)/* overload */;
	virtual void __fastcall Write(short Value)/* overload */;
	virtual void __fastcall Write(System::Int8 Value)/* overload */;
	virtual void __fastcall Write(System::Word Value)/* overload */;
	virtual void __fastcall Write(unsigned Value)/* overload */;
	virtual void __fastcall Write(__int64 Value)/* overload */;
	virtual void __fastcall Write(float Value)/* overload */;
	virtual void __fastcall Write(const System::UnicodeString Value)/* overload */;
	virtual void __fastcall Write(unsigned __int64 Value)/* overload */;
#ifndef _WIN64
	virtual void __fastcall Write(const System::DynamicArray<System::WideChar> Value, int Index, int Count)/* overload */;
	virtual void __fastcall Write(const System::DynamicArray<System::Byte> Value, int Index, int Count)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall Write(const System::TArray__1<System::WideChar> Value, int Index, int Count)/* overload */;
	virtual void __fastcall Write(const System::TArray__1<System::Byte> Value, int Index, int Count)/* overload */;
#endif /* _WIN64 */
	__property TStream* BaseStream = {read=GetBaseStream};
	/* static */ __property TBinaryWriter* Null = {read=GetNull};
	
private:
	// __classmethod void __fastcall Create@();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStringReader : public TTextReader
{
	typedef TTextReader inherited;
	
private:
	System::UnicodeString FData;
	int FIndex;
	
public:
	__fastcall TStringReader(System::UnicodeString S);
	virtual void __fastcall Close();
	virtual int __fastcall Peek();
	virtual int __fastcall Read()/* overload */;
#ifndef _WIN64
	virtual int __fastcall Read(System::DynamicArray<System::WideChar> &Buffer, int Index, int Count)/* overload */;
	virtual int __fastcall ReadBlock(System::DynamicArray<System::WideChar> &Buffer, int Index, int Count);
#else /* _WIN64 */
	virtual int __fastcall Read(System::TArray__1<System::WideChar> &Buffer, int Index, int Count)/* overload */;
	virtual int __fastcall ReadBlock(System::TArray__1<System::WideChar> &Buffer, int Index, int Count);
#endif /* _WIN64 */
	virtual System::UnicodeString __fastcall ReadLine();
	virtual System::UnicodeString __fastcall ReadToEnd();
	virtual void __fastcall Rewind();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TStringReader() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStringWriter : public TTextWriter
{
	typedef TTextWriter inherited;
	
private:
	System::Sysutils::TStringBuilder* FBuilder;
	bool FOwnsBuilder;
	
public:
	__fastcall TStringWriter()/* overload */;
	__fastcall TStringWriter(System::Sysutils::TStringBuilder* Builder)/* overload */;
	__fastcall virtual ~TStringWriter();
	virtual void __fastcall Close();
	virtual void __fastcall Flush();
	virtual void __fastcall Write(bool Value)/* overload */;
	virtual void __fastcall Write(System::WideChar Value)/* overload */;
	virtual void __fastcall Write(System::WideChar Value, int Count)/* overload */;
#ifndef _WIN64
	virtual void __fastcall Write(const System::DynamicArray<System::WideChar> Value)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall Write(const System::TArray__1<System::WideChar> Value)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall Write(double Value)/* overload */;
	virtual void __fastcall Write(int Value)/* overload */;
	virtual void __fastcall Write(__int64 Value)/* overload */;
	virtual void __fastcall Write(System::TObject* Value)/* overload */;
	virtual void __fastcall Write(float Value)/* overload */;
	virtual void __fastcall Write(const System::UnicodeString Value)/* overload */;
	virtual void __fastcall Write(unsigned Value)/* overload */;
	virtual void __fastcall Write(unsigned __int64 Value)/* overload */;
	virtual void __fastcall Write(const System::UnicodeString Format, System::TVarRec *Args, const int Args_High)/* overload */;
#ifndef _WIN64
	virtual void __fastcall Write(const System::DynamicArray<System::WideChar> Value, int Index, int Count)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall Write(const System::TArray__1<System::WideChar> Value, int Index, int Count)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall WriteLine()/* overload */;
	virtual void __fastcall WriteLine(bool Value)/* overload */;
	virtual void __fastcall WriteLine(System::WideChar Value)/* overload */;
#ifndef _WIN64
	virtual void __fastcall WriteLine(const System::DynamicArray<System::WideChar> Value)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall WriteLine(const System::TArray__1<System::WideChar> Value)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall WriteLine(double Value)/* overload */;
	virtual void __fastcall WriteLine(int Value)/* overload */;
	virtual void __fastcall WriteLine(__int64 Value)/* overload */;
	virtual void __fastcall WriteLine(System::TObject* Value)/* overload */;
	virtual void __fastcall WriteLine(float Value)/* overload */;
	virtual void __fastcall WriteLine(const System::UnicodeString Value)/* overload */;
	virtual void __fastcall WriteLine(unsigned Value)/* overload */;
	virtual void __fastcall WriteLine(unsigned __int64 Value)/* overload */;
	virtual void __fastcall WriteLine(const System::UnicodeString Format, System::TVarRec *Args, const int Args_High)/* overload */;
#ifndef _WIN64
	virtual void __fastcall WriteLine(const System::DynamicArray<System::WideChar> Value, int Index, int Count)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall WriteLine(const System::TArray__1<System::WideChar> Value, int Index, int Count)/* overload */;
#endif /* _WIN64 */
	virtual System::UnicodeString __fastcall ToString();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStreamWriter : public TTextWriter
{
	typedef TTextWriter inherited;
	
private:
	TStream* FStream;
	System::Sysutils::TEncoding* FEncoding;
	System::UnicodeString FNewLine;
	bool FAutoFlush;
	bool FOwnsStream;
	
protected:
	int FBufferIndex;
#ifndef _WIN64
	System::DynamicArray<System::Byte> FBuffer;
	void __fastcall WriteBytes(System::DynamicArray<System::Byte> Bytes);
#else /* _WIN64 */
	System::TArray__1<System::Byte> FBuffer;
	void __fastcall WriteBytes(System::TArray__1<System::Byte> Bytes);
#endif /* _WIN64 */
	
public:
	__fastcall TStreamWriter(TStream* Stream)/* overload */;
	__fastcall TStreamWriter(TStream* Stream, System::Sysutils::TEncoding* Encoding, int BufferSize)/* overload */;
	__fastcall TStreamWriter(const System::UnicodeString Filename, bool Append)/* overload */;
	__fastcall TStreamWriter(const System::UnicodeString Filename, bool Append, System::Sysutils::TEncoding* Encoding, int BufferSize)/* overload */;
	__fastcall virtual ~TStreamWriter();
	virtual void __fastcall Close();
	virtual void __fastcall Flush();
	void __fastcall OwnStream();
	virtual void __fastcall Write(bool Value)/* overload */;
	virtual void __fastcall Write(System::WideChar Value)/* overload */;
#ifndef _WIN64
	virtual void __fastcall Write(const System::DynamicArray<System::WideChar> Value)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall Write(const System::TArray__1<System::WideChar> Value)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall Write(double Value)/* overload */;
	virtual void __fastcall Write(int Value)/* overload */;
	virtual void __fastcall Write(__int64 Value)/* overload */;
	virtual void __fastcall Write(System::TObject* Value)/* overload */;
	virtual void __fastcall Write(float Value)/* overload */;
	virtual void __fastcall Write(const System::UnicodeString Value)/* overload */;
	virtual void __fastcall Write(unsigned Value)/* overload */;
	virtual void __fastcall Write(unsigned __int64 Value)/* overload */;
	virtual void __fastcall Write(const System::UnicodeString Format, System::TVarRec *Args, const int Args_High)/* overload */;
#ifndef _WIN64
	virtual void __fastcall Write(const System::DynamicArray<System::WideChar> Value, int Index, int Count)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall Write(const System::TArray__1<System::WideChar> Value, int Index, int Count)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall WriteLine()/* overload */;
	virtual void __fastcall WriteLine(bool Value)/* overload */;
	virtual void __fastcall WriteLine(System::WideChar Value)/* overload */;
#ifndef _WIN64
	virtual void __fastcall WriteLine(const System::DynamicArray<System::WideChar> Value)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall WriteLine(const System::TArray__1<System::WideChar> Value)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall WriteLine(double Value)/* overload */;
	virtual void __fastcall WriteLine(int Value)/* overload */;
	virtual void __fastcall WriteLine(__int64 Value)/* overload */;
	virtual void __fastcall WriteLine(System::TObject* Value)/* overload */;
	virtual void __fastcall WriteLine(float Value)/* overload */;
	virtual void __fastcall WriteLine(const System::UnicodeString Value)/* overload */;
	virtual void __fastcall WriteLine(unsigned Value)/* overload */;
	virtual void __fastcall WriteLine(unsigned __int64 Value)/* overload */;
	virtual void __fastcall WriteLine(const System::UnicodeString Format, System::TVarRec *Args, const int Args_High)/* overload */;
#ifndef _WIN64
	virtual void __fastcall WriteLine(const System::DynamicArray<System::WideChar> Value, int Index, int Count)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall WriteLine(const System::TArray__1<System::WideChar> Value, int Index, int Count)/* overload */;
#endif /* _WIN64 */
	__property bool AutoFlush = {read=FAutoFlush, write=FAutoFlush, nodefault};
	__property System::UnicodeString NewLine = {read=FNewLine, write=FNewLine};
	__property System::Sysutils::TEncoding* Encoding = {read=FEncoding};
	__property TStream* BaseStream = {read=FStream};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Write(System::WideChar Value, int Count){ TTextWriter::Write(Value, Count); }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStreamReader : public TTextReader
{
	typedef TTextReader inherited;
	
	
private:
	class DELPHICLASS TBufferedData;
	class PASCALIMPLEMENTATION TBufferedData : public System::Sysutils::TStringBuilder
	{
		typedef System::Sysutils::TStringBuilder inherited;
		
	private:
		int FStart;
		int FBufferSize;
		HIDESBASE System::WideChar __fastcall GetChars(int AIndex);
		
	public:
		__fastcall TBufferedData(int ABufferSize);
		HIDESBASE void __fastcall Clear();
		HIDESBASE int __fastcall Length();
		System::WideChar __fastcall PeekChar();
		System::WideChar __fastcall MoveChar();
#ifndef _WIN64
		void __fastcall MoveArray(int DestinationIndex, int Count, System::DynamicArray<System::WideChar> &Destination);
#else /* _WIN64 */
		void __fastcall MoveArray(int DestinationIndex, int Count, System::TArray__1<System::WideChar> &Destination);
#endif /* _WIN64 */
		void __fastcall MoveString(int Count, int NewPos, System::UnicodeString &Destination);
		void __fastcall TrimBuffer();
		__property System::WideChar Chars[int AIndex] = {read=GetChars};
	public:
		/* TObject.Destroy */ inline __fastcall virtual ~TBufferedData() { }
		
	};
	
	
	
private:
	int FBufferSize;
	bool FDetectBOM;
	System::Sysutils::TEncoding* FEncoding;
	bool FOwnsStream;
	bool FSkipPreamble;
	TStream* FStream;
#ifndef _WIN64
	int __fastcall DetectBOM(System::Sysutils::TEncoding* &Encoding, System::DynamicArray<System::Byte> Buffer);
#else /* _WIN64 */
	int __fastcall DetectBOM(System::Sysutils::TEncoding* &Encoding, System::TArray__1<System::Byte> Buffer);
#endif /* _WIN64 */
	bool __fastcall GetEndOfStream();
#ifndef _WIN64
	int __fastcall SkipPreamble(System::Sysutils::TEncoding* Encoding, System::DynamicArray<System::Byte> Buffer);
#else /* _WIN64 */
	int __fastcall SkipPreamble(System::Sysutils::TEncoding* Encoding, System::TArray__1<System::Byte> Buffer);
#endif /* _WIN64 */
	
protected:
	TBufferedData* FBufferedData;
	bool FNoDataInStream;
	void __fastcall FillBuffer(System::Sysutils::TEncoding* &Encoding);
	
public:
	__fastcall TStreamReader(TStream* Stream)/* overload */;
	__fastcall TStreamReader(TStream* Stream, bool DetectBOM)/* overload */;
	__fastcall TStreamReader(TStream* Stream, System::Sysutils::TEncoding* Encoding, bool DetectBOM, int BufferSize)/* overload */;
	__fastcall TStreamReader(const System::UnicodeString Filename)/* overload */;
	__fastcall TStreamReader(const System::UnicodeString Filename, bool DetectBOM)/* overload */;
	__fastcall TStreamReader(const System::UnicodeString Filename, System::Sysutils::TEncoding* Encoding, bool DetectBOM, int BufferSize)/* overload */;
	__fastcall virtual ~TStreamReader();
	virtual void __fastcall Close();
	void __fastcall DiscardBufferedData();
	void __fastcall OwnStream();
	virtual int __fastcall Peek();
	virtual int __fastcall Read()/* overload */;
#ifndef _WIN64
	virtual int __fastcall Read(System::DynamicArray<System::WideChar> &Buffer, int Index, int Count)/* overload */;
	virtual int __fastcall ReadBlock(System::DynamicArray<System::WideChar> &Buffer, int Index, int Count);
#else /* _WIN64 */
	virtual int __fastcall Read(System::TArray__1<System::WideChar> &Buffer, int Index, int Count)/* overload */;
	virtual int __fastcall ReadBlock(System::TArray__1<System::WideChar> &Buffer, int Index, int Count);
#endif /* _WIN64 */
	virtual System::UnicodeString __fastcall ReadLine();
	virtual System::UnicodeString __fastcall ReadToEnd();
	virtual void __fastcall Rewind();
	__property TStream* BaseStream = {read=FStream};
	__property System::Sysutils::TEncoding* CurrentEncoding = {read=FEncoding};
	__property bool EndOfStream = {read=GetEndOfStream, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ELoginCredentialError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ELoginCredentialError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ELoginCredentialError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ELoginCredentialError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ELoginCredentialError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ELoginCredentialError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ELoginCredentialError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ELoginCredentialError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ELoginCredentialError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ELoginCredentialError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ELoginCredentialError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ELoginCredentialError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ELoginCredentialError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ELoginCredentialError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TLoginCredentialService : /*[[sealed]]*/ public System::TObject
{
	typedef System::TObject inherited;
	
	
public:
	__interface DELPHIINTERFACE TLoginFunc;
	typedef System::DelphiInterface<TLoginFunc> _di_TLoginFunc;
	__interface TLoginFunc  : public System::IInterface 
	{
		virtual bool __fastcall Invoke(const System::UnicodeString Username, const System::UnicodeString Password, const System::UnicodeString Domain) = 0 ;
	};
	
	typedef void __fastcall (__closure *TLoginEvent)(System::TObject* Sender, const System::UnicodeString Username, const System::UnicodeString Password, const System::UnicodeString Domain, bool &Handled);
	
	typedef void __fastcall (__closure *TLoginCredentialEvent)(System::TObject* Sender, TLoginEvent Callback, bool &Success);
	
	
private:
	class DELPHICLASS TLoginCredentialEventObject;
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TLoginCredentialEventObject : public System::TObject
	{
		typedef System::TObject inherited;
		
	public:
		TLoginCredentialService::TLoginCredentialEvent Handler;
		__fastcall TLoginCredentialEventObject(const TLoginCredentialService::TLoginCredentialEvent NewHandler);
	public:
		/* TObject.Destroy */ inline __fastcall virtual ~TLoginCredentialEventObject() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	class DELPHICLASS TLoginFuncProxy;
	class PASCALIMPLEMENTATION TLoginFuncProxy : public System::TObject
	{
		typedef System::TObject inherited;
		
	private:
		TLoginCredentialService::_di_TLoginFunc FLoginFunc;
		void __fastcall LoginEvent(System::TObject* Sender, const System::UnicodeString Username, const System::UnicodeString Password, const System::UnicodeString Domain, bool &Handled);
		
	public:
		__fastcall TLoginFuncProxy(const TLoginCredentialService::_di_TLoginFunc ALoginFunc);
	public:
		/* TObject.Destroy */ inline __fastcall virtual ~TLoginFuncProxy() { }
		
	};
	
	
	
public:
	#define TLoginCredentialService_Default L""
	
	#define TLoginCredentialService_DefaultUsrPw L"DefaultUsrPw"
	
	#define TLoginCredentialService_DefaultUsrPwDm L"DefaultUsrPwDm"
	
	
private:
	static TStringList* FLoginHandlers;
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	__classmethod int __fastcall IndexOfHandler(const TLoginCredentialEvent Context);
	
public:
	static void __fastcall RegisterLoginHandler(const System::UnicodeString Context, const TLoginCredentialEvent HandlerEvent);
	static void __fastcall UnregisterLoginHandler(const System::UnicodeString Context, const TLoginCredentialEvent HandlerEvent);
	static TLoginCredentialEvent __fastcall GetLoginCredentialEvent(const System::UnicodeString Context);
	static bool __fastcall GetLoginCredentials(const System::UnicodeString Context, System::TObject* Sender, const TLoginEvent Callback)/* overload */;
	static bool __fastcall GetLoginCredentials(const System::UnicodeString Context, const _di_TLoginFunc Callback)/* overload */;
	static bool __fastcall GetLoginCredentials(const System::UnicodeString Context, System::UnicodeString &Username, System::UnicodeString &Password)/* overload */;
	static bool __fastcall GetLoginCredentials(const System::UnicodeString Context, System::UnicodeString &Username, System::UnicodeString &Password, System::UnicodeString &Domain)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TLoginCredentialService() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TLoginCredentialService() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface TPostFoundCycleProc  : public System::IInterface 
{
	virtual void __fastcall Invoke(const System::UnicodeString ClassName, NativeInt Reference, System::Generics::Collections::TStack__1<NativeInt>* const Stack) = 0 ;
};

class PASCALIMPLEMENTATION TProxySubrangeStream : public TStream
{
	typedef TStream inherited;
	
private:
	TStream* FStream;
	__int64 FOffset;
	__int64 FSize;
	
protected:
	virtual __int64 __fastcall GetSize();
	
public:
	__fastcall TProxySubrangeStream(TStream* Stream, __int64 Offset, __int64 Size);
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, TSeekOrigin Origin)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TProxySubrangeStream() { }
	
	/* Hoisted overloads: */
	
public:
#ifndef _WIN64
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return TStream::Write(Buffer, Count); }
#else /* _WIN64 */
	inline int __fastcall  Read(System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::TArray__1<System::Byte> &Buffer, int Count){ return TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Count){ return TStream::Write(Buffer, Count); }
#endif /* _WIN64 */
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Word Origin){ return TStream::Seek(Offset, Origin); }
	
};


//-- var, const, procedure ---------------------------------------------------
static const int MaxListSize _DEPRECATED_ATTRIBUTE0  = int(0x7ffffff);
static const System::Int8 soFromBeginning = System::Int8(0x0);
static const System::Int8 soFromCurrent = System::Int8(0x1);
static const System::Int8 soFromEnd = System::Int8(0x2);
static const System::Word fmCreate = System::Word(0xff00);
static const System::WideChar toEOF = (System::WideChar)(0x0);
static const System::WideChar toSymbol = (System::WideChar)(0x1);
static const System::WideChar toString = (System::WideChar)(0x2);
static const System::WideChar toInteger = (System::WideChar)(0x3);
static const System::WideChar toFloat = (System::WideChar)(0x4);
static const System::WideChar toWString = (System::WideChar)(0x5);
static const System::Word scCommand = System::Word(0x1000);
static const System::Word scShift = System::Word(0x2000);
static const System::Word scCtrl = System::Word(0x4000);
static const System::Word scAlt = System::Word(0x8000);
static const System::Int8 scNone = System::Int8(0x0);
static const System::Int8 pidWin32 = System::Int8(0x1);
static const System::Int8 pidWin64 = System::Int8(0x2);
static const System::Int8 pidOSX32 = System::Int8(0x4);
static const System::Int8 pidiOSSimulator32 = System::Int8(0x8);
static const System::Int8 pidiOSSimulator _DEPRECATED_ATTRIBUTE1("Use pidiOSSimulator32")  = System::Int8(0x8);
static const System::Int8 pidAndroidArm32 = System::Int8(0x10);
static const System::Int8 pidAndroid32Arm _DEPRECATED_ATTRIBUTE1("Use pidAndroidArm32")  = System::Int8(0x10);
static const System::Int8 pidAndroid _DEPRECATED_ATTRIBUTE1("Use pidAndroidArm32")  = System::Int8(0x10);
static const System::Int8 pidLinux32 = System::Int8(0x20);
static const System::Int8 pidiOSDevice32 = System::Int8(0x40);
static const System::Int8 pidiOSDevice _DEPRECATED_ATTRIBUTE1("Use pidiOSDevice32")  = System::Int8(0x40);
static const System::Byte pidLinux64 = System::Byte(0x80);
static const System::Word pidWinNX32 = System::Word(0x100);
static const System::Word pidWinIoT32 = System::Word(0x200);
static const System::Word pidiOSDevice64 = System::Word(0x400);
static const System::Word pidWinARM32 = System::Word(0x800);
static const System::Word pidWin32ARM _DEPRECATED_ATTRIBUTE1("Use pidWinARM32")  = System::Word(0x800);
static const System::Word pidOSX64 = System::Word(0x1000);
static const System::Word pidLinuxArm32 = System::Word(0x2000);
static const System::Word pidLinuxArm64 = System::Word(0x4000);
static const System::Word pidAndroidArm64 = System::Word(0x8000);
static const System::Word pidAndroid64Arm _DEPRECATED_ATTRIBUTE1("Use pidAndroidArm64")  = System::Word(0x8000);
static const int pidiOSSimulator64 = int(0x10000);
static const int pidOSXArm64 = int(0x20000);
static const int pidWinArm64 = int(0x40000);
static const int pidiOSSimulatorArm64 = int(0x80000);
static const int pidAllPlatforms = int(0x394df);
static const System::Int8 pfidWindows = System::Int8(0x3);
static const int pfidOSX = int(0x21004);
static const int pfidiOS = int(0x10448);
static const System::Word pfidAndroid = System::Word(0x8010);
static const System::Byte pfidLinux = System::Byte(0x80);
static const System::Types::TDuplicates dupIgnore = (System::Types::TDuplicates)(0);
static const System::Types::TDuplicates dupAccept = (System::Types::TDuplicates)(1);
static const System::Types::TDuplicates dupError = (System::Types::TDuplicates)(2);
extern DELPHI_PACKAGE void __fastcall (__closure *AddDataModule)(TDataModule* DataModule);
extern DELPHI_PACKAGE void __fastcall (__closure *RemoveDataModule)(TDataModule* DataModule);
extern DELPHI_PACKAGE void __fastcall (__closure *ApplicationHandleException)(System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall (__closure *ApplicationShowException)(System::Sysutils::Exception* E);
extern DELPHI_PACKAGE void __fastcall (*RegisterComponentsProc)(const System::UnicodeString Page, TComponentClass const *ComponentClasses, const int ComponentClasses_High);
extern DELPHI_PACKAGE void __fastcall (*RegisterNoIconProc)(TComponentClass const *ComponentClasses, const int ComponentClasses_High);
extern DELPHI_PACKAGE int CurrentGroup;
extern DELPHI_PACKAGE void __fastcall (*RegisterNonActiveXProc)(TComponentClass const *ComponentClasses, const int ComponentClasses_High, TActiveXRegType AxRegType);
extern DELPHI_PACKAGE void __fastcall (*CreateVCLComObjectProc)(TComponent* Component);
extern DELPHI_PACKAGE System::Sysutils::_di_IReadWriteSync GlobalNameSpace;
extern DELPHI_PACKAGE TIsUniqueGlobalComponentName IsUniqueGlobalComponentNameProc;
extern DELPHI_PACKAGE TNotifyEvent WakeMainThread;
extern DELPHI_PACKAGE NativeUInt SyncEvent;
static const System::Generics::Collections::TCollectionNotification cnAdding = (System::Generics::Collections::TCollectionNotification)(0);
static const System::Generics::Collections::TCollectionNotification cnAdded = (System::Generics::Collections::TCollectionNotification)(1);
static const System::Generics::Collections::TCollectionNotification cnExtracting = (System::Generics::Collections::TCollectionNotification)(2);
static const System::Generics::Collections::TCollectionNotification cnExtracted = (System::Generics::Collections::TCollectionNotification)(3);
static const System::Generics::Collections::TCollectionNotification cnDeleting = (System::Generics::Collections::TCollectionNotification)(4);
static const System::Generics::Collections::TCollectionNotification cnRemoved = (System::Generics::Collections::TCollectionNotification)(5);
extern DELPHI_PACKAGE System::Types::TPoint __fastcall Point(int AX, int AY);
extern DELPHI_PACKAGE System::Types::TSmallPoint __fastcall SmallPoint(short AX, short AY);
extern DELPHI_PACKAGE bool __fastcall PointsEqual(const System::Types::TPoint &P1, const System::Types::TPoint &P2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall PointsEqual(const System::Types::TSmallPoint P1, const System::Types::TSmallPoint P2)/* overload */;
extern DELPHI_PACKAGE System::Types::TRect __fastcall Rect(int ALeft, int ATop, int ARight, int ABottom)/* overload */;
extern DELPHI_PACKAGE System::Types::TRect __fastcall Rect(const System::Types::TPoint &ATopLeft, const System::Types::TPoint &ABottomRight)/* overload */;
extern DELPHI_PACKAGE System::Types::TRect __fastcall Bounds(int ALeft, int ATop, int AWidth, int AHeight);
extern DELPHI_PACKAGE bool __fastcall InvalidPoint(int X, int Y)/* overload */;
extern DELPHI_PACKAGE bool __fastcall InvalidPoint(const System::Types::TPoint &At)/* overload */;
extern DELPHI_PACKAGE bool __fastcall InvalidPoint(const System::Types::TSmallPoint At)/* overload */;
extern DELPHI_PACKAGE TPersistentClass __fastcall GetClass(const System::UnicodeString AClassName);
extern DELPHI_PACKAGE TPersistentClass __fastcall FindClass(const System::UnicodeString ClassName);
extern DELPHI_PACKAGE void __fastcall RegisterClass(TPersistentClass AClass);
extern DELPHI_PACKAGE void __fastcall RegisterClasses(TPersistentClass const *AClasses, const int AClasses_High);
extern DELPHI_PACKAGE void __fastcall RegisterClassAlias(TPersistentClass AClass, const System::UnicodeString Alias);
extern DELPHI_PACKAGE void __fastcall UnRegisterClass(TPersistentClass AClass);
extern DELPHI_PACKAGE void __fastcall UnRegisterClasses(TPersistentClass const *AClasses, const int AClasses_High);
extern DELPHI_PACKAGE void __fastcall UnRegisterModuleClasses(NativeUInt Module);
extern DELPHI_PACKAGE void __fastcall StartClassGroup(TPersistentClass AClass);
extern DELPHI_PACKAGE void __fastcall GroupDescendentsWith(TPersistentClass AClass, TPersistentClass AClassGroup);
extern DELPHI_PACKAGE TPersistentClass __fastcall ActivateClassGroup(TPersistentClass AClass);
extern DELPHI_PACKAGE TPersistentClass __fastcall ActiveClassGroup(void);
extern DELPHI_PACKAGE TPersistentClass __fastcall ClassGroupOf(TPersistentClass AClass)/* overload */;
extern DELPHI_PACKAGE TPersistentClass __fastcall ClassGroupOf(TPersistent* Instance)/* overload */;
extern DELPHI_PACKAGE void __fastcall ReportClassGroups(TStrings* Report);
extern DELPHI_PACKAGE void __fastcall RegisterComponents(const System::UnicodeString Page, TComponentClass *ComponentClasses, const int ComponentClasses_High);
extern DELPHI_PACKAGE void __fastcall RegisterNoIcon(TComponentClass const *ComponentClasses, const int ComponentClasses_High);
extern DELPHI_PACKAGE void __fastcall RegisterNonActiveX(TComponentClass const *ComponentClasses, const int ComponentClasses_High, TActiveXRegType AxRegType);
extern DELPHI_PACKAGE void __fastcall RegisterIntegerConsts(void * AIntegerType, TIdentToInt AIdentToInt, TIntToIdent AIntToIdent);
extern DELPHI_PACKAGE void __fastcall UnregisterIntegerConsts(void * AIntegerType, TIdentToInt AIdentToInt, TIntToIdent AIntToIdent);
extern DELPHI_PACKAGE TIntToIdent __fastcall FindIntToIdent(void * AIntegerType);
extern DELPHI_PACKAGE TIdentToInt __fastcall FindIdentToInt(void * AIntegerType);
extern DELPHI_PACKAGE bool __fastcall IdentToInt(const System::UnicodeString Ident, int &Int, const TIdentMapEntry *Map, const int Map_High);
extern DELPHI_PACKAGE bool __fastcall IntToIdent(int Int, System::UnicodeString &Ident, const TIdentMapEntry *Map, const int Map_High);
extern DELPHI_PACKAGE void __fastcall RegisterFindGlobalComponentProc(TFindGlobalComponent AFindGlobalComponent);
extern DELPHI_PACKAGE void __fastcall UnregisterFindGlobalComponentProc(TFindGlobalComponent AFindGlobalComponent);
extern DELPHI_PACKAGE TComponent* __fastcall FindGlobalComponent(const System::UnicodeString Name);
extern DELPHI_PACKAGE bool __fastcall IsUniqueGlobalComponentName(const System::UnicodeString Name);
extern DELPHI_PACKAGE void * __fastcall GetComponentFieldAddress(TComponent* const Instance, const System::UnicodeString Name);
extern DELPHI_PACKAGE void __fastcall SetComponentFieldAddressCache(bool Clear, int MaxClassesInCache);
extern DELPHI_PACKAGE void __fastcall BeginGlobalLoading(void);
extern DELPHI_PACKAGE void __fastcall NotifyGlobalLoading(void);
extern DELPHI_PACKAGE void __fastcall EndGlobalLoading(void);
extern DELPHI_PACKAGE bool __fastcall InitInheritedComponent(TComponent* Instance, System::TClass RootAncestor);
extern DELPHI_PACKAGE TComponent* __fastcall ReadComponentDeltaRes(TComponent* Instance, const System::UnicodeString *DeltaCandidates, const int DeltaCandidates_High, const TGetStreamProc Proc);
extern DELPHI_PACKAGE bool __fastcall InitComponentRes(const System::UnicodeString ResName, TComponent* Instance);
extern DELPHI_PACKAGE TComponent* __fastcall ReadComponentRes(const System::UnicodeString ResName, TComponent* Instance);
extern DELPHI_PACKAGE TComponent* __fastcall ReadComponentResEx(NativeUInt HInstance, const System::UnicodeString ResName);
extern DELPHI_PACKAGE TComponent* __fastcall ReadComponentResFile(const System::UnicodeString FileName, TComponent* const Instance);
extern DELPHI_PACKAGE void __fastcall WriteComponentResFile(const System::UnicodeString FileName, TComponent* const Instance);
extern DELPHI_PACKAGE bool __fastcall CollectionsEqual(TCollection* const C1, TCollection* const C2, TComponent* const Owner1, TComponent* const Owner2);
#ifndef _WIN64
extern DELPHI_PACKAGE NativeInt __fastcall LineStart(const System::DynamicArray<System::Byte> Buffer, NativeInt BufPos)/* overload */;
#else /* _WIN64 */
extern DELPHI_PACKAGE NativeInt __fastcall LineStart(const System::TArray__1<System::Byte> Buffer, NativeInt BufPos)/* overload */;
#endif /* _WIN64 */
extern DELPHI_PACKAGE char * __fastcall LineStart(char * Buffer, char * BufPos)/* overload */;
extern DELPHI_PACKAGE System::WideChar * __fastcall LineStart(System::WideChar * Buffer, System::WideChar * BufPos)/* overload */;
extern DELPHI_PACKAGE int __fastcall ExtractStrings(const System::Sysutils::TSysCharSet &Separators, const System::Sysutils::TSysCharSet &WhiteSpace, System::WideChar * Content, TStrings* Strings);
extern DELPHI_PACKAGE _di_IDesignerNotify __fastcall FindRootDesigner(TPersistent* Obj);
extern DELPHI_PACKAGE int __fastcall CountGenerations(System::TClass Ancestor, System::TClass Descendent);
extern DELPHI_PACKAGE TPersistent* __fastcall GetUltimateOwner(TCollectionItem* const ACollectionItem)/* overload */;
extern DELPHI_PACKAGE TPersistent* __fastcall GetUltimateOwner(TCollection* const ACollection)/* overload */;
extern DELPHI_PACKAGE TPersistent* __fastcall GetUltimateOwner(TPersistent* const APersistent)/* overload */;
extern DELPHI_PACKAGE TComponent* __fastcall FindNestedComponent(TComponent* const Root, const System::UnicodeString NamePath);
extern DELPHI_PACKAGE void __fastcall GlobalFixupReferences(void);
extern DELPHI_PACKAGE void __fastcall GetFixupReferenceNames(TComponent* const Root, TStrings* const Names);
extern DELPHI_PACKAGE void __fastcall RedirectFixupReferences(TComponent* const Root, const System::UnicodeString OldRootName, const System::UnicodeString NewRootName);
extern DELPHI_PACKAGE void __fastcall RemoveFixupReferences(TComponent* const Root, const System::UnicodeString RootName);
extern DELPHI_PACKAGE void __fastcall RemoveFixups(TPersistent* const Instance);
extern DELPHI_PACKAGE void __fastcall GetFixupInstanceNames(TComponent* const Root, const System::UnicodeString ReferenceRootName, TStrings* Names);
extern DELPHI_PACKAGE bool __fastcall AncestorIsValid(TPersistent* const Ancestor, TComponent* const Root, TComponent* const RootAncestor);
extern DELPHI_PACKAGE bool __fastcall IsDefaultPropertyValue(System::TObject* const Instance, System::Typinfo::PPropInfo PropInfo, TGetLookupInfoEvent OnGetLookupInfo, TWriter* Writer = (TWriter*)(0x0), TFindMethodNameEvent OnFindMethodName = 0x0);
#ifndef _WIN64
extern DELPHI_PACKAGE void __fastcall BinToHex(const System::DynamicArray<System::Byte> Buffer, int BufOffset, System::DynamicArray<System::Byte> &Text, int TextOffset, int Count)/* overload */;
extern DELPHI_PACKAGE int __fastcall HexToBin(const System::WideChar * Text, int TextOffset, System::DynamicArray<System::Byte> &Buffer, int BufOffset, int Count)/* overload */;
extern DELPHI_PACKAGE int __fastcall HexToBin(const System::DynamicArray<System::Byte> Text, int TextOffset, System::DynamicArray<System::Byte> &Buffer, int BufOffset, int Count)/* overload */;
#else /* _WIN64 */
extern DELPHI_PACKAGE void __fastcall BinToHex(const System::TArray__1<System::Byte> Buffer, int BufOffset, System::TArray__1<System::Byte> &Text, int TextOffset, int Count)/* overload */;
extern DELPHI_PACKAGE int __fastcall HexToBin(const System::WideChar * Text, int TextOffset, System::TArray__1<System::Byte> &Buffer, int BufOffset, int Count)/* overload */;
extern DELPHI_PACKAGE int __fastcall HexToBin(const System::TArray__1<System::Byte> Text, int TextOffset, System::TArray__1<System::Byte> &Buffer, int BufOffset, int Count)/* overload */;
#endif /* _WIN64 */
extern DELPHI_PACKAGE void __fastcall BinToHex(void * Buffer, System::WideChar * Text, int BufSize)/* overload */;
extern DELPHI_PACKAGE void __fastcall BinToHex(const void *Buffer, System::WideChar * Text, int BufSize)/* overload */;
extern DELPHI_PACKAGE int __fastcall HexToBin(System::WideChar * Text, void * Buffer, int BufSize)/* overload */;
extern DELPHI_PACKAGE int __fastcall HexToBin(const System::WideChar * Text, void *Buffer, int BufSize)/* overload */;
extern DELPHI_PACKAGE void __fastcall BinToHex(char * Buffer, char * Text, int BufSize)/* overload */;
extern DELPHI_PACKAGE void __fastcall BinToHex(char * Buffer, System::WideChar * Text, int BufSize)/* overload */;
extern DELPHI_PACKAGE void __fastcall BinToHex(const void *Buffer, char * Text, int BufSize)/* overload */;
extern DELPHI_PACKAGE void __fastcall BinToHex(void * Buffer, char * Text, int BufSize)/* overload */;
extern DELPHI_PACKAGE int __fastcall HexToBin(char * Text, char * Buffer, int BufSize)/* overload */;
extern DELPHI_PACKAGE int __fastcall HexToBin(System::WideChar * Text, char * Buffer, int BufSize)/* overload */;
extern DELPHI_PACKAGE int __fastcall HexToBin(char * Text, void *Buffer, int BufSize)/* overload */;
extern DELPHI_PACKAGE int __fastcall HexToBin(const char * Text, void * Buffer, int BufSize)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall SwapHexEndianness(const System::UnicodeString Text);
extern DELPHI_PACKAGE void __fastcall ObjectBinaryToText(TStream* const Input, TStream* const Output)/* overload */;
extern DELPHI_PACKAGE void __fastcall ObjectBinaryToText(TStream* const Input, TStream* const Output, TStreamOriginalFormat &OriginalFormat)/* overload */;
extern DELPHI_PACKAGE void __fastcall ObjectTextToBinary(TStream* const Input, TStream* const Output)/* overload */;
extern DELPHI_PACKAGE void __fastcall ObjectTextToBinary(TStream* const Input, TStream* const Output, TStreamOriginalFormat &OriginalFormat)/* overload */;
extern DELPHI_PACKAGE void __fastcall ObjectResourceToText(TStream* const Input, TStream* const Output)/* overload */;
extern DELPHI_PACKAGE void __fastcall ObjectResourceToText(TStream* const Input, TStream* const Output, TStreamOriginalFormat &OriginalFormat)/* overload */;
extern DELPHI_PACKAGE void __fastcall ObjectTextToResource(TStream* const Input, TStream* const Output, const System::UnicodeString Name = System::UnicodeString())/* overload */;
extern DELPHI_PACKAGE void __fastcall ObjectTextToResource(TStream* const Input, TStream* const Output, TStreamOriginalFormat &OriginalFormat, const System::UnicodeString Name = System::UnicodeString())/* overload */;
extern DELPHI_PACKAGE TStreamOriginalFormat __fastcall TestStreamFormat(TStream* const Stream);
extern DELPHI_PACKAGE bool __fastcall GetResourceName(TStream* const ObjStream, System::UnicodeString &AName);
extern DELPHI_PACKAGE void __fastcall WriteObjectResourceHeader(TStream* const ObjStream, TStream* const Output, const System::UnicodeString Name = System::UnicodeString());
#ifndef _WIN64
extern DELPHI_PACKAGE void __fastcall Write16bitResourceHeader(const System::DynamicArray<System::Byte> AName, int DataSize, TStream* const Output);
extern DELPHI_PACKAGE void __fastcall Write32bitResourceHeader(const System::DynamicArray<System::Byte> AName, int DataSize, TStream* const Output);
#else /* _WIN64 */
extern DELPHI_PACKAGE void __fastcall Write16bitResourceHeader(const System::TArray__1<System::Byte> AName, int DataSize, TStream* const Output);
extern DELPHI_PACKAGE void __fastcall Write32bitResourceHeader(const System::TArray__1<System::Byte> AName, int DataSize, TStream* const Output);
#endif /* _WIN64 */
extern DELPHI_PACKAGE bool __fastcall CheckSynchronize(int Timeout = 0x0);
extern DELPHI_PACKAGE void * __fastcall MakeObjectInstance(const TWndMethod AMethod);
extern DELPHI_PACKAGE void __fastcall FreeObjectInstance(void * ObjectInstance);
extern DELPHI_PACKAGE HWND __fastcall AllocateHWnd(const TWndMethod AMethod);
extern DELPHI_PACKAGE void __fastcall DeallocateHWnd(HWND Wnd);
extern DELPHI_PACKAGE void __fastcall CheckForCycles(System::TObject* const Obj, const _di_TPostFoundCycleProc PostFoundCycle)/* overload */;
extern DELPHI_PACKAGE void __fastcall CheckForCycles(const System::_di_IInterface Intf, const _di_TPostFoundCycleProc PostFoundCycle)/* overload */;
}	/* namespace Classes */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_CLASSES)
using namespace System::Classes;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_ClassesHPP
