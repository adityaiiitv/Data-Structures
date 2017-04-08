#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

class tree
{
public:
char author[15];
char title[15];
char keywords[10][10];
double isbn;
float price;
int number;
tree *left;
tree *right;
void insert(tree *,tree *);
int display(tree *,double);
void DeleteItem(tree*,double);
void DeleteNode(tree*);
}*newnode,*root,*obj,*newptr,*new_node,*ptr,*temp;

tree* newno()
{
    int i;
newptr=new tree;
cout<<"Enter ISBN number for the book: ";
cin>>newptr->isbn;
cout<<"\nEnter Title of the book: ";
cin>>newptr->title;
cout<<"\nEnter author for the book: ";
cin>>newptr->author;
cout<<"\nEnter Price: ";
cin>>newptr->price;
cout<<"\nEnter no. of keywords (max. 10): ";
cin>>newptr->number;
cout<<"\n";
for(i=0;i<newptr->number;i++)
{
cout<<"Enter keyword "<<i+1<<" :";
cin>>newptr->keywords[i];
cout<<"\n";
}
newptr->left=NULL;
newptr->right=NULL;
return newptr;
}

void tree::insert(tree *root,tree *newnode)
{
if(root->isbn >= newnode->isbn)
{
if(root->left==NULL)
root->left=newnode;
else
insert(root->left,newnode);
}

if(root->isbn < newnode->isbn)
{
if(root->right==NULL)
root->right=newnode;
else
insert(root->right, newnode);
}
}


int tree::display(tree* root,double item)
{
    int i;
    if(root!=NULL)
    {
      if(root->isbn > item)
      {
          if(root->left==NULL)
          {
              return 0;
          }
          else
          display(root->left,item);
      }

      if(root->isbn < item)
      {
          if(root->right==NULL)
          {
              return 0;
          }
          else
          display(root->right,item);
      }
      if(root->isbn==item)
      {
          cout<<"ISBN: "<<root->isbn;
          cout<<"Author: "<<root->author<<"\n";
          cout<<"Title:  "<<root->title<<"\n";
          cout<<"Price: "<<root->price<<"\n";
          cout<<"Keywords are: "<<"\n";
          for(i=0;i<root->number;i++)
          {
              cout<<i+1<<" "<<root->keywords[i]<<"\n";
          }
          return 1;
       }
    }
    else
        return 0;
}


void tree::DeleteItem (tree* root, double item)
{
     if (root == NULL) 	// empty tree or not in the tree
     return;
     if (item < root->isbn)          // Go Left
     DeleteItem (root->left, item);
     else if (item > root->isbn)     // Go Right
     DeleteItem (root->right, item);
     else                            // This is It
     DeleteNode (root);
}

void tree::DeleteNode (tree* root)
{
    tree *temp;
    temp = root;
    if (root->left == NULL)		// no left child is easy
    {
	root = root->right;
	delete temp;
    }
    else if (root->right == NULL)	// no right is also easy
    {
	root = root->left;
	delete temp;
    }
    else                           // both left & right exist
    {
        temp = root->left;          // find right-most node of left sub-tree
        while (temp->right != NULL)
        temp = temp->right;
        root->isbn = temp->isbn;    // move just that value to root
        DeleteItem (root->left, temp->isbn);   // delete duplicate isbn
    }
}

int main()
{
root=NULL;
int choice;
double num;
int flag;
do
{
X:
cout<<"\n";
cout<<"1.Insert a book\n";
cout<<"2.Search for a book\n";
cout<<"3.Delete a book\n";
cout<<"4.Exit \n";
cout<<"5.Exit\n";
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
	cout<<"Enter the ISBN  no. you want to search for: ";
	cin>>num;
	flag=obj->display(root,num);
	if(flag==0)
        {cout<<"\nBook not found\n";}
    break;
case 3:
	cout<<"\n";
	cout<<"Enter ISBN number of the book you want to delete: ";
	cin>>num;
	obj->DeleteItem(root,num);
	break;
case 4:
	break;
default:
cout<<"Wrong choice!Enter again\n";
goto X;
}
}while(choice!=4);
return 0;
}
