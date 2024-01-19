/*
Pointer:
int *m;
int n;
Here m is a pointer variable of type int, We have used * symbol for declaring m. 
So m variable can store address of a normal int variable as its value.

m=&n;
In above statememt we have assigned address of n variable as value of m variable. So m variable points to n variable.

n=50;
Here we are changing value of n variable to  50

*m=10;
When we use * symbol before name of pointer variable it is called as pointer indirection operator. *m means value of n. So here n variable is getting assigned value 10. 


*/
//pgm to swap the values of 2 variables using simgle pointer
#include<stdio.h>

void swap(int *,int *);
//call by address

void display(int,int);
//call by value

main()
{
	int a,b;

	printf("\n Enter value of a:");
	scanf("%d",&a);

	printf("\n Enter value of b:");
	scanf("%d",&b);

	printf("\n The values of a and b before swapping are:");
	display(a,b);

	swap(&a,&b);

	printf("\n The values of a and b after swapping are:");
	display(a,b);

	return 0;
}


void display(int c,int d)
{
	printf(" %d %d",c,d);

}

void swap(int *c,int *d)
{
	int e;

	e=*c;
	*c=*d;
	*d=e;

}