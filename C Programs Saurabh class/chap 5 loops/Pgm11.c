/*

* * * *
* * *
* *
*

for 4 rows

*/

#include<stdio.h>

main()
{
    	int i,j;

	for(i=1;i<=4;i++)
	{
		printf("\n");
		for(j=4;j>=i;j--)
		{
			printf("* ");

		}

	}


}