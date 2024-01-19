/*
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
//pgm to accept and display 10 names in a single 2d char array variable and search whether a name is present or not

#include<stdio.h>
#include<string.h>

main()
{
	char str[10][50];
	char ele[50];
//Here we have declared ele as 1d char array variable because we are going to store only 1 string value into ele which is //the string value to be searched.

	int i,flag=0;

	printf("\n Enter the 10 names:");
	i=0;

	while(i<=9)
	{
		gets(str[i]);
		i++;

	}	

	printf("\n Enter name to be searched:");
	fflush(stdin);
	gets(ele);

	i=0;

	while(i<=9)
	{
		if(strcmp(str[i],ele)==0)
		{
			printf("\n The name %s is found at index %d",ele,i);
			flag=1;
			break;

		}

		i++;
	}

	if(flag==0)
	printf("\n Name is not found");
/*
strcmp() is a predefined function in string.h header file. The above statement strcmp(str[i],ele) will compare the string value of str[i] with string value of ele variable. If string value of str[i] is greater than string value of ele then strcmp(str[i],ele) will return value greater than 0.

If string value of str[i] is lesser than string value of ele then strcmp(str[i],ele) will return value lesser than 0.

If string value of str[i] is equal to string value of ele then strcmp(str[i],ele) will return value 0.
*/
}