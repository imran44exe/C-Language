// W.A.P to print table of a number using recursive function.
#include<stdio.h>
void table(int y,int x)
        {
         if(y>10) return;
         printf("\n %d * %d = %d ",x,y,x*y);
         table(y+1,x); 
         return;       
        }
void main()
        {
         int num;      
         printf("\nEnter a Number :- ");
         scanf("%d",&num);   
         table(1,num);
        }