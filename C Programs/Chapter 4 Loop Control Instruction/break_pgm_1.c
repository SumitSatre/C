// Create a program to use break statement


#include <stdio.h>

int main()
{   int x = 1;
    
    for(x;x<=10;x++){
        printf("%d\n",x);
        
        if(x==5){
            break;
        }
    }

    return 0;
}