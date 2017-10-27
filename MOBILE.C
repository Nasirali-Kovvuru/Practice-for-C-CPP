#include<stdio.h>
#include<conio.h>
void main()
{
int rc,option,offer;
clrscr();
printf("\n\n\t*******Select Your NetWorks******");
printf("\n\n\t1.Airtel");
printf("\n\n\t2.Idea");
printf("\n\n\t3.Vodafone");
printf("\n\n\t4.Jio");
printf("\n\n\t5.Bsnl\n");
scanf("%d",&option);
switch(option)
{
case 1:
printf("\n\n\t****Wellcome to Airtel Offers****");
printf("\n\n\tSelect your offer:");
printf("\n\n\t1.Rc 49 one gb data");
printf("\n\n\t2.Rc 99 Unlimited  data");
printf("\n\n\t3.Rc 199 unlimited calls\n");
scanf("%d",&offer);
switch(offer)
{
case 1:
printf("\n\n\tYour  Rc 49 has been successfully");
break;
case 2:
printf("\n\n\tYour  Rc 99 has been successfully");
break;
case 3:
printf("\n\n\tYour  Rc 199 has been successfully");
break;
}
break;
}
getch();
}