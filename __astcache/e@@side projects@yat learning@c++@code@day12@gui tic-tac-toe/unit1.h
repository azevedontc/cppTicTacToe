//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Edit.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	TButton *Button8;
	TButton *Button9;
	TLabel *Label1;
	TLabel *CurrentPlayerSympolLabel;
	TLabel *winnerLabel;
	TButton *Button2;
	TLabel *Label2;
	TButton *PlayAgain;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *playerX;
	TLabel *playerY;
	TButton *Exit;
	void __fastcall ButtonClick(TObject *Sender);
	void __fastcall intializeGame(TObject *Sender);
	void __fastcall ExitForm(TObject *Sender);

private:	// User declarations
	bool checkWhoWin ();
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
