// Examples for a pointer

# include <stdio.h>
# include <conio.h>
void main()
{
 int i=10,*j;

 j=&i;    //i=*j
 clrscr();

 printf("\n the address of i is %u ",&i);
 printf("\n the address of i is %u",j);
 printf("\n the value of i is %d ",i);
 printf("\n the value of i is %d",*j);
 printf("\n the address of j is %u",&j);
 getch();
}















