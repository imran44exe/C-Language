// W.A.P to enter 10 different numbers from keyboard and print all Armstrong number.
#include<stdio.h>
void main()
{
    int a[10],i,arm,rem,sum=0;;
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
     printf("\n ARMSTRON NUMBER :- ");    
    for(i=0; i<=9; i++)
        {
         arm=a[i];   
         while(arm>0)
               {
                rem=arm%10;
                sum=sum+rem*rem*rem;
                arm=arm/10;    
               }
         if(a[i]==sum) { printf("%d ",a[i]); }         
         sum=0;
        }            
}