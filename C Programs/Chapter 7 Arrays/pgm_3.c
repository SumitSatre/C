#include <stdio.h>

int main(){
    int a[] = {91 ,92 ,93 };
    printf("The value of a[0] are %d \n" , a[0]);
    printf("The value of a[1] are %d \n" , a[1]);
    printf("The value of a[2] are %d \n" , a[2]);

    float b[] = {91 ,92 ,93 };
    printf("The value of b[0] are %.2f \n" , b[0]);
    printf("The value of b[1] are %.2f \n" , b[1]);
    printf("The value of b[2] are %.2f \n" , b[2]);

    char c[] = {'S' ,'U' ,'M' , 'I' , 'T'};
    printf("The value of c[0] are %c \n" , c[0]);
    printf("The value of c[1] are %c \n" , c[1]);
    printf("The value of c[2] are %c \n" , c[2]);
    printf("The value of c[3] are %c \n" , c[3]);
    printf("The value of c[4] are %c \n" , c[4]);
    return 0;
}