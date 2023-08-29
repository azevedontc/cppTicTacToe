// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SysInit.pas' rev: 35.00 (Windows)

#ifndef SysinitHPP
#define SysinitHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>

//-- user supplied -----------------------------------------------------------
namespace Sysinit
{
extern PACKAGE HINSTANCE HInstance;
} /* namespace Sysinit */

namespace Sysinit
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool ModuleIsLib;
extern DELPHI_PACKAGE bool ModuleIsPackage;
extern DELPHI_PACKAGE bool ModuleIsCpp;
extern DELPHI_PACKAGE unsigned TlsIndex;
extern DELPHI_PACKAGE System::Byte TlsLast;
extern DELPHI_PACKAGE System::TDLLProc DllProc;
extern DELPHI_PACKAGE System::TDLLProcEx DllProcEx;
extern DELPHI_PACKAGE int DataMark;
extern DELPHI_PACKAGE System::StaticArray<char, 129> CoverageLibraryName;
extern DELPHI_PACKAGE void *dbkFCallWrapperAddr;
extern DELPHI_PACKAGE void *PtrToNil;
#ifdef _WIN64
extern DELPHI_PACKAGE void *FSSegBase;
extern DELPHI_PACKAGE void *GSSegBase;
#endif /* _WIN64 */
extern DELPHI_PACKAGE void *UnloadDelayLoadedDLLPtr;
extern DELPHI_PACKAGE void *DelayLoadHelper;
extern DELPHI_PACKAGE void *pfnDliNotifyHook;
extern DELPHI_PACKAGE void *pfnDliFailureHook;
extern DELPHI_PACKAGE void *HrLoadAllImportsForDll;
extern DELPHI_PACKAGE void __stdcall UnloadDelayLoadedDLL2(char * szDll);
extern DELPHI_PACKAGE void __stdcall LoadAllImportsForDll(char * szDll);
#ifndef _WIN64
extern DELPHI_PACKAGE void __cdecl VclInit(bool isDLL, bool isPkg, int hInst, bool isGui);
#else /* _WIN64 */
extern DELPHI_PACKAGE void __cdecl VclInit(bool isDLL, bool isPkg, NativeUInt hInst, bool isGui);
#endif /* _WIN64 */
extern DELPHI_PACKAGE void __cdecl VclExit();
}	/* namespace Sysinit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSINIT)
using namespace Sysinit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SysinitHPP
