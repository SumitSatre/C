#include <stdio.h>

int main(){
    FILE *ptr;
    int a = 18;
    ptr = fopen("su_mit.txt" , "w");
    fprintf(ptr , "Sumit is most talente person on the earth . His age is %d " ,a);
    fclose( ptr); 
    return 0;
}