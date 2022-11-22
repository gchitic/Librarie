//---------------------------------------------------------------------------

#ifndef CautareH
#define CautareH
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
class TFCautare : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TLabel *Label1;
	TEdit *Edit1;
	TEdit *Edit2;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TRadioButton *RadioButton4;
	TRadioButton *RadioButton5;
	TImage *Image2;
	TDBGrid *DBGrid1;
	TImage *Image1;
	TRadioButton *RadioButton6;
	void __fastcall RadioButton1Click(TObject *Sender);
	void __fastcall RadioButton2Click(TObject *Sender);
	void __fastcall RadioButton3Click(TObject *Sender);
	void __fastcall RadioButton4Click(TObject *Sender);
	void __fastcall RadioButton5Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall RadioButton6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFCautare(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFCautare *FCautare;
//---------------------------------------------------------------------------
#endif
