// Write a program using function to convert temperature from celcius to fahrenheit.
#include <stdio.h>

float temperature(float x);

float main()
{
    float temp;
    printf("Enter the temperature in celcius : \n");
    scanf("%f" , &temp);
    
    printf("The temperature in fahrenheit is %f " , temperature(temp));
    
    return 0;
}

float temperature(float x){
    float fah;
    fah = 1.8*x + 32;
    return fah;
    
}