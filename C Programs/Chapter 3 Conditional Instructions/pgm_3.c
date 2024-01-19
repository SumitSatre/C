// Write a program to calculate roots of quadratic equation

#include <stdio.h>
#include <math.h>

int main(){
    int a ,b , c ;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("Enter the value of c : ");
    scanf("%d", &c);

    int D = (b*b)- (4*a*c) , deno = 2*a , root1 , root2;

    if(D>0){
        printf("REAL ROOTS\n");
        root1 = (-b+pow(D,0.5)) / deno;
        root2 = (-b-pow(D,0.5)) / deno;
        printf("Root1 is %d \nRoot2 is %d" , root1 , root2);
    }
    else if(D==0){
        printf("EQUAL ROOTS\n");
        root1 = -b /deno;
        printf("Root 1 and Root 2 is %d" , root1);
    }
    else{
        printf("IMAGINARY ROOTS");
    }
    return 0;
}