#include<stdio.h>
main()
{
	struct date
	{
		unsigned int day : 5;
		unsigned int month : 4;
		unsigned int year: 7;
	};
	struct date dob={31,12,76};
	struct date dob1;


	clrscr();
	printf("%d\n",sizeof(dob));
	printf("%d\n",sizeof(dob1));
	printf("%u %u %u",dob.day,dob.month,dob.year);

	printf("Enter the date for dob1");
	scanf("%u%u%u", &dob1.day,&dob1.month,&dob1.year); /*error*/
	printf("%u %u %u",dob1.day,dob1.month,dob1.year);

	getch();

}