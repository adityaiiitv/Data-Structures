#include<iostream>
#include<cstdlib>
using namespace std;
int i=0;
int arr[20];
class tr
{
public:
int data;
tr *left;
tr *right;
void ins(tr *,tr *);
void pre(tr *);
void in(tr *);
void post(tr *);
void delnode (tr *&tr);
void delitem (tr *&tr, int item);
}*newnode,*root,*obj,*newptr,*new_node,*ptr;

tr* newno()
{
int n;
cout<<"Enter data you want to insert: ";
cin>>n;
newptr=new tr;
newptr->data=n;
newptr->left=NULL;
newptr->right=NULL;
return newptr;
}

void tr::ins(tr *root,tr *newnode)
{
if(root->data >= newnode->data)
{
if(root->left==NULL)
root->left=newnode;
else
ins(root->left,newnode);
}
if(root->data < newnode->data)
{
 if(root->right==NULL)
 root->right=newnode;
 else
 ins(root->right, newnode);
}
}

void tr::pre(tr *ptr)
{
if(ptr)
{
cout<<ptr->data<<"  ";
i=0;
arr[i]=ptr->data;
i++;
pre(ptr->left);
pre(ptr->right);
}
}


void tr::post(tr *ptr)
{
if(ptr)
{
 post(ptr->left);
 post(ptr->right);
 cout<<ptr->data<<" ";
}
}

void tr::in(tr *ptr)
{
if(ptr)
{
in(ptr->left);
cout<<ptr->data<<" ";
arr[i]=ptr->data;
i++;
in(ptr->right);
}
}

void tr::delitem (tr *&root, int item)
{
if (root == NULL) 	// empty tree or not in the tree
return;
if (item < root->data)          // Go Left
delitem (root->left, item);
else if (item > root->data)     // Go Right
delitem (root->right, item);
else                            // This is It
delnode (root);
}

void tr::delnode (tr *&root)
{
tr *temp;
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
root->data = temp->data;    // move just that value to root
delitem (root->left, temp->data);   // delete duplicate data
}
}

int main()
{
root=NULL;
int item;
int choice;
char ch='Y';
cout<<"Welcome to the program for the Binary Tree\n";
while (ch=='y'||ch=='Y')
{
cout<<"\nEnter your choice";
cout<<"\n1.Insert\n2.Preorder\n3.Postorder\n4.Inorder\n5.delete\n";
cin>>choice;
switch(choice)
{
case 1:new_node=newno();
       if(root==NULL)
       root=new_node;
       else	
       obj->ins(root,new_node);
       break;
case 2:cout<<"\n";
       ptr=root;
       obj->pre(ptr);
       break;
case 3:cout<<"\n";
       ptr=root;
       obj->post(ptr);
       break;
case 4:cout<<"\n";
       ptr=root;
       obj->in(ptr);
       break;
case 5:cout<<"\n";
       cout<<"Enter the item to be deleted\n";
       cin>>item;
       obj->delitem ( root, item);
       break;
default:cout<<"Invalid choice!\n";
        exit(0);
       }
    
cout<<"Press Y to continue and N to exit\n";
cin>>ch;
}
return 0;
}


