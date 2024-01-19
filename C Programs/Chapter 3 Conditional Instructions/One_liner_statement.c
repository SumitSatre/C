// Program to check greatest number

//One liner statement it is conditional statement
#include<stdio.h>

int main(){
    int x;
    printf("Enter the three numbers : \n");
    scanf("%d" , &x);
  
    (x>4) ? printf("x is greater than 4 ") : printf("x is not greater than 4");
    return 0;
}