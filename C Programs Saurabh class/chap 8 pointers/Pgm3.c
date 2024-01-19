//accept 10 element values of integer type into a 1d array and find sum of all odd numbers in //it

#include<stdio.h>

void acc(int []);
void display(int []);
int sum(int []);

main()
{
	int a[10];
	int s1;

	acc(a);

	display(a);

	s1=sum(a);
	printf("\n The sum of all odd numbers in array is %d",s1);





}

void acc(int b[])
{
	int i;

	printf("\n Enter the 10 integer values to be stored in the array:");
	for(i=0;i<=9;i++)
	{
		scanf("%d",b+i);

	}



}


void display(int b[])
{
	int i;

	printf("\n The 10 integer values stored in the array are:");
	for(i=0;i<=9;i++)
	{
		printf(" %d",*(b+i));

	}



}

int sum(int b[])
{
	int s=0,i;

	for(i=0;i<=9;i++)
	{
		if(*(b+i)%2!=0)
		{
			s=s+*(b+i);

		}
		
	}

	return s;

}