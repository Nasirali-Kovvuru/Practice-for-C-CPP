#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
 clrscr();
 printf("%d",fact(5));

 getch();
}


int fact(int x)
{
 int f=1;
 for(;x!=0;x--)
 f=f*x;
 return f;
}