#include <stdio.h>

void strcopy(*st2 ,*st1){
    int i = 0;
    while(st2!='\0'){
    st2[i] = st1[i];
    i++;
    st1++;
    st2++;
    }
    st2[i] = '\0';
}



int main(){
    char st1[] = "Sumit is OP.";
    char st2[20];
    
    strcopy(st2 , st1);

    printf("Now the st2 is \n %s" , st2);
    return 0;
}