// W.A.P to print range of table between two numbers.
#include <stdio.h>
void main()
{
    int a,b,i,j;
    printf("\n Enter Starting Point = ");
    scanf("%d",&a);
    printf("\n Enter Ending Point = ");
    scanf("%d",&b);
    for(i=a; i<=b; i++)
        {
         for(j=1; j<=10; j++)
            {
             printf("%d ",i*j);   
            }  
         printf("\n");    
        }
}