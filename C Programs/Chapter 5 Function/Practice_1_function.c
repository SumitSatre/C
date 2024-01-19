// Write a program using function to find average of three numbers
#include <stdio.h>

float average(int a, int b ,int c);

float main()
{
    float x;
    
    x = average(12,45,13);
    printf("The average of the three numbers is %f" , x);
    
    return 0;
}

float average(int a, int b ,int c){
    float result;
    result = (a + b + c) / 3; 
    return result;
}
