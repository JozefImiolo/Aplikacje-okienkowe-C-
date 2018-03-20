//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

int x=-8,y=-8;
int trafionych=0;

bool kolizja( TImage * pilka, TImage * cegla)
{
     if ( pilka->Left >= cegla->Left-pilka->Width &&
          pilka->Left <= cegla->Left+cegla->Width &&
          pilka->Top >= cegla->Top-pilka->Height  &&
          pilka->Top <= cegla->Top+cegla->Height )
     { return true;}
     else return false;

}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerpilaTimer(TObject *Sender)
{
        b->Left+=x;
   b->Top+=y;

   // odbij od lewej sciany
   if(b->Left-2 <= Tlo->Left) x=-x;

   // odbij od gornej sciany
   if(b->Top-2 <= Tlo->Top) y=-y;

   // odbij od prawej sciany
   if(b->Left+b->Width+2 >= Tlo->Width) x=-x;

   //skucha

   if(b->Top >=b->Height+p->Top+10)
   {
   Timerpila->Enabled=false;
   b->Visible=false;
   Button1->Caption="Pora�ka! Jeszcze raz?";
   Button1->Visible=true;
   }
   else if (b->Left > p->Left-b->Width/2 && b->Left < p->Left+p->Width && b->Top+b->Height > p->Top)
   {
          if(y>0) y=-y;

   }
   if(trafionych==12)
   {
        Timerpila->Enabled=false;
        b->Visible=false;
        Button1->Caption="Wygrana! Jeszcze raz?";
        Button1->Visible=true;
   }
    //blok1
   if (kolizja(b, Image1) && Image1->Visible == true)
   { x=-x;    y=-y;        Image1->Visible=false;      trafionych++;    }
       //blok2
   if (kolizja(b, Image2) && Image2->Visible == true)
   { x=-x;    y=-y;        Image2->Visible=false;      trafionych++;    }
       //blok3
   if (kolizja(b, Image3) && Image3->Visible == true)
   { x=-x;    y=-y;        Image3->Visible=false;      trafionych++;    }
       //blok4
   if (kolizja(b, Image4) && Image4->Visible == true)
   { x=-x;    y=-y;        Image4->Visible=false;      trafionych++;    }
       //blok5
   if (kolizja(b, Image5) && Image5->Visible == true)
   { x=-x;    y=-y;        Image5->Visible=false;      trafionych++;    }
       //blok6
   if (kolizja(b, Image6) && Image6->Visible == true)
   { x=-x;    y=-y;        Image6->Visible=false;      trafionych++;    }
       //blok7
   if (kolizja(b, Image7) && Image7->Visible == true)
   { x=-x;    y=-y;        Image7->Visible=false;      trafionych++;    }
       //blok8
   if (kolizja(b, Image8) && Image8->Visible == true)
   { x=-x;    y=-y;        Image8->Visible=false;      trafionych++;    }
       //blok9
   if (kolizja(b, Image9) && Image9->Visible == true)
   { x=-x;    y=-y;        Image9->Visible=false;      trafionych++;    }
       //blok10
   if (kolizja(b, Image10) && Image10->Visible == true)
   { x=-x;    y=-y;        Image10->Visible=false;      trafionych++;    }
        //blok11
   if (kolizja(b, Image11) && Image11->Visible == true)
   { x=-x;    y=-y;        Image11->Visible=false;      trafionych++;    }
      //blok12
   if (kolizja(b, Image12) && Image12->Visible ==true)
   { x=-x;    y=-y;        Image12->Visible=false;      trafionych++;    }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::LewoTimer(TObject *Sender)
{
    if(p->Left > 10)
     p->Left-=10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PrawoTimer(TObject *Sender)
{
    if(p->Left + p->Width < Tlo->Width-10)
    p->Left+=10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
      if (Key == VK_LEFT) Lewo->Enabled=true;
     if (Key == VK_RIGHT) Prawo->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if (Key == VK_LEFT) Lewo->Enabled=false;
   if (Key == VK_RIGHT) Prawo->Enabled=false;
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------



void __fastcall TForm1::Button1Click(TObject *Sender)
{
   b->Left=344;
   b->Top=400;
   b->Visible=true;
   x=-8; y=-8;
   Timerpila->Enabled=true;
   Button1->Visible=false;
   trafionych=0;
   Image1->Visible=true;
   Image2->Visible=true;
   Image3->Visible=true;
   Image4->Visible=true;
   Image5->Visible=true;
   Image6->Visible=true;
   Image7->Visible=true;
   Image8->Visible=true;
   Image9->Visible=true;
   Image10->Visible=true;
   Image11->Visible=true;
   Image12->Visible=true;

}
//---------------------------------------------------------------------------

