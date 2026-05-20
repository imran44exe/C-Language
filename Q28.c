// W.a p to print Nth term of Fibonacci series.
#include <stdio.h>
void main()
{
    int i,n,sum,a=0,b=1;
    printf("\n Enter Nth term = ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        {
         printf("%d ",a);
         sum=a+b;  
         a=b; 
         b=sum;   
        }
}