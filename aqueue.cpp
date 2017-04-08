#include<iostream>
#define size 20
using namespace std;
class queue 			//defining class 'queue'
{
int data[size]; 		//defining an array data which will serve as a queue
int f;          		//defining front 'f' and rear 'r' to keep track of first and last elements
int r;
public:
queue()  			//defining a constructor queue to initialise f,r=-1
{
f=r=-1;
}
void push();  //defining member functions "push(),pop(),peep()"
void pop();
void peep();
}obj;

void queue::push() //defining member function push() to insert element in the queue
{
int n;
cout<<"Enter the element you want to insert: ";
cin>>n;
cout<<"\n";
if(r==size-1)                  //checking for full queue
{
cout<<"Overflow!!\n";
return;
}
else if(r==-1)                //condition for first element
{
f=r=0;
}
else				
{
++r;
}
data[r]=n;		    //inserting the element entered
cout<<"Element Entered\n";
}

void queue::pop()	   //defining member function pop() to delete element
{
if(f==-1)
{
cout<<"Underflow!!\n";		//checking for  empty queue
return;
}
else if(f==r)			//condition for single element
{
f=r=-1;
cout<<"Element removed\n";
}
else 
{
++f;				//deleting an element 
cout<<"Element removed\n";
}
} 


void queue::peep()		//defining memberfunction peep() to display elements in the queue
{
int i;
cout<<"\n";
cout<<"The queue is \n";
for(i=f;i<=r;i++)
{
cout<<data[i]<<"<-"; 
}
cout<<"\n";
}


int main()
{
int choice;

cout<<"Array Queue\n";
do{                   // do-while loop for continuous run till 4 is entered
X:
cout<<"1.Entry\n";
cout<<"2.Exit\n";
cout<<"3.Display\n";
cout<<"4.Exit\n";
cout<<"Enter your choice: ";
cin>>choice;
switch(choice)
{
case 1:
obj.push(); //invoking push() function
break;

case 2:
obj.pop(); //invoking pop() function
break;

case 3:
obj.peep(); // invoking peep() function
break;

case 4:
break;

default:
cout<<"Wrong choice\n";
cout<<"Enter again\n";
goto X;
}
}while(choice!=4);

return 0;
}

