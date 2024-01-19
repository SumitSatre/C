 // Create a two dimentional vector

#include <stdio.h>

struct vector{
    int x;
    int y;
};

void sumvector(struct vector v1 ,struct vector v2){
    struct vector result;
    result.x = v1.x + v2.x ;
    result.y = v1.y + v2.y;

    printf("The result of x term is %d \n" , result.x);
    printf("The result of y term is %d \n" , result.y);
}

int main(){
    struct vector v1 ,v2;
    v1.x =12;
    v1.y =23;
    printf("The x dim is %d and y dim is %d \n" ,v1.x , v1.y);

    v2.x =56;
    v2.y =93;
    printf("The x dim is %d and y dim is %d \n \n" ,v2.x , v2.y);

    sumvector(v1,v2);

    return 0;
}