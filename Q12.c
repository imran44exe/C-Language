// W.A.P to enter two numbers from keyboard & find bigger between them using Ternary operator.
#include<stdio.h>
void main()
{
    int a,b;
    printf("\n Enter First Number = ");
    scanf("%d",&a); 
    printf("\n Enter Second Number = ");
    scanf("%d",&b);
    (a>b)?printf("%d is Greater",a):printf("%d is Greater",b);
}