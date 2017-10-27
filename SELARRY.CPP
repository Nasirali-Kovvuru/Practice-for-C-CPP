/* format print */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],n,count,j,i;
	clrscr();
	printf("Enter size");
	scanf("%d",&n);

	printf("Enter arry elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	for(i=0;i<n;i++)
	{
	  for(j=i+1;j<n;j++)
	  {
	   if(a[i]>a[j])
	  {
	   a[i]=a[i]+a[j];
	   a[j]=a[i]-a[j];
	   a[i]=a[i]-a[j];
	  }
	  }

	}
	printf("assending order of array");
	for(i=0;i<n;i++)
	printf("\n%d",a[i]);
	getch();
}


