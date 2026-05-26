// W.a.p to create structure of Date and Time. Enter date and time to show in the given format (dd/mm/yyyy hh:mm:ss)
#include<stdio.h>
struct day
        {
         int date;
         int month;
         int year;   
        };
struct time
        {
         int hour;
         int minutes;
         int seconds;   
        };
void main()
        {
         struct day x;
         struct time y;
         printf("\n\nDAY :- \n");
         printf("\nEnter Date : ");
         scanf("%d",&x.date);
         printf("\nEnter Month : ");
         scanf("%d",&x.month);
         printf("\nEnter Year : ");
         scanf("%d",&x.year);
         printf("\n\nTIME :- \n");
         printf("\nEnter Hour : ");
         scanf("%d",&y.hour);
         printf("\nEnter Minutes : ");
         scanf("%d",&y.minutes);
         printf("\nEnter Seconds : ");
         scanf("%d",&y.seconds);
         printf("(%d/%d/%d\t%d/%d/%d)",x.date,x.month,x.year,y.hour,y.minutes,y.seconds);
        }