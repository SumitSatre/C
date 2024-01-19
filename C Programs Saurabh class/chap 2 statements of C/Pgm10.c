//pgm to accept marks of 5 students and find average

#include<stdio.h>

main()
{
	float marks1,marks2,marks3,marks4,marks5,average;

	printf("\n Enter the marks of 5 students out of 100:");
	scanf("%f%f%f%f%f",&marks1,&marks2,&marks3,&marks4,&marks5);
	
	average=(marks1+marks2+marks3+marks4+marks5)/5;

	printf("\n The 	average is %f marks",average);

}