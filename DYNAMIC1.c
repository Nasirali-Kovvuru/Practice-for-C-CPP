#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* single variable dynamically */

void main()
{
int *pval;

pval= (int*) malloc(sizeof(int));

clrscr();

	scanf("%d",pval);

	printf("%d",*pval);
getch();
}