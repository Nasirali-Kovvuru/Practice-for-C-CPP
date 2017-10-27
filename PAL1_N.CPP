/* print amstrong nos from 1-n */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,j,n,m,rev;
	clrscr();
	printf("Enterr n");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
	 for(rev=0,m=i;m!=0;m=m/10)
	  rev=rev*10+m%10;
	 if(rev!=i)
	 printf("%d\t",i);
	}
	getch();
}