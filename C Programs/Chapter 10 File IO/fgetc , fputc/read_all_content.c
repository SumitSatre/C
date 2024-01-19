#include <stdio.h>

int main(){
    FILE *f;
    char c;

    f = fopen("sam_ple.txt" , "r");
    c = fgetc(f);

    while(c!=EOF){
        printf("%c" , c);
        c = fgetc(f);
    }

    fclose(f);
    return 0;
}