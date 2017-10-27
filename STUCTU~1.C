//  W.a.p. to store 5 students details into an array of structure and display
//  them in descending order depending on their total marks
# include <stdio.h>
# include <conio.h>
void main()
{
 struct student
 {
  int sno;
  char name[20];
  int total;
 };
 struct student a[5],tmp;
 int i,j;
 clrscr();
 for(i=0;i<5;i++)
 {
   printf("\n Enter %d student details  ",i);
   printf("\nEnter student no ");
   scanf("%d",&a[i].sno);
printf(" Enter student name  ");
   scanf("%s",a[i].name);
      printf(" Enter student marks  ");
   scanf("%d",&a[i].total);
 }
 for(i=0;i<5;i++)
 for(j=i+1;j<5;j++)
 if(a[j].total>a[i].total)
 {
   tmp=a[i];
   a[i]=a[j];
   a[j]=tmp;
 }
 printf("\n The sorted list is  \n");
 printf("\nSNO\t\tNAME\t\tTOTAL");
 for(i=0;i<5;i++)
 printf("\n%d\t\t%s\t\t%d",a[i].sno,a[i].name,a[i].total);
 getch();
}