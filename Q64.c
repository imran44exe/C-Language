// W.A.P to create structure of student and take 10 different records of students and print them.
#include<stdio.h>
typedef struct students
            {
             char name[50];
             int roll;
             float fee;   
            }students;
void main()
        {
         students s[10];
         int i;
         for(i=0; i<=9; i++)
            {   
             printf("\n\nEnter %d STUDENT DETAILS :-  \n",i+1);   
             printf("\nEnter Student Name : ");
             scanf("%s",s[i].name);
             printf("\nEnter Student Roll no. : ");
             scanf("%d",&s[i].roll);
             printf("\nEnter Student Fee :- ");
             scanf("%f",&s[i].fee);            
            }   
         for(i=0; i<=9; i++)
            {
             printf("\n\nYOUR %d STUDENT DETAILS :-  \n",i+1);     
             printf("\nYour Name : %s",s[i].name);          
             printf("\nYour Roll no. : %d",s[i].roll);          
             printf("\nYour Fee : %f",s[i].fee);                          
            }   
        }