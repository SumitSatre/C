// Program to check greatest of three numbers


#include<stdio.h>

int main(){
    int x , y , z ;
    printf("Enter the three numbers : \n");
    scanf("%d" , &x);
    scanf("%d" , &y);
    scanf("%d" , &z);
    
    if(x>y){
        if(x>z){
            printf("%d is the greatest number",x);
        }
        
        else{
            printf("%d is the greatest number",z);
        }
    }
    
    else if(y>x){
        if(y>z){
            printf("%d is the greatest number",y);
        }
        
        else{
            printf("%d is the greatest number",z);
        }
    }
    
    else{
        printf("All numbers are equal");
    }
   return 0;
}