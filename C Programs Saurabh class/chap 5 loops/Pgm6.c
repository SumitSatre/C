//pgm to display numbers from 1 to 10 using for loop

#include<stdio.h>

void main()
{
	int i;

	printf("\n The numbers from 1 to 10 are");

	for(i=1;i<=10;i=i+1)
	{
		printf(" %d",i);

	}
/*

Here the title for for loop contains 3 parts. The 1st part is i=1, where we have assigned initial value 1 to i variable. i=1 will execute only once during entire execution of the for loop. After i=1 is executed, the condition i<=10, is checked and if condition is true, then body of the for loop is executed once. Then control comes to i=i+1, and value of i variable is increased by 1. 

Then again condition is checked i<=10, and if it is true, then body of the for loop is executed again and after that control goes to i=i+1.

This will keep repeating until condition becomes false.

*/

}