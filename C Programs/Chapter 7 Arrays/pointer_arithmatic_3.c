#include <stdio.h>

void func(int *ptr , int n){
    for(int i=0 ; i<n ; i++){
        printf("The value of element %d is %d\n" , i+1 , *(ptr+i));
    }
    ptr[3] = 25;
}

int main(){
    int marks[] = {12,13,14,15,17};
    func(marks,5);
    return 0;
}
// &marks[0] == marks