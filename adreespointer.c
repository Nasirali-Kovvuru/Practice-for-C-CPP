// Write  a program to print the matrix by 
// taking rows and columns//

#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10];
 int i,j,r,c,*pr,*pc;
 clrscr();
 pr=&r;  //*pr=r
 pc=&c;  //*pc=c
 printf("\n Enter no. of rows & columns \t:\t");
 scanf("%d %d", pr,pc);
 printf("\n Enter values into matrix");
 for(i=0;i<*pr;i++)
  {
   for(j=0;j<*pc;j++)
    {
     scanf("%d", (*(a+i)+j));
    }
   }
 for(i=0;i<*pr;i++)
  {
   for(j=0;j<*pc;j++)
    {
     printf("%3d", *(*(a+i)+j));
    }
   printf("\n");
  }
 getch();
}
