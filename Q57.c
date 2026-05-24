// W.A.P to create a function to print Fibonacci series.
#include<stdio.h>
void fibo(int x)
        {
         int a=0,b=1,sum,i=1;
         printf("%d ",a);
         printf("%d ",b);
         while(i<=x-2)
            {
             sum=a+b;
             a=b;
             b=sum;
             i++;
             printf("%d ",sum);   
            }
        }
void main()
        {
         int n;
         printf("\nEnter Number Of Term :- ");
         scanf("%d",&n);
         fibo(n);       
        }