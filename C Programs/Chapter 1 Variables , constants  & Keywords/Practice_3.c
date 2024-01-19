// Convet the temperature from celsius to fahrenheit

#include<stdio.h>

int main(){
    int celcius;
    printf("Enter the temperature in celcius \n");
    scanf("%d" , &celcius);
    
    printf("the temperature in fahrenheit is %f" , celcius*1.8 + 32);
    
    return 0;
}