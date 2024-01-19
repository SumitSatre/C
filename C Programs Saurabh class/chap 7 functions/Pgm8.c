//PGM TO FIND MAX. AND MIN. VALUE IN ARRAY

#include<stdio.h>

void acc(int []);
void display(int []);
int maximum(int []);
int minimum(int []);

main()
{
	int a[6];
	int min1,max1;

	acc(a);

	display(a);

	min1=minimum(a);		
	printf("\n The minimum value in array is %d",min1);
	
	max1=maximum(a);		
	printf("\n The maximum value in array is %d",max1);

	
}

void acc(int b[])
{
	int i;

	printf("\n Enter the 6 values to be stored in array:");

	for(i=0;i<=5;i++)
	{
		scanf("%d",&b[i]);
	}
}


void display(int b[])
{
	int i;

	printf("\n he 6 values to be stored in array:");

	for(i=0;i<=5;i++)
	{
		printf(" %d",b[i]);
	}
}

int minimum(int b[])
{
	int i;
	int min;

	for(i=0;i<=5;i++)
	{
		if(i==0)
		{
			min=b[0];

		}

		else
		{
			if(min>b[i])
			{
				min=b[i];
			}

		}

	}

	return min;
}



int maximum(int b[])
{
	int i;
	int max;

	for(i=0;i<=5;i++)
	{
		if(i==0)
		{
			max=b[0];

		}

		else
		{
			if(max<b[i])
			{
				max=b[i];
			}

		}

	}

	return max;
}