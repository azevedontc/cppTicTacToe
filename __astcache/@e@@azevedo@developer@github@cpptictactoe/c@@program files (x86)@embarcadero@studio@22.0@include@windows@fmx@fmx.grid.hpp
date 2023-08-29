// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Grid.pas' rev: 35.00 (Windows)

#ifndef Fmx_GridHPP
#define Fmx_GridHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Rtti.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <System.Generics.Collections.hpp>
#include <System.ImageList.hpp>
#include <System.Messaging.hpp>
#include <FMX.Utils.hpp>
#include <FMX.ActnList.hpp>
#include <FMX.Types.hpp>
#include <FMX.Graphics.hpp>
#include <FMX.ImgList.hpp>
#include <FMX.Controls.hpp>
#include <FMX.StdActns.hpp>
#include <FMX.TextLayout.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Controls.Model.hpp>
#include <FMX.ScrollBox.hpp>
#include <FMX.Text.hpp>
#include <System.Generics.Defaults.hpp>
#include <FMX.Presentation.Messages.hpp>
#include <FMX.InertialMovement.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Grid
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IDrawableCell;
typedef System::DelphiInterface<IDrawableCell> _di_IDrawableCell;
__interface DELPHIINTERFACE IDrawableCellEx;
typedef System::DelphiInterface<IDrawableCellEx> _di_IDrawableCellEx;
__interface DELPHIINTERFACE ICellControl;
typedef System::DelphiInterface<ICellControl> _di_ICellControl;
class DELPHICLASS TColumn;
class DELPHICLASS TStringColumn;
class DELPHICLASS TProgressColumn;
class DELPHICLASS TCheckColumn;
class DELPHICLASS TDateTimeColumnBase;
class DELPHICLASS TDateTimeColumn;
class DELPHICLASS TTimeColumn;
class DELPHICLASS TDateColumn;
class DELPHICLASS TPopupColumn;
class DELPHICLASS TImageColumn;
class DELPHICLASS TCustomNumberColumn;
class DELPHICLASS TCurrencyColumn;
class DELPHICLASS TFloatColumn;
class DELPHICLASS TIntegerColumn;
class DELPHICLASS TGlyphColumn;
class DELPHICLASS TGridModel;
class DELPHICLASS TGridValues;
class DELPHICLASS TCustomGrid;
class DELPHICLASS TGrid;
class DELPHICLASS TStringGridModel;
class DELPHICLASS TStringGrid;
class DELPHICLASS TColumnClasses;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
typedef System::TMetaClass* TColumnClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TColumnClass);
#endif /* _WIN64 */

enum class DECLSPEC_DENUM TGridDrawState : unsigned char { Selected, Focused, RowSelected };

typedef System::Set<TGridDrawState, _DELPHI_SET_ENUMERATOR(TGridDrawState::Selected), _DELPHI_SET_ENUMERATOR(TGridDrawState::RowSelected)> TGridDrawStates;

enum class DECLSPEC_DENUM TCellReturnAction : unsigned char { None, GotoNextRow, GotoNextColumn };

__interface  INTERFACE_UUID("{5AF33274-5E60-4EA9-81D3-0BA33050C68C}") IDrawableCell  : public System::IInterface 
{
	virtual void __fastcall BeforeDrawing(Fmx::Graphics::TCanvas* const Canvas) = 0 ;
	virtual void __fastcall AfterDrawing(Fmx::Graphics::TCanvas* const Canvas) = 0 ;
	virtual void __fastcall DrawCell(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &Bounds, const int Row, const System::Rtti::TValue &Value, const TGridDrawStates State) = 0 ;
};

__interface  INTERFACE_UUID("{A96CF08A-F868-4CDB-B4F5-A2D18DD7EDDD}") IDrawableCellEx  : public IDrawableCell 
{
	virtual void __fastcall DrawBackground(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &Bounds, const int Row, const System::Rtti::TValue &Value, const TGridDrawStates State) = 0 ;
};

enum class DECLSPEC_DENUM TGridOption : unsigned char { AlternatingRowBackground, Editing, AlwaysShowEditor, ColumnResize, ColumnMove, ColLines, RowLines, RowSelect, AlwaysShowSelection, Tabs, Header, HeaderClick, CancelEditingByDefault, AutoDisplacement };

typedef System::Set<TGridOption, _DELPHI_SET_ENUMERATOR(TGridOption::AlternatingRowBackground), _DELPHI_SET_ENUMERATOR(TGridOption::AutoDisplacement)> TGridOptions;

typedef void __fastcall (__closure *TOnGetValue)(System::TObject* Sender, const int ACol, const int ARow, System::Rtti::TValue &Value);

typedef void __fastcall (__closure *TOnSetValue)(System::TObject* Sender, const int ACol, const int ARow, const System::Rtti::TValue &Value);

typedef void __fastcall (__closure *TOnEditingDone)(System::TObject* Sender, const int ACol, const int ARow);

typedef void __fastcall (__closure *TOnCallbackGetValue)(System::TObject* Sender, const int ACol, const int ARow, System::DelphiInterface<System::Sysutils::TProc__1<System::Rtti::TValue> > ACallback);

typedef void __fastcall (__closure *TSelectCell)(System::TObject* Sender, const int ACol, const int ARow, bool &CanSelect);

typedef void __fastcall (__closure *THeaderClick)(TColumn* Column);

typedef void __fastcall (__closure *TCellClick)(TColumn* const Column, const int Row);

typedef void __fastcall (__closure *TColumnMovedEvent)(TColumn* Column, int FromIndex, int ToIndex);

typedef void __fastcall (__closure *TDrawColumnCellEvent)(System::TObject* Sender, Fmx::Graphics::TCanvas* const Canvas, TColumn* const Column, const System::Types::TRectF &Bounds, const int Row, const System::Rtti::TValue &Value, const TGridDrawStates State);

typedef void __fastcall (__closure *TDrawColumnHeaderEvent)(System::TObject* Sender, Fmx::Graphics::TCanvas* const Canvas, TColumn* const Column, const System::Types::TRectF &Bounds);

typedef void __fastcall (__closure *TCreateCustomEditorEvent)(System::TObject* Sender, TColumn* const Column, Fmx::Controls::TStyledControl* &Control);

typedef void __fastcall (__closure *TGetImageIndexEvent)(TColumn* Column, const System::Rtti::TValue &Value, System::Uitypes::TImageIndex &ImageIndex);

__interface  INTERFACE_UUID("{67922698-EEEE-4326-B114-F11145A1D200}") ICellControl  : public System::IInterface 
{
	virtual TColumn* __fastcall GetColumn() = 0 ;
	virtual void __fastcall SetColumn(TColumn* const Value) = 0 ;
	__property TColumn* Column = {read=GetColumn, write=SetColumn};
};

class PASCALIMPLEMENTATION TColumn : public Fmx::Controls::TControl
{
	typedef Fmx::Controls::TControl inherited;
	
	
public:
	enum class DECLSPEC_DENUM TEditorState : unsigned char { None, ReadOnly, Unmodified, Modified };
	
	
public:
	static const System::Int8 HorzTextMargin = System::Int8(0x3);
	
