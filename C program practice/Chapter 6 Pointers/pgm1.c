#include <stdio.h>

int main(){
    int a = 12;
    int *b = &a;
    int **c = &b;

    printf("The value of a is %d \n" , a);
    printf("The value of b is %u \n" , b);
    printf("The value of &a is %u \n" , &a);
    printf("The value of *b is %d \n" , *b);
    printf("The value of *(&a) is %d \n" , *(&a));
    printf("The value of &b is %u \n"  , &b);

    printf("The value of **c is %d \n" , **c);
    printf("The value of *c is %u \n" , *c);
    printf("The value of c is %u \n" , c);
    printf("The value of &c is %u \n" , &c);

    return 0;
}