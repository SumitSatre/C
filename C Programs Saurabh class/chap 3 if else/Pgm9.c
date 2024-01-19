/*
3rd logical operator:
NOT !
It is a unary operator because it works on only 1 condition.

syntax:
!(condition);
In case condition is true, then the above statement will give false, and if condition is false then above statement is true because ! not operator reverses the value of condition.

*/
//pgm to find even or odd number using ! operator
#include<stdio.h>
main()
{
	int a;

	printf("\n Enter number:");
	scanf("%d",&a);


	if(!(a%2==0))
	{
		printf("\n Odd number");
	}

	else
	{
		printf("\n Even number");

	}
}