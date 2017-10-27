// Write a program to input 10 integer valuxes
// into a one dimensional array and display
// them using pointers.

# include <stdio.h>
# include <conio.h>
void main()
{
  float a[10];int i;
  clrscr();
  printf("Enter 10 values    \n");
  for(i=0;i<6;i++)
  {
    scanf("%f",&a[i]);
  }
  printf("\nThe given values are  \n");
  for(i=0;i<6;i++)
  printf("\n The %d value is  %u",i,&a[i]);
  getch();
}


