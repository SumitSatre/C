#include <stdio.h>
#include <string.h>

struct Employee{
    char name[20];
    int age;
    float salary;

};

int main(){
    struct Employee E1 ,E2 ;
    printf("Info of Employye 1 : \n");
    printf("Enter the name of employee : ");
    scanf("%s" ,E1.name);
    printf("Enter the age of the employee : ");
    scanf("%d" , &E1.age);
    printf("Enter the salary of the employee : ");
    scanf("%f" , &E1.salary);

    printf("Info of Employye 2 : \n");
    printf("Enter the name of employee : ");
    scanf("%s" ,E2.name);
    printf("Enter the age of the employee : ");
    scanf("%d" , &E2.age);
    printf("Enter the salary of the employee : ");
    scanf("%f" , &E2.salary);

    printf("\nThe name of employee 1 is %s \n" , E1.name);
    printf("The age of employee 1 is %d \n" , E1.age);
    printf("The salary of employee 1 is %.2f \n \n \n" , E1.salary);

    printf("The name of employee 2 is %s \n" , E2.name);
    printf("The age of employee 2 is %d \n" , E2.age);
    printf("The salary of employee 2 is %.2f \n" , E2.salary);

    return 0;
}