//PGM TO DEFINE 4 functions in same program one for subtraction,one for multiplication and one for //and one for division and one for remainder

#include<stdio.h>

int sub(int,int);
int mul(int,int);
float divi(int,int);
int rem(int,int);
//function prototype declaration statements


main()
{
	int a,b,m;
	float n;

	printf("\n Enter integer values of a and b:");
	scanf("%d%d",&a,&b);

	m=sub(a,b);
	printf("\n The subtraction is %d",m);

	m=mul(a,b);//function call statement
	printf("\n The multiplication is %d",m);

	
	n=divi(a,b);//function call statement
	printf("\n The division is %.3f",n);

	m=rem(a,b);//function call statement
	printf("\n The remainder is %d",m);

	
}


int mul(int c,int d)//formal parameter
{
	int e;
	e=c*d;
	return e;
}

int sub(int c,int d)//formal parameter
{
	int e;
	e=c-d;
	return e;
}

//function definition

float divi(int c,int d)
{
	float e;
	e=((float)c)/d;
	return e;
}


int rem(int c,int d)
{
	int e;
	e=c%d;
	return e;
}
