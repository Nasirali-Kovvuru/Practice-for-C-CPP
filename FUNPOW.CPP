#include<stdio.h>
#include<conio.h>
#include<math.h>
long int power(int,int);

long int power(int x,int y)
{
 long long int p=1,i;
 for(i=1;i<=y;i++)
 p=p*x;
 return p;
}

void main()
{
 long int p;
 int x,a,b,c;
 clrscr();
 printf("Enter x,a,b,c values");
 scanf("%d%d%d%d",&x,&a,&b,&c);

 p=pow(pow(pow(x,a),b),c);

 printf("power %ld",p);
 getch();
}

