// Multiplication table

#include <stdio.h>

int main(){
    int n , a=1;
    printf("Enter the number : ");
    scanf("%d" , &n);

    for(a,n ; a<11 ; a++){
        printf("%d X %d = %d \n" , n , a , n*a);
        
    }
    return 0;
}