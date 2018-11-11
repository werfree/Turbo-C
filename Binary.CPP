#include<iostream.h>
 #include<conio.h>
#define size 10
void main()
{
clrscr();
int i,pos,t,first,last,mid,list[size];
cout<<"enter the array elements in sorted order:";
for(i=0;i<size;i++)
cin>>list[i];
cout<<"\nenter the value to be searched:";
cin>>t;
first=0;
last=size-1;
pos=-1;
while (first<=last)
{
mid=(first+last)/2;
if (list[mid]==t)
{
pos=mid+1;
break;
}
else if (list[mid]<t)
first=mid+1;
else
last=mid-1;
}
if(pos>-1)
cout<<"\n\nelement found at position:"<<pos;
else
cout<<"\nsearch unsuccessful:element not found";
getch();
}