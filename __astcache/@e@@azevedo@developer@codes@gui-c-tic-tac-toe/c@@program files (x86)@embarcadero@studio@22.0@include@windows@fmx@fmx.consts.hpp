// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Consts.pas' rev: 35.00 (Windows)

#ifndef Fmx_ConstsHPP
#define Fmx_ConstsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Math.Vectors.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Consts
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
#define StyleDescriptionName L"Description"
#define SMainItemStyle L"menubaritemstyle"
#define SSeparatorStyle L"menuseparatorstyle"
#define SMenuBarDisplayName L"Menu Bar"
#define SMenuAppDisplayName L"Menu Application"
#define SBMPImageExtension L".bmp"
#define SJPGImageExtension L".jpg"
#define SJPEGImageExtension L".jpeg"
#define SJP2ImageExtension L".jp2"
#define SPNGImageExtension L".png"
#define SGIFImageExtension L".gif"
#define STIFImageExtension L".tif"
#define STIFFImageExtension L".tiff"
#define SICOImageExtension L".ico"
#define SHDPImageExtension L".hdp"
#define SWMPImageExtension L".wmp"
#define STGAImageExtension L".tga"
#define SICNSImageExtension L".icns"
extern DELPHI_PACKAGE System::UnicodeString GlobalDisableStylusGestures;
extern DELPHI_PACKAGE System::UnicodeString EnableGlassFPSWorkaround;
extern DELPHI_PACKAGE int FormUseDefaultPosition;
static const System::Word CommandQShortCut = System::Word(0x1051);
extern DELPHI_PACKAGE System::ResourceString _SInvalidPrinterOp;
#define Fmx_Consts_SInvalidPrinterOp System::LoadResourceString(&Fmx::Consts::_SInvalidPrinterOp)
extern DELPHI_PACKAGE System::ResourceString _SInvalidPrinter;
#define Fmx_Consts_SInvalidPrinter System::LoadResourceString(&Fmx::Consts::_SInvalidPrinter)
extern DELPHI_PACKAGE System::ResourceString _SPrinterIndexError;
#define Fmx_Consts_SPrinterIndexError System::LoadResourceString(&Fmx::Consts::_SPrinterIndexError)
extern DELPHI_PACKAGE System::ResourceString _SDeviceOnPort;
#define Fmx_Consts_SDeviceOnPort System::LoadResourceString(&Fmx::Consts::_SDeviceOnPort)
extern DELPHI_PACKAGE System::ResourceString _SNoDefaultPrinter;
#define Fmx_Consts_SNoDefaultPrinter System::LoadResourceString(&Fmx::Consts::_SNoDefaultPrinter)
extern DELPHI_PACKAGE System::ResourceString _SNotPrinting;
#define Fmx_Consts_SNotPrinting System::LoadResourceString(&Fmx::Consts::_SNotPrinting)
extern DELPHI_PACKAGE System::ResourceString _SPrinting;
#define Fmx_Consts_SPrinting System::LoadResourceString(&Fmx::Consts::_SPrinting)
extern DELPHI_PACKAGE System::ResourceString _SInvalidPrinterSettings;
#define Fmx_Consts_SInvalidPrinterSettings System::LoadResourceString(&Fmx::Consts::_SInvalidPrinterSettings)
extern DELPHI_PACKAGE System::ResourceString _SInvalidPageFormat;
#define Fmx_Consts_SInvalidPageFormat System::LoadResourceString(&Fmx::Consts::_SInvalidPageFormat)
extern DELPHI_PACKAGE System::ResourceString _SCantStartPrintJob;
#define Fmx_Consts_SCantStartPrintJob System::LoadResourceString(&Fmx::Consts::_SCantStartPrintJob)
extern DELPHI_PACKAGE System::ResourceString _SCantEndPrintJob;
#define Fmx_Consts_SCantEndPrintJob System::LoadResourceString(&Fmx::Consts::_SCantEndPrintJob)
extern DELPHI_PACKAGE System::ResourceString _SCantPrintNewPage;
#define Fmx_Consts_SCantPrintNewPage System::LoadResourceString(&Fmx::Consts::_SCantPrintNewPage)
extern DELPHI_PACKAGE System::ResourceString _SCantSetNumCopies;
#define Fmx_Consts_SCantSetNumCopies System::LoadResourceString(&Fmx::Consts::_SCantSetNumCopies)
extern DELPHI_PACKAGE System::ResourceString _StrCannotFocus;
#define Fmx_Consts_StrCannotFocus System::LoadResourceString(&Fmx::Consts::_StrCannotFocus)
extern DELPHI_PACKAGE System::ResourceString _SResultCanNotBeNil;
#define Fmx_Consts_SResultCanNotBeNil System::LoadResourceString(&Fmx::Consts::_SResultCanNotBeNil)
extern DELPHI_PACKAGE System::ResourceString _SKeyAcceleratorConflict;
#define Fmx_Consts_SKeyAcceleratorConflict System::LoadResourceString(&Fmx::Consts::_SKeyAcceleratorConflict)
extern DELPHI_PACKAGE System::ResourceString _SInvalidStyleForPlatform;
#define Fmx_Consts_SInvalidStyleForPlatform System::LoadResourceString(&Fmx::Consts::_SInvalidStyleForPlatform)
extern DELPHI_PACKAGE System::ResourceString _SCannotLoadStyleFromStream;
#define Fmx_Consts_SCannotLoadStyleFromStream System::LoadResourceString(&Fmx::Consts::_SCannotLoadStyleFromStream)
extern DELPHI_PACKAGE System::ResourceString _SCannotLoadStyleFromRes;
#define Fmx_Consts_SCannotLoadStyleFromRes System::LoadResourceString(&Fmx::Consts::_SCannotLoadStyleFromRes)
extern DELPHI_PACKAGE System::ResourceString _SCannotLoadStyleFromFile;
#define Fmx_Consts_SCannotLoadStyleFromFile System::LoadResourceString(&Fmx::Consts::_SCannotLoadStyleFromFile)
extern DELPHI_PACKAGE System::ResourceString _SCannotChangeInLiveBinding;
#define Fmx_Consts_SCannotChangeInLiveBinding System::LoadResourceString(&Fmx::Consts::_SCannotChangeInLiveBinding)
extern DELPHI_PACKAGE System::ResourceString _SInvalidPrinterClass;
#define Fmx_Consts_SInvalidPrinterClass System::LoadResourceString(&Fmx::Consts::_SInvalidPrinterClass)
extern DELPHI_PACKAGE System::ResourceString _SPromptArrayTooShort;
#define Fmx_Consts_SPromptArrayTooShort System::LoadResourceString(&Fmx::Consts::_SPromptArrayTooShort)
extern DELPHI_PACKAGE System::ResourceString _SPromptArrayEmpty;
#define Fmx_Consts_SPromptArrayEmpty System::LoadResourceString(&Fmx::Consts::_SPromptArrayEmpty)
extern DELPHI_PACKAGE System::ResourceString _SUnsupportedInputQuery;
#define Fmx_Consts_SUnsupportedInputQuery System::LoadResourceString(&Fmx::Consts::_SUnsupportedInputQuery)
extern DELPHI_PACKAGE System::ResourceString _SInvalidColorString;
#define Fmx_Consts_SInvalidColorString System::LoadResourceString(&Fmx::Consts::_SInvalidColorString)
extern DELPHI_PACKAGE System::ResourceString _SInvalidFmxHandle;
#define Fmx_Consts_SInvalidFmxHandle System::LoadResourceString(&Fmx::Consts::_SInvalidFmxHandle)
extern DELPHI_PACKAGE System::ResourceString _SInvalidFmxHandleClass;
#define Fmx_Consts_SInvalidFmxHandleClass System::LoadResourceString(&Fmx::Consts::_SInvalidFmxHandleClass)
extern DELPHI_PACKAGE System::ResourceString _SDelayRelease;
#define Fmx_Consts_SDelayRelease System::LoadResourceString(&Fmx::Consts::_SDelayRelease)
extern DELPHI_PACKAGE System::ResourceString _SMediaGlobalError;
#define Fmx_Consts_SMediaGlobalError System::LoadResourceString(&Fmx::Consts::_SMediaGlobalError)
extern DELPHI_PACKAGE System::ResourceString _SMediaFileNotSupported;
#define Fmx_Consts_SMediaFileNotSupported System::LoadResourceString(&Fmx::Consts::_SMediaFileNotSupported)
extern DELPHI_PACKAGE System::ResourceString _SMediaCannotUseAutofocus;
#define Fmx_Consts_SMediaCannotUseAutofocus System::LoadResourceString(&Fmx::Consts::_SMediaCannotUseAutofocus)
extern DELPHI_PACKAGE System::ResourceString _SUnsupportedPlatformService;
#define Fmx_Consts_SUnsupportedPlatformService System::LoadResourceString(&Fmx::Consts::_SUnsupportedPlatformService)
extern DELPHI_PACKAGE System::ResourceString _SServiceAlreadyRegistered;
#define Fmx_Consts_SServiceAlreadyRegistered System::LoadResourceString(&Fmx::Consts::_SServiceAlreadyRegistered)
extern DELPHI_PACKAGE System::ResourceString _SUnsupportedOSVersion;
#define Fmx_Consts_SUnsupportedOSVersion System::LoadResourceString(&Fmx::Consts::_SUnsupportedOSVersion)
extern DELPHI_PACKAGE System::ResourceString _SUnsupportedMultiInstance;
#define Fmx_Consts_SUnsupportedMultiInstance System::LoadResourceString(&Fmx::Consts::_SUnsupportedMultiInstance)
extern DELPHI_PACKAGE System::ResourceString _SNotInstance;
#define Fmx_Consts_SNotInstance System::LoadResourceString(&Fmx::Consts::_SNotInstance)
extern DELPHI_PACKAGE System::ResourceString _SFlasherNotRegistered;
#define Fmx_Consts_SFlasherNotRegistered System::LoadResourceString(&Fmx::Consts::_SFlasherNotRegistered)
extern DELPHI_PACKAGE System::ResourceString _SUnsupportedInterface;
#define Fmx_Consts_SUnsupportedInterface System::LoadResourceString(&Fmx::Consts::_SUnsupportedInterface)
extern DELPHI_PACKAGE System::ResourceString _SNullException;
#define Fmx_Consts_SNullException System::LoadResourceString(&Fmx::Consts::_SNullException)
extern DELPHI_PACKAGE System::ResourceString _SCannotGetDeviceIDForTestAds;
#define Fmx_Consts_SCannotGetDeviceIDForTestAds System::LoadResourceString(&Fmx::Consts::_SCannotGetDeviceIDForTestAds)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateTimer;
#define Fmx_Consts_SCannotCreateTimer System::LoadResourceString(&Fmx::Consts::_SCannotCreateTimer)
extern DELPHI_PACKAGE System::ResourceString _SErrorShortCut;
#define Fmx_Consts_SErrorShortCut System::LoadResourceString(&Fmx::Consts::_SErrorShortCut)
extern DELPHI_PACKAGE System::ResourceString _SEUseHeirs;
#define Fmx_Consts_SEUseHeirs System::LoadResourceString(&Fmx::Consts::_SEUseHeirs)
extern DELPHI_PACKAGE System::ResourceString _SUnavailableMenuId;
#define Fmx_Consts_SUnavailableMenuId System::LoadResourceString(&Fmx::Consts::_SUnavailableMenuId)
extern DELPHI_PACKAGE System::ResourceString _SInvalidGestureID;
#define Fmx_Consts_SInvalidGestureID System::LoadResourceString(&Fmx::Consts::_SInvalidGestureID)
extern DELPHI_PACKAGE System::ResourceString _SInvalidStreamFormat;
#define Fmx_Consts_SInvalidStreamFormat System::LoadResourceString(&Fmx::Consts::_SInvalidStreamFormat)
extern DELPHI_PACKAGE System::ResourceString _SDuplicateGestureName;
#define Fmx_Consts_SDuplicateGestureName System::LoadResourceString(&Fmx::Consts::_SDuplicateGestureName)
extern DELPHI_PACKAGE System::ResourceString _SDuplicateRecordedGestureName;
#define Fmx_Consts_SDuplicateRecordedGestureName System::LoadResourceString(&Fmx::Consts::_SDuplicateRecordedGestureName)
extern DELPHI_PACKAGE System::ResourceString _SControlNotFound;
#define Fmx_Consts_SControlNotFound System::LoadResourceString(&Fmx::Consts::_SControlNotFound)
extern DELPHI_PACKAGE System::ResourceString _SRegisteredGestureNotFound;
#define Fmx_Consts_SRegisteredGestureNotFound System::LoadResourceString(&Fmx::Consts::_SRegisteredGestureNotFound)
extern DELPHI_PACKAGE System::ResourceString _SErrorLoadingFile;
#define Fmx_Consts_SErrorLoadingFile System::LoadResourceString(&Fmx::Consts::_SErrorLoadingFile)
extern DELPHI_PACKAGE System::ResourceString _STooManyRegisteredGestures;
#define Fmx_Consts_STooManyRegisteredGestures System::LoadResourceString(&Fmx::Consts::_STooManyRegisteredGestures)
extern DELPHI_PACKAGE System::ResourceString _SDuplicateRegisteredGestureName;
#define Fmx_Consts_SDuplicateRegisteredGestureName System::LoadResourceString(&Fmx::Consts::_SDuplicateRegisteredGestureName)
extern DELPHI_PACKAGE System::ResourceString _SUnableToSaveSettings;
#define Fmx_Consts_SUnableToSaveSettings System::LoadResourceString(&Fmx::Consts::_SUnableToSaveSettings)
extern DELPHI_PACKAGE System::ResourceString _SInvalidGestureName;
#define Fmx_Consts_SInvalidGestureName System::LoadResourceString(&Fmx::Consts::_SInvalidGestureName)
extern DELPHI_PACKAGE System::ResourceString _SOutOfRange;
#define Fmx_Consts_SOutOfRange System::LoadResourceString(&Fmx::Consts::_SOutOfRange)
extern DELPHI_PACKAGE System::ResourceString _SAddIStylusAsyncPluginError;
#define Fmx_Consts_SAddIStylusAsyncPluginError System::LoadResourceString(&Fmx::Consts::_SAddIStylusAsyncPluginError)
extern DELPHI_PACKAGE System::ResourceString _SAddIStylusSyncPluginError;
#define Fmx_Consts_SAddIStylusSyncPluginError System::LoadResourceString(&Fmx::Consts::_SAddIStylusSyncPluginError)
extern DELPHI_PACKAGE System::ResourceString _SRemoveIStylusAsyncPluginError;
#define Fmx_Consts_SRemoveIStylusAsyncPluginError System::LoadResourceString(&Fmx::Consts::_SRemoveIStylusAsyncPluginError)
extern DELPHI_PACKAGE System::ResourceString _SRemoveIStylusSyncPluginError;
#define Fmx_Consts_SRemoveIStylusSyncPluginError System::LoadResourceString(&Fmx::Consts::_SRemoveIStylusSyncPluginError)
extern DELPHI_PACKAGE System::ResourceString _SStylusHandleError;
#define Fmx_Consts_SStylusHandleError System::LoadResourceString(&Fmx::Consts::_SStylusHandleError)
extern DELPHI_PACKAGE System::ResourceString _SStylusEnableError;
#define Fmx_Consts_SStylusEnableError System::LoadResourceString(&Fmx::Consts::_SStylusEnableError)
extern DELPHI_PACKAGE System::ResourceString _SEnableRecognizerError;
#define Fmx_Consts_SEnableRecognizerError System::LoadResourceString(&Fmx::Consts::_SEnableRecognizerError)
extern DELPHI_PACKAGE System::ResourceString _SInitialGesturePointError;
#define Fmx_Consts_SInitialGesturePointError System::LoadResourceString(&Fmx::Consts::_SInitialGesturePointError)
extern DELPHI_PACKAGE System::ResourceString _SSetStylusGestureError;
#define Fmx_Consts_SSetStylusGestureError System::LoadResourceString(&Fmx::Consts::_SSetStylusGestureError)
extern DELPHI_PACKAGE System::ResourceString _StrESingleMainMenu;
#define Fmx_Consts_StrESingleMainMenu System::LoadResourceString(&Fmx::Consts::_StrESingleMainMenu)
extern DELPHI_PACKAGE System::ResourceString _SMainMenuSupportsOnlyTMenuItems;
#define Fmx_Consts_SMainMenuSupportsOnlyTMenuItems System::LoadResourceString(&Fmx::Consts::_SMainMenuSupportsOnlyTMenuItems)
extern DELPHI_PACKAGE System::ResourceString _SNoImplementation;
#define Fmx_Consts_SNoImplementation System::LoadResourceString(&Fmx::Consts::_SNoImplementation)
extern DELPHI_PACKAGE System::ResourceString _SNotImplementedOnPlatform;
#define Fmx_Consts_SNotImplementedOnPlatform System::LoadResourceString(&Fmx::Consts::_SNotImplementedOnPlatform)
extern DELPHI_PACKAGE System::ResourceString _SBitmapSizeNotEqual;
#define Fmx_Consts_SBitmapSizeNotEqual System::LoadResourceString(&Fmx::Consts::_SBitmapSizeNotEqual)
extern DELPHI_PACKAGE System::ResourceString _SBlockingDialogs;
#define Fmx_Consts_SBlockingDialogs System::LoadResourceString(&Fmx::Consts::_SBlockingDialogs)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateScrollContent;
#define Fmx_Consts_SCannotCreateScrollContent System::LoadResourceString(&Fmx::Consts::_SCannotCreateScrollContent)
extern DELPHI_PACKAGE System::ResourceString _SContentCannotBeNil;
#define Fmx_Consts_SContentCannotBeNil System::LoadResourceString(&Fmx::Consts::_SContentCannotBeNil)
extern DELPHI_PACKAGE System::ResourceString _SPointInTextLayoutError;
#define Fmx_Consts_SPointInTextLayoutError System::LoadResourceString(&Fmx::Consts::_SPointInTextLayoutError)
extern DELPHI_PACKAGE System::ResourceString _SCaretLineIncorrect;
#define Fmx_Consts_SCaretLineIncorrect System::LoadResourceString(&Fmx::Consts::_SCaretLineIncorrect)
extern DELPHI_PACKAGE System::ResourceString _SCaretPosIncorrect;
#define Fmx_Consts_SCaretPosIncorrect System::LoadResourceString(&Fmx::Consts::_SCaretPosIncorrect)
extern DELPHI_PACKAGE System::ResourceString _SInvalidSceneUpdatingPairCall;
#define Fmx_Consts_SInvalidSceneUpdatingPairCall System::LoadResourceString(&Fmx::Consts::_SInvalidSceneUpdatingPairCall)
extern DELPHI_PACKAGE System::ResourceString _SNoPlatformStyle;
#define Fmx_Consts_SNoPlatformStyle System::LoadResourceString(&Fmx::Consts::_SNoPlatformStyle)
extern DELPHI_PACKAGE System::ResourceString _SInvalidPlatformStyle;
#define Fmx_Consts_SInvalidPlatformStyle System::LoadResourceString(&Fmx::Consts::_SInvalidPlatformStyle)
extern DELPHI_PACKAGE System::ResourceString _SNoIDeviceBehaviorBehavior;
#define Fmx_Consts_SNoIDeviceBehaviorBehavior System::LoadResourceString(&Fmx::Consts::_SNoIDeviceBehaviorBehavior)
extern DELPHI_PACKAGE System::ResourceString _SStyleResourceDoesNotExist;
#define Fmx_Consts_SStyleResourceDoesNotExist System::LoadResourceString(&Fmx::Consts::_SStyleResourceDoesNotExist)
extern DELPHI_PACKAGE System::ResourceString _SDialogMustBeRunInUIThread;
#define Fmx_Consts_SDialogMustBeRunInUIThread System::LoadResourceString(&Fmx::Consts::_SDialogMustBeRunInUIThread)
extern DELPHI_PACKAGE System::ResourceString _SObjectNonMainThreadUsage;
#define Fmx_Consts_SObjectNonMainThreadUsage System::LoadResourceString(&Fmx::Consts::_SObjectNonMainThreadUsage)
extern DELPHI_PACKAGE System::ResourceString _SMsgDlgWarning;
#define Fmx_Consts_SMsgDlgWarning System::LoadResourceString(&Fmx::Consts::_SMsgDlgWarning)
extern DELPHI_PACKAGE System::ResourceString _SMsgDlgError;
#define Fmx_Consts_SMsgDlgError System::LoadResourceString(&Fmx::Consts::_SMsgDlgError)
extern DELPHI_PACKAGE System::ResourceString _SMsgDlgInformation;
#define Fmx_Consts_SMsgDlgInformation System::LoadResourceString(&Fmx::Consts::_SMsgDlgInformation)
extern DELPHI_PACKAGE System::ResourceString _SMsgDlgConfirm;
#define Fmx_Consts_SMsgDlgConfirm System::LoadResourceString(&Fmx::Consts::_SMsgDlgConfirm)
extern DELPHI_PACKAGE System::ResourceString _SMsgDlgYes;
#define Fmx_Consts_SMsgDlgYes System::LoadResourceString(&Fmx::Consts::_SMsgDlgYes)
extern DELPHI_PACKAGE System::ResourceString _SMsgDlgNo;
#define Fmx_Consts_SMsgDlgNo System::LoadResourceString(&Fmx::Consts::_SMsgDlgNo)
extern DELPHI_PACKAGE System::ResourceString _SMsgDlgOK;
#define Fmx_Consts_SMsgDlgOK System::LoadResourceString(&Fmx::Consts::_SMsgDlgOK)
extern DELPHI_PACKAGE System::ResourceString _SMsgDlgCancel;
#define Fmx_Consts_SMsgDlgCancel System::LoadResourceString(&Fmx::Consts::_SMsgDlgCancel)
extern DELPHI_PACKAGE System::ResourceString _SMsgDlgHelp;
#define Fmx_Consts_SMsgDlgHelp System::LoadResourceString(&Fmx::Consts::_SMsgDlgHelp)
extern DELPHI_PACKAGE System::ResourceString _SMsgDlgHelpNone;
#define Fmx_Consts_SMsgDlgHelpNone System::LoadResourceString(&Fmx::Consts::_SMsgDlgHelpNone)
extern DELPHI_PACKAGE System::ResourceString _SMsgDlgHelpHelp;
#define Fmx_Consts_SMsgDlgHelpHelp System::LoadResourceString(&Fmx::Consts::_SMsgDlgHelpHelp)
extern DELPHI_PACKAGE System::ResourceString _SMsgDlgAbort;
#define Fmx_Consts_SMsgDlgAbort System::LoadResourceString(&Fmx::Consts::_SMsgDlgAbort)
extern DELPHI_PACKAGE System::ResourceString _SMsgDlgRetry;
#define Fmx_Consts_SMsgDlgRetry System::LoadResourceString(&Fmx::Consts::_SMsgDlgRetry)
extern DELPHI_PACKAGE System::ResourceString _SMsgDlgIgnore;
#define Fmx_Consts_SMsgDlgIgnore System::LoadResourceString(&Fmx::Consts::_SMsgDlgIgnore)
extern DELPHI_PACKAGE System::ResourceString _SMsgDlgAll;
#define Fmx_Consts_SMsgDlgAll System::LoadResourceString(&Fmx::Consts::_SMsgDlgAll)
extern DELPHI_PACKAGE System::ResourceString _SMsgDlgNoToAll;
#define Fmx_Consts_SMsgDlgNoToAll System::LoadResourceString(&Fmx::Consts::_SMsgDlgNoToAll)
extern DELPHI_PACKAGE System::ResourceString _SMsgDlgYesToAll;
#define Fmx_Consts_SMsgDlgYesToAll System::LoadResourceString(&Fmx::Consts::_SMsgDlgYesToAll)
extern DELPHI_PACKAGE System::ResourceString _SMsgDlgClose;
#define Fmx_Consts_SMsgDlgClose System::LoadResourceString(&Fmx::Consts::_SMsgDlgClose)
extern DELPHI_PACKAGE System::ResourceString _SWindowsVistaRequired;
#define Fmx_Consts_SWindowsVistaRequired System::LoadResourceString(&Fmx::Consts::_SWindowsVistaRequired)
extern DELPHI_PACKAGE System::ResourceString _SUsername;
#define Fmx_Consts_SUsername System::LoadResourceString(&Fmx::Consts::_SUsername)
extern DELPHI_PACKAGE System::ResourceString _SPassword;
#define Fmx_Consts_SPassword System::LoadResourceString(&Fmx::Consts::_SPassword)
extern DELPHI_PACKAGE System::ResourceString _SDomain;
#define Fmx_Consts_SDomain System::LoadResourceString(&Fmx::Consts::_SDomain)
extern DELPHI_PACKAGE System::ResourceString _SLogin;
#define Fmx_Consts_SLogin System::LoadResourceString(&Fmx::Consts::_SLogin)
extern DELPHI_PACKAGE System::ResourceString _SHostRequiresAuthentication;
#define Fmx_Consts_SHostRequiresAuthentication System::LoadResourceString(&Fmx::Consts::_SHostRequiresAuthentication)
extern DELPHI_PACKAGE System::ResourceString _SMenuAppQuit;
#define Fmx_Consts_SMenuAppQuit System::LoadResourceString(&Fmx::Consts::_SMenuAppQuit)
extern DELPHI_PACKAGE System::ResourceString _SMenuCloseWindow;
#define Fmx_Consts_SMenuCloseWindow System::LoadResourceString(&Fmx::Consts::_SMenuCloseWindow)
extern DELPHI_PACKAGE System::ResourceString _SMenuAppHide;
#define Fmx_Consts_SMenuAppHide System::LoadResourceString(&Fmx::Consts::_SMenuAppHide)
extern DELPHI_PACKAGE System::ResourceString _SMenuAppHideOthers;
#define Fmx_Consts_SMenuAppHideOthers System::LoadResourceString(&Fmx::Consts::_SMenuAppHideOthers)
extern DELPHI_PACKAGE System::ResourceString _SMenuServices;
#define Fmx_Consts_SMenuServices System::LoadResourceString(&Fmx::Consts::_SMenuServices)
extern DELPHI_PACKAGE System::ResourceString _SMenuShowAll;
#define Fmx_Consts_SMenuShowAll System::LoadResourceString(&Fmx::Consts::_SMenuShowAll)
extern DELPHI_PACKAGE System::ResourceString _SMenuWindow;
#define Fmx_Consts_SMenuWindow System::LoadResourceString(&Fmx::Consts::_SMenuWindow)
extern DELPHI_PACKAGE System::ResourceString _SAppDesign;
#define Fmx_Consts_SAppDesign System::LoadResourceString(&Fmx::Consts::_SAppDesign)
extern DELPHI_PACKAGE System::ResourceString _SAppDefault;
#define Fmx_Consts_SAppDefault System::LoadResourceString(&Fmx::Consts::_SAppDefault)
extern DELPHI_PACKAGE System::ResourceString _SGotoTab;
#define Fmx_Consts_SGotoTab System::LoadResourceString(&Fmx::Consts::_SGotoTab)
extern DELPHI_PACKAGE System::ResourceString _SGotoNilTab;
#define Fmx_Consts_SGotoNilTab System::LoadResourceString(&Fmx::Consts::_SGotoNilTab)
extern DELPHI_PACKAGE System::ResourceString _SMediaPlayerStart;
#define Fmx_Consts_SMediaPlayerStart System::LoadResourceString(&Fmx::Consts::_SMediaPlayerStart)
extern DELPHI_PACKAGE System::ResourceString _SMediaPlayerPause;
#define Fmx_Consts_SMediaPlayerPause System::LoadResourceString(&Fmx::Consts::_SMediaPlayerPause)
extern DELPHI_PACKAGE System::ResourceString _SMediaPlayerStop;
#define Fmx_Consts_SMediaPlayerStop System::LoadResourceString(&Fmx::Consts::_SMediaPlayerStop)
extern DELPHI_PACKAGE System::ResourceString _SMediaPlayerVolume;
#define Fmx_Consts_SMediaPlayerVolume System::LoadResourceString(&Fmx::Consts::_SMediaPlayerVolume)
extern DELPHI_PACKAGE System::ResourceString _SMsgGooglePlayServicesNeedUpdating;
#define Fmx_Consts_SMsgGooglePlayServicesNeedUpdating System::LoadResourceString(&Fmx::Consts::_SMsgGooglePlayServicesNeedUpdating)
static const System::WideChar SChrHorizontalEllipsis = (System::WideChar)(0x2026);
#define SmkcBkSp L"BkSp"
#define SmkcTab L"Tab"
#define SmkcEsc L"Esc"
#define SmkcEnter L"Enter"
#define SmkcPgUp L"PgUp"
#define SmkcPgDn L"PgDn"
#define SmkcEnd L"End"
#define SmkcDel L"Del"
#define SmkcHome L"Home"
#define SmkcLeft L"Left"
#define SmkcUp L"Up"
#define SmkcRight L"Right"
#define SmkcDown L"Down"
#define SmkcNumLock L"Num Lock"
#define SmkcPara L"Paragraph"
#define SmkcShift L"Shift+"
#define SmkcCtrl L"Ctrl+"
#define SmkcAlt L"Alt+"
#define SmkcCmd L"Cmd+"
#define SmkcLWin L"Left Win"
#define SmkcRWin L"Right Win"
#define SmkcApps L"Application"
#define SmkcClear L"Clear"
#define SmkcScroll L"Scroll Lock"
#define SmkcCancel L"Break"
#define SmkcLShift L"Left Shift"
#define SmkcRShift L"Right Shift"
#define SmkcLControl L"Left Ctrl"
#define SmkcRControl L"Right Ctrl"
#define SmkcLMenu L"Left Alt"
#define SmkcRMenu L"Right Alt"
#define SmkcCapital L"Caps Lock"
#define SmkcOem102 L"Oem \\"
#define SmkcSpace L"Space"
#define SmkcNext L"Next"
#define SmkcBack L"Back"
#define SmkcIns L"Ins"
#define SmkcPause L"Pause"
#define SmkcCamera L"Camera"
#define SmkcBrowserBack L"BrowserBack"
#define SmkcHardwareBack L"HardwareBack"
#define SmkcNum L"Num %s"
extern DELPHI_PACKAGE System::ResourceString _SEditUndo;
#define Fmx_Consts_SEditUndo System::LoadResourceString(&Fmx::Consts::_SEditUndo)
extern DELPHI_PACKAGE System::ResourceString _SEditCopy;
#define Fmx_Consts_SEditCopy System::LoadResourceString(&Fmx::Consts::_SEditCopy)
extern DELPHI_PACKAGE System::ResourceString _SEditCut;
#define Fmx_Consts_SEditCut System::LoadResourceString(&Fmx::Consts::_SEditCut)
extern DELPHI_PACKAGE System::ResourceString _SEditPaste;
#define Fmx_Consts_SEditPaste System::LoadResourceString(&Fmx::Consts::_SEditPaste)
extern DELPHI_PACKAGE System::ResourceString _SEditDelete;
#define Fmx_Consts_SEditDelete System::LoadResourceString(&Fmx::Consts::_SEditDelete)
extern DELPHI_PACKAGE System::ResourceString _SEditSelectAll;
#define Fmx_Consts_SEditSelectAll System::LoadResourceString(&Fmx::Consts::_SEditSelectAll)
extern DELPHI_PACKAGE System::ResourceString _SAseLexerTokenError;
#define Fmx_Consts_SAseLexerTokenError System::LoadResourceString(&Fmx::Consts::_SAseLexerTokenError)
extern DELPHI_PACKAGE System::ResourceString _SAseLexerCharError;
#define Fmx_Consts_SAseLexerCharError System::LoadResourceString(&Fmx::Consts::_SAseLexerCharError)
extern DELPHI_PACKAGE System::ResourceString _SAseLexerFileCorruption;
#define Fmx_Consts_SAseLexerFileCorruption System::LoadResourceString(&Fmx::Consts::_SAseLexerFileCorruption)
extern DELPHI_PACKAGE System::ResourceString _SAseParserWrongMaterialsNumError;
#define Fmx_Consts_SAseParserWrongMaterialsNumError System::LoadResourceString(&Fmx::Consts::_SAseParserWrongMaterialsNumError)
extern DELPHI_PACKAGE System::ResourceString _SAseParserWrongVertexNumError;
#define Fmx_Consts_SAseParserWrongVertexNumError System::LoadResourceString(&Fmx::Consts::_SAseParserWrongVertexNumError)
extern DELPHI_PACKAGE System::ResourceString _SAseParserWrongNormalNumError;
#define Fmx_Consts_SAseParserWrongNormalNumError System::LoadResourceString(&Fmx::Consts::_SAseParserWrongNormalNumError)
extern DELPHI_PACKAGE System::ResourceString _SAseParserWrongTexCoordNumError;
#define Fmx_Consts_SAseParserWrongTexCoordNumError System::LoadResourceString(&Fmx::Consts::_SAseParserWrongTexCoordNumError)
extern DELPHI_PACKAGE System::ResourceString _SAseParserWrongVertexIdxError;
#define Fmx_Consts_SAseParserWrongVertexIdxError System::LoadResourceString(&Fmx::Consts::_SAseParserWrongVertexIdxError)
extern DELPHI_PACKAGE System::ResourceString _SAseParserWrongFacesNumError;
#define Fmx_Consts_SAseParserWrongFacesNumError System::LoadResourceString(&Fmx::Consts::_SAseParserWrongFacesNumError)
extern DELPHI_PACKAGE System::ResourceString _SAseParserWrongFacesIdxError;
#define Fmx_Consts_SAseParserWrongFacesIdxError System::LoadResourceString(&Fmx::Consts::_SAseParserWrongFacesIdxError)
extern DELPHI_PACKAGE System::ResourceString _SAseParserWrongTriangleMeshNumError;
#define Fmx_Consts_SAseParserWrongTriangleMeshNumError System::LoadResourceString(&Fmx::Consts::_SAseParserWrongTriangleMeshNumError)
extern DELPHI_PACKAGE System::ResourceString _SAseParserWrongTriangleMeshIdxError;
#define Fmx_Consts_SAseParserWrongTriangleMeshIdxError System::LoadResourceString(&Fmx::Consts::_SAseParserWrongTriangleMeshIdxError)
extern DELPHI_PACKAGE System::ResourceString _SAseParserWrongTexCoordIdxError;
#define Fmx_Consts_SAseParserWrongTexCoordIdxError System::LoadResourceString(&Fmx::Consts::_SAseParserWrongTexCoordIdxError)
extern DELPHI_PACKAGE System::ResourceString _SAseParserUnexpectedKyWordError;
#define Fmx_Consts_SAseParserUnexpectedKyWordError System::LoadResourceString(&Fmx::Consts::_SAseParserUnexpectedKyWordError)
extern DELPHI_PACKAGE System::ResourceString _SIndexDataNotFoundError;
#define Fmx_Consts_SIndexDataNotFoundError System::LoadResourceString(&Fmx::Consts::_SIndexDataNotFoundError)
extern DELPHI_PACKAGE System::ResourceString _SEffectIdNotFoundError;
#define Fmx_Consts_SEffectIdNotFoundError System::LoadResourceString(&Fmx::Consts::_SEffectIdNotFoundError)
extern DELPHI_PACKAGE System::ResourceString _SMeshIdNotFoundError;
#define Fmx_Consts_SMeshIdNotFoundError System::LoadResourceString(&Fmx::Consts::_SMeshIdNotFoundError)
extern DELPHI_PACKAGE System::ResourceString _SControllerIdNotFoundError;
#define Fmx_Consts_SControllerIdNotFoundError System::LoadResourceString(&Fmx::Consts::_SControllerIdNotFoundError)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateCircularDependence;
#define Fmx_Consts_SCannotCreateCircularDependence System::LoadResourceString(&Fmx::Consts::_SCannotCreateCircularDependence)
extern DELPHI_PACKAGE System::ResourceString _SPropertyOutOfRange;
#define Fmx_Consts_SPropertyOutOfRange System::LoadResourceString(&Fmx::Consts::_SPropertyOutOfRange)
extern DELPHI_PACKAGE System::ResourceString _SPrinterDPIChangeError;
#define Fmx_Consts_SPrinterDPIChangeError System::LoadResourceString(&Fmx::Consts::_SPrinterDPIChangeError)
extern DELPHI_PACKAGE System::ResourceString _SPrinterSettingsReadError;
#define Fmx_Consts_SPrinterSettingsReadError System::LoadResourceString(&Fmx::Consts::_SPrinterSettingsReadError)
extern DELPHI_PACKAGE System::ResourceString _SPrinterSettingsWriteError;
#define Fmx_Consts_SPrinterSettingsWriteError System::LoadResourceString(&Fmx::Consts::_SPrinterSettingsWriteError)
extern DELPHI_PACKAGE System::ResourceString _SVAllFiles;
#define Fmx_Consts_SVAllFiles System::LoadResourceString(&Fmx::Consts::_SVAllFiles)
extern DELPHI_PACKAGE System::ResourceString _SVBitmaps;
#define Fmx_Consts_SVBitmaps System::LoadResourceString(&Fmx::Consts::_SVBitmaps)
extern DELPHI_PACKAGE System::ResourceString _SVIcons;
#define Fmx_Consts_SVIcons System::LoadResourceString(&Fmx::Consts::_SVIcons)
extern DELPHI_PACKAGE System::ResourceString _SVTIFFImages;
#define Fmx_Consts_SVTIFFImages System::LoadResourceString(&Fmx::Consts::_SVTIFFImages)
extern DELPHI_PACKAGE System::ResourceString _SVJPGImages;
#define Fmx_Consts_SVJPGImages System::LoadResourceString(&Fmx::Consts::_SVJPGImages)
extern DELPHI_PACKAGE System::ResourceString _SVPNGImages;
#define Fmx_Consts_SVPNGImages System::LoadResourceString(&Fmx::Consts::_SVPNGImages)
extern DELPHI_PACKAGE System::ResourceString _SVGIFImages;
#define Fmx_Consts_SVGIFImages System::LoadResourceString(&Fmx::Consts::_SVGIFImages)
extern DELPHI_PACKAGE System::ResourceString _SVJP2Images;
#define Fmx_Consts_SVJP2Images System::LoadResourceString(&Fmx::Consts::_SVJP2Images)
extern DELPHI_PACKAGE System::ResourceString _SVTGAImages;
#define Fmx_Consts_SVTGAImages System::LoadResourceString(&Fmx::Consts::_SVTGAImages)
extern DELPHI_PACKAGE System::ResourceString _SWMPImages;
#define Fmx_Consts_SWMPImages System::LoadResourceString(&Fmx::Consts::_SWMPImages)
extern DELPHI_PACKAGE System::ResourceString _SVAviFiles;
#define Fmx_Consts_SVAviFiles System::LoadResourceString(&Fmx::Consts::_SVAviFiles)
extern DELPHI_PACKAGE System::ResourceString _SVWMVFiles;
#define Fmx_Consts_SVWMVFiles System::LoadResourceString(&Fmx::Consts::_SVWMVFiles)
extern DELPHI_PACKAGE System::ResourceString _SVMP4Files;
#define Fmx_Consts_SVMP4Files System::LoadResourceString(&Fmx::Consts::_SVMP4Files)
extern DELPHI_PACKAGE System::ResourceString _SVMOVFiles;
#define Fmx_Consts_SVMOVFiles System::LoadResourceString(&Fmx::Consts::_SVMOVFiles)
extern DELPHI_PACKAGE System::ResourceString _SVM4VFiles;
#define Fmx_Consts_SVM4VFiles System::LoadResourceString(&Fmx::Consts::_SVM4VFiles)
extern DELPHI_PACKAGE System::ResourceString _SVMPGFiles;
#define Fmx_Consts_SVMPGFiles System::LoadResourceString(&Fmx::Consts::_SVMPGFiles)
extern DELPHI_PACKAGE System::ResourceString _SVWMAFiles;
#define Fmx_Consts_SVWMAFiles System::LoadResourceString(&Fmx::Consts::_SVWMAFiles)
extern DELPHI_PACKAGE System::ResourceString _SVMP3Files;
#define Fmx_Consts_SVMP3Files System::LoadResourceString(&Fmx::Consts::_SVMP3Files)
extern DELPHI_PACKAGE System::ResourceString _SVWAVFiles;
#define Fmx_Consts_SVWAVFiles System::LoadResourceString(&Fmx::Consts::_SVWAVFiles)
extern DELPHI_PACKAGE System::ResourceString _SVCAFFiles;
#define Fmx_Consts_SVCAFFiles System::LoadResourceString(&Fmx::Consts::_SVCAFFiles)
extern DELPHI_PACKAGE System::ResourceString _SV3GPFiles;
#define Fmx_Consts_SV3GPFiles System::LoadResourceString(&Fmx::Consts::_SV3GPFiles)
extern DELPHI_PACKAGE System::ResourceString _SVM4AFiles;
#define Fmx_Consts_SVM4AFiles System::LoadResourceString(&Fmx::Consts::_SVM4AFiles)
extern DELPHI_PACKAGE System::ResourceString _SAllFilesExt;
#define Fmx_Consts_SAllFilesExt System::LoadResourceString(&Fmx::Consts::_SAllFilesExt)
extern DELPHI_PACKAGE System::ResourceString _SDefault;
#define Fmx_Consts_SDefault System::LoadResourceString(&Fmx::Consts::_SDefault)
extern DELPHI_PACKAGE System::ResourceString _StrEChangeFixed;
#define Fmx_Consts_StrEChangeFixed System::LoadResourceString(&Fmx::Consts::_StrEChangeFixed)
extern DELPHI_PACKAGE System::ResourceString _StrEDupScale;
#define Fmx_Consts_StrEDupScale System::LoadResourceString(&Fmx::Consts::_StrEDupScale)
extern DELPHI_PACKAGE System::ResourceString _StrOther;
#define Fmx_Consts_StrOther System::LoadResourceString(&Fmx::Consts::_StrOther)
extern DELPHI_PACKAGE System::ResourceString _StrScale1;
#define Fmx_Consts_StrScale1 System::LoadResourceString(&Fmx::Consts::_StrScale1)
extern DELPHI_PACKAGE System::ResourceString _StrScale2;
#define Fmx_Consts_StrScale2 System::LoadResourceString(&Fmx::Consts::_StrScale2)
extern DELPHI_PACKAGE System::ResourceString _SCodecFileExtensionCannotEmpty;
#define Fmx_Consts_SCodecFileExtensionCannotEmpty System::LoadResourceString(&Fmx::Consts::_SCodecFileExtensionCannotEmpty)
extern DELPHI_PACKAGE System::ResourceString _SCodecClassCannotBeNil;
#define Fmx_Consts_SCodecClassCannotBeNil System::LoadResourceString(&Fmx::Consts::_SCodecClassCannotBeNil)
extern DELPHI_PACKAGE System::ResourceString _SCodecAlreadyExists;
#define Fmx_Consts_SCodecAlreadyExists System::LoadResourceString(&Fmx::Consts::_SCodecAlreadyExists)
extern DELPHI_PACKAGE System::ResourceString _SNoFlashError;
#define Fmx_Consts_SNoFlashError System::LoadResourceString(&Fmx::Consts::_SNoFlashError)
extern DELPHI_PACKAGE System::ResourceString _SNoTorchError;
#define Fmx_Consts_SNoTorchError System::LoadResourceString(&Fmx::Consts::_SNoTorchError)
extern DELPHI_PACKAGE System::ResourceString _SPickerCancel;
#define Fmx_Consts_SPickerCancel System::LoadResourceString(&Fmx::Consts::_SPickerCancel)
extern DELPHI_PACKAGE System::ResourceString _SPickerDone;
#define Fmx_Consts_SPickerDone System::LoadResourceString(&Fmx::Consts::_SPickerDone)
extern DELPHI_PACKAGE System::ResourceString _SEditorDone;
#define Fmx_Consts_SEditorDone System::LoadResourceString(&Fmx::Consts::_SEditorDone)
extern DELPHI_PACKAGE System::ResourceString _SListPickerIsNotFound;
#define Fmx_Consts_SListPickerIsNotFound System::LoadResourceString(&Fmx::Consts::_SListPickerIsNotFound)
extern DELPHI_PACKAGE System::ResourceString _SDateTimePickerIsNotFound;
#define Fmx_Consts_SDateTimePickerIsNotFound System::LoadResourceString(&Fmx::Consts::_SDateTimePickerIsNotFound)
extern DELPHI_PACKAGE System::ResourceString _SNotificationCancel;
#define Fmx_Consts_SNotificationCancel System::LoadResourceString(&Fmx::Consts::_SNotificationCancel)
extern DELPHI_PACKAGE System::ResourceString _SNotificationCenterTitleIsNotSupported;
#define Fmx_Consts_SNotificationCenterTitleIsNotSupported System::LoadResourceString(&Fmx::Consts::_SNotificationCenterTitleIsNotSupported)
extern DELPHI_PACKAGE System::ResourceString _SNotificationCenterActionIsNotSupported;
#define Fmx_Consts_SNotificationCenterActionIsNotSupported System::LoadResourceString(&Fmx::Consts::_SNotificationCenterActionIsNotSupported)
extern DELPHI_PACKAGE System::ResourceString _STakePhotoFromCamera;
#define Fmx_Consts_STakePhotoFromCamera System::LoadResourceString(&Fmx::Consts::_STakePhotoFromCamera)
extern DELPHI_PACKAGE System::ResourceString _STakePhotoFromLibarary;
#define Fmx_Consts_STakePhotoFromLibarary System::LoadResourceString(&Fmx::Consts::_STakePhotoFromLibarary)
extern DELPHI_PACKAGE System::ResourceString _SOpenStandartServices;
#define Fmx_Consts_SOpenStandartServices System::LoadResourceString(&Fmx::Consts::_SOpenStandartServices)
extern DELPHI_PACKAGE System::ResourceString _SSavedPhotoAlbum;
#define Fmx_Consts_SSavedPhotoAlbum System::LoadResourceString(&Fmx::Consts::_SSavedPhotoAlbum)
extern DELPHI_PACKAGE System::ResourceString _SImageSaved;
#define Fmx_Consts_SImageSaved System::LoadResourceString(&Fmx::Consts::_SImageSaved)
extern DELPHI_PACKAGE System::ResourceString _SBitmapIncorrectSize;
#define Fmx_Consts_SBitmapIncorrectSize System::LoadResourceString(&Fmx::Consts::_SBitmapIncorrectSize)
extern DELPHI_PACKAGE System::ResourceString _SBitmapLoadingFailed;
#define Fmx_Consts_SBitmapLoadingFailed System::LoadResourceString(&Fmx::Consts::_SBitmapLoadingFailed)
extern DELPHI_PACKAGE System::ResourceString _SBitmapLoadingFailedNamed;
#define Fmx_Consts_SBitmapLoadingFailedNamed System::LoadResourceString(&Fmx::Consts::_SBitmapLoadingFailedNamed)
extern DELPHI_PACKAGE System::ResourceString _SBitmapSizeTooBig;
#define Fmx_Consts_SBitmapSizeTooBig System::LoadResourceString(&Fmx::Consts::_SBitmapSizeTooBig)
extern DELPHI_PACKAGE System::ResourceString _SInvalidCanvasParameter;
#define Fmx_Consts_SInvalidCanvasParameter System::LoadResourceString(&Fmx::Consts::_SInvalidCanvasParameter)
extern DELPHI_PACKAGE System::ResourceString _SThumbnailLoadingFailed;
#define Fmx_Consts_SThumbnailLoadingFailed System::LoadResourceString(&Fmx::Consts::_SThumbnailLoadingFailed)
extern DELPHI_PACKAGE System::ResourceString _SThumbnailLoadingFailedNamed;
#define Fmx_Consts_SThumbnailLoadingFailedNamed System::LoadResourceString(&Fmx::Consts::_SThumbnailLoadingFailedNamed)
extern DELPHI_PACKAGE System::ResourceString _SBitmapSavingFailed;
#define Fmx_Consts_SBitmapSavingFailed System::LoadResourceString(&Fmx::Consts::_SBitmapSavingFailed)
extern DELPHI_PACKAGE System::ResourceString _SBitmapSavingFailedNamed;
#define Fmx_Consts_SBitmapSavingFailedNamed System::LoadResourceString(&Fmx::Consts::_SBitmapSavingFailedNamed)
extern DELPHI_PACKAGE System::ResourceString _SBitmapFormatUnsupported;
#define Fmx_Consts_SBitmapFormatUnsupported System::LoadResourceString(&Fmx::Consts::_SBitmapFormatUnsupported)
extern DELPHI_PACKAGE System::ResourceString _SRetrieveSurfaceDescription;
#define Fmx_Consts_SRetrieveSurfaceDescription System::LoadResourceString(&Fmx::Consts::_SRetrieveSurfaceDescription)
extern DELPHI_PACKAGE System::ResourceString _SRetrieveSurfaceContents;
#define Fmx_Consts_SRetrieveSurfaceContents System::LoadResourceString(&Fmx::Consts::_SRetrieveSurfaceContents)
extern DELPHI_PACKAGE System::ResourceString _SAcquireBitmapAccess;
#define Fmx_Consts_SAcquireBitmapAccess System::LoadResourceString(&Fmx::Consts::_SAcquireBitmapAccess)
extern DELPHI_PACKAGE System::ResourceString _SVideoCaptureFault;
#define Fmx_Consts_SVideoCaptureFault System::LoadResourceString(&Fmx::Consts::_SVideoCaptureFault)
extern DELPHI_PACKAGE System::ResourceString _SNoCaptureDeviceManager;
#define Fmx_Consts_SNoCaptureDeviceManager System::LoadResourceString(&Fmx::Consts::_SNoCaptureDeviceManager)
extern DELPHI_PACKAGE System::ResourceString _SAudioCaptureUnauthorized;
#define Fmx_Consts_SAudioCaptureUnauthorized System::LoadResourceString(&Fmx::Consts::_SAudioCaptureUnauthorized)
extern DELPHI_PACKAGE System::ResourceString _SVideoCaptureUnauthorized;
#define Fmx_Consts_SVideoCaptureUnauthorized System::LoadResourceString(&Fmx::Consts::_SVideoCaptureUnauthorized)
extern DELPHI_PACKAGE System::ResourceString _SInvalidCallingConditions;
#define Fmx_Consts_SInvalidCallingConditions System::LoadResourceString(&Fmx::Consts::_SInvalidCallingConditions)
extern DELPHI_PACKAGE System::ResourceString _SInvalidRenderingConditions;
#define Fmx_Consts_SInvalidRenderingConditions System::LoadResourceString(&Fmx::Consts::_SInvalidRenderingConditions)
extern DELPHI_PACKAGE System::ResourceString _STextureSizeTooSmall;
#define Fmx_Consts_STextureSizeTooSmall System::LoadResourceString(&Fmx::Consts::_STextureSizeTooSmall)
extern DELPHI_PACKAGE System::ResourceString _SCannotAcquireBitmapAccess;
#define Fmx_Consts_SCannotAcquireBitmapAccess System::LoadResourceString(&Fmx::Consts::_SCannotAcquireBitmapAccess)
extern DELPHI_PACKAGE System::ResourceString _SCannotFindSuitablePixelFormat;
#define Fmx_Consts_SCannotFindSuitablePixelFormat System::LoadResourceString(&Fmx::Consts::_SCannotFindSuitablePixelFormat)
extern DELPHI_PACKAGE System::ResourceString _SCannotFindSuitableShader;
#define Fmx_Consts_SCannotFindSuitableShader System::LoadResourceString(&Fmx::Consts::_SCannotFindSuitableShader)
extern DELPHI_PACKAGE System::ResourceString _SCannotDetermineDirect3DLevel;
#define Fmx_Consts_SCannotDetermineDirect3DLevel System::LoadResourceString(&Fmx::Consts::_SCannotDetermineDirect3DLevel)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateDirect3D;
#define Fmx_Consts_SCannotCreateDirect3D System::LoadResourceString(&Fmx::Consts::_SCannotCreateDirect3D)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateD2DFactory;
#define Fmx_Consts_SCannotCreateD2DFactory System::LoadResourceString(&Fmx::Consts::_SCannotCreateD2DFactory)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateDWriteFactory;
#define Fmx_Consts_SCannotCreateDWriteFactory System::LoadResourceString(&Fmx::Consts::_SCannotCreateDWriteFactory)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateWICImagingFactory;
#define Fmx_Consts_SCannotCreateWICImagingFactory System::LoadResourceString(&Fmx::Consts::_SCannotCreateWICImagingFactory)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateRenderTarget;
#define Fmx_Consts_SCannotCreateRenderTarget System::LoadResourceString(&Fmx::Consts::_SCannotCreateRenderTarget)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateD3DDevice;
#define Fmx_Consts_SCannotCreateD3DDevice System::LoadResourceString(&Fmx::Consts::_SCannotCreateD3DDevice)
extern DELPHI_PACKAGE System::ResourceString _SCannotAcquireDXGIFactory;
#define Fmx_Consts_SCannotAcquireDXGIFactory System::LoadResourceString(&Fmx::Consts::_SCannotAcquireDXGIFactory)
extern DELPHI_PACKAGE System::ResourceString _SCannotResizeBuffers;
#define Fmx_Consts_SCannotResizeBuffers System::LoadResourceString(&Fmx::Consts::_SCannotResizeBuffers)
extern DELPHI_PACKAGE System::ResourceString _SCannotAssociateWindowHandle;
#define Fmx_Consts_SCannotAssociateWindowHandle System::LoadResourceString(&Fmx::Consts::_SCannotAssociateWindowHandle)
extern DELPHI_PACKAGE System::ResourceString _SCannotRetrieveDisplayMode;
#define Fmx_Consts_SCannotRetrieveDisplayMode System::LoadResourceString(&Fmx::Consts::_SCannotRetrieveDisplayMode)
extern DELPHI_PACKAGE System::ResourceString _SCannotRetrieveBufferDesc;
#define Fmx_Consts_SCannotRetrieveBufferDesc System::LoadResourceString(&Fmx::Consts::_SCannotRetrieveBufferDesc)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateSamplerState;
#define Fmx_Consts_SCannotCreateSamplerState System::LoadResourceString(&Fmx::Consts::_SCannotCreateSamplerState)
extern DELPHI_PACKAGE System::ResourceString _SCannotRetrieveSurface;
#define Fmx_Consts_SCannotRetrieveSurface System::LoadResourceString(&Fmx::Consts::_SCannotRetrieveSurface)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateTexture;
#define Fmx_Consts_SCannotCreateTexture System::LoadResourceString(&Fmx::Consts::_SCannotCreateTexture)
extern DELPHI_PACKAGE System::ResourceString _SCannotUploadTexture;
#define Fmx_Consts_SCannotUploadTexture System::LoadResourceString(&Fmx::Consts::_SCannotUploadTexture)
extern DELPHI_PACKAGE System::ResourceString _SCannotActivateTexture;
#define Fmx_Consts_SCannotActivateTexture System::LoadResourceString(&Fmx::Consts::_SCannotActivateTexture)
extern DELPHI_PACKAGE System::ResourceString _SCannotAcquireTextureAccess;
#define Fmx_Consts_SCannotAcquireTextureAccess System::LoadResourceString(&Fmx::Consts::_SCannotAcquireTextureAccess)
extern DELPHI_PACKAGE System::ResourceString _SCannotCopyTextureResource;
#define Fmx_Consts_SCannotCopyTextureResource System::LoadResourceString(&Fmx::Consts::_SCannotCopyTextureResource)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateRenderTargetView;
#define Fmx_Consts_SCannotCreateRenderTargetView System::LoadResourceString(&Fmx::Consts::_SCannotCreateRenderTargetView)
extern DELPHI_PACKAGE System::ResourceString _SCannotActivateFrameBuffers;
#define Fmx_Consts_SCannotActivateFrameBuffers System::LoadResourceString(&Fmx::Consts::_SCannotActivateFrameBuffers)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateRenderBuffers;
#define Fmx_Consts_SCannotCreateRenderBuffers System::LoadResourceString(&Fmx::Consts::_SCannotCreateRenderBuffers)
extern DELPHI_PACKAGE System::ResourceString _SCannotRetrieveRenderBuffers;
#define Fmx_Consts_SCannotRetrieveRenderBuffers System::LoadResourceString(&Fmx::Consts::_SCannotRetrieveRenderBuffers)
extern DELPHI_PACKAGE System::ResourceString _SCannotActivateRenderBuffers;
#define Fmx_Consts_SCannotActivateRenderBuffers System::LoadResourceString(&Fmx::Consts::_SCannotActivateRenderBuffers)
extern DELPHI_PACKAGE System::ResourceString _SCannotBeginRenderingScene;
#define Fmx_Consts_SCannotBeginRenderingScene System::LoadResourceString(&Fmx::Consts::_SCannotBeginRenderingScene)
extern DELPHI_PACKAGE System::ResourceString _SCannotSyncDeviceBuffers;
#define Fmx_Consts_SCannotSyncDeviceBuffers System::LoadResourceString(&Fmx::Consts::_SCannotSyncDeviceBuffers)
extern DELPHI_PACKAGE System::ResourceString _SCannotUploadDeviceBuffers;
#define Fmx_Consts_SCannotUploadDeviceBuffers System::LoadResourceString(&Fmx::Consts::_SCannotUploadDeviceBuffers)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateDepthStencil;
#define Fmx_Consts_SCannotCreateDepthStencil System::LoadResourceString(&Fmx::Consts::_SCannotCreateDepthStencil)
extern DELPHI_PACKAGE System::ResourceString _SCannotRetrieveDepthStencil;
#define Fmx_Consts_SCannotRetrieveDepthStencil System::LoadResourceString(&Fmx::Consts::_SCannotRetrieveDepthStencil)
extern DELPHI_PACKAGE System::ResourceString _SCannotActivateDepthStencil;
#define Fmx_Consts_SCannotActivateDepthStencil System::LoadResourceString(&Fmx::Consts::_SCannotActivateDepthStencil)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateSwapChain;
#define Fmx_Consts_SCannotCreateSwapChain System::LoadResourceString(&Fmx::Consts::_SCannotCreateSwapChain)
extern DELPHI_PACKAGE System::ResourceString _SCannotResizeSwapChain;
#define Fmx_Consts_SCannotResizeSwapChain System::LoadResourceString(&Fmx::Consts::_SCannotResizeSwapChain)
extern DELPHI_PACKAGE System::ResourceString _SCannotActivateSwapChain;
#define Fmx_Consts_SCannotActivateSwapChain System::LoadResourceString(&Fmx::Consts::_SCannotActivateSwapChain)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateVertexShader;
#define Fmx_Consts_SCannotCreateVertexShader System::LoadResourceString(&Fmx::Consts::_SCannotCreateVertexShader)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreatePixelShader;
#define Fmx_Consts_SCannotCreatePixelShader System::LoadResourceString(&Fmx::Consts::_SCannotCreatePixelShader)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateVertexLayout;
#define Fmx_Consts_SCannotCreateVertexLayout System::LoadResourceString(&Fmx::Consts::_SCannotCreateVertexLayout)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateVertexDeclaration;
#define Fmx_Consts_SCannotCreateVertexDeclaration System::LoadResourceString(&Fmx::Consts::_SCannotCreateVertexDeclaration)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateVertexBuffer;
#define Fmx_Consts_SCannotCreateVertexBuffer System::LoadResourceString(&Fmx::Consts::_SCannotCreateVertexBuffer)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateIndexBuffer;
#define Fmx_Consts_SCannotCreateIndexBuffer System::LoadResourceString(&Fmx::Consts::_SCannotCreateIndexBuffer)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateShader;
#define Fmx_Consts_SCannotCreateShader System::LoadResourceString(&Fmx::Consts::_SCannotCreateShader)
extern DELPHI_PACKAGE System::ResourceString _SCannotFindShaderVariable;
#define Fmx_Consts_SCannotFindShaderVariable System::LoadResourceString(&Fmx::Consts::_SCannotFindShaderVariable)
extern DELPHI_PACKAGE System::ResourceString _SCannotActivateShaderProgram;
#define Fmx_Consts_SCannotActivateShaderProgram System::LoadResourceString(&Fmx::Consts::_SCannotActivateShaderProgram)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateMetalContext;
#define Fmx_Consts_SCannotCreateMetalContext System::LoadResourceString(&Fmx::Consts::_SCannotCreateMetalContext)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateOpenGLContext;
#define Fmx_Consts_SCannotCreateOpenGLContext System::LoadResourceString(&Fmx::Consts::_SCannotCreateOpenGLContext)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateOpenGLContextWithCode;
#define Fmx_Consts_SCannotCreateOpenGLContextWithCode System::LoadResourceString(&Fmx::Consts::_SCannotCreateOpenGLContextWithCode)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreatePBufferSurfaceWithCode;
#define Fmx_Consts_SCannotCreatePBufferSurfaceWithCode System::LoadResourceString(&Fmx::Consts::_SCannotCreatePBufferSurfaceWithCode)
extern DELPHI_PACKAGE System::ResourceString _SCannotUpdateOpenGLContext;
#define Fmx_Consts_SCannotUpdateOpenGLContext System::LoadResourceString(&Fmx::Consts::_SCannotUpdateOpenGLContext)
extern DELPHI_PACKAGE System::ResourceString _SOpenGLErrorFlag;
#define Fmx_Consts_SOpenGLErrorFlag System::LoadResourceString(&Fmx::Consts::_SOpenGLErrorFlag)
extern DELPHI_PACKAGE System::ResourceString _SOpenGLCannotCreateDummyContext;
#define Fmx_Consts_SOpenGLCannotCreateDummyContext System::LoadResourceString(&Fmx::Consts::_SOpenGLCannotCreateDummyContext)
extern DELPHI_PACKAGE System::ResourceString _SCannotDrawMeshObject;
#define Fmx_Consts_SCannotDrawMeshObject System::LoadResourceString(&Fmx::Consts::_SCannotDrawMeshObject)
extern DELPHI_PACKAGE System::ResourceString _SErrorInContextMethod;
#define Fmx_Consts_SErrorInContextMethod System::LoadResourceString(&Fmx::Consts::_SErrorInContextMethod)
extern DELPHI_PACKAGE System::ResourceString _SFeatureNotSupported;
#define Fmx_Consts_SFeatureNotSupported System::LoadResourceString(&Fmx::Consts::_SFeatureNotSupported)
extern DELPHI_PACKAGE System::ResourceString _SErrorCompressingStream;
#define Fmx_Consts_SErrorCompressingStream System::LoadResourceString(&Fmx::Consts::_SErrorCompressingStream)
extern DELPHI_PACKAGE System::ResourceString _SErrorDecompressingStream;
#define Fmx_Consts_SErrorDecompressingStream System::LoadResourceString(&Fmx::Consts::_SErrorDecompressingStream)
extern DELPHI_PACKAGE System::ResourceString _SErrorUnpackingShaderCode;
#define Fmx_Consts_SErrorUnpackingShaderCode System::LoadResourceString(&Fmx::Consts::_SErrorUnpackingShaderCode)
extern DELPHI_PACKAGE System::ResourceString _SCannotPaintOnCanvasWithoutBeginScene;
#define Fmx_Consts_SCannotPaintOnCanvasWithoutBeginScene System::LoadResourceString(&Fmx::Consts::_SCannotPaintOnCanvasWithoutBeginScene)
extern DELPHI_PACKAGE System::ResourceString _SCannotRunDirectShowFilterGraph;
#define Fmx_Consts_SCannotRunDirectShowFilterGraph System::LoadResourceString(&Fmx::Consts::_SCannotRunDirectShowFilterGraph)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateDirectShowCaptureFilter;
#define Fmx_Consts_SCannotCreateDirectShowCaptureFilter System::LoadResourceString(&Fmx::Consts::_SCannotCreateDirectShowCaptureFilter)
extern DELPHI_PACKAGE System::ResourceString _SCannotAddFixedSize;
#define Fmx_Consts_SCannotAddFixedSize System::LoadResourceString(&Fmx::Consts::_SCannotAddFixedSize)
extern DELPHI_PACKAGE System::ResourceString _SInvalidSpan;
#define Fmx_Consts_SInvalidSpan System::LoadResourceString(&Fmx::Consts::_SInvalidSpan)
extern DELPHI_PACKAGE System::ResourceString _SInvalidRowIndex;
#define Fmx_Consts_SInvalidRowIndex System::LoadResourceString(&Fmx::Consts::_SInvalidRowIndex)
extern DELPHI_PACKAGE System::ResourceString _SInvalidColumnIndex;
#define Fmx_Consts_SInvalidColumnIndex System::LoadResourceString(&Fmx::Consts::_SInvalidColumnIndex)
extern DELPHI_PACKAGE System::ResourceString _SInvalidControlItem;
#define Fmx_Consts_SInvalidControlItem System::LoadResourceString(&Fmx::Consts::_SInvalidControlItem)
extern DELPHI_PACKAGE System::ResourceString _SCannotDeleteColumn;
#define Fmx_Consts_SCannotDeleteColumn System::LoadResourceString(&Fmx::Consts::_SCannotDeleteColumn)
extern DELPHI_PACKAGE System::ResourceString _SCannotDeleteDefColumn;
#define Fmx_Consts_SCannotDeleteDefColumn System::LoadResourceString(&Fmx::Consts::_SCannotDeleteDefColumn)
extern DELPHI_PACKAGE System::ResourceString _SCannotDeleteRow;
#define Fmx_Consts_SCannotDeleteRow System::LoadResourceString(&Fmx::Consts::_SCannotDeleteRow)
extern DELPHI_PACKAGE System::ResourceString _SCellMember;
#define Fmx_Consts_SCellMember System::LoadResourceString(&Fmx::Consts::_SCellMember)
extern DELPHI_PACKAGE System::ResourceString _SCellSizeType;
#define Fmx_Consts_SCellSizeType System::LoadResourceString(&Fmx::Consts::_SCellSizeType)
extern DELPHI_PACKAGE System::ResourceString _SCellValue;
#define Fmx_Consts_SCellValue System::LoadResourceString(&Fmx::Consts::_SCellValue)
extern DELPHI_PACKAGE System::ResourceString _SCellAutoSize;
#define Fmx_Consts_SCellAutoSize System::LoadResourceString(&Fmx::Consts::_SCellAutoSize)
extern DELPHI_PACKAGE System::ResourceString _SCellPercentSize;
#define Fmx_Consts_SCellPercentSize System::LoadResourceString(&Fmx::Consts::_SCellPercentSize)
extern DELPHI_PACKAGE System::ResourceString _SCellAbsoluteSize;
#define Fmx_Consts_SCellAbsoluteSize System::LoadResourceString(&Fmx::Consts::_SCellAbsoluteSize)
extern DELPHI_PACKAGE System::ResourceString _SCellColumn;
#define Fmx_Consts_SCellColumn System::LoadResourceString(&Fmx::Consts::_SCellColumn)
extern DELPHI_PACKAGE System::ResourceString _SCellRow;
#define Fmx_Consts_SCellRow System::LoadResourceString(&Fmx::Consts::_SCellRow)
extern DELPHI_PACKAGE System::ResourceString _SDateTimeMax;
#define Fmx_Consts_SDateTimeMax System::LoadResourceString(&Fmx::Consts::_SDateTimeMax)
extern DELPHI_PACKAGE System::ResourceString _SDateTimeMin;
#define Fmx_Consts_SDateTimeMin System::LoadResourceString(&Fmx::Consts::_SDateTimeMin)
extern DELPHI_PACKAGE System::ResourceString _SDateTimePickerShowModeNotSupported;
#define Fmx_Consts_SDateTimePickerShowModeNotSupported System::LoadResourceString(&Fmx::Consts::_SDateTimePickerShowModeNotSupported)
extern DELPHI_PACKAGE System::ResourceString _SMediaLibraryOpenImageWith;
#define Fmx_Consts_SMediaLibraryOpenImageWith System::LoadResourceString(&Fmx::Consts::_SMediaLibraryOpenImageWith)
extern DELPHI_PACKAGE System::ResourceString _SMediaLibraryOpenTextWith;
#define Fmx_Consts_SMediaLibraryOpenTextWith System::LoadResourceString(&Fmx::Consts::_SMediaLibraryOpenTextWith)
extern DELPHI_PACKAGE System::ResourceString _SMediaLibraryOpenTextAndImageWith;
#define Fmx_Consts_SMediaLibraryOpenTextAndImageWith System::LoadResourceString(&Fmx::Consts::_SMediaLibraryOpenTextAndImageWith)
extern DELPHI_PACKAGE System::ResourceString _SNativePresentation;
#define Fmx_Consts_SNativePresentation System::LoadResourceString(&Fmx::Consts::_SNativePresentation)
extern DELPHI_PACKAGE System::ResourceString _SIAPNotSetup;
#define Fmx_Consts_SIAPNotSetup System::LoadResourceString(&Fmx::Consts::_SIAPNotSetup)
extern DELPHI_PACKAGE System::ResourceString _SIAPNoLicenseKey;
#define Fmx_Consts_SIAPNoLicenseKey System::LoadResourceString(&Fmx::Consts::_SIAPNoLicenseKey)
extern DELPHI_PACKAGE System::ResourceString _SIAPPayloadVerificationFailed;
#define Fmx_Consts_SIAPPayloadVerificationFailed System::LoadResourceString(&Fmx::Consts::_SIAPPayloadVerificationFailed)
extern DELPHI_PACKAGE System::ResourceString _SIAPAlreadyPurchased;
#define Fmx_Consts_SIAPAlreadyPurchased System::LoadResourceString(&Fmx::Consts::_SIAPAlreadyPurchased)
extern DELPHI_PACKAGE System::ResourceString _SIAPNotAlreadyPurchased;
#define Fmx_Consts_SIAPNotAlreadyPurchased System::LoadResourceString(&Fmx::Consts::_SIAPNotAlreadyPurchased)
extern DELPHI_PACKAGE System::ResourceString _SIAPSetupProblem;
#define Fmx_Consts_SIAPSetupProblem System::LoadResourceString(&Fmx::Consts::_SIAPSetupProblem)
extern DELPHI_PACKAGE System::ResourceString _SIAPIllegalArguments;
#define Fmx_Consts_SIAPIllegalArguments System::LoadResourceString(&Fmx::Consts::_SIAPIllegalArguments)
extern DELPHI_PACKAGE System::ResourceString _SITunesConnectionError;
#define Fmx_Consts_SITunesConnectionError System::LoadResourceString(&Fmx::Consts::_SITunesConnectionError)
extern DELPHI_PACKAGE System::ResourceString _SProductsRequestInProgress;
#define Fmx_Consts_SProductsRequestInProgress System::LoadResourceString(&Fmx::Consts::_SProductsRequestInProgress)
extern DELPHI_PACKAGE System::ResourceString _SIAPProductNotInInventory;
#define Fmx_Consts_SIAPProductNotInInventory System::LoadResourceString(&Fmx::Consts::_SIAPProductNotInInventory)
extern DELPHI_PACKAGE System::ResourceString _SAdFailedToLoadError;
#define Fmx_Consts_SAdFailedToLoadError System::LoadResourceString(&Fmx::Consts::_SAdFailedToLoadError)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreatePresentation;
#define Fmx_Consts_SCannotCreatePresentation System::LoadResourceString(&Fmx::Consts::_SCannotCreatePresentation)
extern DELPHI_PACKAGE System::ResourceString _SDrawer;
#define Fmx_Consts_SDrawer System::LoadResourceString(&Fmx::Consts::_SDrawer)
extern DELPHI_PACKAGE System::ResourceString _SOverlapDrawer;
#define Fmx_Consts_SOverlapDrawer System::LoadResourceString(&Fmx::Consts::_SOverlapDrawer)
extern DELPHI_PACKAGE System::ResourceString _SDockedPanel;
#define Fmx_Consts_SDockedPanel System::LoadResourceString(&Fmx::Consts::_SDockedPanel)
extern DELPHI_PACKAGE System::ResourceString _SPopover;
#define Fmx_Consts_SPopover System::LoadResourceString(&Fmx::Consts::_SPopover)
extern DELPHI_PACKAGE System::ResourceString _SNavigationPane;
#define Fmx_Consts_SNavigationPane System::LoadResourceString(&Fmx::Consts::_SNavigationPane)
extern DELPHI_PACKAGE System::ResourceString _SObjectCannotBeChild;
#define Fmx_Consts_SObjectCannotBeChild System::LoadResourceString(&Fmx::Consts::_SObjectCannotBeChild)
extern DELPHI_PACKAGE System::ResourceString _SWrongModelClassType;
#define Fmx_Consts_SWrongModelClassType System::LoadResourceString(&Fmx::Consts::_SWrongModelClassType)
extern DELPHI_PACKAGE System::ResourceString _SWrongParameter;
#define Fmx_Consts_SWrongParameter System::LoadResourceString(&Fmx::Consts::_SWrongParameter)
extern DELPHI_PACKAGE System::ResourceString _SControlWithoutPresentation;
#define Fmx_Consts_SControlWithoutPresentation System::LoadResourceString(&Fmx::Consts::_SControlWithoutPresentation)
extern DELPHI_PACKAGE System::ResourceString _SControlClassIsNil;
#define Fmx_Consts_SControlClassIsNil System::LoadResourceString(&Fmx::Consts::_SControlClassIsNil)
extern DELPHI_PACKAGE System::ResourceString _SPresentationProxyCreateError;
#define Fmx_Consts_SPresentationProxyCreateError System::LoadResourceString(&Fmx::Consts::_SPresentationProxyCreateError)
extern DELPHI_PACKAGE System::ResourceString _SPresentationProxyClassNotFound;
#define Fmx_Consts_SPresentationProxyClassNotFound System::LoadResourceString(&Fmx::Consts::_SPresentationProxyClassNotFound)
extern DELPHI_PACKAGE System::ResourceString _SPresentationProxyClassIsNil;
#define Fmx_Consts_SPresentationProxyClassIsNil System::LoadResourceString(&Fmx::Consts::_SPresentationProxyClassIsNil)
extern DELPHI_PACKAGE System::ResourceString _SPresentationProxyNameIsEmpty;
#define Fmx_Consts_SPresentationProxyNameIsEmpty System::LoadResourceString(&Fmx::Consts::_SPresentationProxyNameIsEmpty)
extern DELPHI_PACKAGE System::ResourceString _SPresentationAlreadyRegistered;
#define Fmx_Consts_SPresentationAlreadyRegistered System::LoadResourceString(&Fmx::Consts::_SPresentationAlreadyRegistered)
extern DELPHI_PACKAGE System::ResourceString _SPresentationTitleInDesignTime;
#define Fmx_Consts_SPresentationTitleInDesignTime System::LoadResourceString(&Fmx::Consts::_SPresentationTitleInDesignTime)
extern DELPHI_PACKAGE System::ResourceString _SProxyIsNotRegisteredWarning;
#define Fmx_Consts_SProxyIsNotRegisteredWarning System::LoadResourceString(&Fmx::Consts::_SProxyIsNotRegisteredWarning)
extern DELPHI_PACKAGE System::ResourceString _SScrollBoxOwnerWrong;
#define Fmx_Consts_SScrollBoxOwnerWrong System::LoadResourceString(&Fmx::Consts::_SScrollBoxOwnerWrong)
extern DELPHI_PACKAGE System::ResourceString _SScrollBoxAniCalculations;
#define Fmx_Consts_SScrollBoxAniCalculations System::LoadResourceString(&Fmx::Consts::_SScrollBoxAniCalculations)
extern DELPHI_PACKAGE System::ResourceString _SDataModelKeyEmpty;
#define Fmx_Consts_SDataModelKeyEmpty System::LoadResourceString(&Fmx::Consts::_SDataModelKeyEmpty)
extern DELPHI_PACKAGE System::ResourceString _SInvalidActivityTrackingAppID;
#define Fmx_Consts_SInvalidActivityTrackingAppID System::LoadResourceString(&Fmx::Consts::_SInvalidActivityTrackingAppID)
extern DELPHI_PACKAGE System::ResourceString _SAppAnalyticsDefaultPrivacyMessage;
#define Fmx_Consts_SAppAnalyticsDefaultPrivacyMessage System::LoadResourceString(&Fmx::Consts::_SAppAnalyticsDefaultPrivacyMessage)
extern DELPHI_PACKAGE System::ResourceString _SCustomAnalyticsCategoryMissing;
#define Fmx_Consts_SCustomAnalyticsCategoryMissing System::LoadResourceString(&Fmx::Consts::_SCustomAnalyticsCategoryMissing)
extern DELPHI_PACKAGE System::ResourceString _SFormatAlreadyRegistered;
#define Fmx_Consts_SFormatAlreadyRegistered System::LoadResourceString(&Fmx::Consts::_SFormatAlreadyRegistered)
extern DELPHI_PACKAGE System::ResourceString _SFormatWasNotRegistered;
#define Fmx_Consts_SFormatWasNotRegistered System::LoadResourceString(&Fmx::Consts::_SFormatWasNotRegistered)
extern DELPHI_PACKAGE System::ResourceString _SDoesnotSupportCustomData;
#define Fmx_Consts_SDoesnotSupportCustomData System::LoadResourceString(&Fmx::Consts::_SDoesnotSupportCustomData)
extern DELPHI_PACKAGE System::ResourceString _SCannotConvertDelphiArrayToJStringArray;
#define Fmx_Consts_SCannotConvertDelphiArrayToJStringArray System::LoadResourceString(&Fmx::Consts::_SCannotConvertDelphiArrayToJStringArray)
extern DELPHI_PACKAGE System::ResourceString _SCannotPerformOperation;
#define Fmx_Consts_SCannotPerformOperation System::LoadResourceString(&Fmx::Consts::_SCannotPerformOperation)
extern DELPHI_PACKAGE System::ResourceString _SCannotPerformOperationRejectedAccess;
#define Fmx_Consts_SCannotPerformOperationRejectedAccess System::LoadResourceString(&Fmx::Consts::_SCannotPerformOperationRejectedAccess)
extern DELPHI_PACKAGE System::ResourceString _SRequiredPermissionsAreAbsent;
#define Fmx_Consts_SRequiredPermissionsAreAbsent System::LoadResourceString(&Fmx::Consts::_SRequiredPermissionsAreAbsent)
extern DELPHI_PACKAGE System::ResourceString _SPermissionCannotChangeDataInAddressBook;
#define Fmx_Consts_SPermissionCannotChangeDataInAddressBook System::LoadResourceString(&Fmx::Consts::_SPermissionCannotChangeDataInAddressBook)
extern DELPHI_PACKAGE System::ResourceString _SPermissionCannotGetDataFromAddressBook;
#define Fmx_Consts_SPermissionCannotGetDataFromAddressBook System::LoadResourceString(&Fmx::Consts::_SPermissionCannotGetDataFromAddressBook)
extern DELPHI_PACKAGE System::ResourceString _SPermissionCannotGetAccounts;
#define Fmx_Consts_SPermissionCannotGetAccounts System::LoadResourceString(&Fmx::Consts::_SPermissionCannotGetAccounts)
extern DELPHI_PACKAGE System::ResourceString _SUserRejectedAddressBookPermission;
#define Fmx_Consts_SUserRejectedAddressBookPermission System::LoadResourceString(&Fmx::Consts::_SUserRejectedAddressBookPermission)
extern DELPHI_PACKAGE System::ResourceString _SUserRejectedCaptureDevicePermission;
#define Fmx_Consts_SUserRejectedCaptureDevicePermission System::LoadResourceString(&Fmx::Consts::_SUserRejectedCaptureDevicePermission)
extern DELPHI_PACKAGE System::ResourceString _SPermissionsRequestHasBeenCancelled;
#define Fmx_Consts_SPermissionsRequestHasBeenCancelled System::LoadResourceString(&Fmx::Consts::_SPermissionsRequestHasBeenCancelled)
extern DELPHI_PACKAGE System::ResourceString _SCannotSaveAddressBookChanges;
#define Fmx_Consts_SCannotSaveAddressBookChanges System::LoadResourceString(&Fmx::Consts::_SCannotSaveAddressBookChanges)
extern DELPHI_PACKAGE System::ResourceString _SFieldTypeIsNotSupportedOnCurrentPlatform;
#define Fmx_Consts_SFieldTypeIsNotSupportedOnCurrentPlatform System::LoadResourceString(&Fmx::Consts::_SFieldTypeIsNotSupportedOnCurrentPlatform)
extern DELPHI_PACKAGE System::ResourceString _SCannotSaveFieldValue;
#define Fmx_Consts_SCannotSaveFieldValue System::LoadResourceString(&Fmx::Consts::_SCannotSaveFieldValue)
extern DELPHI_PACKAGE System::ResourceString _SCannotGetDisplayName;
#define Fmx_Consts_SCannotGetDisplayName System::LoadResourceString(&Fmx::Consts::_SCannotGetDisplayName)
extern DELPHI_PACKAGE System::ResourceString _SCannotExtractContactID;
#define Fmx_Consts_SCannotExtractContactID System::LoadResourceString(&Fmx::Consts::_SCannotExtractContactID)
extern DELPHI_PACKAGE System::ResourceString _SCannotCheckExistingDataRecord;
#define Fmx_Consts_SCannotCheckExistingDataRecord System::LoadResourceString(&Fmx::Consts::_SCannotCheckExistingDataRecord)
extern DELPHI_PACKAGE System::ResourceString _SCannotExtractAddresses;
#define Fmx_Consts_SCannotExtractAddresses System::LoadResourceString(&Fmx::Consts::_SCannotExtractAddresses)
extern DELPHI_PACKAGE System::ResourceString _SCannotExtractMessagingServices;
#define Fmx_Consts_SCannotExtractMessagingServices System::LoadResourceString(&Fmx::Consts::_SCannotExtractMessagingServices)
extern DELPHI_PACKAGE System::ResourceString _SCannotExtractDates;
#define Fmx_Consts_SCannotExtractDates System::LoadResourceString(&Fmx::Consts::_SCannotExtractDates)
extern DELPHI_PACKAGE System::ResourceString _SCannotExtractMultipleStringValue;
#define Fmx_Consts_SCannotExtractMultipleStringValue System::LoadResourceString(&Fmx::Consts::_SCannotExtractMultipleStringValue)
extern DELPHI_PACKAGE System::ResourceString _SCannotExtractStringValue;
#define Fmx_Consts_SCannotExtractStringValue System::LoadResourceString(&Fmx::Consts::_SCannotExtractStringValue)
extern DELPHI_PACKAGE System::ResourceString _SSocialProfilesAreNotSupported;
#define Fmx_Consts_SSocialProfilesAreNotSupported System::LoadResourceString(&Fmx::Consts::_SSocialProfilesAreNotSupported)
extern DELPHI_PACKAGE System::ResourceString _SCannotConvertTBitmapToJBitmap;
#define Fmx_Consts_SCannotConvertTBitmapToJBitmap System::LoadResourceString(&Fmx::Consts::_SCannotConvertTBitmapToJBitmap)
extern DELPHI_PACKAGE System::ResourceString _SCannotBeginNewProcessing;
#define Fmx_Consts_SCannotBeginNewProcessing System::LoadResourceString(&Fmx::Consts::_SCannotBeginNewProcessing)
extern DELPHI_PACKAGE System::ResourceString _SCannotFetchAllSourcesNilArg;
#define Fmx_Consts_SCannotFetchAllSourcesNilArg System::LoadResourceString(&Fmx::Consts::_SCannotFetchAllSourcesNilArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateSource;
#define Fmx_Consts_SCannotCreateSource System::LoadResourceString(&Fmx::Consts::_SCannotCreateSource)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateSourceNilArg;
#define Fmx_Consts_SCannotCreateSourceNilArg System::LoadResourceString(&Fmx::Consts::_SCannotCreateSourceNilArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotGetSourceNameSourceRefRefNil;
#define Fmx_Consts_SCannotGetSourceNameSourceRefRefNil System::LoadResourceString(&Fmx::Consts::_SCannotGetSourceNameSourceRefRefNil)
extern DELPHI_PACKAGE System::ResourceString _SCannotGetSourceTypeSourceRefRefNil;
#define Fmx_Consts_SCannotGetSourceTypeSourceRefRefNil System::LoadResourceString(&Fmx::Consts::_SCannotGetSourceTypeSourceRefRefNil)
extern DELPHI_PACKAGE System::ResourceString _SCannotFetchContacts;
#define Fmx_Consts_SCannotFetchContacts System::LoadResourceString(&Fmx::Consts::_SCannotFetchContacts)
extern DELPHI_PACKAGE System::ResourceString _SCannotFetchAllContactsWrongClassArg;
#define Fmx_Consts_SCannotFetchAllContactsWrongClassArg System::LoadResourceString(&Fmx::Consts::_SCannotFetchAllContactsWrongClassArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotFetchAllContactNilArg;
#define Fmx_Consts_SCannotFetchAllContactNilArg System::LoadResourceString(&Fmx::Consts::_SCannotFetchAllContactNilArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotFetchAllGroupsFromContact;
#define Fmx_Consts_SCannotFetchAllGroupsFromContact System::LoadResourceString(&Fmx::Consts::_SCannotFetchAllGroupsFromContact)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateContact;
#define Fmx_Consts_SCannotCreateContact System::LoadResourceString(&Fmx::Consts::_SCannotCreateContact)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateContactNilArg;
#define Fmx_Consts_SCannotCreateContactNilArg System::LoadResourceString(&Fmx::Consts::_SCannotCreateContactNilArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateContactWrongClassArg;
#define Fmx_Consts_SCannotCreateContactWrongClassArg System::LoadResourceString(&Fmx::Consts::_SCannotCreateContactWrongClassArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateContactUseFactoryMethod;
#define Fmx_Consts_SCannotCreateContactUseFactoryMethod System::LoadResourceString(&Fmx::Consts::_SCannotCreateContactUseFactoryMethod)
extern DELPHI_PACKAGE System::ResourceString _SCannotSaveContact;
#define Fmx_Consts_SCannotSaveContact System::LoadResourceString(&Fmx::Consts::_SCannotSaveContact)
extern DELPHI_PACKAGE System::ResourceString _SCannotSaveContactNilArg;
#define Fmx_Consts_SCannotSaveContactNilArg System::LoadResourceString(&Fmx::Consts::_SCannotSaveContactNilArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotSaveContactWrongClassArg;
#define Fmx_Consts_SCannotSaveContactWrongClassArg System::LoadResourceString(&Fmx::Consts::_SCannotSaveContactWrongClassArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotSaveNotModifiedContact;
#define Fmx_Consts_SCannotSaveNotModifiedContact System::LoadResourceString(&Fmx::Consts::_SCannotSaveNotModifiedContact)
extern DELPHI_PACKAGE System::ResourceString _SCannotRemoveContact;
#define Fmx_Consts_SCannotRemoveContact System::LoadResourceString(&Fmx::Consts::_SCannotRemoveContact)
extern DELPHI_PACKAGE System::ResourceString _SCannotRemoveContactNilArg;
#define Fmx_Consts_SCannotRemoveContactNilArg System::LoadResourceString(&Fmx::Consts::_SCannotRemoveContactNilArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotRemoveContactWrongClassArg;
#define Fmx_Consts_SCannotRemoveContactWrongClassArg System::LoadResourceString(&Fmx::Consts::_SCannotRemoveContactWrongClassArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotFetchGroups;
#define Fmx_Consts_SCannotFetchGroups System::LoadResourceString(&Fmx::Consts::_SCannotFetchGroups)
extern DELPHI_PACKAGE System::ResourceString _SCannotFetchAllGroupsWrongClassArg;
#define Fmx_Consts_SCannotFetchAllGroupsWrongClassArg System::LoadResourceString(&Fmx::Consts::_SCannotFetchAllGroupsWrongClassArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotFetchAllGroupsNilArg;
#define Fmx_Consts_SCannotFetchAllGroupsNilArg System::LoadResourceString(&Fmx::Consts::_SCannotFetchAllGroupsNilArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateGroup;
#define Fmx_Consts_SCannotCreateGroup System::LoadResourceString(&Fmx::Consts::_SCannotCreateGroup)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateGroupNilArg;
#define Fmx_Consts_SCannotCreateGroupNilArg System::LoadResourceString(&Fmx::Consts::_SCannotCreateGroupNilArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateGroupWrongClassArg;
#define Fmx_Consts_SCannotCreateGroupWrongClassArg System::LoadResourceString(&Fmx::Consts::_SCannotCreateGroupWrongClassArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotCreateGroupUseFactoryMethod;
#define Fmx_Consts_SCannotCreateGroupUseFactoryMethod System::LoadResourceString(&Fmx::Consts::_SCannotCreateGroupUseFactoryMethod)
extern DELPHI_PACKAGE System::ResourceString _SCannotSaveGroup;
#define Fmx_Consts_SCannotSaveGroup System::LoadResourceString(&Fmx::Consts::_SCannotSaveGroup)
extern DELPHI_PACKAGE System::ResourceString _SCannotSaveGroupNilArg;
#define Fmx_Consts_SCannotSaveGroupNilArg System::LoadResourceString(&Fmx::Consts::_SCannotSaveGroupNilArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotSaveGroupWrongClassArg;
#define Fmx_Consts_SCannotSaveGroupWrongClassArg System::LoadResourceString(&Fmx::Consts::_SCannotSaveGroupWrongClassArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotRemoveGroup;
#define Fmx_Consts_SCannotRemoveGroup System::LoadResourceString(&Fmx::Consts::_SCannotRemoveGroup)
extern DELPHI_PACKAGE System::ResourceString _SCannotRemoveGroupNilArg;
#define Fmx_Consts_SCannotRemoveGroupNilArg System::LoadResourceString(&Fmx::Consts::_SCannotRemoveGroupNilArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotRemoveGroupWrongClassArg;
#define Fmx_Consts_SCannotRemoveGroupWrongClassArg System::LoadResourceString(&Fmx::Consts::_SCannotRemoveGroupWrongClassArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotGetGroupNameGroupRefNil;
#define Fmx_Consts_SCannotGetGroupNameGroupRefNil System::LoadResourceString(&Fmx::Consts::_SCannotGetGroupNameGroupRefNil)
extern DELPHI_PACKAGE System::ResourceString _SCannotSetGroupName;
#define Fmx_Consts_SCannotSetGroupName System::LoadResourceString(&Fmx::Consts::_SCannotSetGroupName)
extern DELPHI_PACKAGE System::ResourceString _SCannotSetGroupNameGroupRefNil;
#define Fmx_Consts_SCannotSetGroupNameGroupRefNil System::LoadResourceString(&Fmx::Consts::_SCannotSetGroupNameGroupRefNil)
extern DELPHI_PACKAGE System::ResourceString _SCannotAddContactIntoGroup;
#define Fmx_Consts_SCannotAddContactIntoGroup System::LoadResourceString(&Fmx::Consts::_SCannotAddContactIntoGroup)
extern DELPHI_PACKAGE System::ResourceString _SCannotAddContactIntoGroupNilArg;
#define Fmx_Consts_SCannotAddContactIntoGroupNilArg System::LoadResourceString(&Fmx::Consts::_SCannotAddContactIntoGroupNilArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotAddContactIntoGroupWrongClassArg;
#define Fmx_Consts_SCannotAddContactIntoGroupWrongClassArg System::LoadResourceString(&Fmx::Consts::_SCannotAddContactIntoGroupWrongClassArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotAddContactIntoGroupContactIsNotInAddressBook;
#define Fmx_Consts_SCannotAddContactIntoGroupContactIsNotInAddressBook System::LoadResourceString(&Fmx::Consts::_SCannotAddContactIntoGroupContactIsNotInAddressBook)
extern DELPHI_PACKAGE System::ResourceString _SCannotAddContactIntoGroupGroupIsNotInAddressBook;
#define Fmx_Consts_SCannotAddContactIntoGroupGroupIsNotInAddressBook System::LoadResourceString(&Fmx::Consts::_SCannotAddContactIntoGroupGroupIsNotInAddressBook)
extern DELPHI_PACKAGE System::ResourceString _SCannotRemoveContactFromGroup;
#define Fmx_Consts_SCannotRemoveContactFromGroup System::LoadResourceString(&Fmx::Consts::_SCannotRemoveContactFromGroup)
extern DELPHI_PACKAGE System::ResourceString _SCannotRemoveContactFromGroupNilArg;
#define Fmx_Consts_SCannotRemoveContactFromGroupNilArg System::LoadResourceString(&Fmx::Consts::_SCannotRemoveContactFromGroupNilArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotRemoveContactFromGroupWrongClassArg;
#define Fmx_Consts_SCannotRemoveContactFromGroupWrongClassArg System::LoadResourceString(&Fmx::Consts::_SCannotRemoveContactFromGroupWrongClassArg)
extern DELPHI_PACKAGE System::ResourceString _SCannotFetchContactInGroup;
#define Fmx_Consts_SCannotFetchContactInGroup System::LoadResourceString(&Fmx::Consts::_SCannotFetchContactInGroup)
extern DELPHI_PACKAGE System::ResourceString _SCannotFetchContactsInGroupNilArg;
#define Fmx_Consts_SCannotFetchContactsInGroupNilArg System::LoadResourceString(&Fmx::Consts::_SCannotFetchContactsInGroupNilArg)
extern DELPHI_PACKAGE System::ResourceString _SFirstName;
#define Fmx_Consts_SFirstName System::LoadResourceString(&Fmx::Consts::_SFirstName)
extern DELPHI_PACKAGE System::ResourceString _SLastName;
#define Fmx_Consts_SLastName System::LoadResourceString(&Fmx::Consts::_SLastName)
extern DELPHI_PACKAGE System::ResourceString _SMiddleName;
#define Fmx_Consts_SMiddleName System::LoadResourceString(&Fmx::Consts::_SMiddleName)
extern DELPHI_PACKAGE System::ResourceString _SPrefix;
#define Fmx_Consts_SPrefix System::LoadResourceString(&Fmx::Consts::_SPrefix)
extern DELPHI_PACKAGE System::ResourceString _SSuffix;
#define Fmx_Consts_SSuffix System::LoadResourceString(&Fmx::Consts::_SSuffix)
extern DELPHI_PACKAGE System::ResourceString _SNickName;
#define Fmx_Consts_SNickName System::LoadResourceString(&Fmx::Consts::_SNickName)
extern DELPHI_PACKAGE System::ResourceString _SFirstNamePhonetic;
#define Fmx_Consts_SFirstNamePhonetic System::LoadResourceString(&Fmx::Consts::_SFirstNamePhonetic)
extern DELPHI_PACKAGE System::ResourceString _SLastNamePhonetic;
#define Fmx_Consts_SLastNamePhonetic System::LoadResourceString(&Fmx::Consts::_SLastNamePhonetic)
extern DELPHI_PACKAGE System::ResourceString _SMiddleNamePhonetic;
#define Fmx_Consts_SMiddleNamePhonetic System::LoadResourceString(&Fmx::Consts::_SMiddleNamePhonetic)
extern DELPHI_PACKAGE System::ResourceString _SOrganization;
#define Fmx_Consts_SOrganization System::LoadResourceString(&Fmx::Consts::_SOrganization)
extern DELPHI_PACKAGE System::ResourceString _SJobTitle;
#define Fmx_Consts_SJobTitle System::LoadResourceString(&Fmx::Consts::_SJobTitle)
extern DELPHI_PACKAGE System::ResourceString _SDepartment;
#define Fmx_Consts_SDepartment System::LoadResourceString(&Fmx::Consts::_SDepartment)
extern DELPHI_PACKAGE System::ResourceString _SPhoto;
#define Fmx_Consts_SPhoto System::LoadResourceString(&Fmx::Consts::_SPhoto)
extern DELPHI_PACKAGE System::ResourceString _SPhotoThumbnail;
#define Fmx_Consts_SPhotoThumbnail System::LoadResourceString(&Fmx::Consts::_SPhotoThumbnail)
extern DELPHI_PACKAGE System::ResourceString _SNote;
#define Fmx_Consts_SNote System::LoadResourceString(&Fmx::Consts::_SNote)
extern DELPHI_PACKAGE System::ResourceString _SURLs;
#define Fmx_Consts_SURLs System::LoadResourceString(&Fmx::Consts::_SURLs)
extern DELPHI_PACKAGE System::ResourceString _SEMails;
#define Fmx_Consts_SEMails System::LoadResourceString(&Fmx::Consts::_SEMails)
extern DELPHI_PACKAGE System::ResourceString _SAddresses;
#define Fmx_Consts_SAddresses System::LoadResourceString(&Fmx::Consts::_SAddresses)
extern DELPHI_PACKAGE System::ResourceString _SPhones;
#define Fmx_Consts_SPhones System::LoadResourceString(&Fmx::Consts::_SPhones)
extern DELPHI_PACKAGE System::ResourceString _SDates;
#define Fmx_Consts_SDates System::LoadResourceString(&Fmx::Consts::_SDates)
extern DELPHI_PACKAGE System::ResourceString _SRelatedNames;
#define Fmx_Consts_SRelatedNames System::LoadResourceString(&Fmx::Consts::_SRelatedNames)
extern DELPHI_PACKAGE System::ResourceString _SMessagingServices;
#define Fmx_Consts_SMessagingServices System::LoadResourceString(&Fmx::Consts::_SMessagingServices)
extern DELPHI_PACKAGE System::ResourceString _SBirthday;
#define Fmx_Consts_SBirthday System::LoadResourceString(&Fmx::Consts::_SBirthday)
extern DELPHI_PACKAGE System::ResourceString _SCreationDate;
#define Fmx_Consts_SCreationDate System::LoadResourceString(&Fmx::Consts::_SCreationDate)
extern DELPHI_PACKAGE System::ResourceString _SModificationDate;
#define Fmx_Consts_SModificationDate System::LoadResourceString(&Fmx::Consts::_SModificationDate)
extern DELPHI_PACKAGE System::ResourceString _SSocialProfiles;
#define Fmx_Consts_SSocialProfiles System::LoadResourceString(&Fmx::Consts::_SSocialProfiles)
extern DELPHI_PACKAGE System::ResourceString _SUnknowType;
#define Fmx_Consts_SUnknowType System::LoadResourceString(&Fmx::Consts::_SUnknowType)
extern DELPHI_PACKAGE System::ResourceString _SSourceLocal;
#define Fmx_Consts_SSourceLocal System::LoadResourceString(&Fmx::Consts::_SSourceLocal)
extern DELPHI_PACKAGE System::ResourceString _SSourceExchange;
#define Fmx_Consts_SSourceExchange System::LoadResourceString(&Fmx::Consts::_SSourceExchange)
extern DELPHI_PACKAGE System::ResourceString _SSourceExchangeGAL;
#define Fmx_Consts_SSourceExchangeGAL System::LoadResourceString(&Fmx::Consts::_SSourceExchangeGAL)
extern DELPHI_PACKAGE System::ResourceString _SSourceMobileMe;
#define Fmx_Consts_SSourceMobileMe System::LoadResourceString(&Fmx::Consts::_SSourceMobileMe)
extern DELPHI_PACKAGE System::ResourceString _SSourceLDAP;
#define Fmx_Consts_SSourceLDAP System::LoadResourceString(&Fmx::Consts::_SSourceLDAP)
extern DELPHI_PACKAGE System::ResourceString _SSourceCardDAV;
#define Fmx_Consts_SSourceCardDAV System::LoadResourceString(&Fmx::Consts::_SSourceCardDAV)
extern DELPHI_PACKAGE System::ResourceString _SSourceCardDAVSearch;
#define Fmx_Consts_SSourceCardDAVSearch System::LoadResourceString(&Fmx::Consts::_SSourceCardDAVSearch)
extern DELPHI_PACKAGE System::ResourceString _SAddressBookHomeLabel;
#define Fmx_Consts_SAddressBookHomeLabel System::LoadResourceString(&Fmx::Consts::_SAddressBookHomeLabel)
extern DELPHI_PACKAGE System::ResourceString _SAddressBookWorkLabel;
#define Fmx_Consts_SAddressBookWorkLabel System::LoadResourceString(&Fmx::Consts::_SAddressBookWorkLabel)
extern DELPHI_PACKAGE System::ResourceString _SAddressBookOtherLabel;
#define Fmx_Consts_SAddressBookOtherLabel System::LoadResourceString(&Fmx::Consts::_SAddressBookOtherLabel)
extern DELPHI_PACKAGE System::ResourceString _SPhoneMain;
#define Fmx_Consts_SPhoneMain System::LoadResourceString(&Fmx::Consts::_SPhoneMain)
extern DELPHI_PACKAGE System::ResourceString _SPhoneHome;
#define Fmx_Consts_SPhoneHome System::LoadResourceString(&Fmx::Consts::_SPhoneHome)
extern DELPHI_PACKAGE System::ResourceString _SPhoneMobile;
#define Fmx_Consts_SPhoneMobile System::LoadResourceString(&Fmx::Consts::_SPhoneMobile)
extern DELPHI_PACKAGE System::ResourceString _SPhoneWork;
#define Fmx_Consts_SPhoneWork System::LoadResourceString(&Fmx::Consts::_SPhoneWork)
extern DELPHI_PACKAGE System::ResourceString _SPhoneFaxWork;
#define Fmx_Consts_SPhoneFaxWork System::LoadResourceString(&Fmx::Consts::_SPhoneFaxWork)
extern DELPHI_PACKAGE System::ResourceString _SPhoneFaxHome;
#define Fmx_Consts_SPhoneFaxHome System::LoadResourceString(&Fmx::Consts::_SPhoneFaxHome)
extern DELPHI_PACKAGE System::ResourceString _SPhoneFaxOther;
#define Fmx_Consts_SPhoneFaxOther System::LoadResourceString(&Fmx::Consts::_SPhoneFaxOther)
extern DELPHI_PACKAGE System::ResourceString _SPhonePager;
#define Fmx_Consts_SPhonePager System::LoadResourceString(&Fmx::Consts::_SPhonePager)
extern DELPHI_PACKAGE System::ResourceString _SPhoneOther;
#define Fmx_Consts_SPhoneOther System::LoadResourceString(&Fmx::Consts::_SPhoneOther)
extern DELPHI_PACKAGE System::ResourceString _SPhoneCallback;
#define Fmx_Consts_SPhoneCallback System::LoadResourceString(&Fmx::Consts::_SPhoneCallback)
extern DELPHI_PACKAGE System::ResourceString _SPhoneCar;
#define Fmx_Consts_SPhoneCar System::LoadResourceString(&Fmx::Consts::_SPhoneCar)
extern DELPHI_PACKAGE System::ResourceString _SPhoneCompanyMain;
#define Fmx_Consts_SPhoneCompanyMain System::LoadResourceString(&Fmx::Consts::_SPhoneCompanyMain)
extern DELPHI_PACKAGE System::ResourceString _SPhoneISDN;
#define Fmx_Consts_SPhoneISDN System::LoadResourceString(&Fmx::Consts::_SPhoneISDN)
extern DELPHI_PACKAGE System::ResourceString _SPhoneRadio;
#define Fmx_Consts_SPhoneRadio System::LoadResourceString(&Fmx::Consts::_SPhoneRadio)
extern DELPHI_PACKAGE System::ResourceString _SPhoneTelex;
#define Fmx_Consts_SPhoneTelex System::LoadResourceString(&Fmx::Consts::_SPhoneTelex)
extern DELPHI_PACKAGE System::ResourceString _SPhoneTTYTDD;
#define Fmx_Consts_SPhoneTTYTDD System::LoadResourceString(&Fmx::Consts::_SPhoneTTYTDD)
extern DELPHI_PACKAGE System::ResourceString _SPhoneWorkMobile;
#define Fmx_Consts_SPhoneWorkMobile System::LoadResourceString(&Fmx::Consts::_SPhoneWorkMobile)
extern DELPHI_PACKAGE System::ResourceString _SPhoneWorkPager;
#define Fmx_Consts_SPhoneWorkPager System::LoadResourceString(&Fmx::Consts::_SPhoneWorkPager)
extern DELPHI_PACKAGE System::ResourceString _SPhoneAssistant;
#define Fmx_Consts_SPhoneAssistant System::LoadResourceString(&Fmx::Consts::_SPhoneAssistant)
extern DELPHI_PACKAGE System::ResourceString _SPhoneIPhone;
#define Fmx_Consts_SPhoneIPhone System::LoadResourceString(&Fmx::Consts::_SPhoneIPhone)
extern DELPHI_PACKAGE System::ResourceString _SDateAnniversary;
#define Fmx_Consts_SDateAnniversary System::LoadResourceString(&Fmx::Consts::_SDateAnniversary)
extern DELPHI_PACKAGE System::ResourceString _SDateBirthday;
#define Fmx_Consts_SDateBirthday System::LoadResourceString(&Fmx::Consts::_SDateBirthday)
extern DELPHI_PACKAGE System::ResourceString _SDateOther;
#define Fmx_Consts_SDateOther System::LoadResourceString(&Fmx::Consts::_SDateOther)
extern DELPHI_PACKAGE System::ResourceString _SEmailsMobile;
#define Fmx_Consts_SEmailsMobile System::LoadResourceString(&Fmx::Consts::_SEmailsMobile)
extern DELPHI_PACKAGE System::ResourceString _SURLHomePage;
#define Fmx_Consts_SURLHomePage System::LoadResourceString(&Fmx::Consts::_SURLHomePage)
extern DELPHI_PACKAGE System::ResourceString _SURLBlog;
#define Fmx_Consts_SURLBlog System::LoadResourceString(&Fmx::Consts::_SURLBlog)
extern DELPHI_PACKAGE System::ResourceString _SURLProfile;
#define Fmx_Consts_SURLProfile System::LoadResourceString(&Fmx::Consts::_SURLProfile)
extern DELPHI_PACKAGE System::ResourceString _SURLFTP;
#define Fmx_Consts_SURLFTP System::LoadResourceString(&Fmx::Consts::_SURLFTP)
extern DELPHI_PACKAGE System::ResourceString _SRelationAssistant;
#define Fmx_Consts_SRelationAssistant System::LoadResourceString(&Fmx::Consts::_SRelationAssistant)
extern DELPHI_PACKAGE System::ResourceString _SRelationBrother;
#define Fmx_Consts_SRelationBrother System::LoadResourceString(&Fmx::Consts::_SRelationBrother)
extern DELPHI_PACKAGE System::ResourceString _SRelationChild;
#define Fmx_Consts_SRelationChild System::LoadResourceString(&Fmx::Consts::_SRelationChild)
extern DELPHI_PACKAGE System::ResourceString _SRelationDomesticPartner;
#define Fmx_Consts_SRelationDomesticPartner System::LoadResourceString(&Fmx::Consts::_SRelationDomesticPartner)
extern DELPHI_PACKAGE System::ResourceString _SRelationFather;
#define Fmx_Consts_SRelationFather System::LoadResourceString(&Fmx::Consts::_SRelationFather)
extern DELPHI_PACKAGE System::ResourceString _SRelationFriend;
#define Fmx_Consts_SRelationFriend System::LoadResourceString(&Fmx::Consts::_SRelationFriend)
extern DELPHI_PACKAGE System::ResourceString _SRelationManager;
#define Fmx_Consts_SRelationManager System::LoadResourceString(&Fmx::Consts::_SRelationManager)
extern DELPHI_PACKAGE System::ResourceString _SRelationMother;
#define Fmx_Consts_SRelationMother System::LoadResourceString(&Fmx::Consts::_SRelationMother)
extern DELPHI_PACKAGE System::ResourceString _SRelationParent;
#define Fmx_Consts_SRelationParent System::LoadResourceString(&Fmx::Consts::_SRelationParent)
extern DELPHI_PACKAGE System::ResourceString _SRelationPartner;
#define Fmx_Consts_SRelationPartner System::LoadResourceString(&Fmx::Consts::_SRelationPartner)
extern DELPHI_PACKAGE System::ResourceString _SRelationReferredBy;
#define Fmx_Consts_SRelationReferredBy System::LoadResourceString(&Fmx::Consts::_SRelationReferredBy)
extern DELPHI_PACKAGE System::ResourceString _SRelationRelative;
#define Fmx_Consts_SRelationRelative System::LoadResourceString(&Fmx::Consts::_SRelationRelative)
extern DELPHI_PACKAGE System::ResourceString _SRelationSister;
#define Fmx_Consts_SRelationSister System::LoadResourceString(&Fmx::Consts::_SRelationSister)
extern DELPHI_PACKAGE System::ResourceString _SRelationSpouse;
#define Fmx_Consts_SRelationSpouse System::LoadResourceString(&Fmx::Consts::_SRelationSpouse)
extern DELPHI_PACKAGE System::ResourceString _SProtocolAIM;
#define Fmx_Consts_SProtocolAIM System::LoadResourceString(&Fmx::Consts::_SProtocolAIM)
extern DELPHI_PACKAGE System::ResourceString _SProtocolMSN;
#define Fmx_Consts_SProtocolMSN System::LoadResourceString(&Fmx::Consts::_SProtocolMSN)
extern DELPHI_PACKAGE System::ResourceString _SProtocolYahoo;
#define Fmx_Consts_SProtocolYahoo System::LoadResourceString(&Fmx::Consts::_SProtocolYahoo)
extern DELPHI_PACKAGE System::ResourceString _SProtocolSkype;
#define Fmx_Consts_SProtocolSkype System::LoadResourceString(&Fmx::Consts::_SProtocolSkype)
extern DELPHI_PACKAGE System::ResourceString _SProtocolQQ;
#define Fmx_Consts_SProtocolQQ System::LoadResourceString(&Fmx::Consts::_SProtocolQQ)
extern DELPHI_PACKAGE System::ResourceString _SProtocolGoogleTalk;
#define Fmx_Consts_SProtocolGoogleTalk System::LoadResourceString(&Fmx::Consts::_SProtocolGoogleTalk)
extern DELPHI_PACKAGE System::ResourceString _SProtocolICQ;
#define Fmx_Consts_SProtocolICQ System::LoadResourceString(&Fmx::Consts::_SProtocolICQ)
extern DELPHI_PACKAGE System::ResourceString _SProtocolJabber;
#define Fmx_Consts_SProtocolJabber System::LoadResourceString(&Fmx::Consts::_SProtocolJabber)
extern DELPHI_PACKAGE System::ResourceString _SProtocolNetMeeting;
#define Fmx_Consts_SProtocolNetMeeting System::LoadResourceString(&Fmx::Consts::_SProtocolNetMeeting)
extern DELPHI_PACKAGE System::ResourceString _SProtocolFacebook;
#define Fmx_Consts_SProtocolFacebook System::LoadResourceString(&Fmx::Consts::_SProtocolFacebook)
extern DELPHI_PACKAGE System::ResourceString _SProtocolGaduGadu;
#define Fmx_Consts_SProtocolGaduGadu System::LoadResourceString(&Fmx::Consts::_SProtocolGaduGadu)
extern DELPHI_PACKAGE System::ResourceString _SSocialProfileTwitter;
#define Fmx_Consts_SSocialProfileTwitter System::LoadResourceString(&Fmx::Consts::_SSocialProfileTwitter)
extern DELPHI_PACKAGE System::ResourceString _SSocialProfileGameCenter;
#define Fmx_Consts_SSocialProfileGameCenter System::LoadResourceString(&Fmx::Consts::_SSocialProfileGameCenter)
extern DELPHI_PACKAGE System::ResourceString _SSocialProfileSinaWeibo;
#define Fmx_Consts_SSocialProfileSinaWeibo System::LoadResourceString(&Fmx::Consts::_SSocialProfileSinaWeibo)
extern DELPHI_PACKAGE System::ResourceString _SSocialProfileFacebook;
#define Fmx_Consts_SSocialProfileFacebook System::LoadResourceString(&Fmx::Consts::_SSocialProfileFacebook)
extern DELPHI_PACKAGE System::ResourceString _SSocialProfileMySpace;
#define Fmx_Consts_SSocialProfileMySpace System::LoadResourceString(&Fmx::Consts::_SSocialProfileMySpace)
extern DELPHI_PACKAGE System::ResourceString _SSocialProfileLinkedIn;
#define Fmx_Consts_SSocialProfileLinkedIn System::LoadResourceString(&Fmx::Consts::_SSocialProfileLinkedIn)
extern DELPHI_PACKAGE System::ResourceString _SSocialProfileFlickr;
#define Fmx_Consts_SSocialProfileFlickr System::LoadResourceString(&Fmx::Consts::_SSocialProfileFlickr)
extern DELPHI_PACKAGE System::ResourceString _SUseItemsPropertyToSetAdapter;
#define Fmx_Consts_SUseItemsPropertyToSetAdapter System::LoadResourceString(&Fmx::Consts::_SUseItemsPropertyToSetAdapter)
extern DELPHI_PACKAGE System::ResourceString _SCannotFindParentBySpecifiedCriteria;
#define Fmx_Consts_SCannotFindParentBySpecifiedCriteria System::LoadResourceString(&Fmx::Consts::_SCannotFindParentBySpecifiedCriteria)
extern DELPHI_PACKAGE System::ResourceString _SFireBaseInstanceIdIsNotAvailable;
#define Fmx_Consts_SFireBaseInstanceIdIsNotAvailable System::LoadResourceString(&Fmx::Consts::_SFireBaseInstanceIdIsNotAvailable)
extern DELPHI_PACKAGE System::ResourceString _SEdgeBrowserEngineUnavailable;
#define Fmx_Consts_SEdgeBrowserEngineUnavailable System::LoadResourceString(&Fmx::Consts::_SEdgeBrowserEngineUnavailable)
extern DELPHI_PACKAGE System::ResourceString _SEdgeBrowserEngineCreateFailed;
#define Fmx_Consts_SEdgeBrowserEngineCreateFailed System::LoadResourceString(&Fmx::Consts::_SEdgeBrowserEngineCreateFailed)
extern DELPHI_PACKAGE System::ResourceString _SBiometricNotImplemented;
#define Fmx_Consts_SBiometricNotImplemented System::LoadResourceString(&Fmx::Consts::_SBiometricNotImplemented)
extern DELPHI_PACKAGE System::ResourceString _SBiometricPromptCancelTextDefault;
#define Fmx_Consts_SBiometricPromptCancelTextDefault System::LoadResourceString(&Fmx::Consts::_SBiometricPromptCancelTextDefault)
extern DELPHI_PACKAGE System::ResourceString _SBiometricPromptTitleTextDefault;
#define Fmx_Consts_SBiometricPromptTitleTextDefault System::LoadResourceString(&Fmx::Consts::_SBiometricPromptTitleTextDefault)
extern DELPHI_PACKAGE System::ResourceString _SBiometricErrorKeyNameEmpty;
#define Fmx_Consts_SBiometricErrorKeyNameEmpty System::LoadResourceString(&Fmx::Consts::_SBiometricErrorKeyNameEmpty)
extern DELPHI_PACKAGE System::ResourceString _SBiometricErrorCannotAuthenticate;
#define Fmx_Consts_SBiometricErrorCannotAuthenticate System::LoadResourceString(&Fmx::Consts::_SBiometricErrorCannotAuthenticate)
extern DELPHI_PACKAGE System::ResourceString _SBiometricErrorSystemError;
#define Fmx_Consts_SBiometricErrorSystemError System::LoadResourceString(&Fmx::Consts::_SBiometricErrorSystemError)
extern DELPHI_PACKAGE System::ResourceString _SBiometricErrorNotAvailable;
#define Fmx_Consts_SBiometricErrorNotAvailable System::LoadResourceString(&Fmx::Consts::_SBiometricErrorNotAvailable)
extern DELPHI_PACKAGE System::ResourceString _SBiometricEnterPINToRestore;
#define Fmx_Consts_SBiometricEnterPINToRestore System::LoadResourceString(&Fmx::Consts::_SBiometricEnterPINToRestore)
extern DELPHI_PACKAGE System::ResourceString _SBiometricErrorAuthenticationDenied;
#define Fmx_Consts_SBiometricErrorAuthenticationDenied System::LoadResourceString(&Fmx::Consts::_SBiometricErrorAuthenticationDenied)
extern DELPHI_PACKAGE System::ResourceString _SBiometricErrorTooManyAttempts;
#define Fmx_Consts_SBiometricErrorTooManyAttempts System::LoadResourceString(&Fmx::Consts::_SBiometricErrorTooManyAttempts)
extern DELPHI_PACKAGE System::ResourceString _SBiometricErrorSystemErrorInvalidContext;
#define Fmx_Consts_SBiometricErrorSystemErrorInvalidContext System::LoadResourceString(&Fmx::Consts::_SBiometricErrorSystemErrorInvalidContext)
extern DELPHI_PACKAGE System::ResourceString _SBiometricErrorSystemErrorCancelledBySystem;
#define Fmx_Consts_SBiometricErrorSystemErrorCancelledBySystem System::LoadResourceString(&Fmx::Consts::_SBiometricErrorSystemErrorCancelledBySystem)
}	/* namespace Consts */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_CONSTS)
using namespace Fmx::Consts;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_ConstsHPP
