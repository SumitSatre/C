// Writw a program to calculate the Simple Interest.

#include<stdio.h>

int main(){
    int principal = 100 , rate = 4 , year = 1;
    int SimpleInterest = (principal*rate*year) / 100;
    
    printf("The simple interest is %d" , SimpleInterest);
    return 0;
}