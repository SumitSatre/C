#include <stdio.h>

void printarray(int *x , int n){
    for(int i = 0 ; i<n ; i++ ){
        printf("The value of %d element is %d \n", i+1 , *(x +i));
    }

    printf("\n\n");
    for(int i = 0 ; i<n ; i++ ){
        printf("The value of %d element is %d \n", i+1 , x[i]);
    }
}

int main(){
    int array[] = {12,13,14,15,16,17} ;
    printarray( array , 6);
    return 0;
}
// &marks[0] == marks