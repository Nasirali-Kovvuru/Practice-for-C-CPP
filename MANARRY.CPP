#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
 int a[10][10],i,j,r,c,n=1;
 clrscr();
 printf("Erter size of matrix");
 scanf("%d%d",&r,&c);
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
  a[i][j]=n++;
  }
 }

 printf("\na array elements are\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
   printf("%4d",a[i][j]);
  printf("\n");
 }
 getch();
}




