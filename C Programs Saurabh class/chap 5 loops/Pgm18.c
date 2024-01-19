/*
do while:
do
{
	set of statements;

}while(condition);
Here when do while loop is executing the 1st time, the control will first enter the body and after the body is executed then condition is checked. So even if the condition is false, at the start of execution of the do while loop, still the body of the do while loop will run atleast once.


*/
//pgm to display numbers from 1 to 20 using do while
#include<stdio.h>

main()
{
	int i;

	i=1;

	do
	{
		printf(" %d",i);
		i++;

	}while(i<=10);
}