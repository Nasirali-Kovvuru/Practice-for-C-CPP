// Write a program to print no. of positives, negitives and zeros.

# include <stdio.h>
# include <conio.h>
void main()
{
  int a[5],i,p=0,n=0,z=0;
  clrscr();

    printf("Enter any 5 values   :   ");
    for(i=0;i<5;i++)
    {
     scanf("%d",&a[i]);
    }

  for(i=0;i<5;i++)
   {
     if(a[i]>0)
      p++;
     else
     if(a[i]<0)
      n++;
     else
      z++;
   }

   printf("\n No. of positives  -  %d",p);
   printf("\n No. of negatives  -  %d",n);
   printf("\n No. of zeros      -  %d",z);
   getch();
}
