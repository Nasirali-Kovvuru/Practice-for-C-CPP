 // Write a program multiplication of matrices

 #include<stdio.h>
 #include<conio.h>
 void  main()
 {
 int a[2][2], b[2][2], c[2][2];
 int i,j,k;
 clrscr();
 printf("Enter the values in 'A' matrix");
 for(i=0;i<2;i++)
 for(j=0;j<2;j++)
 {
 printf("\nEnter %d,%d values",i,j);
 scanf("%d", &a[i][j]);
 }
 printf("Enter the values in 'B' matrix");
 for(i=0;i<2;i++)
 for(j=0;j<2;j++)
 {
 printf("\nEnter %d,%d values",i,j);
 scanf("%d",&b[i][j]);
 }
 clrscr();
 printf("\n Product of matrices \n");
 for(i=0;i<=1;i++)
 {
 for(j=0;j<=1;j++)
 {
 c[i][j]=0;
 for(k=0;k<=1;k++)
 c[i][j]=c[i][j]+a[i][k]*b[k][j];
 }
 }
 for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 printf("%3d", c[i][j]);
 }
 printf("\n");
 }
 getch();
 }

