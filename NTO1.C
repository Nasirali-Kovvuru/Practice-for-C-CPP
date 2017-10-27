/*program to print factorial of a number*/
#include<stdio.h>
main()
{
	int n,n1;
	long res=1;
	clrscr();
	printf("Enter a number");
	scanf("%d",&n);
	n1=n;
	while(n>=1)
	{
		res=res*n;
		n=n-1;
	}
	printf("Factorial of %d is %ld",n1,res);
	getch();
}
