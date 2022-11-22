//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
#include "dm.h"
#include "Product.h"
#include "Receptie.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFMain *FMain;
TDateTime DT;
//---------------------------------------------------------------------------
__fastcall TFMain::TFMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TFMain::Timer1Timer(TObject *Sender)
{
    Label19->Caption=DT.CurrentTime();
}
//---------------------------------------------------------------------------

void __fastcall TFMain::FormShow(TObject *Sender)
{
    Label20->Caption=DT.CurrentDate();
}
//---------------------------------------------------------------------------

void __fastcall TFMain::Image8Click(TObject *Sender)
{
	FProduct->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TFMain::Image9Click(TObject *Sender)
{
    FReceptie->ShowModal();
}
//---------------------------------------------------------------------------

