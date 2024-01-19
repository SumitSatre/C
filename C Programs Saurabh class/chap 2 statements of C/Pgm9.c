//pgm to accept marks of a students in 10 subjects and find aggregate percentage


#include<stdio.h>

main()
{
	float m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,percentage;

	printf("\n Enter marks of 10 subjects:");
	scanf("%f%f%f%f%f%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5,&m6,&m7,&m8,&m9,&m10);

	percentage=((m1+m2+m3+m4+m5+m6+m7+m8+m9+m10)/(1000))*100;

	printf("\n The aggregate percentage is %f",percentage);


}