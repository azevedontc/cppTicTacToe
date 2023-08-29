//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
// current symbol to show the player turn
char currentPlayerSympol='X';
// check if game is finished and someone win
bool winnerflag=false;

// counter of number of winning of player x and o
int player_x=0,player_y=0;

//---------------------------------------------------------------------------

bool TForm1::checkWhoWin (){

if(!Button1->Text.IsEmpty() && Button1->Text==Button2->Text && Button1->Text==Button3->Text ){
return true;
}else if (!Button4->Text.IsEmpty() && Button4->Text==Button5->Text && Button4->Text==Button6->Text ) {
  return true;
}
else if (!Button7->Text.IsEmpty() && Button7->Text==Button8->Text && Button7->Text==Button9->Text ) {
  return true;
}
else if (!Button1->Text.IsEmpty() && Button1->Text==Button4->Text && Button1->Text==Button7->Text ) {
  return true;
}
else if (!Button2->Text.IsEmpty() && Button2->Text==Button5->Text && Button5->Text==Button8->Text ) {
  return true;
}
else if (!Button3->Text.IsEmpty() && Button3->Text==Button6->Text && Button6->Text==Button9->Text ) {
  return true;
}
else if (!Button1->Text.IsEmpty() && Button1->Text==Button5->Text && Button5->Text==Button9->Text ) {
  return true;
}
else if (!Button3->Text.IsEmpty() && Button3->Text==Button5->Text && Button5->Text==Button7->Text ) {
  return true;
}
else{return false;}
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
CurrentPlayerSympolLabel->Text= currentPlayerSympol;
}
//---------------------------------------------------------------------------
bool  TForm1::isDraw (){
	if(!Button1->Text.IsEmpty() &&
	!Button2->Text.IsEmpty() &&
	!Button3->Text.IsEmpty() &&
	!Button4->Text.IsEmpty() &&
	!Button5->Text.IsEmpty() &&
	!Button6->Text.IsEmpty() &&
	!Button7->Text.IsEmpty() &&
	!Button8->Text.IsEmpty() &&
	!Button9->Text.IsEmpty() )
		return true;
	else
		return false;
}

//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonClick(TObject *Sender)
{
// type casting Sender to get which button is clicked
TButton* clickedButton=dynamic_cast<TButton*>(Sender);

bool updateflag=true;

//1. Change symbol of button who is clicked and was empty
if(!winnerflag && clickedButton->Text.IsEmpty()){
clickedButton->Text=currentPlayerSympol;
}else{updateflag=false;}

//2. check if player has win
if(checkWhoWin()){
winnerLabel->Text="Player "+
String(currentPlayerSympol)+" win!!";
winnerflag=true;
PlayAgain->Visible=true;
Exit->Visible=true;
return;
}

//3. Check draw condition
if(isDraw()){
winnerLabel->Text="It's a draw!";
winnerflag=false;
PlayAgain->Visible=true;
Exit->Visible=true;
return;
}

//4. update turn of player
// bool updateflag used to ensure if same
// button clicked it will not update symbol
if(updateflag){

if (currentPlayerSympol=='X') {
	currentPlayerSympol='O';
}else if(currentPlayerSympol=='O'){
   currentPlayerSympol='X';  }

CurrentPlayerSympolLabel->Text= currentPlayerSympol;

}

}

//---------------------------------------------------------------------------

void __fastcall TForm1::intializeGame(TObject *Sender)
{
	 PlayAgain->Visible=false;
	 Exit->Visible=false;
	 winnerLabel->Text="";


	 Button1->Text="";
	 Button2->Text="";
	 Button3->Text="";
	 Button4->Text="";
	 Button5->Text="";
	 Button6->Text="";
	 Button7->Text="";
	 Button8->Text="";
	 Button9->Text="";


	 String winner=CurrentPlayerSympolLabel->Text;

	 if (winnerflag && winner=='X') {
		 player_x++;
		 playerX->Text=String(player_x);
		 currentPlayerSympol='X';
	 }else if (winnerflag && winner=='O'){
		 player_y++;
		 playerY->Text=String(player_y);
         currentPlayerSympol='O';
	 }
     CurrentPlayerSympolLabel->Text= currentPlayerSympol;
     winnerflag=false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ExitForm(TObject *Sender)
{
Form1->Close();
}
//---------------------------------------------------------------------------
