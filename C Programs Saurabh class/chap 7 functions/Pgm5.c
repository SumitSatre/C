//pgm to define 3 functions one for finding factorial of number, and one for finding power of 1 number //raised to another and one for finding number of digits of number
 
#include<stdio.h>

long int factorial(int);
long int power(int,int);
int no_digits(int);

main()
{
	int a;
	int m,n;
	int s;
	long int f1,p1;
	int no;

	printf("\n Enter number for finding factorial:");
	scanf("%d",&a);
	
	f1=factorial(a);
	printf("\n The factorial is %ld",f1);

	printf("\n Enter values of m and n for finding m raised to n:");
	scanf("%d%d",&m,&n);

	p1=power(m,n);
	printf("\n The power is %ld",p1);

	printf("\n Enter the number for finding no. of digits:");
	scanf("%d",&s);

	no=no_digits(s);
	printf("\n The number of digits is %d",no);
	 
}

long int factorial(int d)
{
	int i=1;
	long int f=1;

	while(i<=d)
	{
		f=f*i;
		i++;

	}


	return f;
}



long int power(int c,int d)
{
	int i=1;
	long int p=1;

	for(i=1;i<=d;i++)
	{
		p=p*c;

	}

	return p;
}

int no_digits(int e)
{
	int cnt=0;
	while(e!=0)
	{
		e=e/10;
		cnt++;

	}

	return cnt;
}