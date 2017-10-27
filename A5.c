// Write a program to find the number of times a
// character appears in a string 

#include<stdio.h>
#include<conio.h>
void main()
{
 char string[10], f;
 int i, c=0;
 clrscr();
 printf("Enter any string  ");
 gets(string);
 printf("Enter a letter to find in a string   :  ");
 scanf("%c", &f);
 for(i=0;i<=9;i++)
  {
   if(string[i]==f)
    {
     c++;
    }
  }
 printf("The letter '%c' appears '%d' times in the '%s'", f,c,string);
 getch();
}
