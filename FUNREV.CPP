#include<stdio.h>
#include<conio.h>
int rev(int);

void main()
{
 clrscr();
 printf("%d",rev(123));
 getch();
}

int rev(int n)
{
 int rv=0;
 for(;n!=0;n/=10)
 rv=rv*10+n%10;
 return rv;
}