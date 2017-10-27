#include<stdio.h>
#include<conio.h>
int fact(int*);
int main()
{
 int x=5;
 int *ptr;
 ptr=&x;
 
 printf("fact= %d",fact(&x));
 printf("X valu= %d",x);
 getch();
}
int fact(int *n)
{
 int f=1;
 for(;*n!=0;*n--)
 printf("%d",*n);
 f=*n*f;
 return f;

}