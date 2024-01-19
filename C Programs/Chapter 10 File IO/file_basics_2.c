#include <stdio.h>

int main(){
    FILE *ptr;
    int a;
    int a2;

    ptr = fopen("sample.txt" , "r"); 
    fscanf(ptr ,"%d" , &a);
    fscanf(ptr ,"%d" , &a2);
    fclose(ptr);

    printf("The First value is %d \n" , a);
    printf("The Second value is %d" , a2);
    return 0;
}