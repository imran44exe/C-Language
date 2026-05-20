// W.A.P to enter a number from keyboard and check the number is positive or negative
#include <stdio.h>
void main()
{
    int num;
    printf("\n Enter Number = ");
    scanf("%d",&num);
    (num>=0)?printf("%d is Positive",num):printf("%d is Negative",num);     
}