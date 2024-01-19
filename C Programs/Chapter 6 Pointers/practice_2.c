/* write a program having a variable i . Print the address of i .
 Pass this variable to a function and print its address . Are these address same ? */ 

#include <stdio.h>
void func(int a);

int main(){
    int i = 7;
    printf("The address of i is %u \n",&i);
    func(i);
    return 0;
}

void func(int a){
    printf("The address of i in function is %u \n", &a);
}
