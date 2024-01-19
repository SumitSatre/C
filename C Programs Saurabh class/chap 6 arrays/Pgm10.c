//pgm to accept a string value from user and convert the case of characters in string
//65-90
//97-122
#include<stdio.h>
#include<string.h>

//ABC def
//abc DEF

main()
{
	char str[100];
	int len,i=0;

	printf("\n Enter string value:");
	gets(str);

	len=strlen(str);

	while(i<=len-1)
	{
		if((str[i]>=65)&&(str[i]<=90))
		{
			str[i]=str[i]+32;	

		}

		else if((str[i]>=97)&&(str[i]<=122))
		{
			str[i]=str[i]-32;	

		}
		i++;
	}

	printf("\n The new string value is %s",str);
}