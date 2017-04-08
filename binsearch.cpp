#include<iostream>
#include<string.h>
using namespace std;

int sort(char c[20][20],char s[],int num)
{

int i,j;

for(i=0;i<num;i++)
{
 for(j=i;j<num-i-1;j++)
  {
   if(strcmp(c[j],c[j+1])>0)
    {
     char t[20];
     strcpy(t,c[j]);
     strcpy(c[j],c[j+1]);
     strcpy(c[j+1],t);
    }
  }

}
cout<<"\n\n";

for(i=0;i<num;i++)
{
 if(strcmp(c[i],s)==0)
{ return i;
}

}
}


int main()
{

int n,i,low=0,high,mid,f=0;
char a[20][20],ob[20][20],str[20];
cout<<"\nEnter no of elements ";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"\nEnter string ";
cin>>a[i];
}

for(i=0;i<n;i++)
{
 int r=sort(a,a[i],n);
 strcpy(ob[r],a[i]);
}
//
cout<<"\n\n";

for(i=0;i<n;i++)
{
cout<<"  "<<ob[i];
}


cout<<"\nEnter string to be search ";

cin>>str;



high=n-1;

while(low<=high && f==0)

{
mid=(low+high)/2;

if(strcmp(ob[mid],str)==0)//
{
cout<<"\n\n"<<str<<" stored at "<<mid+1;
f=1;
break;
}

else if(strcmp(ob[mid],str)>0)//
{
low=mid+1;
}
else
{
high=mid-1;
}
}

if(f==0)
{cout<<"\n\n"<<n<<" does not exist";
}
return 0;

}


