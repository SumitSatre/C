/*

1
1 2
1 2 3
1 2 3 4

using for loop for 4 rows

*/

#include<stdio.h>

main()
{
    int	i,j,k;

    for(i=1;i<=4;i++)
    {
		printf("\n");
		k=1;
		for(j=1;j<=i;j++)
		{
			printf(" %d",k);
			k++;	

		}

    }

	


}