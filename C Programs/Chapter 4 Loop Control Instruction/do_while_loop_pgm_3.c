// Write a program to print first n natural numbers in reverse order.

#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int i=n;
    do{
        printf("%d\t",i);
        i--;
    }while(i!=0);
    return 0;
}