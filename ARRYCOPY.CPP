/* format print */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],i,n,b[50];
	clrscr();
	/* inputing size */
	printf("Enter size ");
	scanf("%d",&n);
	/* inputing array*/
	printf("Enter %d nos of 'A' arry",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	/* Copy **/
	for(i=0;i<n;i++)
	{
	 b[i]=a[i];
	}
	printf("B arry elements are\n");
	for(i=0;i<n;i++)
	printf("%d\n", b[i]);




	getch();
}







