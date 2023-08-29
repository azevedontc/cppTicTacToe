// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.ListView.pas' rev: 35.00 (Windows)

#ifndef Fmx_ListviewHPP
#define Fmx_ListviewHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.UIConsts.hpp>
#include <System.ImageList.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.hpp>
#include <FMX.InertialMovement.hpp>
#include <FMX.TextLayout.hpp>
#include <FMX.ListView.Types.hpp>
#include <FMX.ListView.Adapters.Base.hpp>
#include <FMX.ListView.Appearances.hpp>
#include <FMX.Styles.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <System.Rtti.hpp>
#include <FMX.Graphics.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Styles.Objects.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Platform.hpp>
#include <FMX.SearchBox.hpp>
#include <FMX.ActnList.hpp>
#include <FMX.ImgList.hpp>
#include <FMX.Presentation.Messages.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.ListView.DynamicAppearance.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Listview
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAdapterListView;
class DELPHICLASS TListViewBase;
class DELPHICLASS TPresentedListView;
class DELPHICLASS TAppearanceListView;
class DELPHICLASS TCustomListView;
class DELPHICLASS TListView;
class DELPHICLASS EListViewError;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAdapterListView : public Fmx::Controls::TStyledControl
{
	typedef Fmx::Controls::TStyledControl inherited;
	
private:
	Fmx::Listview::Types::_di_IListViewAdapter FAdapter;
	bool FHeightSumsNeedUpdate;
	void __fastcall ItemsMayChange(System::TObject* Sender);
	void __fastcall ItemsCouldHaveChanged(System::TObject* Sender);
	void __fastcall ItemsChange(System::TObject* Sender);
	void __fastcall ItemsResize(System::TObject* Sender);
	void __fastcall ItemsInvalidate(System::TObject* Sender);
	void __fastcall ResetView(System::TObject* Sender);
	
protected:
	virtual void __fastcall DoAdapterSet();
	void __fastcall SetAdapter(Fmx::Listview::Types::_di_IListViewAdapter Adapter);
	void __fastcall InvalidateHeights();
	virtual void __fastcall DoItemsChange();
	virtual void __fastcall DoItemsMayChange();
	virtual void __fastcall DoItemsCouldHaveChanged();
	virtual void __fastcall DoItemsResize();
	virtual void __fastcall DoItemsInvalidate();
	virtual void __fastcall DoResetView(Fmx::Listview::Types::TListItem* const Sender);
	__property bool HeightSumsNeedUpdate = {read=FHeightSumsNeedUpdate, write=FHeightSumsNeedUpdate, nodefault};
	
public:
	__property Fmx::Listview::Types::_di_IListViewAdapter Adapter = {read=FAdapter, write=SetAdapter};
public:
	/* TStyledControl.Create */ inline __fastcall virtual TAdapterListView(System::Classes::TComponent* AOwner)/* overload */ : Fmx::Controls::TStyledControl(AOwner) { }
	/* TStyledControl.Destroy */ inline __fastcall virtual ~TAdapterListView() { }
	
};


class PASCALIMPLEMENTATION TListViewBase : public TAdapterListView
{
	typedef TAdapterListView inherited;
	
	
public:
	typedef void __fastcall (__closure *THandleChangeEvent)(System::TObject* const Sender, bool &AHandled);
	
	typedef void __fastcall (__closure *TListItemEvent)(System::TObject* const Sender, Fmx::Listview::Types::TListItem* const AItem);
	
	typedef void __fastcall (__closure *TListItemClickEventEx)(System::TObject* const Sender, int ItemIndex, const System::Types::TPointF &LocalClickPos, Fmx::Listview::Types::TListItemDrawable* const ItemObject);
	
	typedef void __fastcall (__closure *TUpdatingItemViewEvent)(System::TObject* const Sender, Fmx::Listview::Types::TListItem* const AItem, bool &AHandled);
	
	typedef void __fastcall (__closure *TDeletingItemEvent)(System::TObject* Sender, int AIndex, bool &ACanDelete);
	
	typedef void __fastcall (__closure *TDeleteItemEvent)(System::TObject* Sender, int AIndex);
	
	typedef void __fastcall (__closure *TDeleteChangeVisibilityEvent)(System::TObject* Sender, bool AValue);
	
	
private:
	typedef System::Generics::Collections::TList__1<int>* TItemHeightSums;
	
	enum class DECLSPEC_DENUM TDelayedIncident : unsigned char { ChangeRepainted, Invalidate, SetItemIndex, ClickEvent };
	
	struct DECLSPEC_DRECORD TDelayedIncidentEntry
	{
	public:
		TListViewBase::TDelayedIncident Incident;
		bool Triggered;
		double StartTime;
		double TimeToWait;
		NativeInt CustomData;
	};
	
	
	typedef System::Generics::Collections::TList__1<TDelayedIncidentEntry>* TDelayedIncidents;
	
	enum class DECLSPEC_DENUM TTransitionType : unsigned char { None, EditMode, DeleteMode };
	
	enum class DECLSPEC_DENUM TInternalDragMode : unsigned char { None, Drag, Swype };
	
	struct DECLSPEC_DRECORD TItemSelectionAlpha
	{
	public:
		double StartTime;
		float Alpha;
		float StartAlpha;
		static TListViewBase::TItemSelectionAlpha __fastcall Create(const double StartTime, const float Alpha, const float StartAlpha);
	};
	
	
	typedef System::Generics::Collections::TDictionary__2<int,TItemSelectionAlpha>* TItemSelectionAlphas;
	
	enum class DECLSPEC_DENUM TPullRefreshAnimation : unsigned char { NotPlaying, Playing, Finished };
	
	enum class DECLSPEC_DENUM TStateFlag : unsigned char { NeedsRebuild, NeedsScrollingLimitsUpdate, Invalid, Painting, ResettingObjects, ScrollingActive, ScrollingMouseTouch, NeedsScrollBarDisplay };
	
	typedef System::Set<TStateFlag, _DELPHI_SET_ENUMERATOR(TStateFlag::NeedsRebuild), _DELPHI_SET_ENUMERATOR(TStateFlag::NeedsScrollBarDisplay)> TStateFlags;
	
	struct DECLSPEC_DRECORD TEstimatedHeights
	{
	public:
		float Item;
		float Header;
		float Footer;
	};
	
	
	
private:
	#define TListViewBase_ChangeRepaintedIncidentDelay  (1.000000E-01)
	
	static const System::Int8 PhysicsProcessingInterval = System::Int8(0x8);
	
	static const System::Int8 RecurrentTimerInterval = System::Int8(0x10);
	
	static const System::Int8 AutoTapScrollingSpeed = System::Int8(0x8);
	
	static const System::Int8 AutoTapMaxScrollingTime = System::Int8(0x1);
	
	#define TListViewBase_TapSelectWaitTime  (2.500000E-01)
	
