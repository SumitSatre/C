/*
2d array or 2 dimensional:
When we declare a 2d array variable we mention the name of the variable followed by number of rows and no. of columns where the no. of rows and no. of columns is mentioned inside the [] brackets.

e.g.
int a[4][7];
In above statement we have declared a 2d array variable named a, having 4 rows and 7 columns.


Every individual element of 2d array variable, has a row index and column index associated with it. The row index counting begins from 0 and also column index counting begins from 0.

So the row and column index of element in 1st row and 5th column will be 0 and 4 resp. and to access any element in 2d array variable we write name of array[row index of element][column index of element].
e.g. a[2][4] will access element of 2d array variable named a, having row index 2 and column index 4, i.e. 3rd row and 5th column.

If we want to access element in 7th row and 3rd column in the 2d array variable named a, then we write a[6][2].

*/

//pgm to accept and display elements in 2d array having 3 rows and 4 columns

#include<stdio.h>

main()
{
	int a[3][4],i,j;

	printf("\n Enter the integer values in matrix having 3 rows and 4 columns:");

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			scanf("%d",&a[i][j]);

		}

	}



	printf("\n The integer values in matrix having 3 rows and 4 columns are:");

	for(i=0;i<=2;i++)
	{
		printf("\n");
		for(j=0;j<=3;j++)
		{
			printf(" %d",a[i][j]);

		}

	}




}