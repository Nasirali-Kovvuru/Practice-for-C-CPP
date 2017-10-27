// Write a program using static storage classes.

# include <stdio.h>
# include <conio.h>
# define p printf();
extern int b=20;
void display()
{
 auto int n;
 p("\n The value of n is   %d\n%d",n,b);
 n++;
}
void main()
{
 clrscr();
 display();
 display();
 display();
 getch();
}

