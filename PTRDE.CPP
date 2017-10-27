/* void pointer*/
#include<stdio.h>
#include<conio.h>
void main()
{
 float  a=2.36;
 int b=20;
 void *vp;
 clrscr();
 vp=&a;
 printf("a value=%f",*((float *)vp));
 vp=&b;
 printf("b value=%d",*((int *)vp));
 getch();

}


