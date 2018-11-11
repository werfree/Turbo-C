#include<ctype.h>
#include<dos.h>
#include<string.h>
#include<stdlib.h>
#include<fstream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<time.h>
void star();
void textcolor(int a=14);
void textbackground(int a);
int over();
int run(char ,int );
void toss();
void bat(int s);
void ball(int);
void display();
void name();
void open();
int cr=0,pr=0;char wiz[10];
void record(int c,int p,char w[20])     //store record
{
   ofstream fout;
   int a;
   if(c>p)
   a=1;
   else if(c<p)
   a=2;
   else
   a=0;
   fout.open("HandCricket.txt",ios::out|ios::nocreate|ios::ate);
   fout<<w<<"=  "<<p<<"  Computer= "<<c;
   textcolor(14);
   if(a==1)
   fout<<"    Computer Won the Match"<<".";
   else if(a==2)
   fout<<"    "<<w<<" Won the Match"<<".";
   else
   fout<<"Match Draw"<<".";
   fout.close();
   star();
}
void open()                           //open the record
{
 char w[50];
 ifstream fin;
 clrscr();
 fin.open("HandCricket.txt",ios::in);
 while(!fin.eof())
 {
  fin.getline(w,50,'.');
  puts(w);
  cout<<endl;
 }
 fin.close();
 getch();
}
void name()                 //print name
{
 cout<<endl<<endl;
 textcolor(14);
// cprintf("       Thanks For Playing...");
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
   cprintf(s[x]);
   cout<<" ";
   delay(700);
   }
   cout<<endl<<"                ";
   for(x=0;x<5;x++)
   {
    textcolor(x+2);
    cprintf(g[x]);cout<<" ";
    delay(700);
    }
 }
 void displays()
 {
   int k=  ((rand()%15)+1);
	   textcolor(k);
	cprintf("WELCOME TO THE WORLD OF CRICKET");
 }
void cbat(char c,int o,int r)          //end of over
{
 if(c=='p')
 {
  cout<<"I need "<<r<<" Runs in "<<o<<"balls...."<<endl;

 }
 else
 {
   cout<<"You need "<<r<<" Runs in "<<o<<"balls....."<<endl;

 }
}
void ran()                      //random
{
 clrscr();
 int randnum,x;
 time_t t;
 unsigned int s;
 s=(unsigned)time(&t);
 srand(s);
}

int run(char c,int s)           //1st innings
{

  int j=1, i, x,zx=0,y,p,tot=0;
  int o= 6*s;
  clrscr();
  display();
  textcolor(14);
  cprintf("The Games Begins");
  for(x=1;x<=o;x++)
  {
   for(i=0;;i++)
   {
       int s;
    cout<<'\n'<<" Your Turn=";
    cin>>y;
    s=(int)y;
    y=s;
    if(y<=6)
    break;
    else
    {
     if(c=='p')
    cout<<"Wooo...The ball Flew off the Field..Plese try to hit within 6..";
     else
       cout<<"Wooo...You Are Throwing The Ball..Please hit within 6";
    }
  }

       cout<<endl;
    ran();
    p=((rand()%6)+1);
    if(j>15)
    j=1;

	    display();
    textcolor(j);
    cprintf("Your=");cout<<y;
    cout<<'\n';cprintf("Computer=");cout<<p;
    j++;
    cout<<endl;
    if(p!=y)
    {
    if(c=='p')
    tot=tot+y;
    else
    tot=tot+p;
    cout<<'\n'<<"Over="<<(int)(x/6)<<"."<<(x%6)<<endl<<"Run="<<tot<<endl;
    if((x%6)==0)
    {
     clrscr();
     display();
     cout<<'\n'<<"Over="<<(int)(x/6)<<"."<<(x%6)<<endl<<"Run="<<tot<<endl;
    }
  }
  if(p==y || x==o)
  {
   if(x==o)
   {
    textcolor(01);
    cout<<"Its Time To Turn The Table.."<<endl;
    delay(1000);
    zx++;
    break;
   }
   if(p==y)
   {
     if(c=='p')
     {
      textcolor(04);
      cout<<endl;
      cprintf("Sorry man you are OUT");cout<<endl;
      zx++;
      delay(5000);
      clrscr();
      break;
     }
     else
     {
      textcolor(04);
      cprintf("Congo...I am out..you are a great bowler...");cout<<endl;
      zx++;
      delay(5000);
      break;
     }
   }
     if(zx!=0)
     break;
 }
}
 if(c=='p')
 pr=tot;
 else
 cr=tot;
tot++;
	clrscr();
	return tot;
 }
