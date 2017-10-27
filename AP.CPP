/* print your */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,n,a,d,t;
	clrscr();
	printf("Enter first term");
	scanf("%d",&a);
	printf("Enter diffrence");
	scanf("%d",&d);
	printf("Enter no of terms");
	scanf("%d",&n);
	for( i=1; i<=n;i++)
	{
	  t=a+(i-1)*d;
	  printf("%d ",t);
	}

	getch();
}