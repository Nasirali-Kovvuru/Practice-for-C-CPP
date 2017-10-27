#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3,tot;
	float avg;
	clrscr();
	printf("Enter Three subject marks");
	scanf("%d%d%d",&s1,&s2,&s3);
	if(s1>=35 && s2>=35 && s3>=35)
	{
	 printf("Pass\n");
	 tot=s1+s2+s3;
	 avg=tot/3.0;
	 printf("Total = %d \nAverage = %f",tot,avg);
	}
	else
	 printf("FAIL");
	getch();
}