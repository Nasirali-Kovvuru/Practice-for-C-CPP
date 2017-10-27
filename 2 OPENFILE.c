//W.A.P. To display the contents of file1.txt file
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
void main()
{
 FILE *fp;
 char ch;
 clrscr();
 fp=fopen("file1.txt","r");
 if(fp==NULL)
 {
  printf("Unable to open the file");
  getch();
  exit(0);
  }
 while((ch=getc(fp))!=EOF)
 putchar(ch);
 fclose(fp);
 getch();
}















