// REFERENCE-http://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/
/* DATA STRUCTURES LAB-3 QUESTION-3 */
#include<iostream>      // HEADER FILE INCLUSION
#include<stdio.h>
#include<stdlib.h>
using namespace std;
#define bool int
 
class node              // CLASS DECLARATION
{
char data;           // PRIVATE DATA MEMBERS
class node *next;    // POINTER WITH DATA TYPE-CLASS
public:
void push(class node** top_ref, int new_data)   // FUNCTION TO INSERT ELEMENTS IN THE STACK
{
class node* new_node =(class node*) malloc(sizeof(class node));
 
if(new_node == NULL)
{
cout<<"Stack overflow \n";
getchar();
exit(0);
} 
new_node->data  = new_data;  // TO PUT IN DATA
new_node->next = (*top_ref); 
(*top_ref) = new_node;
}
 

int pop(class node** top_ref)   // FUNCTION TO DELETE AN ELEMENT FROM THE STACK
{
char res;
class node *top;
if(*top_ref == NULL)          // DETECTING OVERFLOW
{
cout<<"Stack overflow \n";
getchar();
exit(0);
}
else
{
top = *top_ref;
res = top->data;
*top_ref = top->next;
free(top);
return res;
}
}

bool match(char c1, char c2)   // FUNCTION TO MATCH PARENTHESIS
{
if(c1 == '(' && c2 == ')')
return 1;
else if(c1 == '{' && c2 == '}')
return 1;
else if(c1 == '[' && c2 == ']')
return 1;
else
return 0;
}
 
bool balanced(char exp[])     // FUNCTION TO SEE WHETHER PARENTHESIS ARE BALANCED
{
int i = 0;
class node *stack = NULL;
while(exp[i])
{
if(exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
push(&stack, exp[i]);
if(exp[i] == '}' || exp[i] == ')' || exp[i] == ']')
{
if(stack == NULL)
return 0;
else if ( !match(pop(&stack), exp[i]) )
return 0;
}
i++;
}
if(stack == NULL)
return 1; // FOR BALANCED
else
return 0; // FOR NOT BALANCED
}
 
}ob;           // OBJECT CREATION

int main()     // MAIN FUNCTIION
{
char exp[100];
cout<<"\n enter the statement";
gets(exp);   // ENTERING EXPRESSION
if(ob.balanced(exp))     // FUNCTION CALL FOR CHECKING
cout<<"\n Balanced ";
else
cout<<"\n Not Balanced ";
getchar();
return 0;
}

/* END OF PROGRAM*/
