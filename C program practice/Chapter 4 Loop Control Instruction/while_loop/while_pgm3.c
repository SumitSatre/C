// factorial

#include <stdio.h>

int main(){
    int a = 1 ,n , mul = 1;
    printf("Enter the number : ");
    scanf("%d" , &n);

    while(a<=n){
        mul = mul * a;
        a++;
    }

    printf("The factoril of %d is %d" , n , mul);
    return 0;
}