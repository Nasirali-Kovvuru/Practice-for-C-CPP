// W.A.P. To calculate all arithmetic operations 
// of two numbers using pointers

# include <stdio.h>
# include <conio.h>
void main()
{
 int a,b,add,sub,mul,div;
 int *x,*y;
 clrscr();
 x=&a;   //a=*x
 y=&b;   //b=*y
 printf("Enter a,b values   ");
 scanf("%d%d",&a,&b);
// scanf("%d%d",x,y);

 add=a + b;
 sub=*x - *y;
 mul=*x * *y;
 div=*x / *y;
 printf("\n Addition is  %d",add);
 printf("\n Subtraction is %d",sub);
 printf("\n Multiplication is %d",mul);
 printf("\n Division is  %d",div);
 getch();
}


