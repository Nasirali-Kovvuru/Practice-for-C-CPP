//UNION
//EXAMPLE PROGRAM FOR UNION
# include <stdio.h>
# include <conio.h>
void main()
{
 union employ
 {
  int eno;
  char name[10];
  float basic;
 };
 union employ e;
 clrscr();
 printf("\n The size of the union is %d",sizeof(e));
 printf("\n Enter employ number  ");
 scanf("%d",&e.eno);
 printf("Employ number is %d",e.eno);
 printf("\n Enter employ name  ");
 scanf("%s",e.name);
 printf("Employ name is %s ",e.name);
 printf("\n Enter basic salary  ");
 scanf("%f",&e.basic);
 printf("\n Employ basic is %f ",e.basic);
 getch();
}
 /*
 A union is similar to structure, but the
 difference is
 1) The size of the structure variable is
    sum of all the members size, but
    union size is the maximum member's size.
 2) In structure we can see all members at
    a time, but in union we can see only one
    member at a time because when we store
    the second member, first value will be
    over written.
 */









