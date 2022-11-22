//---------------------------------------------------------------------------

#ifndef ProductH
#define ProductH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFProduct : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall Image3Click(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFProduct(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFProduct *FProduct;
//---------------------------------------------------------------------------
#endif
