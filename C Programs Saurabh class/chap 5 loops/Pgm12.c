/*

* * * *
* * *
* *
*

using for loop for any no. of rows

*/

#include<stdio.h>

main()
{
    	int i,j,n;

	printf("\n Enter how many rows:");
	scanf("%d",&n);


	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=n;j>=i;j--)
		{
			printf("* ");

		}

	}


}