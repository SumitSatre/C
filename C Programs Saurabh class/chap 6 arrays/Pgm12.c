/*

1 2 3
4 5 6
7 8 9
	
abc def
kaveesh nadkarni

char str[50][100];
In above statement,we have declared a 2d char array variable named str. It has 50 rows and 100 colums. Each row in a 2d array is like a 1d array where the no. of columns in the 2d array will be same as no. of elements in the 1d array corresponding to the row.

So this means that str has 50 one-dimensional arrays in it and each 1d array in str has 100 elements of char type. So this means that we can store atmost 50 string in str and each string value stored in str can have atmost 99 characters.


gets(str[0]);
gets(str[1]);

i=0;

while(i<=9)
{
	gets(str[i]);
	i++;

}


*/
//pgm to accept and display 10 names in a single 2d char array variable

#include<stdio.h>

main()
{
	char str[10][50];
	int i;

	printf("\n Enter the 10 names:");
	i=0;

	while(i<=9)
	{
		gets(str[i]);
		i++;

	}	

	printf("\n The 10 names are:");
	for(i=0;i<=9;i++)
	{
		printf("\n %s",str[i]);
	}

}