#include <stdio.h>

int main(){
    char a[15] = "Sumit satre";
    char *ptr = a;

    for(a , ptr ; *ptr!='\0' ; ptr++){
        printf("%c" , *ptr);
    }
    return 0;
}