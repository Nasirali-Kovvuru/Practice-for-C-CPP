//Program to  input a file name and display its contents
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
void main()
{
 FILE *fp;
 char ch,name[20];
 clrscr();
 printf("\n Enter the file name to open ");
 scanf("%s",name);
 fp=fopen(name,"r");
 if(fp==NULL)
 {
  printf("\n File not found ");
  getch();
  exit(0);
 }
 printf("\n The contents of  %s\n",name);
 while((ch=getc(fp))!=EOF)
 putchar(ch);
 fclose(fp);
 getch();
}







