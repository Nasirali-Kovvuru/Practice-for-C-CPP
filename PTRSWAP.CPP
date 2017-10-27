/*call by ref of fact*/
#include<stdio.h>
#include<conio.h>
int fact(int *n);
void main()
{
 int x=5;
 int *ptr;
 ptr=&x;
 clrscr();
 printf("fact= %d",fact(ptr));
 printf("X valu= %d",x);
 getch();
}
int fact(int *n)
{
 int f=1;
 for(;*n!=0;(*n)--)
 f=*n*f;
 return f;
}

