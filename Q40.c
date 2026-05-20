// W.ap to enter a matrix of size 3x3 and print it in matrix form.
#include<stdio.h>
void main()
{
    int a[3][3],i,j;
    for(i=0; i<=2; i++)
        {
         for(j=0; j<=2; j++)
             {
              printf("\n Enter %dst Row & %dst Column Element = ",i+1,j+1);
              scanf("%d",&a[i][j]);  
             }
         printf("\n");       
        }
    for(i=0; i<=2; i++)
        {
         for(j=0; j<=2; j++)
             { 
              printf("%d ",a[i][j]);  
             }
         printf("\n");    
        }    
}