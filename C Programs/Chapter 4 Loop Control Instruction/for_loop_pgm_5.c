#include <stdio.h>

void main(){
    int m , n ,sum = 0;
    printf("Enter the starting value : ");
    scanf("%d" , &m);
    printf("Enter the ending value : ");
    scanf("%d" , &n);

    for(m,n,sum ; m<=n ; m++){
        sum = sum + m;
    }
    printf("The sum of m to n is %d ",sum);
}