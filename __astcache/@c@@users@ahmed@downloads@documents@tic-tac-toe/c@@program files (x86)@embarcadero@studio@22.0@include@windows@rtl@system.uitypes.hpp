// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.UITypes.pas' rev: 35.00 (Windows)

#ifndef System_UitypesHPP
#define System_UitypesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------
namespace System
{
namespace Uitypes
{
  enum DECLSPEC_DENUM TFontStyle : unsigned char { fsBold, fsItalic, fsUnderline, fsStrikeOut };
  typedef System::SmallStringBase<124> TFontDataName;
  typedef System::SetBase<TFontStyle, fsBold, fsStrikeOut> TFontStylesBase;
}	/* namespace Uitypes */
}	/* namespace System */
namespace System
{
namespace Uitypes
{
  enum DECLSPEC_DENUM TCursor : short {crMin=-32768, crMax=32767};
}	/* namespace Uitypes */
}	/* namespace System */
namespace System
{
namespace Uitypes
{
  enum DECLSPEC_DENUM TColor : int {clMin=-0x7fffffff-1, clMax=0x7fffffff};
}	/* namespace Uitypes */
}	/* namespace System */

namespace System
{
namespace Uitypes
{
//-- forward type declarations -----------------------------------------------
struct TColorRec;
struct TAlphaColorRec;
struct TAlphaColorF;
//-- type declarations -------------------------------------------------------
enum class DECLSPEC_DENUM TOpenOption : unsigned char { ofReadOnly, ofOverwritePrompt, ofHideReadOnly, ofNoChangeDir, ofShowHelp, ofNoValidate, ofAllowMultiSelect, ofExtensionDifferent, ofPathMustExist, ofFileMustExist, ofCreatePrompt, ofShareAware, ofNoReadOnlyReturn, ofNoTestFileCreate, ofNoNetworkButton, ofNoLongNames, ofOldStyleDialog, ofNoDereferenceLinks, ofEnableIncludeNotify, ofEnableSizing, ofDontAddToRecent, ofForceShowHidden };

typedef System::Set<TOpenOption, _DELPHI_SET_ENUMERATOR(TOpenOption::ofReadOnly), _DELPHI_SET_ENUMERATOR(TOpenOption::ofForceShowHidden)> TOpenOptions;

enum class DECLSPEC_DENUM TOpenOptionEx : unsigned char { ofExNoPlacesBar };

typedef System::Set<TOpenOptionEx, _DELPHI_SET_ENUMERATOR(TOpenOptionEx::ofExNoPlacesBar), _DELPHI_SET_ENUMERATOR(TOpenOptionEx::ofExNoPlacesBar)> TOpenOptionsEx;

enum class DECLSPEC_DENUM TDialogType : unsigned char { Standard, Directory };

enum class DECLSPEC_DENUM TPrintRange : unsigned char { prAllPages, prSelection, prPageNums };

enum class DECLSPEC_DENUM TPrintDialogOption : unsigned char { poPrintToFile, poPageNums, poSelection, poWarning, poHelp, poDisablePrintToFile };

typedef System::Set<TPrintDialogOption, _DELPHI_SET_ENUMERATOR(TPrintDialogOption::poPrintToFile), _DELPHI_SET_ENUMERATOR(TPrintDialogOption::poDisablePrintToFile)> TPrintDialogOptions;

enum class DECLSPEC_DENUM TPageSetupDialogOption : unsigned char { psoDefaultMinMargins, psoDisableMargins, psoDisableOrientation, psoDisablePagePainting, psoDisablePaper, psoDisablePrinter, psoMargins, psoMinMargins, psoShowHelp, psoWarning, psoNoNetworkButton };

typedef System::Set<TPageSetupDialogOption, _DELPHI_SET_ENUMERATOR(TPageSetupDialogOption::psoDefaultMinMargins), _DELPHI_SET_ENUMERATOR(TPageSetupDialogOption::psoNoNetworkButton)> TPageSetupDialogOptions;

enum class DECLSPEC_DENUM TPrinterKind : unsigned char { pkDotMatrix, pkHPPCL };

enum class DECLSPEC_DENUM TPageType : unsigned char { ptEnvelope, ptPaper };

enum class DECLSPEC_DENUM TPageMeasureUnits : unsigned char { pmDefault, pmMillimeters, pmInches };

enum class DECLSPEC_DENUM TMsgDlgType : unsigned char { mtWarning, mtError, mtInformation, mtConfirmation, mtCustom };

enum class DECLSPEC_DENUM TMsgDlgBtn : unsigned char { mbYes, mbNo, mbOK, mbCancel, mbAbort, mbRetry, mbIgnore, mbAll, mbNoToAll, mbYesToAll, mbHelp, mbClose };

typedef System::Set<TMsgDlgBtn, _DELPHI_SET_ENUMERATOR(TMsgDlgBtn::mbYes), _DELPHI_SET_ENUMERATOR(TMsgDlgBtn::mbClose)> TMsgDlgButtons;

enum class DECLSPEC_DENUM TCalDayOfWeek : unsigned char { dowMonday, dowTuesday, dowWednesday, dowThursday, dowFriday, dowSaturday, dowSunday, dowLocaleDefault };

enum class DECLSPEC_DENUM TBorderIcon : unsigned char { biSystemMenu, biMinimize, biMaximize, biHelp };

typedef System::Set<TBorderIcon, _DELPHI_SET_ENUMERATOR(TBorderIcon::biSystemMenu), _DELPHI_SET_ENUMERATOR(TBorderIcon::biHelp)> TBorderIcons;

enum class DECLSPEC_DENUM TWindowState : unsigned char { wsNormal, wsMinimized, wsMaximized };

enum class DECLSPEC_DENUM TEditCharCase : unsigned char { ecNormal, ecUpperCase, ecLowerCase };

typedef System::Byte TFontCharset;

enum class DECLSPEC_DENUM TFontPitch : unsigned char { fpDefault, fpVariable, fpFixed };

enum class DECLSPEC_DENUM TFontQuality : unsigned char { fqDefault, fqDraft, fqProof, fqNonAntialiased, fqAntialiased, fqClearType, fqClearTypeNatural };

typedef System::Set<TFontStyle, _DELPHI_SET_ENUMERATOR(TFontStyle::fsBold), _DELPHI_SET_ENUMERATOR(TFontStyle::fsStrikeOut)> TFontStyles;

typedef System::UnicodeString TFontName;

enum class DECLSPEC_DENUM TCloseAction : unsigned char { caNone, caHide, caFree, caMinimize };

enum class DECLSPEC_DENUM TMouseButton : unsigned char { mbLeft, mbRight, mbMiddle };

enum class DECLSPEC_DENUM TMouseActivate : unsigned char { maDefault, maActivate, maActivateAndEat, maNoActivate, maNoActivateAndEat };

typedef short TTabOrder;

typedef int TModalResult;

enum class DECLSPEC_DENUM TDragMode : unsigned char { dmManual, dmAutomatic };

enum class DECLSPEC_DENUM TDragState : unsigned char { dsDragEnter, dsDragLeave, dsDragMove };

enum class DECLSPEC_DENUM TDragKind : unsigned char { dkDrag, dkDock };

enum class DECLSPEC_DENUM TAnchorKind : unsigned char { akLeft, akTop, akRight, akBottom };

typedef System::Set<TAnchorKind, _DELPHI_SET_ENUMERATOR(TAnchorKind::akLeft), _DELPHI_SET_ENUMERATOR(TAnchorKind::akBottom)> TAnchors;

enum class DECLSPEC_DENUM TScrollCode : unsigned char { scLineUp, scLineDown, scPageUp, scPageDown, scPosition, scTrack, scTop, scBottom, scEndScroll };

enum class DECLSPEC_DENUM TPrinterState : unsigned char { psNoHandle, psHandleIC, psHandleDC };

enum class DECLSPEC_DENUM TPrinterOrientation : unsigned char { poPortrait, poLandscape };

enum class DECLSPEC_DENUM TPrinterCapability : unsigned char { pcCopies, pcOrientation, pcCollation };

typedef System::Set<TPrinterCapability, _DELPHI_SET_ENUMERATOR(TPrinterCapability::pcCopies), _DELPHI_SET_ENUMERATOR(TPrinterCapability::pcCollation)> TPrinterCapabilities;

typedef unsigned TColorRef;

typedef TColor *PColor;

typedef TColorRec *PColorRec;

struct DECLSPEC_DRECORD TColorRec
{
public:
	static const unsigned SystemColor = unsigned(0xff000000);
	
