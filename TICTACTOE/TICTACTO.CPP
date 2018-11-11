#include<stdlib.h>
#include<dos.h>
#include<string.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
void displays()               //print *
{       textcolor(((rand()%14)+2));
	int x,z=1;
	for(x=0;x<22;x++)
	{
	  if(z==15)
	  z=x;
	 // displays();

	  textcolor(z);
	  cprintf("*");
	  z++;
	  if(z==0)
	  z++;
	}


	z=15;
		for(x=0;x<22;x++)
	{
	  if(z==1)
	  z=15;
	  textcolor(z);
	  cprintf("*");
	  z--;
	}
	cout<<endl<<endl;

 }

void board();
void textcolor(int a=2);
int check();
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
 void display()
 {
   int k=  ((rand()%15)+1);
	   textcolor(k);
	  // textcolor(***);
	cprintf("                                 TIC-TAC-TOE");
	cout<<endl;
	cout<<"              ";
	displays();
 }
void name()                 //print name
{
 cout<<endl<<endl;
 textcolor(14);
 cprintf("       Thanks For Playing...");  cout<<endl;
 char* s[]={"S","A","Y","A","N","T","A","N"};
 char* g[]={"G","H","O","S","H"};
 int x;
 textcolor(05);
 cprintf("Created By=");
 cout<<endl;
 cout<<"             ";


 for(x=0;x<8;x++)
 {
   textcolor(x+2);
  // char p=(char) s[x];
   cprintf(s[x]);
   cout<<" ";
   delay(900);
   }
   cout<<endl<<"                ";
   for(x=0;x<5;x++)
   {
    textcolor(x+2);
    cprintf(g[x]);cout<<" ";
    delay(900);
    }
 //  puts(s);cout<<" ";
 //  delay(500);
 }
  char p1[10],p2[10];

void main()
{
 clrscr();
 display();
 cout<<endl<<endl;
 cout<<"Enter the Name of Player 1:-";
 gets(p1);
 cout<<"Enter the Name of Player 2:-";
 gets(p2);
 textcolor();
 clrscr();
 board();
 int player=1,i,choice;
 char mark;
 do
 {
   board();
   player=(player%2)?1:2;
   textcolor(14);
   if(player==1)
   cprintf(p1);
   else
   cprintf(p2);
   cout<<" enter your choice= ";
   textcolor(2);
   cin>>choice;


   mark=(player==1)?'X':'O';
   if(choice==1 && square[1]=='1')
    square[1]=mark;
   else if(choice==2 && square[2]=='2')
    square[2]=mark;
   else if(choice==3 && square[3]=='3')
    square[3]=mark;
   else if(choice==4 && square[4]=='4')
    square[4]=mark;
   else if(choice==5 && square[5]=='5')
    square[5]=mark;
   else if(choice==6 && square[6]=='6')
    square[6]=mark;
   else if(choice==7 && square[7]=='7')
    square[7]=mark;
  else if(choice==8 && square[8]=='8')
    square[8]=mark;
  else if(choice==9 && square[9]=='9')
    square[9]=mark;
  else
  {
   cout<<"Sorry!!Invalid Move";
   player--;
   getch();
  }
   i=check();
   player++;
 }
  while(i==-1);
  board();
  if(i==1)
  {
    player--;
    textcolor(14);
    if(player==1)
    {
    cprintf(p1);cout<<" win";
    }
    else
     {
    cprintf(p2);cout<<" win";
     }
  }

  else
   {
    textcolor(14);
   cprintf("Match Draw");
   }
   cout<<endl;
   name();
  getch();
}
int check()
{
  if(square[1]==square[2] && square[2]==square[3]||
     square[4]==square[5] && square[5]==square[6]||
     square[7]==square[8] && square[8]==square[9]||
     square[1]==square[5] && square[5]==square[9]||
     square[3]==square[5] && square[5]==square[7]||
     square[2]==square[5] && square[5]==square[8]||
     square[1]==square[4] && square[4]==square[7]||
     square[3]==square[6] && square[6]==square[9])
     return 1;
 else if(square[1]!='1'&&
	 square[2]!='2' &&
	 square[3]!='3' &&
	 square[4]!='4' &&
	 square[5]!='5' &&
	 square[6]!='6' &&
	 square[7]!='7' &&
	 square[8]!='8' &&
	 square[9]!='9'  )
	 return 0;
 else
	 return -1;
 }

void board()
{
 clrscr();
 display();
 textcolor();
 cprintf(p1);
 cout<<"...... You Are X And         ";cprintf(p2);
 cout<<"........ you are O \n \n";
 cprintf("      |       |      ");cout<<endl;
 cprintf("  ");cout<<square[1];cprintf("   |   ");cout<<square[2];cprintf("   |  ");cout<<square[3];cout<<"   "<<endl;
 cprintf("      |       |      ");cout<<endl;
 cprintf("--------------------");cout<<endl;
 cprintf("      |       |      ");cout<<endl;
  cprintf("  ");cout<<square[4];cprintf("   |   ");cout<<square[5];cprintf("   |  ");cout<<square[6];cout<<"   "<<endl;
  cprintf("      |       |      ");cout<<endl;
 cprintf("--------------------");cout<<endl;
 cprintf("      |       |      ");cout<<endl;
 cprintf("  ");cout<<square[7];cprintf("   |   ");cout<<square[8];cprintf("   |  ");cout<<square[9];cout<<"   "<<endl;
   cprintf("      |       |      ");cout<<endl;

}
