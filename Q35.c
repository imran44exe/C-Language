// W.A.P to enter 10 different numbers from keyboard and sum of each of array elements.
#include <stdio.h>
void main()
{
    int a[10],i,sum=0;
    for(i=0; i<=9; i++)
        {
         printf("\n Enter %d Element = ",i+1);
         scanf("%d",&a[i]);   
        }
    for(i=0; i<=9; i++)
        {
         sum=sum+a[i];   
        }
    printf("\n Sum = %d ",sum);
}    