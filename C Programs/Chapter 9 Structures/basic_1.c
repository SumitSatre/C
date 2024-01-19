#include <stdio.h>
#include <string.h>

struct Employee{
    char name[20];
    int ID;
    float salary;

};

int main(){
    struct Employee E1 ,E2 ,E3;
    printf("Info of Employye 1 : \n");
    strcpy(E1.name ,"Sumit satre");
    // E1.name = "Sumit Satre";
    E1.ID = 8646;
    E1.salary = 125000.0000;

    printf("The name of employee 1 is %s \n" , E1.name);
    printf("The ID of employee 1 is %d \n" , E1.ID);
    printf("The salary of employee 1 is %.2f \n" , E1.salary);

    return 0;
}