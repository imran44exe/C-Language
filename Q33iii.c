/* W.A.P to print This Pattern      1  
                                  2 1 
                                3 2 1 
                              4 3 2 1                   */
#include <stdio.h>
void main()
{
    int i,j,k,n;
    printf("\n Enter Row x Column = ");
    scanf("%d",&n); 
    for(i=1; i<=n; i++)
        {   
         for(j=n; j>=i; j--)       
             {
              printf("  ");  
             }
         for(k=i; k>=1; k--)   
             {
              printf("%d ",k); 
             }
         printf("\n"); 
        }
}