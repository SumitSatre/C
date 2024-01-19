// Create a program to find factorial of given number.

#include <stdio.h>

int main()
{   int i =1 , n , m = 1;
    
    printf("Enter the number : \n");
    scanf("%d",&n);
    
    for(i,n,m; i<=n ; i++){
        m = m * i;
    }
    
    printf("The value of %d factorial is %d ", n , m);
 
    return 0;
}

