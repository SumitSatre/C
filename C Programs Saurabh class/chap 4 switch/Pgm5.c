//accept number from user and find mod value
//-5 5
//5 5
//-9 9
//9 9
#include<stdio.h>

int main()
{
	int number;

	printf("\n Enter number:");
	scanf("%d",&number);

	switch(number>=0)
	{
		case 1: printf("\n The mod value is %d",number);
		        break;

		case 0: printf("\n The mod value is %d",-number);

	}


}