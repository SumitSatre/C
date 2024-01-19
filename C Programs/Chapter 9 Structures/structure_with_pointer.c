#include <stdio.h>
#include <string.h>

struct Employee{
    char name[20];
    int age;
    float salary;

};

int main(){
    struct Employee E1 ;
    struct Employee  *ptr;

    ptr = &E1;   
    (*ptr).age = 18;                  // (*ptr).age = 18;
    ptr->salary = 4122424.41;         // (*ptr).salary = 4122424.41; 
    strcpy(ptr->name , "Sumit OP");   //  (*ptr).strcpy(.name , "Sumit OP");
   
    printf("\nThe name of employee 1 is %s \n" , E1.name);
    printf("The age of employee 1 is %d \n" , E1.age);
    printf("The salary of employee 1 is %.2f \n \n \n" , E1.salary);

    return 0;
}