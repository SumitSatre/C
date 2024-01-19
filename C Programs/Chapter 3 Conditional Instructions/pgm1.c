// even or odd

#include <stdio.h>

int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d" , &a);

    if(a%2==0){
        printf("number is even");
    }
    else{
        printf("numbe is odd ");
    }
    return 0;
}

