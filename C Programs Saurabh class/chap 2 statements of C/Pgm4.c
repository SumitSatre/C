//pgm to swap values of 2 variables

#include<stdio.h>

main()
{
	int a,b,c;

	printf("\n Enter values of a and b to be interchanged:");
	scanf("%d%d",&a,&b);

	c=a;
	a=b;
	b=c;
/*
a=4,b=24
c=5
a=10
b=5

*/

	printf("\n The values of a and b after swapping are %d %d",a,b);



}