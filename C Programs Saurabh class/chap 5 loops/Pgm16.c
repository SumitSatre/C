//find power of 1 number raised to other
//3 raised to 2=3*3=9
//3 raised to 3=3*3*3=27
//3 raised to 4=3*3*3*3=81
//a=2
//b=5
//2 raised to 5=
//a=4
//b=3
/*
a raised to b means a multiplied by itself, b no. of times

*/
#include<stdio.h>

void main()
{
	int a,b,i;
	long int power=1;

	printf("\n Enter values of a and b for finding a raised to b:");
	scanf("%d%d",&a,&b);

	for(i=1;i<=b;i++)
	{
		power=power*a;

	}
/*
a=3,b=4

1st time:
a=3,i=1,power=1
power=1*3=3

2nd time:
i=2,a=3,power=3
power=3*3=9

3rd time:
i=3,a=3,power=9
power=9*3=27

4th time:
i=4,a=3,power=27
power=27*3=81

*/	

	printf("\n The power is %ld",power);

}