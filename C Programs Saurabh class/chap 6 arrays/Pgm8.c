//pgm to accept a string value from user and find total no. of characters in it

#include<stdio.h>

main()
{
	char b[100];
	int i;

	printf("\n Enter string value:");
	gets(b);

	for(i=0;b[i]!='\0';i++)
	{


	}
/*
abc def

i=0
b[i] 'a'

i=1
b[i] is 'b'

i=2
b[i] is 'c'


i=6
b[i] is 'f'

i=7
b[i] is '\0'


*/

	printf("\n The no. of characters in the string are %d",i);
}