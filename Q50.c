// W.A.P to enter two strings from keyboard and concatenate these strings using library function.
#include<stdio.h>
#include<string.h>
void main()
{
    char text1[200],text2[200];
    printf("\nEnter Your First Text :- ");
    gets(text1);
    printf("\nEnter Your Second Text :- ");
    gets(text2);
    printf("\nYour First Text :- ");
    puts(text1);
    printf("\nYour Second Text :- ");
    puts(text2);
    strcat(text1,text2);
    printf("\nAfter Concatenate :- ");
    puts(text1);
}