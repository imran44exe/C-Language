// W.A.P to print all factorial values between two given range.
#include <stdio.h>
void main()
{
    int a,b,i,j,f;
    printf("\n Enter Starting Point = ");
    scanf("%d",&a);
    printf("\n Enter Ending Point = ");
    scanf("%d",&b);
    for(i=a; i<=b; i++)
       {
        f=1;
        for(j=1; j<=i; j++)
            {
             f=f*j;
            }
        printf("\n FACTORIAL of %d = %d ",i,f);
       }
}