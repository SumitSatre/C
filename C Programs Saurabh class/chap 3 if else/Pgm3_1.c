//pgm to accept 2 numbers from user and find which number is smaller
#include<stdio.h>
main()
{
	int a,b;

	printf("\n Enter values of a and b:");
	scanf("%d%d",&a,&b);

	if(a==b)
	{
		printf("\n The values of a and b are equal");

	}

	else if(a<b)
	{
			printf("\n The smaller number is %d",a);

	}

	else
	{
			printf("\n The smaller number is %d",b);
	}
}