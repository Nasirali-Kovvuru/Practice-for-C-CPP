#include <stdio.h>
#include<conio.h>
#include<alloc.h>
#include<process.h>

void main()
{
   char *str1,*str2;
   int m,n;
   void stringcat(char*,char*);

   clrscr();

   printf("Enter the lenght of first string:");
   scanf("%d",&m);
   printf("Enter the lenght of second string:");
   scanf("%d",&n);

   str1=(char*)malloc(m+n+1);
   if(str1==NULL)
   {
	printf("Unable to allocate memory");
	exit(0);
   }

   str2=(char*)malloc(n+1);
   if(str2==NULL)
   {
	printf("Unable to allocate memory");
	exit(0);
   }
   printf("Enter first string:");
   scanf("%s",str1);

   printf("Enter second string:");
   scanf("%s",str2);
   stringcat(str1,str2);

   printf("The combined string is %s",str1);
   getch();
}

void stringcat(char *str1,char *str2)
{
	int i=0,j=0;
	while(*(str1+i)!='\0')
		i++;

	while(*(str2+j)!='\0')
	{
		*(str1+i)=*(str2+j);
		i++;
		j++;
	}
	*(str1+i)='\0';
}




