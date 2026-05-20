/* W.A.P to print This Pattern        *
                                    * * *
                                  * * * * * 
                                * * * * * * *      */
#include <stdio.h>
void main()
{
    int i,j,k,n,a,b;
    printf("\n Enter Row x Column = ");
    scanf("%d",&n);
    a=n; b=1;
    for(i=1; i<=n; i++)
        {
         for(j=1; j<=a; j++)   
             {
              printf("  "); 
             }
         for(k=1; k<=b; k++)
             {
              printf("* ");  
             }
         printf("\n");
         a--; b=b+2;  
        }
}