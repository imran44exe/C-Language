// W.A.P to create a function to check a number is prime number or not after passinga value as parameter.
#include<stdio.h>
int prime(int a)
        {
         int i=2,c=0; 
         while(i<a)  
            {
             if(a%i==0) { c++; break; } 
             i++; 
            }
         return c;
        }
void main()
        {
         int x,z; 
         printf("\nEnter a Number :- ");
         scanf("%d",&x);   
         z=prime(x);  
         (z==0)?printf("\n%d is Prime",x):printf("\n%d is NOT Prime",x); 
        }