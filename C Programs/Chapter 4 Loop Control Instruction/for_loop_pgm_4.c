// Create a program to find factorial 


#include <stdio.h>

int main()
{   int m = 1, n,i=1;
    printf("Enter the no. : \n");
    scanf("%d",&n);
    
    for(m,n ; i<=n ; i++){
        m = m * i;
    }
    
    printf("%d",m);
    
    return 0;
}