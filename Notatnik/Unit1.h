//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *Plik1;
        TMenuItem *Otwrz1;
        TMenuItem *Zapisz1;
        TMenuItem *Zapiszjako1;
        TMenuItem *Edycja1;
        TMenuItem *WytnijCtrlX1;
        TMenuItem *KopiujCtrlV1;
        TMenuItem *Wklej1;
        TMenuItem *Nowy1;
        TMenuItem *N1;
        TMenuItem *Format1;
        TMenuItem *Zawijaniewierszy1;
        TMenuItem *CZcionka1;
        TMenuItem *N2;
        TMenuItem *Zakocz1;
        TMemo *Tresc;
        TOpenDialog *OpenDialog1;
        TSaveDialog *SaveDialog1;
        TFontDialog *FontDialog1;
        TMenuItem *Pomoc1;
        TMenuItem *Informacje1;
        TMenuItem *OProgramie1;
        TMenuItem *Stronainternetowa1;
        void __fastcall Otwrz1Click(TObject *Sender);
        void __fastcall Zapiszjako1Click(TObject *Sender);
        void __fastcall Zapisz1Click(TObject *Sender);
        void __fastcall Nowy1Click(TObject *Sender);
        void __fastcall TrescKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Zakocz1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall WytnijCtrlX1Click(TObject *Sender);
        void __fastcall KopiujCtrlV1Click(TObject *Sender);
        void __fastcall Wklej1Click(TObject *Sender);
        void __fastcall Zawijaniewierszy1Click(TObject *Sender);
        void __fastcall CZcionka1Click(TObject *Sender);
        void __fastcall Stronainternetowa1Click(TObject *Sender);
        void __fastcall OProgramie1Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
