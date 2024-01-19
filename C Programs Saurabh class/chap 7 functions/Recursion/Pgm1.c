/*
void display()
{
	display();

}
Recursion is the concept in C language where function calls itself. We write the function call statement inside the body of its own definition.

When we define a function using recursion, we dont use loops.

e.g. define factorial() function using recursion

1. factorial(0) is 1 where 0 is initial input value

2. factorial(1) is 1=1*1=1*factorial(0)

factorial(2) is 2=2*1=2*factorial(1)

factorial(3) is 6=3*2=3*factorial(2)

factorial(4) is 24=4*6=4*factorial(3)

factorial(5) is 120=5*24=5*factorial(4)

....

factorial(a) is a*factorial(a-1)


long int factorial(int a)
{
	if(a==0)
	{
		return 1;
	}

	else
	{
		return (a*factorial(a-1));
//return 4*factorial(3)

	}



}

1st execution: a=4
else block runs, return 4*factorial(3)

1st execution is halted


stack   4*
                                       


2nd execution a=3
else block return 3*factorial(2)

2nd execution is halted

       3*
stack  4*


3rd execution, a=2
else block return 2*factorial(1)

3rd execution is halted

        2*
stack   3*
        4*


4th execution,a=1
else block  1*factorial(0)

4th execution is halted

         1*
stack    2*
         3*
         4*



5th execution,a=0;
if block return 1 
5th execution ends and control goes to 4th execution

4th execution returns 1*1=1 and 4th execution ends


3rd execution returns 2*1=2 and 3rd execution ends

2nd execution  returns 3*2=6 nd 2nd execution ends

1st execution returns 4*6=24 and 1st execution ends and 24 is returned back to main

*/

//pgm to define factorial() function using recursion

#include<stdio.h>

long int factorial(int);

main()
{
	int c;
	long int f1;

	printf("\n Enter the number for finding factorial:");
	scanf("%d",&c);

	f1=factorial(c);
	printf("\n The factorial is %ld",f1);

}


long int factorial(int a)
{
	if(a==0)
	{
		return 1;
	}

	else
	{
		return (a*factorial(a-1));
//return 4*factorial(3)

	}



}
