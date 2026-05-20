// W.A.P to enter a number from keyboard and check the input number is Armstrong number or not.
#include <stdio.h>
#include<math.h>
void main()
{
 int num,sum=0,rem,d=0,n1,arm;
 printf("\n Enter Three Digit Number = ");
 scanf("%d",&num);
 n1=num;
 while(n1>0)
      {
       n1=n1/10;     
       d++;     
      }
 arm=num;
 while(arm>0)
       {
        rem=arm%10;
        sum=sum+pow(rem,d);
        arm=arm/10;
       } 
 if(num==sum) printf("\n %d is ARMSTRONG NUMBER",num);      
 else printf("\n %d is NOT ARMSTRONG NUMBER",num);   
}