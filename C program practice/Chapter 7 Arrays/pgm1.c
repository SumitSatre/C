// Write a program to store marks 5 students and print it.

#include <stdio.h>

int main(){
    int marks[5];
    printf("enter the marks : \n");
    scanf("%d%d%d%d%d" , &marks[1] , &marks[2] , &marks[3] , &marks[4] , &marks[5]);

    printf("The marks of 5 students are %d , %d , %d , %d and %d" , marks[1] , marks[2] ,
             marks[3] , marks[4] , marks[5] );
    return 0;
}