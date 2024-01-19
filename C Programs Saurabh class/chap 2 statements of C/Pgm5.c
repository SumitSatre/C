//pgm to accept principal amount, rate of interest and no. of years from user and find //simple interest

#include<stdio.h>

main()
{
	float p,r,si;
	int n;

	printf("\n Enter the principal amount:");
	scanf("%f",&p);

	printf("\n Enter the rate of interest:");
	scanf("%f",&r);

	printf("\n Enter the no. of years:");
	scanf("%d",&n);

	si=(p*r*n)/100;

	printf("\n The simple interest is rupees %f",si);
	


}