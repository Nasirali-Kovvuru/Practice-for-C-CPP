/* rev*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rev=0;
	clrscr();
	printf("Enter n");
	scanf("%d",&n);
	while(n!=0)
	{
	 rev=rev*10+n%10;
	 n=n/10;
	}
	printf("reverse = %d",rev);

	getch();
}