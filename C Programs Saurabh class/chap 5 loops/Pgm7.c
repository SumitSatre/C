//pgm to display numbers from in any range using for loop

#include<stdio.h>

main()
{
	int i,min,max;

	printf("\n Enter starting number:");
	scanf("%d",&min);

	printf("\n Enter ending number:");
	scanf("%d",&max);



	printf("\n The numbers from %d to %d are ",min,max);

	for(i=min;i<=max;i=i+1)
	{
		printf(" %d",i);

	}

	


}