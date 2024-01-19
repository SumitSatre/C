
//pgm to accept and display details of a multiple employee using dyanamic RAM memory allocation

#include<stdio.h>

struct Employee
{
	char ename[100];
	int eid;
	long int esalary;

};

void acc(struct Employee *,int);

void display(struct Employee *,int);


int main()
{
	struct Employee *e1;

	int n;

	printf("\n Enter how many employees:");
	scanf("%d",&n);

	e1=(struct Employee *) malloc(sizeof(struct Employee)*n);

	

	acc(e1,n);
	display(e1,n);

	free(e1);

	return 0;
}

void acc(struct Employee *e2,int n2)
{
	int i;
	printf("\n Enter details of 3 employees:");

	for(i=0;i<=n2-1;i++)
	{
		printf("\n Enter employee name:");
		fflush(stdin);
		gets(e2->ename); 
//e2[i].ename accesses data member ename of element in e2 array at index i

		printf("\n Enter employee id:");
		scanf("%d",&e2->eid);

		printf("\n Enter employee salary:");
		scanf("%ld",&e2->esalary);

		e2++;
	}

}


void display(struct Employee *e2,int n2)
{
	int i;
	printf("\n Enter details of 3 employees:");

	for(i=0;i<=n2-1;i++)
	{
		printf("\n Employee name is %s, employee id is %d,employee salary is %ld",e2->ename,e2->eid,e2->esalary);
		e2++;

	}

}