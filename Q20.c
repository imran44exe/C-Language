// W.a p to enter a number from keyboard and print table.
#include <stdio.h>
void main()
{
    int x,i,t;
    printf("\n Enter Number = ");
    scanf("%d",&x);
    for(i=1; i<=10; i++)
       {
        t=x*i;
        printf("\n %d * %d = %d ",x,i,t);
       }
}