	#define TListViewBase_SelectionFadeInTime  (1.250000E-01)
	
	#define TListViewBase_SelectionFadeOutTime  (2.500000E-01)
	
	static const System::Int8 MinScrollThreshold = System::Int8(0xa);
	
	static const System::Int8 MinSwypeThreshold = System::Int8(0x28);
	
	static const System::Int8 DefaultDeleteButtonWidth = System::Int8(0x48);
	
	static const System::Int8 ItemSeparatorTop = System::Int8(0x1);
	
	static const System::Int8 ItemSeparatorBottom = System::Int8(0x2);
	
	#define TListViewBase_EditModeSelectionAlpha  (2.500000E-01)
	
	#define TListViewBase_EditModeAnimationDuration  (1.000000E-01)
	
	#define TListViewBase_DeleteModeAnimationDuration  (1.500000E-01)
	
	#define TListViewBase_DefaultDeleteButtonText L"Delete"
	
	static const System::Int8 PullRefreshIndicatorStrengthStart = System::Int8(0x10);
	
	static const System::Int8 PullRefreshIndicatorMaxSteps = System::Int8(0xc);
	
	static const System::Int8 DefaultLeftMargin = System::Int8(0xa);
	
	static const System::Int8 DefaultRightMargin = System::Int8(0xb);
	
