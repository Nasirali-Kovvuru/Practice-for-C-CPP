#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char s[100][20],str[20];
 int i;
 clrscr();

 /*Serch a string*/
 printf("Enter 5 strings");
 for(i=0;i<5;i++)
 gets(s[i]);

 printf("Enter string to be searched");
 gets(str);
 int c=0;
 for(i=0;i<5;i++)
 {
  if(strcmp(str,s[i])==0)
  {
   printf("%s is found at %d place",str,i+1);
   c++;
  }
 }

 if(c==0)
 printf("String not found");

 getch();
}