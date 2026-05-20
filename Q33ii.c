/* W.A.P to print This Pattern  1 2 3 4  
                                1 2 3
                                1 2
                                1                   */
#include <stdio.h>
void main()
{
    int a,i,n,j;
    printf("\n Enter Row x Column = ");
    scanf("%d",&n);
    a=n;
    for(i=1; i<=n; i++)
        {
         for(j=1; j<=a; j++)
             {
              printf("%d ",j);  
             }    
         printf("\n");   
         a--;         
        }
}