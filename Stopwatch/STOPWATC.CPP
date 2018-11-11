#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
char choice();               //user choice
void record(int,int,int,int);   //store record
void open();              //open file
void stopwatch();        // stopwatch function
int h=0,s=0,m=0,ms=0;
void name()                 //print name
{
 cout<<endl<<endl;
// textcolor(14);
// cprintf("       Thanks For Playing...");  cout<<endl;
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
   char p=(char) s[x];
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
void main()
{
 char c;
 clrscr();
  cout<<endl<<endl<<endl<<"                                 STOP WATCH"<<endl<<endl<<endl<<endl;
  cout<<"            HOUR   :     MINUTES    :   SECONDS    :     MILISECOND"<<endl;
  cout<<"              "<<h<<"    :        "<<m<<"       :      "<<s<<"       :         "<<ms<<endl;
 cout<<endl<<endl<<endl<<"                            Press any key to START"<<endl;
 getch();
 stopwatch();
 for(int x=0;;x++)
 {
   clrscr();
   cout<<endl<<endl<<endl<<"                                 STOP WATCH"<<endl<<endl<<endl<<endl;
   cout<<"            HOUR   :     MINUTES    :   SECONDS    :     MILISECOND"<<endl;
   cout<<"              "<<h<<"    :        "<<m<<"       :      "<<s<<"       :         "<<ms<<endl;
   cout<<endl<<endl;
   c=choice();
   if(c=='R' || c=='r')
   {
     h=0;s=0;ms=0;m=0;
     stopwatch();
   }
   else if(c=='S' || c=='s')
   {
    stopwatch();
   }
   else if(c=='T' || c=='t')
   {
     break;
   }
   else if(c=='I' || c=='i')
   {
     record(h,m,s,ms);
   }
   else if(c=='V' || c=='v')
   {
    open();
   }
   else
   cout<<"Wrong Choice"<<endl;
 }
  textcolor(14);
  cprintf("Thank you using my STOPWATCH....");
  cout<<endl;
  name();
  getch();

 }
char choice()         //choice
{
   char c;
   cout<<"Press R to Restart"<<endl;
   cout<<"Press S to Resume"<<endl;
   cout<<"Press T to Terminate"<<endl;
   cout<<"Press I to Store Record"<<endl;
   cout<<"Press V to View Records"<<endl;
   cout<<"Enter your choice=";
   cin>>c;
   cout<<endl;
   return c;
}
void record(int h,int m,int s,int m1)     //store record
{
   ofstream fout;
   char a[10];int x;
   clrscr();
   fout.open("stopwatch.txt",ios::out|ios::nocreate|ios::ate);

   cout<<endl<<endl<<endl<<"                                 STOP WATCH"<<endl<<endl<<endl<<endl;
   cout<<"Enter Your  Name=";
   gets(a);
   cout<<endl;
   fout<<a<<"=  "<<h<<":"<<m<<":"<<s<<":"<<m1<<".";
   puts(a);cout<<"...Your record has been updated"<<endl;
   fout.close();
   getch();
}
void open()                           //open the record
{
 char w[50];
 ifstream fin;
 clrscr();
 fin.open("stopwatch.txt",ios::in);
 while(!fin.eof())
 {
  fin.getline(w,50,'.');
  puts(w);
  cout<<endl;
 }
 fin.close();
 getch();
}

void stopwatch()         //stopwatch function
{
 while(!kbhit())
 {
   delay(10);
   ms++;
   if(ms>99)
   {
    for(int z=1000;z<=5000;z++)
    {
    sound(z);
     nosound();
     }
   s++;
   ms=0;
   }
   if(s>59)
   {
    m++;
    s=0;
   }
   if(m>59)
   {
     h++;
     m=0;
   }
   clrscr();
  cout<<endl<<endl<<endl<<"                                 STOP WATCH"<<endl<<endl<<endl<<endl;
  cout<<"            HOUR   :     MINUTES    :   SECONDS    :     MILISECOND"<<endl;
  cout<<"              "<<h<<"    :        "<<m<<"       :      "<<s<<"       :         "<<ms<<endl;
  cout<<endl<<endl<<endl<<"                            Press ENTER to Pause"<<endl;
}
}