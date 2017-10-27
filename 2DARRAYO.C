#include<stdio.h>
mat`h.h
main()
{
	char names[20][20];
	int i,n;
	clrscr();
	printf("Enter the number of strings:");
	scanf("%d",&n);


	for(i=0;i<n;i++)
		scanf("%s",names[i]);

	printf("The strings are\n");
	for(i=0;i<n;i++)
		puts(names[i]);
		/*printf("%s\n",names[i]); */
	getch();
}