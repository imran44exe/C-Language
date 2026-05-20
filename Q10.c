// W.A.P to calculate Compound Interest after taking data from keyboard
#include<stdio.h>
#include<math.h>
void main()
{
    float principal,rate,time,compound_intrest;
    printf("\n Enter Principal = ");
    scanf("%f",&principal);
    printf("\n Enter Rate = ");
    scanf("%f",&rate);
    printf("\n Enter Time = ");
    scanf("%f",&time);
    compound_intrest = principal*(pow((1+rate/100),time));
    printf("Compound Intrest = %.2f",compound_intrest);
}