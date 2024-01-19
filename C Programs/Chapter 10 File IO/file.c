#include <stdio.h>

int main(){
    FILE *s;
    int a , b;

    s = fopen("sample.txt" , "r");
    fscanf(s , "%d" , &a);
    printf("%d \n" , a);

    fscanf(s , "%d" , &a);
    printf("%d \n" , a);
    
    fclose(s);
    return 0;
}