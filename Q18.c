// W.A.P to Enter Number From 1 to 7 and Print the week Day (Assume 1 as Sunday)
#include <stdio.h>
void main()
{
    int num;
    printf("\n Enter Number (B/w 1 to 7) = ");
    scanf("%d",&num);
    switch(num)
           {
            case 1 : printf("\n %d = Sunday",num); break;
            case 2 : printf("\n %d = Monday",num);  break;
            case 3 : printf("\n %d = Tuesday",num); break;
            case 4 : printf("\n %d = Wednesday",num); break;
            case 5 : printf("\n %d = Thrusday",num); break;
            case 6 : printf("\n %d = Friday",num); break;
            case 7 : printf("\n %d = Saturday",num); break;
            default : printf("\n OUT OF RANGE ");
           } 
}