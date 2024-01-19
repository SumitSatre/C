//pgm to accept input values into 3 variables and display

#include<stdio.h>
/*
In C language there are many predefined functions like printf(),scaf(). These predefined functions are defined in different header files. All these header files are available after install C language software.
stdio.h means standard input output header file. Functions are printf() and scanf() are defined in stdio.h header file. If we want to use predefined functions like printf() and scanf() in C pgm then we must include stdio.h file into our c pgm by writing #include<stdio.h>

*/

main()
{
	int a;
	float b;
	char c;

	printf("\n Enter value of c of data type char:");
	fflush(stdin);
/*
fflush() is a predefined function in C language and it is used to free or empty RAM memory if it is full. stdin is a keyword in C language and it represents keyboard. fflush() function must be called only before accepting character value from user and we dont call it before accepting integer or float values.

*/
	scanf("%c",&c);
	
	printf("\n Enter value of a of data type int:");
	scanf("%d",&a);

	printf("\n Enter value of b of data type float:");
	scanf("%f",&b);




	printf("\n The values of a,b and c are %d,%f,%c",a,b,c);



	
}