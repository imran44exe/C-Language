// W.a.p to enter 10 different numbers from keyboard and print all prime numbers.
#include<stdio.h>
void main()
{
    int a[10],i,j,c=0;
    for(i=0; i<=9; i++)
        {
         printf("\n Enter %d Element = ",i+1);   
         scanf("%d",&a[i]);
        }
    printf("\n Your Array = ");    
    for(i=0; i<=9; i++)
        {
         printf("%d ",a[i]);   
        }
    printf("\n Prime = ");    
    for(i=0; i<=9; i++)
        {
         c=0;   
         for(j=1; j<=a[i]; j++)
             {   
              if(a[i]%j==0) c++;  
             }
         if(c==2) printf("%d ",a[i]);
        }    
}