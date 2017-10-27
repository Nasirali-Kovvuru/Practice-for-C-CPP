/* print amstrong nos from 1-n */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,j,n,count;
	clrscr();
	printf("Enterr n");
	scanf("%d",&n);
	i=2;
	while(i<=n)
	{
	 count=0;
	 j=2;
	 while(j<i)
	 {
	   if(i%j==0)
	   {
	    count++;
	    break;
	   }
	 j++;
	 }
	 if(count==0)
	 printf("%d\t",i);
	 i++;
	}
 getch();
}

