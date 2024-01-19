#include <stdio.h>

int main(){
    int marks[3][5] , i ,j;

    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<5 ; j++){
            printf("Enter the marks of student %d of subject %d : " , i+1 , j+1);
            scanf("%d" , &marks[i][j]);
        }
    }

    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<5 ; j++){
            printf("The marks of student %d of subject %d are %d \n" , i+1 , j+1 , marks[i][j] );
        }
    }

    return 0;
}
