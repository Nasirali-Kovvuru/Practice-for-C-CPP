/* print your */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,n,count;
	clrscr();
	printf("Enterr n");
	scanf("%d",&n);

	for(count=0,i=1;i<=n;i++)
	{
	 if(n%i==0)
	 count++;
	}
	if(count==2)
	 printf("given no is prime");
	else
	 printf("Not Prime");
	getch();
}