// Create a program demonstrate the use of arrow operator (->)

#include <stdio.h>
#include <string.h>

struct Employee{
    char name[20];
    int ID;
    float salary;

};

int main(){
    struct Employee E1;
    struct Employee *ptr;

    ptr = &E1;

    printf("Info of Employye 1 : \n");
    strcpy(ptr->name ,"Sumit King");
    ptr->ID = 36446;
    ptr->salary = 125000.0000;

    printf("The name of employee 1 is %s \n" , E1.name);
    printf("The ID of employee 1 is %d \n" , E1.ID);
    printf("The salary of employee 1 is %.2f \n" , E1.salary);

    return 0;
}