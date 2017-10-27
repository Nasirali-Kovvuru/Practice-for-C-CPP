/* format print */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],e,n,i,count=0;
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
	 count++;
	}
	printf("Element %d is found %d time(s)",e,count);
	getch();
}