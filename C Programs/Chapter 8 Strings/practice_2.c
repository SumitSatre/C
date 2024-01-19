/* Take the input of string character by character method and string method (%c and %s) . */


#include <stdio.h>
#include <string.h>

int main(){
    char str1[20];
    char str2[30];
    char c;

    printf("Enter the first string : ");
    scanf("%s" , &str1[0]);

    printf("Enter the second string : ");
    int i= 0;
    while(c!='\n'){
        fflush(stdin);
        scanf("%c" , &c);
        //printf("%c" , c);
        str2[i] = c;
        i++;

    }
    str2[i] = '\0';

    printf("The first string is %s \n" , str1);
    printf("The second string is %s \n" , str2);

    strcat(str1 , str2);
    printf("The total  string is %s \n" , str1);

    return 0;
}