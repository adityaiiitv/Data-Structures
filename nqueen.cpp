#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
void queen(int row,int n);
int board[20];
int count=0;


int main()
{
int n,i,j;
cout<<"Enter the no. of queens: ";
cin>>n;

queen(1,n);
}


void print_board(int n)
{
int i,j;
cout<<"Solution: "<<++count<< "\n";
cout<<"  \n";
for(i=1;i<=n;i++)
cout<<"  "<<i<<" ";
cout<<"\n";
for(i=1;i<=n;i++)
{
cout<<i<<"  ";
for(j=1;j<=n;j++)
{
if(board[i]==j)
cout<<"Q  ";
else 
cout<<"-  ";
}
cout<<"\n";
}
}

int place(int row,int column)
{
int i;
for(i=1;i<=row-1;i++)
{
if(board[i]==column)
return 0;
else
if(std::abs(board[i]-column)==std::abs(i-row))
return 0;
}
return 1;
}

void queen(int row,int n)
{
int column;
for(column=1;column<=n;column++)
{
if(place(row,column))
{
board[row]=column;
if(row==n)
print_board(n);
else 
{
queen(row+1,n);
}
}
}
}


