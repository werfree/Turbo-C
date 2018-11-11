#include<iostream.h>
#include<conio.h>
const int size= 20;
void main()
{
int list[size];
int small=0,pos=0,temp=0,i,j,n;
clrscr();
cout<<"enter the size of the array:";
cin>>n;
cout<<"\nenter the array elements:\n";
for(i=0;i<n;i++)
cin>>list[i];
for(i=0;i<n-1;i++)
{
small=list[i];
pos=i;
for(j=i+1;j<n;j++)
{
if(small>list[j])
{
small=list[j];
pos=j;
}
}
temp=list[i];
list[i]=list[pos];
list[pos]=temp;
}
cout<<"\n\nSELECTION SORT:the sorted list is:\n\n";
for(i=0;i<n;i++)
cout<<list[i]<<" ";
getch();
}
