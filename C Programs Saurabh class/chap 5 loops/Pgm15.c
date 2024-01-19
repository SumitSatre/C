/*

1
2 3
4 5 6
7 8 9 10

using for loop for 4 rows

*/

#include<stdio.h>

main()
{
    int	i,j,k;

    for(i=1,k=1;i<=4;i++)
    {
		printf("\n");
		
		for(j=1;j<=i;j++)
		{
			printf(" %d",k);
			k++;

		}

    }

	


}