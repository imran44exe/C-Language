// W.A.P to show call by value and call by reference (swap two numbers).
#include<stdio.h>
void swap(int a,int b)
        {
         int temp=a;
         a=b;
         b=temp;  
         printf("\nInside Swaping Function : a=%d & b=%d ",a,b); 
        }
void main()
        {
         int x,y;
         printf("\nEnter First Number :- ");
         scanf("%d",&x);
         printf("\nEnter Second Number :- ");
         scanf("%d",&y);
         printf("\nBefore Swaping : a=%d & b=%d ",x,y);   
         swap(x,y);
         printf("\nAfter Swaping : a=%d & b=%d ",x,y);   
        }