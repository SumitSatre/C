//pgm to add 2 matrices having 2 rows and 3 columns
#include<stdio.h>

main()
{
	int a[2][3],b[2][3],c[2][3],i,j;

	printf("\n Enter the integer values in matrix 1 having 2 rows and 3 columns:");

	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);

		}

	}


	printf("\n Enter the integer values in matrix 2 having 2 rows and 3 columns:");

	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&b[i][j]);

		}

	}

	printf("\n The integer values in addition matrix having 2 rows and 3 columns are:");

	for(i=0;i<=1;i++)
	{
		printf("\n");
		for(j=0;j<=2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf(" %d",c[i][j]);

		}

	}
/*
a
1 2 1
2 1 1

b
1 2 2
3 4 4

c
2 4 3
5 5 5

*/



}