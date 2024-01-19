// Write a program to calculate sum of m to n numbers

#include <stdio.h>

int main(){
    int m,n , s = 0;
    printf("Enter the value of m : ");
    scanf("%d",&m);
    printf("Enter the value of n : ");
    scanf("%d",&n);

    while(m<=n){
            s = s +m;
            m++;
    }
    printf("the sum of m to n numbers is %d" , s);

    return 0;
}