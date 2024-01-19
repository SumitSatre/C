// Write a program to print first n natural numbers .

#include <stdio.h>

int main(){
    int n,i=1;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    do{
        printf("%d\t",i);
        i++;
    }while(i<=n);
    return 0;
}