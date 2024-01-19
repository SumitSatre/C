/*

extern storage class:
1. Its scope is entire pgm. It can be used inside body of any function definition in the pgm. 
2. Its lifetime the entire pgm. So its RAM memory remains alive throughut pgm execution.
3. If we have not assigned initial value to extern storage class variable, then automatically compiler assigns default value of the data type of the variable as its initial value.
4. It is allocated RAM memory.

The declaration statement of the variable is that statement where we are telling compiler the data type of the variable and its scope. But actual alloation of RAM memory is not done in declaration statement.

Definition statement is that statement where actual alocation of RAM memory is done for the variable.
Uptil now, the variables of the storage classes, auto,register,static, here the declaration and definition statements were same because where we declared the variables using data type and storage class name, they were also allocated RAM memory there.

But only for extern storage class global variables whether we are accessing global variable in same pgm functions or different pgm, declaration andd efinition statement are different.

When we declare global variable without using extern keyword, it becomes definition statement and it is allocated RAM memory in definition. But when we declare global variable using extern keyword then it becomes a declaration statement and just tells compiler that corr. function wants to use global variable with that name which is defined in same or different pgm. 

Suppose we have a global variable named m in Pgm1.c.

Pgm1.c

int m;


In Pgm1.c, we write only int m without extern keyword, this is its definition statement because the compiler will allocate RAM memory for m variable when it is running Pgm1.c.


Pgm2.c
#include"Pgm1.c"
void display()
{
	extern int m;

}
Here we wanted to use global variable m, of Pgm1.c in Pgm2.c. So we have to mention statement extern int m in body of display() definition in Pgm2.c. The above statement extern int m is declaration statement because it is not allocating RAM memory for m but just telling compiler that we want to use globval variable m in Pgm1.c into Pgm2.c



*/

//pgm to extern  storage class

#include<stdio.h>

int a;
//definition statement
//If we had written extern keyword, then RAM memory would not  get allocated for global variable a and we get //compiler error


void display1();
void display2();
void display3();


int main()
{
	

	display1();
	display2();
	display3();
	display1();
	display2();

	
	return 0;
}

void display1()
{
    extern int a;
//declaration statement
	a=a+2;

	printf("\n %d",a);

}

void display2()
{
	extern int a;
	a=a*5;

	printf("\n %d",a);

}

void display3()
{
    extern int a;//declaration statement
	a=a+3;

	printf("\n %d",a);

}


//The changes made by any function definition in this pgm into a variable will be reflected in all other //functions of same pgm because same global variable is being accessed by all function definitions
