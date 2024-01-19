//5432
//234
/*
accept number from user and count no. of digits

RULE:
Whenever we divide a integer number by 10, the last digit gets removed from that numnber automatically.

a=2
a=a/10=2/10=0.2=0

a
cnt=0

while(a!=0)
{
	cnt=cnt+1;
	a=a/10;

}

a=234

During 1st execution of loop, a is 234
cnt=1
a=234/10=23

During 2nd execution of loop, a is 23
cnt=2
a=23/10=2

During 3rd execution of loop, a is 2
cnt=3
a=2/10=0

The no. of digits is cnt=3


*/

#include<stdio.h>

main()
{
	int cnt=0,a;

	printf("\n Enter number:");
	scanf("%d",&a);

	while(a!=0)
	{
		cnt=cnt+1;
		a=a/10;

	}

	printf("\n The number of digits is %d",cnt);
}