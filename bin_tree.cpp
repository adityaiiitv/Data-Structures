/* DATA STRUCTURES LAB 8 QUESTION 1
   IMPLEMENTATION OF BINARY TREE USING LINKED LIST */
#include<iostream>
#include<cstdlib>
using namespace std;

class node
{
public:
int data;
node *left;
node *right;
node()
{
left=NULL;
right=NULL;}

};


class link
{
public:
node *r,*nn;


void insert(node *newnode,node *root)
{
if(root->data > newnode->data)
{
if(root->left==NULL)
 {root->left=newnode;}
else insert (newnode,root->left);
}

else if(root->data < newnode->data)
{
if(root->right==NULL)
{root->right=newnode;}
else insert (newnode,root->right);
}


}
void disp()
{
}



}ob1;

int main()
{
int val,op;
ob1.r=NULL;
cout<<" \n 1. insert \n 2. exit";
while(1)
{
cin >> op;
switch(op)
{
 case 1: cout<<" \n enter the value \n";
	 cin>>val;
	ob1.nn=new node;
         (ob1.nn)->data=val;
	 if(ob1.r==NULL)
	 {
		cout << "I am in "<<endl;
	 ob1.r =ob1.nn;
	}
         else{
	 ob1.insert(ob1.nn,ob1.r);}
	break;
 case 2: exit(0);
	break;
}
}
return 0;
}
