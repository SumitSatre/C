#include <stdio.h>

int main(){
    int marks[3][5];

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<5 ; j++){
            printf("Enter the marks of %d student in subject %d : " , i+1 , j+1);
            scanf("%d" , &marks[i][j]);
        }
    }

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<5 ; j++){
            printf("The marks of %d student in subject %d are %d \n" , i+1 , j+1 ,marks[i][j]);
        }
    }
    return 0;
}