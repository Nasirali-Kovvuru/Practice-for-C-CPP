#include<stdio.h>
#include<conio.h>
void main()
{
int Empid;
char name[20],adress[20],des[20];
double phno,sal;
clrscr();
printf("\n\n\tEntter Empid:");
scanf("%d",&Empid);

printf("\n\n\tEntter Empname:");
scanf("%s",&name);

printf("\n\n\tEntter Empadress:");
scanf("%s",&adress);

printf("\n\n\tEntter empdes:");
scanf("%s",&des);

printf("\n\n\tEntter Empphno:");
scanf("%lf",&phno);

printf("\n\n\tEntter Empsal:");
scanf("%lf",&sal);

printf("\n\t\nEmp id is:%d",Empid);

printf("\n\t\nEmp name is:%s",name);

printf("\n\t\nEmp adress is:%s",adress);

printf("\n\t\nEmp des is:%s",des);

printf("\n\t\nEmp phno is:%lf",phno);

printf("\n\t\nEmp sal is:%lf",sal);

getch();
}