// Write a program to print the Pascal's triangle.

# include <stdio.h>
# include <conio.h>
void main()
{
 int b,p,q,r,x;
 clrscr();
 b=1;
 q=0;
 printf("Enter number of rows   :   ");
 scanf("%d",&p);
 printf("\n Pascal's triangle   :  \n");
 while(q<p)
 {
   for(r=40-3*q; r>0 ;r--)
   printf(" ");
   for(x=0;x<=q;x++)
   {
     if((x==0) || (q==0))
     b=1;
     else
     b=(b*(q-x+1))/x;
     printf("%6d",b);
   }
   printf("\n");
   q++;
 }
 getch();
}


