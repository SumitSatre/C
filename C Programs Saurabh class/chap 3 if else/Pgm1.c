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
/*
When we divide even number by 2 we get remainder 0 and when we divide odd number by 2 we get remainder as 1. So in this pgm we will use the % modulus operator to find remainder after dividing the number by 2 and compare the remainder with 0. 

*/

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
/*
a=b;
Here we have used only 1 = operator between variables a and b. When only 1 = operator is used between 2 variables then it is called assignment operator. a=b assigns value of variable b to variable a. So if value of b variable was 5, then after execution of a=b, value of a is 5. 


a==b;
When we use 2 = operators between any 2 variables, then it is called as equality comparisn operator. a==b returns true if values of variables a and b are equal, and a==b returns false, if values of variables a and b are not equal.

Suppose, a=5,b=5;
a==b will give true value.

Suppose a=5,b=-5;
a==b will give false value.

 
a!=b;
Here != is called as not equal to operator. If values of variables a and b are equal, then a!=b will return false value, and if values of variables a and b are not equal, then a!=b will give true value.

Suppose a=5,b=5;
a==b will give true
a!=b will give false

Suppose a=5,b=-5;
a==b gives false
a!=b gives true


a%2==0
In above condition, first compiler will find remainder after dividing value of a variable by 2. Then it will compare the remainder with 0. If value of variable 'a' is even, then a%2 will give remainder 0 and so condition a%2==0 will give true.

 If value of variable 'a' is odd, then a%2 will give remainder 1 and so condition a%2==0 will give false.
*/ 

	else
	{
		printf("\n Number is odd");

	}

}