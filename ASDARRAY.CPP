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
	  for(count=0,j=0;j<n-i-1;j++)
	  {
	   if(a[j]>a[j+1])
	  {
	   a[j]=a[j]+a[j+1];
	   a[j+1]=a[j]-a[j+1];
	   a[j]=a[j]-a[j+1];
	   count++;
	  }
	  }
	  if(count==0)
	  break;
	}
	printf("assending order of array");
	for(i=0;i<n;i++)
	printf("\n%d",a[i]);
	getch();
}


