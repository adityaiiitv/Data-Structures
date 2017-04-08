/*points of a spiral */
#include<stdio.h>
#include<math.h>
int main()
{

    float  a,b;
    puts("Enter the first point ");
    scanf("%f%f",&a,&b);
    puts("The points are");
    for(int i=0;i<=100;i++)
    {  printf("\n");
       a=sqrt(a*a-b*b-0.1);
       b=sqrt(b*b+0.1);
       printf("(%f,%f)",a,b);
    }
    return 0;
}
        
