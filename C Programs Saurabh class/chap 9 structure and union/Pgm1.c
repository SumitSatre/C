/*
structure:
If we want to define our own data type in C pgm, then we define our own structure. The struct is a keyword in C language.

struct Student
{
	char name[100];
	int rno;
	int per;


};

In above code we have defined our own data type named struct Student. We have declared name,rno,per variables inside definition of struct Student. So name,rno and per are data members of user defined data type called struct Student. Student is name of the structure and we can use any name instead of Student. 


struct Student a,b,c,d,e;
Here a,b,c,d and e are 5 variables declared using data type struct Student. Each variable declared using the data type struct Student will have size equal to sum of sizes of data members of structure.

struct Student type has 3 data members name,rno and per.
Size of every variable declared using user defined data type struct Student=(sizeof name i.e. 100 bytes)+(size of rno i.e. 2 bytes)+(size of per i.e. 2 bytes)=104 bytes

So every variable declared using type struct Student will have size equal to 104 bytes allocated in RAM memory.

Every variable we declare using data type struct Student will have its own unique copy of data members name,rno and per in RAM memory,

struct Student a,b,c,d,e;

RAM memory:
a	b	c	d	e
name	name    name............  
rno     rno     rno.............
per     per     per


If we want to access data members of a structure, we use the dot operator on name of the structure variable.
gets(a.name);
scanf("%d",&a.rno);
scanf("%d",&a.per);

In above code, we have accessed data members name,rno and per of a variable of type struct Student.



gets(b.name);
scanf("%d",&b.rno);
scanf("%d",&b.per);

In above code, we have accessed data members name,rno and per of b variable of type struct Student.


struct Student *p;
struct Student m;

p=&m;
p is declared as a pointer variable of type struct Student. m is a normal variable of type struct Student. So we have assigned address of m as value of p. 
gets(p->name);
scanf("%d",&p->rno);

We use -> operator on name of pointer variable of struct type. p->name,p->rno,... access the data members name,rno etc. of the m variable of type struct Student using p variable. 




struct Student a[100];

for(i=0;i<=99;i++)
{
	gets(a[i].name);
	scanf("%d",&a[i].rno);

}
In above code we have declared a variable as a array variable of type struct Student and capacity 100 elements. So there will be 100 elements of type struct Student allocated one after another in RAM memory and each element of the a array will have its own unique copy of data members name,rno and per.

a[i].name access the data member name of element at index i in a array.

*/

//pgm to accept and display details of single employee
#include<stdio.h>

struct Employee
{
	char name[100];
	int id;
	int age;
	long int salary;

};

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

/*
e2->name,e2->id etc. access the data members name,id etc. of the e1 variable of type struct Employee using e2 variable.

*/	

}

void display(struct Employee e2)
{
	printf("\n The employee name is %s \n The employee id is %d \n The employee age is %d \n The employee salary is %ld",e2.name,e2.id,e2.age,e2.salary);

//e2.name,e2.age,e2.salary are accessing data members name,age etc. of e2 variable

}