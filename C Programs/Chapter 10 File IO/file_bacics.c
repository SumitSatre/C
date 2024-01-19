#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("sample.txt" , "r"); // --> This is used to read in the file  
    //ptr = fopen("sample.txt" , "w"); // --> This is used to write in the file  
    return 0;
}