	static const System::Int8 cSCROLLBAR = System::Int8(0x0);
	
	static const System::Int8 cBACKGROUND = System::Int8(0x1);
	
	static const System::Int8 cACTIVECAPTION = System::Int8(0x2);
	
	static const System::Int8 cINACTIVECAPTION = System::Int8(0x3);
	
	static const System::Int8 cMENU = System::Int8(0x4);
	
	static const System::Int8 cWINDOW = System::Int8(0x5);
	
	static const System::Int8 cWINDOWFRAME = System::Int8(0x6);
	
	static const System::Int8 cMENUTEXT = System::Int8(0x7);
	
	static const System::Int8 cWINDOWTEXT = System::Int8(0x8);
	
	static const System::Int8 cCAPTIONTEXT = System::Int8(0x9);
	
	static const System::Int8 cACTIVEBORDER = System::Int8(0xa);
	
	static const System::Int8 cINACTIVEBORDER = System::Int8(0xb);
	
	static const System::Int8 cAPPWORKSPACE = System::Int8(0xc);
	
	static const System::Int8 cHIGHLIGHT = System::Int8(0xd);
	
	static const System::Int8 cHIGHLIGHTTEXT = System::Int8(0xe);
	
	static const System::Int8 cBTNFACE = System::Int8(0xf);
	
	static const System::Int8 cBTNSHADOW = System::Int8(0x10);
	
	static const System::Int8 cGRAYTEXT = System::Int8(0x11);
	
	static const System::Int8 cBTNTEXT = System::Int8(0x12);
	
	static const System::Int8 cINACTIVECAPTIONTEXT = System::Int8(0x13);
	
	static const System::Int8 cBTNHIGHLIGHT = System::Int8(0x14);
	
	static const System::Int8 c3DDKSHADOW = System::Int8(0x15);
	
	static const System::Int8 c3DLIGHT = System::Int8(0x16);
	
	static const System::Int8 cINFOTEXT = System::Int8(0x17);
	
	static const System::Int8 cINFOBK = System::Int8(0x18);
	
	static const System::Int8 cHOTLIGHT = System::Int8(0x1a);
	
	static const System::Int8 cGRADIENTACTIVECAPTION = System::Int8(0x1b);
	
	static const System::Int8 cGRADIENTINACTIVECAPTION = System::Int8(0x1c);
	
	static const System::Int8 cMENUHILIGHT = System::Int8(0x1d);
	
	static const System::Int8 cMENUBAR = System::Int8(0x1e);
	
	static const System::Int8 cENDCOLORS = System::Int8(0x1e);
	
	static const System::Int8 cDESKTOP = System::Int8(0x1);
	
	static const System::Int8 c3DFACE = System::Int8(0xf);
	
	static const System::Int8 c3DSHADOW = System::Int8(0x10);
	
	static const System::Int8 c3DHIGHLIGHT = System::Int8(0x14);
	
	static const System::Int8 c3DHILIGHT = System::Int8(0x14);
	
	static const System::Int8 cBTNHILIGHT = System::Int8(0x14);
	
	static const TColor SysScrollBar = TColor(-16777216);
	
	static const TColor SysBackground = TColor(-16777215);
	
	static const TColor SysActiveCaption = TColor(-16777214);
	
	static const TColor SysInactiveCaption = TColor(-16777213);
	
	static const TColor SysMenu = TColor(-16777212);
	
	static const TColor SysWindow = TColor(-16777211);
	
	static const TColor SysWindowFrame = TColor(-16777210);
	
	static const TColor SysMenuText = TColor(-16777209);
	
	static const TColor SysWindowText = TColor(-16777208);
	
	static const TColor SysCaptionText = TColor(-16777207);
	
	static const TColor SysActiveBorder = TColor(-16777206);
	
	static const TColor SysInactiveBorder = TColor(-16777205);
	
	static const TColor SysAppWorkSpace = TColor(-16777204);
	
	static const TColor SysHighlight = TColor(-16777203);
	
	static const TColor SysHighlightText = TColor(-16777202);
	
	static const TColor SysBtnFace = TColor(-16777201);
	
	static const TColor SysBtnShadow = TColor(-16777200);
	
	static const TColor SysGrayText = TColor(-16777199);
	
	static const TColor SysBtnText = TColor(-16777198);
	
	static const TColor SysInactiveCaptionText = TColor(-16777197);
	
	static const TColor SysBtnHighlight = TColor(-16777196);
	
	static const TColor Sys3DDkShadow = TColor(-16777195);
	
	static const TColor Sys3DLight = TColor(-16777194);
	
	static const TColor SysInfoText = TColor(-16777193);
	
	static const TColor SysInfoBk = TColor(-16777192);
	
	static const TColor SysHotLight = TColor(-16777190);
	
	static const TColor SysGradientActiveCaption = TColor(-16777189);
	
	static const TColor SysGradientInactiveCaption = TColor(-16777188);
	
	static const TColor SysMenuHighlight = TColor(-16777187);
	
	static const TColor SysMenuBar = TColor(-16777186);
	
	static const TColor SysNone = TColor(536870911);
	
	static const TColor SysDefault = TColor(536870912);
	
	static const TColor Aliceblue = TColor(16775408);
	
	static const TColor Antiquewhite = TColor(14150650);
	
	static const TColor Aqua = TColor(16776960);
	
	static const TColor Aquamarine = TColor(13959039);
	
	static const TColor Azure = TColor(16777200);
	
	static const TColor Beige = TColor(14480885);
	
	static const TColor Bisque = TColor(12903679);
	
	static const TColor Black = TColor(0);
	
	static const TColor Blanchedalmond = TColor(13495295);
	
	static const TColor Blue = TColor(16711680);
	
	static const TColor Blueviolet = TColor(14822282);
	
	static const TColor Brown = TColor(2763429);
	
