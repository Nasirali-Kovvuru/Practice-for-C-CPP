// Write a program to convert upper case string 
// to lower case string using ascii code.
// American Standard Code for Information Interchange 

#include<stdio.h>
#include<conio.h>

void main()
{
 int i=0;
 char string[20];
 clrscr();
 printf("Enter upper case string");
 gets(string);
 while(string[i]!='\0')
  {
   if(string[i]>='A'&&string[i]<='Z')  //if(string[i]>='a'&&string[i]<='z')
   string[i]=string[i]+32;             //string[i]=string[i]-32;
   i++;
  }
printf("\n upper case to lower case is %s",string);
getch();
}