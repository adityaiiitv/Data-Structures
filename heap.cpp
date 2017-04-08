#include<iostream>
using namespace std;
void heapify(int [],int,int);  //declaring member functions
void buildheap(int [],int);
void heapsort(int [],int);

int main()    //main function()
{
int a[40],size;
int i;
cout<<"Enter the no. of elements you want to enter: ";
cin>>size;
cout<<"Enter elements of the array\n";
for(i=1;i<=size;i++)
{
cout<<"Element "<<i<<": ";
cin>>a[i];
cout<<"\n";
}
buildheap(a,size);		//calling member function `buildheap()'

heapsort(a,size);		//calling member function `heapsort()'
cout<<"Sorted array is: \n";
for(i=1;i<=size;i++)
{
cout<<a[i];
cout<<"\n";
}

return 0;
}

void buildheap(int a[],int n)		//defining `buildheap()' function
{
int i;
for(i=n/2;i>=1;i--)
heapify(a,i,n);
}


void heapify(int a[], int i, int n)	//defining `heapify()' function
{
 int child, root;
root = a[i]; // given root
child = 2*i; // left child of the given root
while (child <= n)     // while the root has children
{

        if (child < n && a[child+1] > a[child])

            child = child+1;

        if (root > a[child]) //return as heap property is ordered

            break;

        else if (root <= a[child]) // if there is a child and that child is greater

        {

            a[child/2] = a[child];

            child = 2*child;

        }

    }

    a[child/2] = root;

    return;

}

void heapsort(int a[], int n)	//defining `heapsort()' function
{
int i, temp;
for (i = n; i >= 2; i--)
{
temp = a[i];              // storing the last element in temp
a[i] = a[1];        // swapping first element and last element
a[1] = temp;
heapify(a, 1, i - 1);			//calling `heapify(') function
heapify(a, 1, i - 1);			//calling `heapify(') function
}
}
