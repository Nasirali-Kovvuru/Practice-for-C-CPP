//W.A.P. to input souce file name, and if it exists
//copy that file into target file.
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
void main()
{
 FILE *fs,*ft;
 char source[20],target[20],ch;
 clrscr();
 printf("\n Enter source file ");
 scanf("%s",source);
 fs=fopen(source,"r");
 if(fs==NULL)
 {
  printf("\n Source file not found ");
  getch();
  exit(0);
 }
 printf("\n Enter target file ");
 scanf("%s",target);
 ft=fopen(target,"w");

 while((ch=getc(fs))!=EOF)
 putc(ch,ft);
 printf("\n File copied successfully....");
 fclose(fs);
 fclose(ft);
 getch();
}