#include <stdio.h>

void sum_And_avg(int a , int b , int *sum , float *avg);

int main(){
    int x ,y , sum ;
    float avg;
    printf("Enter the value of x : ");
    scanf("%d" , &x);
    printf("Enter the value of y : ");
    scanf("%d" , &y);

    sum_And_avg(x , y , &sum , &avg);
    printf("The sum of %d and %d is %d \n", x ,y , sum);
    printf("The sum of %d and %d is %.2f \n",x ,y , avg);


    return 0;
}

void sum_And_avg(int a , int b , int *sum , float *avg){
    *sum = a + b;
    *avg = (float)*sum / 2;
}