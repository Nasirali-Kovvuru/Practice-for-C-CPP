# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
void main()
{
  char ch,name[20];
  FILE *fp;
  int noc,now,nol;
  noc=now=nol=0;
  clrscr();
  printf("\n Enter file name  ");
  scanf("%s",name);
  fp=fopen(name,"r");
  while((ch=getc(fp))!=EOF)
  {
    if(ch==' ')
    now++;
    else
    if(ch=='\n')
    {
    nol++;
    now++;
    }
    noc++;
  }
  printf("\n Number of characters are  %d",noc);
  printf("\n Number of words are  %d",now);
  printf("\n NUmber of lines are  %d",nol);
  getch();
}