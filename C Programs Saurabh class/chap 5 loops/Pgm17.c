/*
find sum of series
1+(1+2)+(1+2+3)+(1+2+3+4)+...
1
1 2
1 2 3
1 2 3 4

*/

#include<stdio.h>

main()
{
	int n,i,j,sum=0;

	printf("\n Enter how many terms do you want to add in the series...1+(1+2)+(1+2+3)+..");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum=sum+j;
		}

	}

//n=3
/*
1st time:
i=1,
j=1
sum=0+1=1

2nd time:
i=2
j=1
sum=1+1=2
j=2
sum=2+2=4
j=3

3rd time
i=3
j=1
sum=4
sum=4+1=5
j=2
sum=5+2=7
j=3
sum=7+3=10
j=4


i=4


*/
	printf("\n The sum is %d",sum);

}