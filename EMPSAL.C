#include<stdio.h>
#include<conio.h>
void main()
{
double basic,hra,da,ta,pf,it,grossal;
clrscr();
printf("\n\n\tEnter Emp basic sal:");
scanf("%lf",&basic);
hra=0.05*basic;
da=0.4*basic;
ta=0.3*basic;
pf=0.2*basic;
it=0.1*basic;
grossal=basic+hra+da+ta+pf+it;
clrscr();
printf("\n\n\tEmp basic sal is:%lf",basic);

printf("\n\n\tEmp Hra is:%lf",hra);

printf("\n\n\tEmp da  is:%lf",da);
printf("\n\n\tEmp ta  is:%lf",ta);

printf("\n\n\tEmp pf is:%lf",pf);

printf("\n\n\tEmp it is:%lf",it);

printf("\n\n\tEmp Gross sal is:%lf",grossal);


getch();

}