#include <stdio.h>

int main(){
    int a = 12;
    int *b = &a;

    printf("The value of b is %u \n" , b);
    b++;
    //b--;
    printf("The value of b is %u \n" , b);
    b = b -2;
    printf("The value of b is %u \n" , b);
    return 0;
}