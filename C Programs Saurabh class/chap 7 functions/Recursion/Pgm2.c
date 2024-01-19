/*
power(3,0) is 1
power(3,1) is 3=3*1=3*power(3,0)
power(3,2) is 9=3*3=3*power(3,1)
power(3,3) is 27=3*9=3*power(3,2)
power(3,4) is 81=3*27=3*power(3,3)

power(a,b)=a*power(a,b-1)


*/

//pgm to define power() function using recursion

#include<stdio.h>

long int power(int,int);

main()
{
	int c,d;
	long int p1;

	printf("\n Enter the values of c and d for finding c raised to d:");
	scanf("%d%d",&c,&d);

	p1=power(c,d);
	printf("\n The power is %ld",p1);

}


long int power(int a,int b)
{
	if(b==0)
	{
			return 1;

	}

	else
	{
		return(a*power(a,b-1));

	}
}
