// Write a program to compare one string to another string.

# include <stdio.h>
# include <conio.h>
# include <string.h>
void main()
{
  char name1[20],name2[20];
  clrscr();
  printf("Enter your first string");
  scanf("%s",name1);

  printf("Enter your second string");
  scanf("%s",name2);

  if(strcmp(name1,name2)==0)
  printf("Two strings are equal");
  else
  printf("Two strings are not equal");
  getch();
}

