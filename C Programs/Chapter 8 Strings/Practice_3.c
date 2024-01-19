#include <stdio.h>

int strleng(char *str){
    char *ptr = str;
    int len = 0;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    return len;
}

int main(){
    char str[] = "Sumit op";
    int a = strleng(str);

    printf("The length of the string is %d" , a);
    return 0;
}