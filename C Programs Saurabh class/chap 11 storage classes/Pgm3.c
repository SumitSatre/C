/*

3. static

In static storage class, the variables are aloctaedRAM memory just like auto storage class and their scope is limited only to body of the function definition in which they are declared as local variables.

Unlike the auto and register, the lifetime of the static storage class variables is the entire pgm, and the RAM menory allocated to static storage class variables is not destroyed after the function execution terminates in whose body we declared static storage class local variable.

UNlike the auto and register, the C compiler doesnt assign garbage value as initial value to static storage variable, but assigns the default value for the data type of the static storage class local variable as its initial value.
*/

//pgm to static  storage class

#include<stdio.h>

void display1();

int main()
{

	display1();
	display1();
	display1();

	
	
	return 0;
}

void display1()
{
	static int i=1;
	i++;


	printf("\n %d",i);	

}

/*
When display1() is called 1st time, the static storage class local variable i is allocated RAM memory and it ios assigned initial value 1 which we have explicitly assigned. Then i++ will make value of i variable 2 and the 2 is printed on screen. But after 1st execution of display1() ends, RAM memory allocated to i variable is not destroyed but it remains alive. After display1() is called 2nd time again the RAM memory is not reallocated to static storage class variiable i. So again the statement static int i=1 will not run. But the execution will begin from i++.

So output is 
2
3
4

*/