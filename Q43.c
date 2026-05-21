// Wap to enter two matrix of size 3x3 and perform multiplication operation.
#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],r[3][3],i,j,k;

    printf("\nEnter Your First Matrix :- ");
    for(i=0; i<=2; i++)
        {
         for(j=0; j<=2; j++)
             {
              printf("\nEnter %d Row & %d Column Element = ",i+1,j+1);
              scanf("%d",&a[i][j]);
             }   
        }

    printf("\nEnter Your Second Matrix :- ");
    for(i=0; i<=2; i++)
        {
         for(j=0; j<=2; j++)
             {
              printf("\nEnter %d Row & %d Column Element = ",i+1,j+1);
              scanf("%d",&b[i][j]);  
             }   
        }     

    printf("\nYour First & Second Matrix :- ");
    for(i=0; i<=2; i++)
        {
         for(j=0; j<=2; j++)
             {
              printf("%d ",a[i][j]);  
             }   
         printf("\t");
         for(k=0; k<=2; k++)
             {
              printf("%d ",b[i][k]);  
             }
         printf("\n");    
        }

    printf("\nMUTIPLICATION :- \n");
    for(i=0; i<=2; i++)
        {
         for(j=0; j<=2; j++)
             {
              r[i][j]=0;  
              for(k=0; k<=2; k++)
                  {
                   r[i][j]+=a[i][k]*b[k][j]; 
                  }  
             }   
        }
    for(i=0; i<=2; i++)
        {
         for(j=0; j<=2; j++) 
             {
              printf("%d ",r[i][j]);  
             }
         printf("\n");         
        }        
}