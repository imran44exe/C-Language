// W.A.P to enter two data from keyboard and perform all arithmetic operation.
#include<stdio.h>
void main()
{
    float a,b;
    printf("\n Enter First Number = ");
    scanf("%f",&a);
    printf("\n Enter Second Number = ");
    scanf("%f",&b);
    printf("\n ADDITION = %.1f",a+b);
    printf("\n SUBTRACTION = %.1f",a-b);
    printf("\n MULTIPLICATION = %.1f",a*b);
    printf("\n DIVISION = %.2f",a/b);
}