/*

*
* *
* * *
* * * *

using for loop for any no. of rows

*/

#include<stdio.h>

void main()
{
    int i,j,n;

	printf("\n Enter the number of rows:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("* ");

		}

	}


}