	static const TColor Burlywood = TColor(8894686);
	
	static const TColor Cadetblue = TColor(10526303);
	
	static const TColor Chartreuse = TColor(65407);
	
	static const TColor Chocolate = TColor(1993170);
	
	static const TColor Coral = TColor(5275647);
	
	static const TColor Cornflowerblue = TColor(15570276);
	
	static const TColor Cornsilk = TColor(14481663);
	
	static const TColor Crimson = TColor(3937500);
	
	static const TColor Cyan = TColor(16776960);
	
	static const TColor Darkblue = TColor(9109504);
	
	static const TColor Darkcyan = TColor(9145088);
	
	static const TColor Darkgoldenrod = TColor(755384);
	
	static const TColor Darkgray = TColor(11119017);
	
	static const TColor Darkgreen = TColor(25600);
	
	static const TColor Darkgrey = TColor(11119017);
	
	static const TColor Darkkhaki = TColor(7059389);
	
	static const TColor Darkmagenta = TColor(9109643);
	
	static const TColor Darkolivegreen = TColor(3107669);
	
	static const TColor Darkorange = TColor(36095);
	
	static const TColor Darkorchid = TColor(13382297);
	
	static const TColor Darkred = TColor(139);
	
	static const TColor Darksalmon = TColor(8034025);
	
	static const TColor Darkseagreen = TColor(9419919);
	
	static const TColor Darkslateblue = TColor(9125192);
	
	static const TColor Darkslategray = TColor(5197615);
	
	static const TColor Darkslategrey = TColor(5197615);
	
	static const TColor Darkturquoise = TColor(13749760);
	
	static const TColor Darkviolet = TColor(13828244);
	
	static const TColor Deeppink = TColor(9639167);
	
	static const TColor Deepskyblue = TColor(16760576);
	
	static const TColor Dimgray = TColor(6908265);
	
	static const TColor Dimgrey = TColor(6908265);
	
	static const TColor Dodgerblue = TColor(16748574);
	
	static const TColor Firebrick = TColor(2237106);
	
	static const TColor Floralwhite = TColor(15792895);
	
	static const TColor Forestgreen = TColor(2263842);
	
	static const TColor Fuchsia = TColor(16711935);
	
	static const TColor Gainsboro = TColor(14474460);
	
	static const TColor Ghostwhite = TColor(16775416);
	
	static const TColor Gold = TColor(55295);
	
	static const TColor Goldenrod = TColor(2139610);
	
	static const TColor Gray = TColor(8421504);
	
	static const TColor Green = TColor(32768);
	
	static const TColor Greenyellow = TColor(3145645);
	
	static const TColor Grey = TColor(8421504);
	
	static const TColor Honeydew = TColor(15794160);
	
	static const TColor Hotpink = TColor(11823615);
	
	static const TColor Indianred = TColor(6053069);
	
	static const TColor Indigo = TColor(8519755);
	
	static const TColor Ivory = TColor(15794175);
	
	static const TColor Khaki = TColor(9234160);
	
	static const TColor Lavender = TColor(16443110);
	
	static const TColor Lavenderblush = TColor(16118015);
	
	static const TColor Lawngreen = TColor(64636);
	
	static const TColor Lemonchiffon = TColor(13499135);
	
	static const TColor Lightblue = TColor(15128749);
	
	static const TColor Lightcoral = TColor(8421616);
	
	static const TColor Lightcyan = TColor(16777184);
	
	static const TColor Lightgoldenrodyellow = TColor(13826810);
	
	static const TColor Lightgray = TColor(13882323);
	
	static const TColor Lightgreen = TColor(9498256);
	
	static const TColor Lightgrey = TColor(13882323);
	
	static const TColor Lightpink = TColor(12695295);
	
	static const TColor Lightsalmon = TColor(8036607);
	
	static const TColor Lightseagreen = TColor(11186720);
	
	static const TColor Lightskyblue = TColor(16436871);
	
	static const TColor Lightslategray = TColor(10061943);
	
	static const TColor Lightslategrey = TColor(10061943);
	
	static const TColor Lightsteelblue = TColor(14599344);
	
	static const TColor Lightyellow = TColor(14745599);
	
	static const TColor LtGray = TColor(12632256);
	
	static const TColor MedGray = TColor(10789024);
	
	static const TColor DkGray = TColor(8421504);
	
	static const TColor MoneyGreen = TColor(12639424);
	
	static const TColor LegacySkyBlue = TColor(15780518);
	
	static const TColor Cream = TColor(15793151);
	
	static const TColor Lime = TColor(65280);
	
	static const TColor Limegreen = TColor(3329330);
	
	static const TColor Linen = TColor(15134970);
	
	static const TColor Magenta = TColor(16711935);
	
	static const TColor Maroon = TColor(128);
	
	static const TColor Mediumaquamarine = TColor(11193702);
	
	static const TColor Mediumblue = TColor(13434880);
	
	static const TColor Mediumorchid = TColor(13850042);
	
	static const TColor Mediumpurple = TColor(14381203);
	
	static const TColor Mediumseagreen = TColor(7451452);
	
	static const TColor Mediumslateblue = TColor(15624315);
	
	static const TColor Mediumspringgreen = TColor(10156544);
	
	static const TColor Mediumturquoise = TColor(13422920);
	
	static const TColor Mediumvioletred = TColor(8721863);
	
	static const TColor Midnightblue = TColor(7346457);
	
	static const TColor Mintcream = TColor(16449525);
	
	static const TColor Mistyrose = TColor(14804223);
	
	static const TColor Moccasin = TColor(11920639);
	
	static const TColor Navajowhite = TColor(11394815);
	
	static const TColor Navy = TColor(8388608);
	
	static const TColor Oldlace = TColor(15136253);
	
	static const TColor Olive = TColor(32896);
	
	static const TColor Olivedrab = TColor(2330219);
	
	static const TColor Orange = TColor(42495);
	
	static const TColor Orangered = TColor(17919);
	
	static const TColor Orchid = TColor(14053594);
	
	static const TColor Palegoldenrod = TColor(11200750);
	
	static const TColor Palegreen = TColor(10025880);
	
	static const TColor Paleturquoise = TColor(15658671);
	
	static const TColor Palevioletred = TColor(9662683);
	
	static const TColor Papayawhip = TColor(14020607);
	
	static const TColor Peachpuff = TColor(12180223);
	
	static const TColor Peru = TColor(4163021);
	
	static const TColor Pink = TColor(13353215);
	
	static const TColor Plum = TColor(14524637);
	
	static const TColor Powderblue = TColor(15130800);
	
	static const TColor Purple = TColor(8388736);
	
	static const TColor Red = TColor(255);
	
	static const TColor Rosybrown = TColor(9408444);
	
	static const TColor Royalblue = TColor(14772545);
	
	static const TColor Saddlebrown = TColor(1262987);
	
	static const TColor Salmon = TColor(7504122);
	
	static const TColor Sandybrown = TColor(6333684);
	
	static const TColor Seagreen = TColor(5737262);
	
	static const TColor Seashell = TColor(15660543);
	
	static const TColor Sienna = TColor(2970272);
	
	static const TColor Silver = TColor(12632256);
	
