// Fibonacci series

#include <stdio.h>

int main(){
    int i , n ,a=0 ,b=1 ,c ;
    printf("Enter the number : ");
    scanf("%d" , &n);

    while(i<=n){
        printf("%d \n" , a);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    return 0;
}