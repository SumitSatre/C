#include <stdio.h>

int main()
{
    int x;
    printf("Enter the three numbers : \n");
    scanf("%d" , &x);
    
    switch(x){
        case 1:
            printf("Your rating is 1\n");
            break;
        case 2:
            printf("Your rating is 2\n");
            break;
        case 3:
            printf("Your rating is 3\n");
            break;
        case 4:
            printf("Your rating is 4\n");
            break;
        case 5:
            printf("Your rating is 5\n");
            break;
        case 6:
            printf("Your rating is 6\n");
            break;
            
        default:
            printf("Your rating is invalid");
            break;
        
    }
    
    return 0;
}
