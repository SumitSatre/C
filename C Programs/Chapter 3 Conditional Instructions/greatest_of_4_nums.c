#include <stdio.h>

int max(int a , int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int greatest(int x ,int y ,int z ,int w){
    int p , q , r;
    p = max(x,y);
    q = max(z,w);
    r = max(p,q);
    return r;
}

int main(){
    printf("The greatest num is : %d" , greatest(5,9,8,6));
    return 0;
}