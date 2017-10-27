/* dynamic memory allocation*/
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
	int *a,i,n;
	clrscr();
	printf("Enter size");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));
	printf("Enter arry elements");
	for(i=0;i<n;i++)
	scanf("%d",(a+i));
	for(i=0;i<n;i++)
	printf("%d\t",*(a+i));
	printf("\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	free(a);
	getch();
}


