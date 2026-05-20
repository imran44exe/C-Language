// W.A.P to enter 10 different numbers from keyboard and arrange it in ascending order.
#include<stdio.h>
void main()
{
    int a[10],i,j,temp;
    printf("\nEnter Array Element :- ");
    for(i=0; i<=9; i++)
        {
         printf("\nEnter %d Element = ",i+1);
         scanf("%d",&a[i]);
        }
    printf("\nYour Element :- ");
    for(i=0; i<=9; i++)
        {
         printf("%d ",a[i]); 
        }
    for(i=0; i<=9; i++)
        {
         for(j=i+1; j<=9; j++)
             {
              if(a[i]>a[j])
                 {
                  temp=a[i];
                  a[i]=a[j];
                  a[j]=temp;  
                 }  
             }   
        }
    printf("\nAscending Order :- ");
    for(i=0; i<=9; i++)
        {
         printf("%d ",a[i]); 
        }
}