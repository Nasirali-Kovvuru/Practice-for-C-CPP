/*program to print fibonacci series*/
#include<stdio.h>
main()
{
	int pr;
	b:
	clrscr();
	printf("Enter p value");
	scanf("%d",&pr);
	if(pr<2000)
	{
	 printf("wrong entry");
	 getch();
	 goto b;
	}
	printf("\npr =%d",pr);

	getch();
}
