#include<stdio.h>
#include<conio.h>
void main()
{
int Empid;
char name[20],adress[20],des[20];
double sal,phno;
clrscr();
printf("\n\n\t\nEnter Empid:");
scanf("%d",&Empid);
printf("\n\n\t\nEnter Empname:");
scanf("%s",&name);
printf("\n\n\t\nEnter Empadress:");
scanf("%s",&adress);
printf("\n\n\t\nEnter Emp designation:");
scanf("%s",&des);
printf("\n\n\t\nEnter Empsal:");
scanf("%lf",&sal);
printf("\n\n\t\nEnter Empphno:");
scanf("%lf",&phno);


printf("\n\n\tEmp id is:%d\n\t\nEmp name is:%s\n\t\nEmp adress is:%s\n\t\nEmp designation is:%s\n\t\nEmp sal is:%lf\n\t\nEmp phno is:%lf",Empid,name,adress,des,sal,phno);

getch();

}