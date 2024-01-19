// Write program to print address of a given variable and use address to print its value.

#include <stdio.h>

int main(){
    float x = 4.5;

    printf("The value of &x is %u \n", &x);
    printf("The value of *(&x) is %f \n", *(&x));
    return 0;
}