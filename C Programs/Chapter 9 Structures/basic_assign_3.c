#include <stdio.h>
#include <string.h>

struct Employee{
    char name[20];
    int age;
    float salary;

};

int main(){
    struct Employee E1 = {"Sumit Satre" , 18 , 1341422.39};
   
    printf("\nThe name of employee 1 is %s \n" , E1.name);
    printf("The age of employee 1 is %d \n" , E1.age);
    printf("The salary of employee 1 is %.2f \n \n \n" , E1.salary);

    return 0;
}