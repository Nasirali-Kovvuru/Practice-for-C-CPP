#include<stdio.h>
#include<conio.h>
void main()
{
	float avg;
	clrscr();
	printf("Enter average of a student");
	scanf("%f",&avg);
	if(avg>=90)
	 printf("Grade is A");
	else if(avg>=80)
	 printf("Grade is B");
	else if(avg>=70)
	 printf("Grade is C");
	else if(avg>=60)
	 printf("Grade is D");
	else if(avg>=35)
	 printf("Grade is E");
	else
	 printf("FAIL");
	getch();
}
