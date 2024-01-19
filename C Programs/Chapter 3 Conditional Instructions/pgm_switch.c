#include <stdio.h>

int main(){
    int a ;
    printf("Enter te Number : ");
    scanf("%d" , &a);

    switch(a%2==0){
        case 1 : 
        printf("The Number is even");
        break;                           

        case 0 :
        printf("The number is odd");
    }
    return 0;
}