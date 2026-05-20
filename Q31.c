// W.A.P to print all prime numbers betwean two given range.
#include <stdio.h>
void main()
{
    int a,b,i,j,c;
    printf("\n Enter Starting Point = ");
    scanf("%d",&a);
    printf("\n Enter Ending Point = ");
    scanf("%d",&b);
    for(i=a; i<=b; i++)
       {
        c=0;
        for(j=1; j<=i; j++)
            {
             if(i%j==0) c++;  
            }
        if(c==2)  printf("\n %d is PRIME ",i);
        else  printf("\n %d is NOT PRIME ",i);
       }
}