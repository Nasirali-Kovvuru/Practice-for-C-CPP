#include<stdio.h>
#include<conio.h>
void main()
{
int age;
char name[20];
clrscr();
printf("\n\n\tEnter your age:");
scanf("%d",&age);
printf("\n\n\tYour age is:%d",age);
printf("\n\n\tEnter your name:");
scanf("%s",&name);
printf("\n\n\tYour name is:%s",name);
getch();
}