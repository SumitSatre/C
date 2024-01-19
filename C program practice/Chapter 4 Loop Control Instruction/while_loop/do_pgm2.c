// Multiplication table

#include <stdio.h>

int main(){
    int n , a=1;
    printf("Enter the number : ");
    scanf("%d" , &n);

    do{
        printf("%d X %d = %d \n" , n , a , n*a);
        a++;
    }while(a<11);
    return 0;
}