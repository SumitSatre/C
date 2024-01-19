#include <stdio.h>

int main(){
    char a[20];
    printf("Enter the string : ");
    scanf("%s" , a);

    printf("%s " , a);
    return 0;
}
// scanf cant print after the space so use gets or puts to print