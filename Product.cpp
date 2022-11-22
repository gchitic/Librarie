//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Product.h"
#include "Cautare.h"
#include "Edit.h"
#include "Inregistrare.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFProduct *FProduct;
//---------------------------------------------------------------------------
__fastcall TFProduct::TFProduct(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFProduct::Image1Click(TObject *Sender)
{
    FCautare->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFProduct::Image3Click(TObject *Sender)
{
    FEdit->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFProduct::Image2Click(TObject *Sender)
{
    FInregistrare->ShowModal();
}
//---------------------------------------------------------------------------

