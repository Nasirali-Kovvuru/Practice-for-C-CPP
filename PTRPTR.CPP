/*call by ref of fact*/
#include<stdio.h>
#include<conio.h>
void rev(int *a);
void main()
{
 int a=10;
 int *p1,**p2,***p3;
 clrscr();
 p1=&a;
 p2=&p1;
 p3=&p2;
 printf("%d %d %d %d %d",a,*&a,*p1,**p2,***p3);
 getch();
}
