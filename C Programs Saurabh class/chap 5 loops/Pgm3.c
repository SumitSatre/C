/*

accept number from user and find if it is prime or composite
prime number has no other factors apart from 1 and itself.

a is number

i=2
j=0
while(i<a)
{
	if(a%i==0)
	{
		printf("\n Number is composite");
		j=1;
		break;	

	}

	i=i+1;
}

if(j==0)
printf("\n Prime");

*/


#include<stdio.h>

main()
{
	int a,i=2,j=0;

	printf("\n Enter number:");
	scanf("%d",&a);

	if(a==1)
	{
		printf("\n The number is neither prime nor composite");

	}

	else
	{
		while(i<a)
		{
			if(a%i==0)
			{
				printf("\n Composite number");
				j=1;
				break;
//break will end execution of loop

			}

			i=i+1;
		}

		if(j==0)
		{
			printf("\n Entered number is prime");
		}

	}
}