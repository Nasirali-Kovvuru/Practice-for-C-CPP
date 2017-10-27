/*program to demostrate area of circle using functions*/
#include<stdio.h>
main()
{
	int rad;
	double area;
	double areaofcircle(int);
	clrscr();
	printf("Enter the radius:");
	scanf("%d",&rad);
	area=areaofcircle(rad);
	printf("Area = %lf",area);
	printf("Enter radius again:");
	scanf("%d",&rad);
	area=areaofcircle(rad);
	printf("Area = %lf",area);
	getch();
}
double areaofcircle(int r)
{
	double a;
	a=3.14*r*r;
	return a;
}