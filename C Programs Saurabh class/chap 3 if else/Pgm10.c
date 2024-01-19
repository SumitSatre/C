/*
calculation of income tax
if male and income is upto 1 lakh no income tax
If male and income greater than 1 lakh then income tax is 10%

10/100


if female and income is upto 5 lakh no income tax
If female and income greater than 5 lakh then income tax is 10%

*/

#include<stdio.h>

main()
{
	char gender;
	float yearlyincome,incometax;

	printf("\n Enter the gender....type m for male and f for female:");
	fflush(stdin);
	scanf("%c",&gender);

	printf("\n Enter annual income:");
	scanf("%f",&yearlyincome);

	if((gender=='m')&&(yearlyincome<=100000))
	{
		printf("\n He has no income tax");

	}


	else if((gender=='m')&&(yearlyincome>100000))
	{
		incometax=(yearlyincome*.1);
		printf("\n He has income tax equal to Rs. %f",incometax);

	}


	else if((gender=='f')&&(yearlyincome<=500000))
	{
		printf("\n She has no income tax");

	}


	else
	{
		incometax=(yearlyincome*.1);
		printf("\n She has income tax equal to Rs. %f",incometax);

	}


}