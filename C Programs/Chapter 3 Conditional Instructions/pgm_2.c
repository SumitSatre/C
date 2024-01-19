// Program to test given number is positive , negative ,zero.

#include <stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if(num>0){
        printf("%d is positive" , num);
    }
    else if(num<0){
        printf("%d is negative" , num);
    }
    else{
        printf("Number is zero" , num);
    }
    return 0;
}