// Explain the step by step evaluation of 3 * x / y - z +R

// 3 * 2 / 3 - 3 + 1
// 6 / 3 - 3 + 1
// 2 - 3 + 1
//3-3
//0

#include<stdio.h>

int main(){
    float x = 2 , y = 3 , z = 3 , R = 2;
    
    printf("The value of 3*x/y - z +R is %f" , 3 * x / y - z + R);
    
    return 0;
}