#include<stdio.h>
main()
{
	char *p;
	int strlinglen(char*);
	int n,len;
	clrscr();
	goto label;
	printf("Enter the value of n:");
	scanf("%d",&n);
	p=malloc(n+1);
	if(p==NULL)
	{
		printf("Unable to allocate memory");
		exit(0);
	}
	printf("Enter a string:");
	scanf("%s",p);
	len=stringlen(p);
	printf("Lenght = %d and string is %s",len,p);
	getch();
}
int stringlen( char *s)
{
	int i=0;
	*s='w';
	label: printf("jumped to stringlen");
	while(*(s+i) !='\0')
		i++;
	return i;
}