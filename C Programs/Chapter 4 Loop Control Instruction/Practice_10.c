// Create a program to chek the number is prime or not.

#include <stdio.h>

int main()
{   int i =2 , n , prime;
    
    printf("Enter the number : \n");
    scanf("%d",&n);
    
    prime = 0;
    
    for(i,n; i<n ; i++){
        if(n%i==0){
            prime = 1;
            break;
        }
    }
        
    if(prime == 1 && n!=2){
        printf("The number %d is not a prime number " , n);
    }
    else{
        printf("The number %d is a prime number ", n);
    }
            
    
 
    return 0;
}