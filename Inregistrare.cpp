//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Inregistrare.h"
#include "dm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFInregistrare *FInregistrare;
//---------------------------------------------------------------------------
__fastcall TFInregistrare::TFInregistrare(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFInregistrare::SpeedButton4Click(TObject *Sender)
{
	Edit2->Text = " ";
	Edit3->Text = " ";
	Edit4->Text = " ";
	Edit5->Text = " ";
	Edit6->Text = " ";
	Edit7->Text = " ";
	Edit8->Text = " ";
	Edit9->Text = " ";
    FInregistrare->Close();
}
//---------------------------------------------------------------------------
void __fastcall TFInregistrare::SpeedButton3Click(TObject *Sender)
{
	AnsiString s;
	s = "INSERT INTO PRODUS(DENUMIRE,COD_PRODUS,AUTOR,EDITURA,COLECTIA,AN_APARITIE,NR_PAG,LIMBA)";
    s+= "VALUES(:DENUMIRE,:COD_PRODUS,:AUTOR,:EDITURA,:COLECTIA,:AN_APARITIE,:NR_PAG,:LIMBA)";

	if((Edit2->Text!=" ") && (Edit3->Text!=" ") && (Edit4->Text!=" ") && (Edit5->Text!=" ") && (Edit6->Text!=" ")  && (Edit7->Text!=" ")  && (Edit8->Text!=" ") && (Edit9->Text!=" "))
	{
		DataModule1->QProdus->Close();
		DataModule1->QProdus->SQL->Clear();
		DataModule1->QProdus->SQL->Add(s);
		DataModule1->QProdus->ParamByName("DENUMIRE")->AsString = Edit3->Text;
		DataModule1->QProdus->ParamByName("COD_PRODUS")->AsInteger = Edit2->Text.ToInt();
		DataModule1->QProdus->ParamByName("AUTOR")->AsString = Edit4->Text;
		DataModule1->QProdus->ParamByName("EDITURA")->AsString = Edit5->Text;
		DataModule1->QProdus->ParamByName("COLECTIA")->AsString = Edit6->Text;
		DataModule1->QProdus->ParamByName("AN_APARITIE")->AsInteger = Edit7->Text.ToInt();
		DataModule1->QProdus->ParamByName("NR_PAG")->AsInteger = Edit8->Text.ToInt();
		DataModule1->QProdus->ParamByName("LIMBA")->AsString = Edit9->Text;
		DataModule1->QProdus->ExecSQL();

		//afisam panelul 4
		Panel2->Visible = false;	Panel2->Enabled = false;
		Panel3->Visible = false;	Panel3->Enabled = false;
		Panel4->Visible = true;	Panel4->Enabled = true;
	}
    else ShowMessage("Nu sunt completate toate campurile!");


}
//---------------------------------------------------------------------------
void __fastcall TFInregistrare::Button1Click(TObject *Sender)
{
    Edit2->Text = " ";
	Edit3->Text = " ";
	Edit4->Text = " ";
	Edit5->Text = " ";
	Edit6->Text = " ";
	Edit7->Text = " ";
	Edit8->Text = " ";
	Edit9->Text = " ";

	Panel4->Visible = false;    Panel4->Enabled = false;
	Panel2->Visible = true;     Panel2->Enabled = true;
    Panel3->Visible = true;     Panel3->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TFInregistrare::Button2Click(TObject *Sender)
{
	Edit2->Text = " ";
	Edit3->Text = " ";
	Edit4->Text = " ";
	Edit5->Text = " ";
	Edit6->Text = " ";
	Edit7->Text = " ";
	Edit8->Text = " ";
	Edit9->Text = " ";

    Panel4->Visible = false;    Panel4->Enabled = false;
	Panel2->Visible = true;     Panel2->Enabled = true;
    Panel3->Visible = true;     Panel3->Enabled = true;
    FInregistrare->Close();
}
//---------------------------------------------------------------------------
void __fastcall TFInregistrare::FormClose(TObject *Sender, TCloseAction &Action)
{
    Edit2->Text = " ";
	Edit3->Text = " ";
	Edit4->Text = " ";
	Edit5->Text = " ";
	Edit6->Text = " ";
	Edit7->Text = " ";
	Edit8->Text = " ";
	Edit9->Text = " ";
}
//---------------------------------------------------------------------------
