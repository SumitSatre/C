// Write a program using function to find average of three numbers

#include <stdio.h>

float avg(int a , int b , int c);

int main(){
    int x;
    x= avg(1,2,3);

    printf("the average is %d" , x);
    return 0;
}

float avg(int a , int b , int c){
    float result;
    result = (a+b+c)/3;
    return result;
}