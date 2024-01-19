// call by value
#include <stdio.h>

int sum(int x , int y);

int main(){
    int a;
    a = sum(4,6);
    printf("The sum is %d \n" , a);
    return 0;
}

int sum(int x , int y){
    int result;
    result = x + y;
    return result;
}

