//pgm to define multiple functions one for accepting string value, one for displaying string //value, one for finding total length of string and one for converting case of characters in //string

#include<stdio.h>

void acc(char []);
void display(char []);
int length(char []);
void convert(char []);

main()
{
	char s1[100];
	int l;

	acc(s1);

	display(s1);

	l=length(s1);
	printf("\n The length is %d",l);

	convert(s1);
	printf("\n The converted string is %s",s1);

}

void acc(char s2[])
{
	printf("\n Enter string value:");
	gets(s2);
}

void display(char s2[])
{
	printf("\n String value is %s",s2);
	
}

int length(char s2[])
{
	int i=0;

	while(s2[i]!='\0')
	{
		i++;
	}

	return i;
}

void convert(char s2[])
{
	int i;
	i=0;

	while(s2[i]!='\0')
	{
		if((s2[i]>=65)&&(s2[i]<=90))
		{
			s2[i]=s2[i]+32;

		}
		
		else if((s2[i]>=97)&&(s2[i]<=122))
		{
			s2[i]=s2[i]-32;

		}
		
		i++;
	}


}