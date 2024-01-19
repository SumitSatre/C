/*
pgm to store employee records into file
*/
#include<stdio.h>

struct Employee
{
	char ename[100];
	int eid;
	long int esalary;

}e1;

void write1();
void read1();

FILE *fp;

main()
{
	write1();
	read1();

}

void write1()
{
	int n,i;
	fp=fopen("employeerecord1.txt","a");
	
	printf("\n Enter how many employee records:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("\n\n Enter details of employee no.%d",i);
		printf("\n Enter employee name:");
		fflush(stdin);
		gets(e1.ename);

		printf("\n Enter employee id:");
		scanf("%d",&e1.eid);

		printf("\n Enter employee salary:");
		scanf("%ld",&e1.esalary);
	
		fwrite(&e1,sizeof(e1),1,fp);	

	}

	fclose(fp);
}




void read1()
{
	
	fp=fopen("employeerecord1.txt","r");
	
	
	while(fread(&e1,sizeof(e1),1,fp)==1)	
	{
		printf("\n The details of employee are %s %d %ld",e1.ename,e1.eid,e1.esalary);

	}
	fclose(fp);
}