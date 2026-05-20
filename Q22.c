// W.A.P to print all even and odd numbers from 10 to 100
#include <stdio.h>
void main()
{
    int i;
    for(i=10; i<=100; i++)
        {
         if(i%2==0) printf("\n %d is Even ",i);
         else printf("\n %d is Odd ",i);
        }
}