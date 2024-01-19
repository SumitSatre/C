/*

Array:
Array is a variable which can store multiple values of the same data type at same time. 


int m[20];
In above statement we have declared m variaable as an array variable having size 20 elements. So there will be a block allocated in RAM memory with 20 int type elements in it and the name of the entire block will be m.
So now we can store atmost 20 values at same time in m variable.


The m variable is also called as 1d or 1 dimensional array variable because we have used only 1 pair of brackets while declaring m variable. 

Every element in the 1d array variable has an index associated with it. Index of an element in the array is the position of the element in the array. Index of 1st element is 0, index of 2nd element is 1...index of 20th element is 20-1=19.

To access any individual element of the array we write name of the array variable and then we write the index of that element inside the [].

e.g. m[0] is the name of 1st element in the array variable m, m[1] is name of 2nd element in m, ...m[19] is name of 20th element in array.



To access elements in array, we use a for loop. The variable i which we use in for loop, is used as index of the array variable. 


for(i=0;i<=19;i++)
{
	scanf("%d",&m[i]);

}
The index of 1st element in the array is 0. So we have assigned value 0 to variable i in the for loop.
So each time the above for loop runs, we are accepting input value from user into each new element in the array variable m, at index position equal to value of i variable. Also because of i++, each time the for loop runs, the value of i variablewill be increased by 1 and a new element of the array variable m will be accessed.



for(i=0;i<=19;i++)
{
	printf(" %d",m[i]);

}

Here we are displaying values of all 20 elements in the array variable m.


int n[]={25,31,21,-4,15};
Here we have explicitly mentioned inside the {} while declaring the 1d array variable n. So we have not mentioned the size of the array variable inside the []. So here compiler counts the no. of values in the {}, and it will allocate RAM memory for the array variable  with 5 elements where value of 1st element at index 0 is 25, value of 2nd element is 31...

*/

//write a pgm to accept 10 values into the array and print array

#include<stdio.h>

main()
{
	int a[10],i;
	

	printf("\n Enter values of 10 int elements to be stored into the array:");

	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\n The values of 10 int elements stored into the array are:");

	for(i=0;i<=9;i++)
	{
		printf(" %d",a[i]);
	}

}
