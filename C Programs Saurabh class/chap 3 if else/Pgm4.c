//pgm to find mod value or ansolute value
/*
suppose number is -5. Its mod value is 5
Suppose number is 5. Mod value is 5
*/
#include<stdio.h>
main()
{
	 int a;

	printf("\n Enter number:");
	scanf("%d",&a);

	if(a<0)
	{
		printf("\n The mod value is %d",-a);

	}

	else if(a>0)
	{
		printf("\n The mod value is %d",a);


	}

	else
	{
		printf("\n Mod value is 0");

	}

}