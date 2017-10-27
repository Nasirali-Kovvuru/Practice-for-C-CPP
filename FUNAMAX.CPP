#include<stdio.h>
#include<conio.h>
void inpt(int a[]);
void disp(int a[]);
int max(int a[]);

void inpt(int a[])
{
  int i;
  for(i=0;i<5;i++)
  scanf(
  "%d",&a[i]);
}
void disp(int a[])
{
  int i;
  for(i=0;i<5;i++)
  {
   printf("%d",a[i]);
   printf("\n");
  }
}
int max(int a[])
{
 int max=a[0],i;
 for(i=1;i<5;i++)
 {
  if(a[i]>max)
  max=a[i];
 }
 return max;
}
void main()
{
 int b[20];
 clrscr();
 printf("array elements");
 inpt(b);
 printf("Max=%d",max(b));
 getch();
}


