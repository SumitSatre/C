#include <stdio.h>

int greatest();

int main(){
    greatest(4,5,6);
    return 0;
}

int greatest(int x,int y , int z){
    
    if(x>y && x>z){
        printf("%d is the greatest number",x);
    }
    
    else if(y>x && y>z){
        printf("%d is the greatest number",y);
    }
    
    else if(z>y && z>x){
        printf("%d is the greatest number",z);
    }
    
    else{
        printf("All numbers are equal");
    }
   return 0;
}