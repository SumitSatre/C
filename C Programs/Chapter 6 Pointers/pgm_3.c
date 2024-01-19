#include <stdio.h>

float main(){
    char a = 'S';
    char *b = &a; // b will store now address of a
    char **c = &b; // c will store address of b
    char ***d = &c; //now d will store address of c
    // This we can increase uncountablely

    printf("The value of a is %c \n" ,a);
    printf("The value of *b is %c \n" , *b);
    printf("The value of &a is %u \n" , &a);
    printf("The value of b is %u \n" , b);
    printf("The value of &b is %u \n" , &b);
    printf("The value of *(&b) is %u \n \n" ,*(&b));

    printf("The value of c is %u \n" , c);
    printf("The value of d is %u \n" , d);
    return 0;
}
// & is a address of operator it gives addres of a variable
// * is used to get value present at given memory address
// * is also used to declare a pointer 