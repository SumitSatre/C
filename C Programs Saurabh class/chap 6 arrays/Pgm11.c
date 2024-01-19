//pgm to accept string value from user and check if it is palindrome

/*

	nitin
         j i 
           
         
i=0
j=4

flag=0;

abc aba
i     j
while(i<=j)
{
	if(a[i]!=a[j])
	{
		flag=1;
		print not palindrome
		break;

	}
	
	
	i++;
	j--;

}

if(flag==0)
print palindrome

during 1st execution:
a[i]==a[j] is true, so a[i]!=a[j] is false
i=1
j=3
flag=0



during 2nd execution:
i=1
j=3
a[i]==a[j] is true, so a[i]!=a[j] is false
i=2
j=2
flag=0



during 3rd execution:
i=2
j=2
a[i]==a[j] is true, so a[i]!=a[j] is false
i=3
j=1
flag=0



abc mba
i     j

i=0
j=6

during 1st execution,
a[i]='a'
a[j]='a'
a[i]==a[j] is true, so a[i]!=a[j] is false
i=1
j=5
flag=0

during 2nd execution,
i=1
j=5
a[i]='b'
a[j]='b'
a[i]==a[j] is true, so a[i]!=a[j] is false
i=2
j=4
flag=1



during 3rd execution,
i=2
j=4

a[i]='c'
a[j]='m'

a[i]==a[j] is false, so a[i]!=a[j] is true
flag=1
not palindrome
end loop


*/

#include<stdio.h>
#include<string.h>

main()
{
	char a[100];
	int i,j,len,flag=0;

	printf("\n Enter string value:");
	gets(a);

	i=0;
	len=strlen(a);
	j=len-1;

	while(i<=j)
	{
		if(a[i]!=a[j])
		{
			flag=1;
			printf("\n String is not palindrome");
			break;
		}
		i++;
		j--;

	}

	if(flag==0)
	{
		printf("\n String is palindrome");
	}
}