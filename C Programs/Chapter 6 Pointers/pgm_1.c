#include <stdio.h>

int main(){
    int i = 8;
    int *j;
    j = &i;
    printf("The value of i is %d \n", i);
    printf("The value of i is %d \n", *j);
    printf("The address of i is %u \n", j);
    printf("The address of i is %u \n", &i);
    printf("The address of j is %u \n", &j);
    printf("The address of j is %u \n", *(&j));
    return 0;
}
/* & is a address of operator it gives addres of a variable
 * is used to get value present at given memor address */