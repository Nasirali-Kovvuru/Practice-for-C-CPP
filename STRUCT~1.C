#include<stdio.h>
#include<conio.h>
struct book
{
int pages;
char name[20];
float price;
};
void main()
{
struct book b1;
clrscr();
printf("\n\n\tEnter number of pages");
scanf("%d",&b1.pages);
printf("\n%d",b1.pages);
printf("\n\n\tEnter book name");
scanf("%s",&b1.name);
printf("\n%s",b1.name);
printf("\n\n\tEnter book price");
scanf("%f",&b1.price);
printf("\n%f",b1.price);
printf("\n%d",sizeof(b1));
getch();
}