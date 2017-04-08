/* DATA STRUCTURES LAB 3 QUESTION 1 PART A
   CREATION OF A STACK USING ARRAY */
#include<iostream>
#include<stdlib.h>
using namespace std;
const int size = 50;

class stack          // CLASS FOR CREATION OF A STACK
{
int st[50],top;      // DATA MEMBERS OF THE CLASS

public:     
stack()               // DEFAULT CONSTRUCTOR
{
top=-1;
}


int push(int e) // FUNCTION TO INSERT AN ELEMENT IN THE ARRAY
{
if(top==size-1)   // OVERFLOW DETECTION
{
return-1;
}
else
{
top++;
st[top]=e;
}
return 0;
}


void display()      // FUNCTION TO DISPLAY THE ELEMENTS OF THE ARRAY
{
cout<<st[top]<<"<--"<<endl;
for(int  i=top-1; i>=0;i--)
{
	cout<<st[i]<<endl;
}
}


int pop()         // FUNCTION TO DELETE AN ELEMENT OF THE ARRAY
{
int ret;
if(top== -1)       // UNDERFLOW DETECTION
{
return -1;
}
else
{ret = st[top];
top--;
}
return ret;
}

}o1;                   // OBJECT CREATION

int main()                        // MAIN FUNCTION
{
int item,res;
char ch='y';
while(ch=='y'|| ch=='Y')        // WHILE LOOP FOR CHOICES
{
cout<<" enter item for insertion";
cin>>item;
res=o1.push(item);                  // FUNCTION CALL FOR INSERTION
if(res==-1)
{
cout<<" \n overflow \n aborting \n";
exit(0);
}

cout<<"the stack now is=\n";
o1.display();                       // FUNCTION CALL FOR DISPLAY
cout<<"\n want to insert more elements? press y\n";
cin>>ch;
if(ch=='n')
{
break;}
}

cout<<"now deletion of elements begin ...\n";
ch='y';
while (ch=='y'||ch=='Y')
{res= o1.pop();                       // FUNCTION CALL FOR DELETION
if(res==-1)
{
cout<<" underflow !aborting!\n";
exit(0);
}
else
{
cout<<"the element deleted is "<<res<<endl;
cout<<"\n the stack now is \n";
o1.display();}                                 // FUNCTION CALL FOR DISPLAY
cout<<"want to insert more elements?";
cin>>ch;
}
return 0;
}
