#include <stdio.h>

int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d" , &a);

    if(a>0){
        printf("The Number is positive");
    }
    else if(a<0){
        printf("The Number is negative");
    }
    else{
        printf("The Number is Zero");
    }
    return 0;
}