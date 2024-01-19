
//write a pgm to accept 7 values into the array and find sum of odd numbers in array

#include<stdio.h>

main()
{
	int a[7],i,s=0;

	printf("\n Enter values of 7 int elements to be stored into the array:");

	for(i=0;i<=6;i++)
	{
		scanf("%d",&a[i]);
		if((a[i]%2)!=0)
		{
			s=s+a[i];

		}

	}

	printf("\n The sum is %d",s);
	

}

/*
a
11 2 14 6 7 15 10

i=0
s=0+11=11
s=11+7=18
s=18+15=33

*/






