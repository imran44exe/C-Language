// W.A.P to create a function to sum two numbers.
#include<stdio.h>
void sum()
        {
         int x,y,sum;
         printf("\nEnter First Number :- ");   
         scanf("%d",&x);
         printf("\nEnter Second Number :- ");
         scanf("%d",&y);
         sum=x+y; 
         printf("\nSum of %d & %d is %d ",x,y,sum);
        }
void main()
        {
         sum();   
        }        