/*Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps track of the
number of cars that have gone by, and of the total amount of money collected.
Model this tollbooth with a class called tollBooth. The two data members are a type unsigned int to
hold the total number of cars, and a type double to hold the total amount of money collected. A
constructor initializes both these to 0. A member function called i increments the car total and adds
0.50 to the cash total. Another function, called nopayCar(), increments the car total but adds nothing
to the cash total. Finally, a member function called display() displays the two totals.
Write a program to test this class. The program should allow the user to push one key to count a
paying car, and another to count a nonpaying car. Pushing the ESC key should cause the program
to print out the total cars and total cash and then exit.*/
#include<iostream>
using namespace std;

class tollbooth
{
 public:
        unsigned int ncar;
        double amt;
 
        tollbooth()
         {
           ncar=0;
           amt=0;
            }
         void increment()
           {
             ncar+=1;
             amt+=0.5;
             }
         void nonpaycar()
           {
             ncar+=1;
              }
       void display()
         {
           cout<<"No. of cars are"<<ncar<<endl<<"amount of money"<<amt;
           }
   };
     int main()
      {char c,a;
        tollbooth x;
        cout<<"Welcome to tollbooth"<<endl;
        cout<<"enter your choice \n";
        cin>>c; 
         do
         {  cout<<"Enter your choice";
            cin>>a;
            if(a=='p'||a=='P')
                   {
                      x.increment();
                   }
            if(a=='n'||a=='N')
                   {
                      x.nonpaycar();
                   }
            cout<<"If U wanna continue press Y";
          
            c  ='y';
          }while(c=='Y'||c=='y');
          cout<<"now U can know about no. of cars and money"<<endl;
         cout<<"If U wanna Know about no of non paid cars then enter 'k' "<<endl;
          cin>>a;
  if(a=='k')
    {
         cout<<(x.amt-(x.ncar*.5))/0.5;
     }
 return 0;
}





             

         
