/* Write a program to create an array of 10 integers and
 store multiplication table of 5 in it . */


#include <stdio.h>

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d" , &n);
    
    int array[10];

    for(int i=0; i<10 ; i++){
        array[i] = n*(i+1);
    }
    for(int i=0 ; i<10 ; i++){
        printf("The value of array[%d] is : %d \n" , i , array[i]);
    }
    return 0;
}