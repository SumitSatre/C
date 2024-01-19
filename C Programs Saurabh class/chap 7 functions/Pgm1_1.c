//pgm to define a function to add 2 numbers
#include<stdio.h>

int add(int,int);

main()
{
	int a,b,m;

	printf("\n Enter the 2 numbers to be added:");
	scanf("%d%d",&a,&b);

	m=add(a,b);
	printf("\n The addition of %d and %d is %d",a,b,m);

	


}


int add(int c,int d)//function title
{
	
	int e;
	e=c+d;

	return e;	

}

