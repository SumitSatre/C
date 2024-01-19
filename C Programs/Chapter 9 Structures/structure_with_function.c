#include <stdio.h>
#include <string.h>

struct Employee{
    char name[20];
    int age;
    float salary;

};

void show(struct Employee E){
    printf("\nThe name of employee  is %s \n" , E.name);
    printf("The age of employee  is %d \n" , E.age);
    printf("The salary of employee   is %.2f \n" , E.salary);
}

int main(){
    struct Employee E1 = {"Sumit Satre" , 18 , 1341422.39};
    show(E1);

    struct Employee E2 ;

    printf("Info of Employye 2 : \n");
    printf("Enter the name of employee : ");
    scanf("%s" ,E2.name);
    printf("Enter the age of the employee : ");
    scanf("%d" , &E2.age);
    printf("Enter the salary of the employee : ");
    scanf("%f" , &E2.salary);
    
    show(E2);
    return 0;
}