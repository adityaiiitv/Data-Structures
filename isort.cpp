#include<iostream>
#define size 5
#include<limits.h>
using namespace std;

int main()
{
int a[size];
int i,j,temp;
for(i=1;i<size;i++)
{
cout<<"Enter element "<<i+1;
cin>>a[i];
cout<<"\n";
}

cout<<"Array entered is \n";
for(i=1;i<size;i++)
{
cout<<a[i]<<" ";
}
a[0]=INT_MIN;


for(i=1;i<size;i++)
{
j=i-1;
temp=a[i];
while(temp<a[j])
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}


cout<<"Sorted array is \n";
for(i=1;i<size;i++)
{
cout<<a[i]<<" ";
}
cout<<"\n";
return 0;
}
