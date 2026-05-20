// W.A.p to enter a number from keyboard and find its factorial value.
#include <stdio.h>
void main()
{
    int i,n,f=1;
    printf("\n Enter Any Number = ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        {
         f=f*i;
        }
    printf("\n Factorial of %d = %d ",n,f);
}