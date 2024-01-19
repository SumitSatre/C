#include <stdio.h>

int maxEle(int arr [], int size){
	
	if(size == 0)
		return -1;
	if(size == 1)
		return arr[0];
    else{
        	int max = arr[0];
	int i;
	for(i=1; i<size;i++){
	
		if(arr[i]>max)
			max = arr[i];	
	}

    }


	//return max;

}

int main (){
int arr [] = {9,2,7,4,5};
int size = 5;


printf("Max element : %d", maxEle(arr, size));

}