// Write a program to input 10 integer values into
//a one dimentional array and display them using a user
//defined funciton using pointers.
# include <stdio.h>
# include <conio.h>
void main()
{
  void display(int *);
  int a[10],i;
  clrscr();
  printf("Enter 10 values    \n");
  printf("\nAddress of a is %u\n",a);
  for(i=0;i<10;i++)
  {
    printf("Enter %d number ",i);
    scanf("%d",&a[i]);
  }
  printf("\nThe given values are  \n");
  display(a);
  getch();
}
void display(int *b)
{
  int i;
  printf("\nAddress of b is %u\n",b);
  for(i=0;i<10;i++)
  printf("\naddress is %u  value is %d"	,b+i,*(b+i));
}