# include<iostream>
using namespace std;

class notebook
{
public:
int page,day;
notebook *link;
};


class link
{
private:
notebook *first,*last,*temp;
public:
void ncreate(int);	// Create a linked list with n nodes
void insertatk(int);	// Inserting at kth position
void display();	// Display the linked list
};


void link::ncreate( int n)
{
first = new notebook;
cout<<"\n Enter the page number ";
cin>>first->page;
cout<<" \n enter the day";
cin>>first->day;
first->link = NULL;
temp = first;
for(int i =1;i<n;i++)
{
last = new notebook;
cout << "\n Enter the page number ";
cin >> last->page;
cout<<"\n enter the day";
cin>> last ->day;
last->link = NULL;
temp->link = last;
temp = last;
}
}

void link::insertatk(int j)	// Function to insert the node at kth position

{
int i = 0;
notebook *newnode,*back;
newnode = new notebook;
cout<< "\nEnter the data value ";
cin>>newnode->page;
cin>>newnode->day;
newnode->link = NULL;
temp = first;
while (i < (j-1))
{
back = temp;
temp = temp->link;
i++;
}
back->link = newnode;
newnode->link = temp;
}
void link::display()	//Function to display the link list
{
temp = first;
cout<< "\n The linked list is \n";
while (temp != NULL)
{
cout<< "\n"<<temp->page;
temp = temp->link;
}
}

int main()
{
int ch,n,k;
char ch1 = 'y';
class link list;
cout<<"\n Enter how many notebooks are there? ";
cin >> n;
list.ncreate(n);
do
{
cout<< "\n1. to insert ";
cout << "\n2. to display ";
cout << "\n3. to quit ";
cout << "\nEnter your choice ";
cin>>ch;
switch (ch)
{
case 1: 
cout << "\nEnter the position at which insertion is required ";
cin >> k;
list.insertatk(k);
break;
case 2 : 
list.display();
break;
}
}
while (ch != 3);
return 0;
}
