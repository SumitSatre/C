// Create a multiplication table program for user


#include <stdio.h>

int main()
{   int i = 1, n;
    printf("Enter the no. : ");
    scanf("%d",&n);
    
    for(i,n ; i<11 ; i++){
        printf("%d X %d = %d \n",n,i,n*i);
    }
    
    return 0;
}

