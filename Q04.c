// Write a programme to calculate b^2-4ac and print the result.
#include<stdio.h>
void main()
{
    float a,b,c,d;
    printf("\n Enter Value of a , b & c = ");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    printf("\n Result = %f",d);
}
