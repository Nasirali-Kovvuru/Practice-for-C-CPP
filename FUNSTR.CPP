#include<stdio.h>
#include<conio.h>
void inpt(int a[],int);
void disp(int a[],int);
int max(int a[],int);

void inpt(int a[],int n)
{
  int i;
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
}
int max(int a[],int n)
{
 int max=a[0],i;
 for(i=1;i<n;i++)
 {
  if(a[i]>max)
  max=a[i];
 }
 return max;
}
void main()
{
 int b[20],s;
 clrscr();
 printf("Enter size of array");
 scanf("%d",&s);
 printf("array elements");
 inpt(b,s);
 printf("Max=%d",max(b,s));
 printf("s=%d",s);
 getch();
}


