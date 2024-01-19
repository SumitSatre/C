#include <stdio.h>

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = array ;
    printf("*ptr = %d \n" ,*ptr);
    printf("ptr = %u \n" ,ptr);

    ptr = ptr + 2;
    printf("*ptr = %d \n" ,*ptr);
    printf("ptr = %u \n" ,ptr);

    return 0;
}