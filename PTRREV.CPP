/*call by ref of fact*/
#include<stdio.h>
#include<conio.h>
void rev(int *a);
void main()
{
 int x=253;
 clrscr();
 rev(&x);
 printf("\nX valu= %d",x);
 getch();
}
void rev(int *n)
{
 int rv=0;
 for(;*n!=0;*n=*n/10)
 rv=rv*10+(*n)%10;
 *n=rv;
}

