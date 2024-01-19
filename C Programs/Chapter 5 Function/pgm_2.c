#include <stdio.h>

int greatest();

int main(){
    greatest();
    greatest();
    return 0;
}

int greatest(){
    int x , y , z ;
    printf("\nEnter the three numbers : \n");
    scanf("%d%d%d" , &x ,&y ,&z);

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