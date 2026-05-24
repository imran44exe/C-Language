// W.A.P to pass an array and print sum of elements of array.
#include<stdio.h>
void sumfn(int x[],int y)
        {
         int sum=0,i;
         for(i=0; i<=y-1; i++)
            {
             sum+=x[i];   
            } 
         printf("Sum Of Array :- %d ",sum);             
        }
void main()
        {
         int i,c,a[10];
         for(i=0; i<=9; i++)
            {
             printf("\nEnter %d Element :- ",i+1);
             scanf("%d",&a[i]); 
             c++;  
            }
         sumfn(a,c);   
        }