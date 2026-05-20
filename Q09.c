// Write a programme to calculate Simple Interest after taking data from keyboard
#include<stdio.h>
void main()
{   
    float principal,rate,time,simple_intrest;
    printf("\n Enter PRINCIPAL = ");
    scanf("%f",&principal);
    printf("\n Enter RATE = ");
    scanf("%f",&rate);
    printf("\n Enter TIME = ");
    scanf("%f",&time);
    simple_intrest=(principal*rate*time)/100;
    printf("Simple Intrest = %f ",simple_intrest);
}
