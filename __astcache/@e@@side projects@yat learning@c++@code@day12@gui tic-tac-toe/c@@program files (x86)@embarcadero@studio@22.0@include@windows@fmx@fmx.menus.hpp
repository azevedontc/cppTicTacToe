// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Menus.pas' rev: 35.00 (Windows)

#ifndef Fmx_MenusHPP
#define Fmx_MenusHPP

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
#include <System.Messaging.hpp>
#include <System.ImageList.hpp>
#include <FMX.Types.hpp>
#include <FMX.Forms.hpp>
#include <FMX.ActnList.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Graphics.hpp>
#include <FMX.ImgList.hpp>
#include <FMX.Objects.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Menus
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TStartMenuLoopMessage;
__interface DELPHIINTERFACE IMenuView;
typedef System::DelphiInterface<IMenuView> _di_IMenuView;
__interface DELPHIINTERFACE IFMXMenuService;
typedef System::DelphiInterface<IFMXMenuService> _di_IFMXMenuService;
class DELPHICLASS TMenuItemBitmap;
class DELPHICLASS TMenuItem;
class DELPHICLASS TPopupMenu;
class DELPHICLASS TMenuBar;
class DELPHICLASS TMainMenu;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStartMenuLoopMessage : public System::Messaging::TMessageBase
{
	typedef System::Messaging::TMessageBase inherited;
	
private:
	Fmx::Types::_di_IRoot FRoot;
	
public:
	__fastcall TStartMenuLoopMessage(const Fmx::Types::_di_IRoot ARoot);
	__property Fmx::Types::_di_IRoot Root = {read=FRoot};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TStartMenuLoopMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{C211C5EA-789A-48C3-9739-900782101C51}") IMenuView  : public Fmx::Types::IControl 
{
	virtual bool __fastcall GetLoop() = 0 ;
	virtual void __fastcall SetLoop(const bool Value) = 0 ;
	virtual _di_IMenuView __fastcall GetParentView() = 0 ;
	virtual void __fastcall SetParentView(const _di_IMenuView Value) = 0 ;
	virtual _di_IMenuView __fastcall GetChildView() = 0 ;
	virtual void __fastcall SetChildView(const _di_IMenuView Value) = 0 ;
	virtual TMenuItem* __fastcall GetSelected() = 0 ;
	virtual void __fastcall SetSelected(TMenuItem* const Value) = 0 ;
	virtual bool __fastcall GetIsMenuBar() = 0 ;
	virtual int __fastcall GetItemsCount() = 0 ;
	virtual Fmx::Types::TFmxObject* __fastcall GetItem(const int AIndex) = 0 ;
	__property bool IsMenuBar = {read=GetIsMenuBar};
	__property bool Loop = {read=GetLoop, write=SetLoop};
	__property _di_IMenuView ParentView = {read=GetParentView, write=SetParentView};
	__property _di_IMenuView ChildView = {read=GetChildView, write=SetChildView};
	__property TMenuItem* Selected = {read=GetSelected, write=SetSelected};
};

__interface  INTERFACE_UUID("{8338685D-26BB-4421-AE54-1DC8456DC2A0}") IFMXMenuService  : public System::IInterface 
{
	virtual void __fastcall StartMenuLoop(const _di_IMenuView AView) = 0 ;
	virtual System::UnicodeString __fastcall ShortCutToText(System::Classes::TShortCut ShortCut) = 0 ;
	virtual void __fastcall ShortCutToKey(System::Classes::TShortCut ShortCut, System::Word &Key, System::Classes::TShiftState &Shift) = 0 ;
	virtual int __fastcall TextToShortCut(System::UnicodeString Text) = 0 ;
	virtual void __fastcall CreateOSMenu(Fmx::Forms::TCommonCustomForm* AForm, const Fmx::Types::_di_IItemsContainer AMenu) = 0 ;
	virtual void __fastcall UpdateMenuItem(const Fmx::Types::_di_IItemsContainer AItem, Fmx::Types::TMenuItemChanges AChange) = 0 ;
	virtual void __fastcall DestroyMenuItem(const Fmx::Types::_di_IItemsContainer AItem) = 0 ;
	virtual bool __fastcall IsMenuBarOnWindowBorder() = 0 ;
	virtual void __fastcall UpdateMenuBar() = 0 ;
};

class PASCALIMPLEMENTATION TMenuItemBitmap : public Fmx::Graphics::TBitmap
{
	typedef Fmx::Graphics::TBitmap inherited;
	
private:
	TMenuItem* FMenuItem;
	
protected:
	virtual void __fastcall DoChange();
	
public:
	__property TMenuItem* MenuItem = {read=FMenuItem};
public:
	/* TBitmap.Create */ inline __fastcall virtual TMenuItemBitmap()/* overload */ : Fmx::Graphics::TBitmap() { }
	/* TBitmap.Create */ inline __fastcall virtual TMenuItemBitmap(const int AWidth, const int AHeight)/* overload */ : Fmx::Graphics::TBitmap(AWidth, AHeight) { }
	/* TBitmap.CreateFromStream */ inline __fastcall virtual TMenuItemBitmap(System::Classes::TStream* const AStream) : Fmx::Graphics::TBitmap(AStream) { }
	/* TBitmap.CreateFromFile */ inline __fastcall virtual TMenuItemBitmap(const System::UnicodeString AFileName) : Fmx::Graphics::TBitmap(AFileName) { }
	/* TBitmap.CreateFromBitmapAndMask */ inline __fastcall TMenuItemBitmap(Fmx::Graphics::TBitmap* const Bitmap, Fmx::Graphics::TBitmap* const Mask) : Fmx::Graphics::TBitmap(Bitmap, Mask) { }
	/* TBitmap.Destroy */ inline __fastcall virtual ~TMenuItemBitmap() { }
	
};


class PASCALIMPLEMENTATION TMenuItem : public Fmx::Controls::TTextControl
{
	typedef Fmx::Controls::TTextControl inherited;
	
private:
	Fmx::Controls::TContent* FContent;
	Fmx::Types::TFmxObject* FNoItemsContent;
	bool FIsSelected;
	Fmx::Types::TTimer* FPopupTimer;
	System::Classes::TShortCut FShortCut;
	Fmx::Objects::TText* FShortCutObject;
	Fmx::Controls::TControl* FSubmarkObject;
	Fmx::Controls::TControl* FCheckmarkObject;
	Fmx::Controls::TControl* FCheckBackgroundObject;
	Fmx::Controls::TControl* FGlyphObject;
	bool FOldGlyphObjectVisible;
	bool FOldGlyphAutoHide;
	bool FOldGlyphVisible;
	bool FOldCheckmarkVisible;
	bool FOldCheckmarkStyleVisible;
	Fmx::Controls::TControl* FBitmapObject;
	bool FOldBitmapVisible;
	Fmx::Controls::TControl* FCheckMarkStyle;
	bool FOldFShortCutVisible;
	bool FOldSubmarkVisible;
	bool FShown;
	Fmx::Imglist::TGlyph* FGlyph;
	NativeUInt FHandle;
	bool FIsChecked;
	Fmx::Graphics::TBitmap* FBitmap;
	bool FAutoCheck;
	bool FRadioItem;
	System::UnicodeString FGroupName;
	_di_IFMXMenuService FMenuService;
	bool FClickImmediately;
	Fmx::Imglist::TGlyphImageLink* FImageLink;
	Fmx::Imglist::TCustomImageList* FImages;
	bool FSubMenuVisible;
	float FImageOffset;
	bool FIsMenuBarItem;
	bool FIsMenuBarItemCached;
	void __fastcall SetIsSelected(const bool Value);
	_di_IMenuView __fastcall GetMenuView();
	void __fastcall DoPopupTimer(System::TObject* Sender);
	void __fastcall SetShortCut(const System::Classes::TShortCut Value);
	System::Classes::TShortCut __fastcall GetShortCut();
	bool __fastcall ShortCutStored();
	void __fastcall SetBitmap(Fmx::Graphics::TBitmap* const Value);
	void __fastcall TurnSiblingsOff();
	bool __fastcall GetRadioItem();
	void __fastcall SetRadioItem(const bool Value);
	bool __fastcall GetIsChecked();
	void __fastcall SetIsChecked(const bool Value);
	bool __fastcall IsCheckedStored();
	System::UnicodeString __fastcall GetGroupName();
	void __fastcall SetGroupName(const System::UnicodeString Value);
	bool __fastcall GroupNameStored();
	int __fastcall GetGroupIndex();
	void __fastcall SetGroupIndex(const int Value);
	void __fastcall UpdateGroup(const System::UnicodeString Value);
	bool __fastcall RadioItemStored();
	bool __fastcall GetAutoCheck();
	void __fastcall SetAutoCheck(const bool Value);
	bool __fastcall AutoCheckStored();
	void __fastcall AddNoItemObject(Fmx::Types::TFmxObject* const AObject);
	NativeUInt __fastcall GetHandle();
	void __fastcall SetHandle(const NativeUInt Value);
	bool __fastcall GetHandleSupported();
	TMenuItem* __fastcall GetItems(const int Index);
	void __fastcall DoUpdateMenu();
	void __fastcall UpdateVisibleObjects();
	Fmx::Imglist::TCustomImageList* __fastcall GetImages();
	void __fastcall SetImages(Fmx::Imglist::TCustomImageList* const Value);
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	System::Imagelist::TBaseImageList* __fastcall GetImageList();
	void __fastcall SetImageList(System::Imagelist::TBaseImageList* const Value);
	bool __fastcall HasOffsetOfGlyph();
	bool __fastcall HasOffsetOfBitmap();
	void __fastcall InitItem(const bool CleanAutoHide, const float Left, const float Top, const float Width, const float Height);
	TMenuItem* __fastcall GetParentMenuItem();
	TMainMenu* __fastcall GetMainMenu();
	bool __fastcall GetIsSeparator();
	
protected:
	virtual System::UnicodeString __fastcall DoFilterControlText(const System::UnicodeString AText);
	virtual bool __fastcall CanTriggerAcceleratorKey();
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall Click();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall SetText(const System::UnicodeString Value);
	virtual bool __fastcall EnterChildren(Fmx::Types::_di_IControl AObject);
	virtual void __fastcall ActionChange(System::Classes::TBasicAction* Sender, bool CheckDefaults);
	int __fastcall GetVisibleItemsCount();
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	virtual void __fastcall Move();
	virtual void __fastcall Resize();
	virtual void __fastcall DoBitmapChanged();
	System::Types::TPointF __fastcall CalcVisibleObjectsItemSize(Fmx::Graphics::TCanvas* const ACanvas, const System::Types::TPointF &APointF);
	virtual void __fastcall ImagesChanged();
	virtual bool __fastcall ImageIndexStored();
	virtual void __fastcall SetParent(Fmx::Types::TFmxObject* const Value);
	virtual void __fastcall ParentChanged();
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	int __fastcall GetItemsCount();
	Fmx::Types::TFmxObject* __fastcall GetItem(const int AIndex);
	virtual void __fastcall SetVisible(const bool AValue);
	virtual void __fastcall SetEnabled(const bool Value);
	virtual void __fastcall DialogKey(System::Word &Key, System::Classes::TShiftState Shift);
	bool __fastcall IsMenuBarItem();
#ifndef _WIN64
	__property NativeUInt Handle = {read=GetHandle, write=SetHandle, nodefault};
#else /* _WIN64 */
	__property NativeUInt Handle = {read=GetHandle, write=SetHandle};
#endif /* _WIN64 */
	__property float ImageOffset = {read=FImageOffset};
	
public:
	__fastcall virtual TMenuItem(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TMenuItem();
	void __fastcall Clear();
	System::Types::TPointF __fastcall CalcSize();
	System::Types::TPointF __fastcall CalcRenderSize();
	bool __fastcall CanBeClicked();
	__property TMenuItem* ParentMenuItem = {read=GetParentMenuItem};
	__property TMainMenu* MainMenu = {read=GetMainMenu};
	void __fastcall Popup();
	void __fastcall NeedPopup();
	bool __fastcall HavePopup();
	__property _di_IMenuView View = {read=GetMenuView};
	__property int ItemsCount = {read=GetItemsCount, nodefault};
	__property TMenuItem* Items[const int AIndex] = {read=GetItems};
	__property bool IsSelected = {read=FIsSelected, write=SetIsSelected, nodefault};
	__property bool IsSeparator = {read=GetIsSeparator, nodefault};
	__property Fmx::Imglist::TCustomImageList* Images = {read=GetImages};
	
__published:
	__property Action;
	__property Fmx::Graphics::TBitmap* Bitmap = {read=FBitmap, write=SetBitmap};
	__property Enabled;
	__property Locked = {default=0};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property bool AutoCheck = {read=GetAutoCheck, write=SetAutoCheck, stored=AutoCheckStored, default=0};
	__property int GroupIndex = {read=GetGroupIndex, write=SetGroupIndex, stored=GroupNameStored, default=0};
	__property bool RadioItem = {read=GetRadioItem, write=SetRadioItem, stored=RadioItemStored, default=0};
	__property bool IsChecked = {read=FIsChecked, write=SetIsChecked, stored=IsCheckedStored, default=0};
	__property System::Classes::TShortCut ShortCut = {read=GetShortCut, write=SetShortCut, stored=ShortCutStored, nodefault};
	__property StyleLookup = {default=0};
	__property Text = {default=0};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property System::Uitypes::TImageIndex ImageIndex = {read=GetImageIndex, write=SetImageIndex, stored=ImageIndexStored, nodefault};
	__property OnApplyStyleLookup;
	__property OnClick;
private:
	void *__IKeyShortcut;	// Fmx::Actnlist::IKeyShortcut 
	void *__IGlyph;	// Fmx::Actnlist::IGlyph 
	void *__IGroupName;	// Fmx::Actnlist::IGroupName 
	void *__INativeControl;	// Fmx::Types::INativeControl 
	void *__IItemsContainer;	// Fmx::Types::IItemsContainer 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {DE946EB7-0A6F-4458-AEB0-C911122630D0}
	operator Fmx::Actnlist::_di_IIsChecked()
	{
		Fmx::Actnlist::_di_IIsChecked intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::IIsChecked*(void) { return (Fmx::Actnlist::IIsChecked*)&__IGroupName; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1AE6E932-9291-4BCD-93D1-DDD2A3E09394}
	operator Fmx::Actnlist::_di_IKeyShortcut()
	{
		Fmx::Actnlist::_di_IKeyShortcut intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::IKeyShortcut*(void) { return (Fmx::Actnlist::IKeyShortcut*)&__IKeyShortcut; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {62BDCA4F-820A-4058-B57A-FE8931DB3CCC}
	operator Fmx::Actnlist::_di_IGlyph()
	{
		Fmx::Actnlist::_di_IGlyph intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::IGlyph*(void) { return (Fmx::Actnlist::IGlyph*)&__IGlyph; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F5C14792-67AB-41F2-99C1-90C7F94102EE}
	operator Fmx::Actnlist::_di_IGroupName()
	{
		Fmx::Actnlist::_di_IGroupName intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::IGroupName*(void) { return (Fmx::Actnlist::IGroupName*)&__IGroupName; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E6F1A17-BAE3-456C-8551-5F6EA92EEE32}
	operator Fmx::Types::_di_INativeControl()
	{
		Fmx::Types::_di_INativeControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::INativeControl*(void) { return (Fmx::Types::INativeControl*)&__INativeControl; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {100B2F87-5DCB-4699-B751-B4439588E82A}
	operator Fmx::Types::_di_IItemsContainer()
	{
		Fmx::Types::_di_IItemsContainer intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IItemsContainer*(void) { return (Fmx::Types::IItemsContainer*)&__IItemsContainer; }
	#endif
	
};


class PASCALIMPLEMENTATION TPopupMenu : public Fmx::Types::TCustomPopupMenu
{
	typedef Fmx::Types::TCustomPopupMenu inherited;
	
private:
	Fmx::Controls::TContent* FContent;
	Fmx::Types::TFmxObject* FNoItemsContent;
	System::Types::TPointF FPopupPoint;
	_di_IFMXMenuService FMenuService;
	Fmx::Imglist::TGlyphImageLink* FImageLink;
	Fmx::Imglist::TCustomImageList* FImages;
	void __fastcall AddNoItemObject(Fmx::Types::TFmxObject* const AObject);
	int __fastcall GetItemsCount();
	Fmx::Types::TFmxObject* __fastcall GetItem(const int AIndex);
	Fmx::Types::TFmxObject* __fastcall GetObject();
	TMenuItem* __fastcall GetItems(const int Index);
	Fmx::Imglist::TCustomImageList* __fastcall GetImages();
	void __fastcall SetImages(Fmx::Imglist::TCustomImageList* const Value);
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	System::Imagelist::TBaseImageList* __fastcall GetImageList();
	void __fastcall SetImageList(System::Imagelist::TBaseImageList* const Value);
	
protected:
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall Loaded();
	virtual void __fastcall ImagesChanged();
	
public:
	__fastcall virtual TPopupMenu(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TPopupMenu();
	void __fastcall Clear();
	void __fastcall CloseMenu();
	virtual void __fastcall Popup(float X, float Y);
	__property System::Types::TPointF PopupPoint = {read=FPopupPoint};
	void __fastcall DialogKey(System::Word &Key, System::Classes::TShiftState Shift);
	__property int ItemsCount = {read=GetItemsCount, nodefault};
	__property TMenuItem* Items[const int AIndex] = {read=GetItems};
	
__published:
	__property Fmx::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
	__property OnPopup;
private:
	void *__IGlyph;	// Fmx::Actnlist::IGlyph 
	void *__IItemsContainer;	// Fmx::Types::IItemsContainer 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {62BDCA4F-820A-4058-B57A-FE8931DB3CCC}
	operator Fmx::Actnlist::_di_IGlyph()
	{
		Fmx::Actnlist::_di_IGlyph intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::IGlyph*(void) { return (Fmx::Actnlist::IGlyph*)&__IGlyph; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {100B2F87-5DCB-4699-B751-B4439588E82A}
	operator Fmx::Types::_di_IItemsContainer()
	{
		Fmx::Types::_di_IItemsContainer intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IItemsContainer*(void) { return (Fmx::Types::IItemsContainer*)&__IItemsContainer; }
	#endif
	
};


class PASCALIMPLEMENTATION TMenuBar : public Fmx::Controls::TStyledControl
{
	typedef Fmx::Controls::TStyledControl inherited;
	
private:
	Fmx::Controls::TContent* FContent;
	Fmx::Controls::TControl* FContentLayout;
	Fmx::Controls::TControl* FNoItemsContent;
	bool FLoop;
	_di_IMenuView FParentView;
	_di_IMenuView FChildView;
	TMenuItem* FSelected;
	_di_IFMXMenuService FMenuService;
	bool FExplicitVisible;
	bool FUpdatingVisible;
	Fmx::Imglist::TGlyphImageLink* FImageLink;
	Fmx::Imglist::TCustomImageList* FImages;
	bool __fastcall GetLoop();
	void __fastcall SetLoop(const bool Value);
	_di_IMenuView __fastcall GetParentView();
	void __fastcall SetParentView(const _di_IMenuView Value);
	_di_IMenuView __fastcall GetChildView();
	void __fastcall SetChildView(const _di_IMenuView Value);
	TMenuItem* __fastcall GetSelected();
	void __fastcall SetSelected(TMenuItem* const Value);
	bool __fastcall GetIsMenuBar();
	int __fastcall GetItemsCount();
	Fmx::Types::TFmxObject* __fastcall GetItem(const int AIndex);
	void __fastcall AddNoItemObject(Fmx::Types::TFmxObject* AObject);
	NativeUInt __fastcall GetHandle();
	void __fastcall SetHandle(const NativeUInt Value);
	bool __fastcall GetHandleSupported();
	TMenuItem* __fastcall GetItems(const int Index);
	void __fastcall UpdateVisible();
	void __fastcall StartMenuLoopMessage(System::TObject* const Sender, System::Messaging::TMessageBase* const M);
	Fmx::Imglist::TCustomImageList* __fastcall GetImages();
	void __fastcall SetImages(Fmx::Imglist::TCustomImageList* const Value);
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	System::Imagelist::TBaseImageList* __fastcall GetImageList();
	void __fastcall SetImageList(System::Imagelist::TBaseImageList* const Value);
	
protected:
	TMenuItem* __fastcall GetMenuItem(const int AIndex);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall DoRealign();
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DialogKey(System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall DoUpdateOSMenu(System::TObject* const Sender);
	virtual void __fastcall SetVisible(const bool Value);
	virtual void __fastcall ImagesChanged();
	virtual void __fastcall Loaded();
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	
public:
	__fastcall virtual TMenuBar(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TMenuBar();
	void __fastcall StartMenuLoop();
	void __fastcall Clear();
	__property int ItemsCount = {read=GetItemsCount, nodefault};
	__property TMenuItem* Items[const int AIndex] = {read=GetItems};
	
__published:
	__property Anchors;
	__property Align = {default=1};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Fmx::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TabOrder = {default=-1};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnCanFocus;
	__property OnClick;
	__property OnMouseMove;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
private:
	void *__IGlyph;	// Fmx::Actnlist::IGlyph 
	void *__IMenuView;	// IMenuView 
	void *__INativeControl;	// Fmx::Types::INativeControl 
	void *__IItemsContainer;	// Fmx::Types::IItemsContainer 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {62BDCA4F-820A-4058-B57A-FE8931DB3CCC}
	operator Fmx::Actnlist::_di_IGlyph()
	{
		Fmx::Actnlist::_di_IGlyph intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::IGlyph*(void) { return (Fmx::Actnlist::IGlyph*)&__IGlyph; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C211C5EA-789A-48C3-9739-900782101C51}
	operator _di_IMenuView()
	{
		_di_IMenuView intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IMenuView*(void) { return (IMenuView*)&__IMenuView; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E6F1A17-BAE3-456C-8551-5F6EA92EEE32}
	operator Fmx::Types::_di_INativeControl()
	{
		Fmx::Types::_di_INativeControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::INativeControl*(void) { return (Fmx::Types::INativeControl*)&__INativeControl; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {100B2F87-5DCB-4699-B751-B4439588E82A}
	operator Fmx::Types::_di_IItemsContainer()
	{
		Fmx::Types::_di_IItemsContainer intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IItemsContainer*(void) { return (Fmx::Types::IItemsContainer*)&__IItemsContainer; }
	#endif
	
};


class PASCALIMPLEMENTATION TMainMenu : public Fmx::Types::TFmxObject
{
	typedef Fmx::Types::TFmxObject inherited;
	
private:
	_di_IFMXMenuService FMenuService;
	NativeUInt FHandle;
	int FStyleChangedId;
	Fmx::Forms::TCommonCustomForm* FOldForm;
	Fmx::Imglist::TGlyphImageLink* FImageLink;
	Fmx::Imglist::TCustomImageList* FImages;
	void __fastcall StyleChangedHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	int __fastcall GetItemsCount();
	Fmx::Types::TFmxObject* __fastcall GetItem(const int AIndex);
	Fmx::Types::TFmxObject* __fastcall GetObject();
	NativeUInt __fastcall GetHandle();
	void __fastcall SetHandle(const NativeUInt Value);
	bool __fastcall GetHandleSupported();
	Fmx::Forms::TCommonCustomForm* __fastcall ParentForm();
	Fmx::Imglist::TCustomImageList* __fastcall GetImages();
	void __fastcall SetImages(Fmx::Imglist::TCustomImageList* const Value);
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	System::Imagelist::TBaseImageList* __fastcall GetImageList();
	void __fastcall SetImageList(System::Imagelist::TBaseImageList* const Value);
	
protected:
	virtual void __fastcall ParentChanged();
	virtual void __fastcall DoRecreateOSMenu(Fmx::Forms::TCommonCustomForm* const Form);
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall Loaded();
	virtual void __fastcall ImagesChanged();
	
public:
	__fastcall virtual TMainMenu(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TMainMenu();
	virtual void __fastcall BeforeDestruction();
	void __fastcall RecreateOSMenu();
	virtual void __fastcall Exchange(Fmx::Types::TFmxObject* const AObject1, Fmx::Types::TFmxObject* const AObject2);
	void __fastcall DialogKey(System::Word &Key, System::Classes::TShiftState Shift);
	__property int ItemsCount = {read=GetItemsCount, nodefault};
	__property Fmx::Types::TFmxObject* Items[const int AIndex] = {read=GetItem};
	
__published:
	__property Fmx::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
private:
	void *__IGlyph;	// Fmx::Actnlist::IGlyph 
	void *__INativeControl;	// Fmx::Types::INativeControl 
	void *__IItemsContainer;	// Fmx::Types::IItemsContainer 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {62BDCA4F-820A-4058-B57A-FE8931DB3CCC}
	operator Fmx::Actnlist::_di_IGlyph()
	{
		Fmx::Actnlist::_di_IGlyph intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::IGlyph*(void) { return (Fmx::Actnlist::IGlyph*)&__IGlyph; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E6F1A17-BAE3-456C-8551-5F6EA92EEE32}
	operator Fmx::Types::_di_INativeControl()
	{
		Fmx::Types::_di_INativeControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::INativeControl*(void) { return (Fmx::Types::INativeControl*)&__INativeControl; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {100B2F87-5DCB-4699-B751-B4439588E82A}
	operator Fmx::Types::_di_IItemsContainer()
	{
		Fmx::Types::_di_IItemsContainer intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IItemsContainer*(void) { return (Fmx::Types::IItemsContainer*)&__IItemsContainer; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int __fastcall TextToShortCut(const System::UnicodeString Text);
}	/* namespace Menus */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_MENUS)
using namespace Fmx::Menus;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_MenusHPP
