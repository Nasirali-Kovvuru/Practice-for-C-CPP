/**/
#include<stdio.h>
#include<conio.h>
main()
{
	int a=10,b=20,c=30;
	clrscr();
	goto x;
	if(a>b)
	{
	 y: printf("y");
	 goto z;
	}
	else if(a>c)
	{
	 x: printf("x");
	 goto y;
	}
	z: printf("z");
	getch();
}

