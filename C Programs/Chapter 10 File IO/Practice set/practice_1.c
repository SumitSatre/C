// Write a program to read three integers 

#include <stdio.h>

int main(){
    FILE *f;
    int a ,b ,c ;
    f = fopen("prac_sam_1.txt" , "r");

    fscanf(f , "%d " , &a);
    fscanf(f , "%d " , &b);
    fscanf(f , "%d " , &c);

    printf("%d \n" , a);
    printf("%d \n" , b);
    printf("%d \n" , c);

    fclose(f);
    return 0;
}