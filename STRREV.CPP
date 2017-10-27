/* Demo on string functions*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str[50],ch;
 int i,j,k,l;
 clrscr();
 printf("Enter any string");
 gets(str);

 /*
 for(l=0;str[l]!='\0';l++);
 for(k=l-1,i=0;i<l/2;k--,i++)
 {
  ch=str[i];
  str[i]=str[k];
  str[k]=ch;
 }*/
/*
 for(i=0;str[i]!='\0';i++)
 {
    if(str[i]>='a' && str[i]<= 'z')
    str[i]=str[i]-32;
 }*/

 for(i=0;str[i]!='\0';i++)
 {
  for(j=0;j<=i;j++)
  printf("%3c",str[j]);
  printf("\n");
 }
 for(i=i-2;i!=-1;i--)
 {
  for(j=0;j<=i;j++)
  printf("%3c",str[j]);
  printf("\n");
 }
 getch();




}