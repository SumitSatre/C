/*
program to accept a character from user and find if it is vowel or consonent
*/
#include<stdio.h>
main()
{
	char ch;

	printf("\n Enter character:");
	scanf("%c",&ch);

	if((ch>=65)&&(ch<=90))
	{
		if((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
		{
			printf("\n Character is upper case vowel");

		}

		else
		{
			printf("\n Character is upper case consonent");

		}

	}

	else if((ch>=97)&&(ch<=122))
	{
		if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
		{
			printf("\n Character is lower case vowel");

		}

		else
		{
			printf("\n Character is lower case consonent");

		}

	}

	else
	{
		printf("\n Character is not aphabet");

	}

}