	static const TColor Skyblue = TColor(15453831);
	
	static const TColor Slateblue = TColor(13458026);
	
	static const TColor Slategray = TColor(9470064);
	
	static const TColor Slategrey = TColor(9470064);
	
	static const TColor Snow = TColor(16448255);
	
	static const TColor Springgreen = TColor(8388352);
	
	static const TColor Steelblue = TColor(11829830);
	
	static const TColor Tan = TColor(9221330);
	
	static const TColor Teal = TColor(8421376);
	
	static const TColor Thistle = TColor(14204888);
	
	static const TColor Tomato = TColor(4678655);
	
	static const TColor Turquoise = TColor(13688896);
	
	static const TColor Violet = TColor(15631086);
	
	static const TColor Wheat = TColor(11788021);
	
	static const TColor White = TColor(16777215);
	
	static const TColor Whitesmoke = TColor(16119285);
	
	static const TColor Yellow = TColor(65535);
	
	static const TColor Yellowgreen = TColor(3329434);
	
	static const TColor Null = TColor(0);
	
	static int __fastcall (*ColorToRGB)(TColor Color);
	
public:
	union
	{
		struct 
		{
			System::Byte R;
			System::Byte G;
			System::Byte B;
			System::Byte A;
		};
		struct 
		{
			System::Word HiWord;
			System::Word LoWord;
		};
		struct 
		{
			TColor Color;
		};
		
	};
};


typedef TColorRec TColors;

typedef unsigned TAlphaColor;

typedef TAlphaColor *PAlphaColor;

typedef TAlphaColorRec *PAlphaColorRec;

struct DECLSPEC_DRECORD TAlphaColorRec
{
public:
	static const TAlphaColor Alpha = TAlphaColor(0xff000000);
	
	static const unsigned Aliceblue = unsigned(0xfff0f8ff);
	
	static const unsigned Antiquewhite = unsigned(0xfffaebd7);
	
	static const unsigned Aqua = unsigned(0xff00ffff);
	
	static const unsigned Aquamarine = unsigned(0xff7fffd4);
	
	static const unsigned Azure = unsigned(0xfff0ffff);
	
	static const unsigned Beige = unsigned(0xfff5f5dc);
	
	static const unsigned Bisque = unsigned(0xffffe4c4);
	
	static const unsigned Black = unsigned(0xff000000);
	
	static const unsigned Blanchedalmond = unsigned(0xffffebcd);
	
	static const unsigned Blue = unsigned(0xff0000ff);
	
	static const unsigned Blueviolet = unsigned(0xff8a2be2);
	
	static const unsigned Brown = unsigned(0xffa52a2a);
	
	static const unsigned Burlywood = unsigned(0xffdeb887);
	
	static const unsigned Cadetblue = unsigned(0xff5f9ea0);
	
	static const unsigned Chartreuse = unsigned(0xff7fff00);
	
	static const unsigned Chocolate = unsigned(0xffd2691e);
	
	static const unsigned Coral = unsigned(0xffff7f50);
	
	static const unsigned Cornflowerblue = unsigned(0xff6495ed);
	
	static const unsigned Cornsilk = unsigned(0xfffff8dc);
	
	static const unsigned Crimson = unsigned(0xffdc143c);
	
	static const unsigned Cyan = unsigned(0xff00ffff);
	
	static const unsigned Darkblue = unsigned(0xff00008b);
	
	static const unsigned Darkcyan = unsigned(0xff008b8b);
	
	static const unsigned Darkgoldenrod = unsigned(0xffb8860b);
	
	static const unsigned Darkgray = unsigned(0xffa9a9a9);
	
	static const unsigned Darkgreen = unsigned(0xff006400);
	
	static const unsigned Darkgrey = unsigned(0xffa9a9a9);
	
	static const unsigned Darkkhaki = unsigned(0xffbdb76b);
	
	static const unsigned Darkmagenta = unsigned(0xff8b008b);
	
	static const unsigned Darkolivegreen = unsigned(0xff556b2f);
	
	static const unsigned Darkorange = unsigned(0xffff8c00);
	
	static const unsigned Darkorchid = unsigned(0xff9932cc);
	
	static const unsigned Darkred = unsigned(0xff8b0000);
	
	static const unsigned Darksalmon = unsigned(0xffe9967a);
	
	static const unsigned Darkseagreen = unsigned(0xff8fbc8f);
	
	static const unsigned Darkslateblue = unsigned(0xff483d8b);
	
	static const unsigned Darkslategray = unsigned(0xff2f4f4f);
	
	static const unsigned Darkslategrey = unsigned(0xff2f4f4f);
	
	static const unsigned Darkturquoise = unsigned(0xff00ced1);
	
	static const unsigned Darkviolet = unsigned(0xff9400d3);
	
	static const unsigned Deeppink = unsigned(0xffff1493);
	
	static const unsigned Deepskyblue = unsigned(0xff00bfff);
	
	static const unsigned Dimgray = unsigned(0xff696969);
	
	static const unsigned Dimgrey = unsigned(0xff696969);
	
	static const unsigned Dodgerblue = unsigned(0xff1e90ff);
	
	static const unsigned Firebrick = unsigned(0xffb22222);
	
	static const unsigned Floralwhite = unsigned(0xfffffaf0);
	
	static const unsigned Forestgreen = unsigned(0xff228b22);
	
	static const unsigned Fuchsia = unsigned(0xffff00ff);
	
	static const unsigned Gainsboro = unsigned(0xffdcdcdc);
	
	static const unsigned Ghostwhite = unsigned(0xfff8f8ff);
	
	static const unsigned Gold = unsigned(0xffffd700);
	
	static const unsigned Goldenrod = unsigned(0xffdaa520);
	
	static const unsigned Gray = unsigned(0xff808080);
	
	static const unsigned Green = unsigned(0xff008000);
	
	static const unsigned Greenyellow = unsigned(0xffadff2f);
	
	static const unsigned Grey = unsigned(0xff808080);
	
	static const unsigned Honeydew = unsigned(0xfff0fff0);
	
	static const unsigned Hotpink = unsigned(0xffff69b4);
	
	static const unsigned Indianred = unsigned(0xffcd5c5c);
	
	static const unsigned Indigo = unsigned(0xff4b0082);
	
	static const unsigned Ivory = unsigned(0xfffffff0);
	
	static const unsigned Khaki = unsigned(0xfff0e68c);
	
	static const unsigned Lavender = unsigned(0xffe6e6fa);
	
	static const unsigned Lavenderblush = unsigned(0xfffff0f5);
	
	static const unsigned Lawngreen = unsigned(0xff7cfc00);
	
	static const unsigned Lemonchiffon = unsigned(0xfffffacd);
	
	static const unsigned Lightblue = unsigned(0xffadd8e6);
	
	static const unsigned Lightcoral = unsigned(0xfff08080);
	
	static const unsigned Lightcyan = unsigned(0xffe0ffff);
	
	static const unsigned Lightgoldenrodyellow = unsigned(0xfffafad2);
	
	static const unsigned Lightgray = unsigned(0xffd3d3d3);
	
	static const unsigned Lightgreen = unsigned(0xff90ee90);
	
