#include<iostream>
using namespace std;
int main()
{
int a[20],n,i,j,t;
cout<<"\nEnter no of elements in A ";
cin>>n;
for(i=0;i<n;i++)
{
	cout<<"\nEnter no ";
	cin>>a[i];
}
cout<<"\n\n";
for(i=0;i<n;i++)
cout<<" "<<a[i];

	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			 {
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			 }

cout<<"\n\n";
for(i=0;i<n;i++)
cout<<" "<<a[i];
return 0;
}
