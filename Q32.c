// W.A.P to print all Armatrong numbers between two given range.
#include <stdio.h>
void main()
{
    int a,b,i,j,arm,sum,rem;
    printf("\n Enter Starting Point = ");
    scanf("%d",&a);
    printf("\n Enter Ending Point = ");
    scanf("%d",&b);
    for(i=a; i<=b; i++)
        {
         sum=0; 
         arm=i;  
         while(arm>0)   
               {
                rem=arm%10;        
                sum=sum+(rem*rem*rem); 
                arm=arm/10;
               } 
         if(i==sum) {printf("\n %d is ARMSTRONG NUMBER ",i);}       
        }
}