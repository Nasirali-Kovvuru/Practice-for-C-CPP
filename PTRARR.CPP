/*passing arrys to ptr*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5]={10,5,6,2,3},i;
 int *p,*pmax,*pmin;
 p=&a[0];
 clrscr();
 *pmax=*pmin=a[0];
 for(i=1;i<5;i++)
 {
  if(*(p+i)>*pmax)
  *pmax=*(p+i);
  else if(*(p+i)<*pmin)
   *pmin=*(p+i);
  }
 printf("max = %d min=%u\n",*pmax,*pmin);
 getch();

}
