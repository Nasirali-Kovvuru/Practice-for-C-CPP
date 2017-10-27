#include<stdio.h>
#include<conio.h>
void main()
{
int d;char ch;
clrscr();
printf("\n\n\tEnter your character:");
scanf("%c",&ch);
d=ch;
if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
{
printf("\n\n\tAscii value is:%c=%d",d,ch,ch=d);
printf("\n\n\tIts a character:");
}
else
{
printf("\n\n\tAscii value is:%c=%d",d,ch,ch=d);
printf("\n\n\tNumber:");
}
getch();
}