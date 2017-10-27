#include<stdio.h>
#include<conio.h>
int rev(int);
int rv=0;
void main()
{
 clrscr();
 printf("rev =%d",rev(234));
 getch();
}
int rev(int x)
{
   rv=rv*10 + x%10;
 if(x>0)
 {
   return (x/10);
 }
  else
  return rv;

}