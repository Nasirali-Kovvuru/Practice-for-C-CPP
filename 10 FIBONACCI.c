// Write a program to print the fibonacci series below
// the given number
// 0  1   1   2   3   5   8  13  ......   n

# include <stdio.h>
# include <conio.h>
void main()
{
 int num,a=0,b=1,c;
 clrscr();
 printf("Enter any number  :  ");
 scanf("%d",&num);
 printf("\n%d \n%d",a,b);
 c=a+b;
 while(c<=num)
 {
  printf("\n%d",c);
  a=b;
  b=c;
  c=a+b;
  }
  getch();
}









