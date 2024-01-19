//pgm to accept input values of 2 integer variables from user and perform different operations //on them

#include<stdio.h>

main()
{
	int a,b,c;
	float d;

	printf("\n Enter the integer values of a and b:");
	scanf("%d%d",&a,&b);

	c=a+b;
/*
= is called as assignment operator and + is called addition operator. So in statement c=a+b,values of a and b are added and their addition value is stored into c variable.

*/
	printf("\n The value of addition is %d",c);

	c=a-b;
	printf("\n The value of subtraction is %d",c);

	c=a*b;
	printf("\n The value of multiplication is %d",c);
	
	d=((float)a)/b;
/*
If we perform arithmatic operation between 2 integer values we always get integer result. e.g. 8/3 will give us value 2 and not 2.66 because both 8 and 3 are integer values.
But if we want accurate float value with decimal point, then we will convert any one of the 2 values to float type. So 8.0/3 will give accurate float value 8.66.

So in statement d=((float)a)/b, we are converting value of a variable from integer type to float type and so now we get accurate division result in floating format with all decimal digits after point.
*/
	printf("\n The value of division is %f",d);


	c=a%b;
/*
a%b returns remainder after dividing value of a by value of b. e.g. 8%5 returns 3 because remainder after dividing 8 by 5 is 3.
The sign of remainder is same as sign of dividend. 
% or remainder operator is called as modulus operator.

8%5 is 3


-8%5 is -3 because dividend is negative

8%-5 is 3 because dividend is positive

-8%-5 is -3 because dividend is negative


For multipky * and divide / if any one value is negative then result is negative and if both are -ve then result is +ve

8*-5=-40
-8*5=-20
-8*-5=40

8/-5=-1

-8/-5=1
-8/5=-1

+


*/
	printf("\n The remainder is %d",c);

	


}