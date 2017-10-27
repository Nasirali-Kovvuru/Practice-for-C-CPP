/*program to demonstrate 2d array*/
#include<stdio.h>
main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,m,n;
	clrscr();
	printf("Enter the number of rows and columns:");
	scanf("%d%d",&m,&n);

	for(i=0 ; i < m ; i++)
	{
		for(j=0; j<n;j++)
		{
			printf("Enter the element:A[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0 ; i < m ; i++)
	{
		for(j=0; j<n;j++)
		{
			printf("Enter the element:B[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0 ; i < m ; i++)
	{
		for(j=0; j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}


	getch();
}
