//W.A.P. To store students details in a file called
//student.dat
# include <stdio.h>
# include <conio.h>
void main()
{
 FILE *fp;
 int sno,total;
 char name[20];
 clrscr();
 fp=fopen("student.dat","w");
 {
  printf("Enter student details  ");
  printf("\nenter s.no,name,total");

  scanf("%d%s%d",&sno,name,&total);
  fprintf(fp,"%d %s %d",sno,name,total);
  }
 fclose(fp);
}