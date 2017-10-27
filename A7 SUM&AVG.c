// W.A.P. to input n numbers into a one dimentional 
// array and calculate sum and average

# include <stdio.h>
# include <conio.h>
void main()
{
 int a[100],n,i,sum=0,avg;
 clrscr();
 printf("Enter n value  : ");
 scanf("%d",&n);

 for(i=0;i<n;i++)
  { 
   scanf("%d",&a[i]);
  }
   for(i=0;i<n;i++)
   sum=sum+a[i];
   avg=sum/n;

 printf("\nThe given numbers are  \n");
 for(i=0;i<n;i++)
 printf("\n %d element number is  %d",i,a[i]);
 printf("\n Sum of %d numbers is  %d",n,sum);
 printf("\n Average is %d",avg);
 getch();
}

















