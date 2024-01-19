// CREATED A SIMPLE GAME TO ASSUME CORRECT NUMBER

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{   int number , guess , ngusses = 1;
    srand(time(0));
    number = rand()%100 + 1;
    do{
        printf("Enter the number between 1 -100 : ");
        scanf("%d" , &guess);
        
        if(guess>number){
            printf("Lower Number please!\n");
        }
        else if(guess<number){
            printf("Upper Number please!\n");
        }    
        else{
            printf("You assumed in the %d attempts\n" , ngusses);
        }
        
        ngusses++;
        
    }while(number!=guess);
    
    return 0;
}