// W.A.P to enter a text from keyboard and find number of words present in the text.
#include<stdio.h>
void main()
{
    char text[200],ch;
    int i,word=1;
    printf("Enter Your Text :- ");
    ch=getchar();
    for(i=0; ch!='#'; i++)
         {
          text[i]=ch;
          ch=getchar();  
         }
    text[i]='\0';
    for(i=0; text[i]!='\0'; i++)
         {
          if(text[i]==' ') word++; 
         }
    printf("\nNumber of Word = %d ",word);    
}