/*
Pointer:
int **a;
int *b;
int c=10;

a is a double pointer variable because when we have declared variable a we have used 2 * symbols. b is a single pointer variable.
So we can assign address of b as value of a, and address of c as value of b.

a=&b;
b=&c;

a means value of a variable means address of b
*b means value of c means 10.
*a means value of b means address of c. *a  means address of c.

**a means value of c means 10

*/
//pgm to swap the values of 2 variables using pointer
#include<stdio.h>

void swap(int **,int **);
//call by address

void display(int,int);
//call by value

main()
{
	int a,b;
	int *e,*f;

	e=&a;
	f=&b;

	printf("\n Enter value of a:");
	scanf("%d",&a);

	printf("\n Enter value of b:");
	scanf("%d",&b);

	printf("\n The values of a and b before swapping are:");
	display(a,b);

	swap(&e,&f);

	printf("\n The values of a and b after swapping are:");
	display(a,b);

	return 0;
}


void display(int c,int d)
{
	printf(" %d %d",c,d);

}

void swap(int **c,int **d)
{
	int e;

	e=**c;
	**c=**d;
	**d=e;

}