//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("Product.cpp", FProduct);
USEFORM("Receptie.cpp", FReceptie);
USEFORM("Main.cpp", FMain);
USEFORM("dm.cpp", DataModule1); /* TDataModule: File Type */
USEFORM("Cautare.cpp", FCautare);
USEFORM("Inregistrare.cpp", FInregistrare);
USEFORM("Edit.cpp", FEdit);
USEFORMNS("ReceptieCautare.pas", Receptiecautare, FReceptieCautare);
USEFORM("ReceptCautare.cpp", FReceptCautare);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->Title = "Magazin";
		TStyleManager::TrySetStyle("Charcoal Dark Slate");
		Application->CreateForm(__classid(TFMain), &FMain);
		Application->CreateForm(__classid(TDataModule1), &DataModule1);
		Application->CreateForm(__classid(TFProduct), &FProduct);
		Application->CreateForm(__classid(TFCautare), &FCautare);
		Application->CreateForm(__classid(TFEdit), &FEdit);
		Application->CreateForm(__classid(TFReceptie), &FReceptie);
		Application->CreateForm(__classid(TFInregistrare), &FInregistrare);
		Application->CreateForm(__classid(TFReceptieCautare), &FReceptieCautare);
		Application->CreateForm(__classid(TFReceptCautare), &FReceptCautare);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
