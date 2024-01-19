#include <stdio.h>

int main(){
    char *ptr = "Sumit op";
    //char  ptr[] = "Sumit OP";
    printf("%s" , ptr);
    return 0;
}

// scanf cant print after the space so use gets or puts to print