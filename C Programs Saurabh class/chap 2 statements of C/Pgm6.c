//pgm to find area and circumference of circle

#include<stdio.h>
#define PI 3.142

/*
#define is a statement in C language to define our own constant, So in above statement we have defined our own constant named PI having fixed value 3.142.

*/

main()
{
	int radius;
	float cir,area;

	printf("\n Enter radius:");
	scanf("%d",&radius);

	cir=2*PI*radius;
	area=PI*radius*radius;

	printf("\n The area and circumference of circle are %f and %f",cir,area);

	




}
