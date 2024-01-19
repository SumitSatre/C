#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("putc_sam.txt" , "w");

    putc('p',f);
    fclose(f);
    return 0;
}