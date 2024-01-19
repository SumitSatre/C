// Write a program to change the value of x int ten times of it. using call by reference and function.

#include <stdio.h>
void change(int *a);
int main(){
    int x = 9;
    printf("The value of x before change is %d \n", x);
    change(&x);
    printf("The value of x after change is %d \n", x);
    return 0;
}

void change(int *a){
    *a = 10 * (*a);
}