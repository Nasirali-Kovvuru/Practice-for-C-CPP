
#include<stdio.h>
#include<conio.h>
void main()
{
char area[4][20];
int i;
clrscr();
printf("\n\n\tEnter your area names:");
for( i=0;i<=3;i++)
{
scanf("\n%s",&area[i]);
}
for(i=0;i<=4;i++)
{
printf("\n\n\tYour area is:%s",area[i]);
}
getch();
}