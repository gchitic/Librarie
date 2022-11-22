// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ReceptieCautare.pas' rev: 31.00 (Windows)

#ifndef ReceptiecautareHPP
#define ReceptiecautareHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Variants.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Data.DB.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.DBGrids.hpp>

//-- user supplied -----------------------------------------------------------

namespace Receptiecautare
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFReceptieCautare;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TFReceptieCautare : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Extctrls::TPanel* Panel1;
	Vcl::Extctrls::TImage* Image1;
	Vcl::Stdctrls::TEdit* Edit1;
	Vcl::Stdctrls::TEdit* Edit2;
	Vcl::Stdctrls::TRadioButton* RadioButton1;
	Vcl::Stdctrls::TRadioButton* RadioButton2;
	Vcl::Stdctrls::TRadioButton* RadioButton3;
	Vcl::Stdctrls::TGroupBox* GroupBox1;
	Vcl::Buttons::TSpeedButton* SpeedButton1;
	Vcl::Buttons::TSpeedButton* SpeedButton2;
	Vcl::Extctrls::TPanel* Panel2;
	Vcl::Dbgrids::TDBGrid* DBGrid1;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TFReceptieCautare(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TFReceptieCautare(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TFReceptieCautare(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TFReceptieCautare(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TFReceptieCautare* FReceptieCautare;
}	/* namespace Receptiecautare */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_RECEPTIECAUTARE)
using namespace Receptiecautare;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ReceptiecautareHPP
