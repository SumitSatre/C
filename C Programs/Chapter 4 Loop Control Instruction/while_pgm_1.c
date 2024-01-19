
#include <stdio.h>

int main(){
    int a;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    
    while (a<11){
        printf("%d \n",a );
        a++;
    }
   
    return 0;
}