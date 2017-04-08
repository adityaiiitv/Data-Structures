/*Create a class called Time that has separate int member data for hours, minutes, and seconds.
One constructor should initialize this data to 0, and another should initialize it to fixed values. A
member function should display it, in 11:59:59 format. The final member function should add two
objects of type Time passed as arguments.
A main program should create two initialized Time objects, and one that is not initialized. Then it
should add the two initialized values together, leaving the result in the third Time variable. Finally, it
should display the value of this third variable*/
#include<iostream>
using namespace std;    
 

    class Time
    {
     
public:
        int hours;
        int minutes;
        int seconds;
        
     Time()
        {
                hours=0;
                minutes=0;
                seconds=0;
        }
         Time(int a,int b,int c)
         {
                  while(c>=60)
                  {
                      c-=60;
                      b++;
                  }
                  while(b>=60)
                  {
                     b-=60;
                     a++;
                  }
                  hours=a;
                  minutes=b;
                  seconds=c;
          }
 void add(Time t1,Time t2)
 {                 
             int a=0,b=0,c=0;
             a=t1.seconds+t2.seconds;
             b=t1.minutes+t2.minutes;
             c=t1.hours+t2.hours;  
           while( a>=60)
               {
                  a-=60;
                  b++;
                 }
             
             while(b>=60)
              {
                b-=60;
                c++;
               }
          seconds=a;
          minutes=b;
          hours=c;
   } 
     void show()
   {
     cout<<"The time is"<<hours<<":"<<minutes<<":"<<seconds<<endl;
   }   
                        
                  
};

int main()
 {

  
     Time t3;
     Time t1(4,6,8);
     Time t2(7,40,39);
     t2.show();
     t3.add(t1,t2);
     t3.show();  
     return 0;
}



















