//5432
//234
/*
accept a number and find sum of digits and number
When we divide any number by 2 we always get remaidner as last digit in that number
When we divide any number byu 2, the quotient we get is the number excluding last digit

e,g,
234/10=23
234%10=4


a=2845
During 1st execution of loop, a is 2845
sum=0
sum=sum+(a%10)=0+5=5;
a=a/10=284;

During 2nd execution of loop, a is 284
sum=5
sum=sum+(a%10)=5+4=9;
a=a/10=284/10=28;

During 3rd execution of loop, a is 28
sum=9
sum=sum+(a%10)=9+8=17;
a=a/10=28/10=2;


During 4th execution of loop, a is 2
sum=17
sum=sum+(a%10)=17+2=19;
a=a/10=2/10=0;


*/

#include<stdio.h>

main()
{
	int sum=0,a,cnt=0;

	printf("\n Enter number:");
	scanf("%d",&a);

	while(a!=0)
	{
		cnt=cnt+1;
		sum=sum+(a%10);
		a=a/10;

	}

	printf("\n The number of digits is %d and sum of digits is %d",cnt,sum);
}