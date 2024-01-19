#include <stdio.h>

int main(){
    int m,n;
    printf("Enter the Number of students : ");
    scanf("%d" , &m);

    printf("Enter the Number of Subjects : ");
    scanf("%d" , &n);

    int marks[m][n];

    for(int i=0 ; i<m ; i = i+1){
        for(int j=0 ; j<n ; j++){
            printf("Enter the marks of Student %d of subject %d : " , i+1 , j+1);
            scanf("%d" , &marks[i][j]); 
        }
    }

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            printf("The marks of Student %d and subject %d are %d \n" , i+1 , j+1, marks[i][j]);
        }
    }
    return 0;
}