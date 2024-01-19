
//write a pgm to accept 6 values into the array and search whether a value accepted from user is present or not //in array

#include<stdio.h>

main()
{
	int a[6],i,flag=0,ele;

	printf("\n Enter values of 6 int elements to be stored into the array:");

	for(i=0;i<=5;i++)
	{
		scanf("%d",&a[i]);
		

	}

	printf("\n Which value do you want to search:");
	scanf("%d",&ele);

	for(i=0;i<=5;i++)
	{
		if(a[i]==ele)
		{
			printf("\n The element is found at index %d",i);
			flag=1;
			break;

		}
	}	

	if(flag==0)
	{
		printf("\n Element not found");
	}
}

/*

11 2 45 6 7 21

ele 67

*/