// W.a.p to enter a number and check the input number is prime number or not.
#include <stdio.h>
void main()
{
    int n,i,c=0;
    printf("\n Enter Number = ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        {
         if(n%i==0) c++;
        }
    if(c==2) printf("\n %d is Prime",n);
    else printf("\n %d is Not Prime",n);
}