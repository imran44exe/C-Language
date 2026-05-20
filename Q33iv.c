/* W.A.P to print This Pattern  4 3 2 1 
                                  3 2 1 
                                    2 1
                                      1            */
#include <stdio.h>
void main()
{
    int n,i,j,k,a;
    printf("\n Enter Row x Column = ");
    scanf("%d",&n);
    a=n;
    for(i=1; i<=n; i++)
        {
         for(j=1; j<=i; j++)
             {
              printf("  ");  
             }   
         for(k=a; k>=1; k--)
             {
              printf("%d ",k);  
             }       
         printf("\n"); 
         a--;  
        }
}