/* DATA STRUCTURES LAB 7
   PROGRAM FOR DISPLAYING A LINKED LIST IN ORDER AS WELL AS REVERSE ORDER USING RECURSION */
#include<iostream>     // HEADER FILE INCLUSION
using namespace std;

class node            // CLASS FOR CREATION OF A NODE
{
public:               // PUBLIC DATA MEMBERS
int data;             // INTEGER FOR STORING DATA
node *link;           // POINTER TO STORE THE ADDRESS OF THE NEXT NODE
};

class linklist        // CLASS FOR CREATION OF A LIST
{
public:               // PUBLIC DATA MEMBERS
node *first,*last,*temp;  // NODES DECLARATION
void ncreate(int);	// FUNCTIONS
void insertatk(int);
void display(node*);
void disp(node*);
};

void linklist::ncreate( int n)   // FUNCTION TO CREATE A LIST WITH N NODES
{
first = new node;                // CREATING FIRST NODE
cout << "\n Enter the data ";
cin >> first->data;
first->link = NULL;
temp = first;
for(int i =1;i<n;i++)            // LOOP TO CREATE N NODES
{
last = new node;
cout << "\n Enter the data ";
cin >> last->data;
last->link = NULL;
temp->link = last;
temp = last;
}
}

void linklist::insertatk(int j)	// FUNCTION TO INSERT A NODE AT Kth POSITION
{
int i = 0;
node *newnode,*back;
newnode = new node;
cout<< "\nEnter the data ";
cin>>newnode->data;
newnode->link = NULL;
temp = first;
while (i < (j-1))               // WHILE LOOP
{
back = temp;
temp = temp->link;
i++;
}
back->link = newnode;
newnode->link = temp;
}

void linklist::display(node *ptr)	// FUNCTION TO DISPLAY THE LIST IN ORDER
{
if(ptr!=NULL)
{ cout<< ptr->data<<" \n";
display(ptr->link);                     // FUNCTION CALLED RECURSIVELY
}
}

void linklist::disp(node *ptr)       // FUNCTION TO DISPLAY THE LIST IN REVERSE ORDER
{
if(ptr!=NULL)
{
 disp(ptr->link);                    // FUNCTION CALLED RECURSIVELY
 cout<< ptr->data<<" \n";
}

}

int main()                           // MAIN FUNCTION
{
int ch,n,k;
char ch1 = 'y';
class linklist list;
cout << "\n Enter how many nodes in the list ";
cin >> n;                            // ENTERING THE NUMBER OF NODES
list.ncreate(n);
do                                   // DO-WHILE LOOP FOR SHOWING THE OPTIONS
{
cout<< "\n1. For insert ";
cout << "\n2. For display ";
cout << "\n3. For quit ";
cout << "\nEnter your choice ";
cin>>ch;
switch (ch)
{
case 1: 
	cout << "\nEnter the position at which insertion is required ";
	cin >> k;
	list.insertatk(k);        // FUNCTION CALL FOR INSERTION AT Kth POSITION
	break;
case 2 :cout<<" \n the list is \n";
	node *ptr;
        ptr=list.first;
	list.display(ptr);        // FUNCTION CALL FOR DISPLAYING LIST IN ORDER
	cout<<" \n reversed list is \n";
        list.disp(ptr);           // FUNCTION CALL FOR DISPLAYING LIST IN REVERSE ORDER
	break;
}
}
 while (ch != 3);                 // WHILE CONDITION
return 0;                         //RETURNING FROM THE MAIN FUNCTION
}

/* END OF PROGRAM */
