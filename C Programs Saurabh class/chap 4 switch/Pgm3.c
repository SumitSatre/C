//PGM TO accept a character from user and find it is vowel or consonent


#include<stdio.h>

main()
{
	char ch;

	printf("\n Enter character:");
	fflush(stdin);
	scanf("%c",&ch);

	if((ch>=65)&&(ch<=90))
	{
		switch(ch)
		{
			case 'A':
			
			case 'E':

			case 'I':

			case 'O':

			case 'U':printf("\n It is upper case vowel");
				break;

			default: printf("\n It is upper case consonant");
					
		


		}


	}


	else if((ch>=97)&&(ch<=122))
	{
		switch(ch)
		{
			case 'a':
			
			case 'e':

			case 'i':

			case 'o':

			case 'u':printf("\n It is lower case vowel");
				break;

			default: printf("\n It is lower case consonant");
					
		


		}


	}

	else
	{
		printf("\n It is not alphabet");

	}
}