void crat(char c,int s,int z) //2nd innings
{

  int i,w=0,d=0,j=2, x,y,p,tot=0;
  int o= 6*s;
  char ch;
  clrscr();
  display();
  for(x=0;;x++)
  {
    if(c=='p')
    {
      cout<<"Are you Ready to defend your runs??(Y/N)";
      cin>>ch;
    }
    else
    {
      cout<<'\n'<<"Are You Ready to Chase Your Target??(Y/N)";
      cin>>ch;
    }
      if(ch=='y' || ch=='Y')
      break;
  } //
  clrscr();
   display();
  ch=' ';
  for(x=1;x<=o;x++)
  {
   for(i=0;;i++)
   {
     int zs=0;
    cout<<'\n'<<" Your Turn=";
    cin>>y;
    zs=(int)y;
    y=zs;
    if(i==6)
    exit(0);

   else if(y<=6)
    break;
   else
   {
    if(c=='p')

    cout<<"Wooo...The ball Flew off the Field..Plese try to hit within 6..";
     else
       cout<<"Wooo...You Are Throwing The Ball..Please hit within 6";

    }

  }

       cout<<endl;
    ran();
    p=((rand()%6)+1);
    cout<<'\n'<<"Computer="<<p;
    if(j>15)
    j=1;
    clrscr();
    display();
    textcolor(j);
    cprintf("Your=");cout<<y;
    cout<<'\n';cprintf("Computer=");cout<<p;
    j++;
    cout<<endl;
    if(p==y)
    break;
    else if(p!=y)
    {
      if(c=='p')
      tot=tot+p;
      else
      tot=tot+y;
      cout<<'\n'<<"Over="<<(int)(x/6)<<"."<<(x%6)<<endl<<"Run="<<tot<<endl;
      int l=z-tot;
      int g=o-x;
      if(tot>=z)
      {
	w++;break;
      }
      else if(o==x)
      {
	d++;
	break;
      }

       cbat(c,g,l);
    }
  }
    if(w>0)
    {

   if(c=='p')
    {
     textcolor(04);
      cprintf("I won the Match..");cout<<endl;
      cout<<endl<<"  Even before I started I knew I would win..."<<endl;
      cout<<endl<<endl;
      cprintf("     Losing is essential for anyone's sucess.");cout<<endl;cprintf("The more you lose,the More you want To win......");cout<<endl;
    }
   else
   {
     cout<<"You are The Winner....." ;
     cout<<endl<<endl;
     cout<<"TALENT wins GAMES"<<endl<<"               but TEAMWORK wins CHAMPIONSHIPs";
   }
   }//2
  if(d>0 || p==y)
  {
    if(p==(z-1))
    cout<<"Match Draw"<<endl;
    if(d>0)
    {
     if(c=='p')
     {
	textcolor(14);
	cout<<endl;
	cprintf("Sorry...Man You lose the match");cout<<endl;
     cout<<endl<<endl;
     cprintf("A winner is a DREAMER who never gives up...");
     }

     else
     {

       cout<<endl<<"You are lucky......"<<endl<<endl;
     cprintf("Congrats you won....  Its not how you starts.Its how you finish...0");
     }
    }
   else if(p==y)
   {

    if(c=='p')
    {

     textcolor(14);
     cout<<endl<<"You are lucky......"<<endl<<endl;
     cprintf("Congrats you won....  Its not how you starts.Its how you finish...");

    }
    else
    {
	cprintf("Sorry...Man You lose the match");cout<<endl;
     cout<<endl<<endl;
     cprintf("A winner is a DREAMER who never gives up...");
    }
  }
}
  if(c=='p')
  cr=cr+tot;
  else
  pr=pr+tot;
   cout<<endl<<endl;
  // int g=0,l=1;
     star();
     record(cr,pr,wiz);
 }
 void star()
 {
  int g=0,l=0;
     for(g=0;g<40;g++)
   {

     textcolor(l);
     if(l==15)
     l=1;
     else
     l++;
     cprintf("*_");
   }
 }
