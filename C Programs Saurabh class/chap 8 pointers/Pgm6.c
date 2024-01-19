/*
Function pointer:
It is pointer variable which can store address of another function. It is mainly used for calling another function using pointer indirectly
*/
//pgm to multiply 2 numbers by defining own function and using function pointer

#include<stdio.h>

int multiply(int,int);
int (*m)(int,int);
//In above statement we have declared b as a global function pointer variable which can store address of a function whose //return type is int and which has 2 formal parameters of type int. b can be used in body of any function definition of //this pgm because we have declared it outisde body of all function definitions of pgm
/*
Here we have declared b as a global variable because we have declared b outside body of all function definitions of this C pgm. So we can use variable b inside body of any function definition of this C pgm.

*/

main()
{
	int a,b,res;

	printf("\n Enter 2 nos to be multiplied:");
	scanf("%d%d",&a,&b);

	m=multiply;
//in above statement we have assigned address of multipky function to the pointer variable p

/*
int *a;
int b;
a=&b;

*a=100;

*/
	
	res=(*m)(a,b);
// in above statement we have called multipy function using b function pointer variable and passed a and b as inputs to //it


	printf("\n The result is %d",res);
	



}

int multiply(int c,int d)
{
	
	int e;
	e=c*d;
	
	return e;

}


