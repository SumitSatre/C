/*
Loop:
If we want to execute a set of statements again and again till a condition is true, then we use loop.

1. while loop:
syntax:
while(condition)
{
	set of statements;

}
Here the set of statements inside body of the while loop are executed again and again until the condition of the while loop becomes false.

*/

//pgm to display numbers from 1 to 10 using while loop
/*
i=1
i<=10
i++;

*/
#include<stdio.h>

main()
{
	int i;

	i=1;

	printf("\n The numbers from 1 to 10 are:");

	while(i<=10)
	{
		printf(" %d",i);
		i=i+1;

	}

		
}