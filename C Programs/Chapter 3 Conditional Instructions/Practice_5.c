//Write a program to check the character enterd by the user is lowercase or not.
// It is ascii values
// 97 - 122 : a - z
// 65 -90 : A - Z 

#include <stdio.h>

int main(){
    
    char c;
    printf("Enter the Character: ");
    scanf("%c", &c);
    
    if (c>=97 && c <= 122){
        printf("Character is lowercase");
    }
    else{
        printf("Character is uppercase");
    }
       
    return 0;
}