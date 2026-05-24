// W.a.p to create a structure of student and print each member of structure.
#include<stdio.h>
struct student
            {
             char name[50];
             int roll;
             float fee;   
            };
void main()
        {
            struct student s1;
            printf("\nEnter Student Details :- \n");
            printf("\nEnter Student Name :- ");
            gets(s1.name); 
            printf("\nEnter Student Roll No. :- ");
            scanf("%d",&s1.roll);
            printf("\nEnter Student Fee :- ");
            scanf("%f",&s1.fee);
            printf("\nStudent Details :- \n ");
            printf("\nStudent Name is ");
            puts(s1.name);
            printf("\nStudent Roll is %d ",s1.roll);
            printf("\nStudent Fee is %f ",s1.fee);
        }    
