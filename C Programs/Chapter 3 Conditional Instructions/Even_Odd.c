// Program to check number is even or odd


#include<stdio.h>

int main(){
    int a;
    printf("Enter the number a : \n ");
    scanf("%d" , &a);
    
    if(a%2==0){
        printf("The number %d is even" , a);
    }
    else{
        printf("The number %d is odd" , a);
    }
   
   return 0;
}