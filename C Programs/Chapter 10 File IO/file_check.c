// Check whether a file is present in the data or not 

#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("Sumit.txt" ,"r");
    if(ptr == NULL){
        printf("There is no such file");
    }
    else{
        printf("This file is present in database");
    }
    fclose(ptr);
    return 0;
}