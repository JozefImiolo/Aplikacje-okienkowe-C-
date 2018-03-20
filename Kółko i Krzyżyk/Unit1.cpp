//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TKiK *KiK;
        char p1,p2,p3,p4,p5,p6,p7,p8,p9;
        //p1..p9 pola w grze (ich zawartosc: p1='n'; nic lub 'x' lub 'o')
        char kto;
 __fastcall TKiK::TKiK(TComponent* Owner)
        : TForm(Owner)
{

}

        void tworzenie_planszy()
        {
        KiK->Pole1->Picture->LoadFromFile("img/nic.bmp");
        KiK->Pole2->Picture->LoadFromFile("img/nic.bmp");
        KiK->Pole3->Picture->LoadFromFile("img/nic.bmp");
        KiK->Pole4->Picture->LoadFromFile("img/nic.bmp");
        KiK->Pole5->Picture->LoadFromFile("img/nic.bmp");
        KiK->Pole6->Picture->LoadFromFile("img/nic.bmp");
        KiK->Pole7->Picture->LoadFromFile("img/nic.bmp");
        KiK->Pole8->Picture->LoadFromFile("img/nic.bmp");
        KiK->Pole9->Picture->LoadFromFile("img/nic.bmp");
        KiK->Tura->Picture->LoadFromFile("img/osmall.bmp");
        p1='n';     p2='n';  p3='n';
        p4='n';     p5='n';  p6='n';
        p7='n';     p8='n';  p9='n';

         kto='o';

          KiK->Pole1->Enabled=true;
          KiK->Pole2->Enabled=true;
          KiK->Pole3->Enabled=true;
          KiK->Pole4->Enabled=true;
          KiK->Pole5->Enabled=true;
          KiK->Pole6->Enabled=true;
          KiK->Pole7->Enabled=true;
          KiK->Pole8->Enabled=true;
          KiK->Pole9->Enabled=true;
         }
        void sprawdz()
        {
            if ((p1==p2 && p1==p3 && p1!='n') ||  (p4==p5 && p4==p6 && p4!='n') ||
              (p7==p8 && p7==p9 && p7!='n') ||  (p1==p4 && p1==p7 && p1!='n') ||
              (p2==p5 && p2==p8 && p2!='n') ||  (p3==p6 && p3==p9 && p3!='n') ||
              (p1==p5 && p1==p9 && p1!='n') ||  (p3==p5 && p3==p7 && p3!='n'))
              {
              char *w;
                 if(kto=='x')
                 {
                   w="Wygra³o kó³ko. Gratulacje";
                 }
                 else
                 {
                   w="Wygra³ krzy¿yk. Gratulacje";
                 }
                 Application->MessageBox(w, "Koniec gry", MB_OK);
                 tworzenie_planszy();

              }

        }

