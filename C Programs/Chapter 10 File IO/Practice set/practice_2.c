#include <stdio.h>

int main(){
    FILE *f;
    int n = 10;
    f = fopen("multi_table.txt" , "w");

    for(int i =1 ; i<11 ; i++){
        fprintf(f , "%d X %d = %d \n" , n , i , n*i);
    }
    fclose(f);
    return 0;
}