#include<iostream.h>
#include<conio.h>
#include<stdio.h>
const int size=20;
void main()
{
int i,n,m,temp,A[size],B[size],C[size+size];
clrscr();
cout<<"enter the number of elements in the array A:";
cin>>m;
cout<<"\n\nenter the elements of the array A in sorted order:\n";
for(i=0;i<m;i++)
cin>>A[i];
cout<<"enter the number of elements in the array B:";
cin>>n;
cout<<"\n\nenter the elements of the array B in sorted order:\n";
for(i=0;i<n;i++)
cin>>B[i];
cout<<"sorted elements of boyh the arrays are \n\n";
cout<<"\nArray A\n";
for(i=0;i<m;i++)
cout<<A[i]<<" ";
cout<<"\nArray B \n";
for(i=0;i<n;i++)
cout<<B[i]<<" ";
int ctr1,ctr2,ctr3;
ctr1=0;
ctr2=0;
ctr3=0;
while(ctr1<m && ctr2<n)
{
if(A[ctr1]<=B[ctr2])
C[ctr3++]=A[ctr1++];
else
C[ctr3++]=B[ctr2++];
}
while(ctr1<m)
C[ctr3++]=A[ctr1++];
while(ctr2<n)
C[ctr3++]=B[ctr2++];
cout<<"\n\n\nMerge sort : sorted elements...\n\n";
for(i=0;i<m+n;i++)
cout<<C[i]<<" ";
getch();
}