//pgm to accept a string value from user and find total no. of characters in it

#include<stdio.h>
#include<string.h>

main()
{
	char b[100];
	int len;

	printf("\n Enter string value:");
	gets(b);

	len=strlen(b);
/*
strlen() is a predefined function in string.h header file. The above statement strlen(b) will find the no. of characters in the string value stored in b variable and it will not consider null character '\0' as part of string value.

*/		

	printf("\n The no. of characters in the string are %d",len);
}