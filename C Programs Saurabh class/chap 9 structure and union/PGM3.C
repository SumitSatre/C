//pgm of nested structure

//pgm to accept and display details of single employee
#include<stdio.h>

struct Birthdate
{
	char month[100];
	int date;
	int year;
};

struct Employee
{
	char name[100];
	int id;
	int age;
	long int salary;
	struct Birthdate b1;
};
/*
  here b1 is a variable of type struct Birthdate and it is a data member
  in struct Employee.

*/

void acc(struct Employee *);
/*
Here we have mentioned that the acc() function which we will be definining in the pgm will have a formal parameter which is a pointer variable of type struct Employee. So when we call acc() in the pgm, we will pass address of variable of type struct Employee. Call by address.

*/

void display(struct Employee);
/*
Here we have mentioned that the display() function which we will be definining in the pgm will have a formal parameter which is a normal non pointer variable of type struct Employee. So when we call display() in the pgm, we will pass value of variable of type struct Employee. Call by value.

*/

main()
{
	struct Employee e1;

	acc(&e1);
//here in above acc() call statement, we are passing address of variable e1 of type struct Employee. Address of //e1 is passed into formal parameter e2 declared as pointer variable in the title of acc() definition.


	display(e1);
//Here values of data members of e1 are copied into corresponding datammebers of formal parameter e2 declared //in title of display() function definition



}

void acc(struct Employee *e2)
{
	printf("\n Enter employee name:");
	gets(e2->name);

	printf("\n Enter employee id:");
	scanf("%d",&e2->id);

	printf("\n Enter employee age:");
	scanf("%d",&e2->age);

	printf("\n Enter employee salary:");
	scanf("%ld",&e2->salary);

	printf("\n\n Enter employee birthdate...\n Enter month in words:");
	fflush(stdin);
	gets(e2->b1.month);

/*
e2->b1.month accesses the data member month of the b1 variable of type struct Birthdate
where b1 is a data member in type struct Employee. So above statement
is accessing month data member of b1 variable where b1 is data member being accessed
of e1 using e2.
*/

	printf("\n Enter date:");
	scanf("%d",&e2->b1.date);

	printf("\n Enter year:");
	scanf("%d",&e2->b1.year);


}

void display(struct Employee e2)
{
	printf("\n The employee name is %s \n The employee id is %d \n The employee age is %d \n The employee salary is %ld\n The birthdate is %d//%s//%d",e2.name,e2.id,e2.age,e2.salary,e2.b1.date,e2.b1.month,e2.b1.year);
	//e2.b1.month accesses month data member of b1 variable of type struct Birthdate
	//where b1 is the data member of e2

}