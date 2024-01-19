/*
logical operator:
If we want to check multiple conditions using the same if block or else if block, then we combine multiple conditions using logical operator.

1. && and:
The && operator is called as AND logical operator. It is a binary logical operator because it is used between 2 conditions.

syntax:
if((condition1)&&(condition2))
{


}
Here in case any of the 2 conditions condition1 or condition2 are false, then the entire condition is false. 
Only if both conditions are true, then the entire condition containing the && operator is true.


2. OR ||

if((condition1)||(condition2))
{


}
Here in case any of the 2 conditions condition1 or condition2 are true, then the entire condition is true. 
Only if both conditions are false, then the entire condition containing the || operator is false.

*/


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