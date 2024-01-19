//pgm to accept input values of 2 integer variables from user and perform different operations //on them
#include<stdio.h>

main()
{
	int a,b,c;
	float d;

	printf("\n Enter the integer values of a and b:");
	scanf("%d%d",&a,&b);

	c=a+b;

	printf("\n The value of addition is %d",c);

	c=a-b;
	printf("\n The value of subtraction is %d",c);

	c=a*b;
	printf("\n The value of multiplication is %d",c);
	
	d=((float)a)/b;
	printf("\n The value of division is %f",d);

	c=a%b;
	printf("\n The remainder is %d",c);

}