#include<stdio.h>
#include<conio.h>
void main()
{
int stud[4][2];
int i,j;
clrscr();
for(i=0;i<=3;i++)
{
printf("Enter rollno, and marks");
scanf("%d %d",&stud[i][0],&stud[i][1]);
}
for(i=0;i<=3;i++)
printf("%d %d\n",stud[i][0],stud[i][1]);
getch();
}