// for loop simple program print first n natural numbers 

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int i=1,n;
    printf("enter the number upto you want to print : ");
    scanf("%d",&n);
    
    for(i,n;i<=n;i++){
        printf("%d\n",i);
    }
    cout<<i<<endl;  
    return 0;
}
