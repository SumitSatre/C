/*
Functions:
When we define a function we divide it into 3 parts:
1. function prototype declaration statement
2. function definition
3. function call statement
*/

//pgm to define a function to add 2 numbers
#include<stdio.h>

int add(int,int);
/*
The above statement is the function prototype declaration statement of a function named as add(). We are going to define our own function named add() in this pgm. The function prototype declaration statement tells C compiler what is the name of the function which we are going to define, how many input values are we going to pass into the function when we call or execute the function, what are the data types of the input values we are going to pass into the function, and what is the data type of the output value we are going to return from the body of the function definition.

int add(int,int);
The above prototype declaration statement of the user defined function named acc() is telling C compiler, that when we call or execute the add() function we must pass 2 variables into it of type int, and the add() function will return an output value of type int. 

The function prototype declaration statement must be written above the main() function definition but below the #include statements in the C pgm.
*/

main()
{
	int a,b,m;

	printf("\n Enter the 2 numbers to be added:");
	scanf("%d%d",&a,&b);


	m=add(a,b);
/*
The above is the call statement for the add() function. Here we have mentioned the names of the variables a and b in the add() function call statement. So the values of the variables a and b are passed into the add() function definition.  When the above statement is being executed, the control will go to the add() function definition below main(), value of a is copied into c and value of b is copied into d. Then the body of the add() function definition is executed and the statement return e will return value of e variable back to the above statement, so m variable is assigned value of e variable. 

After the add() function definition executes completely and value of e variable is returned back, and so control comes back to the above statement and m variable is assigned value of e variable, and then execution will continue from next statement inside main().

The variables we mention in the function call statement are called as actual parameterts. So here a and b are the actual parameters.
*/

	printf("\n The addition of %d and %d is %d",a,b,m);

}


int add(int c,int d)//function title
{
//function body
	
	int e;
	e=c+d;

	return e;	

}

/*
The above is the function definition of the add() function. The function definition is function title + function body. 

The variables c and d declared in the title of the add() function definition are called as formal parameters. They are storage places for the input values we will pass into the function when we call or execute the function.

The body of the add() function definition is the set of statements isndie the {}.
The function title of the fucntion definition must match exactly with the function prototype declaration statement.

The int written before the name of the add() function in the title of the function definition means that we are going to return a value of type int from body of the add() function definition.

The return statement is used to return a value from the body of the function definition. So the statement return e is returning value of the e variable from the body of the add() function definition to the statement inside the main(), where we have called the add() function.

The variables which we declare in the function title of the function definition are formal parameters., So here c and d are formal parameters.

The RAM memory location of the actual parameters and formal parameters are not same. But value of a is copied into c and value of b into d. But if we make any change in value of the formal parameters c or d, then that same change is not seen in the value of variables a and b. 
This way of calling a function where we only pass values of actual parameters into the formal parameters but the RAM memory locations of formal parameters and actual parameters are different is called as call by value.
*/