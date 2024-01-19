//pgm to add 2 matrices having 2 rows and 3 columns using function

#include<stdio.h>
void acc(int [][3]);
void display(int [][3]);
void add(int [][3],int [][3]);

main()
{
	int a[2][3],b[2][3];

	acc(a);
	acc(b);

	display(a);
	display(b);

	add(a,b);

}

void acc(int c[][3])
{
	int i,j;

	printf("\n Enter the integers in matrix having 2 rows and 3 columns");

	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",c[i]+j);

		}

	}

}



void display(int c[][3])
{
	int i,j;

	printf("\n The integers in matrix having 2 rows and 3 columns are:");

	for(i=0;i<=1;i++)
	{
		printf("\n");
		for(j=0;j<=2;j++)
		{
			printf(" %d",*(c[i]+j));

		}

	}

}


void add(int c[][3],int d[][3])
{
	int i,j,e[2][3];

	printf("\n The integers in addition matrix having 2 rows and 3 columns are:");

	for(i=0;i<=1;i++)
	{
		printf("\n");
		for(j=0;j<=2;j++)
		{
			*(e[i]+j)=*(c[i]+j)+*(d[i]+j);
			printf(" %d",*(e[i]+j));

		}

	}

}


