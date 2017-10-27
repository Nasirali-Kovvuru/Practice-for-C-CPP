#include<stdio.h>
main()
{
	clrscr();
	printf("hello\n");
	goto label;
	printf("World");
	printf("how are you");
label:  printf("Jummped");
	getch();
}