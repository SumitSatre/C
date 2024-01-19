//PGM TO ACCEPT a number from 1-12 and display season

#include<stdio.h>

int main()
{
	int a;

	printf("\n Enter number from 1-12:");
	scanf("%d",&a);

	switch(a)
	{
		
		case 3: 

		case 4: 

		case 5: printf("\n Summer Season");
			break;

		case 6:

		case 7: 

		case 8: 

		case 9: printf("\n Rainy season");
			break;

		case 10: 

		case 11:

		case 12: 

		case 1:

		case 2: printf("\n Winter season");
			break;

		default: printf("\n Invalid Number");
		


	}


}