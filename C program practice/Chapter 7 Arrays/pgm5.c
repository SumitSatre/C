#include <stdio.h>

// void func(int ptr[]);

void func(int *ptr){
    for(int i=0 ; i<5 ; i++){
        printf("Enter the value element %d : " , i+1);
        scanf("%d" , &*(ptr+i));
    }

    for(int i=5 ; i>=1 ; i--){
        printf("The value element %d are %d \n" , i , *(ptr+(i-1)));
    }
}

int main(){
    int marks[10];
    func(&marks[0]);
    return 0;
}
