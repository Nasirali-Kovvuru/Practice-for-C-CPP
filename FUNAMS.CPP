#include<stdio.h>
#include<conio.h>
int sum(int);
int power(int,int);
void check(int, int);

void main()
{
 int n;
 clrscr();
 printf("Enter a no");
 scanf("%d",&n);
 check(sum(n),n);
 getch();
}
int power(int x,int y)
{
 int p=1;
 for(;y!=0;y--)
 p=p*x;
 return p;
}
void check(int x,int y)
{
 if(x==y)
  printf("given no is amstrong number");
 else
  printf("Given no is not amstrong");
}

int sum(int n)
{
 int s=0;
 for(;n!=0;n/=10)
 s=s+power(n%10,3);
 return s;
}
