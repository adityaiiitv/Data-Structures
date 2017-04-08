/*Create a class called Date that includes three pieces of information as data members – a month
(type int), a day (type int), and a year (type int). Your class should have a constructor with three
parameters that uses the parameters to initialize the three data members. Provide a set and a get
function for each data member. Provide a member function displayDate that displays the month, day
and year separated by forward slashes (/). Write a program that demonstrates class Date’s
capabilities.
*/
#include<iostream>
using namespace std;


class date
{
   private:
           int month;
           int day;
           int year;
   public:date(int a,int b,int c)
          {
             month=b;
             day=a;
             year=c;
          }
         void set()
         {
            int x,y,z;
            cout<<"Enter the date\n";
            cin>>x>>y>>z;
            day=x;
            month=y;
            year=z;
            cout<<"Date is"<<endl<<day<<"/"<<month<<"/"<<year<<endl;
         }
         void show()
          {
             cout<<"Date is"<<endl<<day<<"/"<<month<<"/"<<year<<endl;
          }
         void get()
         {
           int l,m,n;
            cout<<"Enter the date\n";
            cin>>l>>m>>n;
            day=l;
            month=m;
            year=n;
          }
              
};          
 int main()
{ 
  date d1(2,4,2014);
  date d2(1,4,2014);
  d1.show();
  d2.show();
  
  
  date d3(4,5,2015);
  d3.set();
  d3.get();
  d3.show();
}
    









