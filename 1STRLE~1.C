// Write a program to find the length of a string

#include<stdio.h>
void main()
{
	char name[50];
	int i=0;
	clrscr();
	printf("Enter any string:");
	gets(name);
	while(name[i]!='\0')
		i++;
	printf("The length of the string is %d",i);
	getch();
}