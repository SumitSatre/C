#include <stdio.h>

int main(){
    int a , i = 1;
    printf("Enter the value of a \n");
    scanf("%d",&a);
    
    do{
        printf("The value is %d\n",i);
        i++;
    
    }while(i<=a);
    return 0;
}