//accept string from user and find total no. of alphabets, digits and special symbols

#include<stdio.h>
#include<string.h>

main()
{
	char str[100];
	int i,len,cnta=0,cntd=0,cnts=0;

	printf("\n Enter the string value:");
	gets(str);

	len=strlen(str);
	for(i=0;i<=len-1;i++)
	{
		if((str[i]>=65)&&(str[i]<=90))
		{
			cnta++;

		}

		else if((str[i]>=97)&&(str[i]<=122))
		{
			cnta++;

		}


		else if((str[i]>=48)&&(str[i]<=57))
		{
			cntd++;

		}

		else
		{
			cnts++;

		}
		
	}

//ABC 12de9f!
/*

i=0;
A
cnta 1

i 1
cnta 2

i=2
cnta 3

i=3
cnts 1


i=4
1
cntd 1

i=5
2
cntd 2

i=6
d
cnta 4

i=7
e
cnta 5


i=8
9
cntd 3

i=9
f
cnta 6

i=10
!
cnts 2

*/
	printf("\n The number of alphabets is %d, no. of digits is %d, no. of special symbols is %d",cnta,cntd,cnts);

}