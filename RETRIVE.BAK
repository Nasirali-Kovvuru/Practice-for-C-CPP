//W.A.P to display students details from student.dat
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
void main()
{
 FILE *fp;
 int sno,total;
 char name[20];
 clrscr();
 fp=fopen("student.dat","r");
 if(fp==NULL)
 {
  printf("Unable to open the file");
  getch();
  exit(0);
  }
 printf("SNO \tNAME \tMARKS");
 {
  fscanf(fp,"%d%s%d",&sno,name,&total);
  printf("\n %d \t%s \t%d",sno,name,total);
 }
 fclose(fp);
 getch();
}
