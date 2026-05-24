// W.A.P to find factorial value of a number using recursive function.
#include<stdio.h>
int factorial(int y)
            {
             if(y==1 || y==0) return 1;   
             int fact=y*factorial(y-1);   
             return fact;
            }
void main()
        {
         int x,y; 
         printf("\nEnter a Number :- ");
         scanf("%d",&x);
         y=factorial(x);   
         printf("\nFactorial of %d is %d ",x,y);
        }