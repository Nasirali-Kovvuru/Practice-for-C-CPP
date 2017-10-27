#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c=90;
clrscr();
printf("\n\n\tEnter a value:");
scanf("%d",&a);
if(a>=30)
{
printf("\n\n\tEnter b value:");
scanf("%d",&b);
if(b<=30)
{
printf("\n\n\tThe value of b is:%d",b);
}
printf("\n\n\tThe value of a is:%d",a);
}
printf("\n\n\t Tha value of c is:%d",c);
getch();
}
