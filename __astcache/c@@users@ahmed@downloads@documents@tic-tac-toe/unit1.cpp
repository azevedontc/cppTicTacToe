//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
char currentPlayerSympol='X';
bool winnerflag=false;

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
void __fastcall TForm1::ButtonClick(TObject *Sender)
{
// type casting Sender to get which button is clicked
TButton* clickedButton=dynamic_cast<TButton*>(Sender);

bool flag=true;

//1. Change symbol of button who clicked
if(!winnerflag && clickedButton->Text!='X' && clickedButton->Text!='O'){
clickedButton->Text=currentPlayerSympol;
}
else{flag=false;}

//2. check if player has won
if(checkWhoWin()){
winnerLabel->Text="You win!!";
winnerflag=true;
return;
}

//update turn of player
if(flag){

if (currentPlayerSympol=='X') {
	currentPlayerSympol='O';
}else if(currentPlayerSympol=='O'){
   currentPlayerSympol='X';  }

CurrentPlayerSympolLabel->Text= currentPlayerSympol;
}

}
//---------------------------------------------------------------------------


