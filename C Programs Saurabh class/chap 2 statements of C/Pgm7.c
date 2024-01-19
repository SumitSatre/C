//find area and volume of sphere by accepting radius as input

#include<stdio.h>
#define P 3.142

main()
{
	int radius;
	float volume,area;

	printf("\n Enter radius:");
	scanf("%d",&radius);

	area=4*P*radius*radius;
	volume=(4.0/3)*(P)*(radius*radius*radius);

	printf("\n The area is %f and volume is %f",area,volume);

}