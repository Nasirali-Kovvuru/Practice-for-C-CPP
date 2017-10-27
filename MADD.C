/*program to add 2 matrices using function*/
#include<stdio.h>
main()
{
	int a[10][10],b[10][10],c[10][10];
	void matrixadd(int[10][10],int[10][10],int[10][10],int,int);
	int m,n,i,j;
	clrscr();
	printf("Enter the number of rows and columns:");
	scanf("%d%d",&m,&n);

	printf("Enter the elements for A\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter element A[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("Enter the elements for B\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter element B[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	matrixadd(a,b,c,m,n);

	printf("The elements for C are\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);

		}
		printf("\n");
	}

	printf("Enter the number of rows and columns:");
	scanf("%d%d",&m,&n);

	printf("Enter the elements for A\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter element A[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("Enter the elements for B\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter element B[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}

	matrixadd(a,b,c,m,n);


	printf("The elements for C are\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);

		}
		printf("\n");
	}
	getch();
}

void matrixadd(int a[10][10],int b[10][10],int c[10][10],int m ,int n)
{
	int i=0,j=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];

		}
	}
}