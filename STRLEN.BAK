/* Demo on string functions*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str1[50],str2[50],str3[10]="Naresh";
 int l;
 clrscr();
 printf("Enter String 1");
 gets(str1);
 printf("Enter String 2");
 gets(str2);

 printf("String 1 length %d\n",strlen(str1));

 l=strlen(str2);
 printf("String 2 length %d\n",l);

 strncat(str1,str2,3);
 printf("after concatenation str1=%s \t str2= %s \n",str1,str2);

 strncpy(str1,str3,3);
 printf("after copying str1=%s \tStr3=%s\n",str1,str3);

 if(strncmp(str1,str3,4) == 0)
   printf("Both strings are equal\n");
 else
   printf("Both string are not equal");

 strupr(str2);
 printf("\nStr2 is =");
 puts(str2);
 strlwr(str2);
 printf("\nStr2 is=");
 puts(str2);
 strrev(str2);
 printf("\nAfter reverse=%s",str2);
  getch();
}




