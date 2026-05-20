// W.A.P to enter three digits number and sum each digit.
#include <stdio.h>
void main()
{
    int sum=0,num,rem;
    printf("\n Enter Three Digit Number = ");
    scanf("%d",&num);
    while(num>0)
          {
           rem=num%10;
           sum=sum+rem;
           num=num/10; 
          }
    printf("\n Sum of Digits = %d",sum);
}