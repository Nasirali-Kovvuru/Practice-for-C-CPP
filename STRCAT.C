/*program to compare 2 strings*/
#include<stdio.h>
main()
{
	char str1[50];
	int i=0,j=0,flag=0;
	clrscr();
	printf("Enter string1:");
	gets(str1);

	while(str1[i]!='\0')

		i++;


	i--;

	while(j<i)
	{
		if(str1[j]!=str1[i])
		{
			flag=1;
			break;
		}
		else
		{
			j++;
			i--;
		}
	}
	if(flag==1)
		printf("String is not a palindrome");
	else
		printf("String is a palindrome");
	getch();
}

