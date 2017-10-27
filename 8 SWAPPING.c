// write a program to swap to values by
// using 3rd variable.

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter a & b values  ");
scanf("%d%d",&a,&b);
clrscr();
printf("\nBefore swapping a & b values are %d %d",a,b);
c=a;
a=b;
b=c;
printf("\nAfter swapping a & b values are %d %d",a,b);
getch();
}
