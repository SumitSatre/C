#include <stdio.h>

int main(){
    int x = 3 ;
    int *y = &x;
    int **z = &y;
    printf("The address of x is %u \n" , y);
    
    // Addition of a number to a pointer
    y = y + 2;
    printf("The address of x is %u \n" , y);
    
    // Substraction of a number from pointer
    y = y - 3;
    printf("The address of x is %u \n" , y);

    // Substraction of a one pointer from another
  //  printf("The address of x is %u \n" , z-y );
    return 0;
}