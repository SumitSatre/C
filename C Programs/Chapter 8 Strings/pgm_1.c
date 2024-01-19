#include <stdio.h>

int main(){
    //char str[] = {'S','u','m','i','t', ' ','S','a','t','r','e','\0'};
    char str[] = "Sumit Satre";
    char *ptr = str;
    
    while(*ptr!='\0'){
        printf("%c" , *ptr);
        ptr++;
    }
    return 0;
}
