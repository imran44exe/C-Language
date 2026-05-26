//W.A.P to create structure of mobile and enter the details of mobile and also print all data.
#include<stdio.h>
struct mobile
        {
         char name[50];
         int ram;
         int storage;   
         float price;
        };
void main()
        {
         struct mobile m1;
         printf("\nEnter Mobile Name :- ");
         scanf("%s",m1.name);
         printf("\nEnter RAM :- ");
         scanf("%d",&m1.ram);
         printf("\nEnter Storage :- ");
         scanf("%d",&m1.storage);
         printf("\nEnter Price :- ");
         scanf("%f",&m1.price);
         printf("\nYour Mobile Name :- %s",m1.name);
         printf("\nYour Mobile Ram :- %dGB",m1.ram);
         printf("\nYour Mobile Storage :- %dGB",m1.storage);
         printf("\nYour Mobile Price :- %.2f",m1.price);
        }