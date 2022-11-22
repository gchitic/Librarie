//---------------------------------------------------------------------------

#ifndef EditH
#define EditH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TFEdit : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TLabel *Label1;
	TEdit *Edit1;
	TImage *Image1;
	TImage *Image2;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TEdit *Edit8;
	TEdit *Edit9;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton4;
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall SpeedButton4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFEdit(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFEdit *FEdit;
//---------------------------------------------------------------------------
#endif
