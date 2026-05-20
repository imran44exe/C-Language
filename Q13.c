// W.A.P to enter a number from keyboard and check the number is even or odd.
#include <stdio.h>
void main()
{
    int x;
    printf(" \n Enter any Number");
    scanf("%d",&x);
    (x%2==0)?printf("%d is Even ",x):printf("%d is Odd ",x);
}