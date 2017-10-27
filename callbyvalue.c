#include<stdio.h>
#include<conio.h>
void payfee(int due)//formal parameters
{
due=due+500;
printf("\n\n\tDue fee is:%d",due);
}
void main()
{
clrscr();
int x=1000;//actual parameters
payfee(x);
printf("\n\n\tX value is:%d",x);
getch();
}