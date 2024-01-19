//pgm to display grade of student as per his percentage
/*
	80 to 100: grade A

	60 to 80: B
	
	50:60:C

	40:50:D

	less than 40:fail


input:percentage
output:grade
*/
#include<stdio.h>
main()
{
	float p;

	printf("\n Enter percentage:");
	scanf("%f",&p);

	if((p>=80)&&(p<=100))	
	{
		printf("\n Grade is A");

	}


	else if((p>=60)&&(p<80))	
	{
		printf("\n Grade is B");

	}


	else if((p>=50)&&(p<60))	
	{
		printf("\n Grade is C");

	}

	else if((p>=40)&&(p<50))	
	{
		printf("\n Grade is D");

	}


	else
	{
		printf("\n Fail");

	}

//p 101
	
}