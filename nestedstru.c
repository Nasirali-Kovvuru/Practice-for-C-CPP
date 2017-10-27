#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("\n\n\n\tEnter n value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%3d",i);
}
printf("\n");
}
getch();
}