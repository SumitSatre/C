#include <stdio.h>

int main(){
    char a[89];
    printf("Enter the string : ");
    gets(a);

    printf("%s " , a);
    return 0;
}
// scanf cant print after the space so use gets or puts to print