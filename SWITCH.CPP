#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,res;
	int choice;
	enum operation {add=1,sub,mul,div,quit};
	enum operation op;
	op=20;
	clrscr();
	printf("%d",op);
/*	printf("\n\n\t****select Your Choice******\n");

	printf("1. Addition:\n");
	printf("2. sub:\n");
	printf("3. Multiply:\n");
	printf("4. Divison:\n");
	printf("5. Quit:\n");
	printf("Enter your choice:\n");
	scanf("%d",&choice);
	clrscr();
	switch(choice)
	{
		case add:
			printf("\n\n\tEnter a,b values:");
			scanf("%f%f",&a,&b);
			res=a+b;
			printf("\n\n\tAddition is:%f",res);
			break;
		case sub:
			printf("\n\n\tEnter a,b values:");
			scanf("%f%f",&a,&b);
			res=a-b;
			printf("\n\n\tSub is:%f",res);
			break;
		case mul:
			printf("\n\n\tEnter a,b values:");
			scanf("%f%f",&a,&b);
			res=a*b;
			printf("\n\n\tMul is:%f",res);
			break;
		case div:
			printf("\n\n\tEnter a,b values:");
			scanf("%f%f",&a,&b);
			res=a/b;
			printf("\n\n\tDiv is:%f",res);
			break;
		case quit:
			exit(0);
		default:
			printf("Invalid choice");
	}*/
	getch();
}