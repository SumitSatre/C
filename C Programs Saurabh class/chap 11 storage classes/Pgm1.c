/*
Storage classes:
Storage class is a keyword in C. It tells 4 important things regarding the variable:

1. Where will variable be allocated memory in RAM or in cpu register/
2. What is scope of the variable i.e. in which part of the pgm can variable name be used and its value be accessed.
3. What is life time of variable i.e in which part of pgm does RA memory allocated to variable remain alive.
4. What is initial value assigned by C compiler to the variable automatically.

1. auto storage:
auto storage class is default storage class assigned to any local variable declared in the body of the function definition. If we want a local variable declared in body of a function definition to have auto storage class, then we either use auto keyword or we dont mention any storage class keyword. In that case automatically variable becomes auto storage class.

The scope and lifetime of auto storage class variables is limited to body of the function definition in which it is declared.

The initial value automatically assigned by C compiler to auto storage class variables is garbage value.


*/

//pgm to auto storage class

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
	int m;
//m also is having auto storage class
	auto int n;

	printf("%d %d",m,n);

	m=5;
	n=10;

	printf("%d %d",m,n);
	

}