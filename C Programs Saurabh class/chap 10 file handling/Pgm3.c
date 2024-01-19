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
/*
e1 is a global variable of type struct Employee and so we can use it anywhere inside body of any function definition of the pgm. This is because we have declared e1 outside body of all function definitions of this pgm.

*/

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
		printf("\n Enter details of employee no.%d",i);
		printf("\n Enter employee name:");
		fflush(stdin);
		gets(e1.ename);

		printf("\n Enter employee id:");
		scanf("%d",&e1.eid);

		printf("\n Enter employee salary:");
		scanf("%ld",&e1.esalary);
	
		fwrite(&e1,sizeof(e1),1,fp);	

	}
/*
Here each time the for loop runs, we are accepting input values into data members of the e1 variable of type struct Employee and then we are writing the values of all data members eid,ename and esalary of e1 into the file employeerecord1.txt at location in the pointed by fp variable. For writing values of data members of struct variable e1 into file we use frwrite() which is predefined function in stdio.h header file. 
When we call fwrite() we pass 4 input arguments into it. The 1st input is address of e1 variable of type struct Employee. 2nd input is size of e1 variable in no. of bytes. 3rd input means how many times we want to write values of data members of e1 into the file. 4th input is the location in the file where we want to write values of data members of e1. 

After fwrite() statement inside body of for loop runs, the values of data members of e1 are written into current location in the file pointed by fp variable and then fp variable is automatically moved to next location in the file where the next values of data members of e1 must be written. 

*/
	fclose(fp);
}




void read1()
{
	
	fp=fopen("employeerecord1.txt","r");
	
	
	while(fread(&e1,sizeof(e1),1,fp)==1)	
	{
		printf("\n The details of employee are %s %d %ld",e1.ename,e1.eid,e1.esalary);
		
	}
/*
fread() has same syntax as fwrite(). fread() statement above will read values of data members from current location in the file pointed to by fp variable and values are read automatically into corr. data members of e1 variable of type struct Employee and then we are displaying values of data members of e1 variable on screen using printf() statement isndie body of while loop.

As long as fread() statement doesnt reach end of file, it returns 1. As soon as fread() reaches end of file, it doesnt return 1.

*/
	fclose(fp);
}