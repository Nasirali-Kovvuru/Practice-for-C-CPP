#include<stdio.h>
#include<conio.h>
#define scanf1 printf
#define s scanf
void main()
{
 int rollno[5],s1[5],s2[5],s3[5],total[5],i;
 char name[5][20];
 float avg[5];
 clrscr();
 for(i=0;i<=4;i++)
  {
   scanf1("enter rollno");
   s("%d",&rollno[i]);
   //p("enter student name");
   //s("%s",name[i]);
   //p("enter first subject marks");
   //s("%d",&s1[i]);
  // p("enter second subject marks");
  // s("%d",&s2[i]);
  // p("enter third subject marks");
   //s("%d",&s3[i]);
  }
  for(i=0;i<=4;i++)
   {
    total[i]=s1[i]+s2[i]+s3[i];
    avg[i]=total[i]/3;
   }
 clrscr();
 //p("\n\tSTUDENTS RECORD");
 //p("\n-------------------------------------------");
 //p("\nRollno\tNames\tMaths\tScience\tEnglish\tTotal\tpercentage");
 for(i=0;i<=4;i++)
  //p("\n%d\t%s\t%d\t%d\t%d\t%d\t%f",rollno[i],name[i],s1[i],s2[i],s3[i],total[i],avg[i]);
 getch();
}














