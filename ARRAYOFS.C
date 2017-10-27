// Write a program to print more details using array of structures.

#include<stdio.h>
#include<conio.h>
void main()
{
 int i;
 struct employee
  {
   int idno;
   char name[20];
   int sal;
  };
 struct employee e[3];
 clrscr();
 for(i=0;i<=2;i++)
  {
   printf("Enter employee number");
   scanf("%d", &e[i].idno);
   printf("Enter employee name");
   scanf("%s", e[i].name);
   printf("Enter salary");
   scanf("%d",&e[i].sal);
  }
 clrscr();
 printf("\nIDNO\tNAME\tSALARY");
 printf("\n----------------------------");
 for(i=0;i<=2;i++)
  {
   printf("\n%d\t%s\t%d",e[i].idno,e[i].name,e[i].sal);
  }
 getch();
}