int over()
{
	cprintf("No of Overs=");

	float o;int zs;
	cin>>o;
	zs=(int)o;

	return(zs);
}
void display()               //print *
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
	displays();

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
void toss()            //toss
{
	 int s,c, k,x;
	char b,t;
	 clrscr();
	 display();
	 cout<<"Enter Your Name=";
	 gets(wiz);
	 clrscr();
	 display();
	 cout<<"Hello ";puts(wiz);cout<<endl<<"       Let's the game begin...."<<endl;
	 s=over();
	cout<<"Enter O for ODD or E for EVE-";
	cin>>t;
 rand();
 c=((rand()%2)+1);
 //random choice
/* clrscr();
 cout<<"TOSSING...."
 cout<<endl;
 for(int d=0;d<5;d++)
 {
    cout<<"        ";
    if(
  */
 for(x=0;x<3;x++)
 {
	   if(t=='O' || t=='o')
	   {
	     if(c==1)
	    {
	    cout<<"Its ODD"<<endl ;
	    cout<<"Do You Wanna Bat first?(y/n):-";
	    cin>>b;
	    if(b=='Y' || b=='y')
	     bat(s);
	     else
	     ball(s);
	    }
	    else
	    {
	     cout<<"Sorry Man Its EVEN"<<endl;
	     delay(1000);
	     rand();
	     int z=((rand()%2)+1);;
	     if(z==1)
	     bat(s);
	     else
	    ball(s);
	    }
	   }
	    else if(t=='E' || t=='e')
	    {
	     if(c==2)
	     {
	      cprintf("Its Even");cout<<endl;
	     cprintf("Do You Wanna Bat first?(y/n):-");
	     cin>>b;
	     cout<<b;
	     if(b=='y' || b=='Y')
	      bat(s);
	     else
	      ball(s);
	    }
	     else
	     {
	      cprintf("Sorry Man Its ODD");cout <<endl;
	      delay(4000);
	      rand();
	     int gh=(rand()%2)+1;
	     if(gh==1)
	     {
	      bat(s);
	     }
	     else
	     {
	       cprintf("The ball is in your hand...");cout<<endl;

	      ball(s);
	     }
	    }
	    }
	   else
	   {
	   cout<<"IT's A WORNG CHOICE"<<endl;
	   cout<<"Enter E for EVEN or O for ODD";
	   cin>>t;
	   continue;
	   }
    break;
}
}
   void bat(int s)                //bat first
   {

     int x,i,k;char t;

      cout<<'\n'<<"You Need TO Set The Target"<<endl;


     for(x=0;;x++)
     {
      cout<<"Are You Ready (y/n)=";
      cin>>t;
      if(t=='y' || t== 'Y')
      {
       clrscr();
       display();
	textcolor(06);
	cprintf("This Format Of Game Is Like Playing Book Cricket");cout<<endl;cprintf("Every Page You Open You Get 4s and 6s");cout<<endl;
	cout<<endl<<"LoAdInG..........."<<endl;
	delay(5000);
       break;
       }
     }
      int z= run('p',s);
      display();
      cout<<'\n'<<"I need to score "<<z<<"Runs in "<<s<<"over to prove I am Better than You";
      delay(5000);
      clrscr();
      crat('p',s,z);


    }
  void ball(int s)     //user ball first
   {
      int z, x,i,k;char t;
     clrscr();
     display();
     cout<<"ITS YOUR TIME To BALL ";
     cout<<endl;
     cprintf("             A Grand Adventure Is About To Begin....");cout<<endl<<endl;
     for(x=0;;x++)
     {
      cout<<"Are You Ready (y/n)=";
      cin>>t;
      if(t=='y' || t== 'Y')
      {
       clrscr();
       display();


      break;
      }
      }
      z=run('c',s);
      display();
     cout<<'\n'<<"You Need "<<z<<"Runs To Win In "<<s<<"overs";
     delay(5000);
    crat('c',s,z);


 }
int menu()
{
int a=0,ch2=0;
 textcolor(14);
 while(a<1 || a>3)
 {
  if(ch2>0)
  {
   clrscr();display();
  cout<<"Wrong Choice"<<endl;
  }
 cout<<"Enter 1 for new game"<<endl;
 cout<<"Enter 2 for scoreboard"<<endl;
 cout<<"Enter 3 to exit"<<endl;
 cout<<"Enter Your Choice=";
 cin>>a;ch2++;
 }
 return a;
}
void main()
{
 clrscr();
 int x, rad,k,ch3;
 char r;

// int z=1;

  display();
 cout<<endl<<endl;
 textcolor(14);
 cprintf("A gun is more DANGEROUS than a CRICKET BAT in the Hands of a MADMAN");cout<<endl;
 cout<<endl<<endl;
 for(int i=0;;i++)
 {
  ch3=menu();
  if(ch3==1)
  {
   toss();
   ch3=menu();
  }
  if(ch3==2)
  {
  open();
  star();
  }
  if( ch3==3)
  {
    clrscr();
    display();
      textcolor(11);
    cout<<endl<<endl;
   cprintf("Thank you...");cout<<endl<<"    ";
   cprintf(" You Gifted Me the Most Beautiful thing of all!!...YOUR......TIME.");cout<<endl;
       name();
       break;
       }
    }

 getch();
 }
