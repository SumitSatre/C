//pgm for defining 2 functions one finding if the entered year is leap year or not and other function //for finding mod value

#include<stdio.h>

int mod1(int);
void check_year(int);
/*
When we mention the return type of a function as void, we cannot return any output value from the body of the function definition. So we cannot mention the return statement inside the body of the function definition whose return type is void. So we are going to display the output value of the check_year() function inside the body of the function check_year() and not inside the body of main() function.

*/

main()
{
	int a,year,m;

	printf("\n Enter year to find out if leap year or not:");
	scanf("%d",&year);

	check_year(year);

	printf("\n Enter integer value for finding mod value:");
	scanf("%d",&a);
	
	m=mod1(a);
	printf("\n The mod value is %d",m);
	
}

int mod1(int c)
{
	int m1;
	if(c>=0)
	{
		m1=c;	

	}

	else
	{
		m1=-c;

	}

	return m1;
}

void check_year(int year1)
{
	if((year1%4==0)&&(year1%100!=0))
	{
	    
		printf("\n Entered year is leap year");

	}

	else if((year1%100==0)&&(year1%400==0))
	{
	    
		printf("\n Entered year is leap year");

	}
	
	
	else
	{
		printf("\n Entered year is not leap year");

	}
}