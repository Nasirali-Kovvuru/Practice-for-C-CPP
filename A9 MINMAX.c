// Write a program to find Maximum and 
// Minimum of natural numbers

# include <stdio.h>
# include <conio.h>
void main()
{
 int a[100],i,n,max,min;
 clrscr();
 printf("\n Enter how many numbers    ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\n Enter  %d  number   ",i);
  scanf("%d",&a[i]);
 }
 max=a[0];
 min=a[0];
 for(i=1;i<n;i++)
 {
   if(a[i]>max)
   max=a[i];
   if(a[i]<min)
   min=a[i];
 }
 printf("\n The maximum number is  %d",max);
 printf("\n The minimum number is  %d",min);
 getch();
}









