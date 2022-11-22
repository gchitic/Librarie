//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ReceptCautare.h"
#include "dm.h"
#include "Receptie.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFReceptCautare *FReceptCautare;
//---------------------------------------------------------------------------
__fastcall TFReceptCautare::TFReceptCautare(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFReceptCautare::Image1Click(TObject *Sender)
{
    if(Edit2!=" ")
	{
        if(RadioButton1->Checked)
		{
			DataModule1->QCautare->Close();
			DataModule1->QCautare->SQL->Clear();
			DataModule1->QCautare->SQL->Add("SELECT * FROM PRODUS WHERE DENUMIRE=:DENUMIRE");
			DataModule1->QCautare->ParamByName("DENUMIRE")->AsString = Edit2->Text;
			DataModule1->QCautare->Open();
		}
		else if(RadioButton2->Checked)
		{
			DataModule1->QCautare->Close();
			DataModule1->QCautare->SQL->Clear();
			DataModule1->QCautare->SQL->Add("SELECT * FROM PRODUS WHERE COD_PRODUS=:COD_PRODUS");
			DataModule1->QCautare->ParamByName("COD_PRODUS")->AsInteger = Edit2->Text.ToInt();
			DataModule1->QCautare->Open();
		}
		else if(RadioButton3->Checked)
		{
            DataModule1->QCautare->Close();
			DataModule1->QCautare->SQL->Clear();
			DataModule1->QCautare->SQL->Add("SELECT * FROM PRODUS WHERE AUTOR=:AUTOR");
			DataModule1->QCautare->ParamByName("AUTOR")->AsString = Edit2->Text;
			DataModule1->QCautare->Open();
        }
	}
	else ShowMessage("Completati campurile");
}
//---------------------------------------------------------------------------
void __fastcall TFReceptCautare::RadioButton2Click(TObject *Sender)
{
	Edit2->Text="";
	Edit2->TextHint="Cod produs";
}
//---------------------------------------------------------------------------
void __fastcall TFReceptCautare::RadioButton1Click(TObject *Sender)
{
    Edit2->Text="";
	Edit2->TextHint="AUTOR";
}
//---------------------------------------------------------------------------
void __fastcall TFReceptCautare::SpeedButton2Click(TObject *Sender)
{
	Edit2->Text = "";
    FReceptCautare->Close();
}
//---------------------------------------------------------------------------
void __fastcall TFReceptCautare::SpeedButton1Click(TObject *Sender)
{
	AnsiString denumire,autor;
	denumire = DataModule1->QCautare->FieldByName("DENUMIRE")->AsString;
	autor = DataModule1->QCautare->FieldByName("AUTOR")->AsString;
	FReceptie->Edit4->Text = denumire + " de " + autor;
	FReceptCautare->Close();
}
//---------------------------------------------------------------------------


