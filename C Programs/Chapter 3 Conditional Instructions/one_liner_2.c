#include <stdio.h>

int main(){
    int a ;
    printf("Enter the value of a : ");
    scanf("%d" , &a);

    (a>10) ? printf("a is greater than 10") : printf("a is smaller than 10");
    return 0;
}