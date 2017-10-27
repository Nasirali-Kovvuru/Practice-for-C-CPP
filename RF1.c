// Write a program to calculate the factorial of given number
// using Recursive function.
# include <stdio.h>
# include <conio.h>
void main()
{
 int n;
 int fact(int);
 clrscr();
 printf("Enter any number ");
 scanf("%d",&n);
 printf("\n The factorial of %d is %d ",n,fact(n));
 getch();
}
int fact(int num)
{
int f;
if(num==1)
return 1;
else
f=num+fact(num-1);
return f;
}

