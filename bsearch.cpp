#include<iostream>
#define size 8
using namespace std;

int main()
{
int a[size];
int i,j,n;
cout<<"Enter numbers:";
cout<<"\n";
for(i=0;i<size;i++)
{
cout<<"Enter element "<<i+1<<" : " ;
cin>>a[i];
cout<<"\n";
}
int t;
for(i=0;i<size;i++)
{
	for(j=i;j<size;j++)
	{
	   if(a[i]>a[j])
	   {
		t=a[i];
	        a[i]=a[j];
		a[j]=t;
	   }
	}
}

cout<<"Sorted element is :\n";
for(i=0;i<size;i++)
cout<<a[i]<<"  ";

cout<<"\nEnter number u want to find\n";
cin>>n;
int start=0;
int end=size-1;
int mid,flag=0;

while(start<=end)
{
mid=(start+end)/2;
if(a[mid]==n)
{
cout<<"Number found at position "<<mid+1<<" \n";
flag=1;
break;
}

else if(n>a[mid])
start=mid+1;

else if(n<a[mid])
end=mid-1;
else
flag=0;
}
if(flag==0)
cout<<"Element not found\n";
return 0;
}
