#include <stdio.h>

int main(){
    float a = 12.4;
    float *b = &a; // b will store now address of a
    printf("The value of a is %f \n" ,a);
    printf("The value of *b is %f \n" , *b);
    printf("The value of &a is %u \n" , &a);
    printf("The value of b is %u \n" , b);
    printf("The value of &b is %u \n" , &b);
    printf("The value of *(&b) is %u \n " ,*(&b));
    return 0;
}
// & is a address of operator it gives addres of a variable
// * is used to get value present at given memor address
// * is also used to declare a pointer 