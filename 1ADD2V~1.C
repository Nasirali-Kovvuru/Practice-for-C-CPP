// Write a program sum of 2 values with parameters
// with return value by using functions.

#include<stdio.h>
#include<conio.h>
int sum(int,int);
void main()
{
int a,b,c;
clrscr();
printf("Enter a & b values");
scanf("%d %d", &a,&b);
c=sum(a,b);
printf("sum = %d",c);
getch();
}

int sum(int x, int y)
{
int z;
z=x+y;
return z;
}


