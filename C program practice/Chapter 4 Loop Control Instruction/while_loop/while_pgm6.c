// Triangular numbers
// 0 1 3 6 10 15 21 28 36 45 55  ...........

#include <stdio.h>

int main(){
    int i=-1 , a,n ,b=0 ;

    printf("enter the number : ");
    scanf("%d" , &n);

    while(i<=n){
        a = b+i+1;
        printf("%d     " ,a);
        b=a;
        i++;
    }
    return 0;
}
