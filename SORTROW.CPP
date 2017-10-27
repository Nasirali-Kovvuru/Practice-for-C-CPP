#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
 int a[10][10],k,i,r,c,j,temp;
 clrscr();
 printf("Erter size of matrix");
 scanf("%d%d",&r,&c);


  printf("Enter %d elements of B arrry",r*c);
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }

 for(i=0;i<c;i++)
 {
  for(j=0;j<r;j++)
  {
   for(k=j+1;k<r;k++)
   {
    if(a[j][i]>a[k][j])
    {
     temp=a[j][i];
     a[j][i]=a[k][j];
     a[k][j]=temp;
    }
   }
  }
 }

 printf("\n after sorting matrix is\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
   printf("%4d",a[i][j]);
  printf("\n");
 }

  getch();
}




