//    String sorting

# include <stdio.h>
# include <conio.h>
# include <string.h>
void main()
{
 char name[20],ch,tmp;
 int i,j,len;
 clrscr();
 printf("\n Enter a string  ");
 scanf("%s",name);
 len=strlen(name);
 for(i=0;i<len;i++)
 for(j=i+1;j<len;j++)
 if(name[j]<name[i])
 {
  tmp=name[i];
  name[i]=name[j];
  name[j]=tmp;
 }
 printf("\n the result is  %s",name);
 getch();
}