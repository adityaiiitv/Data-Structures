/* DATA STRUCTURES LAB-4
   QUEUE USING LINKED LIST  */
#include<iostream>        // HEADER FILE INCLUSION
using namespace std;
class queue               // CLASS DECLARATION
{
public:
queue()                   // DEFAULT CONSTRUCTOR
{
front=NULL;
}
int x;                    // MEMBER VARIABLE
queue *front,*rear,*next;
void insert(int no)       // FUNCTION TO INSERT IN THE QUEUE
{
.
queue *ptr;               // CREATING NEW ELEMENT
ptr=new queue;         
ptr->x=no;
ptr->next=NULL;
if(front==NULL)           // ASSIGNING IF QUEUE IS EMPTY
{front=ptr;
 rear=ptr;}
else
{rear->next=ptr;
 rear=ptr;}
}

void delnode()              // FUNCTION TO DELETE FROM A QUEUE
{
int p;
queue *ptr;
if(front==NULL)             // DETECTING UNDERFLOW
{
cout<<"\n\nQueue is Empty";
return;
}
ptr=front->x;
ptr=front;
front=front->next;
delete ptr;                 // DELETING ELEMENTS
cout<<"\n\npopped element "<<p<<"\n";
}


void display()               // FUNCTION TO DISPLAY THE MEMBERS OF A QUEUE
{
queue *ptr;
cout<<"\nQueue now:- \n";
for(ptr=front;ptr!=NULL;ptr=ptr->next)
cout<<" "<<ptr->x;
}

}ob;                        // OBJECT CREATION


int main()                  // MAIN FUNCTION
{
int a,ch;
do
{
cout<<"\nEnter 1 to Insert";   // CHOICES GIVEN
cout<<"\nEnter 2 to Delete";
cout<<"\nEnter 3 to display";
cout<<"\nEnter 4 to exit";
cout<<"\n\nEnter your choice ";
cin>>ch;
switch(ch)                      // SWITCH CASE FOR CHOICES
{
case 1:	cout<<"\nEnter no to insert ";
	cin>>a;
	ob.insert(a);
	break;
case 2:	ob.delnode();
	break;
case 3:	ob.display();
	break;
case 4:	return 0;                // EXITING MAIN FUNCTION
}
}
while(1);
return 0;                        // EXITING MAIN FUNCTION
}

/* END OF PROGRAM */
