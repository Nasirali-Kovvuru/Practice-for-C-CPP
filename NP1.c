// Write a program to get the output 
// as  1 using nested for loop
//    1  0
//   1  0  1

#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k,n;
 clrscr();
 printf("Enter any number");
 scanf("%d",&n);
 clrscr();
 for(i=1;i<=n;i++)
  {
   for(k=n;k>i;k--)
   printf(" ");
   for(j=1;j<=i;j++)
    {
     printf("%2d",j%2);
    }
    printf("\n");
  }
 getch();
}

