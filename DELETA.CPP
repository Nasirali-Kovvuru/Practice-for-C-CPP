/* format print */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],e,n,i,j;
	clrscr();
	printf("Enter size");
	scanf("%d",&n);
	printf("Enter arry elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter element to be searched");
	scanf("%d",&e);
	for(i=0;i<n;i++)
	{
	 if(a[i]==e)
	 {
	   for(j=i;j<n;j++)
	   a[j]=a[j+1];
	   n--;
	   i--;
	 }
	}
	printf("After deletion\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	getch();
}


