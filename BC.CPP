/* print your */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,n;
	clrscr();

	for(i=1;i<=5;i++)
	{
	 if(i<3)
	 {
	  printf("%d ",i);
	  continue;
	 }
	 else
	 {
	  printf("* ");
	  break;
	 }

	 printf("a ");

	}


	getch();
}