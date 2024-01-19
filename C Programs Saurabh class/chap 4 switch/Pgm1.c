//PGM TO ACCEPT a number from 1 to 12 from user and display the name of the month

#include<stdio.h>

main()
{
	int a;

	printf("\n Enter number from 1-12:");
	scanf("%d",&a);

	switch(a)
	{
		case 1: printf("\n Month is January");
			break;


		case 2: printf("\n Month is February");
			break;

		case 3: printf("\n Month is March");
			break;

		case 4: printf("\n Month is April");
			break;

		case 5: printf("\n Month is May");
			break;

		case 6: printf("\n Month is June");
			break;

		case 7: printf("\n Month is July");
			break;

		case 8: printf("\n Month is August");
			break;

		case 9: printf("\n Month is September");
			break;

		case 10: printf("\n Month is October");
			break;

		case 11: printf("\n Month is November");
			break;

		case 12: printf("\n Month is December");
			break;

		default: printf("\n Invalid Number");
		


	}


}