	static const unsigned Lightgrey = unsigned(0xffd3d3d3);
	
	static const unsigned Lightpink = unsigned(0xffffb6c1);
	
	static const unsigned Lightsalmon = unsigned(0xffffa07a);
	
	static const unsigned Lightseagreen = unsigned(0xff20b2aa);
	
	static const unsigned Lightskyblue = unsigned(0xff87cefa);
	
	static const unsigned Lightslategray = unsigned(0xff778899);
	
	static const unsigned Lightslategrey = unsigned(0xff778899);
	
	static const unsigned Lightsteelblue = unsigned(0xffb0c4de);
	
	static const unsigned Lightyellow = unsigned(0xffffffe0);
	
	static const unsigned LtGray = unsigned(0xffc0c0c0);
	
	static const unsigned MedGray = unsigned(0xffa0a0a0);
	
	static const unsigned DkGray = unsigned(0xff808080);
	
	static const unsigned MoneyGreen = unsigned(0xffc0dcc0);
	
	static const unsigned LegacySkyBlue = unsigned(0xfff0caa6);
	
	static const unsigned Cream = unsigned(0xfff0fbff);
	
	static const unsigned Lime = unsigned(0xff00ff00);
	
	static const unsigned Limegreen = unsigned(0xff32cd32);
	
	static const unsigned Linen = unsigned(0xfffaf0e6);
	
	static const unsigned Magenta = unsigned(0xffff00ff);
	
	static const unsigned Maroon = unsigned(0xff800000);
	
	static const unsigned Mediumaquamarine = unsigned(0xff66cdaa);
	
	static const unsigned Mediumblue = unsigned(0xff0000cd);
	
	static const unsigned Mediumorchid = unsigned(0xffba55d3);
	
	static const unsigned Mediumpurple = unsigned(0xff9370db);
	
	static const unsigned Mediumseagreen = unsigned(0xff3cb371);
	
	static const unsigned Mediumslateblue = unsigned(0xff7b68ee);
	
	static const unsigned Mediumspringgreen = unsigned(0xff00fa9a);
	
	static const unsigned Mediumturquoise = unsigned(0xff48d1cc);
	
	static const unsigned Mediumvioletred = unsigned(0xffc71585);
	
	static const unsigned Midnightblue = unsigned(0xff191970);
	
	static const unsigned Mintcream = unsigned(0xfff5fffa);
	
	static const unsigned Mistyrose = unsigned(0xffffe4e1);
	
	static const unsigned Moccasin = unsigned(0xffffe4b5);
	
	static const unsigned Navajowhite = unsigned(0xffffdead);
	
	static const unsigned Navy = unsigned(0xff000080);
	
	static const unsigned Oldlace = unsigned(0xfffdf5e6);
	
	static const unsigned Olive = unsigned(0xff808000);
	
	static const unsigned Olivedrab = unsigned(0xff6b8e23);
	
	static const unsigned Orange = unsigned(0xffffa500);
	
	static const unsigned Orangered = unsigned(0xffff4500);
	
	static const unsigned Orchid = unsigned(0xffda70d6);
	
	static const unsigned Palegoldenrod = unsigned(0xffeee8aa);
	
	static const unsigned Palegreen = unsigned(0xff98fb98);
	
	static const unsigned Paleturquoise = unsigned(0xffafeeee);
	
	static const unsigned Palevioletred = unsigned(0xffdb7093);
	
	static const unsigned Papayawhip = unsigned(0xffffefd5);
	
	static const unsigned Peachpuff = unsigned(0xffffdab9);
	
	static const unsigned Peru = unsigned(0xffcd853f);
	
	static const unsigned Pink = unsigned(0xffffc0cb);
	
	static const unsigned Plum = unsigned(0xffdda0dd);
	
	static const unsigned Powderblue = unsigned(0xffb0e0e6);
	
	static const unsigned Purple = unsigned(0xff800080);
	
	static const unsigned Red = unsigned(0xffff0000);
	
	static const unsigned Rosybrown = unsigned(0xffbc8f8f);
	
	static const unsigned Royalblue = unsigned(0xff4169e1);
	
	static const unsigned Saddlebrown = unsigned(0xff8b4513);
	
	static const unsigned Salmon = unsigned(0xfffa8072);
	
	static const unsigned Sandybrown = unsigned(0xfff4a460);
	
	static const unsigned Seagreen = unsigned(0xff2e8b57);
	
	static const unsigned Seashell = unsigned(0xfffff5ee);
	
	static const unsigned Sienna = unsigned(0xffa0522d);
	
	static const unsigned Silver = unsigned(0xffc0c0c0);
	
	static const unsigned Skyblue = unsigned(0xff87ceeb);
	
	static const unsigned Slateblue = unsigned(0xff6a5acd);
	
	static const unsigned Slategray = unsigned(0xff708090);
	
	static const unsigned Slategrey = unsigned(0xff708090);
	
	static const unsigned Snow = unsigned(0xfffffafa);
	
	static const unsigned Springgreen = unsigned(0xff00ff7f);
	
	static const unsigned Steelblue = unsigned(0xff4682b4);
	
	static const unsigned Tan = unsigned(0xffd2b48c);
	
	static const unsigned Teal = unsigned(0xff008080);
	
	static const unsigned Thistle = unsigned(0xffd8bfd8);
	
	static const unsigned Tomato = unsigned(0xffff6347);
	
	static const unsigned Turquoise = unsigned(0xff40e0d0);
	
	static const unsigned Violet = unsigned(0xffee82ee);
	
	static const unsigned Wheat = unsigned(0xfff5deb3);
	
	static const unsigned White = unsigned(0xffffffff);
	
	static const unsigned Whitesmoke = unsigned(0xfff5f5f5);
	
	static const unsigned Yellow = unsigned(0xffffff00);
	
	static const unsigned Yellowgreen = unsigned(0xff9acd32);
	
	static const TAlphaColor Null = TAlphaColor(0x0);
	
	__fastcall TAlphaColorRec(const TAlphaColor Color);
	static int __fastcall (*ColorToRGB)(TAlphaColor Color);
	TAlphaColorRec() {}
	
public:
	union
	{
		struct 
		{
			System::Byte B;
			System::Byte G;
			System::Byte R;
			System::Byte A;
		};
		struct 
		{
			System::Word HiWord;
			System::Word LoWord;
		};
		struct 
		{
			TAlphaColor Color;
		};
		
	};
};


typedef TAlphaColorRec TAlphaColors;

typedef TAlphaColorF *PAlphaColorF;

struct DECLSPEC_DRECORD TAlphaColorF
{
public:
	#define TAlphaColorF_Epsilon  (1.525900E-05)
	
	
private:
	static bool __fastcall SameComponent(const float Value1, const float Value2);
	static float __fastcall ClampComponent(const float Value);
	
public:
	float R;
	float G;
	float B;
	float A;
	static TAlphaColorF __fastcall Create(const float R, const float G, const float B, const float A = 1.000000E+00f)/* overload */;
	static TAlphaColorF __fastcall Create(const TAlphaColor Color)/* overload */;
	static TAlphaColorF __fastcall _op_Addition(const TAlphaColorF &Color1, const TAlphaColorF &Color2);
	static TAlphaColorF __fastcall _op_Subtraction(const TAlphaColorF &Color1, const TAlphaColorF &Color2);
	static bool __fastcall _op_Equality(const TAlphaColorF &Color1, const TAlphaColorF &Color2);
	static bool __fastcall _op_Inequality(const TAlphaColorF &Color1, const TAlphaColorF &Color2);
	static TAlphaColorF __fastcall _op_UnaryNegation(const TAlphaColorF &Color);
	static TAlphaColorF __fastcall _op_Multiply(const TAlphaColorF &Color1, const TAlphaColorF &Color2);
	static TAlphaColorF __fastcall _op_Multiply(const TAlphaColorF &Color, const float Factor);
	static TAlphaColorF __fastcall _op_Multiply(const float Factor, const TAlphaColorF &Color);
	static TAlphaColorF __fastcall _op_Division(const TAlphaColorF &Color, const float Factor);
	TAlphaColorF __fastcall PremultipliedAlpha();
	TAlphaColorF __fastcall UnpremultipliedAlpha();
	TAlphaColorF __fastcall Clamp();
	TAlphaColor __fastcall ToAlphaColor();
	
