// W.A.P to enter 10 different numbers from keyboard and print it.
#include <stdio.h>
void main()
{
    int a[10],i;
    for(i=0; i<=9; i++)
        {
         printf("\n Enter %d Number = ",i+1);
         scanf("%d",&a[i]);   
        }
    printf("\n Your Inputed Number is Given Below ");
    for(i=0; i<=9; i++)
        {
         printf(" \n %dst Number is = %d",i+1,a[i]);
        }
}