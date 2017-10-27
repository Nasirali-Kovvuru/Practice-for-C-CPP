#include<stdio.h>

main()
{
	struct student
	{
		char name[50];
		int age;
	};

	struct student s1={"Ajay",20},s2;
	clrscr();
	s2=s1;
	if((strcmp(s1.name,s2.name) == 0) && (s1.age == s2.age))
		printf("Both structures are same");
	else
		printf("Both structures are different");
	getch();
}



