// W.A.P to enter degree centigrade from keyboard & convert it into degree Fahrenheit.
#include<stdio.h>
void main()
{
    float c,f;
    printf("\n Enter Degree Centigrate = ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("FARENHEIT = %f ",f);
}