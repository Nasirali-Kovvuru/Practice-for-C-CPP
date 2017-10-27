/* Structure demo*/
#include<stdio.h>
#include<conio.h>
struct employee
{
 float sal;
 char eid[20];
 int age;
};
struct employee *e;
void main()
{
 clrscr();
 printf("Enter asl of emp");
 scanf("%f",e->sal);
 printf("Enter eid");
 scanf("%s",e->eid);
 printf("Enter age");
 scanf("%d",e->age);
 printf("Employee details");
 printf("Eid=%s\t Sal= %f\t age=%d",e->eid,e->sal,e->age);
 getch();

}

