// W.A.P to create a function to find factorial value of a number.
#include<stdio.h>
void factorial()
             {
              int num,i,fact=1;
              printf("\nEnter a Number :- ");
              scanf("%d",&num);
              for(i=1; i<=num; i++)
                  {
                   fact=fact*i; 
                  } 
              printf("\nFactorial of %d is %d ",num,fact);       
             }
void main()
         {
          factorial();  
         }   