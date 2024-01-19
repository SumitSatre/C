#include <stdio.h>

int main()
{
    int x;
    printf("Enter the three numbers : \n");
    scanf("%d" , &x);
    
    switch(x){
        case 1:
            printf("Your rating is 1\n");
        case 2:
            printf("Your rating is 2\n");
        case 3:
            printf("Your rating is 3\n");
        case 4:
            printf("Your rating is 4\n");
        case 5:
            printf("Your rating is 5\n");
        case 6:
            printf("Your rating is 6\n");
            
        default:
            printf("Your rating is %d",x);
        
    }
    
    return 0;
}
