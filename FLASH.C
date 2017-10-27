// Write a program to get the output as 1 using nested for loop
//				       1 2
//				      1 2 3
//                                   1 2 3 4

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,s=38;
clrscr();
for(i=1;i<=10;i++)
{
  for(k=1;k<=s;k++)
  printf(" ");
  for(j=1;j<=i;j++)
  {
   textcolor(458*i*j);
   textbackground(RED);
   cprintf("%4d",j);
   }
   s=s-2;
   printf("\n");
   }
   getch();
   }