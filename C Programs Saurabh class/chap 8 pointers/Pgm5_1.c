//accept 10 element values of integer type into a 1d array and find sum of all odd numbers in //it

#include<stdio.h>
#include<stdlib.h>

void acc(int *,int);
void display(int *,int);
int sum(int *,int);

main()
{
	int *a;
	int s1,n;

	printf("\n Enter number of integer values to be stored in array:");
	scanf("%d",&n);

	a=(int *) malloc(sizeof(int)*n);

	
	acc(a,n);

	display(a,n);

	s1=sum(a,n);
	printf("\n The sum of all odd numbers in array is %d",s1);

	free(a);





}

void acc(int *b,int n1)
{
	int i;

	printf("\n Enter the 10 integer values to be stored in the array:");
	for(i=0;i<=n1-1;i++)
	{
		scanf("%d",b+i);

	}



}


void display(int *b,int n1)
{
	int i;

	printf("\n The 10 integer values stored in the array are:");
	for(i=0;i<=n1-1;i++)
	{
		printf(" %d",*(b+i));

	}



}

int sum(int *b,int n1)
{
	int s=0,i;

	for(i=0;i<=n1-1;i++)
	{
		if(*(b+i)%2!=0)
		{
			s=s+*(b+i);

		}
		
	}

	return s;

}