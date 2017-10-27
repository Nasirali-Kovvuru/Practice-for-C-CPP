/*program to demonstrate for loop*/
#include<stdio.h>
main()
{
	int n,i;
	long res=1;
	clrscr();
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		res=res*i;
	}
	printf("Result=%ld",res);
	getch();
}