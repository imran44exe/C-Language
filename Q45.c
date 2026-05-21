// W.a.p to enter your name from keyboard and find all vowels in your name.
#include<stdio.h>
void main()
{
    char name[50],ch,vowel[5]={'a','e','i','o','u'};
    int i,j;
    printf("\n Enter Your name :- ");
    ch=getchar();
    for(i=0; ch!='#'; i++)
        {
         name[i]=ch;  
         ch=getchar();
        }
    name[i]='\0';
    for(i=0; name[i]!='\0'; i++)
        {
         for(j=0; j<=4; j++)  
             {
              if(name[i]==vowel[j]) printf("\nvowel = %c",vowel[j]);
             } 
        }
} 