	friend TAlphaColorF operator +(const TAlphaColorF &Color1, const TAlphaColorF &Color2) { return TAlphaColorF::_op_Addition(Color1, Color2); }
	friend TAlphaColorF operator -(const TAlphaColorF &Color1, const TAlphaColorF &Color2) { return TAlphaColorF::_op_Subtraction(Color1, Color2); }
	friend bool operator ==(const TAlphaColorF &Color1, const TAlphaColorF &Color2) { return TAlphaColorF::_op_Equality(Color1, Color2); }
	friend bool operator !=(const TAlphaColorF &Color1, const TAlphaColorF &Color2) { return TAlphaColorF::_op_Inequality(Color1, Color2); }
	TAlphaColorF operator -() { return TAlphaColorF::_op_UnaryNegation(*this); }
	friend TAlphaColorF operator *(const TAlphaColorF &Color1, const TAlphaColorF &Color2) { return TAlphaColorF::_op_Multiply(Color1, Color2); }
	friend TAlphaColorF operator *(const TAlphaColorF &Color, const float Factor) { return TAlphaColorF::_op_Multiply(Color, Factor); }
	friend TAlphaColorF operator *(const float Factor, const TAlphaColorF &Color) { return TAlphaColorF::_op_Multiply(Factor, Color); }
	friend TAlphaColorF operator /(const TAlphaColorF &Color, const float Factor) { return TAlphaColorF::_op_Division(Color, Factor); }
};


typedef int TImageIndex;

typedef System::UnicodeString TImageName;

enum class DECLSPEC_DENUM TScrollStyle : unsigned char { ssNone, ssHorizontal, ssVertical, ssBoth };

enum DECLSPEC_DENUM System_Uitypes__1 : unsigned char { ttVertical, ttHorizontal };

typedef System::Set<System_Uitypes__1, System_Uitypes__1::ttVertical, System_Uitypes__1::ttHorizontal> TTouchTracking;

//-- var, const, procedure ---------------------------------------------------
static const TCursor crDefault = TCursor(0);
static const TCursor crNone = TCursor(-1);
static const TCursor crArrow = TCursor(-2);
static const TCursor crCross = TCursor(-3);
static const TCursor crIBeam = TCursor(-4);
static const TCursor crSize = TCursor(-22);
static const TCursor crSizeNESW = TCursor(-6);
static const TCursor crSizeNS = TCursor(-7);
static const TCursor crSizeNWSE = TCursor(-8);
static const TCursor crSizeWE = TCursor(-9);
static const TCursor crUpArrow = TCursor(-10);
static const TCursor crHourGlass = TCursor(-11);
static const TCursor crDrag = TCursor(-12);
static const TCursor crNoDrop = TCursor(-13);
static const TCursor crHSplit = TCursor(-14);
static const TCursor crVSplit = TCursor(-15);
static const TCursor crMultiDrag = TCursor(-16);
static const TCursor crSQLWait = TCursor(-17);
static const TCursor crNo = TCursor(-18);
static const TCursor crAppStart = TCursor(-19);
static const TCursor crHelp = TCursor(-20);
static const TCursor crHandPoint = TCursor(-21);
static const TCursor crSizeAll = TCursor(-22);
static const System::Int8 idOK = System::Int8(0x1);
static const System::Int8 idCancel = System::Int8(0x2);
static const System::Int8 idAbort = System::Int8(0x3);
static const System::Int8 idRetry = System::Int8(0x4);
static const System::Int8 idIgnore = System::Int8(0x5);
static const System::Int8 idYes = System::Int8(0x6);
static const System::Int8 idNo = System::Int8(0x7);
static const System::Int8 idClose = System::Int8(0x8);
static const System::Int8 idHelp = System::Int8(0x9);
static const System::Int8 idTryAgain = System::Int8(0xa);
static const System::Int8 idContinue = System::Int8(0xb);
static const System::Int8 mrNone = System::Int8(0x0);
static const System::Int8 mrOk = System::Int8(0x1);
static const System::Int8 mrCancel = System::Int8(0x2);
static const System::Int8 mrAbort = System::Int8(0x3);
static const System::Int8 mrRetry = System::Int8(0x4);
static const System::Int8 mrIgnore = System::Int8(0x5);
static const System::Int8 mrYes = System::Int8(0x6);
static const System::Int8 mrNo = System::Int8(0x7);
static const System::Int8 mrClose = System::Int8(0x8);
static const System::Int8 mrHelp = System::Int8(0x9);
static const System::Int8 mrTryAgain = System::Int8(0xa);
static const System::Int8 mrContinue = System::Int8(0xb);
static const System::Int8 mrAll = System::Int8(0xc);
static const System::Int8 mrNoToAll = System::Int8(0xd);
static const System::Int8 mrYesToAll = System::Int8(0xe);
static const System::Int8 vkLButton = System::Int8(0x1);
static const System::Int8 vkRButton = System::Int8(0x2);
static const System::Int8 vkCancel = System::Int8(0x3);
static const System::Int8 vkMButton = System::Int8(0x4);
static const System::Int8 vkXButton1 = System::Int8(0x5);
static const System::Int8 vkXButton2 = System::Int8(0x6);
static const System::Int8 vkBack = System::Int8(0x8);
static const System::Int8 vkTab = System::Int8(0x9);
static const System::Int8 vkLineFeed = System::Int8(0xa);
static const System::Int8 vkClear = System::Int8(0xc);
static const System::Int8 vkReturn = System::Int8(0xd);
static const System::Int8 vkShift = System::Int8(0x10);
static const System::Int8 vkControl = System::Int8(0x11);
static const System::Int8 vkMenu = System::Int8(0x12);
static const System::Int8 vkPause = System::Int8(0x13);
static const System::Int8 vkCapital = System::Int8(0x14);
static const System::Int8 vkKana = System::Int8(0x15);
static const System::Int8 vkHangul = System::Int8(0x15);
static const System::Int8 vkJunja = System::Int8(0x17);
static const System::Int8 vkFinal = System::Int8(0x18);
static const System::Int8 vkHanja = System::Int8(0x19);
static const System::Int8 vkKanji = System::Int8(0x19);
static const System::Int8 vkConvert = System::Int8(0x1c);
static const System::Int8 vkNonConvert = System::Int8(0x1d);
static const System::Int8 vkAccept = System::Int8(0x1e);
static const System::Int8 vkModeChange = System::Int8(0x1f);
static const System::Int8 vkEscape = System::Int8(0x1b);
static const System::Int8 vkSpace = System::Int8(0x20);
static const System::Int8 vkPrior = System::Int8(0x21);
static const System::Int8 vkNext = System::Int8(0x22);
static const System::Int8 vkEnd = System::Int8(0x23);
static const System::Int8 vkHome = System::Int8(0x24);
static const System::Int8 vkLeft = System::Int8(0x25);
static const System::Int8 vkUp = System::Int8(0x26);
static const System::Int8 vkRight = System::Int8(0x27);
static const System::Int8 vkDown = System::Int8(0x28);
static const System::Int8 vkSelect = System::Int8(0x29);
static const System::Int8 vkPrint = System::Int8(0x2a);
static const System::Int8 vkExecute = System::Int8(0x2b);
static const System::Int8 vkSnapshot = System::Int8(0x2c);
static const System::Int8 vkInsert = System::Int8(0x2d);
static const System::Int8 vkDelete = System::Int8(0x2e);
static const System::Int8 vkHelp = System::Int8(0x2f);
static const System::Int8 vk0 = System::Int8(0x30);
static const System::Int8 vk1 = System::Int8(0x31);
static const System::Int8 vk2 = System::Int8(0x32);
static const System::Int8 vk3 = System::Int8(0x33);
static const System::Int8 vk4 = System::Int8(0x34);
static const System::Int8 vk5 = System::Int8(0x35);
static const System::Int8 vk6 = System::Int8(0x36);
static const System::Int8 vk7 = System::Int8(0x37);
static const System::Int8 vk8 = System::Int8(0x38);
static const System::Int8 vk9 = System::Int8(0x39);
static const System::Int8 vkLCommand = System::Int8(0x3d);
static const System::Int8 vkRCommand = System::Int8(0x3e);
static const System::Int8 vkFunction = System::Int8(0x3f);
static const System::Int8 vkA = System::Int8(0x41);
static const System::Int8 vkB = System::Int8(0x42);
static const System::Int8 vkC = System::Int8(0x43);
static const System::Int8 vkD = System::Int8(0x44);
static const System::Int8 vkE = System::Int8(0x45);
static const System::Int8 vkF = System::Int8(0x46);
static const System::Int8 vkG = System::Int8(0x47);
static const System::Int8 vkH = System::Int8(0x48);
static const System::Int8 vkI = System::Int8(0x49);
static const System::Int8 vkJ = System::Int8(0x4a);
static const System::Int8 vkK = System::Int8(0x4b);
static const System::Int8 vkL = System::Int8(0x4c);
static const System::Int8 vkM = System::Int8(0x4d);
static const System::Int8 vkN = System::Int8(0x4e);
static const System::Int8 vkO = System::Int8(0x4f);
static const System::Int8 vkP = System::Int8(0x50);
static const System::Int8 vkQ = System::Int8(0x51);
static const System::Int8 vkR = System::Int8(0x52);
static const System::Int8 vkS = System::Int8(0x53);
static const System::Int8 vkT = System::Int8(0x54);
static const System::Int8 vkU = System::Int8(0x55);
static const System::Int8 vkV = System::Int8(0x56);
static const System::Int8 vkW = System::Int8(0x57);
static const System::Int8 vkX = System::Int8(0x58);
static const System::Int8 vkY = System::Int8(0x59);
static const System::Int8 vkZ = System::Int8(0x5a);
static const System::Int8 vkLWin = System::Int8(0x5b);
static const System::Int8 vkRWin = System::Int8(0x5c);
static const System::Int8 vkApps = System::Int8(0x5d);
static const System::Int8 vkSleep = System::Int8(0x5f);
static const System::Int8 vkNumpad0 = System::Int8(0x60);
static const System::Int8 vkNumpad1 = System::Int8(0x61);
static const System::Int8 vkNumpad2 = System::Int8(0x62);
static const System::Int8 vkNumpad3 = System::Int8(0x63);
static const System::Int8 vkNumpad4 = System::Int8(0x64);
static const System::Int8 vkNumpad5 = System::Int8(0x65);
static const System::Int8 vkNumpad6 = System::Int8(0x66);
static const System::Int8 vkNumpad7 = System::Int8(0x67);
static const System::Int8 vkNumpad8 = System::Int8(0x68);
static const System::Int8 vkNumpad9 = System::Int8(0x69);
static const System::Int8 vkMultiply = System::Int8(0x6a);
static const System::Int8 vkAdd = System::Int8(0x6b);
static const System::Int8 vkSeparator = System::Int8(0x6c);
static const System::Int8 vkSubtract = System::Int8(0x6d);
static const System::Int8 vkDecimal = System::Int8(0x6e);
static const System::Int8 vkDivide = System::Int8(0x6f);
static const System::Int8 vkF1 = System::Int8(0x70);
static const System::Int8 vkF2 = System::Int8(0x71);
static const System::Int8 vkF3 = System::Int8(0x72);
static const System::Int8 vkF4 = System::Int8(0x73);
static const System::Int8 vkF5 = System::Int8(0x74);
static const System::Int8 vkF6 = System::Int8(0x75);
static const System::Int8 vkF7 = System::Int8(0x76);
static const System::Int8 vkF8 = System::Int8(0x77);
static const System::Int8 vkF9 = System::Int8(0x78);
static const System::Int8 vkF10 = System::Int8(0x79);
static const System::Int8 vkF11 = System::Int8(0x7a);
static const System::Int8 vkF12 = System::Int8(0x7b);
static const System::Int8 vkF13 = System::Int8(0x7c);
static const System::Int8 vkF14 = System::Int8(0x7d);
static const System::Int8 vkF15 = System::Int8(0x7e);
static const System::Int8 vkF16 = System::Int8(0x7f);
static const System::Byte vkF17 = System::Byte(0x80);
static const System::Byte vkF18 = System::Byte(0x81);
static const System::Byte vkF19 = System::Byte(0x82);
static const System::Byte vkF20 = System::Byte(0x83);
static const System::Byte vkF21 = System::Byte(0x84);
static const System::Byte vkF22 = System::Byte(0x85);
static const System::Byte vkF23 = System::Byte(0x86);
static const System::Byte vkF24 = System::Byte(0x87);
static const System::Byte vkCamera = System::Byte(0x88);
static const System::Byte vkHardwareBack = System::Byte(0x89);
static const System::Byte vkNumLock = System::Byte(0x90);
static const System::Byte vkScroll = System::Byte(0x91);
static const System::Byte vkLShift = System::Byte(0xa0);
static const System::Byte vkRShift = System::Byte(0xa1);
static const System::Byte vkLControl = System::Byte(0xa2);
static const System::Byte vkRControl = System::Byte(0xa3);
static const System::Byte vkLMenu = System::Byte(0xa4);
static const System::Byte vkRMenu = System::Byte(0xa5);
static const System::Byte vkBrowserBack = System::Byte(0xa6);
static const System::Byte vkBrowserForward = System::Byte(0xa7);
static const System::Byte vkBrowserRefresh = System::Byte(0xa8);
static const System::Byte vkBrowserStop = System::Byte(0xa9);
static const System::Byte vkBrowserSearch = System::Byte(0xaa);
static const System::Byte vkBrowserFavorites = System::Byte(0xab);
static const System::Byte vkBrowserHome = System::Byte(0xac);
static const System::Byte vkVolumeMute = System::Byte(0xad);
static const System::Byte vkVolumeDown = System::Byte(0xae);
static const System::Byte vkVolumeUp = System::Byte(0xaf);
static const System::Byte vkMediaNextTrack = System::Byte(0xb0);
static const System::Byte vkMediaPrevTrack = System::Byte(0xb1);
static const System::Byte vkMediaStop = System::Byte(0xb2);
static const System::Byte vkMediaPlayPause = System::Byte(0xb3);
static const System::Byte vkLaunchMail = System::Byte(0xb4);
static const System::Byte vkLaunchMediaSelect = System::Byte(0xb5);
static const System::Byte vkLaunchApp1 = System::Byte(0xb6);
static const System::Byte vkLaunchApp2 = System::Byte(0xb7);
static const System::Byte vkSemicolon = System::Byte(0xba);
static const System::Byte vkEqual = System::Byte(0xbb);
static const System::Byte vkComma = System::Byte(0xbc);
static const System::Byte vkMinus = System::Byte(0xbd);
static const System::Byte vkPeriod = System::Byte(0xbe);
static const System::Byte vkSlash = System::Byte(0xbf);
static const System::Byte vkTilde = System::Byte(0xc0);
static const System::Byte vkLeftBracket = System::Byte(0xdb);
static const System::Byte vkBackslash = System::Byte(0xdc);
static const System::Byte vkRightBracket = System::Byte(0xdd);
static const System::Byte vkQuote = System::Byte(0xde);
static const System::Byte vkPara = System::Byte(0xdf);
static const System::Byte vkOem102 = System::Byte(0xe2);
static const System::Byte vkIcoHelp = System::Byte(0xe3);
static const System::Byte vkIco00 = System::Byte(0xe4);
static const System::Byte vkProcessKey = System::Byte(0xe5);
static const System::Byte vkIcoClear = System::Byte(0xe6);
static const System::Byte vkPacket = System::Byte(0xe7);
static const System::Byte vkAttn = System::Byte(0xf6);
static const System::Byte vkCrsel = System::Byte(0xf7);
static const System::Byte vkExsel = System::Byte(0xf8);
static const System::Byte vkErEof = System::Byte(0xf9);
static const System::Byte vkPlay = System::Byte(0xfa);
static const System::Byte vkZoom = System::Byte(0xfb);
static const System::Byte vkNoname = System::Byte(0xfc);
static const System::Byte vkPA1 = System::Byte(0xfd);
static const System::Byte vkOemClear = System::Byte(0xfe);
static const System::Byte vkNone = System::Byte(0xff);
static const System::Int8 sgiNoGesture = System::Int8(0x0);
static const System::Int8 sgiLeft = System::Int8(0x1);
static const System::Int8 sgiRight = System::Int8(0x2);
static const System::Int8 sgiUp = System::Int8(0x3);
static const System::Int8 sgiDown = System::Int8(0x4);
static const System::Int8 sgiUpLeft = System::Int8(0x5);
static const System::Int8 sgiUpRight = System::Int8(0x6);
static const System::Int8 sgiDownLeft = System::Int8(0x7);
static const System::Int8 sgiDownRight = System::Int8(0x8);
static const System::Int8 sgiLeftUp = System::Int8(0x9);
static const System::Int8 sgiLeftDown = System::Int8(0xa);
static const System::Int8 sgiRightUp = System::Int8(0xb);
static const System::Int8 sgiRightDown = System::Int8(0xc);
static const System::Int8 sgiUpDown = System::Int8(0xd);
static const System::Int8 sgiDownUp = System::Int8(0xe);
static const System::Int8 sgiLeftRight = System::Int8(0xf);
static const System::Int8 sgiRightLeft = System::Int8(0x10);
static const System::Int8 sgiUpLeftLong = System::Int8(0x11);
static const System::Int8 sgiUpRightLong = System::Int8(0x12);
static const System::Int8 sgiDownLeftLong = System::Int8(0x13);
static const System::Int8 sgiDownRightLong = System::Int8(0x14);
static const System::Int8 sgiScratchout = System::Int8(0x15);
static const System::Int8 sgiTriangle = System::Int8(0x16);
static const System::Int8 sgiSquare = System::Int8(0x17);
static const System::Int8 sgiCheck = System::Int8(0x18);
static const System::Int8 sgiCurlicue = System::Int8(0x19);
static const System::Int8 sgiDoubleCurlicue = System::Int8(0x1a);
static const System::Int8 sgiCircle = System::Int8(0x1b);
static const System::Int8 sgiDoubleCircle = System::Int8(0x1c);
static const System::Int8 sgiSemiCircleLeft = System::Int8(0x1d);
static const System::Int8 sgiSemiCircleRight = System::Int8(0x1e);
static const System::Int8 sgiChevronUp = System::Int8(0x1f);
static const System::Int8 sgiChevronDown = System::Int8(0x20);
static const System::Int8 sgiChevronLeft = System::Int8(0x21);
static const System::Int8 sgiChevronRight = System::Int8(0x22);
static const System::Int8 sgiFirst = System::Int8(0x1);
static const System::Int8 sgiLast = System::Int8(0x22);
static const short cgiFirst = short(-512);
static const System::Int8 cgiLast = System::Int8(-1);
static const short rgiFirst = short(-1024);
static const short rgiLast = short(-513);
static const System::Word igiFirst = System::Word(0x100);
static const System::Word igiLast = System::Word(0x1ff);
static const System::Word igiBegin = System::Word(0x101);
static const System::Word igiEnd = System::Word(0x102);
static const System::Word igiZoom = System::Word(0x103);
static const System::Word igiPan = System::Word(0x104);
static const System::Word igiRotate = System::Word(0x105);
static const System::Word igiTwoFingerTap = System::Word(0x106);
static const System::Word igiPressAndTap = System::Word(0x107);
static const System::Word igiLongTap = System::Word(0x108);
static const System::Word igiDoubleTap = System::Word(0x109);
extern DELPHI_PACKAGE bool __fastcall IsPositiveResult(const TModalResult AModalResult);
extern DELPHI_PACKAGE bool __fastcall IsNegativeResult(const TModalResult AModalResult);
extern DELPHI_PACKAGE bool __fastcall IsAbortResult(const TModalResult AModalResult);
extern DELPHI_PACKAGE bool __fastcall IsAnAllResult(const TModalResult AModalResult);
extern DELPHI_PACKAGE TModalResult __fastcall StripAllFromResult(const TModalResult AModalResult);
}	/* namespace Uitypes */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_UITYPES)
using namespace System::Uitypes;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_UitypesHPP
