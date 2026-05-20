// Write a program to enter two numbers from keyboard and swap them.
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\n Enter A = ");
    scanf("%d",&a);
    printf("\n Enter B = ");
    scanf("%d",&b);
    c=a; a=b; b=c;
    printf("\nA = %d\nB = %d ",a,b);
}
