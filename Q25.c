// W.A.P to enter a number and reverse it.
#include <stdio.h>
void main()
{
    int num,sum=0,rem;
    printf("\n Enter Three Digit Number = ");
    scanf("%d",&num);
    while(num>0)
          {
           rem=num%10;
           sum=sum*10+rem;
           num=num/10; 
          }
    printf("\n Sum of Digits = %d",sum);
}