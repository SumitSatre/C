// program to find 1 to 100 prime numbers

#include <stdio.h>

int main(){
    int a=1 ,i ,prime ;

    for(a,i ; a<=100 ; a++){
        prime=0;
        i=2;
        while(i<a){
            if(a%i==0){
                prime=1;
                break;
            }
            i++;
        }
        if(prime==0){
            printf("%d    " , a);
        }
        
    }
    return 0;
}

