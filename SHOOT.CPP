#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
int randomy()
{

 int yf=(rand()%10)+1;
 return yf;
 }
int random()
{

 int xf=(rand()%19)+1;
 return xf;
 }
void star();
int x,xfr,yfr,y,b,gameover,score=0,xf=0,yf=0,c=0;
void setup()
{
 if(b==0){
 x=1;y=0;xf=0,yf=0,gameover=0;b++;}
 else if(x==20)
 b=0;
 else
 x++;

}
void draw()
{

  delay(120);
  clrscr();
  int j, i;
 for(i=0;i<=20;i++)
 {
  c=0;int k=500;
  for(j=0;j<=23;j++)
  {
   if(i==0 || i==20)  //border
   {
    c++;
    cout<<"#@#";
   }
   if(j==0)
   cout<<"!";
   if(xfr==i &&  j==yfr)      //star
   {
   nosound();
   cout<<"*";
   }                 //shoot
   if(xf==i)
   {
    if(xf>0)
    {
     cout<<"<--";
     c++;
     nosound();
     }
    }

    if(xf==xfr)                      //check
    {

     score=score+10;
     xfr=random();
     yfr=randomy();
   }


   if((j==19 && i==x)&&i<20)
   cout<<"   <<---";
   else
   {
    if(c==0)
    cout<<"   ";
    }
  }
       //	  delay(100);
	  cout<<endl;
	  if(yf!=0)
	  yf--;
	  }
	  cout<<"Score="<<score<<endl<<"A=Shoot  P=pause S=Resume X=Exit";

}
void input()
{
 while(kbhit())
 {
  switch(getch())
  {
  case 'x': gameover= 1;
  break;
  case 'a': if(xf==0)
	     {
	     xf=x;
	     }
	     sound(1000);
   break;
   case 'p':getch();
   case 's':break;

 }
}
}
void main()
{
 score=0;
	  xfr=random();yfr=randomy();
 clrscr();
 while(!gameover)
 {
  setup();
  draw();
  input();
 }
 getch();
}