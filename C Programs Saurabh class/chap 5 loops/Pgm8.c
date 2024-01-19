//pgm to display odd numbers from in any range using for loop
//also find sum of odd numbers in the range

#include<stdio.h>

main()
{
	int i,min,max,sum=0;

	printf("\n Enter starting number:");
	scanf("%d",&min);

	printf("\n Enter ending number:");
	scanf("%d",&max);



	printf("\n The numbers from %d to %d are ",min,max);

	for(i=min;i<=max;i=i+1)
	{
		if((i%2)!=0)
		{
			printf(" %d",i);
			sum=sum+i;
		}
	}

	printf("\n The addition of all odd numbers from %d to %d is %d",min,max,sum);


}