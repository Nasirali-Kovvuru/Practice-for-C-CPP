/* print multiplication table 1-20 */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,j;
	clrscr();
       /*printf("Enterr n");
	scanf("%d",&n);*/

	for(i=1;i<=20;i++)
	{
	 for(j=1;j<=10;j++)
	  printf("%d X %d =%d\n",i,j,i*j);
	 printf("\n");
	}
	getch();
}