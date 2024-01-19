/*

2. register storage:
register storage class is declared fpr a variable using register keyword in C. If we want a local variable declared in body of a function definition to have register storage class, then we must use register keyword.

The scope and lifetime of register storage class variables is limited to body of the function definition in which it is declared.

The initial value automatically assigned by C compiler to register storage class variables is garbage value.

The register storage class  variables are stored in cpu registers. They are accessed faster than auto storage class variables stored in RAM memory. So generally those variables used again and again i.e. loop variables can be used as register storage class variables.

Because there are only 9 cpu registers, so we cannot declare many variables at sa time as register storage class. If register storage becomes full and if there are more variables in pgm declare dusing register storage class then compiler treats them as auto storage class.
*/

//pgm to register storage class

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
	register int i;

	for(i=1;i<=100;i++)
	{
		printf("\n %d",i);

	}
	

}