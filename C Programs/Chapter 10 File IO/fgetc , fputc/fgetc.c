#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("sam_ple.txt" , "r");
    printf("The first character of file is %c \n" , fgetc(f));
    printf("The first character of file is %c \n" , fgetc(f));
    printf("The first character of file is %c \n" , fgetc(f));
    printf("The first character of file is %c \n" , fgetc(f));
    printf("The first character of file is %c \n" , fgetc(f));
    printf("The first character of file is %c \n" , fgetc(f));
    printf("The first character of file is %c \n \n" , fgetc(f));

    fclose(f);
    return 0;
}