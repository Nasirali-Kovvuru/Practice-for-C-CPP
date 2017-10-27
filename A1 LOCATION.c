// W.A.P. to input n numbers into a one dimentional
// array input a number and find its location 
// in the array.

# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
void main()
{
 int a[100],i,n,num;
 clrscr();
 printf("Enter how many numbers  : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("Enter  %d  number  :  ",i);
  scanf("%d",&a[i]);
 }
 printf("\n Enter the element to find  : ");
 scanf("%d",&num);
 for(i=0;i<n;i++)
 {
  if(a[i]==num)
  {
    printf("\nThe number found at %d loacation",i);
    getch();
    exit(0);
  }
 }
 printf("\n The number not found ");
 getch();
}
