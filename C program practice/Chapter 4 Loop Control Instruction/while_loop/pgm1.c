// Add First n natural number

#include <stdio.h>

void main(){
    int a= 1 ,sum = 0 ,n;
    printf("Enter the number : ");
    scanf("%d" , &n);

    while(a<=n){
        sum = sum + a ;
        a++;
    }
   
   printf("The sum of first %d nubers is %d" , n, sum);
}