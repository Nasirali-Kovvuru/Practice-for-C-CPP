#include<stdio.h>
#include<conio.h>
#include<process.h>
void inpt(int a[][5],int,int);
void disp(int a[][5],int,int);
void add(int a[][5],int b[][5],int c[][5],int,int,int,int);
void mul(int a[][5],int b[][5],int c[][5],int,int,int,int);

void inpt(int a[][5],int r,int c)
{
  int i,j;
  for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
   scanf("%d",&a[i][j]);
  }
}

void disp(int a[][5],int r,int c)
{
  int i,j;
  for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
   printf("%3d",a[i][j]);
   printf("\n");
  }
}

void add(int c[][5],int a[][5],int b[][5],int r1,int r2,int c1,int c2)
{
  if(r1!=r2 && c1!=c2)
  {
   printf("Addition not possible");
   exit(0);
  }
  int i,j;
  for(i=0;i<3;i++)
  {
  for(j=0;j<3;j++)
  c[i][j]=a[i][j]+b[i][j];
  }
}
void mul(int c[][5],int a[][5],int b[][5],int r1,int r2,int c1,int c2)
{
 if(r2!=c1)
 {
  printf("Multiplication is not possible");
  exit 0;
 }
  int i,j,k;
  for(i=0;i<r1;i++)
  {
  for(j=0;j<c2;j++)
  {
   c[i][j]=0;
   for(k=0;k<r2;k++)
  c[i][j]=c[i][j]+a[i][k]*b[k][j];
  }
}
}

void main()
{
 int x[10][5],y[10][5],z[10][5],m[10][5],r1,r2,c1,c2;
 clrscr();
 printf("Entrer size of x matrix");
 scanf("%d%d",&r1,&c1);
 printf("Entrer size of y matrix");
 scanf("%d%d",&r2,&c2);
 printf("Enter x Matrix elements");
 inpt(x,r1,c1);
 printf("Enter y Matrix elements");
 inpt(y,r2,c2);
 add(z,x,y,r1,r2,c1,c2);
 printf("x Matrix is \n");
 disp(x,r1,c1);
 printf("Y Matrix is\n");
 disp(y,r2,c2);
 printf("Z matrix\n");
 disp(z,r1,c1);

 mul(m,x,y,r1,r2,c1,c2);
 disp(mul);
 getch();
 }









