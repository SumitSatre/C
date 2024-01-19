/*

1
1 2
1 2 3
1 2 3 4

using for loop for any no. of rows

*/

#include<stdio.h>

main()
{
    int	n,i,j,k;

    printf("\n Enter how many rows:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
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