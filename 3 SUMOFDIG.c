// Write a program to sum the digits of a given number.

#include<stdio.h>
#include<conio.h>
void main()
{
 int n,rem,sum=0;
 clrscr();
 printf("Enter any number");
 scanf("%d", &n);
 while(n>=1)
  {
   rem=n%10;
   sum=sum+rem;
   n=n/10;
  }
 printf("\n The sum of digits of given number is %d", sum);
 getch();
}

