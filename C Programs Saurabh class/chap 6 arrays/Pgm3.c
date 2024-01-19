
//write a pgm to accept 8 values into the array and find maximum and minimum value
#include<stdio.h>

main()
{
	int a[8],i,min,max;

	printf("\n Enter values of 8 int elements to be stored into the array:");
//2 5 6 13 -1 11 4 15
/*
min=2
max=2

i=1
a[1]
min=2
a[1] 5

max=2
a[1]=5
max=5


*/
	for(i=0;i<=7;i++)
	{
		scanf("%d",&a[i]);
		if(i==0)
		{
			min=a[0];
			max=a[0];

		}

		else
		{
			if(min>a[i])
			{
				min=a[i];
			
			}

			if(max<a[i])
			{
				max=a[i];

			}

		}

	}

	printf("\n The maximum is %d and min. is %d",max,min);
	

}





