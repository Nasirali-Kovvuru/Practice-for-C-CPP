#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("\n\n\tEnter n value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n\n\t%d*%d=%d",i,i,i*i);
}
getch();
}