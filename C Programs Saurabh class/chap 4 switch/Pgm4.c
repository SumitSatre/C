//accept a year from user and find if it is leap year or not

//find if leap year or not using switch block
#include<stdio.h>

int main()
{
	int year;

	printf("\n Enter which year:");	





	
	scanf("%d",&year);
	
	switch(year%4==0)
	{
		case 1: printf("\n Leap year");	
			break;

		case 0: printf("\n Not leap year");

	}


}