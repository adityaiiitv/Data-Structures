#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
	int x;
	stack *next;
}*top=NULL;

void push(int);
void pop();
void display();
//int stack[100],top=-1;
void main()
{
int a,ch;
clrscr();
do
{
	cout<<"\nEnter 1 for push";
	cout<<"\nEnter 2 for pop";
	cout<<"\nEnter 3 for display";
	cout<<"\nEnter 4 for exit";
	cout<<"\n\nEnter your choice ";
	cin>>ch;
	switch(ch)
	{
		case 1:	cout<<"\nEnter no for insert ";
			cin>>a;
			push(a);
			break;
		case 2:	pop();
			break;
		case 3:	display();
			break;
		case 4:	exit(0);
	}
}
while(1);
getch();
}
void push(int no)     // char str[]
{
	stack *ptr;
	ptr=new stack;
	ptr->x=no;              // strcpy(ptr->n,str);
	ptr->next=NULL;
	if(top==NULL)
		top=ptr;
	else
	{
		ptr->next=top;
		top=ptr;
	}
}
void pop()
{
	int p;
	stack *ptr;
	if(top==NULL)
	{
		cout<<"\n\nStack is Empty";
		return;
	}
	p=top->x; 	//strcpy(p,top->n);
	ptr=top;
	top=top->next;
	delete ptr;
	cout<<"\n\npopped element "<<p<<"\n";
}

void display()
{
stack *ptr;
cout<<"\nStack now:- \n";
for(ptr=top;ptr!=NULL;ptr=ptr->next)
cout<<" "<<ptr->x;
}

/*void display()
{
	cout<<"\n";
	for(int i=top;i>=0;i--)
	cout<<"  "<<stack[i];
	cout<<"\n";
} */
