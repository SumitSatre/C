// &marks[0] == marks

#include <stdio.h>

int main(){
    int marks[5];
    int *ptr;
    ptr = &marks[0];

    for(int i= 0 ; i<5 ; i++){
        printf("Enter the marks of %d student : " , i + 1);
        scanf("%d" , ptr);
        ptr++;
    }

    for(int i= 0 ; i<5 ; i++){
        printf("The marks of %d student  are : %d \n" , i + 1 , marks[i]);
    }

    return 0;
}

