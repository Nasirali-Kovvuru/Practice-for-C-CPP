#include<stdio.h>
#include<conio.h>
void main()
{
int nrd,ord,nunits;
double bill;
clrscr();
printf("\n\n\tEnter your Reading:");
scanf("%d%d",&nrd,&ord);
nunits=nrd-ord;
if(nunits<=300)
{
bill=nunits*3;
printf("\n\n\tTotal bill is:%lf:",bill);
}
else
{
bill=nunits*4;
printf("\n\n\tTotal bill is:%lf",bill);
}
getch();
}