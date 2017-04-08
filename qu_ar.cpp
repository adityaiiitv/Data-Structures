/* LAB 4 DATA STRUCTURES
   QUEUE AS AN ARRAY */
#include<iostream>        // HEADER FILE INCLUSION
using namespace std;
const int SIZE=100;       // DECLARING QUEUE LENGTH OF A GIVEN SIZE

class qu                  // CLASS FOR CREATING QUEUE
{
int q[SIZE],f,r;          // PRIVATE DATA VARIABLES
public:
qu()                      // DEFAULT CONSTRUCTOR
{f=r=-1;
}

void enqueue(int no)      // FUNCTION TO INSERT VALUES IN A QUEUE
{
if(r==SIZE-1)             // CHECKING OVERFLOW
{
cout<<"\nQueue is Full";
return;
}
else if(f==-1)
{
f=0;
r=0;
}
else
r++;
q[r]=no;                  // ASSIGNING THE VALUE
}

void dequeue()            // FUNCTION TO DEQUEUE AN ELEMENT
{
int a;
if(f==-1)
{
cout<<"\nQueue is empty"; // CHECKING UNDERFLOW
return;
}
a=q[f];
f++;
cout<<"\nDeleted No "<<a;
}

void display()            // FUNCTION TO DISPLAY THE QUEUE
{
int i;
cout<<"\nNow Queue:\n";
for(i=f;i<=r;i++)
cout<<" "<<q[i];
}
}ob;                      // OBJECT DECLARATION



int main()                // MAIN FUNCTION
{
int a,ch;                 // DATA MEMBERS
do
{
cout<<"\nEnter 1 to enqueue";       // DISPLAY OF CHOICES
cout<<"\nEnter 2 to dequeue";
cout<<"\nEnter 3 for display";
cout<<"\nEnter 4 for exit";
cout<<"\n\nEnter your choice ";
cin>>ch;
switch(ch)                          // SWITCH CASE FOR CHOICES
{
case 1:	cout<<"\nEnter no to insert ";
        cin>>a;
	ob.enqueue(a);    // FUNCTION CALL
        break;
case 2:	ob.dequeue();     // FUNCTION CALL
        break;
case 3:	ob.display();     // FUNCTION CALL
        break;
case 4:	return 0;         // EXITING MAIN FUNCTION
}}

while(1);
return 0;                 // EXITING MAIN FUNCTION
}


/*     END OF PROGRAM       */
