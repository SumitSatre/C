// Find The area of a circle 


#include <stdio.h>

int main(){
    float radius;
    
    printf("Enter the radius of a Circle : ");
    scanf("%f" , &radius);
    
    float area = 3.14*radius*radius;
    
    printf("The area of a circle is %f" , area);
    return 0;
}