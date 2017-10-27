/* Demo on string functions*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str1[50];
 int l,wordc;
 clrscr();
 printf("Enter any string");
 gets(str1);

 for(wordc=0,l=0;str1[l]!='\0';l++)
 {
  if(str1[l]==' '&& str1[l+1]!=' ')
  wordc++;
 }

 printf("no of words =%d",wordc+1);
 getch();
}