// Create a program to add first n natural numbers using do while loop


#include <stdio.h>

int main()
{   int i =1 , n , sum = 0;
    printf("Enter the no. : ");
    scanf("%d",&n);
    
    do{
        sum = sum + i;
        i++;
    }while(i<=n);
    
    printf("The sum is %d ", sum);
    return 0;
}

