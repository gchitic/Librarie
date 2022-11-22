//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Receptie.h"
#include "ReceptieCautare.hpp"
#include "ReceptCautare.h"
#include "dm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFReceptie *FReceptie;
int fac_id;
//---------------------------------------------------------------------------
__fastcall TFReceptie::TFReceptie(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFReceptie::SpeedButton6Click(TObject *Sender)
{
	FReceptCautare->ShowModal();

}
//---------------------------------------------------------------------------


void __fastcall TFReceptie::Image1Click(TObject *Sender)
{
	if((Edit2->Text!="")&&(Edit3->Text!=""))
	{
		DataModule1->FDStoredProc1->Close();
		DataModule1->FDStoredProc1->Params->Items[1]->AsDate = DateTimePicker1->Date;
		DataModule1->FDStoredProc1->Params->Items[2]->AsInteger = Edit2->Text.ToInt();
		DataModule1->FDStoredProc1->Params->Items[3]->AsString = Edit3->Text;
		DataModule1->FDStoredProc1->ExecProc();
		fac_id = DataModule1->FDStoredProc1->Params->Items[0]->AsInteger;
        ShowMessage("Factura creata cu succes!");
		Panel1->Enabled = false;    //inregistrarea facturii
        Panel3->Enabled = true; //datele facturii
	}
	else
	{
        ShowMessage("Completati campurile!");
    }
}
//---------------------------------------------------------------------------

void __fastcall TFReceptie::SpeedButton5Click(TObject *Sender)
{
	Edit2->Text = "";
    Edit3->Text = "";
	Panel1->Enabled = true;     //inregistrarea facturii
	Panel3->Enabled = false; //datele facturii
}
//---------------------------------------------------------------------------

void __fastcall TFReceptie::SpeedButton4Click(TObject *Sender)
{
	Edit2->Text = "";
	Edit3->Text = "";
	Edit4->Text = "";
	Edit5->Text = "";
	Edit6->Text = "";
    Edit7->Text = "";
    Edit8->Text = "";
	FReceptie->Close();
}
//---------------------------------------------------------------------------

void __fastcall TFReceptie::SpeedButton3Click(TObject *Sender)
{
	AnsiString s;
	s = "INSERT INTO RECEPTIE(PRODUS_ID,FACTURA_REC_ID,OPERATOR_ID,STOCK1,STOCK2,PRET_INTRARE, PRET_VANZARE)";
	s+= "VALUES(:PRODUS_ID,:FACTURA_REC_ID,:OPERATOR_ID,:STOCK1,:STOCK2,:PRET_INTRARE,:PRET_VANZARE)";

	DataModule1->QLiber->Close();
	DataModule1->QLiber->SQL->Clear();
	DataModule1->QLiber->SQL->Add(s);
	DataModule1->QLiber->ParamByName("PRODUS_ID")->AsInteger = DataModule1->QCautare->FieldByName("PRODUS_ID")->AsInteger;
	DataModule1->QLiber->ParamByName("FACTURA_REC_ID")->AsInteger = 3;//fac_id;
	DataModule1->QLiber->ParamByName("OPERATOR_ID")->AsInteger = 1; //!!!!!!!!!!
	DataModule1->QLiber->ParamByName("STOCK1")->AsInteger = Edit5->Text.ToInt();
	DataModule1->QLiber->ParamByName("STOCK2")->AsInteger = Edit6->Text.ToInt();
	DataModule1->QLiber->ParamByName("PRET_INTRARE")->AsFloat = Edit7->Text.ToDouble();
	DataModule1->QLiber->ParamByName("PRET_VANZARE")->AsFloat = Edit8->Text.ToDouble();
	DataModule1->QLiber->ExecSQL();
    ShowMessage("SUCCES");

	Edit5->Clear();
	Edit6->Clear();
	Edit7->Clear();
	Edit8->Clear();
}
//---------------------------------------------------------------------------

