// Write a program to find the given number is prime or not using functions.

# include <stdio.h>
# include <conio.h>
void main()
{
 int prime(int);
 int n;
 clrscr();
 printf("\n Enter a number  ");
 scanf("%d",&n);
 if(prime(n))
 printf("\n Prime number ");
 else
 printf("\n Not prime number ");
 getch();
}
int prime(int num)
{
  int i,c=0;
  for(i=1;i<=num;i++)
  if(num%i==0)  c++;
  if(c==2)
  return 1;
  else
  return 0;
}






