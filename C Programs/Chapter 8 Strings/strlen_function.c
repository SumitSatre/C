#include <stdio.h>
#include <string.h>

int main(){
    char *s = "Sumit OP";
    //char s[] = "Sumit op";

    int a = strlen(s);

    printf("%s \n" , s);
    printf("The length of string is %d " , a);
    return 0;
}