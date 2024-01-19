// Create a program to chek the number is prime or not.

#include <stdio.h>

int main(){
    int a =2 , n , prime = 0;
    printf("Enter the number : ");
    scanf("%d" , &n);

    for(a,n ; a<n ; a++){
        if(n%a==0){
            prime = 1;
            break;
        }
    }

    if(prime == 1){
        printf("The number is NOT prime number");
    }
    else{
        printf("The number is prime number");
    }
    return 0;
}