//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TKiK::FormCreate(TObject *Sender)
{
          tworzenie_planszy();

}
//---------------------------------------------------------------------------
void __fastcall TKiK::Pole1Click(TObject *Sender)
{
         if(p1=='n')
         {
                if(kto=='o')
                {
                   Pole1->Picture->LoadFromFile("img/o.bmp");
                   p1='o';
                   kto='x';
                   Tura->Picture->LoadFromFile("img/xsmall.bmp");

                }
                else
                {
                   Pole1->Picture->LoadFromFile("img/x.bmp");
                   p1='x';
                   kto='o';
                   Tura->Picture->LoadFromFile("img/osmall.bmp");
                }
         Pole1->Enabled=false;
         sprawdz();
         }


}
//---------------------------------------------------------------------------
void __fastcall TKiK::Pole2Click(TObject *Sender)
{
       if(p2=='n')
         {
                if(kto=='o')
                {
                   Pole2->Picture->LoadFromFile("img/o.bmp");
                   p2='o';
                   kto='x';
                   Tura->Picture->LoadFromFile("img/xsmall.bmp");

                }
                else
                {
                   Pole2->Picture->LoadFromFile("img/x.bmp");
                   p2='x';
                   kto='o';
                   Tura->Picture->LoadFromFile("img/osmall.bmp");
                }
         Pole2->Enabled=false;
         sprawdz();
         }
}
//---------------------------------------------------------------------------
void __fastcall TKiK::Pole3Click(TObject *Sender)
{
            if(p3=='n')
         {
                if(kto=='o')
                {
                   Pole3->Picture->LoadFromFile("img/o.bmp");
                   p3='o';
                   kto='x';
                   Tura->Picture->LoadFromFile("img/xsmall.bmp");

                }
                else
                {
                   Pole3->Picture->LoadFromFile("img/x.bmp");
                   p3='x';
                   kto='o';
                   Tura->Picture->LoadFromFile("img/osmall.bmp");
                }
         Pole3->Enabled=false;
         sprawdz();
         }
}
//---------------------------------------------------------------------------
void __fastcall TKiK::Pole4Click(TObject *Sender)
{
       if(p4=='n')
         {
                if(kto=='o')
                {
                   Pole4->Picture->LoadFromFile("img/o.bmp");
                   p4='o';
                   kto='x';
                   Tura->Picture->LoadFromFile("img/xsmall.bmp");

                }
                else
                {
                   Pole4->Picture->LoadFromFile("img/x.bmp");
                   p4='x';
                   kto='o';
                   Tura->Picture->LoadFromFile("img/osmall.bmp");
                }
         Pole4->Enabled=false;
         sprawdz();
         }
}
//---------------------------------------------------------------------------
void __fastcall TKiK::Pole5Click(TObject *Sender)
{
       if(p5=='n')
         {
                if(kto=='o')
                {
                   Pole5->Picture->LoadFromFile("img/o.bmp");
                   p5='o';
                   kto='x';
                   Tura->Picture->LoadFromFile("img/xsmall.bmp");

                }
                else
                {
                   Pole5->Picture->LoadFromFile("img/x.bmp");
                   p5='x';
                   kto='o';
                   Tura->Picture->LoadFromFile("img/osmall.bmp");
                }
         Pole5->Enabled=false;
         sprawdz();
         }
}
//---------------------------------------------------------------------------
void __fastcall TKiK::Pole6Click(TObject *Sender)
{
       if(p6=='n')
         {
                if(kto=='o')
                {
                   Pole6->Picture->LoadFromFile("img/o.bmp");
                   p6='o';
                   kto='x';
                   Tura->Picture->LoadFromFile("img/xsmall.bmp");

                }
                else
                {
                   Pole6->Picture->LoadFromFile("img/x.bmp");
                   p6='x';
                   kto='o';
                   Tura->Picture->LoadFromFile("img/osmall.bmp");
                }
         Pole6->Enabled=false;
         sprawdz();
         }
}
//---------------------------------------------------------------------------
void __fastcall TKiK::Pole7Click(TObject *Sender)
{
       if(p7=='n')
         {
                if(kto=='o')
                {
                   Pole7->Picture->LoadFromFile("img/o.bmp");
                   p7='o';
                   kto='x';
                   Tura->Picture->LoadFromFile("img/xsmall.bmp");

                }
                else
                {
                   Pole7->Picture->LoadFromFile("img/x.bmp");
                   p7='x';
                   kto='o';
                   Tura->Picture->LoadFromFile("img/osmall.bmp");
                }
         Pole7->Enabled=false;
         sprawdz();
         }
}
//---------------------------------------------------------------------------
void __fastcall TKiK::Pole8Click(TObject *Sender)
{
       if(p8=='n')
         {
                if(kto=='o')
                {
                   Pole8->Picture->LoadFromFile("img/o.bmp");
                   p8='o';
                   kto='x';
                   Tura->Picture->LoadFromFile("img/xsmall.bmp");

                }
                else
                {
                   Pole8->Picture->LoadFromFile("img/x.bmp");
                   p8='x';
                   kto='o';
                   Tura->Picture->LoadFromFile("img/osmall.bmp");
                }
         Pole8->Enabled=false;
         sprawdz();
         }
}
//---------------------------------------------------------------------------
void __fastcall TKiK::Pole9Click(TObject *Sender)
{
       if(p9=='n')
         {
                if(kto=='o')
                {
                   Pole9->Picture->LoadFromFile("img/o.bmp");
                   p9='o';
                   kto='x';
                   Tura->Picture->LoadFromFile("img/xsmall.bmp");

                }
                else
                {
                   Pole9->Picture->LoadFromFile("img/x.bmp");
                   p9='x';
                   kto='o';
                   Tura->Picture->LoadFromFile("img/osmall.bmp");
                }
         Pole9->Enabled=false;
         sprawdz();
         }
}
//---------------------------------------------------------------------------

