// W.a.p to create a function to swap two numbers.
#include<stdio.h>
void swap(int *a,int *b)
        {
         int temp = *a;
         *a = *b;
         *b = temp;   
        }
void main()
        {
         int x,y;
         printf("\nEnter First Number :- ");
         scanf("%d",&x);
         printf("\nEnter Second Number :- ");
         scanf("%d",&y);  
         printf("\nBefore Function :- A=%d & B=%d",x,y); 
         swap(&x,&y);   
         printf("\nAFTER Function :- A=%d & B=%d",x,y);            
        }