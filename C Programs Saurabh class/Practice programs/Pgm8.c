/*
accept temperature in degree celcius and convert to fahrenheit

cel=(fahr-32)/1.8;

fahr-32=(1.8*cel);

fahr=(1.8*cel)+32;

a=b/c

b=ac
*/

#include<stdio.h>

main()
{
	float celcius,fahrenheit;

	printf("\n Enter the temperature in degree ceclius:");
	scanf("%f",&celcius);

	fahrenheit=(1.8*celcius)+32;

	printf("\n The temperature in fahrenheit is %f",fahrenheit);

}