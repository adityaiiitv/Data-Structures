#include<iostream>
#include<stdio.h>
using namespace std;

struct adjnode
{
int dest;             // defining a structure of a node
adjnode* next;        // next pointer to point to the next node
}*new_node,*newedge,*pCrawl; // defining it's objects

struct adjlist       // defining the structre of the list
{
adjnode* head;     // head pointer to point at the  head node
};

struct graph       // structure for a graph
{
int v;             //no. of vertices
adjlist* array;
}*graph_node;

adjnode* newnode(int destin) // creating a new node
{
new_node= new adjnode;
new_node->dest=destin;
new_node->next=NULL;
return new_node;
}

graph* creategraph(int vert) // creating a graph
{
graph_node=new graph;
graph_node->v=vert;
graph_node->array= new adjlist[vert];  // creating a array of list
int i;
for(i=0;i<vert;i++)
{
graph_node->array[i].head=NULL;
}
return graph_node;
}

void addedge(graph* graph_node,int src,int dest) // function to add an edge
{
newedge=new adjnode;
newedge=newnode(dest);
newedge->next=graph_node->array[src].head;
graph_node->array[src].head=newedge; // adding a node to the src and storing destination in it

newedge=newnode(src);
newedge->next=graph_node->array[dest].head; // since it is undirected graph, reverse edge is also to  be added
graph_node->array[dest].head=newedge;
cout<<"\nEdge added";
}

void printgraph(graph* graph_node) // function to print adjacency list and matrix
{
    int *matrix;
matrix = new int[(graph_node->v)*(graph_node->v)]; // dynamically allocating a 2D array for adjacency matrix
int i,j;
for(i=0;i<graph_node->v;i++)
{
    for(j=0;j<graph_node->v;j++)
        matrix[i*(graph_node->v)+j]=0;//initialising all variables of the matrix to 0
}
int k;
for (k = 0; k < graph_node->v; ++k)
    {
	pCrawl=new adjnode;
	pCrawl = graph_node->array[k].head;
        cout<<"\nAdjacency list of vertex: "<<k+1<<"\nhead ";
        while (pCrawl!=NULL)
        {
            cout<<"->"<<pCrawl->dest+1;    // printing the list
            matrix[k*(graph_node->v)+pCrawl->dest]=1; // 1 is initialised to the value between
            matrix[pCrawl->dest*(graph_node->v)+k]=1; // whom edge exist.
            pCrawl = pCrawl->next;
        }
        cout<<"\n";
    }
    cout<<"\n\n Adjacency Matrix is :\n\n";
for(i=0;i<graph_node->v;i++)
{
    cout<<"    "<<i+1;
}
    cout<<"\n";

for(i=0;i<graph_node->v;i++) // printing of adjacency matrix
{
    cout<<i+1<<"   ";
    for(j=0;j<graph_node->v;j++)
        cout<<matrix[i*(graph_node->v)+j]<<"    ";
    cout<<"\n";
}

}

int main()
{
int vertex;
int src,dest;
char ch;
cout<<"\nEnter no. of vertices: ";
cin>>vertex;
cout<<"\n";
graph_node=new graph;
graph_node=creategraph(vertex);
do
{
X:
cout<<"\nEnter source vertex: ";
cin>>src;
if(src>vertex)
{
cout<<"\ninvalid vertex, enter again\n";
goto X;
}
Y:
cout<<"\nEnter Destination vertex: ";
cin>>dest;
if(dest>vertex)
{
cout<<"\ninvalid vertex, enter again\n";
goto Y;
}
addedge(graph_node,src-1,dest-1);
cout<<"\nDo you want to enter again (y/n): ";
cin>>ch;
}while(ch=='y' || ch=='Y');
printgraph(graph_node);
return 0;
}
