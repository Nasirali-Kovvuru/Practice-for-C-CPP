#include<stdio.h>
#include<conio.h>

void main()
{
void display();
void add(int,int);
clrscr();
display();
add(10,20);
printf("\n%d",add1());
printf("\n%d",add2(10,20));
getch();

}
void display()
{
printf("\n\n\tWellcome:");
}
void add(int a,int b)
{
int c=a+b;
printf("\n\n\tAddition is:%d",c);
}
int add1()
{
int a=10,b=20;
return a+b;
}
int add2(int a,int b)
{
return a+b;
}