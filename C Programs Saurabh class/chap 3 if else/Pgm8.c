/*

Conditional operator:
Symbol is ?:
It is ternary operator which means that it has 3  expression.

syntax:
(condition)?statement1:statement2;
Here suppose condition is true, then statement1 is executed and statement2 is not executed. If condition is false, then statement1 is not executed and statement2 is executed.

*/

//pgm to find if entered number is even or odd using conditional operator
#include<stdio.h>

main()
{
	int a;

	printf("\n Enter number:");
	scanf("%d",&a);

	(a%2==0)?printf("\n Even number"):printf("\n Odd Number");


}


