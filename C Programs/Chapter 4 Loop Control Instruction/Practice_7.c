// Create a program to add the values of multiplication table of 8

#include <stdio.h>

int main()
{   int i =1 , n = 8 , sum = 0,k = 1;
 
    
    do{
        k = i*n;
        sum = sum + k;
        i++;
    }while(i<=10);
    
    printf("The sum is %d ", sum);
    return 0;
}

