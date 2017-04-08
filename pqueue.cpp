#include<iostream>
using namespace std;

class queue  // defining class "queue"
{
int data;    
queue *next; //declaring a pointer variable 'next' to point to other objects of type queue
public:
void entry(); //declaring member functions "entry(),remove(),peep() 
void remove();
void peep();
}*obj,*f,*r,*newptr,*ptr;  //declaring pointer objects obj,f,r,newptr,ptr

void queue::entry()	//defining member function entry() to insert an element
{
int n;
cout<<"Enter data:";
cin>>n;
newptr=new queue;     //defining a new pointer object "newptr" of type queue
newptr->data=n;
newptr->next=NULL;    //making the newptr point to "NULL"
if (f==NULL)	      //checking for an empty queue
{ 
f=r=newptr;
r->next=NULL;
}
else             
{
r->next=newptr; 	//inserting element using pointer "newptr"
r=newptr;
r->next=NULL;
cout<<"element entered";
}
}

void queue::remove()	//defining a member function remove() to delete an element
{
ptr=f;			//initialising pointer "ptr" with f
if(f==NULL)		//checking for an empty queue
{
cout<<"Underflow!";
}
else 
{
f=f->next;		//making "f" point to next node
delete ptr;             //deleting node "ptr"
}
}

void queue::peep()	//defining member function peep() to display elements in the queue
{

ptr=f;
while(ptr!=NULL)
{
 cout<<ptr->data<<"-";
 ptr=ptr->next;
}
}

int main()
{
f==NULL;     // initialising top to NULL
int choice;
cout<<"Pointer Queue\n";
do{             // do-while loop to continue program until exit command is encountered
X:              // label for goto statement
cout<<"\n1.Entry\n";
cout<<"2.Remove\n";
cout<<"3.Peep\n";
cout<<"4.Exit\n";
cout<<"Enter your choice: ";
cin>>choice;
switch(choice)
{
case 1:
obj->entry(); // invokining entry()
break;

case 2:
obj->remove(); // invoking remove()
break;

case 3:
obj->peep(); // invoking peep()
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





