/*
pgm to display nos from 1 to 20 but dont display 2,3,4,5,6,8,10,12,13,14
*/

#include<stdio.h>

int main()
{
	int i;

	for(i=1;i<=20;i++)
	{
			if((i==2)||(i==3)||(i==4)||(i==5)||(i==6)||(i==8)||(i==10)||(i==12)||(i==13)||(i==14))
			{
				continue;

			}

			printf(" %d",i);


	}
/*
Here the continue statement will skip remaining statements in current execution or iteration of the loop and control goes to the next execution. So when i variable value is either 2 or 3 or 4..., then the condition of if block is true so continue statement runs and so printf() statement duiring that execution of for loop will be skipped and control automatically goes to i++ i.e. next execution. So now values 2,3,4,... will not be printed.

So continue unlike break doesnt terminate end entire execution of loop.

*/

	return 0;
}