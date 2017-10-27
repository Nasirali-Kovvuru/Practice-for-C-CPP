#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
 int a[10][10],b[10][10],c[10][10],k,
 i,j,r1,c1,r2,c2;
 clrscr();
 printf("Erter size of A matrix");
 scanf("%d%d",&r1,&c1);
 printf("Enter size of B matrix");
 scanf("%d%d",&r2,&c2);
 if(c1!=r2)
{
 printf("Addition is not possible");
 getch();
 exit(0);
}
 printf("Enter %d elements of A arrry",r1*c1);
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c1;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
  printf("Enter %d elements of B arrry",r2*c2);
 for(i=0;i<r2;i++)
 {
  for(j=0;j<c2;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }

 for(i=0;i<r1;i++)
 {
  for(j=0;j<c2;j++)
  {
   c[i][j]=0;
   for(k=0;k<r2;k++)
   c[i][j]=c[i][j]+a[i][k]*b[k][j];
  }
 }

 printf("\n C matrix is\n");
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c1;j++)
   printf("%4d",c[i][j]);
  printf("\n");
 }

  getch();
}




