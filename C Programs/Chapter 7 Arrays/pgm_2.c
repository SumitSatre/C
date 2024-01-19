#include <stdio.h>

int main(){
    int marks[5];
    int *ptr;
    ptr = &marks[0];
    printf("The address of ptr is %u \n \n", ptr);
    ptr++;
    printf("The address of ptr is %u \n", ptr);
    printf("The address of &marks[1] is %u \n", &marks[1]);
    ptr = 12;
    printf("The address of ptr is %d \n", ptr);
    printf("The address of &marks[1] is %d \n", marks[1]);

    return 0;
}