//Write a program to check leap year .

#include <stdio.h>

int main(){
    int year;
    printf("Enter the year : ");
    scanf("%d" , &year);
    
    if(year%4==0  || year%400==0){
        printf("year %d is a leap year",year);
    }
    else {
        printf("year %d is not a leap year",year);
    }
    
    return 0;
}