#include<iostream>
using namespace std;

class tree
{
public:
int data;
tree *left;
tree *right;
void insert(tree *,tree *);
void preorder(tree *);
void inorder(tree *);
void postorder(tree *);
int search(tree *,int);
int height(tree *);
void display(tree *,int);
}*newnode,*root,*obj,*newptr,*new_node,*ptr,*temp;

tree* newno()
{
int n;
cout<<"Enter data you want to insert: ";
cin>>n;
newptr=new tree;
newptr->data=n;
newptr->left=NULL;
newptr->right=NULL;
return newptr;
}

void tree::insert(tree *root,tree *newnode)
{
if(root->data >= newnode->data)
{
if(root->left==NULL)
root->left=newnode;
else
insert(root->left,newnode);
}

if(root->data < newnode->data)
{
if(root->right==NULL)
root->right=newnode;
else
insert(root->right, newnode);
}
}


int tree::height(tree *root)
{ int lh,rh;
if(root==NULL)
return (-1);
else
{
lh=height(root->left);
rh=height(root->right);
if(lh>rh)
 return (lh+1);
else 
 return (rh+1);
}
}

void search1(tree *root)
{
int n,found=0;
tree *temp;
cout<<"\nEnter number u want to search";
cin>>n;
found=temp->search(root,n);
if (found)
cout<<"Number found\n";
else
cout<<"\nNumber not found";
}

int tree::search(tree *root,int a)
{
if(root==NULL)
return 0;
if(root->data==a)
return 1;
else if(root->data>a)
search(root->left,a);
else 
search(root->right,a);
}

void display1(tree *root)
{
int n;
tree *temp;
cout<<"\nEnter number: ";
cin>>n;
temp->display(root,n);
}

void tree::display(tree *root,int b)
{
if(root==NULL)
return;
else
{
if(root->data==b)
cout<<root->data<<"   ";
else if(root->data<b)
{
cout<<root->data<<"   ";
display(root->left,b);
}
else
display(root->left,b);
}
}



void tree::preorder(tree *ptr)
{
if(ptr)
{
cout<<ptr->data<<" ";
preorder(ptr->left);
preorder(ptr->right);
}
}


void tree::postorder(tree *ptr)
{
if(ptr)
{
postorder(ptr->left);
postorder(ptr->right);
cout<<ptr->data<<" ";
}
}

void tree::inorder(tree *ptr)
{
if(ptr)
{
inorder(ptr->left);
cout<<ptr->data<<" ";
inorder(ptr->right);
}
}


int main()
{
root=NULL;
int choice;
int h;
do
{
X:
cout<<"\n";
cout<<"1.Insert\n";
cout<<"2.Preorder\n";
cout<<"3.Postorder\n";
cout<<"4.Inorder\n";
cout<<"5.Search\n";
cout<<"6.Display elements smaller than a given element\n";
cout<<"7.Compute height of a tree\n";
cout<<"8.Exit\n";
cout<<"Enter choice\n";
cin>>choice;

switch(choice)
{
case 1:
	new_node=newno();
	if(root==NULL)
	root=new_node;
	else	
	obj->insert(root,new_node);
	break;
case 2:
	cout<<"\n";	
	ptr=root;
	obj->preorder(ptr);
	break;
case 3:
	cout<<"\n";
	ptr=root;
	obj->postorder(ptr);
	break;
case 4:
	cout<<"\n";
	ptr=root;
	obj->inorder(ptr);
	break;
case 5:
	search1(root);
	break;

case 6:
	display1(root);
	break;

case 7:
	h=obj->height(root);
	cout<<"Height is "<<h;
	break;
case 8:
	break;
default:
cout<<"Wrong choice!Enter again\n";
goto X;
}
}while(choice!=8);
return 0;
}
