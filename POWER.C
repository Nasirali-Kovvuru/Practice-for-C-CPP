/*program to print the power to a number*/
#include<stdio.h>
main()
{
	int n,i=1,sum=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i=i+1;
	}
	printf("Result=%d",sum);
	getch();

}