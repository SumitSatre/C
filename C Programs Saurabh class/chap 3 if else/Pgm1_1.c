/*
if else

if(condition)
{
	set of statements;

}

else
{
	set of statements;

}

Here condition of the if block is checked by C compiler and if the condition is true then the set of statements inside the body of the if block are executed by compiler and set of statements inside body of else are not executed.


if the condition is false then the set of statements inside the body of the if block are not executed by compiler and set of statements inside body of else are executed.
*/

//pgm to accept a number from user and find if it is even or odd
#include<stdio.h>
main()
{
	int a;

	printf("\n Enter number:");
	scanf("%d",&a);

	if((a%2)==0)
	{
		printf("\n Number is even");

	}

	else
	{
		printf("\n Number is odd");

	}
}








