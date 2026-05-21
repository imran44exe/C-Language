//W.A.P to enter a text from keyboard and convert it into upper case using library function.
#include<stdio.h>
#include<string.h>
void main()
{
    char text[200];
    printf("\nEnter Your Text :- \n");
    gets(text);
    printf("\nYour Text :- ");
    puts(text);
    strupr(text);
    printf("\nYour Text after Uppercase :- \n");
    puts(text);
}