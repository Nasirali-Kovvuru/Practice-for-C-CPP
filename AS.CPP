#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char ch;
	clrscr();
	printf("Enter any charector");
	scanf("%c",&ch);
	ch=tolower(ch);
	printf("ch = %c",ch);
	getch();
}