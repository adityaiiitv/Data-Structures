#include<iostream>
using namespace std;
void mergesort(int [],int,int);    // defining prototype for mergesort()
void merge(int[],int,int,int);     // defining prototype for merge()

int main()
{
int arr[40],n;                      //defining array where data will be stored
int i,size;
cout<<"Enter the no. of elements you want to enter: ";
cin>>n;
cout<<"\nEnter elements: \n";
for(i=0;i<n;i++)
{
cout<<"Enter element "<<i+1<<" : ";
cin>>arr[i];                        // input an array
cout<<"\n";
}
size=n;
mergesort(arr,0,n-1);               // calling mergesort()
cout<<"\nSorted array is : ";
for(i=0;i<n;i++)                     // displaying of the array
{
cout<<arr[i]<<" ";
}
cout<<"\n";
return 0;
}

void mergesort(int a[],int low,int high)
{
int mid;
if(low<high)
{
mid=(low+high)/2;                   // calculating mid
mergesort(a,low,mid);               // making left partition of the array
mergesort(a,mid+1,high);            // making right partition of the array
merge(a,low,mid,high);              // function called to merge the two halves
}
}

void merge(int a[],int l,int m,int h)
{
int x,y;
x=m-l+1;                          // no. of elements in right partition
y=h-m;                            // no. of elements in left partition
int i,j;
int left[20],right[20];           // making right and left temporary array to store right and left partition
for(i=0;i<x;i++)
{
left[i]=a[l+i];                   //copying elements
}
for(j=0;j<y;j++)
{
right[j]=a[m+j+1];
}
i=0;j=0;
int k=l;
while(i<x && j<y)
{
if(left[i]<right[j])               // merging two arrays left and right in ascending order criteria
{
a[k++]=left[i++];
}
else
a[k++]=right[j++];
}

while(i<x)
a[k++]=left[i++];                // copying the rest of the array if all the elements are not copied.

while(j<y)
a[k++]=right[j++];
}
