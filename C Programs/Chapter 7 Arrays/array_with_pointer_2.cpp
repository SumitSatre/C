#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int marks[4];
    int *ptr = marks;

    for(int i=0 ; i<4 ; i++){
        printf("Enter the marks of %d student : " , i + 1);
        scanf("%d" , ptr);
        ptr++; 
    }
    for(int i=0 ; i<4 ; i++){
        printf("The marks of %d student are : %d \n" , i + 1 , marks[i]);
    }

    return 0;
}

// &marks[0] == marks