 #include<iostream.h>
 #include<conio.h>
int top=-1;const int size=5;
 int st[size];
 void head();
 void push(int n)
 {
 head();
 if(top==size-1)
 cout<<"overflow"<<endl;
 else
 {
 top++;
 st[top]=n;
 cout<<n<<" has been push into the stack"<<endl<<endl;
 }
 }
 void pop()
 {
 head();
 if(top==-1)
 cout<<"underflow"<<endl;
 else
 {
 cout<<"deleted value="<<st[top]<<endl;
 top--;
 }
 }
 void display()
 {
  head();
 if(top==-1)
 cout<<"underflow"<<endl;
 else
 {
  cout<<"Element in stack:";
 for(int i=top;i>=0;i--)
 cout<<st[i]<<" ";
 }
 }
 void head()
 {

  cout<<"                     Stack"<<endl<<endl;
 }
 void main()
 {
   clrscr();
   head();
   int c,n,p=0;
   while(p==0)
   {
   cout<<endl;
   cout<<"1.Enter 1 for push"<<endl<<"2.Enter 2 for pop"<<endl<<"3.Enter 3 for display:"<<endl<<"4.Enter 4 for exit";
   cout<<endl<<"  Enter your choice:";
   cin>>c;
   switch(c)
   {
    case 1:clrscr();
	   head();
	   cout<<"Enter the number to be push=";
	   cin>>n;
	   clrscr();
	   push(n);

	   break;
    case 2:clrscr();
	   pop();
	   break;
    case 3:clrscr();
	   display();
	   break;
    case 4:p++;
	   break;
    default:    clrscr();
		head();
		cout<<"Wrong Choice"<<endl<<endl;
   }
 }
 getch();
 }