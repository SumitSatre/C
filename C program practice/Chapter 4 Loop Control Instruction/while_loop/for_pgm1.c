// factorial
// factorial

#include <stdio.h>

int main(){
    int a = 1 ,n , mul = 1;
    printf("Enter the number : ");
    scanf("%d" , &n);

    for(a,n,mul ; a<=n ; a++){
        mul = mul * a;
    }

    printf("The factoril of %d is %d" , n , mul);
    return 0;
}