// It is call by address

#include <stdio.h>

void swap(int *a , int *b);

int main(){
    int x =4 ,y = 5;
    printf("The value of x and y before the swap is %d and %d \n",x,y);
    swap(&x , &y);
    printf("The value of x and y after the swap is %d and %d ",x,y);
    return 0;
}

void swap(int *a , int *b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}