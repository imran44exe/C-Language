// W.A.P to enter your name from keyboard and find length of your name.
#include<stdio.h>
#include<string.h>
void main()
{
    char name[50];
    int i;
    printf("\nEnter Your Name :- ");
    gets(name);
    printf("\nYour Name :- ");
    puts(name);
    i=strlen(name);
    printf("Length = %d",i);
}