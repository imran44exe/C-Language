// Write a programme to enter Kilometre from keyboard and convert it into meter.
#include<stdio.h>
void main()
{
    int km,m;
    printf("\n Enter KILOMETER = ");
    scanf("%d",&km);
    m=km*1000;
    printf("\n METER = %d",m);
}