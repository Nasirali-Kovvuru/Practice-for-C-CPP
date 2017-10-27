/* Bitwise Operators*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float l,b,ar,p;
	clrscr();
	printf(" Enter l & Bb values");
	scanf("%f%f",&l,&b);
	ar=l*b;
	p=2*(l+b);
	printf("area of rectanle= %f",ar);
	printf("\nPerimeter of Rectangle = %f",p);
	getch();
}