	static const System::Int8 VertTextMargin = System::Int8(0x3);
	
	
private:
	TGridModel* FModel;
	Fmx::Controls::Presentation::TPresentedControl* FPresentedControl;
	System::UnicodeString FHeader;
	bool FChanged;
	Fmx::Textlayout::TTextLayout* FLayout;
	bool FReadOnly;
	System::TObject* FCellObject;
	_di_IDrawableCell FDrawableCell;
	bool FNeedCreateCellControl;
	bool FColumnVisible;
	TEditorState FEditorState;
	bool FEditorStateChanging;
	int FOriginalIndex;
	bool FHorzAlignModified;
	Fmx::Types::TTextAlign FHorzAlign;
	void __fastcall SaveOriginalIndex();
	int __fastcall GetOriginalIndex();
	void __fastcall SetHeader(const System::UnicodeString Value);
	System::TObject* __fastcall GetCellObject();
	void __fastcall ReadWidth(System::Classes::TReader* Reader);
	void __fastcall WriteWidth(System::Classes::TWriter* Writer);
	void __fastcall SkipOldProperty(System::Classes::TReader* Reader);
	_di_IDrawableCell __fastcall GetDrawableCell();
	bool __fastcall GetEffectiveVisible();
	Fmx::Graphics::TTextSettings* __fastcall GetDefaultTextSettings();
	void __fastcall Init();
	void __fastcall ClearCacheIfNeed();
	bool __fastcall UpdateReadOnly(System::TObject* const InplaceEdit);
	void __fastcall SetColumnVisible(const bool Value);
	bool __fastcall GetInEditMode();
	bool __fastcall IsHorzAlignStored();
	Fmx::Types::TTextAlign __fastcall GetHorzAlign();
	void __fastcall SetGetHorzAlign(const Fmx::Types::TTextAlign Value);
	
protected:
	System::UnicodeString __fastcall GetText();
	virtual bool __fastcall TextStored();
	bool __fastcall GetReadOnly();
	void __fastcall SetReadOnly(const bool Value);
	virtual void __fastcall Paint();
	virtual void __fastcall Resize();
	virtual void __fastcall AncestorParentChanged();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual System::Classes::TObservers* __fastcall GetObservers();
	virtual void __fastcall EnabledChanged();
	virtual void __fastcall VisibleChanged();
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	virtual Fmx::Types::TTextAlign __fastcall GetDefaultHorzAlign();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall Loaded();
	virtual void __fastcall BeforeDrawing(Fmx::Graphics::TCanvas* const Canvas);
	virtual void __fastcall AfterDrawing(Fmx::Graphics::TCanvas* const Canvas);
	virtual void __fastcall DrawCell(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &Bounds, const int Row, const System::Rtti::TValue &Value, const TGridDrawStates State);
	virtual void __fastcall DrawBackground(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &Bounds, const int Row, const System::Rtti::TValue &Value, const TGridDrawStates State);
	virtual float __fastcall GetAbsoluteOpacity();
	__property System::TObject* CellObject = {read=GetCellObject};
	__property _di_IDrawableCell DrawableCell = {read=GetDrawableCell};
	virtual void __fastcall ChangeOrder();
	virtual bool __fastcall DoEditorModified();
	
public:
	__fastcall virtual TColumn(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TColumn();
	__property Fmx::Textlayout::TTextLayout* Layout = {read=FLayout};
	__property bool InEditMode = {read=GetInEditMode, nodefault};
	__property TEditorState EditorState = {read=FEditorState, nodefault};
	virtual void __fastcall UpdateCell(const int ARow);
	virtual void __fastcall Changed();
	virtual void __fastcall SetBounds(float X, float Y, float AWidth, float AHeight);
	__property bool EffectiveVisible = {read=GetEffectiveVisible, nodefault};
	virtual bool __fastcall CanEdit();
	virtual bool __fastcall RefreshEditor(System::TObject* const InplaceEdit, const System::Rtti::TValue &Value);
	void __fastcall EditorModified();
	bool __fastcall EditingDone(System::TObject* const InplaceEdit, const System::Rtti::TValue &Value, const bool Accept);
	virtual bool __fastcall PostEditorValue(System::TObject* const InplaceEdit, const System::Rtti::TValue &Value);
	virtual void __fastcall EditingCancelled();
	__classmethod bool __fastcall ValueIsEmpty(const System::Rtti::TValue &Value);
	virtual System::UnicodeString __fastcall ValueToString(const System::Rtti::TValue &Value);
	virtual bool __fastcall ValidChar(const System::WideChar KeyChar);
	__property TGridModel* Model = {read=FModel};
	__property Fmx::Controls::Presentation::TPresentedControl* PresentedControl = {read=FPresentedControl};
	virtual void __fastcall DefaultDrawCell(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &Bounds, const int Row, const System::Rtti::TValue &Value, const TGridDrawStates State);
	__property Fmx::Graphics::TTextSettings* DefaultTextSettings = {read=GetDefaultTextSettings};
	System::Types::TRectF __fastcall RectPlaceIntoBounds(const System::Types::TRectF &Source, const System::Types::TRectF &Bounds);
	__property int OriginalIndex = {read=GetOriginalIndex, nodefault};
	__property bool HorzAlignModified = {read=FHorzAlignModified, nodefault};
	
__published:
	__property Action;
	__property Fmx::Types::TTextAlign HorzAlign = {read=GetHorzAlign, write=SetGetHorzAlign, stored=IsHorzAlignStored, nodefault};
	__property Enabled;
	__property Locked = {default=0};
	__property System::UnicodeString Header = {read=FHeader, write=SetHeader};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property bool ReadOnly = {read=FReadOnly, write=SetReadOnly, default=0};
	__property bool Visible = {read=FColumnVisible, write=SetColumnVisible, default=1};
	__property Width;
	__property OnResize;
	__property OnResized;
private:
	void *__IReadOnly;	// Fmx::Types::IReadOnly 
	void *__IDrawableCellEx;	// IDrawableCellEx 
	void *__ICaption;	// Fmx::Actnlist::ICaption 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {495B8B0C-D7C8-4835-AA5F-580939D21444}
	operator Fmx::Types::_di_IReadOnly()
	{
		Fmx::Types::_di_IReadOnly intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IReadOnly*(void) { return (Fmx::Types::IReadOnly*)&__IReadOnly; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A96CF08A-F868-4CDB-B4F5-A2D18DD7EDDD}
	operator _di_IDrawableCellEx()
	{
		_di_IDrawableCellEx intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDrawableCellEx*(void) { return (IDrawableCellEx*)&__IDrawableCellEx; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3D039C9C-8888-466F-A344-E7026EEE2C07}
	operator Fmx::Actnlist::_di_ICaption()
	{
		Fmx::Actnlist::_di_ICaption intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::ICaption*(void) { return (Fmx::Actnlist::ICaption*)&__ICaption; }
	#endif
	
};


class PASCALIMPLEMENTATION TStringColumn : public TColumn
{
	typedef TColumn inherited;
	
public:
	/* TColumn.Create */ inline __fastcall virtual TStringColumn(System::Classes::TComponent* AOwner) : TColumn(AOwner) { }
	/* TColumn.Destroy */ inline __fastcall virtual ~TStringColumn() { }
	
};


class PASCALIMPLEMENTATION TProgressColumn : public TColumn
{
	typedef TColumn inherited;
	
public:
	static const System::Int8 DefaultMax = System::Int8(0x64);
	
	
private:
	float FMin;
	float FMax;
	void __fastcall SetMax(const float Value);
	void __fastcall SetMin(const float Value);
	
protected:
	virtual bool __fastcall IsMaxStored();
	virtual bool __fastcall IsMinStored();
	
public:
	__fastcall virtual TProgressColumn(System::Classes::TComponent* AOwner);
	virtual bool __fastcall CanEdit();
	virtual void __fastcall DefaultDrawCell(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &Bounds, const int Row, const System::Rtti::TValue &Value, const TGridDrawStates State);
	
__published:
	__property float Max = {read=FMax, write=SetMax, stored=IsMaxStored};
	__property float Min = {read=FMin, write=SetMin, stored=IsMinStored};
public:
	/* TColumn.Destroy */ inline __fastcall virtual ~TProgressColumn() { }
	
};


class PASCALIMPLEMENTATION TCheckColumn : public TColumn
{
	typedef TColumn inherited;
	
public:
	#define TCheckColumn_StrStyleName L"checkcellstyle"
	
	
protected:
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	
public:
	__classmethod Fmx::Graphics::TBitmap* __fastcall CreateBitmap(TGridModel* const Model, const bool Checked, const bool EditorMode = false);
	virtual void __fastcall DefaultDrawCell(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &Bounds, const int Row, const System::Rtti::TValue &Value, const TGridDrawStates State);
	virtual System::UnicodeString __fastcall ValueToString(const System::Rtti::TValue &Value);
	bool __fastcall TryGetAsBoolean(const System::Rtti::TValue &Value, bool &BoolValue);
public:
	/* TColumn.Create */ inline __fastcall virtual TCheckColumn(System::Classes::TComponent* AOwner) : TColumn(AOwner) { }
	/* TColumn.Destroy */ inline __fastcall virtual ~TCheckColumn() { }
	
};


class PASCALIMPLEMENTATION TDateTimeColumnBase : public TColumn
{
	typedef TColumn inherited;
	
	
private:
	enum class DECLSPEC_DENUM TType : unsigned char { DateTime, Date, Time };
	
	
private:
	bool FShowClearButton;
	System::UnicodeString FFormat;
	TType FType;
	void __fastcall SetShowClearButton(const bool Value);
	void __fastcall SetFormat(const System::UnicodeString Value);
	
protected:
	virtual bool __fastcall IsFormatStored();
	
public:
	__fastcall virtual TDateTimeColumnBase(System::Classes::TComponent* AOwner);
	virtual System::UnicodeString __fastcall ValueToString(const System::Rtti::TValue &Value);
	
__published:
	__property System::UnicodeString Format = {read=FFormat, write=SetFormat, stored=IsFormatStored};
	__property bool ShowClearButton = {read=FShowClearButton, write=SetShowClearButton, default=0};
public:
	/* TColumn.Destroy */ inline __fastcall virtual ~TDateTimeColumnBase() { }
	
};


class PASCALIMPLEMENTATION TDateTimeColumn : public TDateTimeColumnBase
{
	typedef TDateTimeColumnBase inherited;
	
public:
	/* TDateTimeColumnBase.Create */ inline __fastcall virtual TDateTimeColumn(System::Classes::TComponent* AOwner) : TDateTimeColumnBase(AOwner) { }
	
public:
	/* TColumn.Destroy */ inline __fastcall virtual ~TDateTimeColumn() { }
	
};


class PASCALIMPLEMENTATION TTimeColumn : public TDateTimeColumnBase
{
	typedef TDateTimeColumnBase inherited;
	
public:
	__fastcall virtual TTimeColumn(System::Classes::TComponent* AOwner);
public:
	/* TColumn.Destroy */ inline __fastcall virtual ~TTimeColumn() { }
	
};


class PASCALIMPLEMENTATION TDateColumn : public TDateTimeColumnBase
{
	typedef TDateTimeColumnBase inherited;
	
public:
	__fastcall virtual TDateColumn(System::Classes::TComponent* AOwner);
public:
	/* TColumn.Destroy */ inline __fastcall virtual ~TDateColumn() { }
	
};


class PASCALIMPLEMENTATION TPopupColumn : public TColumn
{
	typedef TColumn inherited;
	
private:
	System::Classes::TStringList* FItems;
	void __fastcall SetItems(System::Classes::TStringList* const Value);
	
public:
	__fastcall virtual TPopupColumn(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TPopupColumn();
	
__published:
	__property System::Classes::TStringList* Items = {read=FItems, write=SetItems};
};


class PASCALIMPLEMENTATION TImageColumn : public TColumn
{
	typedef TColumn inherited;
	
private:
	System::Types::TSize FPreviewSize;
	void __fastcall SetPreviewSize(const System::Types::TSize &Value);
	
public:
	__fastcall virtual TImageColumn(System::Classes::TComponent* AOwner);
	virtual void __fastcall DefaultDrawCell(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &Bounds, const int Row, const System::Rtti::TValue &Value, const TGridDrawStates State);
	__property System::Types::TSize PreviewSize = {read=FPreviewSize, write=SetPreviewSize};
public:
	/* TColumn.Destroy */ inline __fastcall virtual ~TImageColumn() { }
	
};


class PASCALIMPLEMENTATION TCustomNumberColumn : public TColumn
{
	typedef TColumn inherited;
	
private:
	int FDecimalDigits;
	Fmx::Text::TNumValueType FValueType;
	bool FShowThousandSeparator;
	void __fastcall SetDecimalDigits(const int Value);
	void __fastcall SetValueType(const Fmx::Text::TNumValueType Value);
	void __fastcall SetShowThousandSeparator(const bool Value);
	
protected:
	virtual Fmx::Types::TTextAlign __fastcall GetDefaultHorzAlign();
	
public:
	__fastcall virtual TCustomNumberColumn(System::Classes::TComponent* AOwner);
	__classmethod bool __fastcall TryValueToString(const System::Rtti::TValue &Value, const Fmx::Text::TNumValueType ValueType, /* out */ System::UnicodeString &Text, const int DecimalDigits = 0xffffffff, const bool ShowThousandSeparator = false);
	virtual System::UnicodeString __fastcall ValueToString(const System::Rtti::TValue &Value);
	virtual bool __fastcall ValidChar(const System::WideChar KeyChar);
	__property int DecimalDigits = {read=FDecimalDigits, write=SetDecimalDigits, default=2};
	__property Fmx::Text::TNumValueType ValueType = {read=FValueType, write=SetValueType, nodefault};
	__property bool ShowThousandSeparator = {read=FShowThousandSeparator, write=SetShowThousandSeparator, default=0};
public:
	/* TColumn.Destroy */ inline __fastcall virtual ~TCustomNumberColumn() { }
	
};


class PASCALIMPLEMENTATION TCurrencyColumn : public TCustomNumberColumn
{
	typedef TCustomNumberColumn inherited;
	
public:
	__fastcall virtual TCurrencyColumn(System::Classes::TComponent* AOwner);
	
__published:
	__property DecimalDigits = {default=2};
	__property ShowThousandSeparator = {default=1};
public:
	/* TColumn.Destroy */ inline __fastcall virtual ~TCurrencyColumn() { }
	
};


class PASCALIMPLEMENTATION TFloatColumn : public TCustomNumberColumn
{
	typedef TCustomNumberColumn inherited;
	
public:
	__fastcall virtual TFloatColumn(System::Classes::TComponent* AOwner);
	
__published:
	__property DecimalDigits = {default=2};
	__property ShowThousandSeparator = {default=0};
public:
	/* TColumn.Destroy */ inline __fastcall virtual ~TFloatColumn() { }
	
};


class PASCALIMPLEMENTATION TIntegerColumn : public TCustomNumberColumn
{
	typedef TCustomNumberColumn inherited;
	
public:
	__fastcall virtual TIntegerColumn(System::Classes::TComponent* AOwner);
	virtual bool __fastcall ValidChar(const System::WideChar KeyChar);
	__property ShowThousandSeparator = {default=0};
public:
	/* TColumn.Destroy */ inline __fastcall virtual ~TIntegerColumn() { }
	
};


class PASCALIMPLEMENTATION TGlyphColumn : public TColumn
{
	typedef TColumn inherited;
	
private:
	Fmx::Actnlist::_di_IGlyph FGlyph;
	TGetImageIndexEvent FOnGetImageIndex;
	bool FStretch;
	void __fastcall SetStretch(const bool Value);
	void __fastcall SetOnGetImageIndex(const TGetImageIndexEvent Value);
	
protected:
	virtual void __fastcall AncestorParentChanged();
	virtual void __fastcall Loaded();
	void __fastcall DoGetImageIndex(const System::Rtti::TValue &Value, System::Uitypes::TImageIndex &ImageIndex);
	
public:
	__property Fmx::Actnlist::_di_IGlyph GlyphInterface = {read=FGlyph};
	System::Uitypes::TImageIndex __fastcall GetImageIndex(const System::Rtti::TValue &Value);
	virtual bool __fastcall CanEdit();
	virtual void __fastcall DefaultDrawCell(Fmx::Graphics::TCanvas* const Canvas, const System::Types::TRectF &Bounds, const int Row, const System::Rtti::TValue &Value, const TGridDrawStates State);
	System::Types::TRectF __fastcall GlyphPlaceIntoBounds(const System::Uitypes::TImageIndex Index, const System::Types::TRectF &Bounds, const float Scale);
	
__published:
	__property bool Stretch = {read=FStretch, write=SetStretch, default=0};
	__property TGetImageIndexEvent OnGetImageIndex = {read=FOnGetImageIndex, write=SetOnGetImageIndex};
public:
	/* TColumn.Create */ inline __fastcall virtual TGlyphColumn(System::Classes::TComponent* AOwner) : TColumn(AOwner) { }
	/* TColumn.Destroy */ inline __fastcall virtual ~TGlyphColumn() { }
	
};


class PASCALIMPLEMENTATION TGridModel : public Fmx::Scrollbox::TCustomScrollBoxModel
{
	typedef Fmx::Scrollbox::TCustomScrollBoxModel inherited;
	
	
public:
	struct DECLSPEC_DRECORD TColumnIndexes
	{
	public:
		TColumn* Column;
		int FromIndex;
		int ToIndex;
	};
	
	
	struct DECLSPEC_DRECORD TCellObjectInfo
	{
	public:
		TColumn* Column;
		System::TObject* CellObject;
	};
	
	
	struct DECLSPEC_DRECORD TCoord
	{
	public:
		void __fastcall Clear();
		bool __fastcall IsEmpty();
		
	public:
		union
		{
			struct 
			{
				System::StaticArray<int, 2> AsArray;
			};
			struct 
			{
				int Col;
				int Row;
			};
			
		};
	};
	
	
	struct DECLSPEC_DRECORD TRectCoord
	{
	public:
		TGridModel::TCoord TopLeft;
		TGridModel::TCoord BottomRight;
	};
	
	
	struct DECLSPEC_DRECORD TPointInfo
	{
	public:
		System::Types::TPointF Point;
		TGridModel::TCoord Coord;
	};
	
	
	struct DECLSPEC_DRECORD TCellInfo
	{
	public:
		TGridModel::TCoord Coord;
		System::Types::TRect Rect;
	};
	
	
	struct DECLSPEC_DRECORD TVKInfo
	{
	public:
		bool Shown;
		System::Types::TRectF AbsoluteRect;
	};
	
	
	
public:
	static TGridOptions DefaultGridOptions;
	
private:
	int FUpdateCount;
	Fmx::Controls::TTextSettingsInfo* FTextSettingsInfo;
	TGridOptions FOptions;
	bool FContentChanged;
	int FCol;
	int FRow;
	TCoord FOldCoord;
	int FRowCount;
	float FRowHeight;
	System::Generics::Collections::TList__1<TColumn*>* FColumns;
	bool FDefaultDrawing;
	THeaderClick FOnHeaderClick;
	TCellClick FOnCellClick;
	TCellClick FOnCellDblClick;
	TColumnMovedEvent FOnColumnMoved;
	TDrawColumnHeaderEvent FOnDrawColumnHeader;
	TSelectCell FOnSelectCell;
	System::Classes::TNotifyEvent FOnSelChanged;
	TDrawColumnCellEvent FOnDrawColumnBackground;
	TDrawColumnCellEvent FOnDrawColumnCell;
	TOnCallbackGetValue FOnCallbackGetValue;
	TOnGetValue FOnGetValue;
	TOnSetValue FOnSetValue;
	TCreateCustomEditorEvent FOnCreateCustomEditor;
	TOnEditingDone FOnEditingDone;
	bool FEnabled;
	TGridValues* FCache;
	TCellReturnAction FCellReturnAction;
	bool FDataStored;
	bool FIsUsedInBinding;
	bool FOrderChanging;
	void __fastcall SetRowHeight(const float Value);
	void __fastcall DoContentChanged();
	void __fastcall DoColumnChanged(const int Index);
	void __fastcall SetRowCount(const int Value);
	int __fastcall GetColumnCount();
	TColumn* __fastcall GetColumns(const int Index);
	void __fastcall SetOptions(const TGridOptions Value);
	bool __fastcall IsOptionsStored();
	void __fastcall SetDefaultDrawing(const bool Value);
	void __fastcall SetCol(const int Value);
	void __fastcall SetRow(const int Value);
	bool __fastcall TrySelectCell(const int ACol, const int ARow, const bool AObservable);
	int __fastcall GetEffectiveRowHeight();
	void __fastcall SetEnabled(const bool Value);
	bool __fastcall GetEditorMode();
	void __fastcall SetEditorMode(const bool Value);
	void __fastcall DoDrawColumnBackground(Fmx::Graphics::TCanvas* const Canvas, TColumn* const Column, const System::Types::TRectF &Bounds, const int Row, const System::Rtti::TValue &Value, const TGridDrawStates State);
	bool __fastcall GetDesign();
	void __fastcall SetDesign(const bool Value);
	void __fastcall SetDefaultTextSettings(Fmx::Graphics::TTextSettings* const Value);
	Fmx::Graphics::TBitmap* __fastcall CreatePreviewBitmap(TImageColumn* const Column, Fmx::Graphics::TBitmap* const Bitmap);
	void __fastcall SetDataStored(const bool Value);
	void __fastcall SetIsUsedInBinding(const bool Value);
	void __fastcall UpdateColumnsIndex(const bool Force = false);
	void __fastcall InternalInsertColumn(const int Index, TColumn* const Column);
	
protected:
	virtual TGridValues* __fastcall CreateCache();
	virtual void __fastcall DoEndUpdate();
	virtual TGridOptions __fastcall GetDefaultGridOptions();
	virtual void __fastcall DoSelectCell(int Col, int Row, bool &CanSelect);
	virtual void __fastcall DoSelChanged();
	virtual void __fastcall DoDrawColumnCell(Fmx::Graphics::TCanvas* const Canvas, TColumn* const Column, const System::Types::TRectF &Bounds, const int Row, const System::Rtti::TValue &Value, const TGridDrawStates State);
	virtual Fmx::Controls::TTextSettingsInfo::TCustomTextSettingsClass __fastcall GetTextSettingsClass();
	virtual void __fastcall DoTextSettingsChanged();
	virtual bool __fastcall StyledSettingsStored();
	Fmx::Graphics::TTextSettings* __fastcall GetDefaultTextSettings();
	Fmx::Graphics::TTextSettings* __fastcall GetTextSettings();
	void __fastcall SetTextSettings(Fmx::Graphics::TTextSettings* const Value);
	Fmx::Graphics::TTextSettings* __fastcall GetResultingTextSettings();
	Fmx::Types::TStyledSettings __fastcall GetStyledSettings();
	void __fastcall SetStyledSettings(const Fmx::Types::TStyledSettings Value);
	System::Rtti::TValue __fastcall GetEditorValue();
	__property bool Design = {read=GetDesign, write=SetDesign, nodefault};
	virtual System::Rtti::TValue __fastcall DoGetValue(int Col, int Row);
	virtual void __fastcall DoSetValue(int Col, int Row, const System::Rtti::TValue &Value);
	virtual void __fastcall DoCallbackGetValue(int Col, int Row, System::DelphiInterface<System::Sysutils::TProc__1<System::Rtti::TValue> > ACallback);
	virtual void __fastcall DoColumnAdded(TColumn* const Column);
	virtual void __fastcall DoColumnRemoved(TColumn* const Column);
	virtual void __fastcall DoRowCountChanged(const int OldValue, const int NewValue);
	__property TOnGetValue OnGetValue = {read=FOnGetValue, write=FOnGetValue};
	__property TGridValues* Cache = {read=FCache};
	void __fastcall SetSelected(const int Value);
	
public:
	__fastcall virtual TGridModel(System::Classes::TComponent* const AOwner)/* overload */;
	__fastcall virtual ~TGridModel();
	void __fastcall BeginUpdate();
	bool __fastcall IsUpdating();
	void __fastcall EndUpdate();
	void __fastcall ColumnChanged(const int Index);
	void __fastcall ContentChanged();
	void __fastcall InvalidateContentSize();
	void __fastcall SelectionChanged();
	void __fastcall InsertColumn(const int Index, TColumn* const Column);
	void __fastcall RemoveColumn(const int Index);
	void __fastcall MoveColumn(const int OldIndex, const int NewIndex);
	void __fastcall SetExpectedRowCount(const int Value);
	__property float RowHeight = {read=FRowHeight, write=SetRowHeight};
	__property int EffectiveRowHeight = {read=GetEffectiveRowHeight, nodefault};
	__property int RowCount = {read=FRowCount, write=SetRowCount, nodefault};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, nodefault};
	__property TColumn* Columns[const int Index] = {read=GetColumns};
	__property int ColumnCount = {read=GetColumnCount, nodefault};
	int __fastcall IndexOfColumn(TColumn* const Column);
	void __fastcall SelectCell(const int ACol, const int ARow)/* overload */;
	void __fastcall ShowEditor();
	void __fastcall HideEditor(const bool Accept)/* overload */;
	void __fastcall PostEditorValue();
	void __fastcall RefreshEditorValue();
	void __fastcall HideEditor()/* overload */;
	bool __fastcall FindNextCell(const bool RightToLeft, const bool OnlyRow, const bool Editing, int &ACol, int &ARow);
	__property bool EditorMode = {read=GetEditorMode, write=SetEditorMode, nodefault};
	__property TGridOptions Options = {read=FOptions, write=SetOptions, stored=IsOptionsStored, nodefault};
	__property bool DefaultDrawing = {read=FDefaultDrawing, write=SetDefaultDrawing, default=1};
	__property bool IsUsedInBinding = {read=FIsUsedInBinding, write=SetIsUsedInBinding, nodefault};
	__property bool DataStored = {read=FDataStored, write=SetDataStored, default=0};
	void __fastcall ClearCache();
	void __fastcall ReduceCache()/* overload */;
	void __fastcall ReduceCache(const int LeftColumn, const int TopRow, const int RigthColumn, const int BottomRow)/* overload */;
	void __fastcall RemoveColumnFromCache(const int Index);
	void __fastcall ClearColumnInCache(const int Index);
	void __fastcall RemoveRowFromCache(const int Index);
	void __fastcall ClearRowInCache(const int Index);
	void __fastcall MoveColumnInCache(const int OldIndex, const int NewIndex);
	void __fastcall InsertColumnIntoCache(const int Index);
	void __fastcall DataChanged(const int ACol, const int ARow);
	System::Rtti::TValue __fastcall GetValue(const int Col, const int Row, const bool InvalidateCache);
	__property int Col = {read=FCol, write=SetCol, nodefault};
	__property int Row = {read=FRow, write=SetRow, nodefault};
	__property Fmx::Graphics::TTextSettings* TextSettings = {read=GetTextSettings, write=SetTextSettings};
	__property Fmx::Graphics::TTextSettings* DefaultTextSettings = {read=GetDefaultTextSettings, write=SetDefaultTextSettings};
	__property Fmx::Types::TStyledSettings StyledSettings = {read=GetStyledSettings, write=SetStyledSettings, stored=StyledSettingsStored, nodefault};
	__property TCellReturnAction CellReturnAction = {read=FCellReturnAction, write=FCellReturnAction, default=0};
	__property THeaderClick OnHeaderClick = {read=FOnHeaderClick, write=FOnHeaderClick};
	__property TCellClick OnCellClick = {read=FOnCellClick, write=FOnCellClick};
	__property TCellClick OnCellDblClick = {read=FOnCellDblClick, write=FOnCellDblClick};
	__property TColumnMovedEvent OnColumnMoved = {read=FOnColumnMoved, write=FOnColumnMoved};
	__property TDrawColumnHeaderEvent OnDrawColumnHeader = {read=FOnDrawColumnHeader, write=FOnDrawColumnHeader};
	__property TSelectCell OnSelectCell = {read=FOnSelectCell, write=FOnSelectCell};
	__property System::Classes::TNotifyEvent OnSelChanged = {read=FOnSelChanged, write=FOnSelChanged};
	__property TDrawColumnCellEvent OnDrawColumnBackground = {read=FOnDrawColumnBackground, write=FOnDrawColumnBackground};
	__property TDrawColumnCellEvent OnDrawColumnCell = {read=FOnDrawColumnCell, write=FOnDrawColumnCell};
	__property TOnCallbackGetValue OnCallbackGetValue = {read=FOnCallbackGetValue, write=FOnCallbackGetValue};
	__property TOnSetValue OnSetValue = {read=FOnSetValue, write=FOnSetValue};
	__property TCreateCustomEditorEvent OnCreateCustomEditor = {read=FOnCreateCustomEditor, write=FOnCreateCustomEditor};
	__property TOnEditingDone OnEditingDone = {read=FOnEditingDone, write=FOnEditingDone};
public:
	/* TMessageSender.Create */ inline __fastcall virtual TGridModel()/* overload */ : Fmx::Scrollbox::TCustomScrollBoxModel() { }
	
};


class PASCALIMPLEMENTATION TGridValues : public System::Generics::Collections::TDictionary__2<TGridModel::TCoord,System::Rtti::TValue>
{
	typedef System::Generics::Collections::TDictionary__2<TGridModel::TCoord,System::Rtti::TValue> inherited;
	
	
public:
	typedef System::Generics::Collections::TPair__2<TGridModel::TCoord,System::Rtti::TValue> TCellRec;
	
	
private:
	TGridModel* FOwner;
	System::Rtti::TValue __fastcall GetCells(const int ACol, const int ARow);
	void __fastcall SetCells(const int ACol, const int ARow, const System::Rtti::TValue &Value);
	
protected:
	HIDESBASE void __fastcall Clear();
	void __fastcall Reduce(const TGridModel::TRectCoord &AExcepRect);
	void __fastcall RemoveCell(const TGridModel::TCoord &ACoord);
	void __fastcall RemoveCells(const int Index, const bool ByRow, const bool OnlyClear);
	void __fastcall MoveCells(const int OldIndex, const int NewIndex, const bool ByRow);
	void __fastcall InsertCells(const int Index, const bool ByRow);
	void __fastcall RemoveColumn(const int ACol, const bool OnlyClear);
	void __fastcall RemoveRow(const int ARow, const bool OnlyClear);
	void __fastcall MoveColumn(const int OldCol, const int NewCol);
	void __fastcall MoveRow(const int OldRow, const int NewRow);
	void __fastcall InsertColumn(const int ACol);
	void __fastcall InsertRow(const int ARow);
	virtual bool __fastcall IsEqual(const System::Rtti::TValue &OldValue, const System::Rtti::TValue &NewValue);
	virtual void __fastcall Changed(const TGridModel::TCoord &ACoord);
	__property System::Rtti::TValue Cells[const int ACol][const int ARow] = {read=GetCells, write=SetCells/*, default*/};
	
public:
	__fastcall virtual TGridValues(TGridModel* const AOwner);
	__fastcall virtual ~TGridValues();
	__property TGridModel* Owner = {read=FOwner};
};


class PASCALIMPLEMENTATION TCustomGrid : public Fmx::Scrollbox::TCustomPresentedScrollBox
{
	typedef Fmx::Scrollbox::TCustomPresentedScrollBox inherited;
	
private:
	int FVKMessageId;
	bool FVKDisplacement;
	Fmx::Imglist::TGlyphImageLink* FImageLink;
	bool __fastcall GetIsUsedInBinding();
	void __fastcall SetIsUsedInBinding(const bool Value);
	float __fastcall GetRowHeight();
	void __fastcall SetRowHeight(const float Value);
	int __fastcall GetRowCount();
	void __fastcall SetRowCount(const int Value);
	TGridOptions __fastcall GetOptions();
	void __fastcall SetOptions(const TGridOptions Value);
	bool __fastcall OptionsStored();
	bool __fastcall GetDefaultDrawing();
	void __fastcall SetDefaultDrawing(const bool Value);
	int __fastcall GetCol();
	void __fastcall SetCol(const int Value);
	int __fastcall GetRow();
	void __fastcall SetRow(const int Value);
	THeaderClick __fastcall GetOnHeaderClick();
	void __fastcall SetOnHeaderClick(const THeaderClick Value);
	TColumnMovedEvent __fastcall GetOnColumnMoved();
	void __fastcall SetOnColumnMoved(const TColumnMovedEvent Value);
	TDrawColumnHeaderEvent __fastcall GetOnDrawColumnHeader();
	void __fastcall SetOnDrawColumnHeader(const TDrawColumnHeaderEvent Value);
	TSelectCell __fastcall GetOnSelectCell();
	void __fastcall SetOnSelectCell(const TSelectCell Value);
	System::Classes::TNotifyEvent __fastcall GetOnSelChanged();
	void __fastcall SetOnSelChanged(const System::Classes::TNotifyEvent Value);
	TDrawColumnCellEvent __fastcall GetOnDrawColumnBackground();
	void __fastcall SetOnDrawColumnBackground(const TDrawColumnCellEvent Value);
	TDrawColumnCellEvent __fastcall GetOnDrawColumnCell();
	void __fastcall SetOnDrawColumnCell(const TDrawColumnCellEvent Value);
	TOnCallbackGetValue __fastcall GetOnCallbackGetValue();
	void __fastcall SetOnCallbackGetValue(const TOnCallbackGetValue Value);
	TOnGetValue __fastcall GetOnGetValue();
	void __fastcall SetOnGetValue(const TOnGetValue Value);
	TOnSetValue __fastcall GetOnSetValue();
	void __fastcall SetOnSetValue(const TOnSetValue Value);
	TCreateCustomEditorEvent __fastcall GetOnCreateCustomEditor();
	void __fastcall SetOnCreateCustomEditor(const TCreateCustomEditorEvent Value);
	TOnEditingDone __fastcall GetOnEditingDone();
	void __fastcall SetOnEditingDone(const TOnEditingDone Value);
	HIDESBASE TGridModel* __fastcall GetModel()/* overload */;
	int __fastcall GetColumnCount();
	TColumn* __fastcall GetColumns(int Index);
	int __fastcall GetVisibleColumnCount();
	int __fastcall GetBottomRow();
	int __fastcall GetTopRow();
	void __fastcall SetTopRow(const int Value);
	int __fastcall GetVisibleRows();
	Fmx::Graphics::TTextSettings* __fastcall GetDefaultTextSettings();
	Fmx::Graphics::TTextSettings* __fastcall GetTextSettings();
	void __fastcall SetTextSettings(Fmx::Graphics::TTextSettings* const Value);
	Fmx::Graphics::TTextSettings* __fastcall GetResultingTextSettings();
	Fmx::Types::TStyledSettings __fastcall GetStyledSettings();
	void __fastcall SetStyledSettings(const Fmx::Types::TStyledSettings Value);
	bool __fastcall StyledSettingsStored();
	int __fastcall GetItemsCount();
	Fmx::Types::TFmxObject* __fastcall GetItem(const int AIndex);
	HIDESBASE Fmx::Types::TFmxObject* __fastcall GetObject();
	bool __fastcall GetReadOnly();
	void __fastcall SetReadOnly(const bool Value);
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	System::Imagelist::TBaseImageList* __fastcall GetImageList();
	void __fastcall SetImageList(System::Imagelist::TBaseImageList* const Value);
	void __fastcall SetImages(Fmx::Imglist::TCustomImageList* const Value);
	Fmx::Imglist::TCustomImageList* __fastcall GetImages();
	int __fastcall GetLeftColumn();
	int __fastcall GetRightColumn();
	void __fastcall SetLeftColumn(const int Value);
	System::TVarRec __fastcall ObserverCurrent();
	void __fastcall ObserverToggle(const System::Classes::_di_IObserver AObserver, const bool Value);
	void __fastcall VKDisplacementHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	void __fastcall SetSelected(const int Value);
	bool __fastcall GetEditorMode();
	void __fastcall SetEditorMode(const bool Value);
	TCellClick __fastcall GetOnCellClick();
	void __fastcall SetOnCellClick(const TCellClick Value);
	TCellClick __fastcall GetOnCellDblClick();
	void __fastcall SetOnCellDblClick(const TCellClick Value);
	
protected:
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual void __fastcall Loaded();
	virtual void __fastcall ContentAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall ContentInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall ContentBeforeRemoveObject(Fmx::Types::TFmxObject* AObject);
	virtual Fmx::Scrollbox::TScrollContent* __fastcall CreateScrollContent();
	virtual Fmx::Controls::Model::TDataModelClass __fastcall DefineModelClass();
	virtual void __fastcall SetEnabled(const bool Value);
	virtual System::Types::TSizeF __fastcall GetDefaultSize();
	virtual void __fastcall DoBeginUpdate();
	virtual void __fastcall DoEndUpdate();
	virtual void __fastcall ImagesChanged();
	virtual bool __fastcall CanObserve(const int ID);
	virtual void __fastcall ObserverAdded(const int ID, const System::Classes::_di_IObserver Observer);
	virtual void __fastcall AfterPaint();
	
public:
	__fastcall virtual TCustomGrid(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TCustomGrid();
	virtual void __fastcall BeforeDestruction();
	virtual void __fastcall UnloadPresentation();
	__property AniCalculations;
	__property Anchors;
	__property CanFocus = {default=0};
	__property Enabled;
	__property Visible = {default=1};
	void __fastcall ClearColumns();
	TColumn* __fastcall ColumnByIndex(const int Idx);
	float __fastcall GetUnusedViewportWidth();
	bool __fastcall CellByPoint(const float X, const float Y, int &ACol, int &ARow);
	TColumn* __fastcall ColumnByPoint(const float X, const float Y);
	int __fastcall RowByPoint(const float X, const float Y);
	System::Types::TRect __fastcall CellRect(const int ACol, const int ARow)/* overload */;
	void __fastcall SelectCell(int Col, int Row);
	void __fastcall SelectColumn(const int Value);
	void __fastcall SelectRow(const int Value);
	bool __fastcall CanEdit();
	void __fastcall SetTopLeft(const int ACol, const int ARow)/* overload */;
	bool __fastcall DisplayCells(TGridModel::TCoord &TopLeft, TGridModel::TCoord &BottomRight);
	void __fastcall ScrollToSelectedCell();
	float __fastcall TextWidthToColWidth(const int ATextLength, const System::UnicodeString ACaption);
	__property TGridModel* Model = {read=GetModel};
	__property Fmx::Graphics::TTextSettings* TextSettings = {read=GetTextSettings, write=SetTextSettings};
	__property Fmx::Types::TStyledSettings StyledSettings = {read=GetStyledSettings, write=SetStyledSettings, stored=StyledSettingsStored, nodefault};
	__property Fmx::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
	__property TColumn* Columns[int Index] = {read=GetColumns};
	__property int ColumnCount = {read=GetColumnCount, nodefault};
	__property int Selected = {read=GetRow, write=SetSelected, nodefault};
	__property int TopRow = {read=GetTopRow, write=SetTopRow, nodefault};
	__property int BottomRow = {read=GetBottomRow, nodefault};
	__property int LeftColumn = {read=GetLeftColumn, write=SetLeftColumn, nodefault};
	__property int RightColumn = {read=GetRightColumn, nodefault};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, stored=false, nodefault};
	__property int ColumnIndex = {read=GetCol, write=SetCol, nodefault};
	__property int VisibleColumnCount = {read=GetVisibleColumnCount, nodefault};
	__property int VisibleRows = {read=GetVisibleRows, nodefault};
	__property bool IsUsedInBinding = {read=GetIsUsedInBinding, write=SetIsUsedInBinding, nodefault};
	__property float RowHeight = {read=GetRowHeight, write=SetRowHeight};
	__property int RowCount = {read=GetRowCount, write=SetRowCount, default=100};
	__property TGridOptions Options = {read=GetOptions, write=SetOptions, stored=OptionsStored, nodefault};
	__property bool DefaultDrawing = {read=GetDefaultDrawing, write=SetDefaultDrawing, default=1};
	__property bool EditorMode = {read=GetEditorMode, write=SetEditorMode, nodefault};
	__property int Col = {read=GetCol, write=SetCol, nodefault};
	__property int Row = {read=GetRow, write=SetRow, nodefault};
	__property THeaderClick OnHeaderClick = {read=GetOnHeaderClick, write=SetOnHeaderClick};
	__property TCellClick OnCellClick = {read=GetOnCellClick, write=SetOnCellClick};
	__property TCellClick OnCellDblClick = {read=GetOnCellDblClick, write=SetOnCellDblClick};
	__property TColumnMovedEvent OnColumnMoved = {read=GetOnColumnMoved, write=SetOnColumnMoved};
	__property TDrawColumnHeaderEvent OnDrawColumnHeader = {read=GetOnDrawColumnHeader, write=SetOnDrawColumnHeader};
	__property TSelectCell OnSelectCell = {read=GetOnSelectCell, write=SetOnSelectCell};
	__property System::Classes::TNotifyEvent OnSelChanged = {read=GetOnSelChanged, write=SetOnSelChanged};
	__property TDrawColumnCellEvent OnDrawColumnBackground = {read=GetOnDrawColumnBackground, write=SetOnDrawColumnBackground};
	__property TDrawColumnCellEvent OnDrawColumnCell = {read=GetOnDrawColumnCell, write=SetOnDrawColumnCell};
	__property TOnCallbackGetValue OnCallbackGetValue = {read=GetOnCallbackGetValue, write=SetOnCallbackGetValue};
	__property TOnGetValue OnGetValue = {read=GetOnGetValue, write=SetOnGetValue};
	__property TOnSetValue OnSetValue = {read=GetOnSetValue, write=SetOnSetValue};
	__property TCreateCustomEditorEvent OnCreateCustomEditor = {read=GetOnCreateCustomEditor, write=SetOnCreateCustomEditor};
	__property TOnEditingDone OnEditingDone = {read=GetOnEditingDone, write=SetOnEditingDone};
private:
	void *__IGlyph;	// Fmx::Actnlist::IGlyph 
	void *__IReadOnly;	// Fmx::Types::IReadOnly 
	void *__ITextSettings;	// Fmx::Graphics::ITextSettings 
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
	// {495B8B0C-D7C8-4835-AA5F-580939D21444}
	operator Fmx::Types::_di_IReadOnly()
	{
		Fmx::Types::_di_IReadOnly intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IReadOnly*(void) { return (Fmx::Types::IReadOnly*)&__IReadOnly; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FD99635D-D8DB-4E26-B36F-97D3AABBCCB3}
	operator Fmx::Graphics::_di_ITextSettings()
	{
		Fmx::Graphics::_di_ITextSettings intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Graphics::ITextSettings*(void) { return (Fmx::Graphics::ITextSettings*)&__ITextSettings; }
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


class PASCALIMPLEMENTATION TGrid : public TCustomGrid
{
	typedef TCustomGrid inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	virtual void __fastcall DoEndUpdate();
	
__published:
	__property Anchors;
	__property Align = {default=0};
	__property CanFocus = {default=0};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property ControlType = {default=0};
	__property Cursor = {default=0};
	__property DisableFocusEffect = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property HitTest = {default=1};
	__property Locked = {default=0};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property ReadOnly;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TextSettings;
	__property StyledSettings;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property RowHeight = {default=0};
	__property RowCount = {default=100};
	__property Options;
	__property Images;
	__property DefaultDrawing = {default=1};
	__property OnHeaderClick;
	__property OnColumnMoved;
	__property OnDrawColumnHeader;
	__property OnSelectCell;
	__property OnSelChanged;
	__property OnDrawColumnBackground;
	__property OnDrawColumnCell;
	__property OnGetValue;
	__property OnSetValue;
	__property OnCreateCustomEditor;
	__property OnEditingDone;
	__property OnResize;
	__property OnResized;
	__property OnCellClick;
	__property OnCellDblClick;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
public:
	/* TCustomGrid.Create */ inline __fastcall virtual TGrid(System::Classes::TComponent* AOwner)/* overload */ : TCustomGrid(AOwner) { }
	/* TCustomGrid.Destroy */ inline __fastcall virtual ~TGrid() { }
	
};


class PASCALIMPLEMENTATION TStringGridModel : public TGridModel
{
	typedef TGridModel inherited;
	
private:
	bool FCellsChanging;
	System::UnicodeString __fastcall GetCells(const int ACol, const int ARow);
	void __fastcall SetCells(const int ACol, const int ARow, const System::UnicodeString Value);
	
protected:
	virtual void __fastcall ValueChanged(const TGridModel::TCoord &ACoord);
	virtual TGridValues* __fastcall CreateCache();
	virtual System::Rtti::TValue __fastcall DoGetValue(int Col, int Row);
	virtual void __fastcall DoSetValue(int Col, int Row, const System::Rtti::TValue &Value);
	
public:
	__fastcall virtual TStringGridModel(System::Classes::TComponent* const AOwner)/* overload */;
	__property System::UnicodeString Cells[const int ACol][const int ARow] = {read=GetCells, write=SetCells};
public:
	/* TGridModel.Destroy */ inline __fastcall virtual ~TStringGridModel() { }
	
public:
	/* TMessageSender.Create */ inline __fastcall virtual TStringGridModel()/* overload */ : TGridModel() { }
	
};


class PASCALIMPLEMENTATION TStringGrid : public TCustomGrid
{
	typedef TCustomGrid inherited;
	
private:
	System::UnicodeString __fastcall GetCells(const int ACol, const int ARow);
	void __fastcall SetCells(const int ACol, const int ARow, const System::UnicodeString Value);
	HIDESBASE TStringGridModel* __fastcall GetModel()/* overload */;
	
protected:
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	virtual Fmx::Controls::Model::TDataModelClass __fastcall DefineModelClass();
	
public:
	__property TStringGridModel* Model = {read=GetModel};
	__property System::UnicodeString Cells[const int ACol][const int ARow] = {read=GetCells, write=SetCells};
	
__published:
	__property Anchors;
	__property Align = {default=0};
	__property CanFocus = {default=0};
	__property CanParentFocus = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property ControlType = {default=0};
	__property Cursor = {default=0};
	__property DisableFocusEffect = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled;
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property HitTest = {default=1};
	__property Locked = {default=0};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property ReadOnly;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property TextSettings;
	__property StyledSettings;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property RowHeight = {default=0};
	__property RowCount = {default=100};
	__property Options;
	__property DefaultDrawing = {default=1};
	__property Images;
	__property OnApplyStyleLookup;
	__property OnHeaderClick;
	__property OnColumnMoved;
	__property OnDrawColumnHeader;
	__property OnSelectCell;
	__property OnSelChanged;
	__property OnDrawColumnBackground;
	__property OnDrawColumnCell;
	__property OnCreateCustomEditor;
	__property OnEditingDone;
	__property OnResize;
	__property OnResized;
	__property OnCellClick;
	__property OnCellDblClick;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
public:
	/* TCustomGrid.Create */ inline __fastcall virtual TStringGrid(System::Classes::TComponent* AOwner)/* overload */ : TCustomGrid(AOwner) { }
	/* TCustomGrid.Destroy */ inline __fastcall virtual ~TStringGrid() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TColumnClasses : /*[[sealed]]*/ public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static System::Generics::Collections::TList__1<TColumnClass>* FRegisteredColumns;
	static bool FUninitialized;
	__classmethod void __fastcall Uninitialize();
	
public:
	__classmethod void __fastcall Register(TColumnClass const *RegColumns, const int RegColumns_High);
	__classmethod void __fastcall Unregister(TColumnClass const *RegColumns, const int RegColumns_High);
#ifndef _WIN64
	__classmethod System::DynamicArray<TColumnClass> __fastcall RegisteredColumns();
#else /* _WIN64 */
	__classmethod System::TArray__1<TColumnClass> __fastcall RegisteredColumns();
#endif /* _WIN64 */
	__classmethod bool __fastcall IsRegistered(const System::Classes::TComponentClass AClass);
public:
	/* TObject.Create */ inline __fastcall TColumnClasses() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TColumnClasses() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
static const System::Word MM_CONTENT_CHANGED = System::Word(0x1710);
static const System::Word MM_COLUMN_CHANGED = System::Word(0x1711);
static const System::Word MM_COLUMN_MOVED = System::Word(0x1712);
static const System::Word MM_SEL_CHANGED = System::Word(0x1713);
static const System::Word MM_INVALIDATE_CELL = System::Word(0x1714);
static const System::Word MM_INVALIDATE_CONTENT_SIZE = System::Word(0x1715);
static const System::Word MM_GET_ROW_HEIGHT = System::Word(0x1716);
static const System::Word MM_CELL_RECT = System::Word(0x1717);
static const System::Word MM_SHOW_EDITOR = System::Word(0x1718);
static const System::Word MM_HIDE_EDITOR = System::Word(0x1719);
static const System::Word MM_EDITOR_MODE = System::Word(0x171a);
static const System::Word MM_GET_EDITOR_VALUE = System::Word(0x171b);
static const System::Word MM_POST_EDITOR_VALUE = System::Word(0x171c);
static const System::Word MM_REFRESH_EDITOR_VALUE = System::Word(0x171d);
static const System::Word MM_GRID_USER = System::Word(0x171e);
static const System::Word PM_CREATE_CELL_OBJECT = System::Word(0x100b);
static const System::Word PM_CAN_EDIT = System::Word(0x100c);
static const System::Word PM_CELL_BY_POINT = System::Word(0x100d);
static const System::Word PM_SET_TOP_LEFT = System::Word(0x100e);
static const System::Word PM_GET_DISPLAY_CELLS = System::Word(0x100f);
static const System::Word PM_SCROLL_TO_SELECT = System::Word(0x1010);
static const System::Word PM_VKDISPLACEMENT = System::Word(0x1011);
static const System::Word PM_GRID_USER = System::Word(0x1019);
}	/* namespace Grid */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_GRID)
using namespace Fmx::Grid;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_GridHPP
