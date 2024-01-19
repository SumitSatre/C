//pgm to accept a character from user and find if it is alphabet or digit or special symbol

#include<stdio.h>

main()
{
	char ch;

	printf("\n Enter character:");
	scanf("%c",&ch);

//ch='c'
	if((ch>=65)&&(ch<=90))
	{
		printf("\n Upper case alphabet");

	}

	else if((ch>=97)&&(ch<=122))
	{
		printf("\n Lower case alphabet");

	}

	else if((ch>=48)&&(ch<=57))
	{
		printf("\n Digit");

	}

	else
	{
		printf("\n Special symbol");
	}

}