	Fmx::Types::_di_IFMXTimerService FTimerService;
	Fmx::Platform::_di_IFMXSystemInformationService FSystemInformationService;
	Fmx::Platform::_di_IFMXListingService FListingService;
	TStateFlags FStateFlags;
	NativeUInt FRecurrentTimerHandle;
	System::Generics::Collections::TList__1<TDelayedIncidentEntry>* FDelayedIncidents;
	System::Generics::Collections::TDictionary__2<int,TItemSelectionAlpha>* FSelectionAlphas;
	int FItemIndex;
	Fmx::Inertialmovement::TAniCalculations* FAniCalc;
	float FScrollViewPos;
	Fmx::Graphics::TBrush* FBrush;
	Fmx::Graphics::TStrokeBrush* FStroke;
	System::Types::TPointF FMouseDownAt;
	System::Types::TPointF FMouseClickPrev;
	System::Types::TPointF FMouseClickDelta;
	bool FMouseClicked;
	int FMouseClickIndex;
	int FMouseEventIndex;
	Fmx::Types::TBounds* FItemSpaces;
	float FMousePrevScrollPos;
	int FClickEventItemIndex;
	System::Types::TPointF FClickEventMousePos;
	Fmx::Listview::Types::TListItemDrawable* FClickEventControl;
	System::Generics::Collections::TList__1<int>* FHeightSums;
	int FMaxKnownHeight;
	int FSideSpace;
	float FScrollScale;
	System::Uitypes::TAlphaColor FBackgroundStyleColor;
	System::Uitypes::TAlphaColor FSelectionStyleColor;
	System::Uitypes::TAlphaColor FItemStyleFillColor;
	System::Uitypes::TAlphaColor FItemStyleFillAltColor;
	System::Uitypes::TAlphaColor FItemStyleFrameColor;
	Fmx::Styles::Objects::TStyleObject* FSelectionStyleImage;
	Fmx::Styles::Objects::TStyleObject* FHeaderStyleImage;
	Fmx::Styles::Objects::_di_ITouchAnimationObject FTouchAnimationObject;
	Fmx::Stdctrls::TScrollBar* FScrollBar;
	bool FTransparent;
	bool FAllowSelection;
	bool FAlternatingColors;
	int FTapSelectItemIndex;
	int FTapSelectNewIndexApplied;
	double FTapSelectStartTime;
	bool FShowSelection;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnChangeRepainted;
	System::Classes::TNotifyEvent FOnItemsChange;
	System::Classes::TNotifyEvent FOnScrollViewChange;
	System::Classes::TNotifyEvent FOnSearchChange;
	Fmx::Searchbox::TFilterEvent FOnFilter;
	bool FAutoTapScroll;
	int FAutoTapTreshold;
	int FAutoTapDistance;
	TListItemEvent FOnListItemClick;
	TListItemClickEventEx FOnItemClickEx;
	TListItemEvent FOnItemChange;
	THandleChangeEvent FOnEditModeChanging;
	System::Classes::TNotifyEvent FOnEditModeChange;
	TListItemEvent FOnUpdateItemView;
	TUpdatingItemViewEvent FOnUpdatingItemView;
	TDeleteChangeVisibilityEvent FOnDeleteChange;
	TDeletingItemEvent FOnDeletingItem;
	TDeleteItemEvent FOnDeleteItem;
	System::Classes::TNotifyEvent FOnPullRefresh;
	System::UnicodeString FDeleteButtonText;
	bool FEditMode;
	bool FCanSwipeDelete;
	int FDeleteButtonIndex;
	int FPrevDeleteButtonIndex;
	Fmx::Listview::Types::TListItemStyleResources* FStyleResources;
	bool FUpdatingStyleResources;
	bool FDisableMouseWheel;
	double FTransitionStartTime;
	TTransitionType FTransitionType;
	float FEditModeTransitionAlpha;
	float FDeleteModeTransitionAlpha;
	Fmx::Layouts::TLayout* FDeleteLayout;
	Fmx::Stdctrls::TSpeedButton* FDeleteButton;
	TInternalDragMode FDragListMode;
	Fmx::Searchbox::TSearchBox* FSearchEdit;
	bool FSearchVisible;
	bool FSearchAlwaysOnTop;
	bool FSelectionCrossfade;
	bool FPullToRefresh;
	bool FPullRefreshWait;
	bool FPullRefreshTriggered;
	TPullRefreshAnimation FPullRefreshAnimation;
	double FPullRefreshAnimationStartTime;
	double FPullRefreshAnimationStopTime;
	float FScrollStretchStrength;
	Fmx::Controls::TControlType FControlType;
	Fmx::Listview::Types::TListViewNativeOptions FNativeOptions;
	Fmx::Imglist::TGlyphImageLink* FImageLink;
	Fmx::Presentation::Messages::TMessageSender* FMessageSender;
	Fmx::Listview::Types::TListItem* FItemSelectedBeforeChange;
	TEstimatedHeights FEstimatedHeights;
	bool __fastcall IsRunningOnDesktop();
	bool __fastcall HasTouchTracking();
	bool __fastcall HasSearchFeatures();
	bool __fastcall HasSearchAsItem();
	bool __fastcall IsDeleteModeAllowed();
	bool __fastcall HasStretchyScrolling();
	bool __fastcall HasPhysicsStretchyScrolling();
	bool __fastcall HasScrollingStretchGlow();
	bool __fastcall HasPullRefreshStroke();
	bool __fastcall CanDisplaySelectionForItem(const int Index, Fmx::Listview::Types::TListItem* const Item = (Fmx::Listview::Types::TListItem*)(0x0), const bool IncludeMultiSelect = false, const bool IncludeCrossFaded = false);
	float __fastcall GetDefaultSelectionAlpha();
	float __fastcall GetItemSelectionAlpha(const int Index);
	void __fastcall DestroyRecurrentTimer();
	void __fastcall UpdateRecurrentTimer();
	bool __fastcall HasRecurrentTimerEvents();
	void __fastcall RecurrentTimerEvent();
#ifndef _WIN64
	void __fastcall StartIncident(const TDelayedIncident Incident, const bool Triggered = true, const float TimeToWait = 0.000000E+00f, const NativeInt CustomData = (NativeInt)(0x0));
#else /* _WIN64 */
	void __fastcall StartIncident(const TDelayedIncident Incident, const bool Triggered = true, const float TimeToWait = 0.000000E+00f, const NativeInt CustomData = (NativeInt)(0LL));
#endif /* _WIN64 */
	void __fastcall ProcessIncident(const TDelayedIncidentEntry &Entry);
	void __fastcall TriggerIncidents(const TDelayedIncident Incident, const bool ResetStartupTime = true);
	void __fastcall ProcessDelayedIncidents();
	void __fastcall ProcessTransitionAnimation();
	void __fastcall ProcessTapSelectItem();
	void __fastcall ProcessSelectionAlphas();
	void __fastcall InsertItemCrossFade(const int Index, const bool ShowAnimation);
	void __fastcall RemoveItemCrossFade(const int Index);
	void __fastcall StartPullRefreshAnimation();
	void __fastcall ProcessPullRefreshAnimation();
	float __fastcall GetPullRefreshStrength();
	int __fastcall GetPullRefreshIndicatorSteps();
	float __fastcall GetPullRefreshIndicatorAlpha();
	float __fastcall GetPullRefreshStrokeWidth();
	void __fastcall PaintPullRefreshIndicator(Fmx::Graphics::TCanvas* const ACanvas, const float AStrength, const float AOpacity);
	void __fastcall PaintPullRefreshStroke(Fmx::Graphics::TCanvas* const ACanvas, const float AStrength, const float AOpacity);
	void __fastcall PaintScrollingStretchGlow(Fmx::Graphics::TCanvas* const ACanvas, const float AIntensity, const float AOpacity);
	void __fastcall UpdatePullRefreshState();
	void __fastcall UpdateScrollStretchStrength(const float NewValue);
	void __fastcall DeleteButtonClicked(System::TObject* Sender);
	void __fastcall ScrollBarChange(System::TObject* Sender);
	void __fastcall ItemSpacesChange(System::TObject* Sender);
	void __fastcall AniCalcChange(System::TObject* Sender);
	void __fastcall AniCalcStart(System::TObject* Sender);
	void __fastcall AniCalcStop(System::TObject* Sender);
	int __fastcall GetItemIndex();
	void __fastcall SetItemIndex(const int Value);
	void __fastcall SetItemIndexInternal(const int Value, const bool DisableSelection = false, const bool DisableCrossfade = false);
	int __fastcall GetMaxScrollViewPos();
	void __fastcall UpdateScrollViewPos(const float Value);
	void __fastcall UpdateSearchEditPos();
	void __fastcall SetScrollViewPos(const float Value);
	void __fastcall UpdateScrollingLimits();
	void __fastcall UpdateScrollBar();
	void __fastcall GetNumberOfRenderingPasses(const int StartItem, const int EndItem, int &Passes, int &Subpasses);
	virtual int __fastcall GetItemHeight(const int Index)/* overload */;
	System::Types::TRectF __fastcall GetItemRelRect(const int Index, const System::Types::TRectF &LocRect, const int SideSpace = 0x0);
	int __fastcall GetItemGroupSeparators(const int Index);
	Fmx::Listview::Types::TListItemDrawable* __fastcall FindLocalItemObjectAtPosition(const int ItemIndex, const System::Types::TPointF &Position);
	float __fastcall GetSeparatorLineHeight();
	float __fastcall AlignValueToPixel(const float Value);
	void __fastcall DrawItemsFill(const int StartItem, const int EndItem, const System::Types::TRectF &LocRect, const float Opacity, const int HeaderIndex = 0xffffffff);
	void __fastcall DrawIndexFill(const int AIndex, const System::Types::TRectF &LocRect, const float Opacity);
	void __fastcall DrawTouchAnimation(const int Index, const System::Types::TRectF &LocRect, const float Opacity);
	System::Types::TRectF __fastcall GetHeaderRelRect(const int StartItem, const int HeaderIndex, const System::Types::TRectF &LocRect, const int SideSpace = 0x0);
	void __fastcall DrawHeaderItem(const System::Types::TRectF &LocRect, const int StartItem, const int HeaderIndex, const float Opacity);
	void __fastcall DrawListItems(const float AbsOpacity);
	void __fastcall UpdateItemLookups();
	int __fastcall FindItemAbsoluteAt(const int ViewAt);
	int __fastcall FindItemAbsoluteAtWithCheck(const int ViewAt);
	void __fastcall SetSideSpace(const int Value);
	void __fastcall SetTransparent(const bool Value);
	void __fastcall SetAlternatingColors(const bool Value);
	void __fastcall SetShowSelection(const bool Value);
	virtual void __fastcall RecreateNativePresentation();
	void __fastcall SetEditMode(const bool Value);
	void __fastcall SetCanSwipeDelete(const bool Value);
	virtual void __fastcall SelectItem(const int ItemIndex);
	virtual void __fastcall UnselectItem(const int ItemIndex);
	Fmx::Listview::Types::TListItem* __fastcall GetSelected();
	void __fastcall SetSelected(Fmx::Listview::Types::TListItem* const Value);
	void __fastcall SetNewItemIndex(const int NewIndex);
	void __fastcall SetSearchVisible(const bool Value);
	void __fastcall SetSearchAlwaysOnTop(const bool Value);
	void __fastcall SetOnFilter(const Fmx::Searchbox::TFilterEvent Value);
	void __fastcall OnSearchEditResize(System::TObject* Sender);
	void __fastcall OnSearchEditChange(System::TObject* Sender);
	bool __fastcall DeleteButtonTextStored();
	void __fastcall SetFilterPredicate(const System::DelphiInterface<System::Sysutils::TPredicate__1<System::UnicodeString> > Predicate);
	Fmx::Presentation::Messages::TMessageSender* __fastcall GetMessageSender();
	void __fastcall ReadCanSwipeDelete(System::Classes::TReader* Reader);
	void __fastcall ReadIsSearchVisible(System::Classes::TReader* Reader);
	void __fastcall ReadIsSearchAlwaysOnTop(System::Classes::TReader* Reader);
	void __fastcall ReadEditModeOptions(System::Classes::TReader* Reader);
	int __fastcall GetItemCount();
	void __fastcall RequestReindexing(Fmx::Listview::Types::TListItem* const Item);
	void __fastcall ItemResized(Fmx::Listview::Types::TListItem* const Item);
	void __fastcall ItemInvalidated(Fmx::Listview::Types::TListItem* const Item);
	void __fastcall ControlClicked(Fmx::Listview::Types::TListItem* const Item, Fmx::Listview::Types::TListItemDrawable* const Control);
	void __fastcall CheckStateChanged(Fmx::Listview::Types::TListItem* const Item, Fmx::Listview::Types::TListItemDrawable* const Control);
	Fmx::Controls::_di_IScene __fastcall GetScene();
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual bool __fastcall IsEditMode();
	virtual void __fastcall DoSetItemIndexInternal(const int Value);
	virtual void __fastcall DoUpdateScrollViewPos(const float Value);
	virtual void __fastcall DoSetScrollViewPos(const float Value);
	virtual void __fastcall WillEnterEditMode(const bool Animated);
	virtual bool __fastcall HasButtonsInCells();
	virtual bool __fastcall HasDeletionEditMode();
	virtual bool __fastcall HasCheckboxMode();
	void __fastcall ResetEditModeAnimation();
	void __fastcall InitEditModeAnimation();
	void __fastcall ResetDeleteModeAnimation();
	void __fastcall InitDeleteModeAnimation();
	void __fastcall UpdateDeleteButtonLayout();
	void __fastcall ProceedDeleteItem();
	virtual void __fastcall ScrollStretchChanged();
	__property float ScrollStretchStrength = {read=FScrollStretchStrength};
	void __fastcall SetSelectionCrossfade(const bool Value);
	System::UnicodeString __fastcall GetDeleteButtonText();
	void __fastcall SetDeleteButtonText(const System::UnicodeString Value);
	void __fastcall SetPullToRefresh(const bool Value);
	void __fastcall SetControlType(const Fmx::Controls::TControlType Value);
	Fmx::Controls::TControlType __fastcall GetControlType();
	void __fastcall SetNativeOptions(const Fmx::Listview::Types::TListViewNativeOptions Value);
	float __fastcall GetEditModeTransitionAlpha();
	float __fastcall GetDeleteModeTransitionAlpha();
	void __fastcall SetDeleteButtonIndex(const int NewItemIndex);
	float __fastcall GetItemEditOffset(Fmx::Listview::Types::TListItem* const Item);
	float __fastcall GetItemDeleteCutoff(Fmx::Listview::Types::TListItem* const Item);
	System::Types::TRectF __fastcall GetClientMargins();
	float __fastcall GetItemCurrentSelectionAlpha(Fmx::Listview::Types::TListItem* const Item);
	Fmx::Imglist::TCustomImageList* __fastcall GetImages();
	void __fastcall SetImages(Fmx::Imglist::TCustomImageList* const Value);
	virtual void __fastcall DoRequestReindexing(Fmx::Listview::Types::TListItem* const Item);
	virtual void __fastcall DoItemResized(Fmx::Listview::Types::TListItem* const Item);
	virtual void __fastcall DoItemInvalidated(Fmx::Listview::Types::TListItem* const Item);
	virtual void __fastcall DoCheckStateChanged(Fmx::Listview::Types::TListItem* const Item, Fmx::Listview::Types::TListItemDrawable* const Control);
	virtual void __fastcall DoControlClicked(Fmx::Listview::Types::TListItem* const Item, Fmx::Listview::Types::TListItemDrawable* const Control);
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	System::Imagelist::TBaseImageList* __fastcall GetImageList();
	void __fastcall SetImageList(System::Imagelist::TBaseImageList* const Value);
	Fmx::Listview::Types::TListItemStyleResources* __fastcall GetStyleResources();
	bool __fastcall StyleResourcesNeedUpdate();
	void __fastcall SetItemSpaces(Fmx::Types::TBounds* const Value);
	System::Types::TRectF __fastcall GetItemClientRect(const int Index);
	float __fastcall GetEstimatedItemHeight();
	float __fastcall GetEstimatedHeaderHeight();
	float __fastcall GetEstimatedFooterHeight();
	virtual void __fastcall ImagesChanged();
	virtual void __fastcall Paint();
	virtual void __fastcall AfterPaint();
	virtual void __fastcall Loaded();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseWheel(System::Classes::TShiftState Shift, int WheelDelta, bool &Handled);
	virtual void __fastcall KeyDown(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift);
	virtual Fmx::Types::_di_IControl __fastcall ObjectAtPoint(const System::Types::TPointF &P);
	virtual void __fastcall DoMouseLeave();
	virtual void __fastcall Resize();
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	void __fastcall Invalidate();
	virtual void __fastcall DoRealign();
	virtual void __fastcall DoExit();
	virtual void __fastcall DoChange();
	virtual void __fastcall DoChangeRepainted();
	virtual void __fastcall DoListItemChange(Fmx::Listview::Types::TListItem* const AListItem);
	virtual void __fastcall DoListItemClick(Fmx::Listview::Types::TListItem* const AListItem);
	virtual void __fastcall DoEditModeChange();
	virtual void __fastcall DoEditModeChanging(bool &AHandled);
	virtual void __fastcall DoResetEditModeAnimation();
	virtual void __fastcall DoUpdateScrollingLimits();
	virtual void __fastcall DoItemsMayChange();
	virtual void __fastcall DoItemsCouldHaveChanged();
	virtual void __fastcall DoItemsInvalidate();
	virtual void __fastcall DoItemsChange();
	virtual void __fastcall DoAdapterSet();
	bool __fastcall DeleteItem(const int ItemIndex);
	virtual void __fastcall DoDeleteItem(const int ItemIndex);
	virtual System::Types::TRectF __fastcall GetFinalItemSpaces(const bool ForceIncludeScrollBar = true);
	virtual System::Types::TSizeF __fastcall GetFinalItemSize(const bool ForceIncludeScrollBar = true);
	virtual bool __fastcall CanObserve(const int ID);
	void __fastcall ObserversBeforeSelection(/* out */ bool &LAllowSelection);
	virtual bool __fastcall ShouldHandleEvents();
	virtual void __fastcall DoUpdatingItemView(Fmx::Listview::Types::TListItem* const AListItem, bool &AHandled);
	virtual void __fastcall DoUpdateItemView(Fmx::Listview::Types::TListItem* const AListItem);
	Fmx::Listview::Types::TListItemGlyphButton* __fastcall GetGlyphButton(const int Index);
	__property TUpdatingItemViewEvent OnUpdatingItemView = {read=FOnUpdatingItemView, write=FOnUpdatingItemView};
	__property TListItemEvent OnUpdateItemView = {read=FOnUpdateItemView, write=FOnUpdateItemView};
	__property System::Classes::TNotifyEvent OnEditModeChange = {read=FOnEditModeChange, write=FOnEditModeChange};
	__property THandleChangeEvent OnEditModeChanging = {read=FOnEditModeChanging, write=FOnEditModeChanging};
	
public:
	__fastcall virtual TListViewBase(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TListViewBase();
	__classmethod System::Types::TRectF __fastcall GetDefaultMargins();
	virtual void __fastcall EndUpdate();
	virtual void __fastcall RebuildList();
	void __fastcall ScrollTo(const int AItemIndex);
	__property int ItemIndex = {read=GetItemIndex, write=SetItemIndex, default=-1};
	__property Fmx::Listview::Types::TListItem* Selected = {read=GetSelected, write=SetSelected};
	__property float ScrollViewPos = {read=FScrollViewPos, write=SetScrollViewPos};
	System::Types::TRectF __fastcall GetItemRect(const int AItemIndex);
	virtual void __fastcall StopPullRefresh();
	__property Fmx::Types::TBounds* ItemSpaces = {read=FItemSpaces, write=SetItemSpaces};
	__property Fmx::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
	__property int SideSpace = {read=FSideSpace, write=SetSideSpace, default=0};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, nodefault};
	__property bool AllowSelection = {read=FAllowSelection, write=FAllowSelection, default=1};
	__property bool AlternatingColors = {read=FAlternatingColors, write=SetAlternatingColors, default=0};
	__property bool ShowSelection = {read=FShowSelection, write=SetShowSelection, default=1};
	__property bool CanSwipeDelete = {read=FCanSwipeDelete, write=SetCanSwipeDelete, default=1};
	__property bool AutoTapScroll = {read=FAutoTapScroll, write=FAutoTapScroll, default=0};
	__property int AutoTapTreshold = {read=FAutoTapTreshold, write=FAutoTapTreshold, default=8};
	__property bool DisableMouseWheel = {read=FDisableMouseWheel, write=FDisableMouseWheel, default=0};
	__property int ItemCount = {read=GetItemCount, nodefault};
	__property TListItemEvent OnListItemClick = {read=FOnListItemClick, write=FOnListItemClick};
	__property TListItemClickEventEx OnItemClickEx = {read=FOnItemClickEx, write=FOnItemClickEx};
	__property TListItemEvent OnItemChange = {read=FOnItemChange, write=FOnItemChange};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnChangeRepainted = {read=FOnChangeRepainted, write=FOnChangeRepainted};
	__property System::Classes::TNotifyEvent OnItemsChange = {read=FOnItemsChange, write=FOnItemsChange};
	__property System::Classes::TNotifyEvent OnScrollViewChange = {read=FOnScrollViewChange, write=FOnScrollViewChange};
	__property TDeletingItemEvent OnDeletingItem = {read=FOnDeletingItem, write=FOnDeletingItem};
	__property TDeleteItemEvent OnDeleteItem = {read=FOnDeleteItem, write=FOnDeleteItem};
	__property TDeleteChangeVisibilityEvent OnDeleteChangeVisible = {read=FOnDeleteChange, write=FOnDeleteChange};
	__property System::Classes::TNotifyEvent OnSearchChange = {read=FOnSearchChange, write=FOnSearchChange};
	__property Fmx::Searchbox::TFilterEvent OnFilter = {read=FOnFilter, write=SetOnFilter};
	__property System::Classes::TNotifyEvent OnPullRefresh = {read=FOnPullRefresh, write=FOnPullRefresh};
	__property System::UnicodeString DeleteButtonText = {read=GetDeleteButtonText, write=SetDeleteButtonText, stored=DeleteButtonTextStored};
	__property bool EditMode = {read=FEditMode, write=SetEditMode, default=0};
	__property bool SearchVisible = {read=FSearchVisible, write=SetSearchVisible, default=0};
	__property bool SearchAlwaysOnTop = {read=FSearchAlwaysOnTop, write=SetSearchAlwaysOnTop, default=1};
	__property bool SelectionCrossfade = {read=FSelectionCrossfade, write=SetSelectionCrossfade, default=0};
	__property bool PullToRefresh = {read=FPullToRefresh, write=SetPullToRefresh, default=0};
	__property bool PullRefreshWait = {read=FPullRefreshWait, write=FPullRefreshWait, default=0};
	__property Fmx::Controls::TControlType ControlType = {read=FControlType, write=SetControlType, default=0};
	__property Fmx::Listview::Types::TListViewNativeOptions NativeOptions = {read=FNativeOptions, write=SetNativeOptions, default=0};
private:
	void *__IControlTypeSupportable;	// Fmx::Controls::IControlTypeSupportable 
	void *__IMessageSendingCompatible;	// Fmx::Presentation::Messages::IMessageSendingCompatible 
	void *__IGlyph;	// Fmx::Actnlist::IGlyph 
	void *__IListViewController;	// Fmx::Listview::Types::IListViewController 
	void *__IListItemStyleResources;	// Fmx::Listview::Types::IListItemStyleResources 
	void *__ISearchResponder;	// Fmx::Controls::ISearchResponder 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0B538F5C-98AC-4F86-AAF1-9979B2F40B90}
	operator Fmx::Controls::_di_IControlTypeSupportable()
	{
		Fmx::Controls::_di_IControlTypeSupportable intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Controls::IControlTypeSupportable*(void) { return (Fmx::Controls::IControlTypeSupportable*)&__IControlTypeSupportable; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7777134E-CEC9-40F6-9AAA-CE4D6F55001A}
	operator Fmx::Presentation::Messages::_di_IMessageSendingCompatible()
	{
		Fmx::Presentation::Messages::_di_IMessageSendingCompatible intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Presentation::Messages::IMessageSendingCompatible*(void) { return (Fmx::Presentation::Messages::IMessageSendingCompatible*)&__IMessageSendingCompatible; }
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
	// {3855EF72-3B32-41BE-9068-7B109B2DD8E5}
	operator Fmx::Listview::Types::_di_IListViewController()
	{
		Fmx::Listview::Types::_di_IListViewController intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Listview::Types::IListViewController*(void) { return (Fmx::Listview::Types::IListViewController*)&__IListViewController; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0328C6F1-432C-4F8B-994B-7AB2543CD172}
	operator Fmx::Listview::Types::_di_IListItemStyleResources()
	{
		Fmx::Listview::Types::_di_IListItemStyleResources intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Listview::Types::IListItemStyleResources*(void) { return (Fmx::Listview::Types::IListItemStyleResources*)&__IListItemStyleResources; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C73631F4-5AD7-48B9-92D2-CC808B911B5E}
	operator Fmx::Controls::_di_ISearchResponder()
	{
		Fmx::Controls::_di_ISearchResponder intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Controls::ISearchResponder*(void) { return (Fmx::Controls::ISearchResponder*)&__ISearchResponder; }
	#endif
	
};


class PASCALIMPLEMENTATION TPresentedListView : public TListViewBase
{
	typedef TListViewBase inherited;
	
private:
	Fmx::Listview::Types::_di_IListViewPresentation FPresentation;
	int FPresentationLocked;
	bool FCreatingNativeView;
	
protected:
	void __fastcall ExecuteInterlocked(const System::Sysutils::_di_TProc P);
	bool __fastcall CanSelectItem(const int AItemIndex);
	bool __fastcall CanUnselectItem(const int AItemIndex);
	void __fastcall DidSelectItem(const int AItemIndex);
	void __fastcall DidUnselectItem(const int AItemIndex);
	virtual void __fastcall ChangeOrder();
	virtual void __fastcall ParentChanged();
	virtual void __fastcall PaintChildren();
	virtual void __fastcall AncestorVisibleChanged(const bool Visible);
	virtual void __fastcall DoSetItemIndexInternal(const int Value);
	virtual void __fastcall DoEditModeChange();
	virtual void __fastcall DoItemsChange();
	virtual void __fastcall DoItemsInvalidate();
	virtual void __fastcall DoItemInvalidated(Fmx::Listview::Types::TListItem* const Item);
	virtual void __fastcall DoCheckStateChanged(Fmx::Listview::Types::TListItem* const AItem, Fmx::Listview::Types::TListItemDrawable* const Control);
	virtual void __fastcall DoUpdateScrollViewPos(const float Value);
	virtual void __fastcall DoSetScrollViewPos(const float Value);
	virtual void __fastcall DoDeleteItem(const int ItemIndex);
	virtual void __fastcall DoResetEditModeAnimation();
	virtual void __fastcall DoUpdateScrollingLimits();
	virtual void __fastcall DoAbsoluteChanged();
	MESSAGE void __fastcall PMAncesstorPresentationLoaded(Fmx::Presentation::Messages::TDispatchMessageWithValue__1<bool> &AMessage);
	virtual void __fastcall RecreateNativePresentation();
	virtual bool __fastcall ShouldHandleEvents();
	System::TObject* __fastcall GetRootObject();
	System::Types::TRect __fastcall GetContentFrame();
	float __fastcall GetControlOpacity();
	Fmx::Listview::Types::_di_IListViewAdapter __fastcall GetAdapter();
	System::UnicodeString __fastcall GetItemText(const int ItemIndex);
	System::UnicodeString __fastcall GetItemIndexTitle(const int ItemIndex);
	void __fastcall ItemButtonClicked(const int ItemIndex);
	void __fastcall InvokePullRefresh();
	void __fastcall SetSearchFilter(const System::UnicodeString Filter);
	Fmx::Listview::Types::TListViewModeFlags __fastcall GetTableViewFlags();
	Fmx::Listview::Types::TListViewNativeOptions __fastcall GetTableViewOptions();
	void __fastcall SetCreatingNativeView(const bool Value);
	bool __fastcall GetIsTransparent();
	float __fastcall GetOpacity();
	System::Uitypes::TAlphaColor __fastcall GetBackgroundStyleColor();
	virtual void __fastcall DoItemsResize();
	bool __fastcall HasDesignPresentationAttached();
	
public:
	__fastcall virtual ~TPresentedListView();
	virtual void __fastcall BeforeDestruction();
	virtual void __fastcall RecalcEnabled();
	virtual void __fastcall Show();
	virtual void __fastcall Hide();
	virtual void __fastcall Resize();
	virtual void __fastcall Paint();
	virtual void __fastcall RebuildList();
	virtual void __fastcall StopPullRefresh();
	virtual void __fastcall RecalcOpacity();
public:
	/* TListViewBase.Create */ inline __fastcall virtual TPresentedListView(System::Classes::TComponent* AOwner)/* overload */ : TListViewBase(AOwner) { }
	
private:
	void *__IListViewDesignPresentationParent;	// Fmx::Listview::Types::IListViewDesignPresentationParent 
	void *__IListViewPresentationParent;	// Fmx::Listview::Types::IListViewPresentationParent 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C62F3FE5-FE96-47A7-99CB-2EEBC85664FA}
	operator Fmx::Listview::Types::_di_IListViewDesignPresentationParent()
	{
		Fmx::Listview::Types::_di_IListViewDesignPresentationParent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Listview::Types::IListViewDesignPresentationParent*(void) { return (Fmx::Listview::Types::IListViewDesignPresentationParent*)&__IListViewDesignPresentationParent; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F5657E45-0955-4A9F-9FE6-6C5E019846E4}
	operator Fmx::Listview::Types::_di_IListViewPresentationParent()
	{
		Fmx::Listview::Types::_di_IListViewPresentationParent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Listview::Types::IListViewPresentationParent*(void) { return (Fmx::Listview::Types::IListViewPresentationParent*)&__IListViewPresentationParent; }
	#endif
	
};


class PASCALIMPLEMENTATION TAppearanceListView : public TPresentedListView
{
	typedef TPresentedListView inherited;
	
	
public:
	typedef void __fastcall (__closure *TItemEvent)(System::TObject* const Sender, Fmx::Listview::Appearances::TListViewItem* const AItem);
	
	typedef void __fastcall (__closure *TUpdatingObjectsEvent)(System::TObject* const Sender, Fmx::Listview::Appearances::TListViewItem* const AItem, bool &AHandled);
	
	
private:
	Fmx::Listview::Appearances::TAppearanceListViewItems* FAppearanceViewItems;
	Fmx::Listview::Appearances::TPublishedAppearance* FAppearanceProperties;
	Fmx::Listview::Appearances::TPublishedObjects* FItemAppearanceObjects;
	Fmx::Listview::Appearances::TItemAppearanceProperties* FItemAppearanceProperties;
	Fmx::Listview::Appearances::TItemAppearanceProperties* FItemEditAppearanceProperties;
	Fmx::Listview::Appearances::TItemAppearanceProperties* FHeaderAppearanceProperties;
	Fmx::Listview::Appearances::TItemAppearanceProperties* FFooterAppearanceProperties;
	int FUpdatingAppearance;
	Fmx::Listview::Types::TListItemPurposes FChangedAppearanceObjects;
	Fmx::Listview::Types::TListItemPurposes FChangedAppearanceHeights;
	Fmx::Listview::Types::TListItem* FItemSelectedBeforeEdit;
	Fmx::Listview::Appearances::TItemControlEvent FOnButtonClick;
	Fmx::Listview::Appearances::TItemControlEvent FOnButtonChange;
	bool FAppearanceAllowsCheckboxes;
	bool FAppearanceAllowsDeleteMode;
	TItemEvent FOnItemClick;
	TUpdatingObjectsEvent FOnUpdatingObjects;
	TItemEvent FOnUpdateObjects;
	System::UnicodeString __fastcall GetFooterAppearanceName();
	System::UnicodeString __fastcall GetFooterAppearanceClassName();
	System::UnicodeString __fastcall GetHeaderAppearanceName();
	System::UnicodeString __fastcall GetHeaderAppearanceClassName();
	System::UnicodeString __fastcall GetItemAppearanceName();
	System::UnicodeString __fastcall GetItemEditAppearanceName();
	System::UnicodeString __fastcall GetItemObjectsClassName();
	System::UnicodeString __fastcall GetItemEditObjectsClassName();
	void __fastcall SetFooterAppearanceClassName(const System::UnicodeString Value);
	void __fastcall SetHeaderAppearanceClassName(const System::UnicodeString Value);
	void __fastcall SetItemObjectsClassName(const System::UnicodeString Value);
	void __fastcall SetItemEditObjectsClassName(const System::UnicodeString Value);
	void __fastcall SetFooterAppearanceName(const System::UnicodeString Value);
	void __fastcall SetHeaderAppearanceName(const System::UnicodeString Value);
	void __fastcall SetItemAppearanceName(const System::UnicodeString Value);
	void __fastcall SetItemEditAppearanceName(const System::UnicodeString Value);
	void __fastcall SetAppearanceProperties(Fmx::Listview::Appearances::TPublishedAppearance* const Value);
	void __fastcall SetItemAppearanceObjects(Fmx::Listview::Appearances::TPublishedObjects* const Value);
	Fmx::Listview::Appearances::TPublishedObjects* __fastcall GetItemAppearanceObjects();
	void __fastcall AppearanceResetObjects(Fmx::Listview::Types::TListItemPurposes APurposes);
	void __fastcall AppearanceResetHeights(Fmx::Listview::Types::TListItemPurposes APurposes);
	Fmx::Listview::Appearances::TItemAppearanceProperties* __fastcall GetFooterAppearanceProperties();
	Fmx::Listview::Appearances::TItemAppearanceProperties* __fastcall GetHeaderAppearanceProperties();
	Fmx::Listview::Appearances::TItemAppearanceProperties* __fastcall GetItemAppearanceProperties();
	Fmx::Listview::Appearances::TItemAppearanceProperties* __fastcall GetItemEditAppearanceProperties();
	void __fastcall EditorBeforeItemAdded(Fmx::Listview::Types::_di_IListViewEditor Sender);
	void __fastcall EditorAfterItemAdded(Fmx::Listview::Types::_di_IListViewEditor Sender, Fmx::Listview::Types::TListItem* const Item);
	void __fastcall EditorBeforeItemDeleted(Fmx::Listview::Types::_di_IListViewEditor Sender, const int Index);
	void __fastcall EditorAfterItemDeleted(Fmx::Listview::Types::_di_IListViewEditor Sender);
	void __fastcall ResetViewAppearance(Fmx::Listview::Appearances::TListViewItem* const AItem);
	
protected:
	virtual void __fastcall ApplyStyle();
	void __fastcall ObjectsNotify(System::TObject* Sender, Fmx::Listview::Types::TListItem* const Item, System::Generics::Collections::TCollectionNotification Action);
	void __fastcall SetAppearanceListViewItems(Fmx::Listview::Appearances::TAppearanceListViewItems* const AItems);
	virtual void __fastcall DoResetView(Fmx::Listview::Types::TListItem* const Item);
	virtual bool __fastcall HasButtonsInCells();
	virtual bool __fastcall HasDeletionEditMode();
	virtual bool __fastcall HasCheckboxMode();
	virtual void __fastcall SetItemHeight(const int Value);
	virtual void __fastcall SetItemEditHeight(const int Value);
	virtual void __fastcall SetHeaderHeight(const int Value);
	virtual void __fastcall SetFooterHeight(const int Value);
	virtual Fmx::Listview::Appearances::TListViewItem* __fastcall GetAppearanceListViewItem(const int Index);
	virtual int __fastcall GetItemHeight(const int Index)/* overload */;
	HIDESBASE virtual int __fastcall GetItemHeight()/* overload */;
	virtual int __fastcall GetItemEditHeight()/* overload */;
	virtual int __fastcall GetHeaderHeight()/* overload */;
	virtual int __fastcall GetFooterHeight()/* overload */;
	virtual void __fastcall WillEnterEditMode(const bool Animated);
	virtual void __fastcall DoResetEditModeAnimation();
	virtual void __fastcall DoAdapterSet();
	virtual void __fastcall DoRequestReindexing(Fmx::Listview::Types::TListItem* const Item);
	virtual void __fastcall DoItemResized(Fmx::Listview::Types::TListItem* const Item);
	virtual void __fastcall DoCheckStateChanged(Fmx::Listview::Types::TListItem* const AItem, Fmx::Listview::Types::TListItemDrawable* const Control);
	virtual void __fastcall DoControlClicked(Fmx::Listview::Types::TListItem* const Item, Fmx::Listview::Types::TListItemDrawable* const Control);
#ifndef _WIN64
	System::DynamicArray<Fmx::Listview::Appearances::TItemAppearanceProperties*> __fastcall GetAppearanceProperties();
#else /* _WIN64 */
	System::TArray__1<Fmx::Listview::Appearances::TItemAppearanceProperties*> __fastcall GetAppearanceProperties();
#endif /* _WIN64 */
	void __fastcall RefreshAppearances(const Fmx::Listview::Types::TListItemPurposes APurposes = Fmx::Listview::Types::TListItemPurposes() );
	void __fastcall UpdateAppearanceStyleResources();
	void __fastcall ItemAppearanceChange(Fmx::Listview::Appearances::TItemAppearanceProperties* const Sender);
	void __fastcall ItemAppearanceChangeObjects(Fmx::Listview::Appearances::TItemAppearanceProperties* const Sender);
	void __fastcall ItemAppearanceChangeHeight(Fmx::Listview::Appearances::TItemAppearanceProperties* const Sender);
	void __fastcall EditModeAppearances();
	virtual void __fastcall InitializeItemAppearance(Fmx::Listview::Appearances::TItemAppearanceProperties* const AAppearance);
	virtual void __fastcall DoListItemClick(Fmx::Listview::Types::TListItem* const AItem);
	virtual void __fastcall DoUpdatingItemView(Fmx::Listview::Types::TListItem* const AListItem, bool &AHandled);
	virtual void __fastcall DoUpdateItemView(Fmx::Listview::Types::TListItem* const AListItem);
	__property int ItemHeight = {read=GetItemHeight, write=SetItemHeight, nodefault};
	__property int ItemEditHeight = {read=GetItemEditHeight, write=SetItemEditHeight, nodefault};
	__property int HeaderHeight = {read=GetHeaderHeight, write=SetHeaderHeight, nodefault};
	__property int FooterHeight = {read=GetFooterHeight, write=SetFooterHeight, nodefault};
	__property System::UnicodeString ItemEditAppearanceClassName = {read=GetItemEditObjectsClassName, write=SetItemEditObjectsClassName};
	__property System::UnicodeString ItemAppearanceClassName = {read=GetItemObjectsClassName, write=SetItemObjectsClassName};
	__property System::UnicodeString HeaderAppearanceClassName = {read=GetHeaderAppearanceClassName, write=SetHeaderAppearanceClassName};
	__property System::UnicodeString FooterAppearanceClassName = {read=GetFooterAppearanceClassName, write=SetFooterAppearanceClassName};
	__property System::UnicodeString ItemAppearanceName = {read=GetItemAppearanceName, write=SetItemAppearanceName, stored=false};
	__property System::UnicodeString ItemEditAppearanceName = {read=GetItemEditAppearanceName, write=SetItemEditAppearanceName, stored=false};
	__property System::UnicodeString HeaderAppearanceName = {read=GetHeaderAppearanceName, write=SetHeaderAppearanceName, stored=false};
	__property System::UnicodeString FooterAppearanceName = {read=GetFooterAppearanceName, write=SetFooterAppearanceName, stored=false};
	__property Fmx::Listview::Appearances::TPublishedAppearance* ItemAppearance = {read=FAppearanceProperties, write=SetAppearanceProperties};
	__property Fmx::Listview::Appearances::TPublishedObjects* ItemAppearanceObjects = {read=GetItemAppearanceObjects, write=SetItemAppearanceObjects};
	__property Fmx::Listview::Appearances::TItemControlEvent OnButtonChange = {read=FOnButtonChange, write=FOnButtonChange};
	__property Fmx::Listview::Appearances::TItemControlEvent OnButtonClick = {read=FOnButtonClick, write=FOnButtonClick};
	
public:
	__fastcall virtual TAppearanceListView(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TAppearanceListView();
	virtual void __fastcall BeginUpdate();
	virtual void __fastcall EndUpdate();
	virtual void __fastcall Resize();
	__property Fmx::Listview::Appearances::TAppearanceListViewItems* Items = {read=FAppearanceViewItems, write=SetAppearanceListViewItems};
	__property TItemEvent OnItemClick = {read=FOnItemClick, write=FOnItemClick};
	__property TUpdatingObjectsEvent OnUpdatingObjects = {read=FOnUpdatingObjects, write=FOnUpdatingObjects};
	__property TItemEvent OnUpdateObjects = {read=FOnUpdateObjects, write=FOnUpdateObjects};
private:
	void *__IPublishedAppearanceOwner;	// Fmx::Listview::Appearances::IPublishedAppearanceOwner 
	void *__IAppearanceItemOwner;	// Fmx::Listview::Appearances::IAppearanceItemOwner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {990AB866-92AB-4552-BB12-223F44CFD062}
	operator Fmx::Listview::Appearances::_di_IPublishedAppearanceOwner()
	{
		Fmx::Listview::Appearances::_di_IPublishedAppearanceOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Listview::Appearances::IPublishedAppearanceOwner*(void) { return (Fmx::Listview::Appearances::IPublishedAppearanceOwner*)&__IPublishedAppearanceOwner; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A3CAF8E2-ECD5-4989-9B03-B3E79B02DFBC}
	operator Fmx::Listview::Appearances::_di_IAppearanceItemOwner()
	{
		Fmx::Listview::Appearances::_di_IAppearanceItemOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Listview::Appearances::IAppearanceItemOwner*(void) { return (Fmx::Listview::Appearances::IAppearanceItemOwner*)&__IAppearanceItemOwner; }
	#endif
	
};


class PASCALIMPLEMENTATION TCustomListView : public TAppearanceListView
{
	typedef TAppearanceListView inherited;
	
public:
	/* TAppearanceListView.Create */ inline __fastcall virtual TCustomListView(System::Classes::TComponent* AOwner)/* overload */ : TAppearanceListView(AOwner) { }
	/* TAppearanceListView.Destroy */ inline __fastcall virtual ~TCustomListView() { }
	
};


class PASCALIMPLEMENTATION TListView : public TCustomListView
{
	typedef TCustomListView inherited;
	
protected:
	virtual void __fastcall InitializeItemAppearance(Fmx::Listview::Appearances::TItemAppearanceProperties* const AAppearance);
	
public:
	__property ItemAppearanceName = {default=0};
	__property ItemEditAppearanceName = {default=0};
	__property HeaderAppearanceName = {default=0};
	__property FooterAppearanceName = {default=0};
	
__published:
	__property ItemAppearanceClassName = {default=0};
	__property ItemEditAppearanceClassName = {default=0};
	__property HeaderAppearanceClassName = {default=0};
	__property FooterAppearanceClassName = {default=0};
	__property OnUpdatingObjects;
	__property OnUpdateObjects;
	__property OnEditModeChange;
	__property OnEditModeChanging;
	__property EditMode = {default=0};
	__property Transparent = {default=0};
	__property AllowSelection = {default=1};
	__property AlternatingColors = {default=0};
	__property ItemIndex = {default=-1};
	__property Images;
	__property ScrollViewPos = {default=0};
	__property ItemSpaces;
	__property SideSpace = {default=0};
	__property Align = {default=0};
	__property Anchors;
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=1};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DisableFocusEffect = {default=1};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Locked = {default=0};
	__property Height;
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property Margins;
	__property Opacity;
	__property Padding;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
	__property ItemAppearance;
	__property ItemAppearanceObjects;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property StyleLookup = {default=0};
	__property TouchTargetExpansion;
	__property OnClick;
	__property OnDblClick;
	__property CanSwipeDelete = {default=1};
	__property OnChange;
	__property OnChangeRepainted;
	__property OnItemsChange;
	__property OnScrollViewChange;
	__property OnItemClick;
	__property OnItemClickEx;
	__property OnButtonClick;
	__property OnButtonChange;
	__property OnDeletingItem;
	__property OnDeleteItem;
	__property OnDeleteChangeVisible;
	__property OnSearchChange;
	__property OnFilter;
	__property OnPullRefresh;
	__property DeleteButtonText;
	__property AutoTapScroll = {default=0};
	__property AutoTapTreshold = {default=8};
	__property ShowSelection = {default=1};
	__property DisableMouseWheel = {default=0};
	__property SearchVisible = {default=0};
	__property SearchAlwaysOnTop = {default=1};
	__property SelectionCrossfade = {default=0};
	__property PullToRefresh = {default=0};
	__property PullRefreshWait = {default=0};
	__property ControlType = {default=0};
	__property NativeOptions = {default=0};
public:
	/* TAppearanceListView.Create */ inline __fastcall virtual TListView(System::Classes::TComponent* AOwner)/* overload */ : TCustomListView(AOwner) { }
	/* TAppearanceListView.Destroy */ inline __fastcall virtual ~TListView() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EListViewError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EListViewError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EListViewError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EListViewError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EListViewError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EListViewError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EListViewError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EListViewError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EListViewError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EListViewError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EListViewError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EListViewError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EListViewError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EListViewError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Listview */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_LISTVIEW)
using namespace Fmx::Listview;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_ListviewHPP
