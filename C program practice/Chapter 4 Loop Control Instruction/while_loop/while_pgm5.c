// Square numbers
// 1 4 9 16 25 36 ...........

#include <stdio.h>

int main(){
    int i=1 , a,n ;

    printf("enter the number : ");
    scanf("%d" , &n);

    while(i<=n){
        a = i*i;
        printf("%d     " ,a);
        i++;
    }
    return 0;
}
