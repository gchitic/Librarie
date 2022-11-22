//---------------------------------------------------------------------------

#ifndef InregistrareH
#define InregistrareH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TFInregistrare : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TImage *Image1;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Edit2;
	TLabel *Label3;
	TEdit *Edit3;
	TLabel *Label4;
	TEdit *Edit4;
	TLabel *Label6;
	TEdit *Edit5;
	TLabel *Label5;
	TEdit *Edit6;
	TLabel *Label7;
	TEdit *Edit7;
	TLabel *Label8;
	TEdit *Edit8;
	TLabel *Label9;
	TEdit *Edit9;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton4;
	TPanel *Panel4;
	TLabel *Label10;
	TLabel *Label11;
	TButton *Button1;
	TButton *Button2;
	void __fastcall SpeedButton4Click(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TFInregistrare(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFInregistrare *FInregistrare;
//---------------------------------------------------------------------------
#endif
