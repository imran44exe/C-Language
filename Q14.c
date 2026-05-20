// W.A.P to enter age from keyboard and check the input age is eligible for voting or not
#include <stdio.h>
void main()
{
    int age;
    printf("\n Enter Age = ");
    scanf("%d",&age);
    if(age>=18)
      {
       printf("\n YOU Are Eligible for Voting");
      } else {
              printf("\n You Are Not Eligible for Voting");
             } 

}