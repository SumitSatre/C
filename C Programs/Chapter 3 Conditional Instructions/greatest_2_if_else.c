// Program to check greatest of three numbers


#include<stdio.h>

int main(){
    int x , y , z ;
    printf("Enter the three numbers : \n");
    scanf("%d" , &x);
    scanf("%d" , &y);
    scanf("%d" , &z);
    
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