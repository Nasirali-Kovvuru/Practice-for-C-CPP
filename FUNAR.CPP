#include<stdio.h>
#include<conio.h>
int fun(int a[]);
void main()
{
 int a[5]={2,3,5,8,9};
 int i;
 clrscr();
 fun(a);
 for(i=0;i<5;i++)
 printf("%d",a[i]);
 getch();
}
int fun(int a[])
{
 int i;
 for(i=0;i<5;i++)
 printf("%d",a[i]);
 return 0;
}