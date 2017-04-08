#include<iostream>
#include<stdlib.h>
using namespace std;
void insert(int [],int &,int &,int);
void delque(int [],int &,int &);
void display(int [],int ,int );
const int SIZE=100;
int main()
{
int que[SIZE],front=-1,rear=-1;
int a,ch;
do
{
	cout<<"\nEnter 1 for Insert";
	cout<<"\nEnter 2 for Deletr";
	cout<<"\nEnter 3 for display";
	cout<<"\nEnter 4 for exit";
	cout<<"\n\nEnter your choice ";
	cin>>ch;
	switch(ch)
	{
		case 1:	cout<<"\nEnter no for insert ";
			cin>>a;
			insert(que,front,rear,a);
			break;
		case 2:	delque(que,front,rear);
			break;
		case 3:	display(que,front,rear);
			break;
		case 4:	exit(0);
	}
}
while(1);
return 0;
}

void insert(int q[],int &f,int &r,int no)
{
	if(r==SIZE-1)
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
	q[r]=no;
}

void delque(int q[],int &f,int &r)
{
	int a;
	if(f==-1)
	{
		cout<<"\nQueue is empty";
		return;
	}
	a=q[f];
	f++;
	cout<<"\nDeleted No "<<a;
}
void display(int q[],int f,int r)
{
int i;
cout<<"\nNow Queue:\n";
for(i=f;i<=r;i++)
cout<<" "<<q[i];
}
