// Create a multiplication table program for user in reversed order


#include <stdio.h>

int main()
{   int i = 10, n;
    printf("Enter the no. : ");
    scanf("%d",&n);
    
    printf("The table of %d is given ....\n" , n);
    
    for(i,n ; i>=1 ; i--){
        printf("%d X %d = %d \n",n,i,n*i);
    }
    
    return 0;
}

