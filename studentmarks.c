#include<stdio.h>
#include<conio.h>
void main()
{
int stdid;char name[20];
double m1,m2,m3,m4,m5,m6,total,average;
clrscr();
printf("\n\n\tEnteer student id:");
scanf("%d",&stdid);
printf("\n\n\tEnteer student name:");
scanf("%s",&name);
printf("\n\n\tEnter your Subject marks:");
scanf("%lf%lf%lf%lf%lf%lf",&m1,&m2,&m3,&m4,&m5,&m6);
total=m1+m2+m3+m4+m5+m6;
average=total/6;
if(m1<=35||m2<=35||m3<=35||m4<=35||m5<=35||m6<=35)
{
printf("\n\n\tFail");
}
else
{
if(average>=75)
{
printf("\n\n\tA Grade:");
printf("\n\n\tStudent id is:%d",stdid);
printf("\n\n\tStudent name is:%s",name);
printf("\n\n\tStudent Marks are:%lf",total);
printf("\n\n\tStudent average is:%lf",average);
}
else if(average>=60&&average<75)
{
printf("\n\n\tB Grade:");
printf("\n\n\tStudent id is:%d",stdid);
printf("\n\n\tStudent name is:%s",name);
printf("\n\n\tStudent Marks are:%lf",total);
printf("\n\n\tStudent average is:%lf",average);
}
else if(average>=50&&average<60)
{
printf("\n\n\tC Grade:");
printf("\n\n\tStudent id is:%d",stdid);
printf("\n\n\tStudent name is:%s",name);
printf("\n\n\tStudent Marks are:%lf",total);
printf("\n\n\tStudent average is:%lf",average);
}
}
getch();
}