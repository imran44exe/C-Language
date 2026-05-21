// W.a.p. to enter two matrix of size 3x3 and subtract them.
#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],i,j;
    printf("\nEnter First Array Element :- \n");
    for(i=0; i<=2; i++)
        {
         for(j=0; j<=2; j++)
             {
              scanf("%d",&a[i][j]);  
             }   
        }
    printf("\nEnter Second Array Element :- \n");    
    for(i=0; i<=2; i++)
        {
         for(j=0; j<=2; j++)
             {
              scanf("%d",&b[i][j]);  
             }   
        }
    printf("\nSubtraction :- \n");    
    for(i=0; i<=2; i++)
        {
         for(j=0; j<=2; j++)
             {
              printf("%d ",a[i][j]-b[i][j]);  
             } 
         printf("\n");      
        }        
}