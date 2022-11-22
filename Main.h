//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TFMain : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	TImage *Image1;
	TLabel *Label1;
	TImage *Image2;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TPanel *Panel5;
	TPanel *Panel6;
	TImage *Image3;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TPanel *Panel7;
	TPanel *Panel8;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label13;
	TPanel *Panel9;
	TPanel *Panel10;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label16;
	TImage *Image4;
	TImage *Image5;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TPanel *Panel11;
	TLabel *Label17;
	TLabel *Label18;
	TImage *Image6;
	TImage *Image7;
	TLabel *Label19;
	TLabel *Label20;
	TLabel *Label21;
	TLabel *Label22;
	TLabel *Label23;
	TLabel *Label24;
	TDBGrid *DBGrid1;
	TTimer *Timer1;
	TImage *Image8;
	TImage *Image9;
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Image8Click(TObject *Sender);
	void __fastcall Image9Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFMain *FMain;
//---------------------------------------------------------------------------
#endif
