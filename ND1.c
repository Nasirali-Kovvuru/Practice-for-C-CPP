//Write a program to print some designs using nested for loop.

#include<stdio.h>
#include<conio.h>
  void main()
  {
  int i,j,k,l,n;
  clrscr();
  printf("enter any number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(k=n;k>=i;k--)
    {
    printf("   ");
    }
      for(j=1;j<=i;j++)
       {
	printf(" * ");
       }
       for(j=1;j<=i;j++)
       {
	printf(" * ");
       }
       for(k=n;k>=i;k--)
       {
       printf("   ");
       }
      printf("\n");

    }
    for(l=n;l<=6;l++)
	{
    for(i=n;i>=1;i--)
  {
    for(k=n;k>=i;k--)
    {
    printf("   ");
    }
      for(j=1;j<=i;j++)
       {
	printf(" * ");
       }
       for(j=1;j<=i;j++)
       {
	printf(" * ");
       }
       for(k=n;k>=i;k--)
       {
       printf("   ");
       }
      printf("\n");

    }
    }
    getch();
  }
