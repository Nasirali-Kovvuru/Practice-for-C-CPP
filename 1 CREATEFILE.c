//W.A.P. To create a text file

# include <stdio.h>
# include <conio.h>
void main()
{
 FILE *fp;
 char ch;
 clrscr();
 fp=fopen("file2.txt","w");
 printf("Enter few lines ^z to stop ");
 while((ch=getchar())!=EOF)
 putc(ch,fp);
 fclose(fp);
}











