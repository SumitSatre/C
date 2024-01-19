/*
accept a number from user and find its factorial
5!=1*2*3*4*5=120

6!=1*2*3*4*5*6=720

i=1;
f=1;

while(i<=no)
{
	f=f*i;
	i=i+1;

}
no=4

1st execution of loop:
i=1,f=1
f=f*i=1*1=1
i=2

2nd execution of loop:
i=2,f=1
f=1*2=2
i=3

3rd execution of loop:
i=3,f=2
f=2*3=6
i=4

4th execution of loop:
i=4,f=6
f=6*4=24
i=5


*/

//pgm to find factorial of given number

#include<stdio.h>

main()
{
	int i=1;
	long int f=1;
	int no;

	printf("\n Enter number for finding factorial:");
	scanf("%d",&no);

	
	while(i<=no)
	{
		f=f*i;
		i=i+1;
	}

	printf("\n The factorial is %ld",f);

	


}