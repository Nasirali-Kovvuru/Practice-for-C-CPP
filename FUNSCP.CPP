#include<stdio.h>
#include<conio.h>
void scpy(char a[],char b[]);

void scpy(char a[],char b[])
{
 int i;
 for(i=0;b[i]!=0;i++)
 a[i]=b[i];
 a[i]='\0';
}

void main()
{
 char name[30],s[30];
 clrscr();
 printf("Enter any sting");
 gets(name);
 scpy(s,name);
 printf("s=%s\tname=%s",s,name);
 getch();
}


