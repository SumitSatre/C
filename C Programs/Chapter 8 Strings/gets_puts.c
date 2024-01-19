#include <stdio.h>

int main(){
    
    char str[30];

    printf("Enter your name : ");
    gets(str); // gets used to print multi word string
    puts(str); // puts is used to print the string

    printf("Your name is %s" , str);
    return 0;
} 
// (str == &str[0]) it is same 