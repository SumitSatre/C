// Create a program to add first n natural numbers 


#include <stdio.h>

int main()
{   int i =1 , n , sum = 0;
    printf("Enter the no. : ");
    scanf("%d",&n);
    
    for(i,n,sum ; i<=n ; i++){
        sum = sum + i;
    }
    printf("The sum is %d ", sum);
    return 0;
}

