
//pgm to accept and display details of a multiple employee

#include<stdio.h>

struct Employee
{
	char ename[100];
	int eid;
	long int esalary;

};

void acc(struct Employee []);

void display(struct Employee []);


int main()
{
	struct Employee e1[3];
//here e1 is a array variable of type struct Employee having 5 elements in it. So there will be //totally 5 elements of type struct Employee in e1 array


//	struct Employee e4={"abc def",5,5000};
/*
In above statement "abc def",5 and 5000 are automatically assigned to data members ename,eid and esalary of variable e4. The values must be mentioned in same order in {} as order in which data members are declared inside the structure definition

*/

	acc(e1);
	display(e1);

	return 0;
}

void acc(struct Employee e2[])
{
	int i;
	printf("\n Enter details of 3 employees:");

	for(i=0;i<=2;i++)
	{
		printf("\n Enter employee name:");
		fflush(stdin);
		gets(e2[i].ename); 
//e2[i].ename accesses data member ename of element in e2 array at index i

		printf("\n Enter employee id:");
		scanf("%d",&e2[i].eid);

		printf("\n Enter employee salary:");
		scanf("%ld",&e2[i].esalary);

	}

}


void display(struct Employee e2[])
{
	int i;
	printf("\n Enter details of 3 employees:");

	for(i=0;i<=2;i++)
	{
		printf("\n Employee name is %s, employee id is %d,employee salary is %ld",e2[i].ename,e2[i].eid,e2[i].esalary);
		

	}

}