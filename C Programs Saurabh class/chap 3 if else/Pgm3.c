

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

	else if(a<b)
	{
			printf("\n The smaller number is %d",a);

	}

	else
	{
			printf("\n The smaller number is %d",b);

	
	}
/*
The above is a code which uses 1 if block, followed by one or more else if blocks and there is an else block at the last. 
Here in case condition of 1st if block is true, then body of 1st if block is executed and all other else if blocks and last else block are skipped. 

Only in case the condition of 1st if block is false, then control comes to the else if block written after it and its condition will be checked and if it is true then its body is executed and all remaining else if blocks after it are skipped.

The last else block is executed only in case the conditions of all if and the else if blocks before it are false. 


*/

	

}