// Write a C program to calculate area of a rectangle

#include <stdio.h>

int main()
{
    int length , breath ;
    printf("Enter the length of rectangle : \n");
    scanf("%d", &length);
    
    printf("Enter the breath of rectangle : \n");
    scanf("%d", &breath);
    
    printf("The area of the rectangle is %d .sq unit^2" , length*breath);
    
    return 0;
    
}