// Wap to enter a string from keyboard and copy it in another array using library function
#include<stdio.h>
#include<string.h>
void main()
{
    char text1[200],text2[200];
    printf("\nEnter Your Text :- ");
    gets(text1);
    printf("\nYour Text :- ");
    puts(text1);
    strcpy(text2,text1);
    printf("\nAfter Copy :- ");
    puts(text2);
}