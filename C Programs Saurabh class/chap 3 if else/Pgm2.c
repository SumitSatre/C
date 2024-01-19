

//pgm to accept 2 numbers from user and find which number is smaller

#include<stdio.h>

main()
{
	int a,b;

	printf("\n Enter values of a and b:");
	scanf("%d%d",&a,&b);
//a=5,b=-5

	if(a==b)
	{
		printf("\n The values of a and b are equal");

	}

	else
	{
		if(a<b)
		{
			printf("\n The smaller number is %d",a);

		}

		else
		{
			printf("\n The smaller number is %d",b);

	
		}

	}
/*
The above else block is for the if block having condition a==b.
Inside the outer else block, we have written another if block and another else block. The inner if block is checking condition a<b which is checking whether the value of variable a is lesser than value of variable b or not.

In case value of variable a is lesser than value of variable b then the condition a<b will give true and if value of variable a is greater than value of variable b then condition a<b will give false.

*/
}