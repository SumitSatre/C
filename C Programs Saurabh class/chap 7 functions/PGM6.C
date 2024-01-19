/*
write a pgm to define 4 functions one for printing
*
* *
* * *
....
for any no. of rows

2nd function:
* * * *
* * *
* *
*
for any no. of rows

3rd function
1 
1 2 
1 2 3
1 2 3 4
for any no. of rows

4th function:
1
2 3
4 5 6
7 8 9 10

*/

#include<stdio.h>

void display1(int);
void display2(int);
void display3(int);
void display4();

main()
{
    int n;
    printf("\n eNTER HOW MANY ROWS:");
    scanf("%d",&n);

    display1(n);
    printf("\n\n");
    display2(n);
    printf("\n\n");
    display3(n);
    printf("\n\n");
    display4();

}
void display1(int n1)
{
	int i,j;

	for(i=1;i<=n1;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}

	}


}



void display2(int n2)
{
	int i,j;

	for(i=1;i<=n2;i++)
	{
		printf("\n");
		for(j=n2;j>=i;j--)
		{
			printf("* ");
		}

	}


}


void display3(int n3)
{
	int i,j;

	for(i=1;i<=n3;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}

	}

}


void display4()
{
	int i,j,k=1;

	for(i=1;i<=4;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			k++;
		}

	}

}